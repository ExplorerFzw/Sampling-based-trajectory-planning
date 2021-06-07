/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : fusion_process.h
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

#include "fusion_process.h"
#include "fusion_runnables.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/
PARAM_Unit* gpDataMem = NULL;
static const uint32 paramSize = sizeof(FUSION_AlgParameter) / sizeof(float32);

VehicleData * pSyncedHostMotion = NULL;
CanRadarObjList* pSyncedRadarInfo = NULL;
CanRadarObjList* pSyncedFLRadarInfo = NULL;
CanRadarObjList* pSyncedFRRadarInfo = NULL;
CanRadarObjList* pSyncedRLRadarInfo = NULL;
CanRadarObjList* pSyncedRRRadarInfo = NULL;

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        FusionAlg_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionAlg_Init_V()
{
	gpDataMem = new PARAM_Unit[paramSize];
	PARAM_initFusionParameter(gpDataMem, paramSize);

	uint32 idx = 0;
	FUSION_AlgParameter* pAlgParameters = &gFusionAlgParameter;
	FusionLink_getf32ParametersByKey(FUSIONGLOB_OBSROBTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(FUSIONGLOB_VISCONFITHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_BZCOAST, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_BZAREA, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_YRTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTXSMALLTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTXMEDTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTXBIGTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTYSMALLTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTYMEDTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTYBIGTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTSPEEDSMALLTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTSPEEDMEDTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTSPEEDBIGTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTHEADINGSMALLTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTHEADINGMEDTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTHEADINGBIGTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTACCSMALLTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTACCMEDTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_DLTACCBIGTHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(CONFIDENCE_VISONLYPEDFCW, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_NIGHTCOEFF, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_SCORETHRES, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_VISSYSXERR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KPRESCORE, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KOBSPROB, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KCLASSIFICATION, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_XLOGTHRESPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSXPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSYPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSSPEEDPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSTTCPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSANGLEPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLXPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLYPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLSPEEDPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLTTCPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_XSLOGTHRESCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_XMLOGTHRESCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_XBLOGTHRESCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSXCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSYCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSSPEEDCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSTTCCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KSANGLECAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KMXCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KMYCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KMSPEEDCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KMTTCCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KMANGLECAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KBXCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KBYCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KBSPEEDCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KBTTCCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KBANGLECAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLXCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLYCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLSPEEDCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLTTCCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(ASSOCIATION_KLANGLECAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_VALSPEEDHEAD, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FASTMOVSPEED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_TYPEBYVISCNTCAR, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_TYPEBYVISCNTPED, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_DXLIMIT, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_DYLIMIT, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_DVXLIMIT, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_DVYLIMIT, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK11, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK13, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK22, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK23, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK31, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK33, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK42, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK43, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK51, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK53, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK62, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_FK63, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK11, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK13, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK22, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK23, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK31, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK33, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK42, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK43, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK51, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK53, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK62, pAlgParameters, idx);
	FusionLink_getf32ParametersByKey(UPDATE_RK63, pAlgParameters, idx);

	// Reset the number of active objects
	gFusionIntInfo.numOfActiveObj = 0;
	// Reset the number of unassigned output ID
	gFusionIntInfo.numOfUnassignedOutputID = FUSION_OBJ_OUT_MAX - CORNER_RADAR_MAX_OUT_NUM;

	memset(&gFusionIntInfo.primaryObjTra, 0, sizeof(PrimaryObjTja));

	gFusionLaneIntInfo.hostposition = 0;
	gFusionLaneIntInfo.LAC0 = 0;
	gFusionLaneIntInfo.LAC1 = 0;
	gFusionLaneIntInfo.LAC2 = 0;
	gFusionLaneIntInfo.LAC3 = 0;
	gFusionLaneIntInfo.LAQ = 0;
	gFusionLaneIntInfo.LAViewRange = 0;
	gFusionLaneIntInfo.LC0 = 0;
	gFusionLaneIntInfo.LC1 = 0;
	gFusionLaneIntInfo.LC2 = 0;
	gFusionLaneIntInfo.LC3 = 0;
	gFusionLaneIntInfo.LQ = 0;
	gFusionLaneIntInfo.LViewRange = 0;
	gFusionLaneIntInfo.RAC0 = 0;
	gFusionLaneIntInfo.RAC1 = 0;
	gFusionLaneIntInfo.RAC2 = 0;
	gFusionLaneIntInfo.RAC3= 0;
	gFusionLaneIntInfo.RAQ = 0;
	gFusionLaneIntInfo.RAViewRange = 0;
	gFusionLaneIntInfo.RC0 = 0;
	gFusionLaneIntInfo.RC1 = 0;
	gFusionLaneIntInfo.RC2 = 0;
	gFusionLaneIntInfo.RC3 = 0;
	gFusionLaneIntInfo.RQ = 0;
	gFusionLaneIntInfo.RViewRange = 0;

	// Put the ID in reverse order, and then pop up/push back from the tail (i.e., stack)

	for (uint8 icnt = 0; icnt < (FUSION_OBJ_OUT_MAX - CORNER_RADAR_MAX_OUT_NUM); ++icnt)
	{
		gFusionIntInfo.unassignedOutputID[icnt] = (FUSION_OBJ_OUT_MAX - CORNER_RADAR_MAX_OUT_NUM) - icnt;
	}
	for (uint16 icnt = 0; icnt < UTILS_RADAR_MAX_OBJID_NUM; ++icnt)
	{
		gFusionIntInfo.availClusterID.push_back(icnt + 1);
	}

	ZONE_INFO("fusion_obsrobthres: %f\r\n", pAlgParameters->FUSIONGLOB_OBSROBTHRES);
	ZONE_INFO("association_nightcoeff: %f\r\n", pAlgParameters->ASSOCIATION_NIGHTCOEFF);

	SensorAdapter_Init_V();
	Predict_Init_V();
	Association_Init_V();
	Update_Init_V();
	OutPutAdapter_Init_V();

	firstRun			= true;
	lastFrameNum		= 0;
	currentFrameNum		= 0;
	cycleMillisecond	= 0;
	frameNum			= 1;

	pSyncedRadarInfo = new CanRadarObjList();
	pSyncedFLRadarInfo = new CanRadarObjList();
	pSyncedFRRadarInfo = new CanRadarObjList();
	pSyncedRRRadarInfo = new CanRadarObjList();
	pSyncedRLRadarInfo = new CanRadarObjList();

	memset(&preFusionOutputList, 0, sizeof(FusionOutputList));
	memset(pSyncedRadarInfo, 0, sizeof(CanRadarObjList));
	memset(pSyncedFLRadarInfo, 0, sizeof(CanRadarObjList));
	memset(pSyncedFRRadarInfo, 0, sizeof(CanRadarObjList));
	memset(pSyncedRRRadarInfo, 0, sizeof(CanRadarObjList));
	memset(pSyncedRLRadarInfo, 0, sizeof(CanRadarObjList));

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        FusionAlg_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionAlg_DeInit_V(void)
{
	SensorAdapter_DeInit_V();
	Predict_DeInit_V();
	Association_DeInit_V();
	Update_DeInit_V();
	OutPutAdapter_DeInit_V();
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        FusionAlg_Run_V
* @brief
* @param[in]   pHostMotion: the vehicle data (yawRate and speed) of the current time
*			   pRadarInfo: the radar data
*			   pVisObj: the output of OD
*			   pVisLane: the output of LD
* @param[out]  pFusOutInfo: the output of fusion
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t FusionAlg_Run_V(const VehicleData      *pHostMotion,
	const CanRadarObjList  *pRadarInfo,
	const CanRadarObjList  *pFLRadarInfo,
	const CanRadarObjList  *pFRRadarInfo,
	const CanRadarObjList  *pRLRadarInfo,
	const CanRadarObjList  *pRRRadarInfo,
	const VisionObjList    *pVisObj,
	const EyeVisionLaneMark   *pVisLane,
	const VisionLaneRoadedge *pVisRoadEdge,
	const uint16_t errorFlag,
	FusionOutputList       *pFusionoutlist)
{
	int32_t				status				= ZONE_RETURN_OK;
	VehicleData*		pSyncedHostMotion;
	gErrorDTC = errorFlag;

	if (NULL == pHostMotion || NULL == pRadarInfo || NULL == pVisObj || NULL == pFusionoutlist)

	{
		ZONE_ERROR("Fusion", "Input Info Parameters Invalid!\r\n");
		return ZONE_RETURN_ERR;
	}

	ZONE_INFO("FUSION_VER", "normal release: %d", 101);


	/* by Wugsz, peform vision based fusion cache all radar and vehicle signal, only perform fusion when vision updated */
	static bool firstRun = true;
	static uint8_t cycleMillisecond = 0;
	uint16_t frameGap = 0;
	uint32 timeGap = 27778;
	static uint32 globalTimestamp = 0;		//us


	/* cache vehicle data every 10ms */
	cycleMillisecond += FUSION_SCHEDULE_TIME;
	if (cycleMillisecond >= VEHICLE_DATA_SAMPLE_TIME)
	{
		CacheVehicleData(pHostMotion);
		cycleMillisecond -= VEHICLE_DATA_SAMPLE_TIME;
	}

	/* cache radar data when updated */

	CacheRadarData(pRadarInfo, pFLRadarInfo, pFRRadarInfo, pRLRadarInfo, pRRRadarInfo);

	currentFrameNum = pVisObj->objFrameNum;

	if (firstRun)
	{
		if (currentFrameNum != 0)
		{
		}
		else
		{
			/* vision is still not running  */
			return ZONE_NOT_INITIALIZED;
		}
	}

	if (firstRun)
	{
		firstRun = false;
		frameGap = 2;
	}
	else
	{
		if (currentFrameNum == lastFrameNum)
		{
			memcpy(pFusionoutlist, &preFusionOutputList, sizeof(FusionOutputList));
			return ZONE_RETURN_OK;
		}

		if (currentFrameNum > lastFrameNum)
		{
			frameGap = currentFrameNum - lastFrameNum;
		}
		else
		{
			frameGap = (uint16_t)currentFrameNum + 256 - (uint16_t)lastFrameNum;
		}
	}

	if (frameGap > 2)
		frameGap = 2;

	timeGap *= frameGap;

	memset(pFusionoutlist, 0, sizeof(FusionOutputList));
	
	status = GetSyncedSensorData(&pSyncedRadarInfo,&pSyncedFLRadarInfo,
		&pSyncedFRRadarInfo,&pSyncedRLRadarInfo,&pSyncedRRRadarInfo,&pSyncedHostMotion, frameGap);
	
	/* by Wugsz override time stamp because there is no unified timestamp in the system */
	globalTimestamp += timeGap;
	pSyncedRadarInfo->timestamp = globalTimestamp;
	//VisionObjList VisObj;
	//memcpy(&VisObj, pVisObj, sizeof(VisionObjList));
	//VisObj.objTimestamp = globalTimestamp;
	/*VisObj.objTimestamp = globalTimestamp;*/

	if (gErrorDTC == 0)
	{
		status = SensorAdapter_Run_V(pSyncedHostMotion, pSyncedRadarInfo, pSyncedFLRadarInfo,
			pSyncedFRRadarInfo, pSyncedRLRadarInfo, pSyncedRRRadarInfo, pVisObj, pFusionoutlist);

		status = Predict_Run_V(pSyncedRadarInfo, pVisObj, timeGap);

		status = Association_Run_V();

		status = Update_Run_V();

		status = OutPutAdapter_Run_V(pSyncedHostMotion, pVisLane, pVisRoadEdge, pFusionoutlist);
	}
	else if (gErrorDTC == 1000)
	{
		status = SensorAdapter_Run_V(pSyncedHostMotion, pSyncedRadarInfo, pSyncedFLRadarInfo,
			pSyncedFRRadarInfo, pSyncedRLRadarInfo, pSyncedRRRadarInfo, pVisObj,pFusionoutlist);

		status = OutPutAdapter_Run_V(pSyncedHostMotion, pVisLane, pVisRoadEdge, pFusionoutlist);
	}
	else if (gErrorDTC == 2000)
	{
		status = SensorAdapter_Run_V(pSyncedHostMotion, pSyncedRadarInfo, pSyncedFLRadarInfo,
			pSyncedFRRadarInfo, pSyncedRLRadarInfo, pSyncedRRRadarInfo, pVisObj,pFusionoutlist);

		status = Predict_Run_V(pSyncedRadarInfo, pVisObj, timeGap);

		status = OutPutAdapter_Run_V(pSyncedHostMotion, pVisLane, pVisRoadEdge, pFusionoutlist);
	}
	else if (gErrorDTC == 3000)
	{
		status = SensorAdapter_Run_V(pSyncedHostMotion, pSyncedRadarInfo, pSyncedFLRadarInfo,
			pSyncedFRRadarInfo, pSyncedRLRadarInfo, pSyncedRRRadarInfo, pVisObj, pFusionoutlist);

		status = Predict_Run_V(pSyncedRadarInfo, pVisObj, timeGap);

		status = Association_Run_V();

		status = OutPutAdapter_Run_V(pSyncedHostMotion, pVisLane, pVisRoadEdge, pFusionoutlist);
	}
	else if (gErrorDTC == 4000)
	{
		status = SensorAdapter_Run_V(pSyncedHostMotion, pSyncedRadarInfo, pSyncedFLRadarInfo,
			pSyncedFRRadarInfo, pSyncedRLRadarInfo, pSyncedRRRadarInfo, pVisObj, pFusionoutlist);
	}
	else if (gErrorDTC == 5000)
	{
		memset(pSyncedFLRadarInfo, 0, sizeof(CanRadarObjList));
		memset(pSyncedFRRadarInfo, 0, sizeof(CanRadarObjList));
		memset(pSyncedRLRadarInfo, 0, sizeof(CanRadarObjList));
		memset(pSyncedRRRadarInfo, 0, sizeof(CanRadarObjList));
		status = SensorAdapter_Run_V(pSyncedHostMotion, pSyncedRadarInfo, pSyncedFLRadarInfo,
			pSyncedFRRadarInfo, pSyncedRLRadarInfo, pSyncedRRRadarInfo, pVisObj, pFusionoutlist);

		status = Predict_Run_V(pSyncedRadarInfo, pVisObj, timeGap);

		status = Association_Run_V();

		status = Update_Run_V();

		status = OutPutAdapter_Run_V(pSyncedHostMotion, pVisLane, pVisRoadEdge, pFusionoutlist);
	}

	pFusionoutlist->objOutInfo.frameNum			= frameNum;
	pFusionoutlist->laneOutInfo.frameNum		= frameNum;
	pFusionoutlist->roadEdgeOutInfo.frameNum	= frameNum;
	pFusionoutlist->frameNum					= frameNum;

	memcpy(&preFusionOutputList, pFusionoutlist, sizeof(FusionOutputList));

	/* update last frame number */
	lastFrameNum = currentFrameNum;
	
	if (frameNum > 10000)
	{
		frameNum = 1;
	}
	else {
		frameNum += 1;
	}

	ZONE_Assert(ZONE_RETURN_OK == status);

	return ZONE_RETURN_OK;
}
