/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : association.cpp
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
#include "association_pri.h"
#include "association_pub.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        Association_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Association_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Association_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Association_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        Association_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t Association_Run_V(void)
{
	
	CalReferencePointState();
	VisionClusterAssociation();
	ClusterClusterAssociation();
	return ZONE_RETURN_OK;
}
/**
*******************************************************************************
* \brief
*
*     - compute the associate param between the radar obj and the vision obj
*
* \param  pRadarTrack     [IN]  radar internal info
*			pVisionTrack     [IN]  vision internal info
*
* \return status   FUSION_STATUS_OK on success
*
*******************************************************************************
*/
float CalAssociatePro(const RadarCluster *pClusterDetail,
	const VisTrackDetail* pVisionTrack, float32 &MinX)
{
	uint32 i_ClusterID = pClusterDetail->ID;
	float32 d_pro_pre = pVisionTrack->probOfAssociation[i_ClusterID - 1];

	float32 d_long_radar = pClusterDetail->f_x;
	//calc the param X
	float32 d_delta_plong = fabs(d_long_radar - pVisionTrack->obj_coordinate.longitudinal);//||X||
	float32 d_delta_plong2 = fabs(d_long_radar - pVisionTrack->obj_coordinate.longitudinal - gFusionAlgParameter.ASSOCIATION_VISSYSXERR);//||X||
	float32 d_threshold_long;
	if (d_long_radar > LONG_BOUND1) {
		d_threshold_long = d_long_radar*0.5F;
	}
	else if (pVisionTrack->obj_coordinate.longitudinal < LONG_BOUND2) {	
		if(pVisionTrack->obj_type == VISION_TYPE_TRUCK)
			d_threshold_long = LONG_THRESHOLD3;
		else
			d_threshold_long = LONG_THRESHOLD2;
	}
	else {
		d_threshold_long = LONG_THRESHOLD1;
	}
	//calc the param angle
	float32 visionTheta = atan2f(pVisionTrack->obj_coordinate.lateral, pVisionTrack->obj_coordinate.longitudinal);
	float32 radarTheta = atan2f(pClusterDetail->f_y, d_long_radar);
	float32 d_delta_angle = fabs(radarTheta - visionTheta);//|angle|;
	if (pVisionTrack->obj_type == VISION_TYPE_TRUCK)
	{
		float32 yMid = d_long_radar*pVisionTrack->obj_coordinate.lateral / pVisionTrack->obj_coordinate.longitudinal;
		float32 thetaMax_truck = atan2f(yMid + 1.0F, d_long_radar);
		float32 thetaMin_truck = atan2f(yMid - 1.0F, d_long_radar);
		if (radarTheta > thetaMax_truck || radarTheta < thetaMin_truck)
		{
		}
		else
		{
			d_delta_angle = 0.7F*d_delta_angle;
		}
		thetaMax_truck = atan2f(yMid + 0.75F, d_long_radar);
		thetaMin_truck = atan2f(yMid - 0.75F, d_long_radar);
		if ((radarTheta < thetaMax_truck) && (radarTheta > thetaMin_truck) && (MinX > d_long_radar))
		{
			MinX = d_long_radar;
		}
	}
	if ((d_delta_angle > ANGLE_THRESHOLD1 && d_long_radar > 10.0F) || (d_delta_angle > ANGLE_THRESHOLD2 && d_long_radar <= 10.0F))
	{
		return (d_pro_pre * gFusionAlgParameter.ASSOCIATION_KPRESCORE);
	}
	if (d_delta_plong > d_threshold_long)
	{
		return (d_pro_pre *  gFusionAlgParameter.ASSOCIATION_KPRESCORE);
	}

	if (d_delta_plong > ASSO_DELTA_LONG_MIN && pVisionTrack->obj_coordinate.longitudinal <= VISO_LONG_MIN && pVisionTrack->obj_type != VISION_TYPE_TRUCK)
	{
		return 0.0;
	}
	else if (d_delta_plong > ASSO_DELTA_LONG_MAX && pVisionTrack->obj_coordinate.longitudinal >= VISO_LONG_MIN)
	{
		return 0.0;
	}
	//calc the param Y
	float32 d_delta_plat = fabs(pClusterDetail->f_y - pVisionTrack->obj_coordinate.lateral);//||Y||
	float32 d_threshold_lat = LAT_THRESHOLD_1 + d_long_radar * LAT_THRESHOLD_2;//0.017455 = tan(1)

	if (d_delta_plat > d_threshold_lat)
	{
		return (d_pro_pre *  gFusionAlgParameter.ASSOCIATION_KPRESCORE);
	}

	//calc the param V
	float32 d_delta_v = sqrtf((pClusterDetail->f_vx - pVisionTrack->obj_velocity.Vx) * (pClusterDetail->f_vx - pVisionTrack->obj_velocity.Vx)
		+ (pClusterDetail->f_vy - pVisionTrack->obj_velocity.Vy) * (pClusterDetail->f_vy - pVisionTrack->obj_velocity.Vy));//||v||
																														   //calc the param V
	float32 d_delta_vx = fabs(pClusterDetail->f_vx - pVisionTrack->obj_velocity.Vx);
	float32 d_delta_vy = fabs(pClusterDetail->f_vy - pVisionTrack->obj_velocity.Vy);
	if (d_delta_vx > 20.0F || d_delta_vy > 5.0F)
	{
		return (d_pro_pre *  gFusionAlgParameter.ASSOCIATION_KPRESCORE);
	}

	float32  d_ttc = pVisionTrack->obj_TTC;
	d_ttc = 0.0F;

	uint8	 d_classification = (pClusterDetail->objType == pVisionTrack->obj_type) ? 1 : 0;
	float32  d_obstacleProb;
	if (pClusterDetail->objObstacleProb > 60.0F)
	{
		d_obstacleProb = 0.0F;
	}
	else if (pClusterDetail->objObstacleProb > 30.0F)
	{
		d_obstacleProb = 0.5F;
	}
	else if (pClusterDetail->objObstacleProb > 15.0F)
	{
		d_obstacleProb = 1.0F;
	}
	else
	{
		d_obstacleProb = 5.0F;
	}

	float32 d_cal = 0.0F;

	//float32 k_angle3 = d_long_radar+50.0F;
	if (d_long_radar < gFusionAlgParameter.ASSOCIATION_XSLOGTHRESCAR)
	{
		d_cal = gFusionAlgParameter.ASSOCIATION_KSXCAR * d_delta_plong +
			gFusionAlgParameter.ASSOCIATION_KSYCAR * d_delta_plat +
			gFusionAlgParameter.ASSOCIATION_KSSPEEDCAR *d_delta_v +
			gFusionAlgParameter.ASSOCIATION_KSTTCCAR * d_ttc +
			gFusionAlgParameter.ASSOCIATION_KSANGLECAR * d_delta_angle +
			gFusionAlgParameter.ASSOCIATION_KOBSPROB* d_obstacleProb -
			gFusionAlgParameter.ASSOCIATION_KCLASSIFICATION* d_classification -
			gFusionAlgParameter.ASSOCIATION_KPRESCORE * d_pro_pre;
	}
	else if (d_long_radar < gFusionAlgParameter.ASSOCIATION_XMLOGTHRESCAR)
	{
		d_cal = gFusionAlgParameter.ASSOCIATION_KMXCAR* d_delta_plong +
			gFusionAlgParameter.ASSOCIATION_KMYCAR* d_delta_plat +
			gFusionAlgParameter.ASSOCIATION_KMSPEEDCAR * d_delta_v +
			gFusionAlgParameter.ASSOCIATION_KMTTCCAR * d_ttc +
			(gFusionAlgParameter.ASSOCIATION_KMANGLECAR + d_long_radar)* d_delta_angle +
			gFusionAlgParameter.ASSOCIATION_KOBSPROB * d_obstacleProb -
			gFusionAlgParameter.ASSOCIATION_KCLASSIFICATION * d_classification -
			gFusionAlgParameter.ASSOCIATION_KPRESCORE * d_pro_pre;

	}
	else if (d_long_radar < gFusionAlgParameter.ASSOCIATION_XBLOGTHRESCAR)
	{
		d_cal = gFusionAlgParameter.ASSOCIATION_KBXCAR* d_delta_plong2 +
			gFusionAlgParameter.ASSOCIATION_KBYCAR * d_delta_plat +
			gFusionAlgParameter.ASSOCIATION_KBSPEEDCAR * d_delta_v +
			gFusionAlgParameter.ASSOCIATION_KBTTCCAR * d_ttc +
			(gFusionAlgParameter.ASSOCIATION_KBANGLECAR + d_long_radar)* d_delta_angle +
			gFusionAlgParameter.ASSOCIATION_KOBSPROB * d_obstacleProb -
			gFusionAlgParameter.ASSOCIATION_KCLASSIFICATION * d_classification -
			gFusionAlgParameter.ASSOCIATION_KPRESCORE * d_pro_pre;

	}
	else
	{
		d_cal = gFusionAlgParameter.ASSOCIATION_KLXCAR * d_delta_plong2 +
			gFusionAlgParameter.ASSOCIATION_KLYCAR * d_delta_plat +
			gFusionAlgParameter.ASSOCIATION_KLSPEEDCAR * d_delta_v +
			gFusionAlgParameter.ASSOCIATION_KLTTCCAR * d_ttc +
			gFusionAlgParameter.ASSOCIATION_KLANGLECAR * d_delta_angle +
			gFusionAlgParameter.ASSOCIATION_KOBSPROB * d_obstacleProb -
			gFusionAlgParameter.ASSOCIATION_KCLASSIFICATION * d_classification -
			gFusionAlgParameter.ASSOCIATION_KPRESCORE * d_pro_pre;
	}

	d_cal = (d_cal > 0.0F) ? d_cal : 0.0F;
	float32 d_asspro = expf(-1.0F * d_cal / 10.0F);

	return d_asspro;
}
/*******************************************************************************
* @name        CalReferencePointState
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/
void CalReferencePointState() {
	//cal the reference point of cluster
	for (RadarClusterMap::iterator iterCluster = gFusionIntInfo.clusterDetail.begin(); iterCluster != gFusionIntInfo.clusterDetail.end(); ++iterCluster)
	{
		RadarCluster& refClusterDetail = iterCluster->second;
		ZONE_Assert(refClusterDetail.numOfRadar > 0);
		refClusterDetail.isAssociate = false;
		refClusterDetail.objType = VISION_TYPE_UNKNOWN;
		refClusterDetail.objObstacleProb = 0.0F;
		refClusterDetail.objExsitProb = 0.0F;

		uint8 objTypeTemp = VISION_TYPE_UNKNOWN;
		bool firstFlag = true;
		for (radarIdMap::iterator iterRadarId = refClusterDetail.radarID.begin(); iterRadarId != refClusterDetail.radarID.end(); ++iterRadarId)
		{
			//RadarTrackDetail& refRadarTrackDetail = pFusionSystemInternalInfo->radarIntDetail.at(iterRadarId->first);
			RadarTrackDetailMap::iterator iterRadar = gFusionIntInfo.radarIntDetail.find(iterRadarId->first);
			ZONE_Assert(gFusionIntInfo.radarIntDetail.end() != iterRadar);
			RadarTrackDetail &refRadarTrackDetail = iterRadar->second;

			if (refRadarTrackDetail.objType == 0) //unknown
			{

				objTypeTemp = VISION_TYPE_UNKNOWN;
			}
			else if (refRadarTrackDetail.objType == 1 || refRadarTrackDetail.objType == 2) //4wheels or 2wheels
			{
				objTypeTemp = VISION_TYPE_CAR;
			}
			else //pedestrian
			{
				objTypeTemp = VISION_TYPE_PEDESTRAIN;
			}
			if (objTypeTemp > refClusterDetail.objType)
			{
				refClusterDetail.objType = objTypeTemp;
			}

			if (refRadarTrackDetail.objObstacleProb > refClusterDetail.objObstacleProb)
			{
				refClusterDetail.objObstacleProb = refRadarTrackDetail.objObstacleProb;
			}
			if (refRadarTrackDetail.objExstProb > refClusterDetail.objExsitProb)
			{
				refClusterDetail.objExsitProb = refRadarTrackDetail.objExstProb;
			}


			//update x,y,vx,vy
			if (firstFlag)
			{
				refClusterDetail.f_x = refRadarTrackDetail.objXPos;
				refClusterDetail.f_y = refRadarTrackDetail.objYPos;
				refClusterDetail.f_vx = refRadarTrackDetail.objXVelAbs;
				refClusterDetail.f_vy = refRadarTrackDetail.objYVelAbs;
				firstFlag = false;
			}
			else
			{
				refClusterDetail.f_x = ZONE_MIN(refClusterDetail.f_x, refRadarTrackDetail.objXPos);
				refClusterDetail.f_y = refClusterDetail.f_y + refRadarTrackDetail.objYPos;
				refClusterDetail.f_vx = refClusterDetail.f_vx + refRadarTrackDetail.objXVelAbs;
				refClusterDetail.f_vy = refClusterDetail.f_vy + refRadarTrackDetail.objYVelAbs;
			}
		}
		refClusterDetail.f_y = refClusterDetail.f_y / refClusterDetail.numOfRadar;
		refClusterDetail.f_vx = refClusterDetail.f_vx / refClusterDetail.numOfRadar;
		refClusterDetail.f_vy = refClusterDetail.f_vy / refClusterDetail.numOfRadar;
	}
}
/*******************************************************************************
* @name        void VisionClusterAssociation() {

* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/
void VisionClusterAssociation() {
	float32 f_pro = 0.0F;
	float32 f_maxPro = 0.0F;
	float32 longitudinal = 0.0F;
	float32 lateral = 0.0F;

	//[Louis] Put these thresholds as CALs, like K_ASSOCIATION_THRESHOLD
	RadarCluster *targetClusterPtr = NULL;
	RadarCluster *targetClusterPtr_preAsso = NULL;
	float32 f_pro_preAsso = 0.0F;
	for (VisTrackDetailMap::iterator iterVision = gFusionIntInfo.visIntDetail.begin(); iterVision != gFusionIntInfo.visIntDetail.end(); ++iterVision)
	{
		VisTrackDetail& refVisTrackDetail = iterVision->second;
		f_maxPro = 0.0F;
		f_pro_preAsso = 0.0F;
		uint32	ClusterIDAsso = 0, ClusterIDAssoPre = 0;
		float32 minX = 1000.0F;
		uint8 noAssoFlag = 0;
		uint8_t proArrayIndex = 0;
		uint32 proAssoIndex = 0;

		//printf("VisID: %d; CluID: %d; FusID: %d; isInFus: %d\n", refVisTrackDetail.obj_ID, refVisTrackDetail.associatedClusterID, refVisTrackDetail.associatedFusObjID, refVisTrackDetail.isInFusionObj);
		//if (refVisTrackDetail.obj_coordinate.longitudinalVariance >9.9F && (refVisTrackDetail.obj_type == VISION_TYPE_CAR || refVisTrackDetail.obj_type == VISION_TYPE_TRUCK))
		//{
		//	noAssoFlag = 1;
		//}
		if (!noAssoFlag)
		{
			//asso vision1 and cluster
			if (refVisTrackDetail.obj_type == VISION_TYPE_TRUCK)
			{
				for (RadarClusterMap::iterator iterCluster = gFusionIntInfo.clusterDetail.begin(); iterCluster != gFusionIntInfo.clusterDetail.end(); ++iterCluster)
				{
					RadarCluster& refClusterDetail = iterCluster->second;

					proArrayIndex = proAssoIndex % UTILS_RADAR_MAX_OBJID_NUM;
					
					if (refClusterDetail.radarIndex > 0)
						continue;

					f_pro = CalAssociatePro(&refClusterDetail, &refVisTrackDetail, minX);

					if ((gFusionIntInfo.dayNightState == VISION_NIGHT) && (refClusterDetail.objType == VISION_TYPE_UNKNOWN))
					{
						f_pro = f_pro * 0.9F;
					}

					refVisTrackDetail.probOfAssociation[refClusterDetail.ID - 1] = f_pro;

					//refVisTrackDetail.probOfAssociation[refClusterDetail.ID - 1] = f_pro;
					if (!refClusterDetail.isAssociate)
					{
						if (f_maxPro < f_pro)
						{
							if (refClusterDetail.f_x < (minX + 0.01F))
							{
								/*record the max score vision message*/
								f_maxPro = f_pro;
								targetClusterPtr = &refClusterDetail;
								ClusterIDAsso = refClusterDetail.ID;
							}
						}
						else if ((gFusionAlgParameter.ASSOCIATION_SCORETHRES < f_pro) && ((1000.0F - 0.01F) > minX) && (refClusterDetail.f_x < (minX + 0.01F)))
						{
							/*record the max score vision message*/
							f_maxPro = f_pro;
							targetClusterPtr = &refClusterDetail;
							ClusterIDAsso = refClusterDetail.ID;
						}
					}
					if ((refClusterDetail.isInvision == 1) && (refClusterDetail.visionID == refVisTrackDetail.obj_ID))
					{
						f_pro_preAsso = f_pro;
						targetClusterPtr_preAsso = &refClusterDetail;
						ClusterIDAssoPre = refClusterDetail.ID;
					}
				}
				if ((f_maxPro > gFusionAlgParameter.ASSOCIATION_SCORETHRES) && (targetClusterPtr->f_x > (minX + 0.01F)))
				{
					f_maxPro = 0.7F;
				}
			}
			else
			{
				for (RadarClusterMap::iterator iterCluster = gFusionIntInfo.clusterDetail.begin(); iterCluster != gFusionIntInfo.clusterDetail.end(); ++iterCluster)
				{
					RadarCluster& refClusterDetail = iterCluster->second;

					if (refClusterDetail.radarIndex > 0)
						continue;

					f_pro = CalAssociatePro(&refClusterDetail, &refVisTrackDetail, minX);
					if ((gFusionIntInfo.dayNightState == VISION_NIGHT) && (refClusterDetail.objType == VISION_TYPE_UNKNOWN))
					{
						f_pro = f_pro * 0.9F;
					}
					refVisTrackDetail.probOfAssociation[refClusterDetail.ID - 1] = f_pro;
					//refVisTrackDetail.probOfAssociation[refClusterDetail.ID - 1] = f_pro;
					if ((f_maxPro < f_pro) && (!refClusterDetail.isAssociate)) // is the score is recently max?
					{
						/*record the max score vision message*/
						f_maxPro = f_pro;
						targetClusterPtr = &refClusterDetail;
						ClusterIDAsso = refClusterDetail.ID;
					}

					if ((refClusterDetail.isInvision == 1) && (refClusterDetail.visionID == refVisTrackDetail.obj_ID))
					{
						f_pro_preAsso = f_pro;
						targetClusterPtr_preAsso = &refClusterDetail;
						ClusterIDAssoPre = refClusterDetail.ID;
					}
				}
			}
		}
		if (refVisTrackDetail.obj_type != VISION_TYPE_TRUCK)
		{
			if ((ClusterIDAssoPre != ClusterIDAsso) && (f_pro_preAsso > gFusionAlgParameter.ASSOCIATION_SCORETHRES) && (f_maxPro - f_pro_preAsso < 0.12F))
			{
				f_maxPro = f_pro_preAsso;
				targetClusterPtr = targetClusterPtr_preAsso;
			}
		}
#if 0
		if ((f_maxPro >  gFusionAlgParameter.ASSOCIATION_SCORETHRES) && (targetClusterPtr->visionID == refVisTrackDetail.obj_ID)
			&& (targetClusterPtr->isInvision == 1))
		{
			/*if the previous associated vision track can associate this radar track again, keep the association*/
			targetClusterPtr->isAssociate = true;
		}
		else if (f_maxPro >  gFusionAlgParameter.ASSOCIATION_SCORETHRES)
		{
			//printf("f_maxPro: %f; Thr: %f; tarId: %d; refID: %d; isInvision: %d\n", f_maxPro, gFusionAlgParameter.ASSOCIATION_SCORETHRES, targetClusterPtr->visionID, refVisTrackDetail.obj_ID, targetClusterPtr->isInvision);

			/*is this radar track associate another vision track, delete the previous association and establish a new one*/
			targetClusterPtr->isAssociate = true;
			if ((0 != ClusterIDAssoPre) && (targetClusterPtr_preAsso != NULL) && (targetClusterPtr_preAsso->isInFusion))
			{
				uint32 fusionID = targetClusterPtr_preAsso->fusionID; // get associated fusion id																			
				FusionObjInternalStateMap::iterator iterFus = gFusionIntInfo.fusObjIntState.find(fusionID);
				ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != iterFus);
				iterFus->second.visionConfirmCnt = 0;
			}

			if (refVisTrackDetail.isClusterInside)
			{
				delVisionInCluster(refVisTrackDetail, gFusionIntInfo);
				delVisionInFusion(refVisTrackDetail, gFusionIntInfo);
			}

			if (targetClusterPtr->isInFusion)
			{
				if (targetClusterPtr->isInvision)
				{
					//VisTrackDetail& refVis = pFusionSystemInternalInfo->visIntDetail.at(targetClusterPtr->visionID);
					VisTrackDetailMap::iterator visIter = gFusionIntInfo.visIntDetail.find(targetClusterPtr->visionID);
					ZONE_Assert(gFusionIntInfo.visIntDetail.end() != visIter);
					VisTrackDetail& refVis = visIter->second;

					delVisionInCluster(refVis, gFusionIntInfo);
					delVisionInFusion(refVis, gFusionIntInfo);
				}
				if (refVisTrackDetail.isInFusionObj)
				{
					uint32 fusionID = refVisTrackDetail.associatedFusObjID; // get associated vision id																			
					FusionObjInternalStateMap::iterator iterFus = gFusionIntInfo.fusObjIntState.find(fusionID);
					ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != iterFus);
				
					delVisionInFusion(refVisTrackDetail, gFusionIntInfo);
				
					Del_Empty_Track(&gFusionIntInfo, iterFus);
				}


				refVisTrackDetail.isClusterInside = 1;
				refVisTrackDetail.isInFusionObj = 1;
				refVisTrackDetail.associatedClusterID = targetClusterPtr->ID;
				refVisTrackDetail.associatedFusObjID = targetClusterPtr->fusionID;

				//FusionObjInternalState& refFusion = pFusionSystemInternalInfo->fusObjIntState.at(targetClusterPtr->fusionID);
				FusionObjInternalStateMap::iterator fusIter = gFusionIntInfo.fusObjIntState.find(targetClusterPtr->fusionID);
				ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != fusIter);
				FusionObjInternalState& refFusion = fusIter->second;

				refFusion.isVisInside = 1;
				refFusion.visID = refVisTrackDetail.obj_ID;
				targetClusterPtr->isInvision = 1;
				targetClusterPtr->visionID = refVisTrackDetail.obj_ID;
			}
			else
			{
				delClusterInVision(targetClusterPtr, gFusionIntInfo);

				if (refVisTrackDetail.isInFusionObj)
				{
					//FusionObjInternalState& refFusion = pFusionSystemInternalInfo->fusObjIntState.at(refVisTrackDetail.associatedFusObjID);
					FusionObjInternalStateMap::iterator fusIter = gFusionIntInfo.fusObjIntState.find(refVisTrackDetail.associatedFusObjID);
					ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != fusIter);
					FusionObjInternalState& refFusion = fusIter->second;

					refFusion.isClusterInside = 1;
					refFusion.clusterID = targetClusterPtr->ID;
					refVisTrackDetail.isClusterInside = 1;
					refVisTrackDetail.associatedClusterID = targetClusterPtr->ID;

					targetClusterPtr->isInvision = 1;
					targetClusterPtr->isInFusion = 1;
					targetClusterPtr->visionID = refVisTrackDetail.obj_ID;
					targetClusterPtr->fusionID = refFusion.id;
				}
				else
				{
					refVisTrackDetail.isClusterInside = 1;
					refVisTrackDetail.associatedClusterID = targetClusterPtr->ID;
					targetClusterPtr->isInvision = 1;
					targetClusterPtr->visionID = refVisTrackDetail.obj_ID;
				}
			}
		}
		else
		{
			/*if this radar track can not associate any vision track, delete the previous association*/
			if (refVisTrackDetail.isClusterInside)
			{
				//RadarCluster& refClusterDetail = pFusionSystemInternalInfo->clusterDetail.at(refVisTrackDetail.associatedClusterID);
				RadarClusterMap::iterator iterCluster = gFusionIntInfo.clusterDetail.find(refVisTrackDetail.associatedClusterID);
				ZONE_Assert(gFusionIntInfo.clusterDetail.end() != iterCluster);
				RadarCluster& refClusterDetail = iterCluster->second;

				delClusterInVision(&refClusterDetail, gFusionIntInfo);
				delVisionInFusion(refVisTrackDetail, gFusionIntInfo);
			}

		}

#else
		if ((f_maxPro >  gFusionAlgParameter.ASSOCIATION_SCORETHRES) && (targetClusterPtr->visionID == refVisTrackDetail.obj_ID)
			&& (targetClusterPtr->isInvision == 1))
		{
			/*if the previous associated vision track can associate this radar track again, keep the association*/
			targetClusterPtr->isAssociate = true;
		}
		else if (f_maxPro >  gFusionAlgParameter.ASSOCIATION_SCORETHRES)
		{
			//printf("f_maxPro: %f; Thr: %f; tarId: %d; refID: %d; isInvision: %d\n", f_maxPro, gFusionAlgParameter.ASSOCIATION_SCORETHRES, targetClusterPtr->visionID, refVisTrackDetail.obj_ID, targetClusterPtr->isInvision);

			/*is this radar track associate another vision track, delete the previous association and establish a new one*/
			targetClusterPtr->isAssociate = true;
			if ((0 != ClusterIDAssoPre) && (targetClusterPtr_preAsso != NULL) && (targetClusterPtr_preAsso->isInFusion))
			{
				uint32 fusionID = targetClusterPtr_preAsso->fusionID; // get associated fusion id																			
				FusionObjInternalStateMap::iterator iterFus = gFusionIntInfo.fusObjIntState.find(fusionID);
				ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != iterFus);
				iterFus->second.visionConfirmCnt = 0;
			}
			if (targetClusterPtr->isInvision)
			{
				delClusterInVision(targetClusterPtr, gFusionIntInfo);
				delClusterInFusion(*targetClusterPtr, gFusionIntInfo);
			}

			if (refVisTrackDetail.isInFusionObj)
			{
				if (refVisTrackDetail.isClusterInside)
				{
					RadarClusterMap::iterator clusterIter = gFusionIntInfo.clusterDetail.find(refVisTrackDetail.associatedClusterID);
					ZONE_Assert(gFusionIntInfo.clusterDetail.end() != clusterIter);
					RadarCluster& refCluster = clusterIter->second;

					delClusterInVision(&refCluster, gFusionIntInfo);
					delClusterInFusion(refCluster, gFusionIntInfo);
				}

				if (targetClusterPtr->isInFusion)
				{
					//printf("fusionID: %d, ClusterID: %d\n", targetClusterPtr->fusionID, targetClusterPtr->ID);
					uint32_t fusionID = targetClusterPtr->fusionID;
					FusionObjInternalStateMap::iterator iterFus = gFusionIntInfo.fusObjIntState.find(fusionID);
					ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != iterFus);

					delClusterInFusion(*targetClusterPtr, gFusionIntInfo);

					Del_Empty_Track(&gFusionIntInfo, iterFus);
				}

				targetClusterPtr->fusionID = refVisTrackDetail.associatedFusObjID;
				targetClusterPtr->isInvision = 1;
				targetClusterPtr->visionID = refVisTrackDetail.obj_ID;
				targetClusterPtr->isInFusion = 1;

				FusionObjInternalStateMap::iterator iterFus = gFusionIntInfo.fusObjIntState.find(refVisTrackDetail.associatedFusObjID);
				ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != iterFus);
				FusionObjInternalState& refFusion = iterFus->second;

				refFusion.isClusterInside = 1;
				refFusion.clusterID = targetClusterPtr->ID;

				refVisTrackDetail.associatedClusterID = targetClusterPtr->ID;
				refVisTrackDetail.isClusterInside = 1;
			}
			else 
			{
				delVisionInCluster(refVisTrackDetail, gFusionIntInfo);

				if (targetClusterPtr->isInFusion)
				{
					FusionObjInternalStateMap::iterator iterFus = gFusionIntInfo.fusObjIntState.find(targetClusterPtr->fusionID);
					ZONE_Assert(gFusionIntInfo.fusObjIntState.end() != iterFus);
					FusionObjInternalState& refFusion = iterFus->second;

					refFusion.isVisInside = 1;
					refFusion.visID = refVisTrackDetail.obj_ID;
					targetClusterPtr->isInvision = 1;
					targetClusterPtr->visionID = refVisTrackDetail.obj_ID;

					refVisTrackDetail.isClusterInside = 1;
					refVisTrackDetail.isInFusionObj = 1;
					refVisTrackDetail.associatedClusterID = targetClusterPtr->ID;
					refVisTrackDetail.associatedFusObjID = refFusion.id;
				}
				else {
					targetClusterPtr->isInvision = 1;
					targetClusterPtr->visionID = refVisTrackDetail.obj_ID;

					refVisTrackDetail.isClusterInside = 1;
					refVisTrackDetail.associatedClusterID = targetClusterPtr->ID;
				}
			}

		}
		else if(refVisTrackDetail.obj_type == VISION_TYPE_TRUCK && (f_maxPro >  (gFusionAlgParameter.ASSOCIATION_SCORETHRES * 0.2)) && 
			(targetClusterPtr->visionID == refVisTrackDetail.obj_ID) && (targetClusterPtr->isInvision == 1))
		{
			targetClusterPtr->isAssociate = true;
		}
		else
		{
			/*if this radar track can not associate any vision track, delete the previous association*/
			if (refVisTrackDetail.isClusterInside)
			{
				//RadarCluster& refClusterDetail = pFusionSystemInternalInfo->clusterDetail.at(refVisTrackDetail.associatedClusterID);
				RadarClusterMap::iterator iterCluster = gFusionIntInfo.clusterDetail.find(refVisTrackDetail.associatedClusterID);
				ZONE_Assert(gFusionIntInfo.clusterDetail.end() != iterCluster);
				RadarCluster& refClusterDetail = iterCluster->second;
			
				delClusterInVision(&refClusterDetail, gFusionIntInfo);
				delClusterInFusion(refClusterDetail, gFusionIntInfo);
				//delVisionInFusion(refVisTrackDetail, gFusionIntInfo);
			}

		}
#endif

	}
}

void ClusterClusterAssociation() {
	ClusterManager_Group_Run_V();
	ClusterManager_Splitter_Run_V();
	ClusterManager_ClusterUpdate_Run_V();
}