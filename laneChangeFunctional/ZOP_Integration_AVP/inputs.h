/******************************************************************************/
/*! \file:
 *
 *  \brief:
 *
 *  \author: CAI Yuxi
 *
 *  \data:2020-12
 */
 /******************************************************************************/

#ifndef INPUTS_H_
#define INPUTS_H_

#include"Defines.h"

enum INPUTS
{
	FUS_MAX_OBJ_NUM = 40
};


enum LANECHANGESTATUS
{
	NO_LANE_CHANGE = 0,
	LEFT_LANE_CHANGE = 1,
	RIGHT_LANE_CHANGE = 2
};

enum MOTIONPATTERN
{
	UNKNOWN = 0,
	STATIONARY = 1,
	PRECEDING = 2,
	ONCOMING = 3,
	STOP = 4
};

enum FUSIONSOURCE
{
	VISIONONLY = 0,
	RADARONLY = 1,
	RADARVISIONFUSION = 2,
	UNKNOW = 255

};

enum OBJ_TYPE
{
	CLASS_UNKNOWN = 0,//0: Unknown
	PEDESTRIAN = 1,//1 : Pedestrian
	CYCLIST = 2,// : Cyclist
	BUS = 3,//: Bus
	SMALL_MEDIUM_CAR = 4,//: Small_Medium_Car
	TRUCK = 5,//: Trucks
	TRI_MOTOR = 6,//: Tri - Motor
	SPECIAL_VEHICLE = 7,//: Special_vehicle
	TINY_CAR = 8,//: Tiny_car
	AMBULANCE = 9,//: Ambulance
	UNCERTAIN_VEHICLE = 10 //: UncertainVehicle
};

enum VSL_LINE_QUALITY
{
	VISION_LINE_unknown = 0,
	VISION_LINE_LOW = 1,
	VISION_LINE_MIDDLE = 2,
	VISION_LINE_MIDDLE_HIGH = 3,
	VISION_LINE_HIGH = 4
};
enum VSL_LINE_TRACK_STATUS
{
	INVALID = 0,
	INIT = 1,
	MEASUREMENT = 2,
	PREDICTED = 3
};

struct FUSION_OBJ_TRACK_EST_ST
{
	float longPosition;
	float latPosition;
	float headingAngle;
	float speed;
	float yawRate;
	float longRelativeVelocity;
	float latRelativeVelocity;
	float longAbsoluteVelocity;
	float latAbsoluteVelocity;
	float acceleration;
	float longRelativeAcceleration;
	float latRelativeAcceleration;
	float longAbsoluteAcceleration;
	float latAbsoluteAcceleration;
	float curvature;
};

struct FUSION_OBJ_TRACK_INFO_ST
{
	uint8_t valid;
	uint8_t type;
	uint8_t nearestSide;
	uint8_t motionPatternCurrent;
	uint8_t motionPatternHistory;
	float width;
	float height;
	float length;
	float distanceToleftNearLaneMarking;
	float distanceToRightNearLaneMarking;
};

struct FUSION_OBJ_TRACK_PROP_ST
{
	uint8_t id;
	uint8_t fusionSource;
	uint8_t motionModel;
	uint8_t trackStatus;
	uint8_t positionConfidence;
	uint8_t fcwConfidence;
	uint8_t tjaConfidence;
	uint8_t leftNearLaneMarkingConfidence;
	uint8_t rightNearLaneMarkingConfidence;
	uint8_t visionId;
	float accelerationStdDev;
	float headingAngleStdDev;
	float latPositionStdDev;
	float longPositionStdDev;
	float speedStdDev;
};

struct FUSION_OBJ_DATA_ST
{
	struct FUSION_OBJ_TRACK_EST_ST obj_estimate;
	struct FUSION_OBJ_TRACK_PROP_ST obj_property;
	struct FUSION_OBJ_TRACK_INFO_ST obj_information;

};
struct FUSION_OBJ_OUTPUT_ST
{
	double timeStamp;
	struct FUSION_OBJ_DATA_ST objects[FUS_MAX_OBJ_NUM];
	uint32_t frameNum;
};

//***********************************Lane information**************************
struct FUSION_LANE_START_POINT
{
	float x0;
	float y0;
};
struct FUSION_LANE_TRACK_EST_ST
{
	float latDistanceZeroOrderCoeff;
	float latDistanceFirstOrderCoeff;
	float latDistanceSecondOrderCoeff;
	float latDistanceThirdOrderCoeff;
	float longDistanceToend;
	struct FUSION_LANE_START_POINT startPoint;
};
struct FUSION_LANE_DATA_ST
{
	uint8_t id;
	uint8_t traceStatus;
	uint8_t quality;
	uint8_t color;
	uint32_t type;
	float width;
	struct FUSION_LANE_TRACK_EST_ST curFunction;
};
struct FUSION_LANE_PRIMARY_TRA
{
	uint8_t id;
	uint8_t traceStatus;
	uint8_t quality;
	struct FUSION_LANE_TRACK_EST_ST curFunction;
};
struct FUSION_LANE_OUTPUT_ST
{
	double timestamp;
	uint32_t frameNum;
	float hostLaneWidth;//12-23 new
	float leftLaneWidth;//12-23 new
	float rightLaneWidth;//12-23 new
	struct FUSION_LANE_DATA_ST leftHostLane;
	struct FUSION_LANE_DATA_ST rightHostLane;
	struct FUSION_LANE_DATA_ST leftNeighborLane;
	struct FUSION_LANE_DATA_ST rightNeighborLane;
	struct FUSION_LANE_PRIMARY_TRA primaryObjTrajectory;
	uint32_t laneChangeStatus;

};
//***********************************vehicle dynamic****************************
struct COMVEHDYN_ST
{
	float AxSensor;
	float YrsSensor;
	float SasSensor;
	float WhlSpd_FL;
	bool WhlSpd_FL_Valid;
	float WhlSpd_FR;
	bool WhlSpd_FR_Valid;
	float WhlSpd_RL;
	bool WhlSpd_RL_Valid;
	float WhlSpd_RR;
	bool WhlSpd_RR_Valid;
	bool AxSensor_Valid;
	bool YrsSensor_Valid;
	bool SasSensor_Valid;
};

struct VEHSTATE_ST
{
	float YrsF;
	float AxSensorF;
	float StWheelAngleF;//wheel angle
	float vRef;
	float aRef;
	float AxSlope;
	bool AxSlopeValid;
	float Curvature;//ego curvature
};

struct FUSION_ROAD_EDGE_DATA_ST
{
	
	uint8_t quality;
	uint8_t reserved;
	uint16_t type;
	uint32_t id;
	uint32_t traceStatus;
	struct FUSION_LANE_TRACK_EST_ST curFunction;
};

struct FUSION_ROADEDGE_OUTPUT_ST
{
	double timestamp;
	uint32_t frameNum;
	uint32_t hostVehPos;
	struct FUSION_ROAD_EDGE_DATA_ST leftRoadEdge;
	struct FUSION_ROAD_EDGE_DATA_ST rightRoadEdge;
	uint8_t errorFlag;
	uint8_t detectedEdgeCnt;
};

struct ATS_TO_ST
{
	bool valid;
	uint8_t index;
	float dx;
	float dy;
	float vx;
	float vy;
	float ax;
	float vxAbs;
	float axAbs;
	uint8_t type;
	uint8_t motionSts;
};

#endif
