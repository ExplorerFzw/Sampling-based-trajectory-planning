/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : output_adapter_pub.h
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

#ifndef __H_OUTPUT_ADAPTER_PUB__
#define __H_OUTPUT_ADAPTER_PUB__

/************************** Include *******************************************/

#include "p_vision_lane.h"
#include "p_vision_roadedge.h"
#include "p_fusion_output.h"
#include "p_vehicle_data.h"


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

/*******************************************************************************
* @name        OutPutAdapter_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t OutPutAdapter_Init_V(void);

/*******************************************************************************
* @name        OutPutAdapter_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t OutPutAdapter_DeInit_V(void);

/*******************************************************************************
* @name        OutPutAdapter_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/


int32_t OutPutAdapter_Run_V(const VehicleData* pHostMotion, const EyeVisionLaneMark* pVisionLane, const VisionLaneRoadedge* pVisionLaneRoadedge, FusionOutputList* pFusionoutlist);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_OUTPUT_ADAPTER_PUB__ */
