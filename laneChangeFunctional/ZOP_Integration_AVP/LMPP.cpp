#include"LMCommonDefines.h"
#include"Defines.h"
#include "LMPp.h"
#include"LMMathLib.h"

LM_PP::LM_PP():
	m_obj_list_by_bc_check_st(),
	m_lm_general_limit_st()
{

}

void LM_PP::Init()
{
	for (uint8_t t_i = 0; t_i < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_i++)
	{
		m_lm_general_limit_st.m_d_lower_limit_f[t_i] = MAX_F;
		m_lm_general_limit_st.m_d_upper_limit_f[t_i] = MIN_F;
	}
}

void LM_PP::Calc_v(FUSION_OBJ_OUTPUT_ST& obj_data_st, VEHSTATE_ST& veh_state, LANE_MODEL_OUTPUT_ST& lane_medel)
{
	LM_General_Limit_Calc(veh_state);
	BC_Check_Calc(obj_data_st, veh_state, lane_medel);
}

void LM_PP::BC_Check_Calc(FUSION_OBJ_OUTPUT_ST& obj_data_st, VEHSTATE_ST& veh_state, LANE_MODEL_OUTPUT_ST& lane_medel)
{
	float t_front_range_f = 130.0;
	float t_rear_range_f = -90.0;
	float t_left_range_f = 9.0;
	float t_right_range_f = -9.0;

	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
	{
		bool t_movingPatternCheck_b = false;
		if ((PRECEDING == obj_data_st.objects[t_i].obj_information.motionPatternCurrent) ||
			(ONCOMING == obj_data_st.objects[t_i].obj_information.motionPatternCurrent) ||
			(STOP == obj_data_st.objects[t_i].obj_information.motionPatternCurrent)
			)
		{
			t_movingPatternCheck_b = true;
		}
		else if ((STATIONARY == obj_data_st.objects[t_i].obj_information.motionPatternCurrent) &&
			((RADARVISIONFUSION == obj_data_st.objects[t_i].obj_property.fusionSource)||
				(VISIONONLY == obj_data_st.objects[t_i].obj_property.fusionSource)
				)
			)
		{
			t_movingPatternCheck_b = true;
		}
		else
		{
			t_movingPatternCheck_b = false;//keeping
		}

		if ((veh_state.vRef >= -1.0) &&
			(true == obj_data_st.objects[t_i].obj_information.valid)&&
			(fabsf(obj_data_st.objects[t_i].obj_estimate.latAbsoluteVelocity) < 3.0) &&
			(obj_data_st.objects[t_i].obj_estimate.longAbsoluteVelocity > -1.0) &&
			//(obj_data_st.objects[t_i].obj_estimate.latPosition < t_left_range_f)&&
			//(obj_data_st.objects[t_i].obj_estimate.latPosition > t_right_range_f)&
			(obj_data_st.objects[t_i].obj_estimate.longPosition < t_front_range_f) &&
			(obj_data_st.objects[t_i].obj_estimate.longPosition > t_rear_range_f)&&
			(t_movingPatternCheck_b)
			)
		{
			if (true == m_obj_list_by_bc_check_st.valid_b[t_i])
			{
				if (m_obj_list_by_bc_check_st.trackTime[t_i] < MAX_UN16)
				{
					m_obj_list_by_bc_check_st.trackTime[t_i] += 1;
				}
				else
				{
					m_obj_list_by_bc_check_st.trackTime[t_i] = MAX_UN16;
				}
			}
			else
			{
				m_obj_list_by_bc_check_st.trackTime[t_i] = 1;
				m_obj_list_by_bc_check_st.id[t_i] = obj_data_st.objects[t_i].obj_property.id;
				m_obj_list_by_bc_check_st.valid_b[t_i] = true;
			}
		}
		else
		{
			m_obj_list_by_bc_check_st.id[t_i] = MAX_UN8;
			m_obj_list_by_bc_check_st.valid_b[t_i] = false;
			m_obj_list_by_bc_check_st.trackTime[t_i] = 0;
		}

	}

}
OBJECT_LIST_BY_BC_CHECK& LM_PP::Get_ObjListAfterBCCheck()
{
	return m_obj_list_by_bc_check_st;
}

LM_GENERAL_LIMIT_ST& LM_PP::Get_General_Limit_st()
{
	return m_lm_general_limit_st;
}

void LM_PP::LM_General_Limit_Calc(VEHSTATE_ST& veh_state)
{
	float t_egoVehVel_f = veh_state.vRef;
	float t_segmentLength_f = 1.27 * t_egoVehVel_f + 14.6;
	float t_minLength_f = 13.3;
	float t_maxLength_f = 30.0;
	float t_factor_rear = 1.5;
	float t_factor_front = 1;

	
	t_segmentLength_f = MIN_TP(t_segmentLength_f, t_maxLength_f);
	t_segmentLength_f = MAX_TP(t_segmentLength_f, t_minLength_f);
	for (uint8_t t_i = 0; t_i < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_i++)
	{
		if (t_i >= uint8_t(2))
		{
			m_lm_general_limit_st.m_d_lower_limit_f[t_i] = m_lm_general_limit_st.m_d_upper_limit_f[t_i -1];
			float t_upper = m_lm_general_limit_st.m_d_lower_limit_f[t_i] + t_segmentLength_f* t_factor_front;
			float t_tem = LM_MAX_FRONT_RANGE;
			m_lm_general_limit_st.m_d_upper_limit_f[t_i] = MIN_TP(t_tem, t_upper);
		}
		else if (uint8_t(0) == t_i)
		{
			m_lm_general_limit_st.m_d_upper_limit_f[1] = 0;
			m_lm_general_limit_st.m_d_lower_limit_f[1] = -t_segmentLength_f* t_factor_rear;
			m_lm_general_limit_st.m_d_upper_limit_f[0] = m_lm_general_limit_st.m_d_lower_limit_f[1];
			float t_upper = m_lm_general_limit_st.m_d_upper_limit_f[0] - t_segmentLength_f* t_factor_rear;
			float t_tem = LM_MAX_REAR_RANGE;
			m_lm_general_limit_st.m_d_lower_limit_f[0] = MAX_TP(t_tem, t_upper);
		}
		else
		{
			//nothing
		}
	}
}


