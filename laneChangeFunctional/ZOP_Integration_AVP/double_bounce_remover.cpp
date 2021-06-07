/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : double_bounce_remover.cpp
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

#include "double_bounce_remover_pub.h"
#include "double_bounce_remover_pri.h"

#include <cmath>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <vector>
#include <deque>
//#include <sensor_adapter\sensor_adapter_pri.h>
using namespace std;

#define THRESHOS_XPOS_FAR (83.0F)
#define THRESHOS_XPOS_NEAR (3.7F)
#define THRESHOS_YPOS ( 5.0F)
const uint8 DTC_RADARLOSTHRES = 6U;
const uint8 DTC_RADARLOSRECOVER = 17U;
/************************** Macro *********************************************/

/************************** Struct And Enum ***********************************/

/************************** Global Variable  **********************************/

/************************** Static Variable ***********************************/

/************************** Static Function Definition ************************/

/************************** Function Definition *******************************/

/*******************************************************************************
* @name        SensorAdapter_DoubleBounceRemover_Init_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_DoubleBounceRemover_Init_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        SensorAdapter_DoubleBounceRemover_DeInit_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

int32_t SensorAdapter_DoubleBounceRemover_DeInit_V(void)
{
	return ZONE_RETURN_OK;
}

/*******************************************************************************
* @name        SensorAdapter_DoubleBounceRemover_Run_V
* @brief
* @param[in]   none
* @param[out]  none
* @return      ZONE_RETURN_OK: success
*              ZONE_RETURN_ERR: fail
* @see         none
* @note        none
******************************************************************************/

bool xPosSort(pair<int, const RadarObj*> a, pair<int, const RadarObj*> b)
{
	return a.second->objXPos < b.second->objXPos;
}

int32_t SensorAdapter_DoubleBounceRemover_Run_V(const CanRadarObjList* pRadarInfo,uint8 validity[])
{
    if (pRadarInfo->radarState.reservedField[0] == 0)
	{	const float32 radarLong = RADAR_MOUNT_LONG_POSN;
		vector<pair<int, const RadarObj*> > radarData;
		radarData.reserve(UTILS_RADAR_MAX_OBJ_NUM);

		for (uint8 iCnt = 0; iCnt < UTILS_RADAR_MAX_OBJ_NUM; ++iCnt)
		{
			const RadarObj* pRadarObj = &pRadarInfo->radarObj[iCnt];
			if (FUSION_OBJECT_VAILID == pRadarObj->objValidFlag)
			{
				if ((pRadarObj->objXPos >= THRESHOS_XPOS_NEAR) && (fabs(pRadarObj->objYPos) <= THRESHOS_YPOS)) // do not detect double bounce if X/Y position if out of range
				{
					radarData.push_back(pair<int, const RadarObj*>(iCnt, pRadarObj));
				}
			}
		}
		if (2 > radarData.size())
		{
			return 0;
		}

		sort(radarData.begin(), radarData.end(), xPosSort);
		for (vector<pair<int, const RadarObj*> >::const_iterator itera = radarData.begin(); itera != radarData.end(); ++itera)
		{
			const RadarObj* pRadarObjA = itera->second;
			if (pRadarObjA->objXPos > 40.0F) // if the radar object xPos is farther than 40m it will not have double bounce in principle
			{
				break;
			}
			if (validity[itera->first] == FUSION_OBJECT_INVALID) // if the radar object already mark as a double bounce object, do not need to find its double bounce object again
			{
				continue;
			}
			for (vector<pair<int, const RadarObj*> >::const_iterator iterb = itera + 1; iterb != radarData.end(); ++iterb)
			{
				const RadarObj* pRadarObjB = iterb->second;

				if (THRESHOS_XPOS_FAR < pRadarObjB->objXPos)
				{
					break;
				}

				float32 xPosComp = (pRadarObjB->objXPos- radarLong) / (pRadarObjA->objXPos-radarLong);
				float32 xVelComp = 0.0F;
				uint8 isVxPass = 0;

				if (fabs(pRadarObjA->objXVelRel) > 0.1F)
				{
					xVelComp = pRadarObjB->objXVelRel / pRadarObjA->objXVelRel;
				}
				else
				{
					if (fabs(pRadarObjB->objXVelRel - pRadarObjA->objXVelRel) <= 0.12F)
					{
						isVxPass = 1;
					}
				}
				float32 dltYPos = fabs(pRadarObjB->objYPos - pRadarObjA->objYPos);
				/*find double bounce radar object*/
				if ((xPosComp >= 1.9F) && (xPosComp <= 2.1F)
					&& (((xVelComp >= 1.9F) && (xVelComp <= 2.1F)) || (isVxPass == 1))
					&& dltYPos < 1.0F)
				{
					// must be a double bounce radar object
					validity[iterb->first] = 0;
					break;
				}
				else if ((xPosComp >= 1.5F) && (xPosComp <= 2.5F)
					&& (((xVelComp >= 1.5F) && (xVelComp <= 2.5F)) || (isVxPass == 1))
					&& (dltYPos < 1.3F))
				{
					if (pRadarObjB->objExstProb <= RELIABLE_EXISTPROB)
					{
						validity[iterb->first] = 0;
						break;
					}
				}
			}
		}

		for (vector<pair<int, const RadarObj*> >::const_iterator iterRa = radarData.begin(); iterRa != radarData.end(); ++iterRa)
		{
			const RadarObj* pRadarObj = iterRa->second;
			if ((RADARSTATUS_MOVING == pRadarObj->objMotionPattern)
				&& (2.0F > fabs(pRadarObj->objYPos))
				&& (RELIABLE_EXISTPROB <= pRadarObj->objExstProb))
			{
				for (vector<pair<int, const RadarObj*> >::const_iterator iterRaS = ++iterRa; iterRaS != radarData.end(); ++iterRaS)
				{
					if ((0 != validity[iterRaS->first]) && (2.0F > fabs(iterRaS->second->objYPos)))
					{
						validity[iterRaS->first] = 2;
					}
				}
				break;
			}
		}

		vector<pair<int, const RadarObj*> >().swap(radarData);
	}
	return ZONE_RETURN_OK;
}