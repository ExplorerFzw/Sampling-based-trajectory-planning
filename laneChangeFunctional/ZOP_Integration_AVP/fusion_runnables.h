/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_runnables.h
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

#ifndef __H_FUSION_RUNNABLES__
#define __H_FUSION_RUNNABLES__

/************************** Include *******************************************/

#include "p_radar_object.h"
#include "p_vehicle_data.h"
#include "p_vision_object.h"
#include "p_vision_lane.h"
#include "p_fusion_output.h"
#include "p_vision_roadedge.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

/*******************************************************************************
* @name        FusionAlg_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionAlg_Init_V();

/*******************************************************************************
* @name        FusionAlg_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionAlg_DeInit_V(void);

/*******************************************************************************
* @name        FusionAlg_Run_V
* @brief
* @param[in]   pHostMotion: the vehicle data (yawRate and speed) of the current time
			   pRadarInfo: the radar data
			   pVisObj: the output of OD
			   pVisLane: the output of LD
* @param[out]  pFusOutInfo: the output of fusion
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionAlg_Run_V(const VehicleData      *pHostMotion,
						const CanRadarObjList  *pRadarInfo,
						const CanRadarObjList  *pFLRadarInfo,
						const CanRadarObjList  *pFRRadarInfo,
						const CanRadarObjList  *pRLRadarInfo,
						const CanRadarObjList  *pRRRadarInfo,
						const VisionObjList    *pVisObj,
						const EyeVisionLaneMark   *pVisLane,
	                    const VisionLaneRoadedge	*pVisLaneRoadedge,
						const uint16_t				errorFlag,
	                    FusionOutputList       *pFusionoutlist);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_FUSION_UPDATE_PUB__ */
