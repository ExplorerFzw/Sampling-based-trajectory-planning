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

#ifndef OUTPUTS_H_
#define OUTPUTS_H_
#include"Inputs.h"

enum OUTPUTS
{
	MAX_TAR_OBJ_NUM_IN_LANE = 4,
	MAX_OBJ_NUM_4_HMI = 32,
	MAX_TAR_OBJ_NUM_IN_FRONT_LANE = 2,
	MAX_TAR_OBJ_NUM_IN_REAR_LANE = 2
};



struct TAR_OBJ_ST
{
	float dis2EgoLaneCenter;
	float TTC_f;
	uint8_t ID_un8;
	uint8_t Index_un8;
	float probWithinLane_arr_f[LM_MAX_NUMBER_OF_LANES];
	float probCutIn_f;
	float probCutOut_f;
	float overlap_f;
	float trackingTimeWithinLane_f;
	float dx;
	float dy;
};

//struct TAR_OBJ_ST_adapter
//{
//	float dis2EgoLaneCenter;
//	float TTC_f;
//	uint8_t ID_un8;
//	uint8_t Index_un8;
//	float probWithinLane_arr_f_0;
//	float probWithinLane_arr_f_1;
//	float probWithinLane_arr_f_2;
//	float probWithinLane_arr_f_3;
//	float probWithinLane_arr_f_4;
//	float probCutIn_f;
//	float probCutOut_f;
//	float overlap_f;
//	uint16_t trackingTimeWithinLane_f;
//	TAR_OBJ_ST_adapter() :
//		dis2EgoLaneCenter(MAX_F),
//		TTC_f(MAX_F),
//		ID_un8(0),
//		Index_un8(MAX_UN8),
//		probWithinLane_arr_f_0{ NULL_F},
//		probWithinLane_arr_f_1{ NULL_F },
//		probWithinLane_arr_f_2{ NULL_F },
//		probWithinLane_arr_f_3{ NULL_F },
//		probWithinLane_arr_f_4{ NULL_F },
//		probCutIn_f(NULL_F),
//		probCutOut_f(NULL_F),
//		overlap_f(NULL_F),
//		trackingTimeWithinLane_f(NULL_UN16)
//	{
//
//	}
//
//
//};

struct SEGMENT_ST
{
	float coef_arr_f[4];
	float dlowerLimit_f;
	float dupperLimit_f;
	uint8_t numOfSegment_un8;
	bool available_b;
	bool detectedByVideo_b;
	float quality_f;
};

//struct SEGMENT_ST_adapter
//{
//	float coef_arr_f_0;
//	float coef_arr_f_1;
//	float coef_arr_f_2;
//	float coef_arr_f_3;
//	float dlowerLimit_f;
//	float dupperLimit_f;
//	uint8_t numOfSegment_un8;
//	bool available_b;
//	bool detectedByVideo_b;
//	float quality_f;
//	SEGMENT_ST_adapter() :
//		coef_arr_f_0{ MAX_F },
//		coef_arr_f_1{ MAX_F },
//		coef_arr_f_2{ MAX_F },
//		coef_arr_f_3{ MAX_F },
//		dlowerLimit_f(MAX_F),
//		dupperLimit_f(MAX_F),
//		numOfSegment_un8(MAX_UN8),
//		available_b(false),
//		detectedByVideo_b(false),
//		quality_f(NULL_F)
//	{
//
//	}
//
//};

struct LANE_INFO_ST
{
	struct TAR_OBJ_ST ObjectList_st[TARGET_OBJECT_NUM_WITHIN_LANE];
	uint8_t objectNum_un8;
	bool available_b;
	float lane_dwidth_f;
	float front_lane_length_f;//new add
	float rear_lane_length_f;//new add
	struct SEGMENT_ST segments_st[TOTAL_SEGMENT_NUM];
};

//struct LANE_INFO_ST_adapter
//{
//	struct TAR_OBJ_ST_adapter ObjectList_st_0;
//	struct TAR_OBJ_ST_adapter ObjectList_st_1;
//	struct TAR_OBJ_ST_adapter ObjectList_st_2;
//	struct TAR_OBJ_ST_adapter ObjectList_st_3;
//	struct TAR_OBJ_ST_adapter ObjectList_st_4;
//	struct TAR_OBJ_ST_adapter ObjectList_st_5;
//	struct TAR_OBJ_ST_adapter ObjectList_st_6;
//	struct TAR_OBJ_ST_adapter ObjectList_st_7;
//	struct TAR_OBJ_ST_adapter ObjectList_st_8;
//	struct TAR_OBJ_ST_adapter ObjectList_st_9;
//	uint8_t objectNum_un8;
//	bool available_b;
//	float lane_dwidth_f;
//	float front_lane_length_f;//new add
//	float rear_lane_length_f;//new add
//	struct SEGMENT_ST_adapter segments_st_0;
//	struct SEGMENT_ST_adapter segments_st_1;
//	struct SEGMENT_ST_adapter segments_st_2;
//	struct SEGMENT_ST_adapter segments_st_3;
//	struct SEGMENT_ST_adapter segments_st_4;
//	struct SEGMENT_ST_adapter segments_st_5;
//	LANE_INFO_ST_adapter() :
//		ObjectList_st_0(),
//		ObjectList_st_1(),
//		ObjectList_st_2(),
//		ObjectList_st_3(),
//		ObjectList_st_4(),
//		ObjectList_st_5(),
//		ObjectList_st_6(),
//		ObjectList_st_7(),
//		ObjectList_st_8(),
//		ObjectList_st_9(),
//		objectNum_un8(NULL_UN8),
//		available_b(false),
//		lane_dwidth_f(MAX_F),
//		front_lane_length_f(MAX_F),
//		rear_lane_length_f(MAX_F),
//		segments_st_0(),
//		segments_st_1(),
//		segments_st_2(),
//		segments_st_3(),
//		segments_st_4(),
//		segments_st_5()
//	{
//
//	}
//};

struct LANE_MODEL_OUTPUT_ST
{
	uint8_t egoLaneID_un8;//ego vehicle lane:from left to right, the num of lane is 0, 1, 2, , 3, 4;
						  //0:Lane_0 1 : Lane_1 2 : Lane_2 3 : Lane_3 4 : Lane_4 255 : unknow
	struct LANE_INFO_ST lanes_st[LM_MAX_NUMBER_OF_LANES];
};

//struct LANE_MODEL_OUTPUT_ST_adapter
//{
//	uint8_t egoLaneID_un8;//ego vehicle lane:from left to right, the num of lane is 0, 1, 2, , 3, 4;
//						  //0:Lane_0 1 : Lane_1 2 : Lane_2 3 : Lane_3 4 : Lane_4 255 : unknow
//	struct LANE_INFO_ST_adapter lanes_st_0;
//	struct LANE_INFO_ST_adapter lanes_st_1;
//	struct LANE_INFO_ST_adapter lanes_st_2;
//	struct LANE_INFO_ST_adapter lanes_st_3;
//	struct LANE_INFO_ST_adapter lanes_st_4;
//	LANE_MODEL_OUTPUT_ST_adapter() :
//		egoLaneID_un8(3),// default:3 middle lane
//		lanes_st_0(),
//		lanes_st_1(),
//		lanes_st_2(),
//		lanes_st_3(),
//		lanes_st_4()
//	{
//
//	}
//};

struct HWA_TAR_OBJ_OUTPUT_ST
{
	struct TAR_OBJ_ST m_L_NeighborLane_TarObj_0_st;
	struct TAR_OBJ_ST m_L_NeighborLane_TarObj_1_st;
	struct TAR_OBJ_ST m_L_NeighborLane_TarObj_2_st;
	struct TAR_OBJ_ST m_L_NeighborLane_TarObj_3_st;
	struct TAR_OBJ_ST m_EgoLane_TarObj_0_st;
	struct TAR_OBJ_ST m_EgoLane_TarObj_1_st;
	struct TAR_OBJ_ST m_EgoLane_TarObj_2_st;
	struct TAR_OBJ_ST m_EgoLane_TarObj_3_st;
	struct TAR_OBJ_ST m_R_NeighborLane_TarObj_0_st;
	struct TAR_OBJ_ST m_R_NeighborLane_TarObj_1_st;
	struct TAR_OBJ_ST m_R_NeighborLane_TarObj_2_st;
	struct TAR_OBJ_ST m_R_NeighborLane_TarObj_3_st;
};

struct HWA_TAR_OBJ_ST
{
	struct TAR_OBJ_ST m_L_NeighborLane_TarObj_st[MAX_TAR_OBJ_NUM_IN_LANE];
	struct TAR_OBJ_ST m_R_NeighborLane_TarObj_st[MAX_TAR_OBJ_NUM_IN_LANE];
	struct TAR_OBJ_ST m_EgoLane_TarObj_st[MAX_TAR_OBJ_NUM_IN_LANE];
};
enum HMI_DISPLAY_OBJ_TYPE
{
	CLASS_DEFAULT = 0,
	CLASS_PEDESTRIAN = 1,
	CLASS_BIKE = 2,
	CLASS_CAR = 3,
	CLASS_TRUCK = 4,
	CLASS_TRAFFIC_CONE = 5,
	CLASS_WATER_HORSE = 6
};

enum  HMI_DISPLAY_OBJ_SPE_ATTR
{
	CLASS_SPE_DEFAULT = 0,
	CLASS_TRUCK_EVASION = 1,
	CLASS_ACC_FRONT_CAR = 2,
	CLASS_CUT_IN = 3,
	CLASS_OBSTACLE_ON_ADJACENT_LANE = 4
};
struct HMI_DISPLAY_OBJ_ATTR
{
	uint8_t object_ID;
	uint8_t obj_type;
	float dx;
	float dy;
	uint8_t obj_attr;
};
struct HMI_DISPLAY_OBJ
{
	uint8_t object_count;
	struct HMI_DISPLAY_OBJ_ATTR objects[MAX_OBJ_NUM_4_HMI];
};

struct HMI_DISPLAY_OBJ_adapter
{
	//uint8_t object_count;
	struct HMI_DISPLAY_OBJ_ATTR object_0;
	struct HMI_DISPLAY_OBJ_ATTR object_1;
	struct HMI_DISPLAY_OBJ_ATTR object_2;
	struct HMI_DISPLAY_OBJ_ATTR object_3;
	struct HMI_DISPLAY_OBJ_ATTR object_4;
	struct HMI_DISPLAY_OBJ_ATTR object_5;
	struct HMI_DISPLAY_OBJ_ATTR object_6;
	struct HMI_DISPLAY_OBJ_ATTR object_7;
	struct HMI_DISPLAY_OBJ_ATTR object_8;
	struct HMI_DISPLAY_OBJ_ATTR object_9;
	struct HMI_DISPLAY_OBJ_ATTR object_10;
	struct HMI_DISPLAY_OBJ_ATTR object_11;
	struct HMI_DISPLAY_OBJ_ATTR object_12;
	struct HMI_DISPLAY_OBJ_ATTR object_13;
	struct HMI_DISPLAY_OBJ_ATTR object_14;
	struct HMI_DISPLAY_OBJ_ATTR object_15;
	struct HMI_DISPLAY_OBJ_ATTR object_16;
	struct HMI_DISPLAY_OBJ_ATTR object_17;
	struct HMI_DISPLAY_OBJ_ATTR object_18;
	struct HMI_DISPLAY_OBJ_ATTR object_19;
	struct HMI_DISPLAY_OBJ_ATTR object_20;
	struct HMI_DISPLAY_OBJ_ATTR object_21;
	struct HMI_DISPLAY_OBJ_ATTR object_22;
	struct HMI_DISPLAY_OBJ_ATTR object_23;
	struct HMI_DISPLAY_OBJ_ATTR object_24;
	struct HMI_DISPLAY_OBJ_ATTR object_25;
	struct HMI_DISPLAY_OBJ_ATTR object_26;
	struct HMI_DISPLAY_OBJ_ATTR object_27;
	struct HMI_DISPLAY_OBJ_ATTR object_28;
	struct HMI_DISPLAY_OBJ_ATTR object_29;
	struct HMI_DISPLAY_OBJ_ATTR object_30;
	struct HMI_DISPLAY_OBJ_ATTR object_31;
};
#endif
