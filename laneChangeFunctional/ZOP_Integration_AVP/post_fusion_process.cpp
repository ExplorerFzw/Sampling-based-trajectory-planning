/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : post_fusion_process.cpp
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
#include "post_fusion_process_pub.h"
#include "post_fusion_process_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        FusionTrackManager_PostFusionProcess_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_PostFusionProcess_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        ClusterManager_ClusterUpdate_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_PostFusionProcess_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        ClusterManager_ClusterUpdate_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionTrackManager_PostFusionProcess_Run_V(void)
{
	int32_t	status = ZONE_RETURN_OK;

	status = PostFusionProcess_Bookkeeping();

	//ZONE_Assert(ZONE_RETURN_OK == status);

	status = PostFusionProcess_Confidence();

	//ZONE_Assert(ZONE_RETURN_OK == status);

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_Bookkeeping
* @brief	   Bookkeeping, Update track status : updated, coasted, etc.
*			   and Update track motion status : static, moving, stopped, etc
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_Bookkeeping()
{
	ZONE_INFO("running to: %s\r\n", __FUNCTION__);

	FusionSystemInternalInfo*	pFusIntInfo = &gFusionIntInfo;

	// Scan delta time in second
	// modified by meepo
	//const float32 delta_T = (pFusIntInfo->timeStamp - pFusIntInfo->timeStampPrevious) / FUSION_US_TO_S;

	const float32 delta_T = 0.045;

	for (FusionObjInternalStateMap::iterator iterFusion = pFusIntInfo->fusObjIntState.begin();
	iterFusion != pFusIntInfo->fusObjIntState.end();) {
		if (TRACK_STATUS_INVALID == iterFusion->second.trackStatus) {
			++iterFusion;
			// Skip invalid track
			continue;
		}
		FusionObjInternalState& fusObjIntState = iterFusion->second;

		/*if this fusion track is new added, do not need to update its track status, keep NEW*/
		if (FLOAT_ZERO < fusObjIntState.age)
		{
			// Update track status : updated, coasted, etc.
			bool f_is_new_info = false;
			// Check if there is new vision info
			if (fusObjIntState.isVisInside) {

				VisTrackDetailMap::iterator visIter = pFusIntInfo->visIntDetail.find(fusObjIntState.visID);
				ZONE_Assert(pFusIntInfo->visIntDetail.end() != visIter);
				VisTrackDetail& refVisTrackDetail = visIter->second;
				if (refVisTrackDetail.obj_status == VISION_OBJSTATUS_MEASURED) {
					f_is_new_info = true;
				}
			}
			// Check if there is any new radar info
			if (fusObjIntState.isClusterInside)
			{
				RadarClusterMap::iterator iterCluster = pFusIntInfo->clusterDetail.find(fusObjIntState.clusterID);
				ZONE_Assert(pFusIntInfo->clusterDetail.end() != iterCluster);
				RadarCluster& refClusterDetail = iterCluster->second;
				for (radarIdMap::iterator iterRadarId = refClusterDetail.radarID.begin(); iterRadarId != refClusterDetail.radarID.end(); ++iterRadarId) {
					RadarTrackDetailMap::iterator iterRadar = pFusIntInfo->radarIntDetail.find(iterRadarId->first);
					ZONE_Assert(pFusIntInfo->radarIntDetail.end() != iterRadar);
					RadarTrackDetail &refRadar = iterRadar->second;
					if (refRadar.objMeasFlag == 0) {
						// At least one radar track is updated.
						f_is_new_info = true;
						break;
					}
				}
			}

			// Set track status
			if (f_is_new_info) {
				// There is update
				fusObjIntState.trackStatus = TRACK_STATUS_UPDATED; //updated
																   // Clear the timer
				fusObjIntState.time_since_mea_update = 0.0F;
			}
			else {
				// Target is coasted
				fusObjIntState.trackStatus = TRACK_STATUS_COASTED; //coasted
																   // Cumulate the timer
				fusObjIntState.time_since_mea_update += delta_T;
			}

			if (kMaxCoastedTime < fusObjIntState.time_since_mea_update) {
				//Kill the track if it is coasted too long
				iterFusion = Del_Track(pFusIntInfo, iterFusion);
				continue;
			}
			// Update the time_since_radar_vision
			if ((fusObjIntState.isClusterInside == 1) && (1 == fusObjIntState.isVisInside)) {
				// If in this cycle the track has both radar and vision,
				// then reset the timer to 0, indicating that the track is currently
				// a radar-vision track
				fusObjIntState.time_since_radar_vision = 0.0F;
				fusObjIntState.time_since_racam_fusion += delta_T;
			}
			else {
				// This track only has either radar or vision, not both
				fusObjIntState.time_since_racam_fusion = 0.0F;
				if (-0.5F <= fusObjIntState.time_since_radar_vision) {
					// time_since_radar_vision >= 0 means this track was RV once before (or currently)
					// then we cumulate the timer.
					fusObjIntState.time_since_radar_vision += delta_T;
				}
				else {
					// 0 > fusObjIntState.time_since_radar_vision means this track has
					// never been a radar-vision track, we keep the timer
					// as a negative value.
				}
			}

		}
		else {
			// If this track is initialized in this cycle
			fusObjIntState.time_since_racam_fusion = 0.0F;
			if ((fusObjIntState.isClusterInside == 1) && (1 == fusObjIntState.isVisInside)) {
				// If the track has both radar and vision
				fusObjIntState.time_since_radar_vision = 0.0F;
			}
			else {
				// Initialize this timer as -1 indicating it has never been RV track.
				fusObjIntState.time_since_radar_vision = -1.0F;
			}
		}

		// Update the object age
		fusObjIntState.age += delta_T;

		// Update track motion status : static, moving, stopped, etc
		if (true == fusObjIntState.f_is_moving)
		{
			if (true == fusObjIntState.f_is_oncoming)
			{
				if (MotionStopVehTsThr < fusObjIntState.longAbsoluteVel)
				{
					++fusObjIntState.motionCunt;
				}
				else
				{
					fusObjIntState.motionCunt = 0;
				}
			}
			else
			{
				if (MotionStopVehFsThr > fusObjIntState.longAbsoluteVel)
				{
					++fusObjIntState.motionCunt;
				}
				else
				{
					fusObjIntState.motionCunt = 0;
				}
			}
			if (kMotionPatternChangeCunt <= fusObjIntState.motionCunt)
			{
				fusObjIntState.motionCunt = 0;
				fusObjIntState.f_is_moving = false;
				fusObjIntState.f_is_oncoming = false;
				fusObjIntState.f_is_receding = false;
			}
		}
		else
		{
			if ((MotionDrivingVehFsThr < fusObjIntState.longAbsoluteVel) || (MotionDrivingVehTsThr > fusObjIntState.longAbsoluteVel))
			{
				++fusObjIntState.motionCunt;
				if (kMotionPatternChangeCunt <= fusObjIntState.motionCunt)
				{
					fusObjIntState.motionCunt = 0;
					fusObjIntState.f_is_moving = true;
					if ((0.0F > fusObjIntState.longAbsoluteVel && fusObjIntState.f_is_moveable == false) || (0.0F > fusObjIntState.longAbsoluteVel && fusObjIntState.f_is_moveable == true && fusObjIntState.motionPatternHistory == FUSION_MOTION_ONCOMING)) {
						fusObjIntState.f_is_oncoming = true;
						fusObjIntState.f_is_receding = false;
					}
					else {
						fusObjIntState.f_is_oncoming = false;
						fusObjIntState.f_is_receding = true;
					}
				}
			}
			else
			{
				fusObjIntState.motionCunt = 0;
			}
		}

		// If an object is moveable in its history, it will be moveable forever.
		fusObjIntState.f_is_moveable = fusObjIntState.f_is_moveable
			| fusObjIntState.f_is_moving;

		if (true == fusObjIntState.f_is_moving)
		{
			if (true == fusObjIntState.f_is_oncoming)
			{
				fusObjIntState.motionPatternCurrent = FUSION_MOTION_ONCOMING;
				fusObjIntState.motionPatternHistory = FUSION_MOTION_ONCOMING;
			}
			else
			{
				fusObjIntState.motionPatternCurrent = FUSION_MOTION_RECEDING;
				fusObjIntState.motionPatternHistory = FUSION_MOTION_RECEDING;
			}
		}
		else if (true == fusObjIntState.f_is_moveable)
		{
			if (fusObjIntState.motionPatternHistory == FUSION_MOTION_ONCOMING)
			{
				fusObjIntState.motionPatternCurrent = FUSION_MOTION_ONCOMINGSTOP;
			}
			else
			{
				fusObjIntState.motionPatternCurrent = FUSION_MOTION_DRIVINGSTOP;
			}
		}
		else
		{
			fusObjIntState.motionPatternCurrent = FUSION_MOTION_STATIONARY;
		}

		++iterFusion;

		// 20171117==>TODO: Update track classification
	}
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_Bookkeeping
* @brief	   compute the fusion track confidence
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_Confidence()
{
	ZONE_INFO("running to: %s\r\n", __FUNCTION__);
	
	FusionSystemInternalInfo*	pFusIntInfo = &gFusionIntInfo;
	
	for (FusionObjInternalStateMap::iterator iterFusion = pFusIntInfo->fusObjIntState.begin(); iterFusion != pFusIntInfo->fusObjIntState.end(); ++iterFusion) {
		// Loop over each fusion object
		FusionObjInternalState& fus_obj = iterFusion->second;
		if (TRACK_STATUS_INVALID != fus_obj.trackStatus) {

			PostFusionProcess_ComputePositionConfidence(fus_obj);
			PostFusionProcess_ComputeCMBBConfidence(fus_obj, pFusIntInfo->visIntDetail, pFusIntInfo->radarIntDetail);
			PostFusionProcess_ComputeFCWConfidence(fus_obj);
			PostFusionProcess_ComputeTJAConfidence(fus_obj);

		}
		else {
			//Reset all the confidence
			fus_obj.cmbbPrimaryConfidence = 0;
			fus_obj.cmbbSecondaryConfidence = 0;
			fus_obj.positionConfidence = 0;
			fus_obj.fcwConfidence = 0;
			fus_obj.tjaConfidence = 0;
		}
	}

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_ComputeCMBBConfidence
* @brief	   check the smoothness for longitudinal position , lateral position,speed,
*			   heading angle,acceleration
* @param[in]   fus_obj: fusion internal info
*              visIntDetail: vision internal info
*              radarIntDetail: radar internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputeCMBBConfidence(FusionObjInternalState& fus_obj, VisTrackDetailMap& visIntDetail, RadarTrackDetailMap& radarIntDetail)
{
	FusionSystemInternalInfo*	pFusIntInfo		= &gFusionIntInfo;
	FUSION_AlgParameter*		pFusAlgParams	= &gFusionAlgParameter;

	// If the time since last update is longer than this, drop the confidence to none
	const float32 kTimeSinceLastUpdateToNone	= 1.0F; //s
	// If the time since last update is longer than this, drop the confidence to low
	const float32 kTimeSinceLastUpdateToLow		= 0.75F; //s
	// If the time since last update is longer than this, drop the confidence to Med
	const float32 kTimeSinceLastUpdateToMed		= 0.25F; //s

	//Initially set the cmbb confidence equal to the position confidence
	fus_obj.cmbbPrimaryConfidence = fus_obj.positionConfidence;

	if ((0.0F <= fus_obj.time_since_radar_vision)
		&& (pFusAlgParams->CONFIDENCE_BZCOAST > fus_obj.time_since_radar_vision)
		&& (pFusAlgParams->CONFIDENCE_BZAREA > fus_obj.longPosn)
		&& (1 == fus_obj.fusionSource)) {
		// Preventing the confidence to drop due to
		// the loss of vision in the blind zone.
	}
	else
	{
		if ((0 == fus_obj.isVisInside) || (0 == fus_obj.isClusterInside))
		{
			fus_obj.cmbbPrimaryConfidence =
				1 < fus_obj.cmbbPrimaryConfidence ? 1 : fus_obj.cmbbPrimaryConfidence;
		}
	}


	// If time since last update is too long, drop the confidence
	if (kTimeSinceLastUpdateToNone < fus_obj.time_since_mea_update) {
		fus_obj.cmbbPrimaryConfidence = 0;
	}
	else if (kTimeSinceLastUpdateToLow < fus_obj.time_since_mea_update) {
		fus_obj.cmbbPrimaryConfidence =
			1 < fus_obj.cmbbPrimaryConfidence ? 1 : fus_obj.cmbbPrimaryConfidence;
	}
	else if (kTimeSinceLastUpdateToMed < fus_obj.time_since_mea_update) {
		fus_obj.cmbbPrimaryConfidence =
			2 < fus_obj.cmbbPrimaryConfidence ? 2 : fus_obj.cmbbPrimaryConfidence;
	}
	else
	{
		// no score drop here
	}

	if (2 == fus_obj.fusionSource)
	{
		if (1 < fus_obj.cmbbPrimaryConfidence)
		{
			VisTrackDetailMap::iterator iterVis = visIntDetail.find(fus_obj.visID);
			RadarClusterMap::iterator iterCluster = pFusIntInfo->clusterDetail.find(fus_obj.clusterID);
			if (visIntDetail.end() != iterVis && pFusIntInfo->clusterDetail.end() != iterCluster)
			{
				float32 camPosX = iterVis->second.obj_coordinate.longitudinal;
				float32 radarPosX = iterCluster->second.f_x;
				if (FLOAT_ZERO < abs(radarPosX))
				{
					float32 errorPosX = abs(radarPosX - camPosX) / radarPosX;
					if (0.5F <= errorPosX)
					{
						fus_obj.cmbbPrimaryConfidence = 1;
					}
					else if (0.3F <= errorPosX)
					{
						fus_obj.cmbbPrimaryConfidence = 1 >(fus_obj.cmbbPrimaryConfidence - 1) ? 1 : (fus_obj.cmbbPrimaryConfidence - 1);
					}
					else
					{
						// do nothing
					}
				}

			}
		}
	}

	// lower the confidence
	if ((pFusAlgParams->CONFIDENCE_YRTHRES <= pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal) ||
		(-pFusAlgParams->CONFIDENCE_YRTHRES >= pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal)) // check yaw rate
	{
		if (2 == fus_obj.fusionSource)
		{
			if (0.5F > fus_obj.time_since_racam_fusion) // check the continuity of the fusion source = 2
			{
				fus_obj.cmbbPrimaryConfidence = 1 < fus_obj.cmbbPrimaryConfidence ? 1 : fus_obj.cmbbPrimaryConfidence;
			}
		}
		else
		{
			fus_obj.cmbbPrimaryConfidence = 1 < fus_obj.cmbbPrimaryConfidence ? 1 : fus_obj.cmbbPrimaryConfidence;
		}
	}

	// drop cmbb confidence if the object confidence is too low.
	if (0 < fus_obj.cmbbPrimaryConfidence)
	{
		if (fus_obj.isClusterInside || fus_obj.isVisInside) // only consider the single source object
		{
			if (0 != fus_obj.fusionSource)
			{
				RadarClusterMap::iterator iterCluster = pFusIntInfo->clusterDetail.find(fus_obj.clusterID);
				if (pFusIntInfo->clusterDetail.end() != iterCluster)
				{
					uint8 highObstacleProb = 0;
					RadarCluster& refRadarCluster = iterCluster->second;

					for (radarIdMap::iterator iterRadar = refRadarCluster.radarID.begin(); iterRadar != refRadarCluster.radarID.end(); ++iterRadar)
					{
						RadarTrackDetailMap::iterator iterRadarDetail = pFusIntInfo->radarIntDetail.find(iterRadar->first);
						ZONE_Assert(pFusIntInfo->radarIntDetail.end() != iterRadarDetail);
						RadarTrackDetail& refRadarDetail = iterRadarDetail->second;
						float32 obstacleThres = 100.0F;
						float32 exstThres = 60.0F;

						if (10.0F < fabs(fus_obj.latAbsoluteVel))
						{
							exstThres = RELIABLE_EXISTPROB;
						}

						if (FUSION_TYPE_PEDESTRAIN == fus_obj.object_class)
						{
							obstacleThres = pFusAlgParams->FUSIONGLOB_OBSROBTHRES;
						}
						else
						{
							obstacleThres = pFusAlgParams->FUSIONGLOB_OBSROBTHRES * 3;
						}

						if (obstacleThres < refRadarDetail.objObstacleProb && exstThres < refRadarDetail.objExstProb)
						{
							highObstacleProb = 1;
						}
					}

					if (0 == highObstacleProb)
					{
						fus_obj.cmbbPrimaryConfidence = 0;
					}
				}
			}
			else // vision only
			{
				VisTrackDetailMap::iterator iterVis = visIntDetail.find(fus_obj.visID);
				VisTrackDetail& refVisTrackDetail = iterVis->second;
				if (pFusAlgParams->FUSIONGLOB_VISCONFITHRES > refVisTrackDetail.obj_typeConfi)
				{
					fus_obj.cmbbPrimaryConfidence = 0;
				}
				else
				{
					uint8 reb = PostFusionProcess_VisObjReliaByVar(refVisTrackDetail);
					if (0 == reb)
					{
						fus_obj.cmbbPrimaryConfidence = 0;
					}
				}
			}
		}
	}

	if (FUSION_TYPE_UNKCAR == fus_obj.object_class)
	{
		fus_obj.cmbbPrimaryConfidence = 0;
	}

	// 20180101==>TODO::Lower the confidence if the matching quality is too low.
	// Need to compute the matching quality first in the association.

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_ComputeTJAConfidence
* @brief	   compute the fusion track's tja confidence
* @param[in]   fus_obj: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputeTJAConfidence(FusionObjInternalState& fus_obj)
{
	//Currently, the FCW confidence is correlated with the cmbb confidence
	fus_obj.tjaConfidence = 2 < fus_obj.cmbbPrimaryConfidence ? 2 : fus_obj.cmbbPrimaryConfidence;
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_ComputePositionConfidence
* @brief	   compute the fusion track's position confidence
* @param[in]   fusIntInfo: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputePositionConfidence(FusionObjInternalState& fusIntInfo)
{
	const float32 kMaxPositionConfidenceScore = 100.0F;
	const float32 kIncrementPositionConfidence = 10.0F;

	// Thresholds for difference level of position confidence
	const float32 kPositionConfidenceScoreForHigh = 75.0F;
	const float32 kPositionConfidenceScoreForMed = 50.0F;
	const float32 kPositionConfidenceScoreForLow = 25.0F;

	// Increase the score first in every cycle
	fusIntInfo.positionConfidenceScore += kIncrementPositionConfidence;


	// Check for smoothness of the tracjectory
	// If there is jump in the state, dcrease the score
	// based on the magnitude of the jump
	PostFusionProcess_CheckTrackSmoothness(fusIntInfo);

	// Set the score within the interval [0, maxScore]
	if (kMaxPositionConfidenceScore < fusIntInfo.positionConfidenceScore) {
		fusIntInfo.positionConfidenceScore = kMaxPositionConfidenceScore;
	}
	else if (0.0F>fusIntInfo.positionConfidenceScore) {
		fusIntInfo.positionConfidenceScore = 0.0F;
	}

	// Classify the position confidence based on the score
	if (kPositionConfidenceScoreForHigh < fusIntInfo.positionConfidenceScore) {
		fusIntInfo.positionConfidence = 3;
	}
	else if (kPositionConfidenceScoreForMed < fusIntInfo.positionConfidenceScore) {
		fusIntInfo.positionConfidence = 2;
	}
	else if (kPositionConfidenceScoreForLow < fusIntInfo.positionConfidenceScore) {
		fusIntInfo.positionConfidence = 1;
	}
	else {
		fusIntInfo.positionConfidence = 0;
	}

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_ComputeFCWConfidence
* @brief	   compute the fusion track's fcw confidence
* @param[in]   fus_obj: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_ComputeFCWConfidence(FusionObjInternalState& fus_obj)
{
	FusionSystemInternalInfo*	pFusIntInfo		= &gFusionIntInfo;
	FUSION_AlgParameter*		pFusAlgParams	= &gFusionAlgParameter;

	//Currently, the FCW confidence is correlated with the cmbb confidence
	// If the cmbb confidence is >0, set the fcw confidence to 1.
	fus_obj.fcwConfidence = 0 < fus_obj.cmbbPrimaryConfidence ? 1 : 0;
	if (0 < fus_obj.fcwConfidence)
	{
		if ((TRACK_STATUS_UPDATED != fus_obj.trackStatus)
			|| (FUSION_TYPE_UNKNOWN == fus_obj.object_class)
			|| ((pFusAlgParams->UPDATE_TYPEBYVISCNTCAR >= fus_obj.visionConfirmCnt)
				&& (1 == fus_obj.isClusterInside)))
		{
			fus_obj.fcwConfidence = 0;
		}

		if ((1 == fus_obj.isClusterInside) && (1 == fus_obj.isVisInside))
		{
			RadarClusterMap::iterator iterCluster = pFusIntInfo->clusterDetail.find(fus_obj.clusterID);
			VisTrackDetailMap::iterator iterVis = pFusIntInfo->visIntDetail.find(fus_obj.visID);
			if ((pFusIntInfo->clusterDetail.end() != iterCluster) && (pFusIntInfo->visIntDetail.end() != iterVis))
			{
				if ((FUSION_TYPE_PEDESTRAIN != fus_obj.object_class)
					&& (2.0F < fabs(iterCluster->second.f_vy - iterVis->second.obj_velocity.Vy))
					&& (10.0F < iterVis->second.obj_velocity.VyVariance))
				{
					fus_obj.fcwConfidence = 0;
				}
			}
		}

		if (FLOAT_ZERO < pFusAlgParams->CONFIDENCE_VISONLYPEDFCW)
		{
			if ((0 == fus_obj.isClusterInside) && (FUSION_TYPE_PEDESTRAIN == fus_obj.object_class))
			{
				fus_obj.fcwConfidence = 0;
			}
		}
	}
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_CheckTrackSmoothness
* @brief	   check the smoothness for longitudinal position , lateral position,speed,
*			   heading angle,acceleration
* @param[in]   fus_obj: fusion internal info
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_CheckTrackSmoothness(FusionObjInternalState& fus_obj)
{
	// Score to decrease
	const float32 kSmallScoreDrop = 3.0F;
	const float32 kMedScoreDrop = 5.0F;
	const float32 kBigScoreDrop = 10.0F;
	const float32 kMinSpeedToCheckHeading = 2.5F;

	FUSION_AlgParameter*   pFusionAlgParameter = &gFusionAlgParameter;

	//check the smoothness for longitudinal position
	float32 deltaLongPosn = std::fabs(fus_obj.longPosn - fus_obj.predLongPosn);
	if (pFusionAlgParameter->CONFIDENCE_DLTXBIGTHRES < deltaLongPosn) {
		fus_obj.positionConfidenceScore -= kBigScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTXMEDTHRES < deltaLongPosn) {
		fus_obj.positionConfidenceScore -= kMedScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTXSMALLTHRES < deltaLongPosn) {
		fus_obj.positionConfidenceScore -= kSmallScoreDrop;
	}
	else {
		// no drop here
	}

	//check the smoothness for lateral position
	float32 deltaLatPosn = std::fabs(fus_obj.latPosn - fus_obj.predLatPosn);
	if (pFusionAlgParameter->CONFIDENCE_DLTYBIGTHRES < deltaLatPosn) {
		fus_obj.positionConfidenceScore -= kBigScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTYMEDTHRES < deltaLatPosn) {
		fus_obj.positionConfidenceScore -= kMedScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTYSMALLTHRES < deltaLatPosn) {
		fus_obj.positionConfidenceScore -= kSmallScoreDrop;
	}
	else {
		// no drop here
	}


	//check the smoothness for speed
	float32 deltaVx = std::fabs(fus_obj.longAbsoluteVel - fus_obj.predVx);
	if (pFusionAlgParameter->CONFIDENCE_DLTSPEEDBIGTHRES < deltaVx) {
		fus_obj.positionConfidenceScore -= kBigScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTSPEEDMEDTHRES < deltaVx) {
		fus_obj.positionConfidenceScore -= kMedScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTSPEEDSMALLTHRES < deltaVx) {
		fus_obj.positionConfidenceScore -= kSmallScoreDrop;
	}
	else {
		// no score drop here
	}

	float32 deltaVy = std::fabs(fus_obj.latAbsoluteVel - fus_obj.predVy);
	if (pFusionAlgParameter->CONFIDENCE_DLTSPEEDBIGTHRES < deltaVy) {
		fus_obj.positionConfidenceScore -= kBigScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTSPEEDMEDTHRES < deltaVy) {
		fus_obj.positionConfidenceScore -= kMedScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTSPEEDSMALLTHRES < deltaVy) {
		fus_obj.positionConfidenceScore -= kSmallScoreDrop;
	}
	else {
		// no score drop here
	}

	if (kMinSpeedToCheckHeading < fus_obj.speed) {
		//check the smoothness for heading angle
		float32 deltaHeadingAngle = std::fabs(fus_obj.headingAngle - fus_obj.predHeadingAngle);
		if (pFusionAlgParameter->CONFIDENCE_DLTHEADINGBIGTHRES < deltaHeadingAngle) {
			fus_obj.positionConfidenceScore -= kBigScoreDrop;
		}
		else if (pFusionAlgParameter->CONFIDENCE_DLTHEADINGMEDTHRES < deltaHeadingAngle) {
			fus_obj.positionConfidenceScore -= kMedScoreDrop;
		}
		else if (pFusionAlgParameter->CONFIDENCE_DLTHEADINGSMALLTHRES < deltaHeadingAngle) {
			fus_obj.positionConfidenceScore -= kSmallScoreDrop;
		}
		else {
			// no score drop here
		}
	}

	//check the smoothness for acceleration
	float32 deltaAcceleration = std::fabs(fus_obj.acceleration - fus_obj.predAcceleration);
	if (pFusionAlgParameter->CONFIDENCE_DLTACCBIGTHRES < deltaAcceleration) {
		fus_obj.positionConfidenceScore -= kBigScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTACCMEDTHRES < deltaAcceleration) {
		fus_obj.positionConfidenceScore -= kMedScoreDrop;
	}
	else if (pFusionAlgParameter->CONFIDENCE_DLTACCSMALLTHRES < deltaAcceleration) {
		fus_obj.positionConfidenceScore -= kSmallScoreDrop;
	}
	else {
		// no score drop here
	}

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        PostFusionProcess_VisObjReliaByVar
* @brief	   check the reliability of vision object by its variance
* @param[in]   refVis: vision internal info
* @param[out]  none
* @return      0: low, 1: high
* @see         none
* @note        none
******************************************************************************/

int32_t PostFusionProcess_VisObjReliaByVar(VisTrackDetail& refVis)
{
	// recently the same threshold used here, but maybe changed by the following research
	uint8 res = 1;
	if ((VISION_VXVARTHRES < refVis.obj_velocity.VxVariance) ||
		(VISION_VYVARTHRES < refVis.obj_velocity.VyVariance) ||
		(VISION_LATVARTHRES < refVis.obj_coordinate.lateralVariance) ||
		(VISION_LONGVARTHRES < refVis.obj_coordinate.longitudinalVariance))
	{
		res = 0;
	}
	return res;
}