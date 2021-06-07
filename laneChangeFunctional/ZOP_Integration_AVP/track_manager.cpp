/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : track_manager.cpp
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

/************************** Include *******************************************/

#include "datastruct_fusion_internal_state.h"
#include "track_manager_pub.h"
#include "track_manager_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        FusionTrackManager_TrackManager_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_TrackManager_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        FusionTrackManager_TrackManager_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_TrackManager_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        FusionTrackManager_TrackManager_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_TrackManager_Run_V(void)
{
	TrackManage_Vision();
	TrackManage_Radar();
	CheckFusionList();
	//RemoveStationaryFusionObject();
	return ZONE_RETURN_OK;
}


/*******************************************************************************
* @name        TrackManage_Vision
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/

void TrackManage_Vision(void)
{
	//put vision track into fusion track list,if there is associated radar track,make sign
	for (VisTrackDetailMap::iterator iterVision = gFusionIntInfo.visIntDetail.begin(); iterVision != gFusionIntInfo.visIntDetail.end(); ++iterVision)
	{
		VisTrackDetail& refVisTrackDetail = iterVision->second;
		if (0 == refVisTrackDetail.isInFusionObj)
		{
			if (0 == refVisTrackDetail.isClusterInside && refVisTrackDetail.obj_coordinate.longitudinal<FUSION_BLIND_ZONE_AREA)
			{
				continue;
			}
			FusionObjInternalStateMap::iterator iterFusion = Add_new_Track(&gFusionIntInfo);
			FusionObjInternalState& refFusion = iterFusion->second;
			//initialize the track
			refFusion.id = iterFusion->first;
			refFusion.isVisInside = 1;
			refFusion.visID = refVisTrackDetail.obj_ID;
			refVisTrackDetail.isInFusionObj = 1;
			refVisTrackDetail.associatedFusObjID = refFusion.id;
			refFusion.isClusterInside = refVisTrackDetail.isClusterInside;
			refFusion.clusterID = refVisTrackDetail.associatedClusterID;

			refFusion.longPosn = refVisTrackDetail.obj_coordinate.longitudinal;
			refFusion.latPosn = refVisTrackDetail.obj_coordinate.lateral;
			refFusion.longAbsoluteVel = refVisTrackDetail.obj_velocity.Vx;
			refFusion.latAbsoluteVel = refVisTrackDetail.obj_velocity.Vy;

			if (refVisTrackDetail.isClusterInside)
			{
				//RadarCluster& refClusterDetail = pFusionSystemInternalInfo->clusterDetail.at(refVisTrackDetail.associatedClusterID);
				RadarClusterMap::iterator clusterIter = gFusionIntInfo.clusterDetail.find(refVisTrackDetail.associatedClusterID);
				ZONE_Assert(gFusionIntInfo.clusterDetail.end() != clusterIter);
				RadarCluster& refClusterDetail = clusterIter->second;

				refClusterDetail.fusionID = refFusion.id;
				refClusterDetail.isInFusion = 1;

				refFusion.longPosn = refClusterDetail.f_x;
				refFusion.latPosn = refClusterDetail.f_y;
				refFusion.longAbsoluteVel = refClusterDetail.f_vx;
				refFusion.latAbsoluteVel = refClusterDetail.f_vy;
			}
		}
	}
}
/*******************************************************************************
* @name        TrackManage_Radar
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/

void TrackManage_Radar(void)
{
	/*initialize radar only fusion track*/
	for (RadarClusterMap::iterator iterCluster = gFusionIntInfo.clusterDetail.begin();
	iterCluster != gFusionIntInfo.clusterDetail.end(); ++iterCluster)
	{
		RadarCluster& refClusterDetail = iterCluster->second;

		if (refClusterDetail.isInFusion == 0)
		{
			if ((5.0F < fabs(refClusterDetail.f_vy))
				&& (gFusionAlgParameter.FUSIONGLOB_OBSROBTHRES > refClusterDetail.objObstacleProb))
			{
				continue;
			}
			
			if (std::abs(refClusterDetail.f_vx) < 0.5 && std::abs(refClusterDetail.f_vy) < 0.5) {
				continue;
			}

			//add a new fusion track
			FusionObjInternalStateMap::iterator iterFusion = Add_new_Track(&gFusionIntInfo);
			FusionObjInternalState& refFusion = iterFusion->second;
			//initialize the track
			refFusion.id = iterFusion->first;
			refFusion.isVisInside = 0;
			refFusion.isClusterInside = 1;
			refFusion.clusterID = refClusterDetail.ID;

			refClusterDetail.isInFusion = 1;
			refClusterDetail.fusionID = refFusion.id;

			refFusion.longPosn = refClusterDetail.f_x;
			refFusion.latPosn = refClusterDetail.f_y;
			refFusion.longAbsoluteVel = refClusterDetail.f_vx;
			refFusion.latAbsoluteVel = refClusterDetail.f_vy;
		}
	}//end for cluster points
}
/*******************************************************************************
* @name        CheckFusionList
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/

void CheckFusionList(void)
{
	const float32 delta_T = (gFusionIntInfo.timeStamp - gFusionIntInfo.timeStampPrevious) / FUSION_US_TO_S;

	for (FusionObjInternalStateMap::iterator iterFusion = gFusionIntInfo.fusObjIntState.begin(); iterFusion != gFusionIntInfo.fusObjIntState.end();)
	{
		FusionObjInternalState& refFuison = iterFusion->second;
		//blind zone and vision only
		if ((refFuison.isVisInside == 1) && (refFuison.isClusterInside == 0) && (refFuison.longPosn <= FUSION_BLIND_ZONE_AREA))
		{
			refFuison.visionOnlyIsInBlindZone = true;
			refFuison.time_since_vision_only += delta_T;
			if (fabs(refFuison.latPosn) > 1.75F)
			{
				if (refFuison.time_since_vision_only > 0.15F)
				{
					iterFusion = Del_Track(&gFusionIntInfo, iterFusion);
					continue;
				}
			}
			else
			{
				if (refFuison.time_since_vision_only > 0.5F)
				{
					iterFusion = Del_Track(&gFusionIntInfo, iterFusion);
					continue;
				}
			}
		}
		else
		{
			refFuison.visionOnlyIsInBlindZone = false;
			refFuison.time_since_vision_only = 0.0F;
		}

		if ((refFuison.isVisInside == 0) && (refFuison.isClusterInside == 0))
		{
			//no vision & no radar
			iterFusion = Del_Track(&gFusionIntInfo, iterFusion);
		}
		else
		{
			++iterFusion;
		}
	}
}

/*******************************************************************************
* @name        RemoveStationaryFusionObject
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/

void RemoveStationaryFusionObject(void) {
	for (FusionObjInternalStateMap::iterator iterFusion = gFusionIntInfo.fusObjIntState.begin(); 
		iterFusion != gFusionIntInfo.fusObjIntState.end();)
	{
		FusionObjInternalState& refFuison = iterFusion->second;
		if (refFuison.isVisInside == 0 && std::abs(refFuison.latPosn) > 2.0 
			&& std::abs(refFuison.latAbsoluteVel) < 0.4 && std::abs(refFuison.longAbsoluteVel) < 0.4 ) {
			int a = 0;
		}
		else {
			++iterFusion;
		}
	}

}