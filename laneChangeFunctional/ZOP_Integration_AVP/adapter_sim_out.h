#ifndef ADAPTER_SIM_OUT_H_
#define ADAPTER_SIM_OUT_H_
#include"outputs.h"


struct TAR_OBJ_ST_adapter
{
	float dis2EgoLaneCenter;
	float TTC_f;
	uint8_t ID_un8;
	uint8_t Index_un8;
	float probWithinLane_arr_f_0;
	float probWithinLane_arr_f_1;
	float probWithinLane_arr_f_2;
	float probWithinLane_arr_f_3;
	float probWithinLane_arr_f_4;
	float probCutIn_f;
	float probCutOut_f;
	float overlap_f;
	uint16_t trackingTimeWithinLane_un16;

};

struct TAR_OBJS_ST_adapter
{
	struct TAR_OBJ_ST_adapter lane0_tar_obj_0;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_1;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_2;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_3;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_4;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_5;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_6;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_7;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_8;
	struct TAR_OBJ_ST_adapter lane0_tar_obj_9;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_0;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_1;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_2;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_3;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_4;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_5;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_6;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_7;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_8;
	struct TAR_OBJ_ST_adapter lane1_tar_obj_9;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_0;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_1;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_2;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_3;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_4;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_5;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_6;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_7;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_8;
	struct TAR_OBJ_ST_adapter lane2_tar_obj_9;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_0;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_1;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_2;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_3;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_4;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_5;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_6;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_7;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_8;
	struct TAR_OBJ_ST_adapter lane3_tar_obj_9;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_0;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_1;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_2;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_3;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_4;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_5;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_6;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_7;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_8;
	struct TAR_OBJ_ST_adapter lane4_tar_obj_9;
};

struct SEGMENT_ST_adapter
{
	float coef_arr_f_0;
	float coef_arr_f_1;
	float coef_arr_f_2;
	float coef_arr_f_3;
	float dlowerLimit_f;
	float dupperLimit_f;
	uint8_t numOfSegment_un8;
	bool available_b;
	bool detectedByVideo_b;
	float quality_f;

};

struct SEGMENTS_ST_adapter
{
	struct SEGMENT_ST_adapter lane0_segment_0;
	struct SEGMENT_ST_adapter lane0_segment_1;
	struct SEGMENT_ST_adapter lane0_segment_2;
	struct SEGMENT_ST_adapter lane0_segment_3;
	struct SEGMENT_ST_adapter lane0_segment_4;
	struct SEGMENT_ST_adapter lane0_segment_5;
	struct SEGMENT_ST_adapter lane1_segment_0;
	struct SEGMENT_ST_adapter lane1_segment_1;
	struct SEGMENT_ST_adapter lane1_segment_2;
	struct SEGMENT_ST_adapter lane1_segment_3;
	struct SEGMENT_ST_adapter lane1_segment_4;
	struct SEGMENT_ST_adapter lane1_segment_5;
	struct SEGMENT_ST_adapter lane2_segment_0;
	struct SEGMENT_ST_adapter lane2_segment_1;
	struct SEGMENT_ST_adapter lane2_segment_2;
	struct SEGMENT_ST_adapter lane2_segment_3;
	struct SEGMENT_ST_adapter lane2_segment_4;
	struct SEGMENT_ST_adapter lane2_segment_5;
	struct SEGMENT_ST_adapter lane3_segment_0;
	struct SEGMENT_ST_adapter lane3_segment_1;
	struct SEGMENT_ST_adapter lane3_segment_2;
	struct SEGMENT_ST_adapter lane3_segment_3;
	struct SEGMENT_ST_adapter lane3_segment_4;
	struct SEGMENT_ST_adapter lane3_segment_5;
	struct SEGMENT_ST_adapter lane4_segment_0;
	struct SEGMENT_ST_adapter lane4_segment_1;
	struct SEGMENT_ST_adapter lane4_segment_2;
	struct SEGMENT_ST_adapter lane4_segment_3;
	struct SEGMENT_ST_adapter lane4_segment_4;
	struct SEGMENT_ST_adapter lane4_segment_5;
};



struct LANE_BAS_INFO_ST_adapter
{
	uint8_t objectNum_un8;
	bool available_b;
	float lane_dwidth_f;
	float front_lane_length_f;//new add
	float rear_lane_length_f;//new add
};

struct LANES_BAS_INFO_ST_adapter
{
	struct LANE_BAS_INFO_ST_adapter lane0_bas_info_st;
	struct LANE_BAS_INFO_ST_adapter lane1_bas_info_st;
	struct LANE_BAS_INFO_ST_adapter lane2_bas_info_st;
	struct LANE_BAS_INFO_ST_adapter lane3_bas_info_st;
	struct LANE_BAS_INFO_ST_adapter lane4_bas_info_st;
};





#endif
