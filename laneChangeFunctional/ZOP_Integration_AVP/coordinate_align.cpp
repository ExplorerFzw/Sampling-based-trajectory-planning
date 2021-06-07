/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : coordinate_align.cpp
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

#include "coordinate_align_pub.h"
#include "coordinate_align_pri.h"
#include "logger.h"

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        SensorAdapter_CoordinateAlign_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_CoordinateAlign_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        SensorAdapter_CoordinateAlign_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_CoordinateAlign_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        SensorAdapter_CoordinateAlign_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

sint8 convertRadarCoordinateToVehicle(const VehicleData* pHostMotion, const CanRadarObjList* pRadarInfo, CanRadarObjList* pcovradobjlist)
{
    // position of target object, center of vehicle rear axle shaft is reference point.

	// FusionSystemInternalInfo* pFusIntInfo = &gFusionIntInfo;

	//for (uint32 iCnt = 0; iCnt < UTILS_RADAR_MAX_OBJ_NUM; ++iCnt)
	//{
	//	 const RadarObj* pRadarObj = &pRadarInfo->radarObj[iCnt];

	//	 pcovradobjlist->radarObj[iCnt].objXPos = pRadarObj->objXPos;

	//	 pcovradobjlist->radarObj[iCnt].objYPos = pRadarObj->objYPos;

	//	/*objXPos_Stdev,objYPos_Stdev,objXVelRel_Stdev,objXAccRel,objYVelRel,objXVelRel,objXPos,objYPos*/
	//}
	return 0;
}

int32_t SensorAdapter_CoordinateAlign_Run_V(const VehicleData*	pHostMotion, const CanRadarObjList*	pRadarInfo, CanRadarObjList* pcovradobjlist,const VisionObjList* pVisObj)
{
	//FusionSystemInternalInfo* pFusIntInfo = &gFusionIntInfo;

	//convertRadarCoordinateToVehicle(pHostMotion, pRadarInfo, pcovradobjlist);

	// modified by meepo
	//pcovradobjlist->timestampK1 = pRadarInfo->timestampK1;
	pcovradobjlist->timestamp = pRadarInfo->timestamp;
	pcovradobjlist->frameNum = pRadarInfo->frameNum;
	pcovradobjlist->count = pRadarInfo->count;
	pcovradobjlist->radarState = pRadarInfo->radarState;
	pcovradobjlist->errType = pRadarInfo->errType;
	pcovradobjlist->reserved[0] = pRadarInfo->reserved[0];
	pcovradobjlist->reserved[1] = pRadarInfo->reserved[1];


	for (uint32 iCnt = 0; iCnt < UTILS_RADAR_MAX_OBJ_NUM; ++iCnt)
	{
		const RadarObj* pRadarObj = &pRadarInfo->radarObj[iCnt];

		pcovradobjlist->radarObj[iCnt].objXPos = pRadarObj->objXPos;
		pcovradobjlist->radarObj[iCnt].objYPos = pRadarObj->objYPos;
		pcovradobjlist->radarObj[iCnt].objObstacleProb = pRadarObj->objObstacleProb;
		pcovradobjlist->radarObj[iCnt].objXPos_Stdev = pRadarObj->objXPos_Stdev;
		pcovradobjlist->radarObj[iCnt].objYPos_Stdev = pRadarObj->objYPos_Stdev;
		pcovradobjlist->radarObj[iCnt].objXVelRel_Stdev = pRadarObj->objXVelRel_Stdev;
		pcovradobjlist->radarObj[iCnt].objXAccRel = pRadarObj->objXAccRel;
		pcovradobjlist->radarObj[iCnt].objExstProb	   = pRadarObj->objExstProb;
		pcovradobjlist->radarObj[iCnt].objYVelRel = pRadarObj->objYVelRel;
		pcovradobjlist->radarObj[iCnt].objXVelRel = pRadarObj->objXVelRel;
		pcovradobjlist->radarObj[iCnt].objXPos = pRadarObj->objXPos;
		pcovradobjlist->radarObj[iCnt].objYPos = pRadarObj->objYPos;
		pcovradobjlist->radarObj[iCnt].objID = pRadarObj->objID;
		pcovradobjlist->radarObj[iCnt].objUpdateFlag = pRadarObj->objUpdateFlag;
		pcovradobjlist->radarObj[iCnt].objValidFlag = pRadarObj->objValidFlag;
		pcovradobjlist->radarObj[iCnt].objMotionPattern = pRadarObj->objMotionPattern;
		pcovradobjlist->radarObj[iCnt].objType = pRadarObj->objType;
		pcovradobjlist->radarObj[iCnt].objMeasFlag = pRadarObj->objMeasFlag;
		pcovradobjlist->radarObj[iCnt].reserved[0] = pRadarObj->reserved[0];
		pcovradobjlist->radarObj[iCnt].reserved[1] = pRadarObj->reserved[1];
		/*objXPos_Stdev,objYPos_Stdev,objXVelRel_Stdev,objXAccRel,objYVelRel,objXVelRel,objXPos,objYPos*/
	}
	 return ZONE_RETURN_OK;
}