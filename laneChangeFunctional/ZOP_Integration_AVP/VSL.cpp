#include "VSL.h"
#include"LMMathLib.h"
#include"LMCommonDefines.h"
#include"DrivingManeuver.h"



VSL::VSL():
m_best_line_info_st(),
m_rearPointsBuf_st(),
m_lanes_general_info_st(),
m_debounce4LLane_f(NULL_F),
m_debounce4MLane_f(NULL_F),
m_debounce4RLane_f(NULL_F),
m_debounce4NewStart_un8(NULL_UN8),
m_debounce4Segments_arr()
{

}
//VSL::VSL(const LM_TYPE f_lm_type_un):
//m_best_line_info_st(),
//m_rearPointsBuf_st(),
//m_debounce4LLane_f(NULL_F),
//m_debounce4MLane_f(NULL_F),
//m_debounce4RLane_f(NULL_F),
//m_debounce4NewStart_un8(NULL_UN8),
//m_debounce4Segments_arr()
//{
//
//}

void VSL::Init()
{
	Init_FrontLane_v();
	Init_RearLane_v();
}

void VSL::Init_FrontLane_v()
{

	m_debounce4LLane_f = (NULL_F);
	m_debounce4MLane_f = (NULL_F);
	m_debounce4RLane_f = (NULL_F);
	m_debounce4NewStart_un8 = (NULL_UN8);
	m_lanes_general_info_st.available_b = false;
	m_best_line_info_st.m_coeff_f[0] = MAX_F;
	m_best_line_info_st.m_coeff_f[1] = MAX_F;
	m_best_line_info_st.m_coeff_f[2] = MAX_F;
	m_best_line_info_st.m_coeff_f[3] = MAX_F;
	m_best_line_info_st.m_detectedByVideo_b = false;
	m_best_line_info_st.m_lane_width[0] = NULL_F;
	m_best_line_info_st.m_lane_width[1] = NULL_F;
	m_best_line_info_st.m_lane_width[2] = NULL_F;
	m_best_line_info_st.m_length_f = NULL_F;
	m_best_line_info_st.m_line_id_un8 = MAX_UN8;
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
			m_debounce4Segments_arr[t_course] = NULL_F;
		}

	}
}
void VSL::Init_RearLane_v()
{
	for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
	{
		//m_lanes_general_info_st.lane_general_info_st[t_lane].available_b = false;
		//m_lanes_general_info_st.lane_general_info_st[t_lane].width_f = NULL_F;
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
			m_debounce4Segments_arr[t_course] = NULL_F;
		}

	}
}
void VSL::Init_RearPointsBuff()
{
	m_rearPointsBuf_st.m_firstValidIndex_un8 = NULL_UN8;
	m_rearPointsBuf_st.m_num4FirstSegment_un8 = NULL_UN8;
	m_rearPointsBuf_st.m_num4ZeroSegment_un8 = NULL_UN8;
	for (uint8_t t_i = 0; t_i < MAX_NUM_OF_RECORD_REAR_POINTS; t_i++)
	{
		m_rearPointsBuf_st.m_point[t_i].dx_f = NULL_F;
		m_rearPointsBuf_st.m_point[t_i].dy_f = NULL_F;
		m_rearPointsBuf_st.m_point[t_i].used_b = false;

	}
	
}
void VSL::Calc_v(LM_GENERAL_LIMIT_ST& inputLimits_pst, VISION_LANE_INFO_ST& vision_lane_info_st, VEHSTATE_ST& veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st, uint8_t t_curDMState, uint8_t t_DMStateK1)
{
	findTheBestLine(inputLimits_pst, vision_lane_info_st, veh_state, t_vehMovement_st);
	StoreRearPointsCalc_V(inputLimits_pst, vision_lane_info_st, veh_state, t_vehMovement_st, t_curDMState, t_DMStateK1);
	frontLaneModelCalc_v(inputLimits_pst, vision_lane_info_st, veh_state, t_vehMovement_st);
	rearLaneModelCalc(inputLimits_pst, vision_lane_info_st, veh_state, t_vehMovement_st, t_curDMState, t_DMStateK1);
}

void VSL::findTheBestLine(LM_GENERAL_LIMIT_ST& inputLimits_pst, VISION_LANE_INFO_ST& vision_lane_info_st, VEHSTATE_ST& veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	uint8_t const t_line_num = VSL_MAX_LINE_NUM;
	uint8_t t_line_length_order[t_line_num];
	float t_length_f = 0, t_tem = 0, t_line_length[t_line_num];
	for (uint8_t t_i = 0; t_i < t_line_num; t_i++)
	{
		t_line_length_order[t_i] = MAX_UN8;
		t_line_length[t_i] = 0;
	}

	for (uint8_t t_i = 0; t_i < t_line_num; t_i++)
	{
		if ((MEASUREMENT == vision_lane_info_st.lines_st_arr[t_i].traceStatus) ||
			(PREDICTED == vision_lane_info_st.lines_st_arr[t_i].traceStatus))
		{
			t_line_length[t_i] = vision_lane_info_st.lines_st_arr[t_i].curFunction.longDistanceToend;
		}
		else
		{
			t_line_length[t_i] = 0;
		}
	}
	float t_tem_length = MAX_F;
	uint8_t t_indexOfLonger = MAX_UN8;
	// order
	//t_line_length_order[0] = 0;// default value:first line is the longest one
	for (uint8_t t_i = 0; t_i < t_line_num - 1; t_i++)
	{
		t_indexOfLonger = 0;
		for (uint8_t t_j = t_i + 1; t_j < t_line_num; t_j++)
		{
			if (t_line_length[t_indexOfLonger] < t_line_length[t_j])
			{
				t_indexOfLonger = t_j;
			}
			
		}
		if (t_line_length[t_indexOfLonger] <= P_MinLengthOfAvailableLine_F)
		{
			break;//
		}
		else
		{
			t_line_length_order[t_i] = t_indexOfLonger;
			t_line_length[t_indexOfLonger] = MIN_F;
		}
		
	}
	// find the best line with higher length and higher quality
	bool t_no_find_b = true;
	bool t_longer_length_with_low_quality_b = false;
	m_best_line_info_st.m_line_id_un8 = MAX_UN8;// init
	for (uint8_t t_i = 0; (t_i < t_line_num) && t_no_find_b; t_i++)
	{
		uint8_t t_tem = t_line_length_order[t_i];
		if ((t_line_length_order[t_i] < 4) &&
			((VISION_LINE_MIDDLE_HIGH == vision_lane_info_st.lines_st_arr[t_tem].quality) ||
				(VISION_LINE_HIGH == vision_lane_info_st.lines_st_arr[t_tem].quality))
			)
		{
			m_best_line_info_st.m_line_id_un8 = t_tem;
			m_best_line_info_st.m_length_f = vision_lane_info_st.lines_st_arr[t_tem].curFunction.longDistanceToend;
			m_best_line_info_st.m_coeff_f[0] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceZeroOrderCoeff;
			m_best_line_info_st.m_coeff_f[1] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceFirstOrderCoeff;
			m_best_line_info_st.m_coeff_f[2] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceSecondOrderCoeff;
			m_best_line_info_st.m_coeff_f[3] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceThirdOrderCoeff;
			t_no_find_b = false;
		}
		else//case: all the line with low quality
		{
			if ((0 == t_i) && (MAX_UN8 != t_line_length_order[0]))
			{
				m_best_line_info_st.m_line_id_un8 = t_tem;
				m_best_line_info_st.m_length_f = vision_lane_info_st.lines_st_arr[t_tem].curFunction.longDistanceToend;
				m_best_line_info_st.m_coeff_f[0] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceZeroOrderCoeff;
				m_best_line_info_st.m_coeff_f[1] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceFirstOrderCoeff;
				m_best_line_info_st.m_coeff_f[2] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceSecondOrderCoeff;
				m_best_line_info_st.m_coeff_f[3] = vision_lane_info_st.lines_st_arr[t_tem].curFunction.latDistanceThirdOrderCoeff;
			}
			else
			{
				//nothing
			}

		}
	}

	// no line available

	//************************calc lane width********************************
	float t_lane_width_f = 0;
	float t_max_lane_width = LM_MAX_LANE_WIDTH;
	float t_min_lane_width = LM_MIN_LANE_WIDTH;
	//for (uint8_t t_i = 0; t_i < VSL_MAX_LANE_NUM; t_i++)
	{

		//middle lane width
		if ((vision_lane_info_st.hostLaneWidth > 2.1) && (vision_lane_info_st.hostLaneWidth < 5))
		{
			// ego lane width 
			t_lane_width_f = vision_lane_info_st.hostLaneWidth;
			t_lane_width_f = MAX_TP(t_lane_width_f, t_min_lane_width);
			t_lane_width_f = MIN_TP(t_lane_width_f, t_max_lane_width);
			m_best_line_info_st.m_lane_width[1] = t_lane_width_f;

			if (m_debounce4MLane_f < 1)
			{
				m_debounce4MLane_f = 0;
			}
			else
			{
				m_debounce4MLane_f = m_debounce4MLane_f - veh_state.vRef * GetCycleTime_s();
			}
		}
		else
		{
			if (m_best_line_info_st.m_lane_width[1] + FLOAT_EPSILON >= t_min_lane_width)// last cycle exist
			{
				if (m_debounce4MLane_f < MAX_DEBOUNCE_DIS_OF_VSL)
				{
					m_debounce4MLane_f += veh_state.vRef * GetCycleTime_s();
				}
				else
				{
					m_debounce4MLane_f = MAX_DEBOUNCE_DIS_OF_VSL;
					m_best_line_info_st.m_lane_width[1] = 0;
				}

			}


		}
		//left lane width
		if (((MEASUREMENT == vision_lane_info_st.lines_st_arr[0].traceStatus) || (VISION_LINE_MIDDLE_HIGH <= vision_lane_info_st.lines_st_arr[0].quality)) &&
			((MEASUREMENT == vision_lane_info_st.lines_st_arr[1].traceStatus) || (VISION_LINE_MIDDLE_HIGH <= vision_lane_info_st.lines_st_arr[1].quality)))
		{
			t_lane_width_f = vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceZeroOrderCoeff - vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceZeroOrderCoeff;
			if ((m_best_line_info_st.m_lane_width[0] >= t_min_lane_width) && //first time
				(m_best_line_info_st.m_lane_width[0] <= t_max_lane_width))
			{
				t_lane_width_f = 0.5 * (m_best_line_info_st.m_lane_width[0] + t_lane_width_f);
			}
			t_lane_width_f = MAX_TP(t_lane_width_f, t_min_lane_width);
			t_lane_width_f = MIN_TP(t_lane_width_f, t_max_lane_width);
			m_best_line_info_st.m_lane_width[0] = t_lane_width_f;

			if (m_debounce4LLane_f < 1)
			{
				m_debounce4LLane_f = 0;
			}
			else
			{
				m_debounce4LLane_f = m_debounce4LLane_f - veh_state.vRef * GetCycleTime_s();
			}
		}
		else if ((MEASUREMENT == vision_lane_info_st.lines_st_arr[0].traceStatus) || (VISION_LINE_MIDDLE_HIGH <= vision_lane_info_st.lines_st_arr[0].quality))
		{
			t_lane_width_f = vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceZeroOrderCoeff - 0.5 * m_best_line_info_st.m_lane_width[1];
			if ((m_best_line_info_st.m_lane_width[0] >= t_min_lane_width - 0.5) && //first time
				(m_best_line_info_st.m_lane_width[0] <= t_max_lane_width + 0.5))
			{
				t_lane_width_f = 0.5 * (m_best_line_info_st.m_lane_width[0] + t_lane_width_f);
			}
			t_lane_width_f = MAX_TP(t_lane_width_f, t_min_lane_width);
			t_lane_width_f = MIN_TP(t_lane_width_f, t_max_lane_width);
			m_best_line_info_st.m_lane_width[0] = t_lane_width_f;

			if (m_debounce4LLane_f < 1)
			{
				m_debounce4LLane_f = 0;
			}
			else
			{
				m_debounce4LLane_f = m_debounce4LLane_f - veh_state.vRef * GetCycleTime_s();
			}
		}
		else
		{
			if (m_best_line_info_st.m_lane_width[0] + FLOAT_EPSILON >= t_min_lane_width)// last cycle exist
			{
				if (m_debounce4LLane_f < MAX_DEBOUNCE_DIS_OF_VSL)
				{
					m_debounce4LLane_f += veh_state.vRef * GetCycleTime_s();
				}
				else
				{
					m_debounce4LLane_f = MAX_DEBOUNCE_DIS_OF_VSL;
					m_best_line_info_st.m_lane_width[0] = 0;
				}

			}


		}

		//right lane width
		if (((MEASUREMENT == vision_lane_info_st.lines_st_arr[2].traceStatus) || (VISION_LINE_MIDDLE_HIGH <= vision_lane_info_st.lines_st_arr[2].quality)) &&
			((MEASUREMENT == vision_lane_info_st.lines_st_arr[3].traceStatus) || (VISION_LINE_MIDDLE_HIGH <= vision_lane_info_st.lines_st_arr[3].quality)))
		{
			t_lane_width_f = vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceZeroOrderCoeff - vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceZeroOrderCoeff;
			if ((m_best_line_info_st.m_lane_width[2] >= t_min_lane_width) && //first time
				(m_best_line_info_st.m_lane_width[2] <= t_max_lane_width))
			{
				t_lane_width_f = 0.5 * (m_best_line_info_st.m_lane_width[2] + t_lane_width_f);
			}
			t_lane_width_f = MAX_TP(t_lane_width_f, t_min_lane_width);
			t_lane_width_f = MIN_TP(t_lane_width_f, t_max_lane_width);
			m_best_line_info_st.m_lane_width[2] = t_lane_width_f;

			if (m_debounce4RLane_f < 1)
			{
				m_debounce4RLane_f = 0;
			}
			else
			{
				m_debounce4RLane_f = m_debounce4RLane_f - veh_state.vRef * GetCycleTime_s();
			}
		}
		else if ((MEASUREMENT == vision_lane_info_st.lines_st_arr[3].traceStatus) || (VISION_LINE_MIDDLE_HIGH <= vision_lane_info_st.lines_st_arr[3].quality))
		{
			t_lane_width_f = -vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceZeroOrderCoeff - 0.5 * m_best_line_info_st.m_lane_width[1];
			if ((m_best_line_info_st.m_lane_width[2] >= t_min_lane_width) && //first time
				(m_best_line_info_st.m_lane_width[2] <= t_max_lane_width))
			{
				t_lane_width_f = 0.5 * (m_best_line_info_st.m_lane_width[2] + t_lane_width_f);
			}
			t_lane_width_f = MAX_TP(t_lane_width_f, t_min_lane_width);
			t_lane_width_f = MIN_TP(t_lane_width_f, t_max_lane_width);
			m_best_line_info_st.m_lane_width[2] = t_lane_width_f;

			if (m_debounce4RLane_f < 1)
			{
				m_debounce4RLane_f = 0;
			}
			else
			{
				m_debounce4RLane_f = m_debounce4RLane_f - veh_state.vRef * GetCycleTime_s();
			}
		}
		else
		{

			if (m_best_line_info_st.m_lane_width[2] + FLOAT_EPSILON >= t_min_lane_width)// last cycle exist
			{
				if (m_debounce4RLane_f < MAX_DEBOUNCE_DIS_OF_VSL)
				{
					m_debounce4RLane_f += veh_state.vRef * GetCycleTime_s();
				}
				else
				{
					m_debounce4RLane_f = MAX_DEBOUNCE_DIS_OF_VSL;
					m_best_line_info_st.m_lane_width[2] = 0;
				}

			}
		}

	}

	if ((MEASUREMENT == vision_lane_info_st.lines_st_arr[0].traceStatus)
		||(MEASUREMENT == vision_lane_info_st.lines_st_arr[1].traceStatus)
		||(MEASUREMENT == vision_lane_info_st.lines_st_arr[2].traceStatus)
		||(MEASUREMENT == vision_lane_info_st.lines_st_arr[3].traceStatus)
		)
	{
		m_best_line_info_st.m_detectedByVideo_b = true;
	}
	else
	{
		m_best_line_info_st.m_detectedByVideo_b = false;
	}

}

void VSL::frontLaneModelCalc_v(LM_GENERAL_LIMIT_ST& inputLimits_pst, VISION_LANE_INFO_ST& vision_lane_info_st, VEHSTATE_ST& veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	uint8_t const t_bestLineNum = m_best_line_info_st.m_line_id_un8;
	float t_lane_length_f = 0;

	if (t_bestLineNum < VSL_MAX_LINE_NUM)// valid
	{
		float t_Lane_coeff_c0[VSL_MAX_LANE_NUM];
		for (uint8_t t_i = 0; t_i < VSL_MAX_LANE_NUM; t_i++)
		{
			t_Lane_coeff_c0[t_i] = 0;

		}
		m_lanes_general_info_st.available_b = true;
		// calc left line coeff c0
		switch (m_best_line_info_st.m_line_id_un8)
		{
		case 0:
			t_Lane_coeff_c0[0] = m_best_line_info_st.m_coeff_f[0];
			t_Lane_coeff_c0[1] = m_best_line_info_st.m_coeff_f[0] - m_best_line_info_st.m_lane_width[0];
			t_Lane_coeff_c0[2] = m_best_line_info_st.m_coeff_f[0] - m_best_line_info_st.m_lane_width[0] - m_best_line_info_st.m_lane_width[1];
			break;
		case 1:
			t_Lane_coeff_c0[0] = m_best_line_info_st.m_coeff_f[0] + m_best_line_info_st.m_lane_width[0];
			t_Lane_coeff_c0[1] = m_best_line_info_st.m_coeff_f[0];
			t_Lane_coeff_c0[2] = m_best_line_info_st.m_coeff_f[0] - m_best_line_info_st.m_lane_width[1];
			break;
		case 2:
			t_Lane_coeff_c0[0] = m_best_line_info_st.m_coeff_f[0] + m_best_line_info_st.m_lane_width[0] + m_best_line_info_st.m_lane_width[1];
			t_Lane_coeff_c0[1] = m_best_line_info_st.m_coeff_f[0] + m_best_line_info_st.m_lane_width[1];
			t_Lane_coeff_c0[2] = m_best_line_info_st.m_coeff_f[0];
			break;
		case 3:
			t_Lane_coeff_c0[0] = m_best_line_info_st.m_coeff_f[0] + m_best_line_info_st.m_lane_width[0] + m_best_line_info_st.m_lane_width[1] + m_best_line_info_st.m_lane_width[2];
			t_Lane_coeff_c0[1] = m_best_line_info_st.m_coeff_f[0] + m_best_line_info_st.m_lane_width[1] + m_best_line_info_st.m_lane_width[2];
			t_Lane_coeff_c0[2] = m_best_line_info_st.m_coeff_f[0] + m_best_line_info_st.m_lane_width[2];
			break;
		default:
			t_Lane_coeff_c0[0] = NULL_F;
			t_Lane_coeff_c0[1] = NULL_F;
			t_Lane_coeff_c0[2] = NULL_F;
			break;
		}


		for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
		{
			t_lane_length_f = NULL_F;
			m_lanes_general_info_st.lane_general_info_st[t_lane].available_b = true;
			m_lanes_general_info_st.lane_general_info_st[t_lane].width_f = m_best_line_info_st.m_lane_width[t_lane];
			for (uint8_t t_course = LM_START_NUMBER_OF_FRONT_COURSE_LIMITS; t_course < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_course++)
			{
				if (inputLimits_pst.m_d_lower_limit_f[t_course] < m_best_line_info_st.m_length_f)//vision_lane_info_st.lines_st_arr[t_lane].curFunction.longDistanceToend)
				{
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].available_b = true;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dlowerLimit_f = inputLimits_pst.m_d_lower_limit_f[t_course];
					//m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f = inputLimits_pst.m_d_upper_limit_f[t_course];
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].detectedByVideo_b = m_best_line_info_st.m_detectedByVideo_b;

					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].quality_f = vision_lane_info_st.lines_st_arr[m_best_line_info_st.m_line_id_un8].quality;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].numOfSegment_un8 = t_course;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[0] = t_Lane_coeff_c0[t_lane];
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[1] = m_best_line_info_st.m_coeff_f[1];
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[2] = m_best_line_info_st.m_coeff_f[2];
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[3] = m_best_line_info_st.m_coeff_f[3];
					if (m_debounce4Segments_arr[t_course] < P_MAX_IGNORE_DIS_OF_SEGMENT_RECOVERY)
					{
						m_debounce4Segments_arr[t_course] = NULL_F;
						m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f = inputLimits_pst.m_d_upper_limit_f[t_course];
					}
					else
					{
						m_debounce4Segments_arr[t_course] = m_debounce4Segments_arr[t_course] - veh_state.vRef * GetCycleTime_s()* P_RECOVERY_FACTOR;// fast recovery
						m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f += veh_state.vRef * GetCycleTime_s() * P_RECOVERY_FACTOR;
						if (m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f > inputLimits_pst.m_d_upper_limit_f[t_course])
						{
							m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f = inputLimits_pst.m_d_upper_limit_f[t_course];
						}
						else
						{
							// keeping
						}
					}
					t_lane_length_f = m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f;
					
				}
				else if ((m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].available_b)//last cycle it is available
					&&(m_debounce4Segments_arr[t_course] < P_MAX_DEBOUNCE_DIS_OF_SEGMENT)
					)
				{
					if (m_debounce4Segments_arr[t_course] < P_MAX_DEBOUNCE_DIS_OF_SEGMENT)
					{
						m_debounce4Segments_arr[t_course] += veh_state.vRef * GetCycleTime_s();
					}
					else
					{
						m_debounce4Segments_arr[t_course] = P_MAX_DEBOUNCE_DIS_OF_SEGMENT;
					}
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dlowerLimit_f = inputLimits_pst.m_d_lower_limit_f[t_course];
					if (m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f - m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dlowerLimit_f > m_debounce4Segments_arr[t_course])
					{
						m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f = inputLimits_pst.m_d_upper_limit_f[t_course] - m_debounce4Segments_arr[t_course];
						m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].available_b = true;
					}
					else
					{
						m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f = inputLimits_pst.m_d_lower_limit_f[t_course];
						m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].available_b = false;
					}
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].detectedByVideo_b = m_best_line_info_st.m_detectedByVideo_b;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].quality_f = vision_lane_info_st.lines_st_arr[m_best_line_info_st.m_line_id_un8].quality;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].numOfSegment_un8 = t_course;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[0] = VSL_FILT_FACTOR*t_Lane_coeff_c0[t_lane] + (1 - VSL_FILT_FACTOR)* m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[0];
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[1] = VSL_FILT_FACTOR * m_best_line_info_st.m_coeff_f[1] + (1 - VSL_FILT_FACTOR)* m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[1];
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[2] = VSL_FILT_FACTOR * m_best_line_info_st.m_coeff_f[2] + (1 - VSL_FILT_FACTOR)* m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[2];
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[3] = VSL_FILT_FACTOR * m_best_line_info_st.m_coeff_f[3] + (1 - VSL_FILT_FACTOR)* m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].coef_arr_f[3];
					t_lane_length_f = m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[t_course].dupperLimit_f;
					
					
				}
				else
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
					m_debounce4Segments_arr[t_course] = NULL_F;
				}
			}
			m_lanes_general_info_st.lane_general_info_st[t_lane].front_length_f = t_lane_length_f;
		}
	}
	else
	{
		if (true == m_lanes_general_info_st.available_b)//case:change to unavailable
		{

			if ((m_best_line_info_st.m_lane_width[0] <= FLOAT_EPSILON)
				&& (m_best_line_info_st.m_lane_width[1] <= FLOAT_EPSILON)
				&& (m_best_line_info_st.m_lane_width[2] <= FLOAT_EPSILON)
				)
			{
				Init_FrontLane_v();
			}
			else
			{

				//keeping
			}
		}
		else
		{
			Init_FrontLane_v();
		}
	}

}
void VSL::rearLaneModelCalc(LM_GENERAL_LIMIT_ST& inputLimits_pst, VISION_LANE_INFO_ST& vision_lane_info_st, VEHSTATE_ST& veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st, uint8_t t_curDMState, uint8_t t_DMStateK1)
{
	struct POINT_X t_zeroSegment[MAX_NUM_OF_RECORD_REAR_POINTS], t_firstSegment[MAX_NUM_OF_RECORD_REAR_POINTS];
	struct COEFF t_zeroSegmentCoeff, t_firstSegmentCoeff, t_temZeroSegmentCoeff[3], t_temFirstSegmentCoeff[3];
	uint8_t t_numOf0Segment = NULL_UN8, t_numOf1Segment = NULL_UN8, t_temIndex = m_rearPointsBuf_st.m_firstValidIndex_un8;
	float t_zeroSegmentDlowerLimit = inputLimits_pst.m_d_lower_limit_f[0];
	float t_firstSegmentDlowerLimit = inputLimits_pst.m_d_lower_limit_f[1];
	bool t_0SegmentAvailable_b = false, t_1SegmentAvailable_b = false;
	float t_kFilt = VSL_FILT_FACTOR;
	bool t_forceTransFromSeg2To1 = false, t_forceTransFromSeg1To0 = false;

	// filt valid points for segments
	for (uint8_t t_i = 0; t_i < MAX_NUM_OF_RECORD_REAR_POINTS; t_i++)
	{
		if (true == m_rearPointsBuf_st.m_point[t_temIndex].used_b)
		{
			if (m_rearPointsBuf_st.m_point[t_temIndex].dx_f > t_firstSegmentDlowerLimit)
			{
				t_firstSegment[t_numOf1Segment].x = m_rearPointsBuf_st.m_point[t_temIndex].dx_f;
				t_firstSegment[t_numOf1Segment].y = m_rearPointsBuf_st.m_point[t_temIndex].dy_f;
				t_numOf1Segment++;
			}
			else if (m_rearPointsBuf_st.m_point[t_temIndex].dx_f > t_zeroSegmentDlowerLimit)
			{
				t_zeroSegment[t_numOf0Segment].x = m_rearPointsBuf_st.m_point[t_temIndex].dx_f;
				t_zeroSegment[t_numOf0Segment].y = m_rearPointsBuf_st.m_point[t_temIndex].dy_f;
				t_numOf0Segment++;
			}
			else
			{

			}
			if (t_temIndex == MAX_NUM_OF_RECORD_REAR_POINTS - 1)
			{
				t_temIndex = 0;
			}
			else
			{
				t_temIndex++;
			}
		}

	}
	m_rearPointsBuf_st.m_num4FirstSegment_un8 = t_numOf1Segment;
	m_rearPointsBuf_st.m_num4ZeroSegment_un8 = t_numOf0Segment;

	float t_deltadySeg1AndSeg2 = NULL_F, t_temDx, t_s2c0 = 0, t_s2c1 = 0, t_s2c2 = 0, t_s2c3 = 0, t_s1c0 = 0, t_s1c1 = 0, t_s1c2 = 0, t_s1c3 = 0;
	if ((true == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].available_b)
		&& (true == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].available_b)
		)
	{
		t_temDx = 0;
		t_s2c0 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[0];
		t_s1c0 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].coef_arr_f[0];
		t_deltadySeg1AndSeg2 = t_s1c0 - t_s2c0;
	}
	else if(false == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].available_b)
	{
		t_deltadySeg1AndSeg2 = MAX_F;
	}
	else
	{
		t_deltadySeg1AndSeg2 = NULL_F;
	}
	if (t_deltadySeg1AndSeg2 > 0.3)
	{
		Init_RearLane_v();
		Init_RearPointsBuff();
		t_0SegmentAvailable_b = false;
		t_1SegmentAvailable_b = false;
	}
	else if ((t_numOf0Segment >= MIN_POINT_NUM_4_FIT)
		&& (t_numOf1Segment >= MIN_POINT_NUM_4_FIT)
		)
	{
		
		// 0 segment
		polfit3(t_zeroSegment, t_numOf0Segment, t_zeroSegmentCoeff);
		// 1 segment
		polfit3(t_firstSegment, t_numOf1Segment, t_firstSegmentCoeff);

		t_0SegmentAvailable_b = true;
		t_1SegmentAvailable_b = true;
	}
	//else if (t_numOf0Segment >= MIN_POINT_NUM_4_FIT)
	//{
	//	// 0 segment
	//	polfit3(t_zeroSegment, t_numOf0Segment, t_zeroSegmentCoeff);
	//	if (true == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].available_b)
	//	{
	//		t_firstSegmentCoeff.c0 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[0];
	//		t_firstSegmentCoeff.c1 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[1];
	//		t_firstSegmentCoeff.c2 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[2];
	//		t_firstSegmentCoeff.c3 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[3];
	//		t_1SegmentAvailable_b = true;
	//		t_forceTransFromSeg2To1 = true;
	//	}
	//	t_0SegmentAvailable_b = true;


	//}
	else if (t_numOf1Segment >= MIN_POINT_NUM_4_FIT)
	{
		// 1 segment
		polfit3(t_firstSegment, t_numOf1Segment, t_firstSegmentCoeff);
		/*t_zeroSegmentCoeff.c0 = t_firstSegmentCoeff.c0;
		t_zeroSegmentCoeff.c1 = t_firstSegmentCoeff.c1;
		t_zeroSegmentCoeff.c2 = t_firstSegmentCoeff.c2;
		t_zeroSegmentCoeff.c3 = t_firstSegmentCoeff.c3;*/

		//t_forceTransFromSeg1To0 = true;

		//t_0SegmentAvailable_b = true;
		t_1SegmentAvailable_b = true;
	}
	else if ((DM_TURN_LEFT == t_curDMState)
		|| (DM_UNKNOWN == t_curDMState)
		||(DM_TURN_RIGHT == t_curDMState))
	{
		t_1SegmentAvailable_b = false;
		t_0SegmentAvailable_b = false;
		m_debounce4Segments_arr[0] = MAX_DEBOUNCE_DIS_OF_VSL;
		m_debounce4Segments_arr[1] = MAX_DEBOUNCE_DIS_OF_VSL;
	}
	else if (true == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].available_b)
	{
		t_firstSegmentCoeff.c0 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[0];
		t_firstSegmentCoeff.c1 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[1];
		t_firstSegmentCoeff.c2 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[2];
		t_firstSegmentCoeff.c3 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[3];
		/*t_zeroSegmentCoeff.c0 = t_firstSegmentCoeff.c0;
		t_zeroSegmentCoeff.c1 = t_firstSegmentCoeff.c1;
		t_zeroSegmentCoeff.c2 = t_firstSegmentCoeff.c2;
		t_zeroSegmentCoeff.c3 = t_firstSegmentCoeff.c3;*/

		//t_forceTransFromSeg1To0 = true;
		t_forceTransFromSeg2To1 = true;
		//t_0SegmentAvailable_b = true;
		t_1SegmentAvailable_b = true;
	}
	else 
	{
		t_0SegmentAvailable_b = false;
		t_1SegmentAvailable_b = false;
	}

	// 1 segment
	if (true == t_1SegmentAvailable_b)
	{
		t_temFirstSegmentCoeff[0].c0 = t_firstSegmentCoeff.c0 + m_lanes_general_info_st.lane_general_info_st[0].width_f;
		t_temFirstSegmentCoeff[0].c1 = t_firstSegmentCoeff.c1;
		t_temFirstSegmentCoeff[0].c2 = t_firstSegmentCoeff.c2;
		t_temFirstSegmentCoeff[0].c3 = t_firstSegmentCoeff.c3;

		t_temFirstSegmentCoeff[1].c0 = t_firstSegmentCoeff.c0;
		t_temFirstSegmentCoeff[1].c1 = t_firstSegmentCoeff.c1;
		t_temFirstSegmentCoeff[1].c2 = t_firstSegmentCoeff.c2;
		t_temFirstSegmentCoeff[1].c3 = t_firstSegmentCoeff.c3;

		t_temFirstSegmentCoeff[2].c0 = t_firstSegmentCoeff.c0 - m_lanes_general_info_st.lane_general_info_st[1].width_f;
		t_temFirstSegmentCoeff[2].c1 = t_firstSegmentCoeff.c1;
		t_temFirstSegmentCoeff[2].c2 = t_firstSegmentCoeff.c2;
		t_temFirstSegmentCoeff[2].c3 = t_firstSegmentCoeff.c3;

		for (uint8_t t_lane = 0; (t_lane < VSL_MAX_LANE_NUM) && (true == m_lanes_general_info_st.lane_general_info_st[t_lane].available_b); t_lane++)
		{
			//1 segment
			if ((true == m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].available_b)
				&&(false == t_forceTransFromSeg2To1)
				)
			{
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[0] = t_kFilt * t_temFirstSegmentCoeff[t_lane].c0 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[0];
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[1] = t_kFilt * t_temFirstSegmentCoeff[t_lane].c1 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[1];
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[2] = t_kFilt * t_temFirstSegmentCoeff[t_lane].c2 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[2];
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[3] = t_kFilt * t_temFirstSegmentCoeff[t_lane].c3 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[3];

			}
			else
			{
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[0] = t_temFirstSegmentCoeff[t_lane].c0;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[1] = t_temFirstSegmentCoeff[t_lane].c1;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[2] = t_temFirstSegmentCoeff[t_lane].c2;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[3] = t_temFirstSegmentCoeff[t_lane].c3;

			}
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].available_b = true;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].dlowerLimit_f = inputLimits_pst.m_d_lower_limit_f[1];
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].dupperLimit_f = inputLimits_pst.m_d_upper_limit_f[1];
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].detectedByVideo_b = m_best_line_info_st.m_detectedByVideo_b;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].quality_f = 1;// TODO
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].numOfSegment_un8 = 1;
			m_lanes_general_info_st.lane_general_info_st[t_lane].rear_length_f = inputLimits_pst.m_d_lower_limit_f[1];
		}

		if (m_debounce4Segments_arr[1] <= 1)
		{
			m_debounce4Segments_arr[1] = NULL_F;
		}
		else
		{
			m_debounce4Segments_arr[1] = m_debounce4Segments_arr[1] - veh_state.vRef * GetCycleTime_s();
		}

	}
	else
	{

		if (m_debounce4Segments_arr[1] >= MAX_DEBOUNCE_DIS_OF_VSL)
		{
			for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
			{
				//1 segment
				if (false == m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].available_b)
				{
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].available_b = false;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].dlowerLimit_f = NULL_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].dupperLimit_f = NULL_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].detectedByVideo_b = false;

					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].quality_f = 0;//TODO
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].numOfSegment_un8 = 0;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[0] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[1] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[2] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[3] = MAX_F;
					//m_lanes_general_info_st.lane_general_info_st[t_lane].rear_length_f = NULL_F;
				}

			}
		}
		else
		{
			if (false == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].available_b)
			{
				for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
				{
					//1 segment
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].available_b = false;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].dlowerLimit_f = NULL_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].dupperLimit_f = NULL_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].detectedByVideo_b = false;

					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].quality_f = 0;//TODO
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].numOfSegment_un8 = 0;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[0] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[1] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[2] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].coef_arr_f[3] = MAX_F;
					//m_lanes_general_info_st.lane_general_info_st[t_lane].rear_length_f = NULL_F;
					m_debounce4Segments_arr[1] = 0;
				}
			}
			else
			{
				m_debounce4Segments_arr[1] += veh_state.vRef * GetCycleTime_s();
				for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
				{
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].detectedByVideo_b = false;
				}
			}


		}
	}
	if (true == t_0SegmentAvailable_b)
	{
		t_temZeroSegmentCoeff[0].c0 = t_zeroSegmentCoeff.c0 + m_lanes_general_info_st.lane_general_info_st[0].width_f;
		t_temZeroSegmentCoeff[0].c1 = t_zeroSegmentCoeff.c1;
		t_temZeroSegmentCoeff[0].c2 = t_zeroSegmentCoeff.c2;
		t_temZeroSegmentCoeff[0].c3 = t_zeroSegmentCoeff.c3;

		t_temZeroSegmentCoeff[1].c0 = t_zeroSegmentCoeff.c0;
		t_temZeroSegmentCoeff[1].c1 = t_zeroSegmentCoeff.c1;
		t_temZeroSegmentCoeff[1].c2 = t_zeroSegmentCoeff.c2;
		t_temZeroSegmentCoeff[1].c3 = t_zeroSegmentCoeff.c3;

		t_temZeroSegmentCoeff[2].c0 = t_zeroSegmentCoeff.c0 - m_lanes_general_info_st.lane_general_info_st[1].width_f;
		t_temZeroSegmentCoeff[2].c1 = t_zeroSegmentCoeff.c1;
		t_temZeroSegmentCoeff[2].c2 = t_zeroSegmentCoeff.c2;
		t_temZeroSegmentCoeff[2].c3 = t_zeroSegmentCoeff.c3;

		for (uint8_t t_lane = 0; (t_lane < VSL_MAX_LANE_NUM) && (true == m_lanes_general_info_st.lane_general_info_st[t_lane].available_b); t_lane++)
		{
			//0 segment
			if ((true == m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].available_b)
				&&(false == t_forceTransFromSeg1To0)
				&&(true == m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].available_b)// segment1 always exists if segment0 exists
				)
			{
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[0] = t_kFilt * t_temZeroSegmentCoeff[t_lane].c0 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[0];
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[1] = t_kFilt * t_temZeroSegmentCoeff[t_lane].c1 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[1];
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[2] = t_kFilt * t_temZeroSegmentCoeff[t_lane].c2 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[2];
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[3] = t_kFilt * t_temZeroSegmentCoeff[t_lane].c3 + (1 - t_kFilt) * m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[3];
			}
			else
			{
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[0] = t_temZeroSegmentCoeff[t_lane].c0;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[1] = t_temZeroSegmentCoeff[t_lane].c1;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[2] = t_temZeroSegmentCoeff[t_lane].c2;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[3] = t_temZeroSegmentCoeff[t_lane].c3;
			}
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].available_b = true;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].dlowerLimit_f = inputLimits_pst.m_d_lower_limit_f[0];
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].dupperLimit_f = inputLimits_pst.m_d_upper_limit_f[0];
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].detectedByVideo_b = m_best_line_info_st.m_detectedByVideo_b;
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].quality_f = 1;// TODO
			m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].numOfSegment_un8 = 0;
			m_lanes_general_info_st.lane_general_info_st[t_lane].rear_length_f = inputLimits_pst.m_d_lower_limit_f[0];
		}

		if (m_debounce4Segments_arr[0] <= 1)
		{
			m_debounce4Segments_arr[0] = NULL_F;
		}
		else
		{
			m_debounce4Segments_arr[0] = m_debounce4Segments_arr[0] - veh_state.vRef * GetCycleTime_s();
		}

	}
	else
	{
		float t_deltady = NULL_F, t_temDx,t_s0c0 = 0, t_s0c1 = 0, t_s0c2 = 0, t_s0c3 = 0, t_s1c0 = 0, t_s1c1 = 0, t_s1c2 = 0, t_s1c3 = 0;
		if ((true == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[0].available_b)
			&& (true == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].available_b)
			)
		{
			t_temDx = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].dlowerLimit_f;
			t_s0c0 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[0].coef_arr_f[0];
			t_s0c1 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[0].coef_arr_f[1];
			t_s0c2 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[0].coef_arr_f[2];
			t_s0c3 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[0].coef_arr_f[3];
			t_s1c0 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].coef_arr_f[0];
			t_s1c1 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].coef_arr_f[1];
			t_s1c2 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].coef_arr_f[2];
			t_s1c3 = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].coef_arr_f[3];
			t_deltady = t_s0c0 + t_s0c1 * t_temDx + t_s0c2 * t_temDx * t_temDx + t_s0c3 * t_temDx * t_temDx * t_temDx -t_s1c0 - t_s1c1 * t_temDx - t_s1c2 * t_temDx * t_temDx - t_s1c3 * t_temDx * t_temDx * t_temDx;
		}
		else
		{
			t_deltady = MAX_F;
		}
		if ((m_debounce4Segments_arr[0] >= MAX_DEBOUNCE_DIS_OF_VSL)
			||(false == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[1].available_b)
			||(fabsf(t_deltady) > 0.2)
			)
		{
			for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
			{
				//0 segment
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].available_b = false;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].dlowerLimit_f = NULL_F;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].dupperLimit_f = NULL_F;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].detectedByVideo_b = false;

				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].quality_f = 0;//TODO
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].numOfSegment_un8 = 0;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[0] = MAX_F;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[1] = MAX_F;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[2] = MAX_F;
				m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[3] = MAX_F;
				m_lanes_general_info_st.lane_general_info_st[t_lane].rear_length_f = m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[1].dlowerLimit_f;
			}
		}
		else
		{
			if (false == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[0].available_b)
			{
				for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
				{
					//1 segment
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].available_b = false;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].dlowerLimit_f = NULL_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].dupperLimit_f = NULL_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].detectedByVideo_b = false;

					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].quality_f = 0;//TODO
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].numOfSegment_un8 = 0;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[0] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[1] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[2] = MAX_F;
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].coef_arr_f[3] = MAX_F;
					//m_lanes_general_info_st.lane_general_info_st[t_lane].rear_length_f = NULL_F;
					m_debounce4Segments_arr[0] = 0;
				}
			}
			else
			{
				m_debounce4Segments_arr[0] += veh_state.vRef * GetCycleTime_s();
				for (uint8_t t_lane = 0; t_lane < VSL_MAX_LANE_NUM; t_lane++)
				{
					m_lanes_general_info_st.lane_general_info_st[t_lane].segments_st[0].detectedByVideo_b = false;
				}

			}


		}

	}



}

void VSL::StoreRearPointsCalc_V(LM_GENERAL_LIMIT_ST& inputLimit_pst, VISION_LANE_INFO_ST& vision_lane_info_st, VEHSTATE_ST& veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st, uint8_t t_curDMState,uint8_t t_DMStateK1)
{
	// alll the points stored will transfer left line
	float t_dx_f = NULL_F, t_dy_f = NULL_F;
	float t_deltady = NULL_F,t_deltaDyAsLC = NULL_F;
	bool t_available_b = false;
	uint8_t t_firstPointIndex, t_newPosIndex;

	//*************************************** coordinate transfoamation ****************************************
	float t_temDx_f, t_temDy_f;
	uint8_t t_firstIndex = m_rearPointsBuf_st.m_firstValidIndex_un8, t_temIndex;;
	for (uint8_t t_i = 0; t_i < MAX_NUM_OF_RECORD_REAR_POINTS; t_i++)
	{

		if (true == m_rearPointsBuf_st.m_point[t_firstIndex].used_b)
		{
			t_temDx_f = m_rearPointsBuf_st.m_point[t_firstIndex].dx_f - t_vehMovement_st.deltaDx;
			t_temDy_f = m_rearPointsBuf_st.m_point[t_firstIndex].dy_f - t_vehMovement_st.deltaDy;
			m_rearPointsBuf_st.m_point[t_firstIndex].dx_f = t_temDx_f * cosf(t_vehMovement_st.deltaDyaw) + t_temDy_f * sinf(t_vehMovement_st.deltaDyaw);
			m_rearPointsBuf_st.m_point[t_firstIndex].dy_f = -t_temDx_f * sinf(t_vehMovement_st.deltaDyaw) + t_temDy_f * cosf(t_vehMovement_st.deltaDyaw);
			if ((m_rearPointsBuf_st.m_point[t_firstIndex].dx_f <= 1)
				&& (m_rearPointsBuf_st.m_point[t_firstIndex].dx_f >= -80)
				&& (m_rearPointsBuf_st.m_point[t_firstIndex].dy_f < 20)
				&& (m_rearPointsBuf_st.m_point[t_firstIndex].dy_f > -20)
				)
			{
				m_rearPointsBuf_st.m_point[t_firstIndex].used_b = true;
			}
			else
			{
				m_rearPointsBuf_st.m_point[t_firstIndex].dx_f = MAX_F;
				m_rearPointsBuf_st.m_point[t_firstIndex].dy_f = MAX_F;
				m_rearPointsBuf_st.m_point[t_firstIndex].used_b = false;
			}
		}
		else
		{

		}

		if (MAX_NUM_OF_RECORD_REAR_POINTS - 1 == t_firstIndex)
		{
			t_firstIndex = 0;
		}
		else
		{
			++t_firstIndex;
		}

	}

	//**********************************************shift deltady as lane change*********************************************
	if (((DM_STRAIGHT == t_DMStateK1) && (DM_LEFTLANECHANGE == t_curDMState))
		||((DM_STRAIGHT == t_DMStateK1) && (DM_RIGHTLANECHANGE == t_curDMState))
		)
	{
		if (DM_LEFTLANECHANGE == t_curDMState)
		{
			t_deltaDyAsLC = m_best_line_info_st.m_lane_width[VSL_MIDDLE_LANE];
		}
		else
		{
			t_deltaDyAsLC = -m_best_line_info_st.m_lane_width[VSL_MIDDLE_LANE];
		}
		
		for (uint8_t t_i = 0; t_i < MAX_NUM_OF_RECORD_REAR_POINTS; t_i++)
		{
			if (true == m_rearPointsBuf_st.m_point[t_i].used_b)
			{
				m_rearPointsBuf_st.m_point[t_i].dy_f = m_rearPointsBuf_st.m_point[t_i].dy_f + t_deltaDyAsLC;
			}
		}
	}
	else if ((DM_TURN_LEFT == t_curDMState)
		|| (DM_TURN_RIGHT == t_curDMState))
	{
		for (uint8_t t_i = 0; t_i < MAX_NUM_OF_RECORD_REAR_POINTS; t_i++)
		{
			m_rearPointsBuf_st.m_point[t_i].used_b = false;
			m_rearPointsBuf_st.m_point[t_i].dx_f = NULL_F;
			m_rearPointsBuf_st.m_point[t_i].dy_f = NULL_F;
		}
		m_rearPointsBuf_st.m_firstValidIndex_un8 = NULL_UN8;
		m_rearPointsBuf_st.m_num4FirstSegment_un8 = NULL_UN8;
		m_rearPointsBuf_st.m_num4ZeroSegment_un8 = NULL_UN8;
		m_debounce4NewStart_un8 = NULL_UN8;

	}
	else
	{
		// nothing
	}
	switch (m_best_line_info_st.m_line_id_un8)
	{
	case VSL_LL_LINE:
	{
		t_deltady = -m_best_line_info_st.m_lane_width[VSL_LEFT_LANE];
		t_available_b = true;
		t_dx_f = 0;
		t_dy_f = m_best_line_info_st.m_coeff_f[0] + t_deltady;
		break;
	}
	case VSL_L_LINE:
	{
		t_deltady = 0;
		t_available_b = true;
		t_dx_f = 0;
		t_dy_f = m_best_line_info_st.m_coeff_f[0] + t_deltady;
		break;
	}
	case VSL_R_LINE:
	{
		t_deltady = m_best_line_info_st.m_lane_width[VSL_MIDDLE_LANE];
		t_available_b = true;
		t_dx_f = 0;
		t_dy_f = m_best_line_info_st.m_coeff_f[0] + t_deltady;
		break;
	}
	case VSL_RR_LINE:
	{
		t_deltady = m_best_line_info_st.m_lane_width[VSL_RIGHT_LANE] + m_best_line_info_st.m_lane_width[VSL_MIDDLE_LANE];
		t_available_b = true;
		t_dx_f = 0;
		t_dy_f = m_best_line_info_st.m_coeff_f[0] + t_deltady;
		break;
	}
	default:
	{
		if ((m_best_line_info_st.m_lane_width[VSL_MIDDLE_LANE] > LM_MIN_LANE_WIDTH)
			&& (m_best_line_info_st.m_lane_width[VSL_MIDDLE_LANE] < LM_MAX_LANE_WIDTH)
			&& (true == m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].available_b)
			)
		{
			t_deltady = m_lanes_general_info_st.lane_general_info_st[VSL_MIDDLE_LANE].segments_st[2].coef_arr_f[0];
			t_available_b = true;
			t_dx_f = 0;
			t_dy_f = t_deltady;
		}
		else
		{
			t_deltady = 0;
			t_available_b = false;
		}
		break;
	}
	}
	if (true == t_available_b)
	{
		t_firstPointIndex = m_rearPointsBuf_st.m_firstValidIndex_un8;
		if (((-m_rearPointsBuf_st.m_point[t_firstPointIndex].dx_f <= MAX_LONG_GAP_BETWEEN_POINTS) &&(true == m_rearPointsBuf_st.m_point[t_firstPointIndex].used_b))
			&&((fabsf(t_dy_f - m_rearPointsBuf_st.m_point[t_firstPointIndex].dy_f) < MAX_LAT_GAP_BETWEEN_POINTS))
			)
		{
			if (m_debounce4NewStart_un8 == NULL_UN8)
			{
				m_debounce4NewStart_un8 = NULL_UN8;
			}
			else
			{
				m_debounce4NewStart_un8--;
			}

			if (-m_rearPointsBuf_st.m_point[t_firstPointIndex].dx_f <= MIN_LONG_GAP_BETWEEN_POINTS)
			{
				// pass the point
			}
			else
			{
				
				if (t_firstPointIndex == NULL_UN8)
				{
					t_newPosIndex = MAX_NUM_OF_RECORD_REAR_POINTS - 1;
				}
				else
				{
					t_newPosIndex = t_firstPointIndex - 1;
				}
				m_rearPointsBuf_st.m_firstValidIndex_un8 = t_newPosIndex;
				m_rearPointsBuf_st.m_point[t_newPosIndex].dx_f = t_dx_f;
				m_rearPointsBuf_st.m_point[t_newPosIndex].dy_f = t_dy_f;
				m_rearPointsBuf_st.m_point[t_newPosIndex].used_b = true;
			}

		}
		else if (((-m_rearPointsBuf_st.m_point[t_firstPointIndex].dx_f > MAX_LONG_GAP_BETWEEN_POINTS) &&(true == m_rearPointsBuf_st.m_point[t_firstPointIndex].used_b))
			||((fabsf(t_dy_f - m_rearPointsBuf_st.m_point[t_firstPointIndex].dy_f) >= MAX_LAT_GAP_BETWEEN_POINTS)&&(true == m_rearPointsBuf_st.m_point[t_firstPointIndex].used_b))
			)
		{
			if (m_debounce4NewStart_un8 >= MAX_DEBOUNCE_NUM_OF_NEW_START)
			{
				m_debounce4NewStart_un8 = NULL_UN8;
				// clear all the old points stored in the buffer
				for (uint8_t t_i = 0; t_i < MAX_NUM_OF_RECORD_REAR_POINTS; t_i++)
				{
					m_rearPointsBuf_st.m_point[t_i].dx_f = NULL_F;
					m_rearPointsBuf_st.m_point[t_i].dy_f = NULL_F;
					m_rearPointsBuf_st.m_point[t_i].used_b = false;
				}
				m_rearPointsBuf_st.m_num4FirstSegment_un8 = 0;
				m_rearPointsBuf_st.m_num4ZeroSegment_un8 = 0;
				m_rearPointsBuf_st.m_firstValidIndex_un8 = 0;
				m_rearPointsBuf_st.m_point[0].dx_f = t_dx_f;
				m_rearPointsBuf_st.m_point[0].dy_f = t_dy_f;
				m_rearPointsBuf_st.m_point[0].used_b = true;

			}
			else if((fabsf(t_dy_f - m_rearPointsBuf_st.m_point[t_firstPointIndex].dy_f) >= MIN_LAT_GAP_BETWEEN_POINTS_TO_INIT))
			{
				m_debounce4NewStart_un8 += 10;
			}
			else
			{
				m_debounce4NewStart_un8++;
			}

		}
		else
		{
			if (false == m_rearPointsBuf_st.m_point[t_firstPointIndex].used_b)//first points
			{
				m_rearPointsBuf_st.m_firstValidIndex_un8 = t_firstPointIndex;
				m_rearPointsBuf_st.m_point[t_firstPointIndex].dx_f = t_dx_f;
				m_rearPointsBuf_st.m_point[t_firstPointIndex].dy_f = t_dy_f;
				m_rearPointsBuf_st.m_point[t_firstPointIndex].used_b = true;
			}
		}

	}

	

}

