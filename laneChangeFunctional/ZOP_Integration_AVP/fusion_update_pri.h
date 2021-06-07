/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_update_pri.h
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

#ifndef __H_FUSION_UPDATE_PRI__
#define __H_FUSION_UPDATE_PRI__

/************************** Include *******************************************/

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/
	static const float32 kTypeChangeTime = 0.1f;
	static const float32 kHeadingAngleChangeTime = 0.4f;
/************************** Inline Function Definition ************************/

/*******************************************************************************
* @name        FindTheMinAnglePoint
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/
	sint8 FindTheMinAnglePoint(float32* f_rp_angle)
	{
		sint8 max_index = 0;
		float32 max_value = f_rp_angle[max_index];
		for (sint8 i = 1; i < 8; i++)
		{
			if (f_rp_angle[i] > max_value)
			{
				max_index = i;
				max_value = f_rp_angle[i];
			}
		}
		return max_index;
	}
	/*******************************************************************************
	* @name        ConstrainFloat
	* @brief
	* @param[in]   none
	* @param[out]  none
	* @return      none
	* @see         none
	* @note        none
	******************************************************************************/
	float32 ConstrainFloat(float32 value, float32 minValue, float32 maxValue)
	{
		float32 ret = 0.0F;
		if (value < minValue)
		{
			ret = minValue;
		}
		else if (value > maxValue)
		{
			ret = maxValue;
		}
		else
		{
			ret = value;
		}
		return ret;
	}
/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

void UpdatePara(void);
sint8 SelectReferencePoint(FusionObjInternalState* pFusionObjInternalState);
sint8 UpdateReferencePoint(FusionSystemInternalInfo* pFusionSystemInternalInfo,
	FusionObjInternalState* pFusionObjInternalState);
sint8 UpdateType(FusionSystemInternalInfo* pFusionSystemInternalInfo, FusionObjInternalState* pFusionObjInternalState);
sint8 FilterForTrackKF(FusionObjInternalState* pFusionObjInternalState, FusionSystemInternalInfo* pFusionSystemInternalInfo);
sint8 UpdateBoundary(FusionObjInternalState* pFusionObjInternalState);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_FUSION_UPDATE_PRI__ */
