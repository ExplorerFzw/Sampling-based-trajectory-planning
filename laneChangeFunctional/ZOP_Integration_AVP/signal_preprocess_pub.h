/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : signal_preprocess_pub.h
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

#ifndef __H_SIGNAL_PREPROCESS_PUB__
#define __H_SIGNAL_PREPROCESS_PUB__

/************************** Include *******************************************/

#include "fusion_define.h"
#include "sensor_adapter_pub.h"



#include "p_radar_object.h"
#include "p_vehicle_data.h"
#include "p_vision_object.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

/*******************************************************************************
* @name        SensorAdapter_SignalPreProcess_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_SignalPreProcess_Init_V(void);

/*******************************************************************************
* @name        SensorAdapter_SignalPreProcess_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_SignalPreProcess_DeInit_V(void);

/*******************************************************************************
* @name        SensorAdapter_SignalPreProcess_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_SignalPreProcess_Run_V(const VehicleData* pHostMotion, CanRadarObjList* pcovrad, const VisionObjList* pVisInfo, uint8 validity[]);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_SIGNAL_PREPROCESS_PUB__ */
