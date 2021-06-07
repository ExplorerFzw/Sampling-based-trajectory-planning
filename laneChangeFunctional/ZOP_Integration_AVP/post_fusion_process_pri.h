/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : post_fusion_process_pri.h
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

#ifndef __H_POST_FUSION_PROCESS_PRI__
#define __H_POST_FUSION_PROCESS_PRI__

/************************** Include *******************************************/

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

// Object moving faster than this will be deemed as moving
//static const float32 kVelMotionFsThreshold	= 1.0F;
//static const float32 kVelMotionTsThreshold	= -1.0F;

static const float32 MotionDrivingVehFsThr	= 0.8F;
static const float32 MotionDrivingVehTsThr	= -0.8F;
static const float32 MotionStopVehFsThr		= 0.4F;
static const float32 MotionStopVehTsThr		= -0.4F;
// object will change its motion pattern between stationary an moving if the Vx consecutively match the threshold more than kMotionPatternChangeCunt times.
static const uint8 kMotionPatternChangeCunt = 3U;
// Object coasting this long will be killed
static const float32 kMaxCoastedTime		= 1.0F; //[s]0.5

const float32 VISION_LONGVARTHRES	= 2.5F;
const float32 VISION_LATVARTHRES	= 2.5F;
const float32 VISION_VXVARTHRES		= 2.5F;
const float32 VISION_VYVARTHRES		= 1.5F;

/************************** External Function Decleration *********************/

/*******************************************************************************
* @name        PostFusionProcess_Bookkeeping
* @brief	   Bookkeeping, Update track status : updated, coasted, etc.
*			   and Update track motion status : static, moving, stopped, etc
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_Bookkeeping();

/*******************************************************************************
* @name        PostFusionProcess_Bookkeeping
* @brief	   compute the fusion track confidence
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_Confidence();

/*******************************************************************************
* @name        PostFusionProcess_ComputePositionConfidence
* @brief	   compute the fusion track's position confidence
* @param[in]   fusIntInfo: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputePositionConfidence(FusionObjInternalState& fusIntInfo);

/*******************************************************************************
* @name        PostFusionProcess_ComputeCMBBConfidence
* @brief	   check the smoothness for longitudinal position , lateral position,speed,
*			   heading angle,acceleration
* @param[in]   fus_obj: fusion internal info
*              visIntDetail: vision internal info
*              radarIntDetail: radar internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputeCMBBConfidence(FusionObjInternalState& fus_obj, VisTrackDetailMap& visIntDetail, RadarTrackDetailMap& radarIntDetail);

/*******************************************************************************
* @name        PostFusionProcess_ComputeFCWConfidence
* @brief	   compute the fusion track's fcw confidence
* @param[in]   fus_obj: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputeFCWConfidence(FusionObjInternalState& fus_obj);

/*******************************************************************************
* @name        PostFusionProcess_ComputeTJAConfidence
* @brief	   compute the fusion track's tja confidence
* @param[in]   fus_obj: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputeTJAConfidence(FusionObjInternalState& fus_obj);

/*******************************************************************************
* @name        PostFusionProcess_CheckTrackSmoothness
* @brief	   check the smoothness for longitudinal position , lateral position,speed,
*			   heading angle,acceleration
* @param[in]   fus_obj: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_CheckTrackSmoothness(FusionObjInternalState& fus_obj);

/*******************************************************************************
* @name        PostFusionProcess_VisObjReliaByVar
* @brief	   check the reliability of vision object by its variance
* @param[in]   refVis: vision internal info
* @param[out]  none
* @return      0: low, 1: high
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_VisObjReliaByVar(VisTrackDetail& refVis);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_POST_FUSION_PROCESS_PRI__ */
