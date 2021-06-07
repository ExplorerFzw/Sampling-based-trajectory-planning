/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : combine_all_radar_pub.h
* Description   :
* Version       : v1.0
* Create Time   : 2020/12/07
* Author   		: yy
* Modify history:
*******************************************************************************
* Modify Time   Modify person  Modification
* ------------------------------------------------------------------------------
*
*******************************************************************************/

#ifndef __H_COMBINE_ALL_RADAR_PUB__
#define __H_COMBINE_ALL_RADAR_PUB__

/************************** Include *******************************************/

#include "fusion_define.h"
#include "p_radar_object.h"
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
* @name        SensorAdapter_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_CombineAllRadar_Init_V(void);

/*******************************************************************************
* @name        SensorAdapter_CombineAllRadar_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

void SensorAdapter_CombineAllRadar_Run_V(const VehicleData* pHostMotion,const CanRadarObjList* pFRadarInfo, const CanRadarObjList* pFLRadarInfo, const CanRadarObjList* pFRRadarInfo,
	const CanRadarObjList* pRLRadarInfo, const CanRadarObjList* pRRRadarInfo, CanRadarObjList* allRdarobjlist);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_COMBINE_ALL_RADAR_PUB__ */
