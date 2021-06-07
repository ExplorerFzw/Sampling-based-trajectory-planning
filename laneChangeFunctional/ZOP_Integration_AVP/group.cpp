/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : group.cpp
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
#include "group_pub.h"
#include "group_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        ClusterManager_Group_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t ClusterManager_Group_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        ClusterManager_Group_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t ClusterManager_Group_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        ClusterManager_Group_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t ClusterManager_Group_Run_V(void)
{
	ZONE_INFO("running to: %s\r\n", __FUNCTION__);

	FusionSystemInternalInfo*	pFusIntInfo		= &gFusionIntInfo;
	FUSION_AlgParameter*		pFusAlgParams	= &gFusionAlgParameter;

	bool flag = false;
	for (FusionObjInternalStateMap::iterator iterFusion1 = pFusIntInfo->fusObjIntState.begin(); iterFusion1 != pFusIntInfo->fusObjIntState.end();)
	{
		FusionObjInternalState& fus_objID1 = iterFusion1->second;
		flag = false;
		//stationary obj, no group;vision only track, no group
		if (fus_objID1.isClusterInside == 1)
		{
			RadarClusterMap::iterator clusterIter1 = pFusIntInfo->clusterDetail.find(fus_objID1.clusterID);
			ZONE_Assert(pFusIntInfo->clusterDetail.end() != clusterIter1);
			RadarCluster& refClusterDetail1 = clusterIter1->second;
			if (fus_objID1.isVisInside != 1)
			{
				if (refClusterDetail1.objObstacleProb < pFusAlgParams->FUSIONGLOB_OBSROBTHRES)
				{
					++iterFusion1;
					continue;
				}
			}

			FusionObjInternalStateMap::iterator iterFusion2 = iterFusion1;
			++iterFusion2;
			if (iterFusion2 == pFusIntInfo->fusObjIntState.end())
			{
				++iterFusion1;
				continue;
			}
			for (; iterFusion2 != pFusIntInfo->fusObjIntState.end();)
			{
				FusionObjInternalState& fus_objID2 = iterFusion2->second;
				if (fus_objID2.isClusterInside == 1)
				{
					RadarClusterMap::iterator clusterIter2 = pFusIntInfo->clusterDetail.find(fus_objID2.clusterID);
					ZONE_Assert(pFusIntInfo->clusterDetail.end() != clusterIter2);
					RadarCluster& refClusterDetail2 = clusterIter2->second;
					if (fus_objID2.isVisInside != 1)
					{
						if (refClusterDetail2.objObstacleProb < pFusAlgParams->FUSIONGLOB_OBSROBTHRES)
						{
							++iterFusion2;
							continue;
						}
					}
					if ((fus_objID1.isVisInside == 1) && (fus_objID2.isVisInside == 1))
					{
						//both track is VisInside,no group
						++iterFusion2;
						continue;
					}
					else
					{
						float32 deltaHeading = fabs(fus_objID1.headingAngle - fus_objID2.headingAngle);
						float32 deltaV = sqrt((fus_objID1.longAbsoluteVel - fus_objID2.longAbsoluteVel) * (fus_objID1.longAbsoluteVel - fus_objID2.longAbsoluteVel)
							+ (fus_objID1.latAbsoluteVel - fus_objID2.latAbsoluteVel) * (fus_objID1.latAbsoluteVel - fus_objID2.latAbsoluteVel));

						if (deltaHeading > GROUP_HEADING || deltaV > GROUP_V)
						{
							++iterFusion2;
							continue;
						}
						else
						{
							//cal coordinate of bbox2 center in bbox1 coordinate system
							float dx = fus_objID2.obj_boundary.Xcenter - fus_objID1.obj_boundary.Xcenter;
							float dy = fus_objID2.obj_boundary.Ycenter - fus_objID1.obj_boundary.Ycenter;
							float x2 = dx*cosf(fus_objID1.headingAngle) + dy*sinf(fus_objID1.headingAngle);
							float y2 = -dx*sinf(fus_objID1.headingAngle) + dy*cosf(fus_objID1.headingAngle);
							float f_groupPX = ZONE_MAX(GROUP_PX, ZONE_MAX(0.8F*fus_objID1.length, 0.8F*fus_objID2.length));
							float f_groupPY = ZONE_MAX(GROUP_PY, ZONE_MAX(0.5F*fus_objID1.width, 0.5F*fus_objID2.width));

							if (fabs(y2) > f_groupPY || fabs(x2) > f_groupPX)
							{
								++iterFusion2;
								continue;
							}
							else
							{
								//group,update fusionID and other para
								if (fus_objID2.isVisInside == 1)
								{
									//remain fusionID2,delete fusionID1
									float ratiotemp = fus_objID2.latPosn / fus_objID2.longPosn;
									fus_objID2.longPosn = ZONE_MIN(fus_objID2.longPosn, fus_objID1.longPosn);
									fus_objID2.latPosn = ratiotemp * fus_objID2.longPosn;
									fus_objID2.longAbsoluteVel = 0.5F * (fus_objID2.longAbsoluteVel + fus_objID1.longAbsoluteVel);
									fus_objID2.latAbsoluteVel = 0.5F * (fus_objID2.latAbsoluteVel + fus_objID1.latAbsoluteVel);
									fus_objID2.longRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);
									fus_objID2.latRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);
									float maxL = ZONE_MAX(fus_objID1.length*0.5F, x2 + fus_objID2.length*0.5F);
									float minL = ZONE_MIN(-fus_objID1.length*0.5F, x2 - fus_objID2.length*0.5F);
									float maxW = ZONE_MAX(fus_objID1.width*0.5F, y2 + fus_objID2.width*0.5F);
									float minW = ZONE_MIN(-fus_objID1.width*0.5F, y2 - fus_objID2.width*0.5F);
									fus_objID2.length = maxL - minL;
									fus_objID2.width = maxW - minW;
									float centerXtemp = minL + 0.5F * fus_objID2.length;
									float centerYtemp = minW + 0.5F * fus_objID2.width;
									fus_objID2.obj_boundary.Xcenter = centerXtemp * cosf(fus_objID1.headingAngle) - centerYtemp * sinf(fus_objID1.headingAngle) + fus_objID1.obj_boundary.Xcenter;
									fus_objID2.obj_boundary.Ycenter = centerXtemp * sinf(fus_objID1.headingAngle) + centerYtemp * cosf(fus_objID1.headingAngle) + fus_objID1.obj_boundary.Ycenter;
									fus_objID2.headingAngle = 0.5F * (fus_objID1.headingAngle + fus_objID2.headingAngle);

									//merge two clusters					
									refClusterDetail2.numOfRadar = refClusterDetail2.numOfRadar + refClusterDetail1.numOfRadar;
									for (radarIdMap::iterator iterRadarID = refClusterDetail1.radarID.begin(); iterRadarID != refClusterDetail1.radarID.end(); ++iterRadarID)
									{
										refClusterDetail2.radarID.insert(std::make_pair(iterRadarID->first, 0));
										//pFusionSystemInternalInfo->radarIntDetail.at(iterRadarID->first).ClusterID = refClusterDetail2.ID;
										RadarTrackDetailMap::iterator radarIter = pFusIntInfo->radarIntDetail.find(iterRadarID->first);
										ZONE_Assert(pFusIntInfo->radarIntDetail.end() != radarIter);
										RadarTrackDetail& refRadarTemp = radarIter->second;
										refRadarTemp.ClusterID = refClusterDetail2.ID;

									}
									refClusterDetail1.numOfRadar = 0;
									refClusterDetail1.radarID.clear();

									//delete the  fusionID which is grouped
									iterFusion1 = Del_Track(pFusIntInfo, iterFusion1);
									flag = true;
									break;
								}
								else if (fus_objID1.isVisInside == 1)
								{
									//remain fusionID1,delete fusionID2
									float ratiotemp		= fus_objID1.latPosn / fus_objID1.longPosn;
									fus_objID1.longPosn = ZONE_MIN(fus_objID1.longPosn, fus_objID2.longPosn);
									fus_objID1.latPosn	= ratiotemp * fus_objID1.longPosn;
									fus_objID1.longAbsoluteVel = 0.5F * (fus_objID2.longAbsoluteVel + fus_objID1.longAbsoluteVel);
									fus_objID1.latAbsoluteVel = 0.5F * (fus_objID2.latAbsoluteVel + fus_objID1.latAbsoluteVel);
									fus_objID1.longRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);
									fus_objID1.latRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);

									float maxL = ZONE_MAX(fus_objID1.length*0.5F, x2 + fus_objID2.length*0.5F);
									float minL = ZONE_MIN(-fus_objID1.length*0.5F, x2 - fus_objID2.length*0.5F);
									float maxW = ZONE_MAX(fus_objID1.width*0.5F, y2 + fus_objID2.width*0.5F);
									float minW = ZONE_MIN(-fus_objID1.width*0.5F, y2 - fus_objID2.width*0.5F);
									fus_objID1.length	= maxL - minL;
									fus_objID1.width	= maxW - minW;
									float centerXtemp	= minL + 0.5F * fus_objID1.length;
									float centerYtemp	= minW + 0.5F * fus_objID1.width;
									fus_objID1.obj_boundary.Xcenter = centerXtemp * cosf(fus_objID1.headingAngle) - centerYtemp * sinf(fus_objID1.headingAngle) + fus_objID1.obj_boundary.Xcenter;
									fus_objID1.obj_boundary.Ycenter = centerXtemp * sinf(fus_objID1.headingAngle) + centerYtemp * cosf(fus_objID1.headingAngle) + fus_objID1.obj_boundary.Ycenter;
									fus_objID1.headingAngle			= 0.5F * (fus_objID1.headingAngle + fus_objID2.headingAngle);

									//merge two clusters
									refClusterDetail1.numOfRadar = refClusterDetail2.numOfRadar + refClusterDetail1.numOfRadar;
									for (radarIdMap::iterator iterRadarID = refClusterDetail2.radarID.begin(); iterRadarID != refClusterDetail2.radarID.end(); ++iterRadarID)
									{
										refClusterDetail1.radarID.insert(std::make_pair(iterRadarID->first, 0));
										//pFusionSystemInternalInfo->radarIntDetail.at(iterRadarID->first).ClusterID = refClusterDetail1.ID;
										RadarTrackDetailMap::iterator radarIter = pFusIntInfo->radarIntDetail.find(iterRadarID->first);
										ZONE_Assert(pFusIntInfo->radarIntDetail.end() != radarIter);
										RadarTrackDetail& refRadarTemp = radarIter->second;
										refRadarTemp.ClusterID = refClusterDetail1.ID;
									}
									refClusterDetail2.numOfRadar = 0;
									refClusterDetail2.radarID.clear();

									iterFusion2 = Del_Track(pFusIntInfo, iterFusion2);
								}
								else
								{
									if (fus_objID1.visionConfirmCnt > fus_objID2.visionConfirmCnt)
									{
										//remain fusionID1,delete fusionID2
										fus_objID1.longPosn = ZONE_MIN(fus_objID1.longPosn, fus_objID2.longPosn);
										fus_objID1.latPosn = 0.5F * (fus_objID2.latPosn + fus_objID1.latPosn);

										fus_objID1.longAbsoluteVel = 0.5F * (fus_objID2.longAbsoluteVel + fus_objID1.longAbsoluteVel);
										fus_objID1.latAbsoluteVel = 0.5F * (fus_objID2.latAbsoluteVel + fus_objID1.latAbsoluteVel);
										fus_objID1.longRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);
										fus_objID1.latRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);

										float maxL = ZONE_MAX(fus_objID1.length*0.5F, x2 + fus_objID2.length*0.5F);
										float minL = ZONE_MIN(-fus_objID1.length*0.5F, x2 - fus_objID2.length*0.5F);
										float maxW = ZONE_MAX(fus_objID1.width*0.5F, y2 + fus_objID2.width*0.5F);
										float minW = ZONE_MIN(-fus_objID1.width*0.5F, y2 - fus_objID2.width*0.5F);
										fus_objID1.length = maxL - minL;
										fus_objID1.width = maxW - minW;
										float centerXtemp = minL + 0.5F * fus_objID1.length;
										float centerYtemp = minW + 0.5F * fus_objID1.width;
										fus_objID1.obj_boundary.Xcenter = centerXtemp * cosf(fus_objID1.headingAngle) - centerYtemp * sinf(fus_objID1.headingAngle) + fus_objID1.obj_boundary.Xcenter;
										fus_objID1.obj_boundary.Ycenter = centerXtemp * sinf(fus_objID1.headingAngle) + centerYtemp * cosf(fus_objID1.headingAngle) + fus_objID1.obj_boundary.Ycenter;
										fus_objID1.headingAngle = 0.5F * (fus_objID1.headingAngle + fus_objID2.headingAngle);

										//merge two clusters
										refClusterDetail1.numOfRadar = refClusterDetail2.numOfRadar + refClusterDetail1.numOfRadar;
										for (radarIdMap::iterator iterRadarID = refClusterDetail2.radarID.begin(); iterRadarID != refClusterDetail2.radarID.end(); ++iterRadarID)
										{
											refClusterDetail1.radarID.insert(std::make_pair(iterRadarID->first, 0));
											//pFusionSystemInternalInfo->radarIntDetail.at(iterRadarID->first).ClusterID = refClusterDetail1.ID;
											RadarTrackDetailMap::iterator radarIter = pFusIntInfo->radarIntDetail.find(iterRadarID->first);
											ZONE_Assert(pFusIntInfo->radarIntDetail.end() != radarIter);
											RadarTrackDetail& refRadarTemp = radarIter->second;
											refRadarTemp.ClusterID = refClusterDetail1.ID;
										}
										refClusterDetail2.numOfRadar = 0;
										refClusterDetail2.radarID.clear();

										iterFusion2 = Del_Track(pFusIntInfo, iterFusion2);
									}
									else
									{
										//remain fusionID1,delete fusionID2
										fus_objID2.longPosn = ZONE_MIN(fus_objID2.longPosn, fus_objID1.longPosn);
										fus_objID2.latPosn = 0.5F * (fus_objID1.latPosn + fus_objID2.latPosn);
										fus_objID2.longAbsoluteVel = 0.5F * (fus_objID2.longAbsoluteVel + fus_objID1.longAbsoluteVel);
										fus_objID2.latAbsoluteVel = 0.5F * (fus_objID2.latAbsoluteVel + fus_objID1.latAbsoluteVel);
										fus_objID2.longRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);
										fus_objID2.latRelativeVel = 0.5F * (fus_objID2.latRelativeVel + fus_objID1.latRelativeVel);

										float maxL = ZONE_MAX(fus_objID1.length*0.5F, x2 + fus_objID2.length*0.5F);
										float minL = ZONE_MIN(-fus_objID1.length*0.5F, x2 - fus_objID2.length*0.5F);
										float maxW = ZONE_MAX(fus_objID1.width*0.5F, y2 + fus_objID2.width*0.5F);
										float minW = ZONE_MIN(-fus_objID1.width*0.5F, y2 - fus_objID2.width*0.5F);
										fus_objID2.length = maxL - minL;
										fus_objID2.width = maxW - minW;
										float centerXtemp = minL + 0.5F * fus_objID2.length;
										float centerYtemp = minW + 0.5F * fus_objID2.width;
										fus_objID2.obj_boundary.Xcenter = centerXtemp * cosf(fus_objID2.headingAngle) - centerYtemp * sinf(fus_objID2.headingAngle) + fus_objID2.obj_boundary.Xcenter;
										fus_objID2.obj_boundary.Ycenter = centerXtemp * sinf(fus_objID2.headingAngle) + centerYtemp * cosf(fus_objID2.headingAngle) + fus_objID2.obj_boundary.Ycenter;
										fus_objID2.headingAngle = 0.5F * (fus_objID2.headingAngle + fus_objID1.headingAngle);

										//merge two clusters
										refClusterDetail2.numOfRadar = refClusterDetail1.numOfRadar + refClusterDetail2.numOfRadar;
										for (radarIdMap::iterator iterRadarID = refClusterDetail1.radarID.begin(); iterRadarID != refClusterDetail1.radarID.end(); ++iterRadarID)
										{
											refClusterDetail2.radarID.insert(std::make_pair(iterRadarID->first, 0));
											//pFusionSystemInternalInfo->radarIntDetail.at(iterRadarID->first).ClusterID = refClusterDetail1.ID;
											RadarTrackDetailMap::iterator radarIter = pFusIntInfo->radarIntDetail.find(iterRadarID->first);
											ZONE_Assert(pFusIntInfo->radarIntDetail.end() != radarIter);
											RadarTrackDetail& refRadarTemp = radarIter->second;
											refRadarTemp.ClusterID = refClusterDetail2.ID;
										}
										refClusterDetail1.numOfRadar = 0;
										refClusterDetail1.radarID.clear();

										//delete the  fusionID which is grouped
										iterFusion1 = Del_Track(pFusIntInfo, iterFusion1);
										flag = true;
										break;
									}
								}
								//delete the  fusionID which is grouped
								//iterFusion2 = Del_Track(pFusionSystemInternalInfo, iterFusion2);
							}
						}
					}
				}
				else
				{
					//no group
					++iterFusion2;
				}
			}
		}
		if (flag == false)
		{
			++iterFusion1;
		}
	}
	return ZONE_RETURN_OK;
}