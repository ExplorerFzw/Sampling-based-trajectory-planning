/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : output_adapter_pri.h
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

#ifndef __H_OUTPUT_ADAPTER_PRI__
#define __H_OUTPUT_ADAPTER_PRI__

/************************** Include *******************************************/

#include <stdio.h>
#include "fusion_define.h"
#include "p_vision_roadedge.h"
#include "p_vision_lane.h"
#include "p_vision_roadedge.h"
#include "p_vehicle_data.h"


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

#define THRESHOS_EGO_SPEED (5.0F)
#define VISION_TIMESTAMP	(0.05F)

/************************** Struct And Enum ***********************************/

typedef struct sLaneParam_t
{
	uint16  Lvalid;
	float32 LC0;
	float32 LC1;
	float32 LC2;
	float32 LC3;
	float32 LL;
	uint16  Rvalid;
	float32 RC0;
	float32 RC1;
	float32 RC2;
	float32 RC3;
	float32 RL;
}LaneParam;

typedef struct sCoeff_t
{
	float32_t C0;
	float32_t C1;
	float32_t C2;
	float32_t C3;
}Coeff;

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

/*******************************************************************************
* @name        OutputAdapter_FusionTrackPriority
* @brief       Compute the fusion track's priority
*			   Prioritize the fusion track based on following:
*			   1. Distance, closer target should have higher priority
*			   2. Motion status, moving target should have higher priority
*			   3. Track quality/confidence, high confidence target should have higher priority
*			   4. UPDATED track should have higher priority, NEW/COASTED should have lower priority
*			   5. Radar-Vision object should have higher priority. Radar or vision only object should have lower priority
*			   6. Others
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int8_t OutputAdapter_FusionTrackPriority();

/*******************************************************************************
* @name        OutputAdapter_ROIdefineLane
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

uint8 OutputAdapter_ROIdefineLane(float32 objPosX, float32 objPosY, float32 Cnow, LaneParam& laneParameter);

/*******************************************************************************
* @name        OutputAdapter_ROIdefineLane
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

uint8 OutputAdapter_ROIdefineEgo(float32 objPosX, float32 objPosY, float32 Cnow);

/*******************************************************************************
* @name        OutputAdapter_CopyFusionInternalStateToOutput
* @brief	   This function copy the fusion internal object state into the output definition.
*			   Only the fusion object with valid oID are copied into the output structure.
*	           Object without oID should be low priority object.
* @param[in]   none
* @param[out]  fusion output info
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/


uint8 CalLaneMarkType(uint32 lanetype, uint32 lanedlmtype);

uint8 CalLaneQuality( float32 lhsideprobability, uint32 lhquality);

uint32 CalLreType(uint32 t_lretype);

sint8 OutputAdapter_CopyFusionInternalStateToOutput(const VehicleData* pHostMotion, FusionOutputList* pFusionoutlist);

sint8 OutputAdapter_CopyLaneinfoToOutput(const EyeVisionLaneMark* pVisionLane, FusionOutputList* pFusionoutlist);

sint8 OutputAdapter_CopyLaneRoadedgeinfoToOutput(const VisionLaneRoadedge* pVisionLaneRoadedge, FusionOutputList* pFusionoutlist);

void PolFitThree(ObjBoundary points[], uint8_t pointNum, Coeff& coeff);

bool GetMatrixInverse(float64 src[MATRIX_DIM][MATRIX_DIM], int32_t n, float64 des[MATRIX_DIM][MATRIX_DIM]);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_OUTPUT_ADAPTER_PRI__ */
