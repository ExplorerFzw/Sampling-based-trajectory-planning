/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : coordinate_align_pri.h
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

#ifndef __H_COORDINATE_ALIGN_PRI__
#define __H_COORDINATE_ALIGN_PRI__

/************************** Include *******************************************/

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/
/*Convert the information from radar coordinate system to vehicle coordinate system*/
inline sint8 convertRadarCoordinateToVehicle(const RadarObj* pRadarObj, RadarTrackDetail* pRadarTrackDetail);

/*Convert the information from vision coordinate system to vehicle coordinate system*/
inline sint8 convertVisionCoordinateToVehicle(const VisionObj* pVisionObj, VisTrackDetail* pVisTrackDetail);
/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_COORDINATE_ALIGN_PRI__ */
