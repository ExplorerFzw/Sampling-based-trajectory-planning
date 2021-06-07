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

#ifndef LM_COMMON_DEFINES_H_
#define LM_COMMON_DEFINES_H_
#include"Inputs.h"
#include"Outputs.h"
#include<math.h>


//*******************************VSL****************************
#define LM_MAX_FRONT_RANGE float(120.0)
#define LM_MAX_REAR_RANGE  -float(80.0)
#define LM_MAX_LANE_WIDTH float(4.5)
#define LM_MIN_LANE_WIDTH float(2.8)



struct LM_GENERAL_LIMITS_ST {
	float			m_d_lower_limit_f[LM_MAX_NUMBER_OF_COURSE_LIMITS];//start of the general segments (x-direction) [m]
	float			m_d_upper_limit_f[LM_MAX_NUMBER_OF_COURSE_LIMITS];//end of the general segments (x-direction) [m]

};

struct LM_LANE_ST {
	uint8_t			    m_id_un8;//unique lane identifier
	uint8_t             m_driving_direction_un8;//traffic driving direction
	float               m_d_std_left_border_f[LM_MAX_NUMBER_OF_LANE_SEGMENTS]; //overall standard deviation of the left lane border dy estimation(bordersand course deviation)[m]
	float               m_d_std_right_border_f[LM_MAX_NUMBER_OF_LANE_SEGMENTS];//overall standard deviation of the right lane border dy estimation (borders and course deviation) [m]
	float               m_q_model_conformity_f[LM_MAX_NUMBER_OF_LANE_SEGMENTS];//comformity of the estimated lane segment with the lane model founding hypothesis
	float               m_d_left_border_f[LM_MAX_NUMBER_OF_LANE_SEGMENTS];//lateral position of the left lane border for x = 0
	float               m_d_right_border_f[LM_MAX_NUMBER_OF_LANE_SEGMENTS];//lateral position of the left lane border for x = 0 [m]
	uint8_t             m_type_left_border_un8[LM_MAX_NUMBER_OF_LANE_SEGMENTS];
	uint8_t             m_type_right_border_un8[LM_MAX_NUMBER_OF_LANE_SEGMENTS];
};

struct LM_COURSE_ST {
	float        m_a3_polynom_coef_f;//a3 coefficient of the polynom modelling the course segment  y = a3*x^3 + a2*x^2 + a1*x + a0
	float        m_a2_polynom_coef_f;//a2 coefficient of the polynom modelling the course segment  
	float        m_a1_polynom_coef_f;//a1 coefficient of the polynom modelling the course segment
	float        m_a0_polynom_coef_f;//a0 coefficient of the polynom modelling the course segment
	float        m_model_conformity_f;//comformity of the estimated course segment with the lane model founding hypothesis
	float        m_std_dev_f;//quality of the course segment estimation
};

struct PARALLEL_LANES_ST {
	struct LM_COURSE_ST     m_course_st[LM_MAX_NUMBER_OF_COURSE_LIMITS];//course of the lanes. Under the hypothesis ï¿½parallel lanesï¿? the course applies to all lanes
	struct LM_LANE_ST		m_lanes_st[LM_MAX_NUMBER_OF_LANES];//description of the lanes
	float					m_d_lower_limit_lane_f[LM_MAX_NUMBER_OF_LANE_SEGMENTS];//start of the lane segments (x-direction) [m]
	float				    m_d_upper_limit_lane_f[LM_MAX_NUMBER_OF_LANE_SEGMENTS];//end of the lane segments (x-direction) [m]
};


struct VISION_LANE_INFO_ST
{
	double timestamp;
	uint32_t frameNum;
	float hostLaneWidth;//12-23 new
	float leftLaneWidth;//12-23 new
	float rightLaneWidth;//12-23 new
	struct FUSION_LANE_DATA_ST lines_st_arr[VSL_MAX_LINE_NUM];//0-LL_Line,1-L_Line,2-R_Line, 3-RR_Line
	uint32_t laneChangeStatus;
};

struct VEHICLE_MOVEMENT_ST
{
	float deltaDx;
	float deltaDy;
	float deltaDyaw;
};

struct LANE_GENERAL_INFO_ST
{
	struct SEGMENT_ST segments_st[TOTAL_SEGMENT_NUM];
	bool available_b;
	float width_f;
	float front_length_f;
	float rear_length_f;


};

struct LANES_GENERAL_INFO_ST
{
	struct LANE_GENERAL_INFO_ST lane_general_info_st[VSL_MAX_LANE_NUM];
	bool available_b;

};

struct OBJECT_LIST_BY_BC_CHECK
{
	uint8_t id[FUS_MAX_OBJ_NUM];
	bool valid_b[FUS_MAX_OBJ_NUM];
	uint16_t trackTime[FUS_MAX_OBJ_NUM];
};

struct LM_GENERAL_LIMIT_ST
{
	float m_d_lower_limit_f[LM_MAX_NUMBER_OF_COURSE_LIMITS];
	float m_d_upper_limit_f[LM_MAX_NUMBER_OF_COURSE_LIMITS];

};

struct TOS_OBJ_PROB_WITHIN_LANE
{
	bool m_valid[FUS_MAX_OBJ_NUM];
	uint8_t m_obj_list_index_un8[FUS_MAX_OBJ_NUM];// ascending order depends on dx
	struct TAR_OBJ_ST m_tarObj_arr_st[FUS_MAX_OBJ_NUM];
	uint8_t m_withinLaneId[FUS_MAX_OBJ_NUM];
};

struct PROB_EGO_VEHICLE_WITHIN_LANE_ST
{
	uint8_t m_egoLaneId;
	float m_prob_ego_vehicle_within_Lane[LM_MAX_NUMBER_OF_LANES];
};

enum TOS_NRA_ENUM
{
	SINGLESIDE_NRA = true,
	ACTIVENRAMINCOUNT = 50
};
struct NRA_INFO_ST
{
	bool leftNRAActive_b;
	bool rightNRAActive_b;
	uint8_t m_countLeftNRA;
	uint8_t m_countRightNRA;
	float d2LeftRE;
	float d2RightRE;
	float l_c0;
	float l_c1;
	float l_c2;
	uint16_t l_line_type;
	float l_start_x0;
	float l_end_x0;
	float r_c0;
	float r_c1;
	float r_c2;
	uint16_t r_line_type;
	float r_start_x0;
	float r_end_x0;
};

struct TRUCK_EVASION_TAR_OBJ
{
	bool available_b;
	uint8_t index;
	uint8_t id;
	float dx;
	float dy;
	float vx;
	float vy;
};


enum {
	MAX_NUM_OF_RECORD_REAR_POINTS = 40,
	MAX_DEBOUNCE_NUM_OF_NEW_START = 60,
	MIN_POINT_NUM_4_FIT = 13
};


struct BEST_LINE_FROM_VISION_ST
{
	uint8_t m_line_id_un8;
	bool m_detectedByVideo_b;
	float m_coeff_f[4];
	float m_lane_width[3];
	float m_length_f;
};

struct LM_POINTF
{
	float dx_f;
	float dy_f;
	bool used_b;
};
struct REAR_POINT_BUFFER_ST
{
	struct LM_POINTF m_point[MAX_NUM_OF_RECORD_REAR_POINTS];
	uint8_t m_firstValidIndex_un8;
	uint8_t m_num4ZeroSegment_un8;
	uint8_t m_num4FirstSegment_un8;
};


//#define STORE1TIME10CYCLETIME 10
#define VEHMOVBUFFER ((uint8_t) 40)

struct VEHMOVBUFFINFO_ST
{
	float m_value[VEHMOVBUFFER];
	uint8_t m_count;
	uint8_t m_firstIndex;
	uint8_t m_lastIndex;
};

struct POINT_X
{
	float y;
	float x;
};
struct COEFF
{
	float c0;
	float c1;
	float c2;
	float c3;
};

extern float g_cycleTime_s_f;
//***********************************************************************************************
inline float GetEgoVehicleWidth_f()
{
	return 1.919;//TODO change to real value
}
inline float GetEgoVehicleFrontBumper_f()
{
	return 3.739;//TODO change to real value
}
inline float GetEgoVehicleRearBumper_f()
{
	return 0.939;//TODO change to real value
}
inline void SetCycleTime_s(float t_cycleTime)
{
	g_cycleTime_s_f = t_cycleTime;
}
inline float GetCycleTime_s()
{
	return g_cycleTime_s_f;
}
#endif
