/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : sync.cpp
* Description   :
* Version       : v1.0
* Create Time   : 2020/10/22
* Author   		: meepo
* Modify history:
*******************************************************************************
* Modify Time   Modify person  Modification
* ------------------------------------------------------------------------------
*
*******************************************************************************/

/************************** Include *******************************************/

#include "radar_track_predict_pub.h"
#include "fusion_predict_pub.h"
#include "predict_pub.h"
#include "predict_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        Sync_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_Init_V(void)
{
	Predict_RadarTrackPredict_Init_V();
	Predict_FusionPredict_Init_V();
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Sync_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_DeInit_V(void)
{
	Predict_RadarTrackPredict_DeInit_V();
	Predict_FusionPredict_DeInit_V();

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Sync_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_Run_V(const CanRadarObjList* pRadarInfo, const VisionObjList* pVisInfo, sint64 timeDiff)
{
	if (NULL == pRadarInfo || NULL == pVisInfo)
	{
		ZONE_ERROR("SYNC", "Radar or Vision Info Parameters Invalid!\r\n");
		return ZONE_RETURN_ERR;
	}
	Predict_RadarTrackPredict_Run_V(pRadarInfo);
	Predict_FusionPredict_Run_V(timeDiff);
	
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Sync_ObjVelocityPrediction
* @brief
* @param[in]   pVelocity: object absolute velocity
*			   hostYawRate: host vehicle yaw rate [rad]
*			   fTimeDiff: how long need to be predicted
* @param[out]  none
* @return      objVelocity: predicted object velocity
* @see         none
* @note        none
******************************************************************************/
 Velocity Sync_ObjVelocityPrediction(const Velocity* pVelocity, const float32 hostYawRate, const float32 fTimeDiff)
{
	float32 f_cos, f_sin, hostYaw;
	Velocity objVelocity;
	/*recently const speed module is used in movement prediction, we just need to rotate the velocity vector based on the hero yaw-rate*/
	hostYaw = hostYawRate * fTimeDiff;
	f_cos	= cos(hostYaw);
	f_sin	= sin(hostYaw);
	objVelocity.longVel		= pVelocity->longVel * f_cos + pVelocity->lateralVel * f_sin;
	objVelocity.lateralVel	= pVelocity->lateralVel * f_cos - pVelocity->longVel * f_sin;

	return objVelocity;
}

/*******************************************************************************
* @name        Sync_ObjCoordinatePrediction
* @brief
* @param[in]   pCoordinate: pre predicted object position
*			   pObjAbsVel: object absolute velocity
*			   pHostMotion: host vehicle ego motion
*			   fTimeDiff: how long need to be predicted
* @param[out]  none
* @return      objVelocity: predicted object velocity
* @see         none
* @note        none
******************************************************************************/

 Coordinate Sync_ObjCoordinatePrediction(const Coordinate* pCoordinate, const Velocity* pObjAbsVel, const EgoParam* pHostMotion, float32 fTimeDiff)
{
	float32		f_cos				= 0.0;
	float32		f_sin				= 0.0;;
	Coordinate	objTmpCoordinate	= { 0.0 };
	Coordinate	objCoordinate		= { 0.0 };
	float32		hostRotationAngle	= 0.0;
	float32		hostDeltaLong		= 0.0;
	float32		hostDeltaLat		= 0.0;

	/* calculate the vehicle coordinate transition value*/
	hostRotationAngle	= pHostMotion->EgoYawRateVal * fTimeDiff; // predict host vehicle rotation angle
	hostDeltaLong		= pHostMotion->EgoSpeedVal * fTimeDiff;
	//hostDeltaLat		= 0.5F * pHostMotion->EgoYawRateVal * pHostMotion->EgoSpeedVal * (fTimeDiff * fTimeDiff); 
	hostDeltaLat = 0.0F; // 2020-12-18 Lucien change it as tempoary souliton.

	f_cos = cos(hostRotationAngle);
	f_sin = sin(hostRotationAngle);
	/*predict the object coordinate based on the vehicle transition and rotation*/
	objTmpCoordinate.longitudinal	= pCoordinate->longitudinal * f_cos + pCoordinate->lateral * f_sin - hostDeltaLong;
	objTmpCoordinate.lateral		= pCoordinate->lateral * f_cos - pCoordinate->longitudinal * f_sin - hostDeltaLat;
	/*Predict object coordinate locate in prePrediction vehicle coordinate system*/
	objCoordinate.longitudinal		= objTmpCoordinate.longitudinal + pObjAbsVel->longVel * fTimeDiff;
	objCoordinate.lateral			= objTmpCoordinate.lateral + pObjAbsVel->lateralVel * fTimeDiff;
	//printf("long: %f; tmpLong: %f; longVel: %f; Time: %f\n", objCoordinate.longitudinal, objTmpCoordinate.longitudinal, pObjAbsVel->longVel, fTimeDiff);
	return objCoordinate;
}