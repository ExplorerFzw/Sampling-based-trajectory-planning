/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : signal_preprocess.cpp
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

#include "signal_preprocess_pub.h"
#include "signal_preprocess_pri.h"
#include "datastruct_fusion_internal_state.h"
#include "p_radar_object.h"
#include <numeric>

using namespace std;

const uint8 DTC_RADARLOSTHRES = 6U;
const uint8 DTC_RADARLOSRECOVER = 17U;


/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        SensorAdapter_SignalPreProcess_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_SignalPreProcess_Init_V(void)
{
	for (uint8_t idCount = 0; idCount < UTILS_RADAR_MAX_OBJ_NUM; idCount++)
	{
		memset(radarDelSameId[idCount], 0, sizeof(uint8_t) * 2);
	}
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        SensorAdapter_SignalPreProcess_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_SignalPreProcess_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        SensorAdapter_SignalPreProcess_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

sint8 filterInvalidRadarObj(const CanRadarObjList* pRadarList, RadarTrackDetail* pRadarTrackDetail)
{
	return 0;
}


/**
 *******************************************************************************
 * \brief
 *
 *     - Filter out some low quality/suspicious vision track
 *
 * \param  pInternalVisionList     [IN][OUT]  vision input object list
 *         pVisTrackDetail         [OUT]      vision internal object list
 *
 * \return status   FUSION_STATUS_OK on success
 *
 *******************************************************************************
*/
sint8 filterInvalidVisionObj(const VisionObjList* pInternalVisionList, VisTrackDetail* pVisTrackDetail)
{
	return 0;
}


/**
 *******************************************************************************
 * \brief
 *
 *     - compensate sensor timestamp to its measurement time
 *
 * \param  originTimestamp     [IN]  original sensor timestamp
 *         latency             [IN]  latency of timestamp
 *
 * \return compensated timestamp.
 *
 *******************************************************************************
*/
float32 timestampCompensation(float32 originTimestamp, float32 latency)
{
	float32 compensatedTimestamp = (originTimestamp > latency) ? (originTimestamp - latency) : 0;
	return compensatedTimestamp;
}

/**
 *******************************************************************************
 * \brief
 *
 *     - Convert the information from radar coordinate system to vehicle coordinate system
 *
 * \param  pRadarObj            [IN]  radar input object
 *         pRadarTrackDetail    [OUT] radar internal object
 *
 * \return status   FUSION_STATUS_OK on success
 *
 *******************************************************************************
*/
sint8 inlineconvertRadarCoordinateToVehicle(const RadarObj* pradarobj, RadarTrackDetail* pRadarTrackDetail)
{
	// position of target object, center of vehicle rear axle shaft is reference point.
	pRadarTrackDetail->objXPos = pradarobj->objXPos;
	pRadarTrackDetail->objYPos = pradarobj->objYPos;
	return 0;
}
/**
 *******************************************************************************
 * \brief
 *
 *     - Convert the information from vision coordinate system to vehicle coordinate system
 *
 * \param  pVisionObj        [IN]  vision input object
           pVisTrackDetail   [OUT] vision internal object
 *
 * \return status   FUSION_STATUS_OK on success
 *
 *******************************************************************************
*/
sint8 convertVisionCoordinateToVehicle(const VisionObj* pVisionObj, VisTrackDetail* pVisTrackDetail)
{
    //static const float32 ANGLE = 0.0192F;
    //static const float32 SINANGLE = SM_SIN(ANGLE);
    //static const float32 COSANGLE = SM_COS(ANGLE);

    pVisTrackDetail->obj_coordinate.longitudinal = pVisionObj->obj_coordinate.longitudinal + VISION_MOUNT_LONG_POSN;
    pVisTrackDetail->obj_coordinate.lateral = pVisionObj->obj_coordinate.lateral;

	pVisTrackDetail->obj_coordinate.longitudinalVariance = pVisionObj->obj_coordinate.longitudinalVariance;
	pVisTrackDetail->obj_coordinate.lateralVariance = pVisionObj->obj_coordinate.lateralVariance;

    //pVisTrackDetail->obj_coordinate.longitudinal = pVisTrackDetail->obj_coordinate.longitudinal * COSANGLE + pVisTrackDetail->obj_coordinate.lateral * SINANGLE;
    //pVisTrackDetail->obj_coordinate.lateral = pVisTrackDetail->obj_coordinate.lateral * COSANGLE - pVisTrackDetail->obj_coordinate.longitudinal * SINANGLE;
	return 0;
}
/**
 *******************************************************************************
 * \brief
 *
 *     - Compute the radar over-the-ground velocity based on relative velocity
 *
 * \param  pRadarObj            [IN]  radar input object list
 *         pEgoMotion           [IN]  ego-motion signal
 *         pRadarTrackDetail    [OUT] radar internal object
 *
 * \return status   FUSION_STATUS_OK on success
 *
 *******************************************************************************
*/
sint8 radarRelToAbsolute(const RadarObj* pRadarObj, RadarTrackDetail* pRadarTrackDetail, const EgoParam* pHostMotion)
{
    float32 yawRate = pHostMotion->EgoYawRateVal;
    float32 hostXVel = pHostMotion->EgoSpeedVal; // pHostMotion->EgoSpeedVal; // host longitudinal velocity;
    float32 hostYVel = 0.0F; // host lateral velocity

    ///*calculate radar rotation vector based on host yaw rate and radar position*/
    //Vector3d hostYawRate(0.0F, 0.0F, pEgoMotion->yawrate.val);
    //Vector3d radarCoordinate(RADAR_MOUNT_LONG_POSN, RADAR_MOUNT_LAT_POSN, 0.0F);
    //Vector3d radarRotationRate = hostYawRate.cross(radarCoordinate);

    ///*calculate radar velocity based on radar rotation vector*/
    //float32 radarXVel1 = hostXVel + radarRotationRate(0);
    //float32 radarYVel1 = hostYVel + radarRotationRate(1);

    ///*directly cal without Eigen*/
	float32 Robj = SM_SQRT(powf(pRadarObj->objXPos, 2) + powf(pRadarObj->objYPos, 2));
	float32 thetaObj = atan2f(pRadarObj->objYPos, pRadarObj->objXPos);
    float32 radarXVel = hostXVel - yawRate * Robj *  SM_SINF(thetaObj);
    float32 radarYVel = hostYVel + yawRate * Robj *  SM_COSF(thetaObj);

    /*calculate radar object absolute velocity based on radar velocity*/
    pRadarTrackDetail->objXVelAbs = pRadarObj->objXVelRel + radarXVel;
    pRadarTrackDetail->objYVelAbs = pRadarObj->objYVelRel + radarYVel;

    /*maintain the radar object acceleration*/
    pRadarTrackDetail->objXAccAbs = pRadarObj->objXAccRel + pHostMotion->EgoAccVal;
	pRadarTrackDetail->objXAccRel = pRadarObj->objXAccRel;
	return 0;
}
/**
 *******************************************************************************
 * \brief
 *
 *     - Compute the vision over-the-ground velocity based on relative velocity
 *
 * \param  pVisionObj        [IN]  vision input object list
 *         pVisTrackDetail   [OUT] vision internal object
 *
 * \return status   FUSION_STATUS_OK on success
 *
 *******************************************************************************
*/
sint8 visionRelToAbsolute(const VisionObj* pInternalVisionList, VisTrackDetail* pVisTrackDetail)
{
	return 0;
}
/**
*******************************************************************************
* \brief
*
*     - Radar range-rate de-aliasing
*
* \param  pRadarObj            [IN]  radar input object list
*         pRadarTrackDetail    [OUT] radar internal object
*
* \return status   FUSION_STATUS_OK on success
*
*******************************************************************************
*/
sint8 radarRangeRateDeali(const RadarObj* pRadarObj, RadarTrackDetail* pRadarTrackDetail)
{
	return 0;
}
/**
*******************************************************************************
* \brief
*
*     - Radar range-rate de-aliasing
*
* \param  pRadarObj            [IN]  radar input object list
*         pRadarTrackDetail    [OUT] radar internal object
*
* \return status   FUSION_STATUS_OK on success
*
*******************************************************************************
*/
 /*by Wugsz, remove logic 
inline sint8 egoMotionSmooth(const VehicleData* pHostMotion, FusionSystemInternalInfo* pFusIntInfo)
{
    //static float32 preSpeed = 0.0F;
    //static float32 preYawRate = 0.0F;
    sint8 signal = 1;
    if ((EGOMOTION_BACK1 == pHostMotion->vehicleMotionStatus) || (EGOMOTION_BACK2 == pHostMotion->vehicleMotionStatus))
    {
        signal = -1;
    }
    //pFusIntInfo->egoSpeedAndYawrate.EgoSpeedVal = 0.2F * signal * pHostMotion->speed + 0.8F * pFusIntInfo->egoSpeedAndYawrate.EgoSpeedVal;
    //pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal = 0.2F * pHostMotion->yawRate + 0.8F * pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal;
    pFusIntInfo->egoSpeedAndYawrate.EgoSpeedVal = signal * pHostMotion->speed;
    pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal = pHostMotion->yawRate;
    return 0;
}
*/

sint8 compareTTC(VisTrackDetail& refVisTrackDetail, const EgoParam* pHostMotion)
{
	float32 TTCVision = refVisTrackDetail.obj_TTC;
	float32 TTCCal;
	float32 vRel = pHostMotion->EgoSpeedVal - refVisTrackDetail.obj_velocity.Vx;
	const float32 dTTCMax = 1.5F;

	if (vRel > 1.0e-6F)
	{
		TTCCal = refVisTrackDetail.obj_coordinate.longitudinal / vRel;
		if (TTCVision >3.5F)
		{
			if (TTCCal < 3.5F - dTTCMax)
			{
				refVisTrackDetail.obj_coordinate.longitudinalVariance = 10.0F;
			}
		}
		else
		{
			if ((TTCCal < TTCVision - dTTCMax) || (TTCCal > TTCVision + dTTCMax))
			{
				refVisTrackDetail.obj_coordinate.longitudinalVariance = 10.0F;
			}
		}
	}
	return 0;
}


int32_t SensorAdapter_SignalPreProcess_Run_V(const VehicleData* pHostMotion, CanRadarObjList* pcovrad, const VisionObjList* pVisInfo, uint8 validity[])
{
    static uint8 radarBlkCnt = 0;
    static deque<uint8> radarRecoverQue;
	uint8_t idValid[UTILS_RADAR_MAX_OBJ_NUM] = { 0 };

	FusionSystemInternalInfo* pFusIntInfo = &gFusionIntInfo;

	pFusIntInfo->lookIndex = pcovrad->frameNum;
	pFusIntInfo->dayNightState = pVisInfo->dayNightState;

	/* by Wugsz¡ê? remove logic x

	 if (5 <= pFusIntInfo->hostYawTimeQue.size())
	    {
	        pFusIntInfo->hostYawTimeQue.pop_front();
	    }
	    pFusIntInfo->hostYawTimeQue.push_back(make_pair(pHostMotion->yawRateTimeStamp, pHostMotion->yawRate));

	    egoMotionSmooth(pHostMotion, pFusIntInfo);
		*/
	pFusIntInfo->egoSpeedAndYawrate.EgoSpeedVal = pHostMotion->speed;
	pFusIntInfo->egoSpeedAndYawrate.EgoYawRateVal = pHostMotion->yawRate;

	/*set all tracked vision to invalid, we want to keep the association info of the valid node, so we do not use map clear*/
	for (VisTrackDetailMap::iterator iterVision = pFusIntInfo->visIntDetail.begin(); iterVision != pFusIntInfo->visIntDetail.end(); ++iterVision)
	{
		iterVision->second.obj_ValidFlag = FUSION_OBJECT_INVALID;
	}

	if (1 == pFusIntInfo->radarErrorFlag)
	{
		if (pcovrad->radarState.reservedField[0] == 0)
		{
			radarRecoverQue.push_back(1);

			uint8 recoverSum = accumulate(radarRecoverQue.begin(), radarRecoverQue.end(), 0);
			// radar blk recover logic
			if (DTC_RADARLOSRECOVER < recoverSum)
			{
				radarBlkCnt = 0;
				pFusIntInfo->radarErrorFlag = 0;
				if (!radarRecoverQue.empty())
				{
					radarRecoverQue.clear();
				}
			//	PRINT_INFO("FUSION_DTC", "radar timeout recover");
			}
		}
		else
		{
			radarRecoverQue.push_back(0);
		}

		if (22 < radarRecoverQue.size())
		{
			radarRecoverQue.pop_front();
		}
	}
	else
	{
		/*update radar info only if the radar input info is valid*/
		if (pcovrad->radarState.reservedField[0] == 0)
		{
			radarBlkCnt = 0;
			/*radar timestamp compensation,unit [us]*/
			float32 radarLatency = pcovrad->radarState.latency * 1000 + RADAR_CANTRANS_AND_EXTRACT_LATENCY;
			pFusIntInfo->radarTimestamp = timestampCompensation(pcovrad->timestamp, radarLatency);
			pFusIntInfo->radarTimestamp = 45 * 1000;

			EgoParam RadarEgo;
			RadarEgo.EgoYawRateVal = pHostMotion->yawRate;
			RadarEgo.EgoSpeedVal = pHostMotion->speed;
			/* by Wugsz
			for (int yT = 0; yT < pFusIntInfo->hostYawTimeQue.size()-1; ++yT) // last item had been calculated.
			{
				float32 dltTime = sint64(pFusIntInfo->hostYawTimeQue[yT].first - pFusIntInfo->radarTimestamp) / FUSION_US_TO_S;
				if (fabs(dltTime) < fabs(minDltTime))
				{
					minDltTime = dltTime;
					RadarEgo.EgoYawRateVal = pFusIntInfo->hostYawTimeQue[yT].second;
				}
			}
			*/

			/*set all tracked radar to invalid, we want to keep the association info of the valid node, so we do not use map clear*/
			for (RadarTrackDetailMap::iterator iterRadarTrackDetail = pFusIntInfo->radarIntDetail.begin(); iterRadarTrackDetail != pFusIntInfo->radarIntDetail.end(); ++iterRadarTrackDetail)
			{
				iterRadarTrackDetail->second.objValidFlag = FUSION_OBJECT_INVALID;
			}
			
			//modified by meepo
			/*handle radar input data, write the result into internal buffer*/
			for (uint8_t iCnt = 0; iCnt < UTILS_RADAR_MAX_OBJ_NUM; ++iCnt)
			{
				const RadarObj* pRadarObj = &pcovrad->radarObj[iCnt];

				if (iCnt < UTILS_RADAR_MAX_OBJ_NUM)
				{
					if (idValid[iCnt])
						continue;

					for (uint8_t jCnt = iCnt + 1; jCnt < UTILS_RADAR_MAX_OBJ_NUM; jCnt++)
					{
						const RadarObj* pSndRadarObj = &pcovrad->radarObj[jCnt];
						if (pRadarObj->objID == pSndRadarObj->objID)
						{
							idValid[iCnt] = radarDelSameId[iCnt][1] > radarDelSameId[jCnt][1] ? 0 : 1;
							idValid[jCnt] = idValid[iCnt] ^ 1;

							break;
						}
					}
					if (idValid[iCnt])
						continue;

					//modified by meepo
					if (radarDelSameId[iCnt][0] == pRadarObj->objID)  
					{
						radarDelSameId[iCnt][1] = radarDelSameId[iCnt][1] > 254 ? 255 : (++radarDelSameId[iCnt][1]);
					}
					else
					{
						radarDelSameId[iCnt][0] = pRadarObj->objID;
						radarDelSameId[iCnt][1] = 1;
					}
				}
				
				const RadarFRSState* pRadarFRSState = &pcovrad->radarState;
				if ((FUSION_OBJECT_VAILID == pRadarObj->objValidFlag)
					&& (FUSION_OBJECT_INVALID != validity[iCnt])
					&& (30.0F < pRadarObj->objExstProb)
					&& (3.0F < fabs(pRadarObj->objXPos))) // filter out too close radar objects
				{
					/*if already has this object id in vision map, only update it, else insert a new node.*/
					/*std::pair<RadarTrackDetailMap::iterator, bool> iterResult = pFusIntInfo->radarIntDetail.insert(make_pair(pRadarObj->objID, RadarTrackDetail()));*/

					RadarTrackDetailMap::iterator iterRadar = pFusIntInfo->radarIntDetail.find(pRadarObj->objID);
					if ((iterRadar == pFusIntInfo->radarIntDetail.end()) && (0 == pRadarObj->objMeasFlag)) // if not has and measured
					{
						std::pair<RadarTrackDetailMap::iterator, bool> iterResult = pFusIntInfo->radarIntDetail.insert(make_pair(pRadarObj->objID, RadarTrackDetail()));
						iterRadar = iterResult.first;
					}
					else if (iterRadar == pFusIntInfo->radarIntDetail.end()) // if not has and coasted
					{
						continue;
					}
					else // if already has
					{
						if (0 == pRadarObj->objUpdateFlag)
						{
							Del_RadarTrack(iterRadar, *pFusIntInfo);
							std::pair<RadarTrackDetailMap::iterator, bool> iterResult = pFusIntInfo->radarIntDetail.insert(make_pair(pRadarObj->objID, RadarTrackDetail()));
							iterRadar = iterResult.first;
						}
					}

					RadarTrackDetail& refRadarTrackDetail = iterRadar->second;
					/*update radar detail node*/
					refRadarTrackDetail.objID = pRadarObj->objID;
					refRadarTrackDetail.radarIndex = iCnt / UTILS_RADAR_MAX_OBJ_NUM;
					//refRadarTrackDetail.objType = pRadarObj->objType;
					refRadarTrackDetail.objType = RADARTYPE_UNKNOWN;
					refRadarTrackDetail.objExstProb = pRadarObj->objExstProb;
					refRadarTrackDetail.objMeasFlag = pRadarObj->objMeasFlag;
					refRadarTrackDetail.objValidFlag = pRadarObj->objValidFlag;
					refRadarTrackDetail.objObstacleProb = pRadarObj->objObstacleProb;
					if (2 == validity[iCnt])
					{
						refRadarTrackDetail.objObstacleProb = 30.0F;
					}
					else
					{
						refRadarTrackDetail.objObstacleProb = pRadarObj->objObstacleProb;
					}
					refRadarTrackDetail.objMotionPattern = pRadarObj->objMotionPattern;

				    inlineconvertRadarCoordinateToVehicle(pRadarObj, &refRadarTrackDetail);
					radarRelToAbsolute(pRadarObj, &refRadarTrackDetail, &RadarEgo);
					/*used for cal TTC of radar object*/
					refRadarTrackDetail.objXVelRel = pRadarObj->objXVelRel;
					refRadarTrackDetail.objYVelRel = pRadarObj->objYVelRel;
				}
			}

			/*delete all invalid Radar detail*/
			for (RadarTrackDetailMap::iterator iterRadarTrackDetail = pFusIntInfo->radarIntDetail.begin(); iterRadarTrackDetail != pFusIntInfo->radarIntDetail.end();)
			{
				RadarTrackDetail& refRadarTrackDetail = iterRadarTrackDetail->second;
				float32 vx = refRadarTrackDetail.objXVelAbs;
				float32 vy = refRadarTrackDetail.objYVelAbs;
				float32 velocity = sqrt(vx * vx + vy * vy);
				if (velocity < 1.0F && refRadarTrackDetail.objID>255) {
					refRadarTrackDetail.objValidFlag = FUSION_OBJECT_INVALID;
				}
				if (FUSION_OBJECT_VAILID != refRadarTrackDetail.objValidFlag)
				{
					iterRadarTrackDetail = Del_RadarTrack(iterRadarTrackDetail, *pFusIntInfo);
				}
				else
				{
					//if radar is not in a cluster, add it to a new cluster
					if (!refRadarTrackDetail.isInCluster)
					{
						putRadarInNewCluster(refRadarTrackDetail, pFusIntInfo);
					}
					++iterRadarTrackDetail;
				}
			}
		}
		else
		{
			++radarBlkCnt;
			if (DTC_RADARLOSTHRES < radarBlkCnt)
			{
			//	PRINT_INFO("FUSION_DTC", "radar timeout occur");
				radarBlkCnt = 0;
				pFusIntInfo->radarErrorFlag = 1;

				// delete all internal radar objects
				for (RadarTrackDetailMap::iterator iterRadarTrackDetail = pFusIntInfo->radarIntDetail.begin(); iterRadarTrackDetail != pFusIntInfo->radarIntDetail.end();)
				{
					iterRadarTrackDetail = Del_RadarTrack(iterRadarTrackDetail, *pFusIntInfo);
				}
			}
		}
	}

// Lucien move to alignment 
	for (RadarClusterMap::iterator iterClusterDetail = pFusIntInfo->clusterDetail.begin(); iterClusterDetail != pFusIntInfo->clusterDetail.end();)
	{
		RadarCluster& refClusterDetail = iterClusterDetail->second;
		if (refClusterDetail.numOfRadar <= 0)
		{
			iterClusterDetail = Del_Cluster(iterClusterDetail, *pFusIntInfo);
		}
		else
		{
			++iterClusterDetail;
		}
	}


	/*vision timestamp compensation*/
	pFusIntInfo->visionTiemstamp = timestampCompensation(pVisInfo->objTimestamp, VISION_FRAME_LANTENCY);

	//	/*handle vision input data, write the result into internal buffer.*/
	for (uint8 iCnt = 0; iCnt < pVisInfo->objCount; ++iCnt)
	{
		const VisionObj* pVisionObj = &pVisInfo->objList[iCnt];

		/*only handle the valid vision object*/
		//if ((VISION_OBJSTATUS_INITIALIZED != pVisionObj->obj_status)
		if((VISION_OBJSTATUS_MEASURED== pVisionObj->obj_status)			//by Wugsz, find problem of predict object	
			&& (30.0F > pVisionObj->obj_coordinate.longitudinalVariance) && (pVisionObj->obj_coordinate.longitudinal > 2))
		{
			/*if already has this object id in vision map, only update it, else insert a new node.*/
			std::pair<VisTrackDetailMap::iterator, bool> iterResult = pFusIntInfo->visIntDetail.insert(make_pair(pVisionObj->obj_ID, VisTrackDetail()));
			VisTrackDetail& refVisTrackDetail = iterResult.first->second;

			/*update vision detail node*/
			refVisTrackDetail.obj_ID = pVisionObj->obj_ID;
			refVisTrackDetail.obj_status = pVisionObj->obj_status;
			refVisTrackDetail.obj_ValidFlag = FUSION_OBJECT_VAILID;
			convertVisionCoordinateToVehicle(pVisionObj, &refVisTrackDetail);
			refVisTrackDetail.obj_type = pVisionObj->obj_type;
			refVisTrackDetail.obj_angleOfCenter = pVisionObj->obj_angleOfCenter;
			refVisTrackDetail.obj_boundary = pVisionObj->obj_boundary;
			refVisTrackDetail.obj_typeConfi = pVisionObj->obj_typeConfi;
			refVisTrackDetail.obj_velocity.Vx = pVisionObj->obj_velocity.Vx;
			refVisTrackDetail.obj_velocity.Vy = pVisionObj->obj_velocity.Vy;
			refVisTrackDetail.obj_velocity.VxVariance = pVisionObj->obj_velocity.VxVariance;
			refVisTrackDetail.obj_velocity.VyVariance = pVisionObj->obj_velocity.VyVariance > 0.0F ? pVisionObj->obj_velocity.VyVariance : 0.0F;
			//refVisTrackDetail.obj_velocityRel.Vx = refVisTrackDetail.obj_velocity.Vx - pHostMotion->speed;
			//refVisTrackDetail.obj_velocityRel.Vy = 0;
			//refVisTrackDetail.obj_velocityRel.VxVariance = refVisTrackDetail.obj_velocity.VxVariance;
			//refVisTrackDetail.obj_velocityRel.VyVariance = refVisTrackDetail.obj_velocity.VyVariance;
			refVisTrackDetail.obj_acceleration.Ax = pVisionObj->obj_acceleration.Ax;
			refVisTrackDetail.obj_acceleration.Ay = pVisionObj->obj_acceleration.Ay;
			refVisTrackDetail.obj_acceleration.AxVariance = pVisionObj->obj_acceleration.AxVariance;
			refVisTrackDetail.obj_acceleration.AyVariance = pVisionObj->obj_acceleration.AyVariance > 0.0F ? pVisionObj->obj_acceleration.AyVariance : 0.0F;
			refVisTrackDetail.obj_TTC = pVisionObj->obj_TTC;

			/* by Wugsz, remove TTC logic */
			//compareTTC(refVisTrackDetail, &pFusIntInfo->egoSpeedAndYawrate);
			// memcpy(&refVisTrackDetail.obj_velocity, &pVisionObj->obj_velocity, sizeof(VisionObjVelocity));

			/* by Wugsz, because eyeq4 lateral position is reversed, fix it */
			refVisTrackDetail.obj_velocity.Vy = -refVisTrackDetail.obj_velocity.Vy;
			refVisTrackDetail.obj_coordinate.lateral = -refVisTrackDetail.obj_coordinate.lateral;
			refVisTrackDetail.obj_acceleration.Ay = -refVisTrackDetail.obj_acceleration.Ay;
			//refVisTrackDetail.obj_angleOfCenter.centerAngle = -refVisTrackDetail.obj_angleOfCenter.centerAngle;

		}
	}


    /*delete all invalid vision detail node*/
	// Lucien move to alignment
   for (VisTrackDetailMap::iterator iterVision = pFusIntInfo->visIntDetail.begin(); iterVision != pFusIntInfo->visIntDetail.end();)
    {
        if (FUSION_OBJECT_VAILID != iterVision->second.obj_ValidFlag)
        {
            uint32 id = iterVision->first;
            iterVision = Del_VisionTrack(iterVision, *pFusIntInfo);
        }
        else
        {
            ++iterVision;
        }
    }
    return (sint8)pFusIntInfo->radarIntDetail.size();
}