/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_update.cpp
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

#include "fusion_update_pub.h"
#include "fusion_update_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        FusionTrackManager_FusionUpdate_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_FusionUpdate_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        FusionTrackManager_FusionUpdate_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_FusionUpdate_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        FusionTrackManager_FusionUpdate_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_FusionUpdate_Run_V(void)
{
	UpdatePara();
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        UpdatePara
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/

void UpdatePara(void)
{
	int i_fusionID = -1;

	for (FusionObjInternalStateMap::iterator iterFusion = gFusionIntInfo.fusObjIntState.begin(); iterFusion != gFusionIntInfo.fusObjIntState.end(); ++iterFusion)
	{
		FusionObjInternalState& refFusObjIntState = iterFusion->second;
		SelectReferencePoint(&refFusObjIntState);
		UpdateReferencePoint(&gFusionIntInfo, &refFusObjIntState);

		//update position & velocity
		FilterForTrackKF(&refFusObjIntState, &gFusionIntInfo);
		UpdateType(&gFusionIntInfo, &refFusObjIntState);
		UpdateBoundary(&refFusObjIntState);
	}
}
/*******************************************************************************
* @name        SelectReferencePoint
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/
sint8 SelectReferencePoint(FusionObjInternalState* pFusionObjInternalState)
{

	if (pFusionObjInternalState->isVisInside == 0 && pFusionObjInternalState->isClusterInside == 0)
	{
		pFusionObjInternalState->referencePointID = (FUSION_MOTION_ONCOMING == pFusionObjInternalState->motionPatternCurrent) ? FRONT_CENTER : REAR_CENTER;
		return 0;
	}

	//vision inside,use the vision center as reference point,usually no. 0
	if (pFusionObjInternalState->isVisInside == 1)
	{
		pFusionObjInternalState->referencePointID = (FUSION_MOTION_ONCOMING == pFusionObjInternalState->motionPatternCurrent) ? FRONT_CENTER : REAR_CENTER;
	}
	else
	{
		if (TRACK_STATUS_NEW == pFusionObjInternalState->trackStatus) //new track
		{
			if (pFusionObjInternalState->latPosn> (VEHICLE_WIDTH / 2.0f))
			{
				pFusionObjInternalState->referencePointID = (FUSION_MOTION_ONCOMING == pFusionObjInternalState->motionPatternCurrent) ? FRONT_LEFT : REAR_RIGHT;
			}
			else if (pFusionObjInternalState->latPosn < (-VEHICLE_WIDTH / 2.0f))
			{
				pFusionObjInternalState->referencePointID = (FUSION_MOTION_ONCOMING == pFusionObjInternalState->motionPatternCurrent) ? FRONT_RIGHT : REAR_LEFT;
			}
			else
			{
				pFusionObjInternalState->referencePointID = (FUSION_MOTION_ONCOMING == pFusionObjInternalState->motionPatternCurrent) ? FRONT_CENTER : REAR_CENTER;
			}
		}
		else
		{
			float32 halfLength, halfWidth, halfDist, sinVal, cosVal;
			sint8 i_referenceID = -1;
			sinVal = sin(pFusionObjInternalState->headingAngle);
			cosVal = cos(pFusionObjInternalState->headingAngle);
			//get boundary box center
			float32 Xcenter_b = pFusionObjInternalState->obj_boundary.Xcenter*cosVal + pFusionObjInternalState->obj_boundary.Ycenter*sinVal;
			float32 Ycenter_b = -pFusionObjInternalState->obj_boundary.Xcenter*sinVal + pFusionObjInternalState->obj_boundary.Ycenter*cosVal;
			//(-Xcenter_b,-Ycenter_b)
			halfLength = 0.5F * pFusionObjInternalState->length;
			halfWidth = 0.5F * pFusionObjInternalState->width;
			halfDist = sqrtf(halfLength * halfLength + halfWidth * halfWidth);
			float32 f_rp_angle[8];//8 reference points


			//float f_center_distance = SM_SQRT(f_center_x * f_center_x + f_center_y * f_center_y);
			// cos(angle) = (a*b)/(|a||b|), angle in [0 pi], we want find the min angle,
			// here we only find the max value of (a*b)/(|a|) because |b| is the same positive coefficient
			// and function cos is monotone decreasing from 0 to pi.
			f_rp_angle[0] = (halfLength * Xcenter_b) / halfLength;                           //(-halfLength,0);
			f_rp_angle[1] = (halfLength * Xcenter_b + halfWidth * Ycenter_b) / halfDist;    //(-halfLength,-halfWidth);
			f_rp_angle[2] = (halfWidth * Ycenter_b) / halfWidth;                            //(0,-halfWidth);
			f_rp_angle[3] = (-halfLength * Xcenter_b + halfWidth * Ycenter_b) / halfDist;  //(halfLength -halfWidth);
			f_rp_angle[4] = (-halfLength * Xcenter_b) / halfLength;                        //(halfLength 0);
			f_rp_angle[5] = (-halfLength * Xcenter_b - halfWidth * Ycenter_b) / halfDist;   //(halfLength halfWidth);
			f_rp_angle[6] = (-halfWidth * Ycenter_b) / halfWidth;                          //(0 halfWidth);
			f_rp_angle[7] = (halfLength * Xcenter_b - halfWidth * Ycenter_b) / halfDist;  //(-halfLength halfWidth);

			//no vision,radar only,use the possible point which have the min angel with obj center

			i_referenceID = FindTheMinAnglePoint(f_rp_angle);
			pFusionObjInternalState->referencePointID = i_referenceID;
		}
	}
	return 0;
}
/*******************************************************************************
* @name        UpdateReferencePoint
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/
sint8 UpdateReferencePoint(FusionSystemInternalInfo* pFusionSystemInternalInfo,
	FusionObjInternalState* pFusionObjInternalState)
{
	float32 f_minX = 1000.0F, f_sumY = 0.0F;
	float32 cosVal = 1.0f, sinVal = 0.0f;
	float32 XPos_target = 0.0f, YPos_target = 0.0f, YPosAvg_target = 0.0f, XPosMin_target = 0.0f;
	bool radarPointIsSelected = false;
	uint32 neareastRadarID = -1;

	if (pFusionObjInternalState->isVisInside == 0 && pFusionObjInternalState->isClusterInside == 0)
	{
		return 0;
	}
	if ((pFusionObjInternalState->isVisInside == 1) && (pFusionObjInternalState->isClusterInside == 0))
	{
		VisTrackDetailMap::iterator visIter = pFusionSystemInternalInfo->visIntDetail.find(pFusionObjInternalState->visID);
		ZONE_Assert(pFusionSystemInternalInfo->visIntDetail.end() != visIter);
		VisTrackDetail& refVisTrackDetail = visIter->second;
		//vision only
		pFusionObjInternalState->fusionSource = 0;
		pFusionObjInternalState->visionOnlyFusionBefore = 1;
		pFusionObjInternalState->x_referencepoint = refVisTrackDetail.obj_coordinate.longitudinal;
		pFusionObjInternalState->y_referencepoint = refVisTrackDetail.obj_coordinate.lateral;
		pFusionObjInternalState->vx_referecncepoint = refVisTrackDetail.obj_velocity.Vx;
		pFusionObjInternalState->vy_referecncepoint = refVisTrackDetail.obj_velocity.Vy;
	}
	else if (pFusionObjInternalState->isClusterInside == 1)
	{
		// find cluster which is related with fusion.
		RadarClusterMap::iterator iterCluster = pFusionSystemInternalInfo->clusterDetail.find(pFusionObjInternalState->clusterID);
		ZONE_Assert(pFusionSystemInternalInfo->clusterDetail.end() != iterCluster);
		RadarCluster& refClusterDetail = iterCluster->second;
		// Only one radar is in cluster.
		if (1 == refClusterDetail.numOfRadar)
		{
			ZONE_Assert(!refClusterDetail.radarID.empty());
			uint16 radarID = refClusterDetail.radarID.begin()->first;
			RadarTrackDetailMap::iterator iterRadar = pFusionSystemInternalInfo->radarIntDetail.find(radarID);
			ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != iterRadar);
			RadarTrackDetail &refRadarTrackDetail = iterRadar->second;
			// record the radar ID number and enable the flag that tell us reference point is found.
			neareastRadarID = refRadarTrackDetail.objID;
			radarPointIsSelected = true;
		}
		else
		{
			// record the best radar ID when multi-radars is in cluster.
			cosVal = cos(pFusionObjInternalState->headingAngle);
			sinVal = sin(pFusionObjInternalState->headingAngle);
			uint32 tempNeareastRadarID = -1;
			float32 objectLongPos = pFusionObjInternalState->longPosn;
			float32 objectLatPos = pFusionObjInternalState->latPosn;
			float32 objectRange = sqrtf((objectLongPos * objectLongPos) + objectLatPos * objectLatPos);
			for (radarIdMap::iterator iterRadarId = refClusterDetail.radarID.begin(); iterRadarId != refClusterDetail.radarID.end(); ++iterRadarId)
			{
				uint16 radarID = iterRadarId->first;
				RadarTrackDetailMap::iterator iterRadar = pFusionSystemInternalInfo->radarIntDetail.find(radarID);
				ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != iterRadar);
				RadarTrackDetail &refRadarTrackDetail = iterRadar->second;
				// convert X in Host Coordinate System to X in Target Host Coordinate System;
				XPos_target = refRadarTrackDetail.objXPos * cosVal + refRadarTrackDetail.objYPos * sinVal;
				if (objectRange < FLOAT_ZERO)
				{
					YPos_target = refRadarTrackDetail.objYPos;
				}
				else
				{
					//YPos_target = -refRadarTrackDetail.objXPos * sinVal + refRadarTrackDetail.objYPos * cosVal;
					YPos_target = (-refRadarTrackDetail.objXPos * objectLatPos + refRadarTrackDetail.objYPos * objectLongPos) / objectRange;
				}
				if (XPos_target < f_minX)
				{
					f_minX = XPos_target;
					//In TCS, get the closest track`s X,VX,VY as the reference point(fabs(YPos_target)<2.5f)
					if (fabs(YPos_target) < 1.25f)
					{
						neareastRadarID = refRadarTrackDetail.objID;
						radarPointIsSelected = true;
					}
					else
					{
						tempNeareastRadarID = refRadarTrackDetail.objID;
					}
				}
			}
			if ((!radarPointIsSelected) && (-1 != tempNeareastRadarID))
			{
				neareastRadarID = tempNeareastRadarID;
				radarPointIsSelected = true;
			}
		}
		if (pFusionObjInternalState->isVisInside == 1)
		{
			//vision & radar
			pFusionObjInternalState->fusionSource = 2;
			VisTrackDetailMap::iterator visIter = pFusionSystemInternalInfo->visIntDetail.find(pFusionObjInternalState->visID);
			ZONE_Assert(pFusionSystemInternalInfo->visIntDetail.end() != visIter);
			VisTrackDetail& refVisTrackDetail = visIter->second;
			if (radarPointIsSelected)
			{
				RadarTrackDetailMap::iterator iterRadar = pFusionSystemInternalInfo->radarIntDetail.find(neareastRadarID);
				ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != iterRadar);
				RadarTrackDetail &refRadar = iterRadar->second;
				float32 radarRange = sqrtf(refRadar.objXPos * refRadar.objXPos + refRadar.objYPos * refRadar.objYPos);
				// prepare for calculating the object angle that is detected by vision.
				float32 visionLongPos = refVisTrackDetail.obj_coordinate.longitudinal;
				float32 visionLatPos = refVisTrackDetail.obj_coordinate.lateral;
				float32 visionRange = sqrtf(visionLongPos * visionLongPos + visionLatPos * visionLatPos);
				if (visionRange < FLOAT_ZERO)
				{
					pFusionObjInternalState->x_referencepoint = refRadar.objXPos;
					pFusionObjInternalState->y_referencepoint = refRadar.objYPos;
				}
				else
				{
					// fusion radar's range and vision's position angle.
					pFusionObjInternalState->x_referencepoint = radarRange * visionLongPos / visionRange;
					pFusionObjInternalState->y_referencepoint = radarRange * visionLatPos / visionRange;
				}
				pFusionObjInternalState->vx_referecncepoint = refRadar.objXVelAbs;
				if (VISION_TYPE_PEDESTRAIN == refVisTrackDetail.obj_type)
				{
					pFusionObjInternalState->vy_referecncepoint = refRadar.objYVelAbs;
				}
				else
				{
					float32 coeffVy = powf(0.5F, refVisTrackDetail.obj_velocity.VyVariance);
					pFusionObjInternalState->vy_referecncepoint = coeffVy * refVisTrackDetail.obj_velocity.Vy + (1 - coeffVy) * refRadar.objYVelAbs;
				}
			}
		}
		else
		{
			pFusionObjInternalState->fusionSource = 1;
			if (radarPointIsSelected)
			{
				if (1 == refClusterDetail.numOfRadar)
				{
					RadarTrackDetailMap::iterator iterRadar = pFusionSystemInternalInfo->radarIntDetail.find(neareastRadarID);
					ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != iterRadar);
					RadarTrackDetail &refRadar = iterRadar->second;
					pFusionObjInternalState->y_referencepoint = refRadar.objYPos;
					pFusionObjInternalState->x_referencepoint = refRadar.objXPos;
					pFusionObjInternalState->vx_referecncepoint = refRadar.objXVelAbs;
					pFusionObjInternalState->vy_referecncepoint = refRadar.objYVelAbs;
				}
				else
				{
					RadarTrackDetailMap::iterator iterRadar = pFusionSystemInternalInfo->radarIntDetail.find(neareastRadarID);
					ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != iterRadar);
					RadarTrackDetail &refRadar = iterRadar->second;
					// convert X in Host Coordinate System to X/Y in Target Host Coordinate System;
					XPosMin_target = refRadar.objXPos * cosVal + refRadar.objYPos * sinVal;
					//get the average Y in TCS.
					for (radarIdMap::iterator iterRadarId = refClusterDetail.radarID.begin(); iterRadarId != refClusterDetail.radarID.end(); ++iterRadarId)
					{
						uint16 radarID = iterRadarId->first;
						RadarTrackDetailMap::iterator iterRadar = pFusionSystemInternalInfo->radarIntDetail.find(radarID);
						ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != iterRadar);
						RadarTrackDetail &refRadarTrackDetail = iterRadar->second;
						// convert Y in Host Coordinate System to X/Y in Target Host Coordinate System;
						YPos_target = -refRadarTrackDetail.objXPos * sinVal + refRadarTrackDetail.objYPos * cosVal;
						f_sumY = f_sumY + YPos_target;
					}
					YPosAvg_target = f_sumY / refClusterDetail.numOfRadar;
					// convert the X/Y in TCS to X/Y in HCS.
					pFusionObjInternalState->x_referencepoint = XPosMin_target * cosVal - YPosAvg_target * sinVal;
					pFusionObjInternalState->y_referencepoint = XPosMin_target * sinVal + YPosAvg_target * cosVal;
					pFusionObjInternalState->vx_referecncepoint = refRadar.objXVelAbs;
					pFusionObjInternalState->vy_referecncepoint = refRadar.objYVelAbs;
				}
			}

		}

	}
	return 0;
}
/*******************************************************************************
* @name        UpdateType
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/
sint8 UpdateType(FusionSystemInternalInfo* pFusionSystemInternalInfo, FusionObjInternalState* pFusionObjInternalState)
{
	uint8 oldObjType = pFusionObjInternalState->object_class;
	if (pFusionObjInternalState->isVisInside == 1)
	{
		//vision inside,use the type from vision
		VisTrackDetailMap::iterator visIter = pFusionSystemInternalInfo->visIntDetail.find(pFusionObjInternalState->visID);
		ZONE_Assert(pFusionSystemInternalInfo->visIntDetail.end() != visIter);
		VisTrackDetail& refVisTrackDetail = visIter->second;
		uint8 tmpType = VISION_TYPE_UNKNOWN;
		switch (refVisTrackDetail.obj_type)
		{
		case VISION_TYPE_PEDESTRAIN: // Pedestrian
			tmpType = FUSION_TYPE_PEDESTRAIN;
			break;
		case VISION_TYPE_CAR: // car
			tmpType = FUSION_TYPE_CAR;
			break;
		case VISION_TYPE_TRUCK: // truck
			tmpType = FUSION_TYPE_TRUCK;
			break;
		default:
			break;
		}

		pFusionObjInternalState->object_class = tmpType;

		if (gFusionAlgParameter.UPDATE_TYPEBYVISCNTCAR >= pFusionObjInternalState->visionConfirmCnt)
		{
			if ((FUSION_TYPE_UNKNOWN != pFusionObjInternalState->object_class)
				&& (16.0F > refVisTrackDetail.obj_velocity.VxVariance)
				&& (80.0F > pFusionObjInternalState->longPosn)
				&& (FUSION_SOURCE_RADAR_VISION == pFusionObjInternalState->fusionSource))
			{
				++pFusionObjInternalState->visionConfirmCnt;
			}
		}


	}

	// fast movable logic
	if (pFusionObjInternalState->fusionSource == 2 || pFusionObjInternalState->fusionSource == 1)
	{
		if (gFusionAlgParameter.UPDATE_FASTMOVSPEED <= pFusionObjInternalState->speed)
		{
			const float32 delta_T = (pFusionSystemInternalInfo->timeStamp - pFusionSystemInternalInfo->timeStampPrevious) / FUSION_US_TO_S;
			if (kTypeChangeTime <= pFusionObjInternalState->time_since_fast_moveable)
			{
				pFusionObjInternalState->IsFastMoveable = true;
			}
			else
			{
				pFusionObjInternalState->time_since_fast_moveable += delta_T;
			}
		}
		else
		{
			pFusionObjInternalState->time_since_fast_moveable = 0.0f;
		}

		RadarClusterMap::iterator iterCluster = pFusionSystemInternalInfo->clusterDetail.find(pFusionObjInternalState->clusterID);
		ZONE_Assert(pFusionSystemInternalInfo->clusterDetail.end() != iterCluster);
		RadarCluster& refRadarCluster = iterCluster->second;

		if ((2.0F <= pFusionObjInternalState->latAbsoluteVel)
			&& (35.0F < refRadarCluster.objObstacleProb)
			&& ((RADARTYPE_2WHEElER == refRadarCluster.objType) || (RADARTYPE_4WHEElER == refRadarCluster.objType)))
		{
			const float32 delta_T = (pFusionSystemInternalInfo->timeStamp - pFusionSystemInternalInfo->timeStampPrevious) / FUSION_US_TO_S;
			if (1.0F <= pFusionObjInternalState->time_since_fast_moveable_ped)
			{
				pFusionObjInternalState->IsFastMoveable_ped = true;
			}
			else
			{
				pFusionObjInternalState->time_since_fast_moveable_ped += delta_T;
			}
		}
		else
		{
			pFusionObjInternalState->time_since_fast_moveable_ped = 0.0f;
		}
	}

	if (pFusionObjInternalState->fusionSource == 1)//radar only 
	{
		RadarClusterMap::iterator iterCluster = pFusionSystemInternalInfo->clusterDetail.find(pFusionObjInternalState->clusterID);
		ZONE_Assert(pFusionSystemInternalInfo->clusterDetail.end() != iterCluster);
		RadarCluster& refRadarCluster = iterCluster->second;
		if (true == pFusionObjInternalState->IsFastMoveable)
		{
			if (RADARTYPE_UNKNOWN != refRadarCluster.objType)
			{
				radarIdMap::iterator iterRadarID = refRadarCluster.radarID.begin();
				for (; iterRadarID != refRadarCluster.radarID.end(); ++iterRadarID)
				{
					RadarTrackDetailMap::iterator radarIter = pFusionSystemInternalInfo->radarIntDetail.find(iterRadarID->first);
					ZONE_Assert(pFusionSystemInternalInfo->radarIntDetail.end() != radarIter);
					RadarTrackDetail& refRadarTemp = radarIter->second;
					if (RADARTYPE_2WHEElER == refRadarTemp.objType)
					{
						pFusionObjInternalState->object_class = FUSION_TYPE_MOTOCYCLE;
						break;
					}
				}

				if (refRadarCluster.radarID.end() == iterRadarID)
				{
					if ((FUSION_TYPE_UNKNOWN == oldObjType) || (FUSION_TYPE_MOTOCYCLE == oldObjType))
					{
						pFusionObjInternalState->object_class = FUSION_TYPE_CAR;
					}
					else
					{
						pFusionObjInternalState->object_class = oldObjType;
					}
				}
			}
		}
		else
		{
			pFusionObjInternalState->object_class = FUSION_TYPE_UNKNOWN;
		}

		if (gFusionAlgParameter.UPDATE_TYPEBYVISCNTCAR < pFusionObjInternalState->visionConfirmCnt
			&& (FUSION_TYPE_UNKNOWN == pFusionObjInternalState->object_class))
		{
			if (pFusionObjInternalState->isClusterInside)
			{
				RadarClusterMap::iterator iterCluster = pFusionSystemInternalInfo->clusterDetail.find(pFusionObjInternalState->clusterID);
				ZONE_Assert(pFusionSystemInternalInfo->clusterDetail.end() != iterCluster);
				RadarCluster& refRadarCluster = iterCluster->second;

				if ((gFusionAlgParameter.FUSIONGLOB_OBSROBTHRES < refRadarCluster.objObstacleProb) && (RELIABLE_EXISTPROB < refRadarCluster.objExsitProb))
				{
					pFusionObjInternalState->object_class = oldObjType;
				}
			}
		}
	}

	// a fast movable pedestrian should be set as unknown car due the limit of vision classification
	if (FUSION_TYPE_PEDESTRAIN == pFusionObjInternalState->object_class)
	{
		if (pFusionObjInternalState->IsFastMoveable_ped)
		{
			pFusionObjInternalState->object_class = FUSION_TYPE_UNKCAR;
		}
	}

	return 0;
}
/*******************************************************************************
* @name        UpdateType
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/
sint8 UpdateBoundary(FusionObjInternalState* pFusionObjInternalState)
{

	float32 halfLength, halfWidth, sinVal, cosVal;
	//width,length,heading angle
	switch (pFusionObjInternalState->object_class)
	{
	case FUSION_TYPE_PEDESTRAIN://Pedestrian
		pFusionObjInternalState->width = PEDESTRIAN_WIDTH;
		pFusionObjInternalState->length = PEDESTRIAN_LONG;
		break;
	case FUSION_TYPE_CAR://vehicle
		pFusionObjInternalState->width = VEHICLE_WIDTH;
		pFusionObjInternalState->length = VEHICLE_LONG;
		break;
	case FUSION_TYPE_TRUCK://truck
		pFusionObjInternalState->width = VEHICLE_WIDTH;
		pFusionObjInternalState->length = VEHICLE_LONG;
		break;
	default:
		pFusionObjInternalState->width = PEDESTRIAN_WIDTH;
		pFusionObjInternalState->length = PEDESTRIAN_LONG;
		break;
	}
	sinVal = sin(pFusionObjInternalState->headingAngle);
	cosVal = cos(pFusionObjInternalState->headingAngle);
	//b box
	switch (pFusionObjInternalState->referencePointID)
	{
	case REAR_CENTER:
		//back center
		halfLength = 0.5F * pFusionObjInternalState->length;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn + halfLength*cosVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn + halfLength*sinVal;
		break;
	case REAR_RIGHT:
		//right back
		halfLength = 0.5F * pFusionObjInternalState->length;
		halfWidth = 0.5F * pFusionObjInternalState->width;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn + halfLength*cosVal - halfWidth*sinVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn + halfWidth*cosVal + halfLength*sinVal;
		break;
	case RIGHT_CENTER:
		//right center
		halfWidth = 0.5F * pFusionObjInternalState->width;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn - halfWidth*sinVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn + halfWidth*cosVal;
		break;
	case FRONT_RIGHT:
		//right front
		halfLength = 0.5F * pFusionObjInternalState->length;
		halfWidth = 0.5F * pFusionObjInternalState->width;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn - halfLength*cosVal - halfWidth*sinVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn + halfWidth*cosVal - halfLength*sinVal;
		break;
	case FRONT_CENTER:
		//front center
		halfLength = 0.5F * pFusionObjInternalState->length;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn - halfLength*cosVal;//
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn - halfLength*sinVal;
		break;
	case FRONT_LEFT:
		//left front
		halfLength = 0.5F * pFusionObjInternalState->length;
		halfWidth = 0.5F * pFusionObjInternalState->width;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn - halfLength*cosVal + halfWidth*sinVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn - halfWidth*cosVal - halfLength*sinVal;
		break;
	case REAR_LEFT:
		//left back
		halfLength = 0.5F * pFusionObjInternalState->length;
		halfWidth = 0.5F * pFusionObjInternalState->width;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn + halfLength*cosVal + halfWidth*sinVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn - halfWidth*cosVal + halfLength*sinVal;
		break;
	case LEFT_CENTER:
		//left center
		halfWidth = 0.5F * pFusionObjInternalState->width;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn + halfWidth*sinVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn - halfWidth*cosVal;
		break;
	default:
		halfLength = 0.5F * pFusionObjInternalState->length;
		pFusionObjInternalState->obj_boundary.Xcenter = pFusionObjInternalState->longPosn + halfLength*cosVal;
		pFusionObjInternalState->obj_boundary.Ycenter = pFusionObjInternalState->latPosn + halfLength*sinVal;
		break;
	}

	return 0;

}
/*******************************************************************************
* @name        UpdateType
* @brief
* @param[in]   none
* @param[out]  none
* @return      none
* @see         none
* @note        none
******************************************************************************/
sint8 FilterForTrackKF(FusionObjInternalState* pFusionObjInternalState, FusionSystemInternalInfo* pFusionSystemInternalInfo)
{
	//static const float K1[6][4] = { { 0.143654F  ,   0.0F			,   0.035485F  ,   0.0F },\
		//								{ 0.0F		   ,   0.200609F     ,   0.0F		  ,   0.036045F },\
	//								{ 0.035485F  ,   0.0F		    ,   0.369633F  ,   0.0F        },\
	//								{ 0.0F		   ,   0.072091F     ,   0.0F		  ,   0.234113F },\
	//								{ -0.005149F ,   0.0F			,   1.869612F  ,   0.0F        },\
	//								{ 0.0F		   ,   0.048902F     ,   0.0F		  ,   0.725432F } };					// constant gain
//static const float K2[6][4] = { { 0.143654F  ,   0.0F			,   0.035485F  ,   0.0F },\
	//{ 0.0F		   ,   0.083795F		,   0.0F		  ,   0.034012F },\
	//{ 0.035485F  ,   0.0F			,   0.369633F  ,   0.0F		   },\
	//{ 0.0F		   ,   0.036048F		,   0.0F		  ,   0.128592F },\
	//{ 0.005149F ,   0.0F			,   1.869612F  ,   0.0F		   },\
	//{ 0.0F		   ,   0.123042F		,   0.0F		  ,   0.998347F } };					// constant

	static  float K1[6][4] = { { gFusionAlgParameter.UPDATE_FK11  ,   0.0F			,  gFusionAlgParameter.UPDATE_FK13  ,   0.0F },\
	{ 0.0F		   , gFusionAlgParameter.UPDATE_FK22,   0.0F		  , gFusionAlgParameter.UPDATE_FK23 },\
	{ gFusionAlgParameter.UPDATE_FK31,   0.0F		    , gFusionAlgParameter.UPDATE_FK33,   0.0F        },\
	{ 0.0F		   , gFusionAlgParameter.UPDATE_FK42,   0.0F		  , gFusionAlgParameter.UPDATE_FK43 },\
	{ gFusionAlgParameter.UPDATE_FK51,   0.0F			, gFusionAlgParameter.UPDATE_FK53,   0.0F        },\
	{ 0.0F		   , gFusionAlgParameter.UPDATE_FK62,   0.0F		  , gFusionAlgParameter.UPDATE_FK63 } };					// constant gain

	static  float K2[6][4] = { { gFusionAlgParameter.UPDATE_RK11  ,   0.0F			,  gFusionAlgParameter.UPDATE_RK13  ,   0.0F },\
	{ 0.0F		   , gFusionAlgParameter.UPDATE_RK22,   0.0F		  , gFusionAlgParameter.UPDATE_RK23 },\
	{ gFusionAlgParameter.UPDATE_RK31,   0.0F		    , gFusionAlgParameter.UPDATE_RK33,   0.0F        },\
	{ 0.0F		   , gFusionAlgParameter.UPDATE_RK42,   0.0F		  , gFusionAlgParameter.UPDATE_RK43 },\
	{ gFusionAlgParameter.UPDATE_RK51,   0.0F			, gFusionAlgParameter.UPDATE_RK53,   0.0F        },\
	{ 0.0F		   , gFusionAlgParameter.UPDATE_RK62,   0.0F		  , gFusionAlgParameter.UPDATE_RK63 } };			// constant

	float32 dx, dy, dvx, dvy;	
		
	if ((TRACK_STATUS_NEW == pFusionObjInternalState->trackStatus)) //new track,predict values are 0;
		//|| ((2 == pFusionObjInternalState->fusionSource) && (1 == pFusionObjInternalState->visionOnlyFusionBefore)))
	{
		if (2 == pFusionObjInternalState->fusionSource) 
		{
			pFusionObjInternalState->visionOnlyFusionBefore = 0;
		}
		pFusionObjInternalState->longPosn = pFusionObjInternalState->x_referencepoint;
		pFusionObjInternalState->latPosn = pFusionObjInternalState->y_referencepoint;
		pFusionObjInternalState->longAbsoluteVel = pFusionObjInternalState->vx_referecncepoint;
		pFusionObjInternalState->latAbsoluteVel = pFusionObjInternalState->vy_referecncepoint;
		//pFusionObjInternalState->longRelativeVel = pFusionObjInternalState->referencePointObjRelVx;
		//pFusionObjInternalState->latRelativeVel = pFusionObjInternalState->referencePointObjRelVy;
		pFusionObjInternalState->f_is_moveable = false;
		pFusionObjInternalState->f_is_moving = false;
		pFusionObjInternalState->f_is_oncoming = false;
		pFusionObjInternalState->f_is_receding = false;
		pFusionObjInternalState->motionCunt = 0;
		pFusionObjInternalState->motionPatternHistory = FUSION_MOTION_STATIONARY;
		pFusionObjInternalState->motionPatternCurrent = FUSION_MOTION_UNKNOWN;
	}

	dx = pFusionObjInternalState->x_referencepoint - pFusionObjInternalState->longPosn;
	dy = pFusionObjInternalState->y_referencepoint - pFusionObjInternalState->latPosn;
	dvx = pFusionObjInternalState->vx_referecncepoint - pFusionObjInternalState->longAbsoluteVel;
	dvy = pFusionObjInternalState->vy_referecncepoint - pFusionObjInternalState->latAbsoluteVel;

#if 1
	if ((-4.0F > dx || 4.0F < dx)
		|| (-4.0F > dy || 4.0F < dy)
		|| (-4.0F > dvx || 4.0F < dvx)
		|| (-4.0F > dvy || 4.0F < dvy))
	{
		pFusionObjInternalState->longPosn = pFusionObjInternalState->x_referencepoint;
		pFusionObjInternalState->latPosn = pFusionObjInternalState->y_referencepoint;
		pFusionObjInternalState->longAbsoluteVel = pFusionObjInternalState->vx_referecncepoint;
		pFusionObjInternalState->latAbsoluteVel = pFusionObjInternalState->vy_referecncepoint;
		dx = 0.0F;
		dy = 0.0F;
		dvx = 0.0F;
		dvy = 0.0F;
	}
	else
	{
		dx = ConstrainFloat(dx, -gFusionAlgParameter.UPDATE_DXLIMIT, gFusionAlgParameter.UPDATE_DXLIMIT);
		dy = ConstrainFloat(dy, -gFusionAlgParameter.UPDATE_DYLIMIT, gFusionAlgParameter.UPDATE_DYLIMIT);
		dvx = ConstrainFloat(dvx, -gFusionAlgParameter.UPDATE_DVXLIMIT, gFusionAlgParameter.UPDATE_DVXLIMIT);
		dvy = ConstrainFloat(dvy, -gFusionAlgParameter.UPDATE_DVYLIMIT, gFusionAlgParameter.UPDATE_DVYLIMIT);
	}
#else

	dx = ConstrainFloat(dx, -gFusionAlgParameter.UPDATE_DXLIMIT, gFusionAlgParameter.UPDATE_DXLIMIT);
	dy = ConstrainFloat(dy, -gFusionAlgParameter.UPDATE_DYLIMIT, gFusionAlgParameter.UPDATE_DYLIMIT);
	dvx = ConstrainFloat(dvx, -gFusionAlgParameter.UPDATE_DVXLIMIT, gFusionAlgParameter.UPDATE_DVXLIMIT);
	dvy = ConstrainFloat(dvy, -gFusionAlgParameter.UPDATE_DVYLIMIT, gFusionAlgParameter.UPDATE_DVYLIMIT);

#endif

	if (pFusionObjInternalState->isVisInside == 0 && pFusionObjInternalState->isClusterInside == 0)
	{
		return 0;  // no radar & vision, no update;
	}

	if (pFusionObjInternalState->fusionSource == 0)			//0 : Vision only, update the status with the vision value directly, no filter.
	{
		//const float32 delta_T = (pFusionSystemInternalInfo->timeStamp - pFusionSystemInternalInfo->timeStampPrevious) / FUSION_US_TO_S;
		if (true == pFusionObjInternalState->visionOnlyIsInBlindZone)
		{
			//pFusionObjInternalState->time_since_vision_only += delta_T;
			//return 0;
		}
		else
		{
			//pFusionObjInternalState->time_since_vision_only = 0;
	/*		pFusionObjInternalState->longPosn = pFusionObjInternalState->x_referencepoint;
			pFusionObjInternalState->latPosn = pFusionObjInternalState->y_referencepoint;
			pFusionObjInternalState->longAbsoluteVel = pFusionObjInternalState->vx_referecncepoint;
			pFusionObjInternalState->latAbsoluteVel = pFusionObjInternalState->vy_referecncepoint;*/
		/*	pFusionObjInternalState->longAbsoluteAcceleration = 0.0F;
			pFusionObjInternalState->latAbsoluteAcceleration = 0.0F;*/
			float32_t a = 0.7;
			float32_t b = 1 - 0.7;
			if (pFusionObjInternalState->time_since_radar_vision < 0.25
				&& pFusionObjInternalState->time_since_radar_vision >0 ) {
				a = 0.4;
				b = 1 - a;
			}

		pFusionObjInternalState->longPosn = b*pFusionObjInternalState->longPosn +a* pFusionObjInternalState->x_referencepoint;
		pFusionObjInternalState->latPosn =b* pFusionObjInternalState->latPosn + a*pFusionObjInternalState->y_referencepoint;
		pFusionObjInternalState->longAbsoluteVel = b* pFusionObjInternalState->longAbsoluteVel + a*pFusionObjInternalState->vx_referecncepoint;
		pFusionObjInternalState->latAbsoluteVel = b*pFusionObjInternalState->latAbsoluteVel + a*pFusionObjInternalState->vy_referecncepoint;
		pFusionObjInternalState->longAbsoluteAcceleration = pFusionObjInternalState->longAbsoluteAcceleration * 0.7;
		pFusionObjInternalState->latAbsoluteAcceleration = pFusionObjInternalState->latAbsoluteAcceleration * 0.7;
		}
	}
	else if (pFusionObjInternalState->fusionSource == 1)	//1 : Radar only
	{
		pFusionObjInternalState->longPosn = pFusionObjInternalState->longPosn + K1[0][0] * dx + K1[0][2] * dvx;
		pFusionObjInternalState->latPosn = pFusionObjInternalState->latPosn + K1[1][1] * dy + K1[1][3] * dvy;
		pFusionObjInternalState->longAbsoluteVel = pFusionObjInternalState->longAbsoluteVel + K1[2][0] * dx + K1[2][2] * dvx;
		pFusionObjInternalState->latAbsoluteVel = pFusionObjInternalState->latAbsoluteVel + K1[3][1] * dy + K1[3][3] * dvy;
		pFusionObjInternalState->longAbsoluteAcceleration = pFusionObjInternalState->longAbsoluteAcceleration + K1[4][0] * dx + K1[4][2] * dvx;
		pFusionObjInternalState->latAbsoluteAcceleration = pFusionObjInternalState->latAbsoluteAcceleration + K1[5][1] * dy + K1[5][3] * dvy;
	}
	else if (pFusionObjInternalState->fusionSource == 2)	//2 : Fused radar vision
	{
		pFusionObjInternalState->longPosn = pFusionObjInternalState->longPosn + K2[0][0] * dx + K2[0][2] * dvx;
		pFusionObjInternalState->latPosn = pFusionObjInternalState->latPosn + K2[1][1] * dy + K2[1][3] * dvy;
		pFusionObjInternalState->longAbsoluteVel = pFusionObjInternalState->longAbsoluteVel + K2[2][0] * dx + K2[2][2] * dvx;
		pFusionObjInternalState->latAbsoluteVel = pFusionObjInternalState->latAbsoluteVel + K2[3][1] * dy + K2[3][3] * dvy;
		pFusionObjInternalState->longAbsoluteAcceleration = pFusionObjInternalState->longAbsoluteAcceleration + K2[4][0] * dx + K2[4][2] * dvx;
		pFusionObjInternalState->latAbsoluteAcceleration = pFusionObjInternalState->latAbsoluteAcceleration + K2[5][1] * dy + K2[5][3] * dvy;
		if (pFusionObjInternalState->time_since_racam_fusion < 0.25
			&& pFusionObjInternalState->time_since_racam_fusion >0) {
			float32_t	a = 0.6;
			float32_t	b = 1 - a;
			pFusionObjInternalState->longPosn = pFusionObjInternalState->longPosn * a + pFusionObjInternalState->predLongPosn *b;
			pFusionObjInternalState->latPosn = pFusionObjInternalState->latPosn *a + pFusionObjInternalState->predLatPosn * b;
			pFusionObjInternalState->longAbsoluteVel = pFusionObjInternalState->longAbsoluteVel *a + pFusionObjInternalState->predVx *b;
			pFusionObjInternalState->latAbsoluteVel = pFusionObjInternalState->latAbsoluteVel *a + pFusionObjInternalState->predVy *b;
		}
	}
	pFusionObjInternalState->speed = sqrtf((pFusionObjInternalState->longAbsoluteVel * pFusionObjInternalState->longAbsoluteVel) + (pFusionObjInternalState->latAbsoluteVel * pFusionObjInternalState->latAbsoluteVel));
	pFusionObjInternalState->acceleration = sqrtf((pFusionObjInternalState->longAbsoluteAcceleration * pFusionObjInternalState->longAbsoluteAcceleration) + (pFusionObjInternalState->latAbsoluteAcceleration * pFusionObjInternalState->latAbsoluteAcceleration));

	//pFusionObjInternalState->speed = (pFusionObjInternalState->longVel >0.0F ? 1 : -1) * pFusionObjInternalState->speed;
	pFusionObjInternalState->acceleration = (pFusionObjInternalState->longAbsoluteAcceleration >0.0F ? 1 : -1) * pFusionObjInternalState->acceleration;

	if (pFusionObjInternalState->speed > gFusionAlgParameter.UPDATE_VALSPEEDHEAD)
	{
		pFusionObjInternalState->time_since_heading_unknown = 0.0F;
		const float32 delta_T = (pFusionSystemInternalInfo->timeStamp - pFusionSystemInternalInfo->timeStampPrevious) / FUSION_US_TO_S;
		if (pFusionObjInternalState->time_since_heading_valid > kHeadingAngleChangeTime)
		{
			pFusionObjInternalState->headingAngle = atan2f(pFusionObjInternalState->latAbsoluteVel, pFusionObjInternalState->longAbsoluteVel);
		}
		else
		{
			pFusionObjInternalState->time_since_heading_valid += delta_T;
		}
	}
	else
	{
		pFusionObjInternalState->time_since_heading_valid = 0.0F;
		const float32 delta_T = (pFusionSystemInternalInfo->timeStamp - pFusionSystemInternalInfo->timeStampPrevious) / FUSION_US_TO_S;
		if (pFusionObjInternalState->time_since_heading_unknown > kHeadingAngleChangeTime)
		{
			pFusionObjInternalState->headingAngle = 0.0F;
		}
		else
		{
			pFusionObjInternalState->time_since_heading_unknown += delta_T;
		}
	}

	return 0;
}