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
#ifndef DEFINES_H_
#define DEFINES_H_
#include<float.h>

typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;


#define NULL_UN16 uint16_t(0)
#define NULL_UN32  uint32_t(0)
#define MAX_UN16 uint16_t(0xFFFF)
#define NULL_IN16 int16_t(0)
#define MIN_IN32 int32_t(-2147483648)
#define MAX_IN32 int32_t(2147483647)
#define MAX_UN8 uint8_t(0xFF)
#define MIN_UN8 uint8_t(0)
#define NULL_UN8 uint8_t(0)

#define NULL_F float(0)
#define NULL_DB float(0)
#define FLOAT_EPSILON float(FLT_EPSILON)
#define MAX_F float(FLT_MAX)
#define MIN_F -float(FLT_MAX)
#define PI float(3.1415926)

enum
{
	VSL_MAX_LANE_NUM = 3,
	VSL_LEFT_LANE = 0,
	VSL_MIDDLE_LANE = 1,
	VSL_RIGHT_LANE = 2,
	VSL_MAX_LINE_NUM = 4,
	VSL_LL_LINE = 0,
	VSL_L_LINE = 1,
	VSL_R_LINE = 2,
	VSL_RR_LINE = 3,
	VSL_DEBOUNCE_CYCLE_TIME_COUNTER = 100,
	LM_MAX_NUMBER_OF_LANE_SEGMENTS = 4,
	LM_MAX_NUMBER_OF_COURSE_LIMITS = 6,
	LM_START_NUMBER_OF_FRONT_COURSE_LIMITS = 2,
	LM_MAX_NUMBER_OF_LANES = 5,
	TARGET_OBJECT_NUM_WITHIN_LANE = 10,
	TOTAL_SEGMENT_NUM = 6,
	LEFT_LEFT_LANE = 0,
	LEFT_LANE = 1,
	MIDDLE_LANE = 2,
	RIGHT_LANE = 3,
	RIGHT_RIGHT_LANE = 4,
	LEFT_LEFT_LEFT_LINE = 0,
	LEFT_LEFT_LINE = 1,
	LEFT_LINE = 2,
	RIGHT_LINE = 3,
	RIGHT_RIGHT_LINE = 4,
	RIGHT_RIGHT_RIGHT_LINE = 5,
	LM_MAX_LINE_NUM = 6,
	TRAFFIC_DIRECTION_UNKNOWN = 0,
	TRAFFIC_DIRECTION_SYNCHRONOUS = 1,
	TRAFFIC_DIRECTION_ONCOMING = 2
};

enum LM_TYPE
{
	EGO_MOVEMENT_LANE_MODEL,
	OBJECT_TRACK_LANE_MODEL,
	VISION_LANE_MODEL,
	ROAD_EDGE_LANE_MODEL,
	MAP_LANE_MODEL,
	NUMBER_OF_LM_TYPES,
	INVALID_LM_TYPE
};

#endif
