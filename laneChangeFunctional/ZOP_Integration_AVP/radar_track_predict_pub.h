/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : radar_track_predict_pub.h
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

#ifndef __H_RADAR_TRACK_PREDICT_PUB__
#define __H_RADAR_TRACK_PREDICT_PUB__

/************************** Include *******************************************/

#include "fusion_define.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

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

int32_t Predict_RadarTrackPredict_Init_V(void);

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

int32_t Predict_RadarTrackPredict_DeInit_V(void);

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

int32_t Predict_RadarTrackPredict_Run_V(const CanRadarObjList* pRadarInfo);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_RADAR_TRACK_PREDICT_PUB__ */
