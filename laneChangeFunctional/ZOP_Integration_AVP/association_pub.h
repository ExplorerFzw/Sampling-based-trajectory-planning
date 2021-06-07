/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : association_pub.h
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

#ifndef __H_ASSOCIATION_PUB__
#define __H_ASSOCIATION_PUB__

/************************** Include *******************************************/

#include "fusion_define.h"
#include "cluster_update_pub.h"
#include "group_pub.h"
#include "splitter_pub.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

/*******************************************************************************
* @name        Association_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Association_Init_V(void);

/*******************************************************************************
* @name        Association_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Association_DeInit_V(void);

/*******************************************************************************
* @name        Association_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Association_Run_V(void);

/*******************************************************************************
* @name        CalAssociatePro
* @brief
* @param[in]   none
* @param[out]  none
* @return      float Probability 
* @see         none
* @note        none
******************************************************************************/
float CalAssociatePro(const RadarCluster *pClusterDetail,
	const VisTrackDetail* pVisionTrack, float32 &MinX);
/*******************************************************************************
* @name        void ClusterClusterAssociation();
* @brief
* @param[in]   none
* @param[out]  none
* @return      float Probability
* @see         none
* @note        none
******************************************************************************/
void ClusterClusterAssociation();
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_ASSOCIATION_PUB__ */
