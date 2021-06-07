/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_process.h
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

#ifndef __H_FUSION_PROCESS__
#define __H_FUSION_PROCESS__

/************************** Include *******************************************/

#include "fusion_track_manager_pub.h"
#include "sensor_adapter_pub.h"
#include "output_adapter_pub.h"
#include "association_pub.h"
#include "predict_pub.h"
#include "p_param_api.h"
#include "p_fusion_output.h"
#include "fusion_define.h"
#include "logger.h"

#define FUSION_SCHEDULE_TIME			5		/* unit ms */
#define VEHICLE_DATA_SAMPLE_TIME		10		/* unit ms */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/
#define FusionLink_getf32ParametersByKey(__Macro_field, __Macro_strcutPointer, __Macro_num)\
do\
{\
    PARAM_Unit paramUnit;\
    sint32     ret;\
    memset(&paramUnit, 0, sizeof(PARAM_Unit));\
    paramUnit.key  = SM_PARAM_KEY_FUSION_##__Macro_field;\
    paramUnit.type = SM_PARAM_TYPE_FLOAT32;\
    \
	uint32 i = 0;\
	for (i = 0; i < paramSize; ++i)\
	{\
		if (gpDataMem[i].key == paramUnit.key)\
		{\
			paramUnit.f32Value = gpDataMem[i].f32Value;\
			break;\
		}\
	}\
	ZONE_Assert(i < paramSize);\
    (__Macro_num)++;\
    printf("%-35s|| Key=0x%x Value=%f\r\n", #__Macro_field, SM_PARAM_KEY_FUSION_##__Macro_field, paramUnit.f32Value);\
    (__Macro_strcutPointer)->__Macro_field = paramUnit.f32Value;\
}while(0)

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

FusionSystemInternalInfo	gFusionIntInfo;
FUSION_AlgParameter			gFusionAlgParameter;
uint16_t					gErrorDTC;
FusionOutputList			preFusionOutputList;

FusionLnaeInfo gFusionLaneIntInfo;


/* by Wugsz, peform vision based fusion cache all radar and vehicle signal, only perform fusion when vision updated */
bool firstRun;
uint32_t lastFrameNum;
uint32_t frameNum;
uint32_t currentFrameNum;
//uint8_t radarAliveCounter;
uint8_t cycleMillisecond;

/************************** External Function Decleration *********************/



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_FUSION_PROCESS__ */
