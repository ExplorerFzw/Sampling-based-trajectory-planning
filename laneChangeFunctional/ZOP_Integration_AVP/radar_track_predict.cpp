/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : radar_track_predict.cpp
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
#include "radar_track_predict_pri.h"
#include "predict_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        Sync_RadarTrackPredict_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_RadarTrackPredict_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Sync_RadarTrackPredict_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_RadarTrackPredict_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Sync_RadarTrackPredict_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_RadarTrackPredict_Run_V(const CanRadarObjList* pRadarInfo)
{
	ZONE_INFO("running to: %s\r\n", __FUNCTION__);
	Coordinate					radarObjCoordinate;
	Velocity					radarObjVelocity;
	Coordinate					predictedCoordinate;	// radar object coordinate after prediction
	Velocity					predictedVelocity;		// radar object velocity coordinate after prediction
	FusionSystemInternalInfo*	pFusIntInfo = &gFusionIntInfo;

	/*calculate the time interval*/
	//sint64 timeDiff		= pFusIntInfo->visionTiemstamp - pFusIntInfo->radarTimestamp;
	//modified by meepo
	/*recently, float32 is used here, timestamp overflow is not consider*/
	float32 fTimeDiff	= 0.0; // translate us to s; fTimeDiff: unit [s]

	/*traversal radar object array, despite the valid object count*/
	for (RadarTrackDetailMap::iterator iterRadar = pFusIntInfo->radarIntDetail.begin(); iterRadar != pFusIntInfo->radarIntDetail.end(); ++iterRadar)
	{
		RadarTrackDetail& refRadar	= iterRadar->second;
		radarObjVelocity.longVel	= refRadar.objXVelAbs;
		radarObjVelocity.lateralVel = refRadar.objYVelAbs;

		/*radar object velocity prediction*/
		predictedVelocity	= Sync_ObjVelocityPrediction(&radarObjVelocity, pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal, fTimeDiff);
		refRadar.objXVelAbs = predictedVelocity.longVel;
		refRadar.objYVelAbs = predictedVelocity.lateralVel;

		if(RADARSTATUS_STATIONARY == refRadar.objMotionPattern)
		{
			if (1.0F < fabs(refRadar.objYVelAbs))
			{
				refRadar.objYVelAbs = refRadar.objYVelAbs > FLOAT_ZERO ? 1.0F : -1.0F;
			}
		}

		radarObjCoordinate.longitudinal = refRadar.objXPos;
		radarObjCoordinate.lateral		= refRadar.objYPos;

		/*radar object coordinate prediction*/
		predictedCoordinate = Sync_ObjCoordinatePrediction(&radarObjCoordinate, &predictedVelocity, &(pFusIntInfo->egoSpeedAndYawrate), fTimeDiff);
		refRadar.objXPos	= predictedCoordinate.longitudinal;
		refRadar.objYPos	= predictedCoordinate.lateral;
		refRadar.objTTC		= (-0.1F > refRadar.objXVelRel) ? (refRadar.objXPos / fabs(refRadar.objXVelRel)) : MAX_OBJ_TTC;
		refRadar.objTTC		= (refRadar.objTTC > MAX_OBJ_TTC) ? MAX_OBJ_TTC : refRadar.objTTC;
	}
	return ZONE_RETURN_OK;
}