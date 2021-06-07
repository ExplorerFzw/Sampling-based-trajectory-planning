#include "LM_BASE.h"

LM_BASE::LM_BASE() :
    m_lm_type_en(INVALID_LM_TYPE),
	m_lanes_general_info_st()
{
	Init();//Reset the lane model results
}
LM_BASE::LM_BASE(const LM_TYPE f_lm_type_un) :
    m_lm_type_en(f_lm_type_un),
	m_lanes_general_info_st()
{
	Init();//Reset the lane model results
}


void LM_BASE::Init()
{
	Init_FrontLane_v();
	Init_RearLane_v();
}

void LM_BASE::Init_FrontLane_v()
{
	m_lanes_general_info_st.available_b = false;
	for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
	{
		m_lanes_general_info_st.lane_general_info_st[t_lane].available_b = false;
		m_lanes_general_info_st.lane_general_info_st[t_lane].width_f = NULL_F;
		for (uint8_t t_course = LM_START_NUMBER_OF_FRONT_COURSE_LIMITS; t_course < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_course++)
		{
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].available_b = false;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dlowerLimit_f = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f = NULL_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].detectedByVideo_b = false;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].quality_f = NULL_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].numOfSegment_un8 = MAX_UN8;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[0] = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[1] = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[2] = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[3] = MAX_F;
		}

	}
}
void LM_BASE::Init_RearLane_v()
{
	for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
	{
		m_lanes_general_info_st.lane_general_info_st[t_lane].available_b = false;
		m_lanes_general_info_st.lane_general_info_st[t_lane].width_f = NULL_F;
		for (uint8_t t_course = 0; t_course < LM_START_NUMBER_OF_FRONT_COURSE_LIMITS; t_course++)
		{
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].available_b = false;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dlowerLimit_f = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f = NULL_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].detectedByVideo_b = false;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].quality_f = NULL_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].numOfSegment_un8 = MAX_UN8;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[0] = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[1] = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[2] = MAX_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[3] = MAX_F;
		}

	}
}

LANES_GENERAL_INFO_ST& LM_BASE::GetLanesGeneralInfo_st()
{
	return m_lanes_general_info_st;
}
