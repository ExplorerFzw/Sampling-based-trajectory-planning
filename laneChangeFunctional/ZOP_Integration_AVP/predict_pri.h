/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : sync_pri.h
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

#ifndef __H_SYNC_PRI__
#define __H_SYNC_PRI__

/************************** Include *******************************************/

#include "fusion_define.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

//#ifdef SYNC
//#define EXTERN
//#else
//#define EXTERN extern
//#endif

typedef struct sCoordinate_t
{
	float32 longitudinal;
	float32 lateral;
}Coordinate;

typedef struct sVelocity_t
{
	float32 longVel;
	float32 lateralVel;
}Velocity;

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

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

Velocity Sync_ObjVelocityPrediction(const Velocity* pVelocity, const float32 hostYawRate, const float32 fTimeDiff);

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

Coordinate Sync_ObjCoordinatePrediction(const Coordinate* pCoordinate, const Velocity* pObjAbsVel, const EgoParam* pHostMotion, float32 fTimeDiff);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_SYNC_PRI__ */
