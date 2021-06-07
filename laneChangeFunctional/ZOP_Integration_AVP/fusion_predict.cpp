/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_predict.cpp
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

#include "fusion_predict_pub.h"
#include "fusion_predict_pri.h"
#include "predict_pri.h"
#include "logger.h"
#include <cmath>


/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        Sync_FusionPredict_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_FusionPredict_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Sync_FusionPredict_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_FusionPredict_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Sync_FusionPredict_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Predict_FusionPredict_Run_V(sint64 timeDiff)
{
	ZONE_INFO("running to: %s\r\n", __FUNCTION__);
	Coordinate					trackObjCoordinate;
	Velocity					trackObjVelocity;
	Coordinate					predictedCoodinate;
	Velocity					predictedVelocity;
	FusionSystemInternalInfo*	pFusIntInfo = &gFusionIntInfo;

	/*recently, sint32 is used here, timestamp overflow is not consider*/
	//sint64 timeDiff		= pFusIntInfo->visionTiemstamp - pFusIntInfo->timeStamp;
	//sint64 timeDiff = 55000;
	/*recently, float32 is used here, timestamp overflow is not consider*/
	float32 fTimeDiff	= timeDiff / FUSION_US_TO_S; // translate us to s; fTimeDiff: unit [s]

	for (FusionObjInternalStateMap::iterator iterFusion = pFusIntInfo->fusObjIntState.begin(); iterFusion != pFusIntInfo->fusObjIntState.end(); ++iterFusion)
	{
		FusionObjInternalState& fusObjIntState = iterFusion->second;

		float32 hostYaw		= pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal * fTimeDiff;
		float32 f_cos		= cos(hostYaw);
		float32 f_sin		= sin(hostYaw);
		float32 longAcc		= fusObjIntState.longAbsoluteAcceleration;
		float32 lateralAcc	= fusObjIntState.latAbsoluteAcceleration;// + pHostMotion->yawrate.val * pHostMotion->speed.val

		fusObjIntState.longAbsoluteAcceleration = longAcc * f_cos + lateralAcc * f_sin;
		fusObjIntState.latAbsoluteAcceleration = lateralAcc * f_cos - longAcc * f_sin;

		/*internal track velocity prediction*/
		trackObjVelocity.longVel		= fusObjIntState.longAbsoluteVel;
		trackObjVelocity.lateralVel		= fusObjIntState.latAbsoluteVel;
		predictedVelocity				= Sync_ObjVelocityPrediction(&trackObjVelocity, pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal, fTimeDiff);
		/*internal track coordinate prediction*/
		trackObjCoordinate.longitudinal = fusObjIntState.longPosn;
		trackObjCoordinate.lateral		= fusObjIntState.latPosn;
		predictedCoodinate				= Sync_ObjCoordinatePrediction(&trackObjCoordinate, &predictedVelocity, &(pFusIntInfo->egoSpeedAndYawrate), fTimeDiff);
		predictedVelocity.longVel		= predictedVelocity.longVel + fusObjIntState.longAbsoluteAcceleration * fTimeDiff;
		predictedVelocity.lateralVel	= predictedVelocity.lateralVel + fusObjIntState.latAbsoluteAcceleration * fTimeDiff;
		fusObjIntState.longAbsoluteVel	= predictedVelocity.longVel;
		fusObjIntState.latAbsoluteVel	= predictedVelocity.lateralVel;

		//Record the predicted value.
		fusObjIntState.predLongPosn		= predictedCoodinate.longitudinal + 0.5f * fusObjIntState.longAbsoluteAcceleration * fTimeDiff * fTimeDiff;
		fusObjIntState.predLatPosn		= predictedCoodinate.lateral + 0.5f * fusObjIntState.latAbsoluteAcceleration * fTimeDiff * fTimeDiff;
		fusObjIntState.predVx			= predictedVelocity.longVel;
		fusObjIntState.predVy			= predictedVelocity.lateralVel;
		fusObjIntState.predSpeed		= sqrt((predictedVelocity.longVel * predictedVelocity.longVel) + (predictedVelocity.lateralVel * predictedVelocity.lateralVel));
		fusObjIntState.predHeadingAngle = atan2f(predictedVelocity.lateralVel, predictedVelocity.longVel);
		fusObjIntState.predAcceleration = fusObjIntState.acceleration;

		fusObjIntState.longPosn			= fusObjIntState.predLongPosn;
		fusObjIntState.latPosn			= fusObjIntState.predLatPosn;
	}

	/*update fusion timestamp*/
	pFusIntInfo->timeStampPrevious		= pFusIntInfo->timeStamp;
	pFusIntInfo->timeStamp				= pFusIntInfo->visionTiemstamp;

	return ZONE_RETURN_OK;
}