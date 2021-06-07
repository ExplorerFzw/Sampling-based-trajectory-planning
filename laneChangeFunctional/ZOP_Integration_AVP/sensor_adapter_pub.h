/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : sensor_adapter_pub.h
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

#ifndef __H_SENSOR_ADAPTER_PUB__
#define __H_SENSOR_ADAPTER_PUB__

/************************** Include *******************************************/

#include "fusion_define.h"
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
* @name        SensorAdapter_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_Init_V(void);

/*******************************************************************************
* @name        SensorAdapter_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_DeInit_V(void);

/*******************************************************************************
* @name        SensorAdapter_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/


int32_t SensorAdapter_Run_V(const VehicleData* pHostMotion, 
	const CanRadarObjList* pRadarInfo, 
	const CanRadarObjList* pFLRadarInfo, 
	const CanRadarObjList* pFRRadarInfo, 
	const CanRadarObjList* pRLRadarInfo, 
	const CanRadarObjList* pRRRadarInfo, 
	const VisionObjList* pVisObj,
	FusionOutputList *pFusionoutlist);

/*******************************************************************************
* @name        CacheVehicleData
* @brief       chache vehicle data the make sychronization to vision
* @param[in]   current vehicle data
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/


int32_t CacheVehicleData(const VehicleData* pHostMotion);

/*******************************************************************************
* @name        CacheRadarData
* @brief       chache radar data the make sychronization to vision
* @param[in]   current radar data
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t CacheRadarData(const CanRadarObjList *pRadarInfo,
	const CanRadarObjList *pFLRadarInfo,
	const CanRadarObjList *pFRRadarInfo,
	const CanRadarObjList *pRLRadarInfo,
	const CanRadarObjList *pRRRadarInfo);

/*******************************************************************************
* @name        GetSyncedSensorData
* @brief       get synced sensor data frome cache, timestamp difference must be calibrated 
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t GetSyncedSensorData(CanRadarObjList** pRadarInfo,
	CanRadarObjList** pFLRadarInfo,
	CanRadarObjList** pFRRadarInfo,
	CanRadarObjList** pRLRadarInfo,
	CanRadarObjList** pRRRadarInfo, VehicleData** pHostMotion, uint8_t frameGap);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_SENSOR_ADAPTER_PUB__ */
