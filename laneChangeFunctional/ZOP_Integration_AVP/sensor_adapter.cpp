/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : sensor_adapter.cpp
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

#include "sensor_adapter_pub.h"
#include "sensor_adapter_pri.h"
#include "signal_preprocess_pub.h"
#include "coordinate_align_pub.h"
#include "double_bounce_remover_pub.h"
#include "combine_all_radar_pub.h"
#include <p_vehicle_data.h>

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

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

int32_t SensorAdapter_Init_V(void)
{
	SensorAdapter_SignalPreProcess_Init_V();
	SensorAdapter_CoordinateAlign_Init_V();
	SensorAdapter_DoubleBounceRemover_Init_V();
	SensorAdapter_CombineAllRadar_Init_V();

	memset(&covRadObjList, 0, sizeof(CanRadarObjList));

	memset(radarDataCacheList, 0, sizeof(radarDataCacheList));
	memset(FLradarDataCacheList, 0, sizeof(FLradarDataCacheList));
	memset(FRradarDataCacheList, 0, sizeof(FRradarDataCacheList));
	memset(RRradarDataCacheList, 0, sizeof(RRradarDataCacheList));
	memset(RLradarDataCacheList, 0, sizeof(RLradarDataCacheList));

	return ZONE_RETURN_OK;
}

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

int32_t SensorAdapter_DeInit_V(void)
{
	SensorAdapter_SignalPreProcess_DeInit_V();
	SensorAdapter_CoordinateAlign_DeInit_V();
	SensorAdapter_DoubleBounceRemover_DeInit_V();

	return ZONE_RETURN_OK;
}

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
	FusionOutputList *pFusionoutlist)
{
	memset(radarValidity, 0x01, UTILS_RADAR_MAX_OBJ_NUM);
	memset(&covRadObjList, 0, sizeof(CanRadarObjList));

	SensorAdapter_DoubleBounceRemover_Run_V(pRadarInfo, radarValidity);


	SensorAdapter_CombineAllRadar_Run_V(pHostMotion,pRadarInfo, pFLRadarInfo, pFRRadarInfo, pRLRadarInfo, pRRRadarInfo, &covRadObjList);


	//SensorAdapter_CoordinateAlign_Run_V(pHostMotion, pRadarInfo, &gcovradobjlist, pVisObj);

	SensorAdapter_SignalPreProcess_Run_V(pHostMotion, &covRadObjList, pVisObj, radarValidity);

	
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        CacheVehicleData
* @brief       chache vehicle data the make sychronization to vision
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/


int32_t CacheVehicleData(const VehicleData* pHostMotion)
{
	vehicleDataCacheIndex = (vehicleDataCacheIndex + 1) % VEHICLE_DATA_CACHE_NUM;
	memcpy(&vehicleDataCacheList[vehicleDataCacheIndex], pHostMotion, sizeof(VehicleData));
	return ZONE_RETURN_OK;

}

/*******************************************************************************
* @name        CacheRadarData
* @brief       chache radar data the make sychronization to vision
* @param[in]   none
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
	const CanRadarObjList *pRRRadarInfo)
{
	if (pRadarInfo->radarState.msgAliveCounter != FradarAliveCounter)
	{

		radarFDataCacheIndex = (radarFDataCacheIndex + 1) % RADAR_DATA_CACHE_NUM;
		memcpy(&radarDataCacheList[radarFDataCacheIndex], pRadarInfo, sizeof(CanRadarObjList));
		FradarAliveCounter = pRadarInfo->radarState.msgAliveCounter;
	}

	if (pFLRadarInfo->radarState.msgAliveCounter != FLradarAliveCounter)
	{

		radarFLDataCacheIndex = (radarFLDataCacheIndex + 1) % RADAR_DATA_CACHE_NUM;
		memcpy(&FLradarDataCacheList[radarFLDataCacheIndex], pFLRadarInfo, sizeof(CanRadarObjList));
		FLradarAliveCounter = pFLRadarInfo->radarState.msgAliveCounter;
	}

	if (pFRRadarInfo->radarState.msgAliveCounter != FRradarAliveCounter)
	{

		radarFRDataCacheIndex = (radarFRDataCacheIndex + 1) % RADAR_DATA_CACHE_NUM;
		memcpy(&FRradarDataCacheList[radarFRDataCacheIndex], pFRRadarInfo, sizeof(CanRadarObjList));
		FRradarAliveCounter = pFRRadarInfo->radarState.msgAliveCounter;
	}
	if (pRLRadarInfo->radarState.msgAliveCounter != RLradarAliveCounter)
	{

		radarRLDataCacheIndex = (radarRLDataCacheIndex + 1) % RADAR_DATA_CACHE_NUM;
		memcpy(&RLradarDataCacheList[radarRLDataCacheIndex], pRLRadarInfo, sizeof(CanRadarObjList));
		RLradarAliveCounter = pRLRadarInfo->radarState.msgAliveCounter;
	}
	if (pRRRadarInfo->radarState.msgAliveCounter != RRradarAliveCounter)
	{

		radarRRDataCacheIndex = (radarRRDataCacheIndex + 1) % RADAR_DATA_CACHE_NUM;
		memcpy(&RRradarDataCacheList[radarRRDataCacheIndex], pRRRadarInfo, sizeof(CanRadarObjList));
		RRradarAliveCounter = pRRRadarInfo->radarState.msgAliveCounter;
	}

	return ZONE_RETURN_OK;
}


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
	CanRadarObjList** pRRRadarInfo, VehicleData** pHostMotion, uint8_t frameGap)
{
	/* calculate time difference */
	uint8_t radarDataBackNum = RADAR_DATA_BACK_NUM + frameGap - 1;
	uint8_t vehicleDataBackNum = VEHICLE_DATA_BACK_NUM + (frameGap - 1) * 2;
	uint8_t radarFDataFetchIndex = 0;
	uint8_t radarFLDataFetchIndex = 0;
	uint8_t radarFRDataFetchIndex = 0;
	uint8_t radarRRDataFetchIndex = 0;
	uint8_t radarRLDataFetchIndex = 0;
	uint8_t vehicleDataFetechIndex = 0;

	radarFDataFetchIndex = (radarFDataCacheIndex + RADAR_DATA_CACHE_NUM - radarDataBackNum) % RADAR_DATA_CACHE_NUM;
	radarFLDataFetchIndex = (radarFLDataCacheIndex + RADAR_DATA_CACHE_NUM - radarDataBackNum) % RADAR_DATA_CACHE_NUM;
	radarFRDataFetchIndex = (radarFRDataCacheIndex + RADAR_DATA_CACHE_NUM - radarDataBackNum) % RADAR_DATA_CACHE_NUM;
	radarRLDataFetchIndex = (radarRLDataCacheIndex + RADAR_DATA_CACHE_NUM - radarDataBackNum) % RADAR_DATA_CACHE_NUM;
	radarRRDataFetchIndex = (radarRRDataCacheIndex + RADAR_DATA_CACHE_NUM - radarDataBackNum) % RADAR_DATA_CACHE_NUM;
	vehicleDataFetechIndex = (vehicleDataCacheIndex + VEHICLE_DATA_CACHE_NUM - vehicleDataBackNum) % VEHICLE_DATA_CACHE_NUM;

	*pRadarInfo = &radarDataCacheList[radarFDataFetchIndex];
	*pFLRadarInfo = &FLradarDataCacheList[radarFLDataFetchIndex];
	*pFRRadarInfo = &FRradarDataCacheList[radarFRDataFetchIndex];
	*pRLRadarInfo = &RLradarDataCacheList[radarRLDataFetchIndex];
	*pRRRadarInfo = &RRradarDataCacheList[radarRRDataFetchIndex];
	*pHostMotion = &vehicleDataCacheList[vehicleDataFetechIndex];
	/* to do, because the vehicle data update fast, it can be smoothed by down sampling */

	return ZONE_RETURN_OK;
}