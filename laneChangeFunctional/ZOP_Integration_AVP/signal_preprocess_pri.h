/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : signal_preprocess_pri.h
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

#ifndef __H_SIGNAL_PREPROCESS_PRI__
#define __H_SIGNAL_PREPROCESS_PRI__

/************************** Include *******************************************/

#include <stdio.h>
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/
// vision sensor mounting locatin in VCS
#define VISION_MOUNT_LONG_POSN (2.8F) // [m]
#define VISION_MOUNT_LAT_POSN (-0.16F) // [m]
#define VISION_MOUNT_HEIGHT (1.5F) // [m]

// radar can transmission and extraction latency
#define RADAR_CANTRANS_AND_EXTRACT_LATENCY  (150U) // unit [us], factor [1us]
// vision frame collection latency
#define VISION_FRAME_LANTENCY               (22700U) // unit [us], factor [1us]

#define SM_SINF sinf
#define SM_SIN  sin
#define SM_COSF cosf
#define SM_COS  cos
#define SM_SQRT sqrtf


/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/
/*Filter out some low quality/suspicious radar track*/
sint8 filterInvalidRadarObj(const CanRadarObjList* pRadarList, RadarTrackDetail* pRadarTrackDetail);

/*Filter out some low quality/suspicious vision track*/
sint8 filterInvalidVisionObj(const VisionObjList* pInternalVisionList, VisTrackDetail* pVisTrackDetail);

/*compensate sensor timestamp to its measurement time*/
float32 timestampCompensation(float32 originTimestamp, float32 latency);


/************************** External Variable Decleration  ********************/

uint8 radarDelSameId[UTILS_RADAR_MAX_OBJ_NUM][2];

/************************** External Function Decleration *********************/


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_SIGNAL_PREPROCESS_PRI__ */
