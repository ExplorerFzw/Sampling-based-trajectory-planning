/******************************************************************************
* Copyright (c) 2020, Z-ONE
* All rights reserved.
*******************************************************************************
* File name     : sensor_adapter_pri.h
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

#ifndef __H_SENSOR_ADAPTER_PRI__
#define __H_SENSOR_ADAPTER_PRI__

/************************** Include *******************************************/

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/************************** Macro *********************************************/
#define PI (3.1415926F)
#ifndef FLOAT_ZERO
#define FLOAT_ZERO     (0.000001f)
#endif

// radar sensor mounting locatin in VCS
#define RADAR_MOUNT_LONG_POSN (3.5F) // [m]
#define RADAR_MOUNT_LAT_POSN (0.0F) // [m]
#define RADAR_MOUNT_HEIGHT (1.0F) // [m]



// define the default obj size based on its type
#define DEFAULT_CAR_LEGNTH (4.5F) //[m]
#define DEFAULT_CAR_WIDTH (1.8F) //[m]
#define DEFAULT_TRUCK_LEGNTH (6.0F) //[m]
#define DEFAULT_TRUCK_WIDTH (2.25F) //[m]
#define DEFAULT_UNKNOWN_OBJ_WIDTH (1.0F) //[m]
#define DEFAULT_UNKNOWN_OBJ_LENGTH (1.0F) //[m]

// define min speed for moving status
#define MOVING_SPEED_THRESHOLD (1.0F) //[m/s]

// any cals, constants and parameters should go here
// need to have comments about the meaning of the cals
// need to have unit (if applicable)

// radar can transmission and extraction latency
#define RADAR_CANTRANS_AND_EXTRACT_LATENCY  (150U) // unit [us], factor [1us]
// vision frame collection latency
#define VISION_FRAME_LANTENCY               (22700U) // unit [us], factor [1us]

#define RADAR_FUSION_MAX_LONGPON_GAP        (3.0F) // the longitunal position gap between the radar input and fusion prediction; unit [m]
#define RADAR_FUSION_MAX_LAT_GAP            (10.0F) // the lateral position gap between the radar input and fusion prediction; unit [m]
#define RADAR_FUSION_MAX_LONGVEL_GAP        (3.0F) // the longitunal velocity gap between the radar input and fusion prediction; unit [m/s]
#define RADAR_FUSION_MAX_LATVEL_GAP         (3.0F) // the lateral velocity gap between the radar input and fusion prediction; unit [m/s]

#define K_DIM_OF_KF_STATE					(6U)
#define K_DIM_OF_KF_MEASUREMENT				(4U)

/*ego motion status*/
#define EGOMOTION_UNKNOWN                   (0U)
#define EGOMOTION_STAND1                    (1U)
#define EGOMOTION_STAND2                    (2U)
#define EGOMOTION_STAND3                    (3U)
#define EGOMOTION_FWD1                      (4U)
#define EGOMOTION_FWD2                      (5U)
#define EGOMOTION_BACK1                     (6U)
#define EGOMOTION_BACK2                     (7U)

#define RADARSTATUS_CROSS                   (4U)
#define RADARSTATUS_MOVING                  (3U)
#define RADARSTATUS_STOPPED                 (2U)
#define RADARSTATUS_STATIONARY              (1U)
#define RADARSTATUS_UNKNOWN                 (0U)

#define RADARTYPE_UNKNOWN                   (0U)
#define RADARTYPE_4WHEElER                  (1U)
#define RADARTYPE_2WHEElER                  (2U)
#define RADARTYPE_PEDESTRIAN                (3U)

#define FUSION_BLIND_ZONE_AREA            (10.0F)


#define FUSION_US_TO_S          (1000000.0F)

/*fusion object status*/
#define FUSION_OBJECT_VAILID    (1U)
#define FUSION_OBJECT_INVALID   (0U)

/*vision object status*/
#define VISION_OBJSTATUS_INITIALIZED (0U)
#define VISION_OBJSTATUS_MEASURED (1U)
#define VISION_OBJSTATUS_PREDICTED (2U)

/*vision object type*/
#define VISION_TYPE_UNKNOWN    (0U)
#define VISION_TYPE_PEDESTRAIN (1U)
#define VISION_TYPE_CAR        (2U)
#define VISION_TYPE_TRUCK      (3U)

/*fusion source kind*/
#define FUSION_SOURCE_VISION_ONLY   (0U)
#define FUSION_SOURCE_RADAR_ONLY    (1U)
#define FUSION_SOURCE_RADAR_VISION  (2U)

/*fusion object type*/
#define FUSION_TYPE_UNKNOWN    (0U)
#define FUSION_TYPE_CAR        (1U)
#define FUSION_TYPE_MOTOCYCLE  (2U)
#define FUSION_TYPE_TRUCK      (3U)
#define FUSION_TYPE_PEDESTRAIN (4U)
#define FUSION_TYPE_BICYCLE    (9U)
#define FUSION_TYPE_UNKCAR     (10U)

//track status, 0:Invalid, 1 : Merged, 2 : New, 3 : New_Coasted, 5 : Updated, 6 : Coasted.
#define TRACK_STATUS_INVALID		(0U)
#define TRACK_STATUS_MERGED			(1U)
#define TRACK_STATUS_NEW			(2U)
#define TRACK_STATUS_NEW_COASTED	(3U)
#define TRACK_STATUS_UPDATED		(5U)
#define TRACK_STATUS_COASTED		(6U)

#define REAR_CENTER		(0U)
#define REAR_RIGHT		(1U)
#define RIGHT_CENTER	(2U)
#define FRONT_RIGHT		(3U)
#define FRONT_CENTER	(4U)
#define FRONT_LEFT		(5U)
#define LEFT_CENTER		(6U)
#define REAR_LEFT		(7U)

#define FUSIONTYPE_MINIVISCNT               (15U)

#define VISION_NIGHT		(0U)
#define VISION_TWILIGHT		(1U)
#define VISION_DAY			(2U)
#define VISION_UNKNOWN		(255U)


const float32 VISION_LONGVARTHRES = 2.5F;
const float32 VISION_LATVARTHRES = 2.5F;
const float32 VISION_VXVARTHRES = 2.5F;
const float32 VISION_VYVARTHRES = 1.5F;

/* By Wugsz, to get synchronized vehicle data and radar to vision output */
#define VEHICLE_DATA_CACHE_NUM	20
#define RADAR_DATA_CACHE_NUM	5
#define VEHICLE_DATA_BACK_NUM   10				/* this must be calibrated carefully */
#define RADAR_DATA_BACK_NUM		2				/* this must be calibrated carefully */

VehicleData vehicleDataCacheList[VEHICLE_DATA_CACHE_NUM];
CanRadarObjList radarDataCacheList[RADAR_DATA_CACHE_NUM];
CanRadarObjList FLradarDataCacheList[RADAR_DATA_CACHE_NUM];
CanRadarObjList FRradarDataCacheList[RADAR_DATA_CACHE_NUM];
CanRadarObjList RRradarDataCacheList[RADAR_DATA_CACHE_NUM];
CanRadarObjList RLradarDataCacheList[RADAR_DATA_CACHE_NUM];
uint8_t vehicleDataCacheIndex = 0;
uint8_t radarFDataCacheIndex = 0;
uint8_t radarFRDataCacheIndex = 0;
uint8_t radarFLDataCacheIndex = 0;
uint8_t radarRRDataCacheIndex = 0;
uint8_t radarRLDataCacheIndex = 0;

CanRadarObjList covRadObjList;

uint8 FradarAliveCounter = 0;
uint8 FLradarAliveCounter = 0;
uint8 FRradarAliveCounter = 0;
uint8 RLradarAliveCounter = 0;
uint8 RRradarAliveCounter = 0;

uint8 radarValidity[UTILS_RADAR_MAX_OBJ_NUM];


/************************** Struct And Enum ***********************************/

/************************** Inline Function Definition ************************/

/************************** External Variable Decleration  ********************/

/************************** External Function Decleration *********************/


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __H_SENSOR_ADAPTER_PRI__ */
