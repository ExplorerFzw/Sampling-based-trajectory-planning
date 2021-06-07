/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : datastruct_fusion_internal_state.h
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

#ifndef __H_DATASTRUCT_FUSION_INTERNAL_STATE__
#define __H_DATASTRUCT_FUSION_INTERNAL_STATE__

/************************** Include *******************************************/

#include "fusion_define.h"

//#ifdef __cplusplus
//extern "C" {
//#endif /* __cplusplus */

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

// This way you don't need to do any shift.

FusionObjInternalStateMap::iterator Add_new_Track(FusionSystemInternalInfo* pFusionSystemInternalInfo);

RadarClusterMap::iterator Add_new_Cluster(FusionSystemInternalInfo* pFusionSystemInternalInfo);

FusionObjInternalStateMap::iterator Del_Track(FusionSystemInternalInfo* pFusionSystemInternalInfo,	FusionObjInternalStateMap::iterator iterFusion);
FusionObjInternalStateMap::iterator Del_Empty_Track(FusionSystemInternalInfo* pFusionSystemInternalInfo, FusionObjInternalStateMap::iterator iterFusion);

VisTrackDetailMap::iterator Del_VisionTrack(VisTrackDetailMap::iterator iterVision, FusionSystemInternalInfo& refFusIntInfo);

sint8 delVisionInCluster(VisTrackDetail& refVisTrackDetail, FusionSystemInternalInfo& refFusIntInfo);

sint8 delClusterInVision(RadarCluster* refClusterDetail, FusionSystemInternalInfo& refFusIntInfo);

sint8 delClusterInFusion(RadarCluster& refClusterDetail, FusionSystemInternalInfo& refFusIntInfo, uint8 isAll = 1);

sint8 delVisionInFusion(VisTrackDetail& refVisTrackDetail, FusionSystemInternalInfo& refFusIntInfo);

RadarClusterMap::iterator Del_Cluster(RadarClusterMap::iterator iterClusterDetail, FusionSystemInternalInfo& refFusIntInfo);

sint8 delRadarInCluster(RadarTrackDetail& refRadarTrackDetail, FusionSystemInternalInfo& refFusIntInfo);

RadarTrackDetailMap::iterator Del_RadarTrack(RadarTrackDetailMap::iterator iterRadarTrackDetail, FusionSystemInternalInfo& refFusIntInfo);

RadarClusterMap::iterator putRadarInNewCluster(RadarTrackDetail& refRadarTrackDetail, FusionSystemInternalInfo* pFusionSystemInternalInfo);

//#ifdef __cplusplus
//}
//#endif /* __cplusplus */

#endif /* __H_DATASTRUCT_FUSION_INTERNAL_STATE__ */
