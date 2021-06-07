/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : output_adapter.cpp
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

#include "output_adapter_pub.h"
#include "output_adapter_pri.h"
#include "logger.h"
#include <algorithm>
#include <vector>
#include <math.h>

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        OutPutAdapter_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t OutPutAdapter_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        OutPutAdapter_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t OutPutAdapter_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        OutPutAdapter_Run_V
* @brief
* @param[in]   pVisionLane : vision lane info
* @param[out]  pFusionObjOutInfo : fusion output info
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/


int32_t OutPutAdapter_Run_V(const VehicleData* pHostMotion, const EyeVisionLaneMark* pVisionLane, const VisionLaneRoadedge* pVisionLaneRoadedge, FusionOutputList* pFusionoutlist)
{
	float32						cnow			= 0.0F;
	LaneParam					laneParameter	= {0.0F};
	FusionSystemInternalInfo*	pFusIntInfo		= &gFusionIntInfo;

	// Compute the priority of each track
	OutputAdapter_FusionTrackPriority();

	// Sort the object by its priority
	// This is a vector of {priority_score, object_ID} pairs
	std::vector<std::pair<float32, uint32> > priority_id_pair;
	priority_id_pair.reserve(pFusIntInfo->numOfActiveObj);
	for (FusionObjInternalStateMap::iterator iterFusion = pFusIntInfo->fusObjIntState.begin(); iterFusion != pFusIntInfo->fusObjIntState.end(); ++iterFusion) {
		priority_id_pair.push_back(std::make_pair(iterFusion->second.priority_score, iterFusion->first));
	}
	// Sorting will put lower priority_score ahead of larger ones (pair->first)
	// The index is stored in pair->second.
	sort(priority_id_pair.begin(), priority_id_pair.end());

	laneParameter.Lvalid	=   TRACK_STATUS_NEW; // Lucien need to check 20201125
	laneParameter.LC0		=	pVisionLane->lanehostprota.lhlinefirstC00;
	laneParameter.LC1		=	pVisionLane->lanehostprota.lhlinefirstC10;
	laneParameter.LC2		=	pVisionLane->lanehostprota.lhlinefirstC20;
	laneParameter.LC3		=	pVisionLane->lanehostprota.lhlinefirstC30;
	laneParameter.LL        =   pVisionLane->lanehostprota.lhfirstvrEnd0;
	laneParameter.Rvalid	=   TRACK_STATUS_NEW; // Lucien need to check 20201125	
	laneParameter.RC0		=	pVisionLane->lanehostprotb.lhlinefirstC01;
	laneParameter.RC1		=	pVisionLane->lanehostprotb.lhlinefirstC11;
	laneParameter.RC2		=	pVisionLane->lanehostprotb.lhlinefirstC21;
	laneParameter.RC3		=	pVisionLane->lanehostprotb.lhlinefirstC31;
	laneParameter.RL		=	pVisionLane->lanehostprotb.lhfirstvrEnd1;

	if (fabs(pFusIntInfo->egoSpeedAndYawrate.EgoSpeedVal) < THRESHOS_EGO_SPEED)
	{
		cnow = 0.0F;
	}
	else
	{
		cnow = pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal / pFusIntInfo->egoSpeedAndYawrate.EgoSpeedVal;
	}

	// Copy the fusion internal state to the output structure
	const uint8 outPutCnt = (pFusIntInfo->numOfActiveObj < (FUSION_OBJ_OUT_MAX - CORNER_RADAR_MAX_OUT_NUM)) ? pFusIntInfo->numOfActiveObj : (FUSION_OBJ_OUT_MAX - CORNER_RADAR_MAX_OUT_NUM);
	uint8 recentOutCnt = 0;
	for (uint8 i = 0; i < pFusIntInfo->numOfActiveObj; i++) 
	{
		if (outPutCnt <= recentOutCnt)
		{
			break;
		}
		// Get the object ID from highest priority
		uint32 id = priority_id_pair[i].second;
		
		FusionObjInternalStateMap::iterator iterFus = pFusIntInfo->fusObjIntState.find(id);
		ZONE_Assert(pFusIntInfo->fusObjIntState.end() != iterFus);
		FusionObjInternalState& refFusionInternal = iterFus->second;
		float32 dltPosY		= refFusionInternal.predLatPosn - refFusionInternal.latPosn;
		float32 dltPosX		= refFusionInternal.predLongPosn - refFusionInternal.longPosn;
		float32 dltVx		= refFusionInternal.predVx - refFusionInternal.longAbsoluteVel;
		float32 dltVy		= refFusionInternal.predVy - refFusionInternal.latAbsoluteVel;
		float32 dltSpeed	= refFusionInternal.predSpeed - refFusionInternal.speed;
		float32 dltAcc		= refFusionInternal.predAcceleration - refFusionInternal.acceleration;
		//printf("preID: %d; curID: %d\n", refFusionInternal.preID, refFusionInternal.oID);
		//printf("prePosX: %f; curPosX: %f\n", refFusionInternal.predLongPosn, refFusionInternal.longPosn);
		if (TRACK_STATUS_NEW != refFusionInternal.trackStatus)
		{
			if (((-9.0F > dltPosY		|| 9.0F < dltPosY)
				|| (-9.0F > dltPosX		|| 9.0F < dltPosX) 
				|| (-9.0F > dltVx		|| 9.0F < dltVx)
				|| (-9.0F > dltVy		|| 9.0F < dltVy)
				|| (-9.0F > dltSpeed	|| 9.0F < dltSpeed)
				|| (-14.0F > dltAcc		|| 14.0F < dltAcc))&&(refFusionInternal.predLatPosn > 0.0001)&&(refFusionInternal.predLongPosn > 0.0001))
			{
				if (0 < refFusionInternal.oID)
				{
					pFusIntInfo->unassignedOutputID[pFusIntInfo->numOfUnassignedOutputID] = refFusionInternal.oID;
					pFusIntInfo->numOfUnassignedOutputID++;
					refFusionInternal.oID = 0;
				}
				continue;
			}
		}
		uint8 inROIflag_Lane = 0, inROIflag_Ego = 0;
		inROIflag_Lane = OutputAdapter_ROIdefineLane(refFusionInternal.longPosn, refFusionInternal.latPosn, cnow, laneParameter);
		inROIflag_Ego = OutputAdapter_ROIdefineEgo(refFusionInternal.longPosn, refFusionInternal.latPosn, cnow);
		//if (inROIflag_Ego == 0 && inROIflag_Lane == 0)
		//{
		//	if (0 < refFusionInternal.oID && (!refFusionInternal.f_is_moveable))
		//	{
		//		pFusIntInfo->unassignedOutputID[pFusIntInfo->numOfUnassignedOutputID] = refFusionInternal.oID;
		//		pFusIntInfo->numOfUnassignedOutputID++;
		//		refFusionInternal.oID = 0;
		//	}
		//	continue;
		//}

		recentOutCnt++;

		if (0 < refFusionInternal.oID) {
			// If this object is already selected previously for output (i.e., the oID is >0)
			// Later copy this object to the corresponding location of the output array.
			refFusionInternal.opTrackStatus = refFusionInternal.trackStatus;
		}
		else {
			// If this object is not output previously (i.e., does not have an oID yet).
			if (0 < pFusIntInfo->numOfUnassignedOutputID) {
				// If there is still ID available for output
				// Get the available oID from the last position of the array
				uint8 oID = pFusIntInfo->unassignedOutputID[pFusIntInfo->numOfUnassignedOutputID - 1];
				// Reset this oID.
				pFusIntInfo->unassignedOutputID[pFusIntInfo->numOfUnassignedOutputID - 1] = 0;
				// Reduce the number of available oID
				pFusIntInfo->numOfUnassignedOutputID--;
				// Assign this oID to this fusion object.
				refFusionInternal.oID = oID;
			}
			else
			{
				// 20171128==>TODO: Need to improve this by kicking out a lower priority track if there is a
				// higher priority track coming in but no output slot available.
				for (std::vector<std::pair<float32, uint32> >::reverse_iterator iterPriority = priority_id_pair.rbegin(); iterPriority != priority_id_pair.rend(); ++iterPriority)
				{
					uint32 id = iterPriority->second;

					FusionObjInternalStateMap::iterator iterFus = pFusIntInfo->fusObjIntState.find(id);
					ZONE_Assert(pFusIntInfo->fusObjIntState.end() != iterFus);
					FusionObjInternalState& refLowPriorityFusion = iterFus->second;
					if (0 < refLowPriorityFusion.oID)
					{
						refFusionInternal.oID = refLowPriorityFusion.oID;
						refLowPriorityFusion.oID = 0;
						break;
					}
				}
			}

			// 20171108==>TODO: Need to add an output_object_status. Usually this status is
			// the same as the object status, however, we need to set output_object_status as NEW
			// regardless of the object status when this is the first cycle of reporting this object
			// to FUNCTION.
			refFusionInternal.opTrackStatus = TRACK_STATUS_NEW; // NEW
		}
	}

	OutputAdapter_CopyFusionInternalStateToOutput(pHostMotion, pFusionoutlist);


	OutputAdapter_CopyLaneinfoToOutput(pVisionLane, pFusionoutlist);

	OutputAdapter_CopyLaneRoadedgeinfoToOutput(pVisionLaneRoadedge, pFusionoutlist);

	std::vector<std::pair<float32, uint32> >().swap(priority_id_pair);

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        OutputAdapter_FusionTrackPriority
* @brief       Compute the fusion track's priority
*			   Prioritize the fusion track based on following:
*			   1. Distance, closer target should have higher priority
*			   2. Motion status, moving target should have higher priority
*			   3. Track quality/confidence, high confidence target should have higher priority
*			   4. UPDATED track should have higher priority, NEW/COASTED should have lower priority
*			   5. Radar-Vision object should have higher priority. Radar or vision only object should have lower priority
*			   6. Others
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int8_t OutputAdapter_FusionTrackPriority()
{
	const float32				K_STATIC_TRACK_PENALTY		= 50.0F;
	const float32				K_STOPPED_TRACK_PENALTY		= 20.0F;
	const float32				K_MED_QUALITY_TRACK_PENALTY	= 50.0F;
	const float32				K_LOW_QUALITY_TRACK_PENALTY	= 100.0F;
	const float32				K_MAX_PENALTY				= 1000000000.0F;
	float32						priority_score				= 0.0F;
	FusionSystemInternalInfo*	pFusIntInfo					= &gFusionIntInfo;

	
	for (FusionObjInternalStateMap::iterator iterFusion = pFusIntInfo->fusObjIntState.begin(); iterFusion != pFusIntInfo->fusObjIntState.end(); ++iterFusion) {
		// Loop over the object array.
		FusionObjInternalState& fus_obj = iterFusion->second;
		priority_score = 0.0F;
		if (TRACK_STATUS_INVALID != fus_obj.trackStatus) {
			// For valid object
			// The lower the score, the higher the priority.
			// Add penalty for longitudinal distance.
			if (fus_obj.fusionSource == FUSION_SOURCE_RADAR_VISION)
				priority_score = 0.0001 * fus_obj.longPosn;
			else if(fus_obj.fusionSource == FUSION_SOURCE_VISION_ONLY)
				priority_score = 0.01 * fus_obj.longPosn;
			else
				priority_score =priority_score+ fabs(fus_obj.longPosn)+ 3*fabs(fus_obj.latPosn);

			if (FUSION_MOTION_STATIONARY == fus_obj.motionPatternCurrent && FUSION_SOURCE_RADAR_ONLY == fus_obj.fusionSource)
				priority_score = 1000000;
			// 20171106==>TODO: Add penalties for other factors.
		}
		else {
			// For invalid object.
			priority_score = K_MAX_PENALTY;
		}
		// Assign the priority score to the object
		fus_obj.priority_score = priority_score;
	}
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        OutputAdapter_ROIdefineEgo
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

uint8 OutputAdapter_ROIdefineLane(float32 objPosX, float32 objPosY, float32 Cnow, LaneParam& laneParameter)
{
	uint8 inROIflag = 0;

	const  float32 Cappend  = 0.0005F;
	const  float32 LaneW	= 3.5F;
	const  float32 deltaC	= 0.0013F;
	static float32 CTarget	= 0.0F;
	float32_t dC		= 0.0F;
	float32_t yl		= 0.0F;
	float32_t yr		= 0.0F;
	float32_t LC0, LC1, LC2, LC3, RC0, RC1, RC2, RC3;
	float32_t objPosX2 = objPosX*objPosX;
	float32_t objPosX3 = objPosX*objPosX2;

	//Left Lane valid, right lane valid
	if (laneParameter.Lvalid != 0 && laneParameter.Rvalid != 0)
	{
		LC0 = laneParameter.LC0;
		LC1 = laneParameter.LC1;
		LC2 = laneParameter.LC2;
		LC3 = laneParameter.LC3;
		RC0 = laneParameter.RC0;
		RC1 = laneParameter.RC1;
		RC2 = laneParameter.RC2;
		RC3 = laneParameter.RC3;
		if (objPosX < laneParameter.LL && objPosX < laneParameter.RL)
		{
			yl = LC0 + LC1 * objPosX + LC2 * objPosX2 + LC3 * objPosX3 + LaneW;
			yr = RC0 + RC1 * objPosX + RC2 * objPosX2 + RC3 * objPosX3 - LaneW;
		}
		else if (objPosX < laneParameter.LL)
		{
			yl = LC0 + LC1 * objPosX + LC2 * objPosX2 + LC3 * objPosX3 + LaneW;
			yr = yl - 3.0F * LaneW;
		}
		else if (objPosX < laneParameter.RL)
		{
			yr = RC0 + RC1 * objPosX + RC2 * objPosX2 + RC3 * objPosX3 - LaneW;
			yl = yr + 3.0F * LaneW;			
		}
		else
		{
			// make sure two lanes do not cross 
			if (LC2 < RC2)
			{
				RC2 = LC2;
			}
			if (LC3 < RC3)
			{
				if (LC3 > 0)
				{
					RC3 = LC3;
				}
				else
				{
					LC3 = RC3;
				}
			}
			yl = LC0 + LC1 * objPosX + (LC2 + Cappend) * objPosX2 + LC3 * objPosX3 + LaneW;
			yr = RC0 + RC1 * objPosX + (RC2 - Cappend) * objPosX2 + RC3 * objPosX3 - LaneW;
		}

		CTarget = ZONE_MIN(2.0F*LC2, 2.0F*RC2);
	}
	else if (laneParameter.Lvalid != 0) //Left Lane valid
	{
		LC0 = laneParameter.LC0;
		LC1 = laneParameter.LC1;
		LC2 = laneParameter.LC2;
		LC3 = laneParameter.LC3;
		if (objPosX < laneParameter.LL)
		{
			yl = LC0 + LC1 * objPosX + LC2 * objPosX2 + LC3 * objPosX3 + LaneW;
			yr = LC0 + LC1 * objPosX + (LC2 - Cappend) * objPosX2 + LC3 * objPosX3 - 2 * LaneW;
		}
		else
		{
			yl = LC0 + LC1 * objPosX + (LC2 + Cappend) * objPosX2 + LC3 * objPosX3 + LaneW;
			yr = LC0 + LC1 * objPosX + (LC2 - Cappend) * objPosX2 + LC3 * objPosX3 - 2 * LaneW;
		}

		CTarget = 2.0F * LC2;
	}
	else if (laneParameter.Rvalid != 0) //right Lane valid
	{
		RC0 = laneParameter.RC0;
		RC1 = laneParameter.RC1;
		RC2 = laneParameter.RC2;
		RC3 = laneParameter.RC3;
		if (objPosX < laneParameter.RL)
		{
			yl = RC0 + RC1 * objPosX + (RC2 + Cappend) * objPosX2 + RC3 * objPosX3 + 2 * LaneW;
			yr = RC0 + RC1 * objPosX + RC2 * objPosX2 + RC3 * objPosX3 - LaneW;
		}
		else
		{
			yl = RC0 + RC1 * objPosX + (RC2 + Cappend) * objPosX2 + RC3 * objPosX3 + 2 * LaneW;
			yr = RC0 + RC1 * objPosX + (RC2 - Cappend) * objPosX2 + RC3 * objPosX3 - LaneW;
		}

		CTarget = 2.0F * RC2;
	}
	else
	{		
		dC = Cnow - CTarget;
		if (dC > deltaC)
		{
			CTarget += deltaC;
		}
		else if (dC < -deltaC)
		{
			CTarget -= deltaC;
		}

		yr = (0.5F * CTarget - Cappend)*objPosX2 - 1.5F * LaneW;
		yl = (0.5F * CTarget + Cappend)*objPosX2 + 1.5F * LaneW;
	}

	
	if (objPosY > yl || objPosY < yr)
	{
		inROIflag = 0;
	}
	else
	{
		inROIflag = 1;
	}
	return inROIflag;
}

/*******************************************************************************
* @name        OutputAdapter_ROIdefineEgo
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

uint8 OutputAdapter_ROIdefineEgo(float32 objPosX, float32 objPosY, float32 Cnow)
{
	uint8 inROIflag = 0;

	const  float32 Cappend = 0.0005F;
	const  float32 LaneW = 3.5F;
	const  float32 deltaC = 0.0013F;
	static float32 CTarget = 0.0F;
	float32 dC = 0.0F;
	float32 yl = 0.0F;
	float32 yr = 0.0F;
	float32 objPosX2 = objPosX*objPosX;
	
	dC = Cnow - CTarget;
	if (dC > deltaC)
	{
		CTarget += deltaC;
	}
	else if (dC < -deltaC)
	{
		CTarget -= deltaC;
	}

	yr = (0.5F * CTarget - Cappend)*objPosX2 - 1.5F * LaneW;
	yl = (0.5F * CTarget + Cappend)*objPosX2 + 1.5F * LaneW;

	if (objPosY > yl || objPosY < yr)
	{
		inROIflag = 0;
	}
	else
	{
		inROIflag = 1;
	}
	return inROIflag;
}

/*******************************************************************************
* @name        OutputAdapter_CopyFusionInternalStateToOutput
* @brief	   This function copy the fusion internal object state into the output definition.
*			   Only the fusion object with valid oID are copied into the output structure.
*	           Object without oID should be low priority object.
* @param[in]   none
* @param[out]  fusion output info
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

sint8 OutputAdapter_CopyFusionInternalStateToOutput(const VehicleData* pHostMotion, FusionOutputList* pFusionoutlist)
{
	FusionSystemInternalInfo*	pFusIntInfo = &gFusionIntInfo;

	float32 Robj			= 0.0F;
	float32 thetaObj		= 0.0F;
	float32_t primaryObjX	= 100.0F;
	uint8_t	primaryObjID	= 255;
	uint32_t primaryID		= 0;
	Coeff	coeff;
	float64 MatrixA[MATRIX_DIM][MATRIX_DIM];
	float64 MatrixInverse[MATRIX_DIM][MATRIX_DIM];

	MatrixA[0][0] = 1; MatrixA[0][1] = 0; MatrixA[0][2] = 0; MatrixA[0][3] = 0;
	MatrixA[1][0] = 1;
	MatrixA[2][0] = 0; MatrixA[2][1] = 1; MatrixA[2][2] = 0; MatrixA[2][3] = 0;
	MatrixA[3][0] = 0; MatrixA[3][1] = 1;
 
	// Copy the system info
	pFusionoutlist->objOutInfo.timeStamp = pFusIntInfo->timeStamp;
	pFusionoutlist->objOutInfo.frameNum = pFusIntInfo->lookIndex;

	// Copy the state of each object
	for (FusionObjInternalStateMap::iterator iterFusion = pFusIntInfo->fusObjIntState.begin(); iterFusion != pFusIntInfo->fusObjIntState.end(); ++iterFusion) {
		FusionObjInternalState& refFusionInternal = iterFusion->second;

		if (FUSION_SOURCE_RADAR_ONLY == refFusionInternal.fusionSource)
		{
			if (FUSION_MOTION_STATIONARY == refFusionInternal.motionPatternCurrent)
				continue;
			//else
			//	refFusionInternal.object_class = FUSION_TYPE_UNKNOWN;
		}
		uint8 oID = refFusionInternal.oID;
		if (0 < oID) {

			//find the primary obj
			if (refFusionInternal.object_class != FUSION_TYPE_UNKNOWN  && refFusionInternal.object_class != FUSION_TYPE_MOTOCYCLE && \
				refFusionInternal.object_class != FUSION_TYPE_PEDESTRAIN && refFusionInternal.object_class != FUSION_TYPE_BICYCLE && \
				abs(refFusionInternal.obj_boundary.Ycenter) < 2.5)
			{
				if (primaryObjX > refFusionInternal.obj_boundary.Xcenter)
				{
					primaryObjX = refFusionInternal.obj_boundary.Xcenter;

					primaryObjID = oID;
				}
			}
			
			Robj		= sqrt(powf(refFusionInternal.obj_boundary.Xcenter, 2) + powf(refFusionInternal.obj_boundary.Ycenter, 2));
			thetaObj	= atan2f(refFusionInternal.obj_boundary.Ycenter, refFusionInternal.obj_boundary.Xcenter);

			//Lucien comment below coding as confuse it
			//if (refFusionInternal.isVisInside)
			//{
			//	uint32* tempVisID = (uint32*)&pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.distanceToleftNearLaneMarking;
			//	*tempVisID = refFusionInternal.visID;
			//	// used for dump
			//	pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.distanceToRightNearLaneMarking = static_cast<float32>(refFusionInternal.visID);
			//}
			
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.distanceToleftNearLaneMarking = refFusionInternal.distanceToleftNearLaneMarking;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.distanceToRightNearLaneMarking = refFusionInternal.distanceToRightNearLaneMarking;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.motionPatternHistory = refFusionInternal.motionPatternHistory;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.motionPatternCurrent = refFusionInternal.motionPatternCurrent;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.nearestSide = refFusionInternal.nearestSide;

			/*fusion object type*/

			if (refFusionInternal.object_class == FUSION_TYPE_CAR)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.type = 4; // Small_Medium_Car
			}
			else if (refFusionInternal.object_class == FUSION_TYPE_TRUCK)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.type = 5;  // Truck
			}
			else if (refFusionInternal.object_class == FUSION_TYPE_PEDESTRAIN)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.type = 1; //pedestrain
			}
			else if (refFusionInternal.object_class == FUSION_TYPE_BICYCLE)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.type = 2; // Cyclist
			}
			else if (refFusionInternal.object_class == FUSION_TYPE_MOTOCYCLE)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.type = 6; // Tri - Motor
			}
			else
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.type = 0;
			}

			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.length = refFusionInternal.length; 
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.width = refFusionInternal.width;
			
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_information.valid = 1;

			// FUSION obj property
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.accelerationStdDev = refFusionInternal.accelerationStdDev;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.headingAngleStdDev = refFusionInternal.headingAngleStdDev;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.latPositionStdDev = refFusionInternal.latPositionStdDev;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.longPositionStdDev = refFusionInternal.longPositionStdDev;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.speedStdDev = refFusionInternal.speedStdDev;
			//pFusOutInfo->objects[oID - 1].obj_property.cmbbPrimaryConfidence = refFusionInternal.cmbbPrimaryConfidence;
			//pFusOutInfo->objects[oID - 1].obj_property.cmbbSecondaryConfidence = refFusionInternal.cmbbSecondaryConfidence;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.fcwConfidence = refFusionInternal.fcwConfidence;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.fusionSource = refFusionInternal.fusionSource;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.id = refFusionInternal.oID; // NOTE: Assign oID to id
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.visionId = refFusionInternal.visID;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.leftNearLaneMarkingConfidence = refFusionInternal.leftNearLaneMarkingConfidence;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.motionModel = refFusionInternal.motionModel;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.positionConfidence = refFusionInternal.positionConfidence > 2 ? 2 : refFusionInternal.positionConfidence;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.rightNearLaneMarkingConfidence = refFusionInternal.rightNearLaneMarkingConfidence;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.tjaConfidence = refFusionInternal.tjaConfidence;

			if(refFusionInternal.opTrackStatus ==  TRACK_STATUS_INVALID)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.trackStatus = 3;  // invlid
			}
			else if(refFusionInternal.opTrackStatus == TRACK_STATUS_NEW)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.trackStatus = 0;   // new
			}
			else if (refFusionInternal.opTrackStatus == TRACK_STATUS_UPDATED)
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.trackStatus = 1;  // measured
			}
			else if ((refFusionInternal.opTrackStatus == TRACK_STATUS_NEW_COASTED)|| (refFusionInternal.opTrackStatus == TRACK_STATUS_COASTED))
			{
				pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.trackStatus = 2;  // predict
			}
			else
			{
				// do noting
			}

			//pFusionoutlist->objOutInfo.objects[oID - 1].obj_property.trackStatus = refFusionInternal.opTrackStatus;

			// FUSION obj state estimate

			/*pFusOutInfo->objects[oID - 1].obj_estimate.e_longPosition = refFusionInternal.longPosn;
			pFusOutInfo->objects[oID - 1].obj_estimate.e_latPosition = refFusionInternal.latPosn;*/
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.longPosition = refFusionInternal.obj_boundary.Xcenter;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.latPosition = refFusionInternal.obj_boundary.Ycenter;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.headingAngle = refFusionInternal.headingAngle;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.speed = refFusionInternal.speed;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.yawRate = 0;

			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.longAbsoluteVelocity = refFusionInternal.longAbsoluteVel;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.latAbsoluteVelocity = refFusionInternal.latAbsoluteVel;
		
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.longRelativeVelocity = refFusionInternal.longAbsoluteVel - (pHostMotion->speed - pHostMotion->yawRate * Robj * sinf(thetaObj));
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.latRelativeVelocity = refFusionInternal.latAbsoluteVel - (0.0F + pHostMotion->yawRate * Robj * cosf(thetaObj));
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.acceleration = refFusionInternal.acceleration;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.longAbsoluteAcceleration = refFusionInternal.longAbsoluteAcceleration;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.latAbsoluteAcceleration = refFusionInternal.latAbsoluteAcceleration;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.longRelativeAcceleration = refFusionInternal.longAbsoluteAcceleration - pHostMotion->acceleration;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.latRelativeAcceleration = refFusionInternal.latRelativeAcceleration;
			pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.curvature = refFusionInternal.curvature;
	    	//TODO Relative
			refFusionInternal.preID = refFusionInternal.oID;

			//printf("FusionID: %d; ClusID: %d; VisID: %d; ", refFusionInternal.oID, refFusionInternal.clusterID, refFusionInternal.visID);
			//printf("Long: %f; Lat: %f ", refFusionInternal.obj_boundary.Xcenter, refFusionInternal.obj_boundary.Ycenter);
			//printf("AbsX: %f; AbsY: %f; RelX: %f; RelY: %f\n", refFusionInternal.longAbsoluteVel, refFusionInternal.latAbsoluteVel, pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.longRelativeVelocity, pFusionoutlist->objOutInfo.objects[oID - 1].obj_estimate.latRelativeVelocity);
		}
	}

	for (uint8_t corRadCount = 0; corRadCount < CORNER_RADAR_MAX_OUT_NUM; corRadCount++)
	{
		if (pFusIntInfo->cornerRadarObj[corRadCount].objID == 0)
			continue;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.distanceToleftNearLaneMarking = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.distanceToRightNearLaneMarking = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.motionPatternHistory = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.motionPatternCurrent = 2;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.nearestSide = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.type = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.length = 4.6;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.width = 1.8;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_information.valid = 1;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.accelerationStdDev = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.headingAngleStdDev = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.latPositionStdDev = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.longPositionStdDev = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.speedStdDev = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.fcwConfidence = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.fusionSource = 1;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.id = (uint8_t)pFusIntInfo->cornerRadarObj[corRadCount].objID;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.visionId = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.leftNearLaneMarkingConfidence =0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.motionModel = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.positionConfidence = 2;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.rightNearLaneMarkingConfidence = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.tjaConfidence =0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_property.trackStatus = 2;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.longPosition = pFusIntInfo->cornerRadarObj[corRadCount].objXPos;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.latPosition = pFusIntInfo->cornerRadarObj[corRadCount].objYPos;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.headingAngle = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.speed = pFusIntInfo->cornerRadarObj[corRadCount].objYVelRel + (pHostMotion->speed - pHostMotion->yawRate * Robj * sinf(thetaObj));
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.yawRate = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.longAbsoluteVelocity = pFusIntInfo->cornerRadarObj[corRadCount].objXVelRel + (pHostMotion->speed - pHostMotion->yawRate * Robj * sinf(thetaObj));
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.latAbsoluteVelocity = pFusIntInfo->cornerRadarObj[corRadCount].objYVelRel + (0.0F + pHostMotion->yawRate * Robj * cosf(thetaObj));
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.longRelativeVelocity = pFusIntInfo->cornerRadarObj[corRadCount].objXVelRel;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.latRelativeVelocity = pFusIntInfo->cornerRadarObj[corRadCount].objYVelRel;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.acceleration = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.longAbsoluteAcceleration = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.latAbsoluteAcceleration = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.longRelativeAcceleration  = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.latRelativeAcceleration = 0;
		pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.curvature = 0;

	/*	printf("FusionID: %d; AbsX: %f; AbsY: %f; RelX: %f; RelY: %f\n", (uint8_t)pFusIntInfo->cornerRadarObj[corRadCount].objID, pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.longAbsoluteVelocity, pFusionoutlist->objOutInfo.objects[FUSION_OBJ_OUT_MAX - corRadCount - 1].obj_estimate.latAbsoluteVelocity,\
			pFusIntInfo->cornerRadarObj[corRadCount].objXVelRel, pFusIntInfo->cornerRadarObj[corRadCount].objYVelRel);
		getchar();*/
	}


#if 0
	// primary obj trajectory
	if (primaryObjID == pFusIntInfo->primaryObjTra.fusionID)
	{
		if (pFusIntInfo->primaryObjTra.age > 3 && fabs(pFusIntInfo->primaryObjTra.objPos[pFusIntInfo->primaryObjTra.index].Xcenter - pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.longPosition) > 0.277 * 10 && \
			(fabs(pFusIntInfo->primaryObjTra.objPos[pFusIntInfo->primaryObjTra.index].Ycenter - pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.latPosition) < 0.2))
		{
			pFusIntInfo->primaryObjTra.index = pFusIntInfo->primaryObjTra.index > (PRIMARY_OBJ_NUM - 2) ? 1 : (++pFusIntInfo->primaryObjTra.index);
			pFusIntInfo->primaryObjTra.age = pFusIntInfo->primaryObjTra.age > 254 ? 254 : (++pFusIntInfo->primaryObjTra.age);
			

			if (pFusIntInfo->primaryObjTra.vehPos.Xcenter > pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.longPosition)
			{
				pFusIntInfo->primaryObjTra.vehPos.Xcenter = 0.0F;
				pFusIntInfo->primaryObjTra.vehPos.Ycenter = 0.0F;
			}
			else
			{
				pFusIntInfo->primaryObjTra.vehPos.Xcenter += pHostMotion->speed * VISION_TIMESTAMP;
				pFusIntInfo->primaryObjTra.vehPos.Ycenter = 0.0F;
			}

			pFusIntInfo->primaryObjTra.objPos[pFusIntInfo->primaryObjTra.index].Xcenter = pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.longPosition + pFusIntInfo->primaryObjTra.vehPos.Xcenter;
			pFusIntInfo->primaryObjTra.objPos[pFusIntInfo->primaryObjTra.index].Ycenter = pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.latPosition + pFusIntInfo->primaryObjTra.vehPos.Ycenter;
			pFusIntInfo->primaryObjTra.posCount = pFusIntInfo->primaryObjTra.posCount > (PRIMARY_OBJ_NUM - 1) ? PRIMARY_OBJ_NUM : (++pFusIntInfo->primaryObjTra.posCount);
		}
		else {
			pFusIntInfo->primaryObjTra.age++;
			pFusIntInfo->primaryObjTra.vehPos.Xcenter += pHostMotion->speed * VISION_TIMESTAMP;
			pFusIntInfo->primaryObjTra.vehPos.Ycenter = 0.0F;
		}
	}
	else
	{
		if (primaryObjID != 255)
		{
			pFusIntInfo->primaryObjTra.age = 1;

			pFusIntInfo->primaryObjTra.fusionID = primaryObjID;
		}
		else
		{
			pFusIntInfo->primaryObjTra.age = 0;
			pFusIntInfo->primaryObjTra.fusionID = 0;
		}
		pFusIntInfo->primaryObjTra.posCount = 0;
		pFusIntInfo->primaryObjTra.index = 0;
		pFusIntInfo->primaryObjTra.vehPos.Xcenter = 0.0;
		pFusIntInfo->primaryObjTra.vehPos.Ycenter = 0.0;
	}

	if (pFusIntInfo->primaryObjTra.posCount > 10)
	{
		PolFitThree(pFusIntInfo->primaryObjTra.objPos, pFusIntInfo->primaryObjTra.posCount, coeff);
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceZeroOrderCoeff = coeff.C0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff = coeff.C1;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceSecondOrderCoeff = coeff.C2;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceThirdOrderCoeff = coeff.C3;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.startPoint.x0 = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.startPoint.y0 = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.longDistanceToend = pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.longPosition;
		pFusIntInfo->primaryObjTra.valid = 1;
		pFusIntInfo->primaryObjTra.id = pFusIntInfo->primaryObjTra.fusionID;
		pFusIntInfo->primaryObjTra.primaryObjTra.id = 1;
		pFusIntInfo->primaryObjTra.primaryObjTra.traceStatus = 2;

		if(fabs(coeff.C1) > 1.8)
			pFusIntInfo->primaryObjTra.primaryObjTra.quality = 1;
		else if(fabs(coeff.C1) > 1.0)
			pFusIntInfo->primaryObjTra.primaryObjTra.quality = 2;
		else if (fabs(coeff.C1) > 0.1)
			pFusIntInfo->primaryObjTra.primaryObjTra.quality = 3;
		else
			pFusIntInfo->primaryObjTra.primaryObjTra.quality = 4;
	}
	else
	{
		pFusIntInfo->primaryObjTra.valid = 0;
		pFusIntInfo->primaryObjTra.primaryObjTra.quality = 0;
		pFusIntInfo->primaryObjTra.primaryObjTra.traceStatus = 0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceZeroOrderCoeff = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceSecondOrderCoeff = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceThirdOrderCoeff = 0.0;
	}
#else

	// primary obj trajectory
	if (primaryObjID == pFusIntInfo->primaryObjTra.fusionID)
	{
		if (pFusIntInfo->primaryObjTra.age >= 0)
		{
			pFusIntInfo->primaryObjTra.age = pFusIntInfo->primaryObjTra.age > 254 ? 254 : (++pFusIntInfo->primaryObjTra.age);

			MatrixA[1][1] = pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.longPosition;
			MatrixA[1][2] = MatrixA[1][1] * MatrixA[1][1];
			MatrixA[1][3] = MatrixA[1][1] * MatrixA[1][2];
			MatrixA[3][2] = 2 * MatrixA[1][1];
			MatrixA[3][3] = 3 * MatrixA[1][2];

			if (GetMatrixInverse(MatrixA, MATRIX_DIM, MatrixInverse) == false)
			{
				pFusIntInfo->primaryObjTra.valid = 0;
				pFusIntInfo->primaryObjTra.primaryObjTra.quality = 0;
				pFusIntInfo->primaryObjTra.primaryObjTra.traceStatus = 0;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceZeroOrderCoeff = 0.0;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff = 0.0;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceSecondOrderCoeff = 0.0;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceThirdOrderCoeff = 0.0;
			}
			else
			{
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceZeroOrderCoeff = MatrixInverse[0][1] * pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.latPosition;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff = MatrixInverse[1][1] * pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.latPosition;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceSecondOrderCoeff = MatrixInverse[2][1] * pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.latPosition;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceThirdOrderCoeff = MatrixInverse[3][1] * pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.latPosition;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.startPoint.x0 = 0.0;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.startPoint.y0 = 0.0;
				pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.longDistanceToend = pFusionoutlist->objOutInfo.objects[pFusIntInfo->primaryObjTra.fusionID - 1].obj_estimate.longPosition;
				pFusIntInfo->primaryObjTra.valid = 1;
				pFusIntInfo->primaryObjTra.id = pFusIntInfo->primaryObjTra.fusionID;
				pFusIntInfo->primaryObjTra.primaryObjTra.id = 1;
				pFusIntInfo->primaryObjTra.primaryObjTra.traceStatus = 2;

				if (fabs(pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff) > 1.8)
					pFusIntInfo->primaryObjTra.primaryObjTra.quality = 1;
				else if (fabs(pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff) > 1.0)
					pFusIntInfo->primaryObjTra.primaryObjTra.quality = 2;
				else if (fabs(pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff) > 0.1)
					pFusIntInfo->primaryObjTra.primaryObjTra.quality = 3;
				else
					pFusIntInfo->primaryObjTra.primaryObjTra.quality = 4;
			}
		}
		else {
			pFusIntInfo->primaryObjTra.age++;
			pFusIntInfo->primaryObjTra.valid = 0;
			pFusIntInfo->primaryObjTra.primaryObjTra.quality = 0;
			pFusIntInfo->primaryObjTra.primaryObjTra.traceStatus = 0;
			pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceZeroOrderCoeff = 0.0;
			pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff = 0.0;
			pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceSecondOrderCoeff = 0.0;
			pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceThirdOrderCoeff = 0.0;
		}
	}
	else
	{
		if (primaryObjID != 255)
		{
			pFusIntInfo->primaryObjTra.age = 1;

			pFusIntInfo->primaryObjTra.fusionID = primaryObjID;
		}
		else
		{
			pFusIntInfo->primaryObjTra.age = 0;
			pFusIntInfo->primaryObjTra.fusionID = 0;
		}
		pFusIntInfo->primaryObjTra.valid = 0;
		pFusIntInfo->primaryObjTra.primaryObjTra.quality = 0;
		pFusIntInfo->primaryObjTra.primaryObjTra.traceStatus = 0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceZeroOrderCoeff = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceSecondOrderCoeff = 0.0;
		pFusIntInfo->primaryObjTra.primaryObjTra.curveFunc.latDistanceThirdOrderCoeff = 0.0;
	}


#endif
	return ZONE_RETURN_OK;
}

sint8 OutputAdapter_CopyLaneinfoToOutput(const EyeVisionLaneMark* pVisionLane, FusionOutputList* pFusionoutlist)
{
//	 //FusionLaneOutInfo fusionlaneOutInfo;
//	 //FusionLaneOutInfo * pfusionlaneOutInfo = &fusionlaneOutInfo;

	FusionSystemInternalInfo*	pFusIntInfo = &gFusionIntInfo;

	float32 t_lhsideprobabilitya = pVisionLane->lanehostprota.lhexistenceprobability0;
	uint32 lhsidea = pVisionLane->lanehostprota.lhside0;

	float32 t_lhsideprobabilityb = pVisionLane->lanehostprotb.lhexistenceprobability1;
	uint32 lhsideb = pVisionLane->lanehostprotb.lhside1;

	uint32 t_lhtypea = pVisionLane->lanehostprota.lhlanemarktype0;
	uint32 t_lhdlmtypea = pVisionLane->lanehostprota.lhdlmtype0;
	uint32 t_lhqualitya = 0;

	uint32 t_lhtypeb = pVisionLane->lanehostprotb.lhlanemarktype1;
	uint32 t_lhdlmtypeb = pVisionLane->lanehostprotb.lhdlmtype1;
	uint32 t_lhqualityb = 0;

	t_lhtypea = CalLaneMarkType(t_lhtypea, t_lhdlmtypea);
	t_lhtypeb = CalLaneMarkType(t_lhtypeb, t_lhdlmtypeb);

	t_lhqualitya = CalLaneQuality(t_lhsideprobabilitya, t_lhqualitya);
	t_lhqualityb = CalLaneQuality(t_lhsideprobabilityb, t_lhqualityb);


	pFusionoutlist->laneOutInfo.frameNum = 0;
	pFusionoutlist->laneOutInfo.hostLaneWidth = pVisionLane->lanaHostProtHeader.lhestimatedwidth;
	pFusionoutlist->laneOutInfo.leftLaneWidth = 3.5f;
	pFusionoutlist->laneOutInfo.rightLaneWidth = 3.5f;

	pFusionoutlist->laneOutInfo.laneChangeStatus = 0;
	pFusionoutlist->laneOutInfo.timeStamp =0;

	memcpy(&pFusionoutlist->laneOutInfo.primaryObjTra, &pFusIntInfo->primaryObjTra.primaryObjTra, sizeof(FusionPrimaryObjTrajectoryData));
	//pFusionoutlist->laneOutInfo.primaryObjTra.curveFunc.latDistanceFirstOrderCoeff = 0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.curveFunc.latDistanceSecondOrderCoeff = 0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.curveFunc.latDistanceThirdOrderCoeff = 0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.curveFunc.latDistanceZeroOrderCoeff = 0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.curveFunc.longDistanceToend = 0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.curveFunc.startPoint.x0 =0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.curveFunc.startPoint.y0 = 0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.id = 256;
	//pFusionoutlist->laneOutInfo.primaryObjTra.quality = 0;
	//pFusionoutlist->laneOutInfo.primaryObjTra.traceStatus = LANE_INVALID;



		if (lhsidea == LANE_LEFT_SIDE)
		{
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC00;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC10;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC20;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC30;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.longDistanceToend = pVisionLane->lanehostprota.lhfirstvrEnd0;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.startPoint.x0 = pVisionLane->lanehostprota.lhfirstvrStart0;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.startPoint.y0 = 2.00F;

			pFusionoutlist->laneOutInfo.leftHostLane.width = pVisionLane->lanehostprota.lhmarkerwidth0;
			pFusionoutlist->laneOutInfo.leftHostLane.id = pVisionLane->lanehostprota.lhtrackid0;
			pFusionoutlist->laneOutInfo.leftHostLane.traceStatus = LANE_MEASURED;


			pFusionoutlist->laneOutInfo.leftHostLane.quality = t_lhqualitya;
			pFusionoutlist->laneOutInfo.leftHostLane.color = pVisionLane->lanehostprota.lhcolor0;
			pFusionoutlist->laneOutInfo.leftHostLane.type = t_lhtypea;
		
		}
		else if (lhsidea == LANE_RIGHT_SIDE)
		{
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC00;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC10;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC20;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->lanehostprota.lhlinefirstC30;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.longDistanceToend = pVisionLane->lanehostprota.lhfirstvrEnd0;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.startPoint.x0 = pVisionLane->lanehostprota.lhfirstvrStart0;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.startPoint.y0 = -2.00F;

			pFusionoutlist->laneOutInfo.rightHostLane.width = pVisionLane->lanehostprota.lhmarkerwidth0;
			pFusionoutlist->laneOutInfo.rightHostLane.id = pVisionLane->lanehostprota.lhtrackid0;
			pFusionoutlist->laneOutInfo.rightHostLane.traceStatus = LANE_MEASURED;

			pFusionoutlist->laneOutInfo.rightHostLane.quality = t_lhqualitya;
			pFusionoutlist->laneOutInfo.rightHostLane.color = pVisionLane->lanehostprota.lhcolor0;
			pFusionoutlist->laneOutInfo.rightHostLane.type = t_lhtypea;
		}
		else
		{
			// do nothing
		}


		if ((lhsideb == LANE_RIGHT_SIDE)&(lhsidea != LANE_RIGHT_SIDE))
		{
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC01;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC11;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC21;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC31;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.longDistanceToend = pVisionLane->lanehostprotb.lhfirstvrEnd1;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.startPoint.x0 = pVisionLane->lanehostprotb.lhfirstvrStart1;
			pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.startPoint.y0 = -2.00F;

			pFusionoutlist->laneOutInfo.rightHostLane.width = pVisionLane->lanehostprotb.lhmarkerwidth1;
			pFusionoutlist->laneOutInfo.rightHostLane.id = pVisionLane->lanehostprotb.lhtrackid1;
			pFusionoutlist->laneOutInfo.rightHostLane.traceStatus = LANE_MEASURED;

			pFusionoutlist->laneOutInfo.rightHostLane.quality = t_lhqualityb;
			pFusionoutlist->laneOutInfo.rightHostLane.color = pVisionLane->lanehostprotb.lhcolor1;
			pFusionoutlist->laneOutInfo.rightHostLane.type = t_lhtypeb;
		}
		else if (lhsideb == LANE_LEFT_SIDE)
		{
		
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC01;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC11;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC21;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->lanehostprotb.lhlinefirstC31;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.longDistanceToend = pVisionLane->lanehostprotb.lhfirstvrEnd1;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.startPoint.x0 = pVisionLane->lanehostprotb.lhfirstvrStart1;
			pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.startPoint.y0 = 2.00F;

			pFusionoutlist->laneOutInfo.leftHostLane.width = pVisionLane->lanehostprotb.lhmarkerwidth1;
			pFusionoutlist->laneOutInfo.leftHostLane.id = pVisionLane->lanehostprotb.lhtrackid1;
			pFusionoutlist->laneOutInfo.leftHostLane.traceStatus = LANE_MEASURED;


			pFusionoutlist->laneOutInfo.leftHostLane.quality = t_lhqualityb;
			pFusionoutlist->laneOutInfo.leftHostLane.color = pVisionLane->lanehostprotb.lhcolor1;
			pFusionoutlist->laneOutInfo.leftHostLane.type = t_lhtypeb;
			
		}
		else
		{
		  // do nothing
		
		}


		/*********************************************************************************************************************************************************/
		//Adjacent Lane

		float32 t_lasideprobabilitya = pVisionLane->laneadjaprota.laexistprobability0;
		float32 t_lasideprobabilityb = pVisionLane->laneadjaprotb.laexistprobability1;
		float32 t_lasideprobabilityc = pVisionLane->laneadjaprotc.laexistprobability2;
		float32 t_lasideprobabilityd = pVisionLane->laneadjaprotd.laexistprobability3;

		uint32 lasidea = pVisionLane->laneadjaprota.lalinerole0;
		uint32 lasideb = pVisionLane->laneadjaprotb.lalinerole1;
		uint32 lasidec = pVisionLane->laneadjaprotc.lalinerole2;
		uint32 lasided = pVisionLane->laneadjaprotd.lalinerole3;

		 uint32 lasidekeeper = 0;
		 uint32 prelaside = NONE_LANEMARK;

		 uint8 t_laqualitya = 0;
		 uint8 t_laqualityb = 0;

		 uint32 t_latypea = pVisionLane->laneadjaprota.lalanemarktype0;
		 uint32 t_ladlmtypea = pVisionLane->laneadjaprota.ladlmtype0;

		 uint32 t_latypeb = pVisionLane->laneadjaprotb.lalanemarktype1;
		 uint32 t_ladlmtypeb = pVisionLane->laneadjaprotb.ladlmtype1;


		 t_latypea = CalLaneMarkType(t_latypea, t_ladlmtypea);
		 t_latypeb = CalLaneMarkType(t_latypeb, t_ladlmtypeb);

		 t_laqualitya = CalLaneQuality(t_lasideprobabilitya, t_laqualitya);
		 t_laqualityb = CalLaneQuality(t_lasideprobabilityb, t_laqualityb);

		 // add debouce for laneinfo

		if (lasidea == LEFT_LEFT_LANEMARK)
		{
			if ((lhsideb == NONE_LANEMARK)&& (prelaside == RIGHT_RIGHT_LANEMARK))
			{
				lasidekeeper = 10;
			}
			else if (lhsideb == RIGHT_RIGHT_LANEMARK)

			{
				lasidekeeper = 0;
			}

			if (lasidekeeper > 0)
			{
				lasidekeeper--;
			}	
		}

	
			if (lasidea == RIGHT_RIGHT_LANEMARK)
			{
				pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->laneadjaprota.lalineC00;
				pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->laneadjaprota.lalineC10;
				pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->laneadjaprota.lalineC20;
				pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->laneadjaprota.lalineC30;
				pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.longDistanceToend = pVisionLane->laneadjaprota.lavrend0;
				pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.startPoint.x0 = pVisionLane->laneadjaprota.lavrstart0;
				pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.startPoint.y0 = -5.625f;
				
				pFusionoutlist->laneOutInfo.rightNeighborLane.id = pVisionLane->laneadjaprota.lalanetrackid0;
				pFusionoutlist->laneOutInfo.rightNeighborLane.width = pVisionLane->laneadjaprota.lanemarkerwidth0;
				pFusionoutlist->laneOutInfo.rightNeighborLane.traceStatus = LANE_MEASURED;

				pFusionoutlist->laneOutInfo.rightNeighborLane.color = pVisionLane->laneadjaprota.lacolor0;
				pFusionoutlist->laneOutInfo.rightNeighborLane.type = t_latypea;
                pFusionoutlist->laneOutInfo.rightNeighborLane.quality = t_laqualitya;
				

			}
			else if ((lasidea == LEFT_LEFT_LANEMARK) )
				/*((lasidea == LEFT_LEFT_LANEMARK) && (lasidekeeper == 0))*/
			{
				pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->laneadjaprota.lalineC00;
				pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->laneadjaprota.lalineC10;
				pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->laneadjaprota.lalineC20;
				pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->laneadjaprota.lalineC30;

				pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.longDistanceToend = pVisionLane->laneadjaprota.lavrend0;
				pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.startPoint.x0 = pVisionLane->laneadjaprota.lavrstart0;
				pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.startPoint.y0 = 5.625f;
				
				pFusionoutlist->laneOutInfo.leftNeighborLane.id = pVisionLane->laneadjaprota.lalanetrackid0;
				pFusionoutlist->laneOutInfo.leftNeighborLane.width = pVisionLane->laneadjaprota.lanemarkerwidth0;

				pFusionoutlist->laneOutInfo.leftNeighborLane.color = pVisionLane->laneadjaprota.lacolor0;
				pFusionoutlist->laneOutInfo.leftNeighborLane.type = t_latypea;
				pFusionoutlist->laneOutInfo.leftNeighborLane.quality = t_laqualitya;

			}
			else {
				//do nothing;
			}
	
				if (lasideb == RIGHT_RIGHT_LANEMARK)
				{
					pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->laneadjaprotb.lalineC01;
					pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->laneadjaprotb.lalineC11;
					pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->laneadjaprotb.lalineC21;
					pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->laneadjaprotb.lalineC31;

					pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.longDistanceToend = pVisionLane->laneadjaprotb.lavrend1;
					pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.startPoint.x0 = pVisionLane->laneadjaprotb.lavrstart1;
					pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.startPoint.y0 = -5.625f;
					
					pFusionoutlist->laneOutInfo.rightNeighborLane.id = pVisionLane->laneadjaprotb.lalanetrackid1;
					pFusionoutlist->laneOutInfo.rightNeighborLane.width = pVisionLane->laneadjaprotb.lanemarkerwidth1;

					pFusionoutlist->laneOutInfo.rightNeighborLane.type = t_latypeb;
					pFusionoutlist->laneOutInfo.rightNeighborLane.quality = t_laqualityb;
					pFusionoutlist->laneOutInfo.rightNeighborLane.color = pVisionLane->laneadjaprotb.lacolor1;
		    	}
				else if (lasideb == LEFT_LEFT_LANEMARK)
				{
				
					pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceZeroOrderCoeff = -pVisionLane->laneadjaprotb.lalineC01;
					pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceFirstOrderCoeff = -pVisionLane->laneadjaprotb.lalineC11;
					pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceSecondOrderCoeff = -pVisionLane->laneadjaprotb.lalineC21;
					pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceThirdOrderCoeff = -pVisionLane->laneadjaprotb.lalineC31;

					pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.longDistanceToend = pVisionLane->laneadjaprotb.lavrend1;
					pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.startPoint.x0 = pVisionLane->laneadjaprotb.lavrstart1;
					pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.startPoint.y0 = 5.625f;

					pFusionoutlist->laneOutInfo.leftNeighborLane.id = pVisionLane->laneadjaprotb.lalanetrackid1;
					pFusionoutlist->laneOutInfo.leftNeighborLane.width = pVisionLane->laneadjaprotb.lanemarkerwidth1;

					pFusionoutlist->laneOutInfo.leftNeighborLane.type = t_latypeb;
					pFusionoutlist->laneOutInfo.leftNeighborLane.quality = t_laqualityb;
					pFusionoutlist->laneOutInfo.leftNeighborLane.color = pVisionLane->laneadjaprotb.lacolor1;
				}
				else
				{
				    // do nothing
				}

		
				gFusionLaneIntInfo.LC0 = pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceZeroOrderCoeff;
				gFusionLaneIntInfo.LC1 = pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceFirstOrderCoeff;
				gFusionLaneIntInfo.LC2 = pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceSecondOrderCoeff;
				gFusionLaneIntInfo.LC3 = pFusionoutlist->laneOutInfo.leftHostLane.curveFunc.latDistanceThirdOrderCoeff;
				gFusionLaneIntInfo.LQ = pFusionoutlist->laneOutInfo.leftHostLane.quality;


				gFusionLaneIntInfo.RC0 = pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceZeroOrderCoeff;
				gFusionLaneIntInfo.RC1 = pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceFirstOrderCoeff;
				gFusionLaneIntInfo.RC2 = pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceSecondOrderCoeff;
				gFusionLaneIntInfo.RC3 = pFusionoutlist->laneOutInfo.rightHostLane.curveFunc.latDistanceThirdOrderCoeff;
				gFusionLaneIntInfo.RQ = pFusionoutlist->laneOutInfo.rightHostLane.quality;

				gFusionLaneIntInfo.LAC0 = pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceZeroOrderCoeff;
				gFusionLaneIntInfo.LAC1 = pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceFirstOrderCoeff;
				gFusionLaneIntInfo.LAC2 = pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceSecondOrderCoeff;
				gFusionLaneIntInfo.LAC3 = pFusionoutlist->laneOutInfo.leftNeighborLane.curveFunc.latDistanceThirdOrderCoeff;
				gFusionLaneIntInfo.LAQ = pFusionoutlist->laneOutInfo.leftNeighborLane.quality;


				gFusionLaneIntInfo.RAC0 = pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceZeroOrderCoeff;
				gFusionLaneIntInfo.RAC1 = pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceFirstOrderCoeff;
				gFusionLaneIntInfo.RAC2 = pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceSecondOrderCoeff;
				gFusionLaneIntInfo.RAC3 = pFusionoutlist->laneOutInfo.rightNeighborLane.curveFunc.latDistanceThirdOrderCoeff;
				gFusionLaneIntInfo.RAQ = pFusionoutlist->laneOutInfo.rightNeighborLane.quality;

		prelaside = lasidea;


	return ZONE_RETURN_OK;
}

sint8 OutputAdapter_CopyLaneRoadedgeinfoToOutput(const VisionLaneRoadedge* pVisionLaneRoadedge, FusionOutputList* pFusionoutlist)
{

	uint32 t_roadedgesideheader = pVisionLaneRoadedge->laneroadedgeprotheader.lreside0;
	uint32 t_roadedgesidea = pVisionLaneRoadedge->laneroadedgeprota.lreside1;

	float32 t_roadedgesideheaderPro = pVisionLaneRoadedge->laneroadedgeprotheader.lreexistprob0;
	float32 t_roadedgesideaPro = pVisionLaneRoadedge->laneroadedgeprota.lreexistprob1;

	uint8_t t_roadedgeAgeheader = pVisionLaneRoadedge->laneroadedgeprotheader.lreage0;
	uint8_t t_roadedgeAgea = pVisionLaneRoadedge->laneroadedgeprota.lreage1;
	
	uint32 t_roadedgesideTypeheader = pVisionLaneRoadedge->laneroadedgeprotheader.lretype0;
	uint32 t_roadedgesideTypea = pVisionLaneRoadedge->laneroadedgeprota.lretype1;

	uint8_t t_roadedgeQheader = 0;
	uint8_t t_roadedgeQa = 0;

	uint32_t t_roadedgeTrackStatusheader = 0;
	uint32_t t_roadedgeTrackStatusa = 0;

	t_roadedgesideTypeheader = CalLreType(t_roadedgesideTypeheader);
    t_roadedgesideTypea = CalLreType(t_roadedgesideTypea);

	 t_roadedgeQheader = CalLaneQuality(t_roadedgesideheaderPro, t_roadedgeQheader);
	 t_roadedgeQa = CalLaneQuality(t_roadedgesideaPro, t_roadedgeQa);


	 if (t_roadedgeAgeheader > 2)
	 {
		 t_roadedgeTrackStatusheader = 2; // meausred
	 }
	 else if (t_roadedgeAgeheader > 0)
	 {
		 t_roadedgeTrackStatusheader = 1; //init
	 }
	 else
	 {
		 t_roadedgeTrackStatusheader = 0;
	 }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 if (t_roadedgeAgea > 2)
	 {
		 t_roadedgeTrackStatusa = 2; // meausred
	 }
	 else if (t_roadedgeAgea > 0)
	 {
		 t_roadedgeTrackStatusa = 1; //init
	 }
	 else
	 {
		 t_roadedgeTrackStatusa = 0;
	 }
       

	if(t_roadedgesideheader == ROADEEDGR_LEFT)
	{
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceZeroOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC00;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceFirstOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC10;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceSecondOrderCoeff =- pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC20;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceThirdOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC30;

		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.startPoint.x0 = pVisionLaneRoadedge->laneroadedgeprotheader.lrevrStart0;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.longDistanceToend = pVisionLaneRoadedge->laneroadedgeprotheader.lrevrEnd0;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.id = pVisionLaneRoadedge->laneroadedgeprotheader.lreid0;
		pFusionoutlist->roadEdgeOutInfo.detectedEdgeCnt = t_roadedgeAgeheader;

		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.quality = t_roadedgeQheader;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.traceStatus = t_roadedgeTrackStatusheader;

	}
	else if (t_roadedgesideheader == ROADEEDGR_RIGHT)
	{
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceZeroOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC00;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceFirstOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC10;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceSecondOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC20;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceThirdOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprotheader.lrelineC30;

		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.startPoint.x0 = pVisionLaneRoadedge->laneroadedgeprotheader.lrevrStart0;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.longDistanceToend = pVisionLaneRoadedge->laneroadedgeprotheader.lrevrEnd0;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.id = pVisionLaneRoadedge->laneroadedgeprotheader.lreid0;
		pFusionoutlist->roadEdgeOutInfo.detectedEdgeCnt = t_roadedgeAgeheader;

		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.quality = t_roadedgeQheader;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.traceStatus = t_roadedgeTrackStatusheader;
	}
	else 
	{
		//do nothing
	}

	if (t_roadedgesidea == ROADEEDGR_RIGHT)
	{
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceZeroOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC01;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceFirstOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC11;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceSecondOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC21;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceThirdOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC31;

		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.startPoint.x0 = pVisionLaneRoadedge->laneroadedgeprota.lrevrStart1;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.longDistanceToend = pVisionLaneRoadedge->laneroadedgeprota.lrevrEnd1;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.id = pVisionLaneRoadedge->laneroadedgeprota.lreid1;

		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.quality = t_roadedgeQa;
		pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.traceStatus = t_roadedgeTrackStatusa;
	}
	else if (t_roadedgesidea == ROADEEDGR_LEFT)
	{
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceZeroOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC01;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceFirstOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC11;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceSecondOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC21;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceThirdOrderCoeff = -pVisionLaneRoadedge->laneroadedgeprota.lrelineC31;

		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.startPoint.x0 = pVisionLaneRoadedge->laneroadedgeprota.lrevrStart1;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.longDistanceToend = pVisionLaneRoadedge->laneroadedgeprota.lrevrEnd1;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.id = pVisionLaneRoadedge->laneroadedgeprota.lreid1;

		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.quality = t_roadedgeQa;
		pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.traceStatus = t_roadedgeTrackStatusa;
	
	}
	else
	{
	  // do noting
	}

	float32 t_hostVehPosDisLeft = std::fabs(pFusionoutlist->roadEdgeOutInfo.leftRoadEdge.roadEdgeCurve.latDistanceZeroOrderCoeff);
	float32 t_hostVehPosDisRight = std::fabs(pFusionoutlist->roadEdgeOutInfo.rightRoadEdge.roadEdgeCurve.latDistanceZeroOrderCoeff);

	if (t_hostVehPosDisLeft != 0)
	{
		if (t_hostVehPosDisRight != 0)
		{
			if (t_hostVehPosDisLeft <= t_hostVehPosDisRight)
			{
				if (t_hostVehPosDisLeft < 2.6f)
				{
					pFusionoutlist->roadEdgeOutInfo.hostVehPos = 1; // left
				}
				else
				{
					pFusionoutlist->roadEdgeOutInfo.hostVehPos = 2; // Mid
				}
			}
			else
			{
				if (t_hostVehPosDisRight < 2.6f)
				{
					pFusionoutlist->roadEdgeOutInfo.hostVehPos = 3; // right
				}
				else
				{
					pFusionoutlist->roadEdgeOutInfo.hostVehPos = 2;  // Mid
				}

			}
		}
		else
		{
			if (t_hostVehPosDisLeft < 2.6f)
			{
				pFusionoutlist->roadEdgeOutInfo.hostVehPos = 1; // left
			}
			else
			{
				pFusionoutlist->roadEdgeOutInfo.hostVehPos = 2; // Mid
			}
		}
	}
	else if (t_hostVehPosDisRight != 0)
	{
		if (t_hostVehPosDisRight < 2.6f)
		{
			pFusionoutlist->roadEdgeOutInfo.hostVehPos = 3; // right
		}
		else
		{
			pFusionoutlist->roadEdgeOutInfo.hostVehPos = 2;  // Mid
		}
	}
	else
	{
		pFusionoutlist->roadEdgeOutInfo.hostVehPos = 0; // Unknown
	}
		
		gFusionLaneIntInfo.hostposition = pFusionoutlist->roadEdgeOutInfo.hostVehPos;
  

	pFusionoutlist->roadEdgeOutInfo.frameNum = 0;
	pFusionoutlist->roadEdgeOutInfo.timeStamp = 0;
	pFusionoutlist->roadEdgeOutInfo.errorFlag = 0;


	
	return ZONE_RETURN_OK;
}

//***************** polinomial fit********************************
// polinomial : y=c0 + c1*x + c2*x*x + c3*x*x*x
// t_pointNum: the number of points
// points[]: include the x and y 
// COEFF: a struct is used to save the coefficient: c0, c1, c2,c3
void PolFitThree(ObjBoundary points[], uint8_t pointNum, Coeff& coeff)
{
	//-----------------basic method---------------------------
	//n c0     + sumX c1   + sumXX c2   +  sumXXX c3   = sumY
	//sumX c0  + sumXX c1  + sumXXX c2  +  sumXXXX c3  = sumXY
	//sumXX c0 + sumXXX c1 + sumXXXX c2 +  sumXXXXX c3 = sumXXY
	//sumXXX c0+sumXXXX c1 + sumXXXXX c2+  sumXXXXXX c3 =sumXXXY

	long double sumX = 0, sumY = 0, sumXX = 0, sumXXX = 0, sumXXXX = 0, sumXXXXX = 0, sumXXXXXX = 0, sumXXXXXXX = 0, sumXY = 0, sumXXY = 0, sumXXXY = 0;
	for (int t_i = 0; t_i < pointNum; t_i++)
	{
		sumX = sumX + points[t_i].Xcenter;
		sumY = sumY + points[t_i].Ycenter;
		sumXX = sumXX + points[t_i].Xcenter * points[t_i].Xcenter;
		sumXXX = sumXXX + points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter;
		sumXXXX = sumXXXX + points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter;
		sumXXXXX = sumXXXXX + points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter;//
		sumXXXXXX = sumXXXXXX + points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter;
		//	sumXXXXXXX = sumXXXXXXX + points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x*points[t_i].x;
		sumXY = sumXY + points[t_i].Xcenter * points[t_i].Ycenter;
		sumXXY = sumXXY + points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Ycenter;
		sumXXXY = sumXXXY + points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Xcenter * points[t_i].Ycenter;

	}

	double  a11 = pointNum; double  a12 = sumX;    double  a13 = sumXX;    double  a14 = sumXXX;    double  b1 = sumY;
	double  a21 = sumX;		  double  a22 = sumXX;   double  a23 = sumXXX;   double  a24 = sumXXXX;   double  b2 = sumXY;
	double  a31 = sumXX;      double  a32 = sumXXX;  double  a33 = sumXXXX;  double  a34 = sumXXXXX;  double  b3 = sumXXY;
	double  a41 = sumXXX;     double  a42 = sumXXXX; double  a43 = sumXXXXX; double  a44 = sumXXXXXX; double  b4 = sumXXXY;
	//double a11 = 2;      double  a12 = 4;   double  a13 = -2;   double  b1 = 2;     
	//double  a21 = 1;  double  a22 = -3;  double  a23 = -3;  double  b2 = -1;
	//double  a31 = 4; double  a32 = 2; double  a33 = 2; double  b3 = 3;

	//R2=R2-(a21/a11)*R1    
	double a21x, a22x, a23x, a24x, b2x;
	a21x = a21 - a21 / a11 * a11; a22x = a22 - a21 / a11 * a12; a23x = a23 - a21 / a11 * a13; a24x = a24 - a21 / a11 * a14; b2x = b2 - a21 / a11 * b1;
	//R3=R3-(a31/a11)*R1
	double a31x, a32x, a33x, a34x, b3x;
	a31x = a31 - a31 / a11 * a11; a32x = a32 - a31 / a11 * a12; a33x = a33 - a31 / a11 * a13; a34x = a34 - a31 / a11 * a14; b3x = b3 - a31 / a11 * b1;
	//R4=R4-(a41/a11)*R1
	double a41x, a42x, a43x, a44x, b4x;
	a41x = a41 - a41 / a11 * a11; a42x = a42 - a41 / a11 * a12; a43x = a43 - a41 / a11 * a13; a44x = a44 - a41 / a11 * a14; b4x = b4 - a41 / a11 * b1;

	//R3=R3-(a32/a22)*R2
	double a32xx, a33xx, a34xx, b3xx;
	a32xx = a32x - a32x / a22x * a22x; a33xx = a33x - a32x / a22x * a23x; a34xx = a34x - a32x / a22x * a24x; b3xx = b3x - a32x / a22x * b2x;
	//R4=R4-(a42/a22)*R2
	double a42xx, a43xx, a44xx, b4xx;
	a42xx = a42x - a42x / a22x * a22x; a43xx = a43x - a42x / a22x * a23x; a44xx = a44x - a42x / a22x * a24x; b4xx = b4x - a42x / a22x * b2x;

	//R4=R4-(a43/a33)R3
	double a43xxx, a44xxx, b4xxx;
	a43xxx = a43xx - a43xx / a33xx * a33xx; a44xxx = a44xx - a43xx / a33xx * a34xx; b4xxx = b4xx - a43xx / a33xx * b3xx;

	coeff.C3 = b4xxx / a44xxx;
	coeff.C2 = (b3xx - a34xx * coeff.C3) / a33xx;
	coeff.C1 = (b2x - a23x * coeff.C2 - a24x * coeff.C3) / a22x;
	coeff.C0 = (b1 - a12 * coeff.C1 - a13 * coeff.C2 - a14 * coeff.C3) / a11;
}

uint8 CalLaneMarkType(uint32 lanetype,uint32 lanedlmtype)
{
	if (lanetype == HLANE_MARK_UNDECIDED)
	{
		lanetype = 11; //Undecided
	}
	else if (lanetype == HLANE_MARK_SOLID)
	{
		lanetype = 1; //solid
	}
	else if (lanetype == HLANE_MARK_DASHED)
	{
		lanetype = 2; //dashed
	}
	else if (lanetype == HLANE_MARK_DLM)
	{
	  if (lanedlmtype == LANE_DLM_SOLID_DASHED)
		{
			lanetype = 6; // Double(Left Solid, Right Dased)
		}
		else if (lanedlmtype == LANE_DLM_DASHED_SOLID)
		{
			lanetype = 5; // Double(Left Dased, Right Solid)
		}
		else if (lanedlmtype == LANE_DLM_SOLID_SOLID)
		{
			lanetype = 8; //Dashed Solid
		}
		else if (lanedlmtype == LANE_DLM_DASHED_DASHED)
		{
			lanetype = 7; // Solid Dashed
		}
		else
		{
			lanetype = 11; // Undecided
		}
	}
	return lanetype;
}


uint8 CalLaneQuality( float32 t_lhsideprobability, uint32 t_lhquality)
{
		if (0<t_lhsideprobability <= 0.3f)
		{
			t_lhquality = LOW_LANEMARK;
		}
		else if (0.3f < t_lhsideprobability <= 0.5f)
		{
			t_lhquality = MID_LANEMARK;
		}
		else if (0.5f < t_lhsideprobability <= 0.8f)
		{
			t_lhquality = MIDHIGH_LANEMARK;
		}
		else if (0.8f < t_lhsideprobability <= 1.0f)
		{
			t_lhquality = HIGH_LANEMARK;
		}
		else
		{
			t_lhquality = INVALID_LANEMARK;
		}

		return t_lhquality;
}


uint32 CalLreType(uint32 t_lretype)
{
	if (t_lretype == LRE_UNDECIDED)
	{
		t_lretype = 0; //Unknown
	}
	else if (t_lretype == LRE_ROAD_EDGE)
	{
		t_lretype = 3; // stone
	}
	else if (t_lretype == LRE_ELEVATED_STRUCTURE)
	{
		t_lretype = 5; // Fence
	}
	else if (t_lretype == LRE_CURB)
	{
		t_lretype = 6; // curb
	}
	else if (t_lretype == LRE_CONES_LOLES)
	{
		t_lretype = 7; // Cone Bucket
	}
	else if (t_lretype == LRE_PARKING_CARS)
	{
		t_lretype = 8; //parked cars
	}
	else
	{
		t_lretype = 0; //Unknown
	}

	return t_lretype;
}


  double getA(double arcs[MATRIX_DIM][MATRIX_DIM],int n)
  {
      if(n==1)
      {
          return arcs[0][0];
      }
      double ans = 0;
      double temp[MATRIX_DIM][MATRIX_DIM]={0.0};
      int i,j,k;
      for(i=0;i<n;i++)
      {
          for(j=0;j<n-1;j++)
          {
              for(k=0;k<n-1;k++)
              {
                  temp[j][k] = arcs[j+1][(k>=i)?k+1:k];
                  
              }
          }
          double t = getA(temp,n-1);
          if(i%2==0)
          {
              ans += arcs[0][i]*t;
          }
          else
          {
              ans -=  arcs[0][i]*t;
          }
      }
      return ans;
  }
  
  void  getAStart(double arcs[MATRIX_DIM][MATRIX_DIM],int n,double ans[MATRIX_DIM][MATRIX_DIM])
  {
      if(n==1)
      {
          ans[0][0] = 1;
          return;
      }
      int i,j,k,t;
      double temp[MATRIX_DIM][MATRIX_DIM];
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              for(k=0;k<n-1;k++)
              {
                  for(t=0;t<n-1;t++)
                  {
                      temp[k][t] = arcs[k>=i?k+1:k][t>=j?t+1:t];
                  }
              }
              
              ans[j][i]  =  getA(temp,n-1); 
              if((i+j)%2 == 1)
              {
                  ans[j][i] = - ans[j][i];
              }
          }
      }
  }
  

  bool GetMatrixInverse(double src[MATRIX_DIM][MATRIX_DIM],int n,double des[MATRIX_DIM][MATRIX_DIM])
  {
      double flag=getA(src,n);
      double t[MATRIX_DIM][MATRIX_DIM];
      if(0==flag)
      {
          return false;
      }
      else
      {
          getAStart(src,n,t);
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  des[i][j]=t[i][j]/flag;
              }
              
          }
      }
      
      return true;
  }
  