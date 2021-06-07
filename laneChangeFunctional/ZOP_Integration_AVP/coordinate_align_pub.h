/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : coordinate_align_pub.h
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

#ifndef __H_COORDINATE_ALIGN_PUB__
#define __H_COORDINATE_ALIGN_PUB__

/************************** Include *******************************************/

#include "p_vehicle_data.h"
#include "p_radar_object.h"
#include "p_vision_object.h"
#include "fusion_define.h"
#include "sensor_adapter_pub.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/
	


/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

/*******************************************************************************
* @name        SensorAdapter_CoordinateAlign_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_CoordinateAlign_Init_V(void);

/*******************************************************************************
* @name        SensorAdapter_CoordinateAlign_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_CoordinateAlign_DeInit_V(void);

/*******************************************************************************
* @name        SensorAdapter_CoordinateAlign_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/



int32_t SensorAdapter_CoordinateAlign_Run_V(const VehicleData*	pHostMotion, const CanRadarObjList*	pRadarInfo, CanRadarObjList* pcovradobjlist,const VisionObjList* pVisObj);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_COORDINATE_ALIGN_PUB__ */
