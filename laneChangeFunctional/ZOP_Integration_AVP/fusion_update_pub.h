/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_update_pub.h
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

#ifndef __H_FUSION_UPDATE_PUB__
#define __H_FUSION_UPDATE_PUB__

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
* @name        FusionTrackManager_FusionUpdate_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_FusionUpdate_Init_V(void);

/*******************************************************************************
* @name        FusionTrackManager_FusionUpdate_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_FusionUpdate_DeInit_V(void);

/*******************************************************************************
* @name        FusionTrackManager_FusionUpdate_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_FusionUpdate_Run_V(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_FUSION_UPDATE_PUB__ */
