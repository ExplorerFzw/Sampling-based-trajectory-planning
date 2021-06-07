/******************************************************************************
# Copyright (c) 2020 DP, S/W Center, SAIC Motor Passenger Vehicle Co., Ltd.
# All rights reserved.
*******************************************************************************
* File name     : p_radar_object.h
* Description   :
* Version       : v1.0
* Create Time   : 2020/11/16
* Author   		: meepo
* Modify history:
*******************************************************************************
* Modify Time   Modify person  Modification
* ------------------------------------------------------------------------------
*
*******************************************************************************/

#ifndef __H_P_RADAR_OBJECT__
#define __H_P_RADAR_OBJECT__

#include "basic_type.h"

/************************** Include *******************************************/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/************************** Macro *********************************************/

#define UTILS_RADAR_MAX_OBJ_NUM		(40U)
#define UTILS_5_RADAR_MAX_OBJ_NUM	(160U)

/************************** Struct And Enum ***********************************/

/*
	FRS_Status: 8 FRS
*/
typedef struct sRadarFRSState_t
{
	float32_t hostYaw;			/**<Host vehicle yaw rate in deg/s which is used for radar object tracking (calibrated host yaw rate if sensor has calibration capability).Left turn is defined as FRS_Host_Yaw positive direction.*/
	float32_t hostSpeed;		/**<Host vehicle over-ground speed which is used for radar object tracking (calibrated host velocity if the sensor has calibaration capability).Forward movement is defined as FRS_HostSpeed positive direction.*/
	uint16_t  timeStamp;		/**<Sensor internal time stamp since the last sensor start up. the time stamp shall loop as it overflows.*/
	uint8_t   statusHWErr;		/**<Flag to indicate if HW is failed or not. 0x0:HW is NOT failed 0x1 : HW is failed*/
	uint8_t   statusBlkProg;	/**<Sensor blockage status indication. 0x0: FRS is NOT blocked 0x1 : FRS is blocked*/
	uint8_t   statusMisAlign; 	/**<This signal indicates radar sensor mis-alignment status. 0x00:unknown 0x01 : calibrated 0x02 : sensor mis - alignment detected 0x03 : calibration in progress 0x04 : uncalibratable 0x05 - 07 : reserved*/
	uint8_t   sGUFail;			/**<This signal indicates if radar is working or not.0x0 = FRS radar is NOT working 0x1 = FRS radar is working*/
	uint8_t   measEnabled;		/**<This signal indicates if the radar sensor is performing measurement or not. (radio-wave emission or not) Since Conti does not have this, it could be setup as the same as FRS_Fail.*/
	uint8_t   msgAliveCounter;	/**<Alive counter shall be incremented every radar sensor measurement cycle.*/
	uint8_t   latency;        	/**<Radar process latency in ms from radio-wave reflection observation to CAN message transmission for current cycle.*/
	uint8_t   msgCheckSum;		/**<Check sum shall be generated out of each message content. check sum generation logic is TBC. */
	uint8_t   reservedField[2];	/**<receive number 0x0: target received; 0x1: no target received */

}RadarFRSState;

/*
	FRS_Obj_01_Part1of2
*/
typedef struct sRadarObj_t
{
	float32_t objObstacleProb;		/**< estimated probability of the object being an obstacle
									min:0  Max:99.9998   Unit:% */
	float32_t objXPos_Stdev;		/**< estimated 3-sigma standard deviation value of longitudinal position of the object.
									min:0  Max:12.7   Unit:m */
	float32_t objYPos_Stdev;		/**< estimated 3-sigma standard deviation value of lateral position of the object.
									min:0  Max:12.7   Unit:m */
	float32_t objXVelRel_Stdev;		/**< estimated 3-sigma standard deviation value of the relative longitudinal velocity of the object.
									min:0  Max:6.35   Unit:m/s */
	float32_t objXAccRel;			/**< relative longitudinal acceleration of the object
									min:-9.6  Max:9.45   Unit:m/s2 */
	float32_t objExstProb;			/**<estimated existence probability of the object min:0  Max:99.9998   Unit:% */

	float32_t objYVelRel;			/**< relative lateral velocity of the object
									min:-102.4  Max:102.3   Unit:m/s */
	float32_t objXVelRel;			/**< relative longitudinal velocity of the object.
									min:-102.4  Max:102.3   Unit:m/s */
	float32_t objXPos;				/**< position of target object in longitudinal direction center of vehicle rear axle shaft is reference point.
									min:0  Max:255.984   Unit:m */
	float32_t objYPos;				/**< position of target object in lateral directioncenter of vehicle rear axle shaft is reference point.
									min:-64  Max:63.9844   Unit:m */
	uint16_t   objID;				/**< min:0   max:255 */

	uint8_t   objUpdateFlag;		/**< flag to indicate newly created object in CAN bus. Object history flag: 0x0: new object in the cycle; 0x1: object existed in previous cycle */

	uint8_t   objValidFlag;			/**< validity indication flag. when this value shows invalid, all the signals in the corresponding CAN messages except FRS_Msg_AliveCounter and FRS_Msg_CheckSum shall take default values.0x0: Object invalid; 0x1: Object valid */

	uint8_t   objMotionPattern;		/**< Motion type of object 0x00: Unknown 0x01: Stationary 0x02: Stopped 0x03: Moving 0x04: Crossing 0x05-07: reserved*/

	uint8_t   objType;				/**< To indicate the estimated type of Object 0~3 0x00: Unknown 0x01: 4 wheeler; 0x02: 2 wheeler; 0x03: Pedestrian*/

	uint8_t   objMeasFlag;			/**< This signal indicates whether the latest sensor measurement observed the object or extrapolated. 0x0: object measured in this cycle; 0x1: object extrapolated in this cycle*/
	uint8_t   reserved[2];
} RadarObj;

typedef struct sCornerRadarObj_t
{
	float32_t	objRCS;
	float32_t	objXPos;
	float32_t	objYPos;
	float32_t	objXVelRel;
	float32_t	objYVelRel;
	uint16_t	objID;
	uint8_t		objDynProp;
	uint8_t		index;
	uint32_t     alivecout;
}CornerRadarObj;

/**
	List of Radar can datagrams
*/
typedef struct sCanRadarObjListList_t
{
	float64_t		timestamp;		/**< timestamp [us] */
	uint32_t		frameNum;		/**< picture frame num since the first picture */
	uint32_t		count;			/**< the count of object */
	uint32_t		errType;		/**< RADAR_ERR_TYPE */
	RadarObj		radarObj[UTILS_RADAR_MAX_OBJ_NUM];
	RadarFRSState	radarState;
	uint32_t		reserved[2];
} CanRadarObjList;  /**< sizeof(CanRadarObjList) is 1968 bytes*/

typedef struct sCanAllRadarObjListList_t
{
	uint64			timestamp;		/**< timestamp [us] */
	uint32_t		frameNum;		/**< picture frame num since the first picture */
	uint32_t		count;			/**< the count of object */
	uint32_t		errType;		/**< RADAR_ERR_TYPE */
	CornerRadarObj	radarObj[UTILS_5_RADAR_MAX_OBJ_NUM];
	RadarFRSState	radarState;
	uint32_t		reserved[2];
} CanCornerRadarObjList;  
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /*__H_P_RADAR_OBJECT__ */

