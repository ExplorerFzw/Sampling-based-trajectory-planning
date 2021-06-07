/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : splitter.cpp
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
#include "splitter_pub.h"
#include "splitter_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        ClusterManager_Splitter_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t ClusterManager_Splitter_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        ClusterManager_Splitter_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t ClusterManager_Splitter_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        ClusterManager_Splitter_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t ClusterManager_Splitter_Run_V(void)
{
	ZONE_INFO("running to: %s\r\n", __FUNCTION__);

	float32_t SPLIT_X1, SPLIT_X2, SPLIT_Y1, SPLIT_Y2;
	float32_t fusionX, fusionY, fusionVX, fusionVY;
	bool flagP1, flagP2, flagVX, flagVY;
	float32_t f_distance;
	uint8_t splitRadarID[UTILS_RADAR_MAX_OBJ_NUM];
	int32_t countSplitRadarID = 0;

	FusionSystemInternalInfo*	pFusIntInfo = &gFusionIntInfo;

	for (FusionObjInternalStateMap::iterator iterFusion = pFusIntInfo->fusObjIntState.begin(); iterFusion != pFusIntInfo->fusObjIntState.end(); ++iterFusion)
	{
		FusionObjInternalState& refFusion = iterFusion->second;
		if (refFusion.isClusterInside)
		{
			//RadarCluster& refCluster = pFusionSystemInternalInfo->clusterDetail.at(refFusion.clusterID);
			RadarClusterMap::iterator clusterIter = pFusIntInfo->clusterDetail.find(refFusion.clusterID);
			ZONE_Assert(pFusIntInfo->clusterDetail.end() != clusterIter);
			RadarCluster& refCluster = clusterIter->second;

			if (refCluster.numOfRadar > 1)
			{
				fusionX = refFusion.longPosn;
				fusionY = refFusion.latPosn;
				fusionVX = refFusion.longAbsoluteVel;
				fusionVY = refFusion.latAbsoluteVel;
				SPLIT_X1 = refFusion.length*0.8F*1.1F;
				SPLIT_X2 = refFusion.length*0.8F*1.3F;
				SPLIT_Y1 = refFusion.width*0.8F*1.1F;
				SPLIT_Y2 = refFusion.width*0.8F*1.2F;

				int countRadar = refCluster.numOfRadar;
				for (radarIdMap::iterator iterRadarId = refCluster.radarID.begin(); iterRadarId != refCluster.radarID.end(); ++iterRadarId)
				{
					if (countRadar <= 1)
					{
						break;
					}
					//RadarTrackDetail& refRadarTrackDetail = pFusionSystemInternalInfo->radarIntDetail.at(iterRadarId->first);
					RadarTrackDetailMap::iterator radarIter = pFusIntInfo->radarIntDetail.find(iterRadarId->first);
					ZONE_Assert(pFusIntInfo->radarIntDetail.end() != radarIter);
					RadarTrackDetail& refRadarTrackDetail = radarIter->second;

					flagVX = fabs(refRadarTrackDetail.objXVelAbs - fusionVX) < SPLIT_VX;
					flagVY = fabs(refRadarTrackDetail.objYVelAbs - fusionVY) < SPLIT_VY;

					if (flagVX && flagVY)
					{
						//cal coordinate of radarPoint in bbox coordinate system
						float dx = refRadarTrackDetail.objXPos - refFusion.obj_boundary.Xcenter;
						float dy = refRadarTrackDetail.objYPos - refFusion.obj_boundary.Ycenter;
						float x2 = dx*cosf(refFusion.headingAngle) + dy*sinf(refFusion.headingAngle);
						float y2 = -dx*sinf(refFusion.headingAngle) + dy*cosf(refFusion.headingAngle);

						flagP1 = (fusionVX < SPLIT_V) && (x2 < SPLIT_X1) && (y2 < SPLIT_Y1);
						flagP2 = (fusionVX >= SPLIT_V) && (x2 < SPLIT_X2) && (y2 < SPLIT_Y2);

						if (flagP1 || flagP2)
						{
							iterRadarId->second = 0;
						}
						else
						{
							iterRadarId->second++;
						}
					}
					else
					{
						iterRadarId->second++;
					}
					//d-velocity or distance is larger than threshold,split it
					if (iterRadarId->second >= 3)
					{
						splitRadarID[countSplitRadarID] = refRadarTrackDetail.objID;
						++countSplitRadarID;

						countRadar--;
					}
				}
			}
		}
	}
	for (int icount = 0; icount < countSplitRadarID; icount++)
	{
		uint8  radarID = splitRadarID[icount];
		//RadarTrackDetail& refRadarTrackDetail = pFusionSystemInternalInfo->radarIntDetail.at(radarID);
		RadarTrackDetailMap::iterator radarIter = pFusIntInfo->radarIntDetail.find(radarID);
		ZONE_Assert(pFusIntInfo->radarIntDetail.end() != radarIter);
		RadarTrackDetail& refRadarTrackDetail = radarIter->second;

		delRadarInCluster(refRadarTrackDetail, *pFusIntInfo);

		putRadarInNewCluster(refRadarTrackDetail, pFusIntInfo);
	}

	return ZONE_RETURN_OK;
}