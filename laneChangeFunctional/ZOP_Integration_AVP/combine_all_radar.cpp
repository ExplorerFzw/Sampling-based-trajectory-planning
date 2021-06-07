/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : combine_all_radar.cpp
* Description   :
* Version       : v1.0
* Create Time   : 2020/12/07
* Author   		: yy
* Modify history:
*******************************************************************************
* Modify Time   Modify person  Modification
* ------------------------------------------------------------------------------
*
*******************************************************************************/

/************************** Include *******************************************/

#include "combine_all_radar_pub.h"
#include "combine_all_radar_pri.h"
#include "logger.h"
#include <cmath>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <vector>
#include <deque>
using namespace std;

/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        SensorAdapter_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_CombineAllRadar_Init_V(void)
{
	memset(&allCornerRadObjList, 0, sizeof(CanCornerRadarObjList));

	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        SensorAdapter_CombineAllRadar_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

void SensorAdapter_CombineAllRadar_Run_V(const VehicleData* pHostMotion,const CanRadarObjList* pFRadarInfo, const CanRadarObjList* pFLRadarInfo, const CanRadarObjList* pFRRadarInfo,
	const CanRadarObjList* pRLRadarInfo, const CanRadarObjList* pRRRadarInfo, CanRadarObjList* allRadarobjlist)
{
	//combine radar into one list and aligen ID
	CombineRadarIntoOneList(pHostMotion,pFRadarInfo, pFLRadarInfo, pFRRadarInfo, pRLRadarInfo, pRRRadarInfo,  allRadarobjlist);

	SelectOutputCornerRadar();
}



bool xPos(pair<int, RadarObj*> a, pair<int, RadarObj*> b)
{
	return a.second->objXPos < b.second->objXPos;
}


bool xRcornerPos(pair<int, CornerRadarObj*> a, pair<int, CornerRadarObj*> b)
{
	return a.second->objXPos > b.second->objXPos;
}

bool xFcornerPos(pair<int, CornerRadarObj*> a, pair<int, CornerRadarObj*> b)
{
	return a.second->objXPos > b.second->objXPos;
}


/*******************************************************************************
* @name        SelectOutputCornerRadar
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/
void SelectOutputCornerRadar()
{
	FusionSystemInternalInfo* pFusIntInfo = &gFusionIntInfo;

	std::vector<std::pair<float32, uint32> > radarDataPriority;
	radarDataPriority.reserve(UTILS_5_RADAR_MAX_OBJ_NUM);

	for (uint32 j = 0; j < UTILS_5_RADAR_MAX_OBJ_NUM; j++)
	{ 

		/*printf("0-objID : %d, 0-objalivecount: %d", allCornerRadObjList.radarObj[j].objID, allCornerRadObjList.radarObj[j].alivecout);
		getchar();*/
		//if (allCornerRadObjList.radarObj[j].objID != 0)
		//{
		//	allCornerRadObjList.radarObj[j].alivecout++;

		//	if (allCornerRadObjList.radarObj[j].alivecout >255)
		//	{
		//		allCornerRadObjList.radarObj[j].alivecout = 255;
		//	}

		//	printf("1-objID : %d, 1-objalivecount: %d", allCornerRadObjList.radarObj[j].objID, allCornerRadObjList.radarObj[j].alivecout);
		//	getchar();
		//}
		//else
		//{
		//	allCornerRadObjList.radarObj[j].alivecout = 0;
		//}
		if((allCornerRadObjList.radarObj[j].objID != 0))
		{
	
			if (j >= UTILS_RADAR_MAX_OBJ_NUM && j < UTILS_RADAR_MAX_OBJ_NUM * 3)
			{
				radarDataPriority.push_back(std::make_pair(fabs(allCornerRadObjList.radarObj[j].objXPos)*0.1, j));
			}
			else
			{
				radarDataPriority.push_back(std::make_pair(fabs(allCornerRadObjList.radarObj[j].objXPos), j));
			}
		}

	}
	sort(radarDataPriority.begin(), radarDataPriority.end());

	const uint32 outPutCnt = radarDataPriority.size() > CORNER_RADAR_MAX_OUT_NUM ? CORNER_RADAR_MAX_OUT_NUM : radarDataPriority.size();
	
	for (uint8_t j = 0; j < outPutCnt; j++)
	{
		//printf("2-objID : %d, objalivecount: %d", allCornerRadObjList.radarObj[radarDataPriority[j].second].objID, allCornerRadObjList.radarObj[radarDataPriority[j].second].alivecout);
		//getchar();
			memcpy(&pFusIntInfo->cornerRadarObj[j], &allCornerRadObjList.radarObj[radarDataPriority[j].second], sizeof(CornerRadarObj));
	
	}

	for (uint8_t j = outPutCnt; j < CORNER_RADAR_MAX_OUT_NUM; j++)
	{
		memset(&pFusIntInfo->cornerRadarObj[j], 0, sizeof(CornerRadarObj));
	}
	std::vector<std::pair<float32, uint32> >().swap(radarDataPriority);

}


/*******************************************************************************
* @name        CombineRadarIntoOneList
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/



void CombineRadarIntoOneList(const VehicleData* pHostMotion, const CanRadarObjList* pFRadarInfo, const CanRadarObjList* pFLRadarInfo, const CanRadarObjList* pFRRadarInfo,
	const CanRadarObjList* pRLRadarInfo, const CanRadarObjList* pRRRadarInfo, CanRadarObjList* allRadarobjlist) {

	// timestamp sync , into onelist , id aligenment
	float32 x, y, vx, vy, cosa, sina, y2, x2, vx2, vy2,vr,hostspd;
	float32 angle;
	float32 Robj = 0;
	float32 RCS = 0;
	float32 objXVelAbs = 0;
	float32 objYVelAbs = 0;
	float32 objVelAbs = 0;
	uint8_t rearLeftIndex = 0;
	uint8_t rearRightIndex = 0;
	uint8_t motionStatus = 0;
	float32 rcsthreshold;

	uint8_t leftlaneQ = gFusionLaneIntInfo.LQ;
	uint8_t rightlaneQ = gFusionLaneIntInfo.RQ;
	uint32_t hostposition = gFusionLaneIntInfo.hostposition;

	hostspd = pHostMotion->speed;

	for (int32_t i = 0; i < RADAR_NUM; i++) {

	/*	vector<pair<int, RadarObj*> > radarDataM;
		radarDataM.reserve(UTILS_RADAR_MAX_OBJ_NUM);

		vector<pair<int, RadarObj*> > radarDataL;
		radarDataL.reserve(UTILS_RADAR_MAX_OBJ_NUM);

		vector<pair<int, RadarObj*> > radarDataR;
		radarDataR.reserve(UTILS_RADAR_MAX_OBJ_NUM);

		vector<pair<int, CornerRadarObj*> > cornerradarDataM;
		cornerradarDataM.reserve(UTILS_RADAR_MAX_OBJ_NUM);

		vector<pair<int, CornerRadarObj*> > cornerradarDataL;
		cornerradarDataL.reserve(UTILS_RADAR_MAX_OBJ_NUM);

		vector<pair<int, CornerRadarObj*> > cornerradarDataR;
		cornerradarDataR.reserve(UTILS_RADAR_MAX_OBJ_NUM);*/

		float32_t yl = 0.0, yr = 0.0;
		uint8_t leftside = 1, righttside = 0, hostlane = 0, adjacentlane = 1;
		int a = 0, b = 0, c = 0;

		switch (i) {
		case FRONT_RADAR:
		//	ObjfilterCal(pFusionoutlist, i, pFRadarInfo, pFLRadarInfo,allRadarobjlist);
			for (int32_t j = 0; j < UTILS_RADAR_MAX_OBJ_NUM; j++) {
				memcpy(&allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j], &pFRadarInfo->radarObj[j], sizeof(RadarObj));
				RadarObj* pRadarObj = &allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j];
				x = pFRadarInfo->radarObj[j].objXPos;
				y = pFRadarInfo->radarObj[j].objYPos;

				if (fabs(y) > CORNER_RADAR_LAT_THRESHOLD)
				{
					allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j].objObstacleProb = 0;
					allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j].objExstProb = 0;
					allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j].objUpdateFlag = 0;
					allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j].objValidFlag = FUSION_OBJECT_INVALID;
				}
			}
			break;
		case FRONT_LEFT_RADAR:
			for (int32_t j = 0; j < UTILS_RADAR_MAX_OBJ_NUM; j++) {
				//memcpy(&allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j], &pFLRadarInfo->radarObj[j], sizeof(RadarObj));
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = pFLRadarInfo->radarObj[j].objXPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = pFLRadarInfo->radarObj[j].objYPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = pFLRadarInfo->radarObj[j].objXVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = pFLRadarInfo->radarObj[j].objYVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pFLRadarInfo->radarObj[j].objID;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS = pFLRadarInfo->radarObj[j].objObstacleProb;

				if (pFLRadarInfo->radarObj[j].objID != 0) {
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pFLRadarInfo->radarObj[j].objID + 40 * i;
				}
				x = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos;
				y = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos;
				vx = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel;
				vy = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel;
				cosa = cos(FLRADAR_ANGEL);
				sina = sin(FLRADAR_ANGEL);

				x2 = x*cosa - y* sina + FLRADAR_XDISPLACE;
				y2 = x*sina + y*cosa + FLRADAR_YDISPLACE;
				vx2 = vx*cosa - vy * sina;
				vy2 = vx * sina + vy * cosa;

				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = vx2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = vy2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = y2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = x2;

				if (x2 == 0.0)
				{
					angle = y2 > 0 ? 1.5708 : -1.5708;
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
					continue;
				}
				else
				{
					angle = atan2f(y2, x2);

					Robj = sqrt(powf(x2, 2) + powf(y2, 2));
					objXVelAbs = vx2 + pHostMotion->speed - pHostMotion->yawRate * Robj * sinf(angle);
					objYVelAbs = vy2 + 0.0 + pHostMotion->yawRate * Robj * cosf(angle);

					if (fabs(objYVelAbs) > 0 || fabs(objXVelAbs) > 0)
					{
						objVelAbs = sqrt(powf(objYVelAbs, 2) + powf(objXVelAbs, 2));
					}
					else
					{
						objVelAbs = 0;
					}
				}
					
				if ((fabs(angle) < 3.1416 * 60 / 180 && x2 > 10.0F) || (x2 > 2 && fabs(y2) < 3.0))
				{
					memset(&allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j], 0, sizeof(CornerRadarObj));
				}

				rcsthreshold = CalrcsThreshold(fabs(x2));

				if (((((y2 > 3) && (hostposition == HOSTPOSITION_L))
					|| ((y2 < -3) && (hostposition == HOSTPOSITION_R)) 
					||( objVelAbs < 3.0 )
					|| (allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS < rcsthreshold))
					&& (objVelAbs < 10.0))
					|| (fabs(y2) > CORNER_RADAR_LAT_THRESHOLD)
				    || (fabs(x2) < COMBINE_EPSILON)
					)
				{
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
				}
			}

			break;
		case REAR_LEFT_RADAR:
			for (int32_t j = 0; j < UTILS_RADAR_MAX_OBJ_NUM; j++) {
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = pRLRadarInfo->radarObj[j].objXPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = pRLRadarInfo->radarObj[j].objYPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = pRLRadarInfo->radarObj[j].objXVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = pRLRadarInfo->radarObj[j].objYVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pRLRadarInfo->radarObj[j].objID;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS = pRLRadarInfo->radarObj[j].objObstacleProb;
			
				if (pRLRadarInfo->radarObj[j].objID != 0) {
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pRLRadarInfo->radarObj[j].objID + 40 * i;
				}
				x = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos;
				y = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos;
				vx = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel;
				vy = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel;
				cosa = cos(RLRADAR_ANGEL);
				sina = sin(RLRADAR_ANGEL);

				x2 = x*cosa - y* sina + RLRADAR_XDISPLACE;
				y2 = x*sina + y*cosa + RLRADAR_YDISPLACE;
				vx2 = vx*cosa - vy * sina;
				vy2 = vx * sina + vy * cosa;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = x2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = y2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = vx2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = vy2;

				if (x2 == 0.0)
				{
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
					continue;
				}
				else
				{
					angle = atan2f(y2, x2);

					Robj = sqrt(powf(x2, 2) + powf(y2, 2));
					objXVelAbs = vx2 + pHostMotion->speed - pHostMotion->yawRate * Robj * sinf(angle);
					objYVelAbs = vy2 + 0.0 + pHostMotion->yawRate * Robj * cosf(angle);

					if (fabs(objYVelAbs) > 0 || fabs(objXVelAbs) > 0)
					{
						objVelAbs = sqrt(powf(objYVelAbs, 2) + powf(objXVelAbs, 2));
					}
					else
					{
						objVelAbs = 0;
					}
				}

				if (y2 < 0.0F) {

					memset(&allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j], 0, sizeof(CornerRadarObj));
				}

				rcsthreshold = CalrcsThreshold(fabs(x2));

				if (((((y2 > 3) && (hostposition == HOSTPOSITION_L))
					|| ((y2 < -3) && (hostposition == HOSTPOSITION_R)) 
					|| (objVelAbs < 3.0 )
					|| (allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS < rcsthreshold))
					&&(objVelAbs < 10.0))
					|| (fabs(y2) > CORNER_RADAR_LAT_THRESHOLD )
				/*	|| (fabs(x2) < COMBINE_EPSILON)*/
					)
				{
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
				}
			}

			break;
		case REAR_RIGHT_RADAR:
			for (int32_t j = 0; j < UTILS_RADAR_MAX_OBJ_NUM; j++) {
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = pRRRadarInfo->radarObj[j].objXPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = pRRRadarInfo->radarObj[j].objYPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = pRRRadarInfo->radarObj[j].objXVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = pRRRadarInfo->radarObj[j].objYVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pRRRadarInfo->radarObj[j].objID;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS = pRRRadarInfo->radarObj[j].objObstacleProb;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objDynProp = pRRRadarInfo->radarObj[j].objMotionPattern;

				motionStatus = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objDynProp;

				if (pRRRadarInfo->radarObj[j].objID != 0) {
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pRRRadarInfo->radarObj[j].objID + 40 * i;
				}
		
				x = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos;
				y = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos;
				vx = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel;
				vy = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel;
				cosa = cos(RRRADAR_ANGEL);
				sina = sin(RRRADAR_ANGEL);

				x2 = x*cosa - y* sina + RRRADAR_XDISPLACE;
				y2 = x*sina + y*cosa + RRRADAR_YDISPLACE;
				vx2 = vx*cosa - vy * sina;
				vy2 = vx * sina + vy * cosa;
			
			    allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = x2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = y2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = vx2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = vy2;

				if (x2 == 0.0)
				{
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
					continue;
				}
				else
				{
					angle = atan2f(y2, x2);

					Robj = sqrt(powf(x2, 2) + powf(y2, 2));
					objXVelAbs = vx2 + pHostMotion->speed - pHostMotion->yawRate * Robj * sinf(angle);
					objYVelAbs = vy2 + 0.0 + pHostMotion->yawRate * Robj * cosf(angle);

					if (fabs(objYVelAbs) > 0 || fabs(objXVelAbs) > 0)
					{
						objVelAbs = sqrt(powf(objYVelAbs, 2) + powf(objXVelAbs, 2));
					}
					else
					{
						objVelAbs = 0;
					}
				}

				if (y2 > 0.0F) {
					memset(&allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j], 0, sizeof(CornerRadarObj));
				}

				  //    if (y2 > 0)
						//{
						//	if (leftlaneQ > 1)
						//	{
						//		yl = Calfilterbaselane( x2, leftside, hostlane);
						//	}
						//	else
						//	{
						//		yl = 3.5;
						//	}
						//}
						//else
						//{
						//	if (rightlaneQ > 1)
						//	{
						//		yr = Calfilterbaselane(x2, righttside, hostlane);
						//	}
						//	else
						//	{
						//		yr = -3.5;
						//	}
						//}


				rcsthreshold = CalrcsThreshold(fabs(x2));


			/*	printf("rcs: %f, ID: %d, objdx: %f", allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS, allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID, allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos);
				getchar();*/

				if (((((y2 > 3) && (hostposition == HOSTPOSITION_L))
					|| ((y2 < -3) && (hostposition == HOSTPOSITION_R)) 
					||(objVelAbs < 3.0)
					||(allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS < rcsthreshold)
					) && (objVelAbs < 10.0))
				/*	||( fabs(x2) < COMBINE_EPSILON)*/
					|| (fabs(y2) > CORNER_RADAR_LAT_THRESHOLD)
					)	
				{
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
				}
			}
			break;
		case FRONT_RIGHT_RADAR:
			for (int32_t j = 0; j < UTILS_RADAR_MAX_OBJ_NUM; j++) {

				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = pFRRadarInfo->radarObj[j].objXPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = pFRRadarInfo->radarObj[j].objYPos;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = pFRRadarInfo->radarObj[j].objXVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = pFRRadarInfo->radarObj[j].objYVelRel;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pFRRadarInfo->radarObj[j].objID;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS = pFRRadarInfo->radarObj[j].objObstacleProb;

				if (pFRRadarInfo->radarObj[j].objID != 0) {
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pFRRadarInfo->radarObj[j].objID + 40 * i;
				}
				x = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos;
				y = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos;
				vx = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel;
				vy = allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel;
				cosa = cos(FRRADAR_ANGEL);
				sina = sin(FRRADAR_ANGEL);

				x2 = x*cosa - y* sina + FRRADAR_XDISPLACE;
				y2 = x*sina + y*cosa + FRRADAR_YDISPLACE;
				vx2 = vx*cosa - vy * sina;
				vy2 = vx * sina + vy * cosa;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = x2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = y2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = vx2;
				allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = vy2;

				if (x2 == 0.0)
				{
					angle = y2 > 0 ? 1.5708 : -1.5708;
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
					continue;
				}
				else
				{
					angle = atan2f(y2, x2);

					Robj = sqrt(powf(x2, 2) + powf(y2, 2));
					objXVelAbs = vx2 + pHostMotion->speed - pHostMotion->yawRate * Robj * sinf(angle);
					objYVelAbs = vy2 + 0.0 + pHostMotion->yawRate * Robj * cosf(angle);

					if (fabs(objYVelAbs) > 0 || fabs(objXVelAbs) > 0)
					{
						objVelAbs = sqrt(powf(objYVelAbs, 2) + powf(objXVelAbs, 2));
					}
					else
					{
						objVelAbs = 0;
					}
				}

				if ((fabs(angle) < (3.1416 * 60 / 180) &&( x2 > 10.0F)) || (x2 > 2 && fabs(y2) < 3.0))
				{
					memset(&allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j], 0, sizeof(CornerRadarObj));
				}

				rcsthreshold = CalrcsThreshold(fabs(x2));

				if (((((y2 > 3) && (hostposition == HOSTPOSITION_L))
					|| ((y2 < -3) && (hostposition == HOSTPOSITION_R))
					|| (objVelAbs < 3.0 )
					|| (allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objRCS < rcsthreshold))
					&& (objVelAbs < 10.0))
					|| (fabs(y2) > CORNER_RADAR_LAT_THRESHOLD)
					|| (fabs(x2) < COMBINE_EPSILON)
					)
				{
					allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
				}
			}
		break;
		}
	}
		//todo: timestamp sync
		allRadarobjlist->timestamp = pFRadarInfo->timestamp;
		allRadarobjlist->errType = pFRadarInfo->errType;
		allRadarobjlist->frameNum = pFRadarInfo->frameNum;
		allRadarobjlist->radarState = pFRadarInfo->radarState;
		allRadarobjlist->reserved[0] = pFRadarInfo->reserved[0];
		allRadarobjlist->reserved[1] = pFRadarInfo->reserved[1];
		allRadarobjlist->count = pFRadarInfo->count + pFLRadarInfo->count + pFRadarInfo->count + pRLRadarInfo->count + pRRRadarInfo->count; //

}

/*******************************************************************************
* @name        GroupRadar
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/
//void GroupRadar(CanCornerRadarObjList* allRadarobjlist) {
//	if (RADAR_NUM == 5) {
//		GroupTwoRadar(FRONT_RADAR, FRONT_LEFT_RADAR, allRadarobjlist);
//		GroupTwoRadar(FRONT_LEFT_RADAR, REAR_LEFT_RADAR, allRadarobjlist);
//		GroupTwoRadar(REAR_LEFT_RADAR, REAR_RIGHT_RADAR, allRadarobjlist);
//		GroupTwoRadar(REAR_RIGHT_RADAR, FRONT_RIGHT_RADAR, allRadarobjlist);
//		GroupTwoRadar(FRONT_RADAR, FRONT_RIGHT_RADAR, allRadarobjlist);
//	}
//	else if (RADAR_NUM == 3) {
//		GroupTwoRadar(FRONT_RADAR, FRONT_LEFT_RADAR, allRadarobjlist);
//		GroupTwoRadar(FRONT_RADAR, FRONT_RIGHT_RADAR, allRadarobjlist);
//	}
//}

//void GroupTwoRadar(int8_t radarIndex1, int8_t radarIndex2, CanCornerRadarObjList* allRadarobjlist) {
//	for (int32_t i = UTILS_RADAR_MAX_OBJ_NUM * radarIndex1; i < UTILS_RADAR_MAX_OBJ_NUM * (radarIndex1 + 1); i++) {
//		
//		if (!InMultiFOV(allRadarobjlist->radarObj[i])) {
//			continue;
//		}
//		for (int32_t j = UTILS_RADAR_MAX_OBJ_NUM * radarIndex2; j < UTILS_RADAR_MAX_OBJ_NUM * (radarIndex2 + 1); j++) {
//			if (!InMultiFOV(allRadarobjlist->radarObj[j])) {
//				continue;
//			}
//			if (InOneGroup(i, j, allRadarobjlist)) {
//				if (allRadarobjlist->radarObj[i].objExstProb > allRadarobjlist->radarObj[j].objExstProb) {
//					allRadarobjlist->radarObj[j].objValidFlag = false;
//				}
//				else if (allRadarobjlist->radarObj[i].objExstProb < allRadarobjlist->radarObj[j].objExstProb) {
//					allRadarobjlist->radarObj[i].objValidFlag = false;
//				}
//				else if (allRadarobjlist->radarObj[i].objExstProb = allRadarobjlist->radarObj[j].objExstProb) {
//					float32_t radar_i_range = sqrt(allRadarobjlist->radarObj[i].objXPos * allRadarobjlist->radarObj[i].objXPos + allRadarobjlist->radarObj[i].objYPos * allRadarobjlist->radarObj[i].objYPos);
//					float32_t radar_j_range = sqrt(allRadarobjlist->radarObj[j].objXPos * allRadarobjlist->radarObj[j].objXPos + allRadarobjlist->radarObj[j].objYPos * allRadarobjlist->radarObj[j].objYPos);
//					if (radar_i_range > radar_j_range) {
//						allRadarobjlist->radarObj[i].objValidFlag = false;
//					}
//					else {
//						allRadarobjlist->radarObj[j].objValidFlag = false;
//					}
//				}
//			}
//		}
//	}
//}
//bool InMultiFOV(RadarObj &radarObj) {
//	return true;
//}

//bool InOneGroup(int16_t radarObjIndex1, int16_t radarObjIndex2, CanAllRadarObjList* allRadarobjlist) {
//		
//	float32_t disPosX = allRadarobjlist->radarObj[radarObjIndex1].objXPos - allRadarobjlist->radarObj[radarObjIndex2].objXPos;
//	float32_t disPosY = allRadarobjlist->radarObj[radarObjIndex1].objYPos - allRadarobjlist->radarObj[radarObjIndex2].objYPos;
//	float32_t distance = std::sqrt(disPosX * disPosX + disPosY * disPosY);
//	float32_t disVelX = allRadarobjlist->radarObj[radarObjIndex1].objXVelRel - allRadarobjlist->radarObj[radarObjIndex2].objXVelRel;
//	float32_t disVelY = allRadarobjlist->radarObj[radarObjIndex1].objYVelRel - allRadarobjlist->radarObj[radarObjIndex2].objYVelRel;
//	if (distance < RADAR_GROUP_DISTANCE_THRESHOLD && fabs(disVelX) < RADAR_GROUP_VELX_THRESHOLD && fabs(disVelY) < RADAR_GROUP_VELY_THRESHOLD) {
//		return true;
//	}
//	else {
//		return false;
//	}
//	
//}


float32_t Calfilterbaselane( float objPosX, uint8_t side, uint8_t lane)
{
	float32_t LC0, LC1, LC2, LC3, RC0, RC1, RC2, RC3, Y;
	float32_t objPosX2 = objPosX*objPosX;
	float32_t objPosX3 = objPosX*objPosX2;

	if (lane == 0)
	{
		LC0 = gFusionLaneIntInfo.LC0;
		LC1 = gFusionLaneIntInfo.LC1;
		LC2 = gFusionLaneIntInfo.LC2;
		LC3 = gFusionLaneIntInfo.LC3;

		RC0 = gFusionLaneIntInfo.RC0;
		RC1 = gFusionLaneIntInfo.RC1;
		RC2 = gFusionLaneIntInfo.RC2;
		RC3 = gFusionLaneIntInfo.RC3;
	}
	else if (lane == 1)
	{
		LC0 = gFusionLaneIntInfo.LAC0;
		LC1 = gFusionLaneIntInfo.LAC1;
		LC2 = gFusionLaneIntInfo.LAC2;
		LC3 = gFusionLaneIntInfo.LAC3;

		RC0 = gFusionLaneIntInfo.RAC0;
		RC1 = gFusionLaneIntInfo.RAC1;
		RC2 = gFusionLaneIntInfo.RAC2;
		RC3 = gFusionLaneIntInfo.RAC3;
	}
		if (side == 1)
		{
			Y = LC0 + LC1 * objPosX + LC2 * objPosX2 + LC3 * objPosX3;
		}
		else if (side == 0)
		{
			Y = RC0 + RC1 * objPosX + RC2 * objPosX2 + RC3 * objPosX3;
		}
		else {
			// do noting;
		}
	

	return Y;
}


void ObjfilterCal(int index, const CanRadarObjList* pRadarInfo, const CanRadarObjList* pcornerRadarInfo,CanRadarObjList* allRadarobjlist)
{
	vector<pair<int, CornerRadarObj*> > cornerradarDataM;
	cornerradarDataM.reserve(UTILS_RADAR_MAX_OBJ_NUM);

	vector<pair<int, CornerRadarObj*> > cornerradarDataL;
	cornerradarDataL.reserve(UTILS_RADAR_MAX_OBJ_NUM);

	vector<pair<int, CornerRadarObj*> > cornerradarDataR;
	cornerradarDataR.reserve(UTILS_RADAR_MAX_OBJ_NUM);

#if 0
	vector<pair<int, RadarObj*> > radarDataM;
	radarDataM.reserve(UTILS_RADAR_MAX_OBJ_NUM);

	vector<pair<int, RadarObj*> > radarDataL;
	radarDataL.reserve(UTILS_RADAR_MAX_OBJ_NUM);

	vector<pair<int, RadarObj*> > radarDataR;
	radarDataR.reserve(UTILS_RADAR_MAX_OBJ_NUM);
#endif 

	float32 x, y, vx, vy, cosa, sina, y2, x2, vx2, vy2, vr;
	float32 angle;
	uint8_t leftside = 1, righttside = 0, hostlane = 0, adjacentlane = 1;

	uint8_t leftlaneQ = gFusionLaneIntInfo.LQ;
	uint8_t rightlaneQ = gFusionLaneIntInfo.RQ;
	uint32_t hostposition = gFusionLaneIntInfo.hostposition;
	int a = 0, b = 0, c = 0;
	float32_t yl = 0.0, yr = 0.0;

#if 0
	for (int32_t j = 0; j < UTILS_RADAR_MAX_OBJ_NUM; j++) 
	{
		memcpy(&allRadarobjlist->radarObj[index * UTILS_RADAR_MAX_OBJ_NUM + j], &pRadarInfo->radarObj[j], sizeof(RadarObj));
		//	allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pFRadarInfo->radarObj[j].objID;
		RadarObj* pRadarObj = &allRadarobjlist->radarObj[index * UTILS_RADAR_MAX_OBJ_NUM + j];

		x = pRadarInfo->radarObj[j].objXPos;
		y = pRadarInfo->radarObj[j].objYPos;
		if (y > 0)
		{
			if (leftlaneQ > 1)
			{
				yl = Calfilterbaselane(pFusionoutlist, x, leftside, hostlane)+ 1;
			}
			else
			{
				yl = 3.5;
			}
		}
		else
		{
			if (rightlaneQ > 1)
			{
				yr = Calfilterbaselane(pFusionoutlist, x, righttside, hostlane)-1;
			}
			else
			{
				yr = -3.5;
			}
		}


		//if ((vr < COMBINE_EPSILON)
		//	|| ((y > 3) && (hostposition == HOSTPOSITION_L))
		//	|| ((y < -3) && (hostposition == HOSTPOSITION_R))
		//	)
		//{
		//	allRadarobjlist->radarObj[index].objID = 0;
		//}
		//else
		//{
			if ((yr < y) && (y < yl))
			{
				radarDataM.push_back(pair<int, RadarObj*>((index * UTILS_RADAR_MAX_OBJ_NUM + j), pRadarObj));
			}
			else if ((yl <= y) && (y <= (yl + 3.6)))
			{
				radarDataL.push_back(pair<int, RadarObj*>((index * UTILS_RADAR_MAX_OBJ_NUM + j), pRadarObj));
			}
			else if ((y <= yr) && ((yr - 3.6) < y))
			{
				radarDataR.push_back(pair<int, RadarObj*>((index * UTILS_RADAR_MAX_OBJ_NUM + j), pRadarObj));
			}
			else
			{
				allRadarobjlist->radarObj[index * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
			}
		}
	sort(radarDataM.begin(), radarDataM.end(), xPos);
	sort(radarDataL.begin(), radarDataL.end(), xPos);
	sort(radarDataR.begin(), radarDataR.end(), xPos);

	for (vector<pair<int, RadarObj*> >::const_iterator itera = radarDataM.begin(); itera != radarDataM.end(); ++itera)
	{
		RadarObj* pRadarObjM = itera->second;
		a++;
		if (a > 5)
		{
			pRadarObjM->objID = 0;
		}
	}
	for (vector<pair<int, RadarObj*> >::const_iterator iterL = radarDataL.begin(); iterL != radarDataL.end(); ++iterL)
	{
		RadarObj* pRadarObjL = iterL->second;
		b++;
		if (b > 2)
		{
			pRadarObjL->objID = 0;
		}
	}
	for (vector<pair<int, RadarObj*> >::const_iterator iterR = radarDataR.begin(); iterR != radarDataR.end(); ++iterR)
	{
		RadarObj* pRadarObjR = iterR->second;
		c++;
		if (c > 2)
		{
			pRadarObjR->objID = 0;
		}
	}
	vector<pair<int, RadarObj*> >().swap(radarDataM);
	vector<pair<int, RadarObj*> >().swap(radarDataL);
	vector<pair<int, RadarObj*> >().swap(radarDataR);


#endif

	float angle_t= 0, dlongitudinal= 0, dlateral= 0;


	if (index ==  FRONT_LEFT_RADAR)
	{
		angle_t = FLRADAR_ANGEL;
		dlongitudinal = FLRADAR_XDISPLACE;
		dlateral = FLRADAR_YDISPLACE;
	}
	else if (index == REAR_LEFT_RADAR)
	{
		angle_t = RLRADAR_ANGEL;
		dlongitudinal = RLRADAR_XDISPLACE;
		dlateral = RLRADAR_YDISPLACE;
	}
	else if (index == REAR_RIGHT_RADAR)
	{
		angle_t = RRRADAR_ANGEL;
		dlongitudinal = RRRADAR_XDISPLACE;
		dlateral = RRRADAR_YDISPLACE;
	}
	else if (index == FRONT_RIGHT_RADAR)
	{
		angle_t = FRRADAR_ANGEL;
		dlongitudinal = FRRADAR_XDISPLACE;
		dlateral = FRRADAR_YDISPLACE;
	}
	else
	{
		angle_t = FLRADAR_ANGEL;
		dlongitudinal = FLRADAR_XDISPLACE;
		dlateral = FLRADAR_YDISPLACE;
	}


	for (int32_t j = 0; j < UTILS_RADAR_MAX_OBJ_NUM; j++) {
		//memcpy(&allRadarobjlist->radarObj[i * UTILS_RADAR_MAX_OBJ_NUM + j], &pFLRadarInfo->radarObj[j], sizeof(RadarObj));
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = pcornerRadarInfo->radarObj[j].objXPos;
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = pcornerRadarInfo->radarObj[j].objYPos;
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = pcornerRadarInfo->radarObj[j].objXVelRel;
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = pcornerRadarInfo->radarObj[j].objYVelRel;
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pcornerRadarInfo->radarObj[j].objID;

		if (pcornerRadarInfo->radarObj[j].objID != 0) {
			allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = pcornerRadarInfo->radarObj[j].objID + 256 * index;
		}
		x = allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos;
		y = allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos;
		vx = allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel;
		vy = allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel;
		cosa = cos(angle_t);
		sina = sin(angle_t);

		x2 = x*cosa - y* sina + dlongitudinal;
		y2 = x*sina + y*cosa + dlateral;
		vx2 = vx*cosa - vy * sina;
		vy2 = vx * sina + vy * cosa;
		vr = sqrtf((fabs(vx2)* fabs(vx2)) + (fabs(vy2)* fabs(vy2)));

		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXVelRel = vx2;
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYVelRel = vy2;
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = y2;
		allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = x2;

		//if (x2 == 0.0)
		//	angle = y2 > 0 ? 1.5708 : -1.5708;
		//else
		//	angle = atan2(y2, x2);
		//if ((fabs(angle) < 3.1416 * 60 / 180 && x2 > 10.0F) || (x2 > 2 && fabs(y2) < 3.0))
		//{
		//	memset(&allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j], 0, sizeof(CornerRadarObj));
		//}

		CornerRadarObj* pcornerRadarObj = &allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j];

		if (y2 > 0)
		{
			if (leftlaneQ > 1)
			{
				yl = Calfilterbaselane( x2, leftside, hostlane);
			}
			else
			{
				yl = 3.5;
			}
		}
		else
		{
			if (rightlaneQ > 1)
			{
				yr = Calfilterbaselane( x2, righttside, hostlane);
			}
			else
			{
				yr = -3.5;
			}
		}


		if ((vr < COMBINE_EPSILON)
			|| ((y2 > 3) && (hostposition == HOSTPOSITION_L))
			|| ((y2 < -3) && (hostposition == HOSTPOSITION_R))
			)
		{
			allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
		}
		else
		{
			if ((yr < y2) && (y2 < yl))
			{
				cornerradarDataM.push_back(pair<int, CornerRadarObj*>(((index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j), pcornerRadarObj));
			}
			else if ((yl <= y2) && (y2 <= (yl + 3.6)))
			{
				cornerradarDataL.push_back(pair<int, CornerRadarObj*>(((index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j), pcornerRadarObj));
			}
			else if ((y2 <= yr) && ((yr - 3.6) < y2))
			{
				cornerradarDataR.push_back(pair<int, CornerRadarObj*>(((index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j), pcornerRadarObj));
			}
			else
			{
				allCornerRadObjList.radarObj[(index - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
			}
		}
		//if ((fabs(x) < COMBINE_EPSILON && fabs(y) < COMBINE_EPSILON) || (fabs(y2) > CORNER_RADAR_LAT_THRESHOLD))
		//{
		//	allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objXPos = 0;
		//	allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objYPos = 0;
		//	allCornerRadObjList.radarObj[(i - 1) * UTILS_RADAR_MAX_OBJ_NUM + j].objID = 0;
		//}
	}

	if ((index == FRONT_LEFT_RADAR) || (index == FRONT_RIGHT_RADAR))
	{

	/*	printf("Msize : %d", cornerradarDataM.size());
		getchar();*/
		if (2 < cornerradarDataM.size())
		{
          
			sort(cornerradarDataM.begin(), cornerradarDataM.end(), xFcornerPos);

			for (vector<pair<int, CornerRadarObj*> >::const_iterator itera = cornerradarDataM.begin(); itera != cornerradarDataM.end(); ++itera)
			{
				CornerRadarObj* pCRadarObjM = itera->second;
				a++;
				if (a > 0)
				{
					pCRadarObjM->objID = 0;
				}
			}

		}
		
		if (2 < cornerradarDataL.size())
		{
			sort(cornerradarDataL.begin(), cornerradarDataL.end(), xFcornerPos);
			for (vector<pair<int, CornerRadarObj*> >::const_iterator iterL = cornerradarDataL.begin(); iterL != cornerradarDataL.end(); ++iterL)
			{
				CornerRadarObj* pCRadarObjL = iterL->second;
				b++;
				if (b > 2)
				{
					pCRadarObjL->objID = 0;
				}
			}
		}
		if (2 < cornerradarDataR.size())
		{
			sort(cornerradarDataR.begin(), cornerradarDataR.end(), xFcornerPos);

			for (vector<pair<int, CornerRadarObj*> >::const_iterator iterR = cornerradarDataR.begin(); iterR != cornerradarDataR.end(); ++iterR)
			{
				CornerRadarObj* pCRadarObjR = iterR->second;
				c++;
				if (c > 0)
				{
					pCRadarObjR->objID = 0;
				}
			}

		}

		//sort(cornerradarDataM.begin(), cornerradarDataM.end(), xFcornerPos);
		//sort(cornerradarDataL.begin(), cornerradarDataL.end(), xFcornerPos);
		//sort(cornerradarDataR.begin(), cornerradarDataR.end(), xFcornerPos);
	}
	//
	//if ((index == REAR_LEFT_RADAR) || (index == REAR_RIGHT_RADAR))
	//{
	//	sort(cornerradarDataM.begin(), cornerradarDataM.end(), xRcornerPos);
	//	sort(cornerradarDataL.begin(), cornerradarDataL.end(), xRcornerPos);
	//	sort(cornerradarDataR.begin(), cornerradarDataR.end(), xRcornerPos);
	//}



	//for (vector<pair<int, CornerRadarObj*> >::const_iterator itera = cornerradarDataM.begin(); itera != cornerradarDataM.end(); ++itera)
	//{
	//	CornerRadarObj* pCRadarObjM = itera->second;
	//	a++;
	//	if (a > 0)
	//	{
	//		pCRadarObjM->objID = 0;
	//	}
	//}

	//for (vector<pair<int, CornerRadarObj*> >::const_iterator iterL = cornerradarDataL.begin(); iterL != cornerradarDataL.end(); ++iterL)
	//{
	//	CornerRadarObj* pCRadarObjL = iterL->second;
	//	b++;
	//	if (b > 2)
	//	{
	//		pCRadarObjL->objID = 0;
	//	}
	//}
	//for (vector<pair<int, CornerRadarObj*> >::const_iterator iterR = cornerradarDataR.begin(); iterR != cornerradarDataR.end(); ++iterR)
	//{
	//	CornerRadarObj* pCRadarObjR = iterR->second;
	//	c++;
	//	if (c > 0)
	//	{
	//		pCRadarObjR->objID = 0;
	//	}
	//}
	vector<pair<int, CornerRadarObj*> >().swap(cornerradarDataM);
	vector<pair<int, CornerRadarObj*> >().swap(cornerradarDataL);
	vector<pair<int, CornerRadarObj*> >().swap(cornerradarDataR);
}

float CalrcsThreshold(float x)
{
	float rcsthreshold;

	if (fabs(x) < 3.0f)
	{
		rcsthreshold = -5.0;
	}
	else if (fabs(x) < 5.0f)
	{
		rcsthreshold = -3.5;
	}
	else if (fabs(x) < 9.9f)
	{
		rcsthreshold = 0.5;
	}
	else
	{
		rcsthreshold = 3.0;
	}

	return rcsthreshold;
}

	
