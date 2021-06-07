/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : double_bounce_remover_pub.h
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

#ifndef __H_DOUBLE_BOUNCE_REMOVER_PUB__
#define __H_DOUBLE_BOUNCE_REMOVER_PUB__

/************************** Include *******************************************/

#include "fusion_define.h"
#include "p_radar_object.h"
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
* @name        SensorAdapter_DoubleBounceRemover_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_DoubleBounceRemover_Init_V(void);

/*******************************************************************************
* @name        SensorAdapter_DoubleBounceRemover_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_DoubleBounceRemover_DeInit_V(void);

/*******************************************************************************
* @name        SensorAdapter_DoubleBounceRemover_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

//int32_t SensorAdapter_DoubleBounceRemover_Run_V(void);

int32_t SensorAdapter_DoubleBounceRemover_Run_V(const CanRadarObjList* pRadarInfo,uint8 validity[]);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_DOUBLE_BOUNCE_REMOVER_PUB__ */
