
/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : datastruct_fusion_internal_state.cpp
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

#include "datastruct_fusion_internal_state.h"
#include "logger.h"

FusionObjInternalStateMap::iterator Add_new_Track(FusionSystemInternalInfo* pFusionSystemInternalInfo)
{
	ZONE_Assert(UTILS_FUSION_INTERNAL_MAX_OBJ_NUM > pFusionSystemInternalInfo->numOfActiveObj);
	pFusionSystemInternalInfo->numOfActiveObj++;
	uint32 id = pFusionSystemInternalInfo->minAvaliableFusID++;
	std::pair<FusionObjInternalStateMap::iterator, bool> iterResult = pFusionSystemInternalInfo->fusObjIntState.insert(std::make_pair(id, FusionObjInternalState()));
	ZONE_Assert(iterResult.second == true);
	FusionObjInternalState& refFusion = iterResult.first->second;
	refFusion.id = id;
	refFusion.trackStatus = TRACK_STATUS_NEW; // New
    refFusion.motionPatternHistory = FUSION_MOTION_STATIONARY;
	return iterResult.first;
}

RadarClusterMap::iterator Add_new_Cluster(FusionSystemInternalInfo* pFusionSystemInternalInfo)
{
	ZONE_Assert(!pFusionSystemInternalInfo->availClusterID.empty());
	uint32 id = *(pFusionSystemInternalInfo->availClusterID.begin());
	pFusionSystemInternalInfo->availClusterID.pop_front();

	std::pair<RadarClusterMap::iterator, bool> iterResult = pFusionSystemInternalInfo->clusterDetail.insert(std::make_pair(id, RadarCluster()));
	ZONE_Assert(iterResult.second == true);
	RadarCluster& refCluster = iterResult.first->second;
	refCluster.ID = id;
	refCluster.isInFusion = 0;
	refCluster.isInvision = 0;
	refCluster.numOfRadar = 0;

	return iterResult.first;
}
/**
*******************************************************************************
* \brief
*
*     - Filter out some low quality/suspicious radar track
*
* \param  pRadarList     [IN][OUT]  radar input object list
*
* \return status   FUSION_STATUS_OK on success
*
*******************************************************************************
*/
/*pool manage when deleting a track*/
FusionObjInternalStateMap::iterator Del_Track(FusionSystemInternalInfo* pFusionSystemInternalInfo,
	FusionObjInternalStateMap::iterator iterFusion)
{
	ZONE_Assert(iterFusion != pFusionSystemInternalInfo->fusObjIntState.end());
	FusionObjInternalState& refFusionObjInternalState = iterFusion->second;

	// Process the output ID
	uint8 oID = refFusionObjInternalState.oID;
	if (0 < oID) {
		// If this object is in the fusion output list,
		// then recycle the fusion output ID
		pFusionSystemInternalInfo->unassignedOutputID[
			pFusionSystemInternalInfo->numOfUnassignedOutputID] = oID;
		pFusionSystemInternalInfo->numOfUnassignedOutputID++;
	}

	// Clear the association info in the vision details
	if (refFusionObjInternalState.isVisInside)
	{
		VisTrackDetailMap::iterator visIterDel = pFusionSystemInternalInfo->visIntDetail.find(refFusionObjInternalState.visID);
		ZONE_Assert(pFusionSystemInternalInfo->visIntDetail.end() != visIterDel);
		pFusionSystemInternalInfo->visIntDetail.erase(visIterDel);
	}
	if (refFusionObjInternalState.isClusterInside)
	{
        RadarClusterMap::iterator iterClusterDetail = pFusionSystemInternalInfo->clusterDetail.find(refFusionObjInternalState.clusterID);
		ZONE_Assert(pFusionSystemInternalInfo->clusterDetail.end() != iterClusterDetail);
		RadarCluster& refClusterDetail = iterClusterDetail->second;
		// Clear the association info for in the radar details.
		for (radarIdMap::iterator iterRadarIdMap = refClusterDetail.radarID.begin(); iterRadarIdMap != refClusterDetail.radarID.end(); ++iterRadarIdMap)
		{
			RadarTrackDetailMap::iterator iterRadarDel = pFusionSystemInternalInfo->radarIntDetail.find(iterRadarIdMap->first);
			ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != iterRadarDel);
			pFusionSystemInternalInfo->radarIntDetail.erase(iterRadarDel);
		}
        pFusionSystemInternalInfo->availClusterID.push_back(refClusterDetail.ID);
        pFusionSystemInternalInfo->clusterDetail.erase(iterClusterDetail); // delete this invalid radar
	}

	ZONE_Assert(pFusionSystemInternalInfo->numOfActiveObj >= 1);
	pFusionSystemInternalInfo->numOfActiveObj--; // Decrease the number of active IDs

	//iterFusion = pFusionSystemInternalInfo->fusObjIntState.erase(iterFusion);	
	pFusionSystemInternalInfo->fusObjIntState.erase(iterFusion++);

	//Push back the ID into the unassignedIDlist

	return iterFusion;
}
FusionObjInternalStateMap::iterator Del_Empty_Track(FusionSystemInternalInfo* pFusionSystemInternalInfo,
	FusionObjInternalStateMap::iterator iterFusion)
{
	ZONE_Assert(iterFusion != pFusionSystemInternalInfo->fusObjIntState.end());
	FusionObjInternalState& refFusionObjInternalState = iterFusion->second;

	// if there is vision or radar in fusion,return directly
	if (refFusionObjInternalState.isVisInside || refFusionObjInternalState.isClusterInside)
	{
		return iterFusion;
	}

	// Process the output ID
	uint8 oID = refFusionObjInternalState.oID;
	if (0 < oID) {
		// If this object is in the fusion output list,
		// then recycle the fusion output ID
		pFusionSystemInternalInfo->unassignedOutputID[
			pFusionSystemInternalInfo->numOfUnassignedOutputID] = oID;
		pFusionSystemInternalInfo->numOfUnassignedOutputID++;
	}

	ZONE_Assert(pFusionSystemInternalInfo->numOfActiveObj >= 1);
	pFusionSystemInternalInfo->numOfActiveObj--; // Decrease the number of active IDs

	//iterFusion = pFusionSystemInternalInfo->fusObjIntState.erase(iterFusion);	
	pFusionSystemInternalInfo->fusObjIntState.erase(iterFusion++);

	//Push back the ID into the unassignedIDlist

	return iterFusion;
}

VisTrackDetailMap::iterator Del_VisionTrack(VisTrackDetailMap::iterator iterVision, FusionSystemInternalInfo& refFusIntInfo)
{
	ZONE_Assert(iterVision != refFusIntInfo.visIntDetail.end());
	VisTrackDetail& refVisTrackDetail = iterVision->second;
	/*delete association for all associated cluster*/
	if (refVisTrackDetail.isClusterInside)
	{
        RadarClusterMap::iterator iterCluster = refFusIntInfo.clusterDetail.find(refVisTrackDetail.associatedClusterID);
		ZONE_Assert(refFusIntInfo.clusterDetail.end() != iterCluster);
        RadarCluster& refClusterDetail = iterCluster->second;
		refClusterDetail.isInvision = 0;
	}

	/*delete vision info from associated fusion*/
	if (refVisTrackDetail.isInFusionObj)
	{
        FusionObjInternalStateMap::iterator iterFus = refFusIntInfo.fusObjIntState.find(refVisTrackDetail.associatedFusObjID);
		ZONE_Assert(refFusIntInfo.fusObjIntState.end() != iterFus);
        FusionObjInternalState& refFusionTrackDetail = iterFus->second;

		refFusionTrackDetail.isVisInside = 0;
	}

	//iterVision = refFusIntInfo.visIntDetail.erase(iterVision); // delete this invalid vision	
	refFusIntInfo.visIntDetail.erase(iterVision++); // delete this invalid vision

	return iterVision;
}

sint8 delVisionInCluster(VisTrackDetail& refVisTrackDetail, FusionSystemInternalInfo& refFusIntInfo)
{
	if (refVisTrackDetail.isClusterInside)
	{
        RadarClusterMap::iterator iterCluster = refFusIntInfo.clusterDetail.find(refVisTrackDetail.associatedClusterID);
		ZONE_Assert(refFusIntInfo.clusterDetail.end() != iterCluster);
        RadarCluster& refClusterDetail = iterCluster->second; // get associated vision detail instance

		refClusterDetail.isInvision = 0;/*update relative info*/
		refVisTrackDetail.isClusterInside = 0;
	}
	return 0;
}

sint8 delClusterInVision(RadarCluster* refClusterDetail, FusionSystemInternalInfo& refFusIntInfo)
{
	if (refClusterDetail->isInvision)
	{
        VisTrackDetailMap::iterator iterVis = refFusIntInfo.visIntDetail.find(refClusterDetail->visionID);
		ZONE_Assert(refFusIntInfo.visIntDetail.end() != iterVis);
        VisTrackDetail& refVisTrackDetail = iterVis->second;

		/*update relative info*/
		refVisTrackDetail.isClusterInside = 0;
		refClusterDetail->isInvision = 0;
	}
	return 0;
}
sint8 delVisionInFusion(VisTrackDetail& refVisTrackDetail, FusionSystemInternalInfo& refFusIntInfo)
{
	if (refVisTrackDetail.isInFusionObj)
	{
		uint32 fusionID = refVisTrackDetail.associatedFusObjID; // get associated vision id
		//FusionObjInternalState& refFusionTrackDetail = refFusIntInfo.fusObjIntState.at(fusionID);; // get associated vision detail instance
		FusionObjInternalStateMap::iterator iterFus = refFusIntInfo.fusObjIntState.find(fusionID);
		ZONE_Assert(refFusIntInfo.fusObjIntState.end() != iterFus);
        FusionObjInternalState& refFusionTrackDetail = iterFus->second;

		refFusionTrackDetail.isVisInside = 0;																			  /*update relative info*/
		refVisTrackDetail.isInFusionObj = 0;
	}
	return 0;
}
sint8 delClusterInFusion(RadarCluster& refClusterDetail, FusionSystemInternalInfo& refFusIntInfo, uint8 isAll)
{
	if (refClusterDetail.isInFusion)
	{
        FusionObjInternalStateMap::iterator iterFus = refFusIntInfo.fusObjIntState.find(refClusterDetail.fusionID);
		ZONE_Assert(refFusIntInfo.fusObjIntState.end() != iterFus);
        FusionObjInternalState& refFusionTrackDetail = iterFus->second;

		/*update relative info*/
		refFusionTrackDetail.isClusterInside = 0;
		if (isAll)
		{
			refClusterDetail.isInFusion = 0;
		}
	}
	return 0;
}

RadarClusterMap::iterator Del_Cluster(RadarClusterMap::iterator iterClusterDetail, FusionSystemInternalInfo& refFusIntInfo)
{
	RadarCluster& refClusterDetail = iterClusterDetail->second;
	/*delete radar info from associate vision detail*/
	delClusterInVision(&refClusterDetail, refFusIntInfo);

	/*delete radar info from associate fusion detail*/
	delClusterInFusion(refClusterDetail, refFusIntInfo);

	refFusIntInfo.availClusterID.push_back(refClusterDetail.ID);
	//iterClusterDetail = refFusIntInfo.clusterDetail.erase(iterClusterDetail); // delete this invalid radar	
	refFusIntInfo.clusterDetail.erase(iterClusterDetail++); // delete this invalid radar

	return iterClusterDetail;
}

sint8 delRadarInCluster(RadarTrackDetail& refRadarTrackDetail, FusionSystemInternalInfo& refFusIntInfo)
{
	if (refRadarTrackDetail.isInCluster)
	{
        RadarClusterMap::iterator iterCluster = refFusIntInfo.clusterDetail.find(refRadarTrackDetail.ClusterID);
		ZONE_Assert(refFusIntInfo.clusterDetail.end() != iterCluster);
        RadarCluster& refClusterDetail = iterCluster->second; // get associated vision detail instance

		uint8 eSize = refClusterDetail.radarID.erase(refRadarTrackDetail.objID); // delete this invalid radar from vision instance
		ZONE_Assert(1 == eSize);
		ZONE_Assert(refClusterDetail.numOfRadar > 0);
		/*update relative info*/
		refClusterDetail.numOfRadar -= eSize;
		refRadarTrackDetail.isInCluster = 0;
        if (0 == refClusterDetail.numOfRadar)
        {
            Del_Cluster(iterCluster, refFusIntInfo);
        }
	}
	return 0;
}

RadarTrackDetailMap::iterator Del_RadarTrack(RadarTrackDetailMap::iterator iterRadarTrackDetail, FusionSystemInternalInfo& refFusIntInfo)
{
	RadarTrackDetail& refRadarTrackDetail = iterRadarTrackDetail->second;
	/*delete radar info from associate vision detail*/
	delRadarInCluster(refRadarTrackDetail, refFusIntInfo);

	//iterRadarTrackDetail = refFusIntInfo.radarIntDetail.erase(iterRadarTrackDetail); // delete this invalid radar	
	refFusIntInfo.radarIntDetail.erase(iterRadarTrackDetail++); // delete this invalid radar

	return iterRadarTrackDetail;
}

RadarClusterMap::iterator putRadarInNewCluster(RadarTrackDetail& refRadarTrackDetail, FusionSystemInternalInfo* pFusionSystemInternalInfo)
{
	RadarClusterMap::iterator iterCluster = Add_new_Cluster(pFusionSystemInternalInfo);
	RadarCluster& refCluster = iterCluster->second;

	refCluster.radarID.insert(std::make_pair(refRadarTrackDetail.objID, 0));
	refCluster.numOfRadar++;
	refCluster.radarIndex = refRadarTrackDetail.radarIndex;

	refRadarTrackDetail.isInCluster = 1;
	refRadarTrackDetail.ClusterID = refCluster.ID;

	return iterCluster;
}