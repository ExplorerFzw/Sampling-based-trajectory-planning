#include "TOS_TRUCK_EVASION.h"

TOS_TRUCK_EVASION::TOS_TRUCK_EVASION():
	m_tar_obj_l_st(),
	m_tar_obj_r_st()
{

}

void TOS_TRUCK_EVASION::Init()
{
	m_tar_obj_l_st.available_b = false;
	m_tar_obj_l_st.dx = MAX_F;
	m_tar_obj_l_st.dy = MAX_F;
	m_tar_obj_l_st.id = MAX_UN8;
	m_tar_obj_l_st.index = MAX_UN8;
	m_tar_obj_l_st.vx = MAX_F;
	m_tar_obj_l_st.vy = MAX_F;
	m_tar_obj_r_st.available_b = false;
	m_tar_obj_r_st.dx = MAX_F;
	m_tar_obj_r_st.dy = MAX_F;
	m_tar_obj_r_st.id = MAX_UN8;
	m_tar_obj_r_st.index = MAX_UN8;
	m_tar_obj_r_st.vx = MAX_F;
	m_tar_obj_r_st.vy = MAX_F;

}

void TOS_TRUCK_EVASION::Calc(FUSION_OBJ_OUTPUT_ST& fus_obj_output_st,TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st)
{
	LeftSide_Calc(fus_obj_output_st, t_tos_obj_within_lane_st, t_probEgoVehicleWithinLane_st);
	RightSide_Calc( fus_obj_output_st,t_tos_obj_within_lane_st, t_probEgoVehicleWithinLane_st);
}
void TOS_TRUCK_EVASION::LeftSide_Calc(FUSION_OBJ_OUTPUT_ST& fus_obj_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st)
{
	//req:
	//0:truck
	//1:within left lane
	//2:-20 << dx < 100
	//2: TTC < 10s
	uint8_t t_index = 0;
	bool t_nofind = true;
	for (uint8_t t_i = 0; (t_i < FUS_MAX_OBJ_NUM)&&(true == t_nofind); t_i++)
	{
		t_index = t_tos_obj_within_lane_st.m_obj_list_index_un8[t_i];
		if (true == m_tar_obj_l_st.available_b)
		{
			if ((t_index < FUS_MAX_OBJ_NUM) &&
				(LEFT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_index]) &&
				(uint8_t(TRUCK) == fus_obj_output_st.objects[t_index].obj_information.type) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition < 100 + 10) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition > -(20 + 5)) &&
				(t_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f < 10)
				)
			{
				t_nofind = false;

			}
		}
		else
		{
			if ((t_index < FUS_MAX_OBJ_NUM) &&
				(LEFT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_index]) &&
				(uint8_t(TRUCK) == fus_obj_output_st.objects[t_index].obj_information.type) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition < 100) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition > -20) &&
				(t_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f < 9)
				)
			{
				t_nofind = false;

			}
		}
		
	}

	if (false == t_nofind)
	{
		m_tar_obj_l_st.available_b = true;
		m_tar_obj_l_st.dx = fus_obj_output_st.objects[t_index].obj_estimate.longPosition;
		m_tar_obj_l_st.dy = fus_obj_output_st.objects[t_index].obj_estimate.latPosition;
		m_tar_obj_l_st.id = fus_obj_output_st.objects[t_index].obj_property.id;
		m_tar_obj_l_st.index = t_index;
		m_tar_obj_l_st.vx = fus_obj_output_st.objects[t_index].obj_estimate.longAbsoluteVelocity;
		m_tar_obj_l_st.vy = fus_obj_output_st.objects[t_index].obj_estimate.latAbsoluteVelocity;
	}
	else
	{
		m_tar_obj_l_st.available_b = false;
		m_tar_obj_l_st.dx = MAX_F;
		m_tar_obj_l_st.dy = MAX_F;
		m_tar_obj_l_st.id = MAX_UN8;
		m_tar_obj_l_st.index = MAX_UN8;
		m_tar_obj_l_st.vx = MAX_F;
		m_tar_obj_l_st.vy = MAX_F;
	}

	

}
void TOS_TRUCK_EVASION::RightSide_Calc(FUSION_OBJ_OUTPUT_ST& fus_obj_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st)
{
	uint8_t t_index = 0;
	bool t_nofind = true;
	for (uint8_t t_i = 0; (t_i < FUS_MAX_OBJ_NUM) && (true == t_nofind); t_i++)
	{
		t_index = t_tos_obj_within_lane_st.m_obj_list_index_un8[t_i];
		if (true == m_tar_obj_r_st.available_b)
		{
			if ((t_index < FUS_MAX_OBJ_NUM) &&
				(RIGHT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_index]) &&
				(uint8_t(TRUCK) == fus_obj_output_st.objects[t_index].obj_information.type) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition < 100+10) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition > -(20+5)) &&
				(t_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f < 10)
				)
			{
				t_nofind = false;

			}
		}
		else
		{
			if ((t_index < FUS_MAX_OBJ_NUM) &&
				(RIGHT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_index]) &&
				(uint8_t(TRUCK) == fus_obj_output_st.objects[t_index].obj_information.type) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition < 100) &&
				(fus_obj_output_st.objects[t_index].obj_estimate.longPosition > -20) &&
				(t_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f < 9)
				)
			{
				t_nofind = false;

			}
		}

	}

	if (false == t_nofind)
	{
		m_tar_obj_r_st.available_b = true;
		m_tar_obj_r_st.dx = fus_obj_output_st.objects[t_index].obj_estimate.longPosition;
		m_tar_obj_r_st.dy = fus_obj_output_st.objects[t_index].obj_estimate.latPosition;
		m_tar_obj_r_st.id = fus_obj_output_st.objects[t_index].obj_property.id;
		m_tar_obj_r_st.index = t_index;
		m_tar_obj_r_st.vx = fus_obj_output_st.objects[t_index].obj_estimate.longAbsoluteVelocity;
		m_tar_obj_r_st.vy = fus_obj_output_st.objects[t_index].obj_estimate.latAbsoluteVelocity;
	}
	else
	{
		m_tar_obj_r_st.available_b = false;
		m_tar_obj_r_st.dx = MAX_F;
		m_tar_obj_r_st.dy = MAX_F;
		m_tar_obj_r_st.id = MAX_UN8;
		m_tar_obj_r_st.index = MAX_UN8;
		m_tar_obj_r_st.vx = MAX_F;
		m_tar_obj_r_st.vy = MAX_F;
	}

}

TRUCK_EVASION_TAR_OBJ& TOS_TRUCK_EVASION::GetLSideTarObj()
{
	return m_tar_obj_l_st;
}
TRUCK_EVASION_TAR_OBJ& TOS_TRUCK_EVASION::GetRSideTarObj()
{
	return m_tar_obj_r_st;
}
