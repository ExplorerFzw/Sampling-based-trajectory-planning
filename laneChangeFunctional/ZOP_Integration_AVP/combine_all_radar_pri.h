/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : combine_all_radar_pri.h
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

#ifndef __H_COMBINE_ALL_RADAR_PRI__
#define __H_COMBINE_ALL_RADAR_PRI__

/************************** Include *******************************************/

#include "fusion_define.h"
#include  "p_radar_object.h"
#include "sensor_adapter_pub.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

	/************************** Macro *********************************************/
#define RADAR_NUM 5
#define RADAR_GROUP_DISTANCE_THRESHOLD 0.5
#define RADAR_GROUP_VELX_THRESHOLD 0.5
#define RADAR_GROUP_VELY_THRESHOLD 0.5
#define CORNER_RADAR_LAT_THRESHOLD (7.5F)
#define COMBINE_EPSILON			(1.5F)

#define HOSTPOSITION_L   (1)
#define HOSTPOSITION_M   (2)
#define HOSTPOSITION_R   (3)
/************************** Struct And Enum ***********************************/



/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/

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


void CombineRadarIntoOneList(const VehicleData* pHostMotion,const CanRadarObjList* pFRadarInfo, const CanRadarObjList* pFLRadarInfo, const CanRadarObjList* pFRRadarInfo,
	const CanRadarObjList* pRLRadarInfo, const CanRadarObjList* pRRRadarInfo, CanRadarObjList* allRadarobjlist);


void SelectOutputCornerRadar();

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
//void GroupRadar(CanCornerRadarObjList* allRadarobjlist);
//void GroupTwoRadar(int8_t radarIndex1, int8_t radarIndex2, CanCornerRadarObjList* allRadarobjlist);
//bool InMultiFOV(RadarObj &radarObj);
//bool InOneGroup(int16_t radarObjeIndex1, int16_t radarObjIndex2, CanCornerRadarObjList* allRadarobjlist);

CanCornerRadarObjList allCornerRadObjList;

float32_t Calfilterbaselane(float objPosX, uint8_t side, uint8_t lane);

float CalrcsThreshold(float x);

void ObjfilterCal(int index, const CanRadarObjList* pRadarInfo, const CanRadarObjList* pcornerRadarInfo, CanRadarObjList* allRadarobjlist);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_COMBINE_ALL_RADAR_PRI__ */
