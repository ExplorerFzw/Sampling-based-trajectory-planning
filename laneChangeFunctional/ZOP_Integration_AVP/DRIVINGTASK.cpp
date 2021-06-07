#include "DRIVINGTASK.h"

DRIVINGTASK::DRIVINGTASK() :
	m_drivingTask(DT_UNKNOWN),
	m_drivingTaskK1(DT_UNKNOWN),
	m_leftLaneChange_b(false),
	m_rightLaneChange_b(false),
	m_turnLeft_b(false),
	m_turnRight_b(false),
	m_straight_b(false),
	m_unknown_b(false)
{

}

void DRIVINGTASK::Calc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	m_drivingTaskK1 = m_drivingTask;

	StraightStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	LeftLaneChangeStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	RightLaneChangeStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	TurnLeftStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	TurnRightStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	UnknownStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);

	
	
}

void DRIVINGTASK::LeftLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	if (DT_STRAIGHT == m_drivingTask)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&&(true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&&(t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0]< 0.3)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2.3)
			&&(t_veh_state.YrsF > 0.01)//TODO modify the param depend on data
			)
		{
			m_leftLaneChange_b = true;
			m_straight_b = false;
		}
		else
		{
			m_leftLaneChange_b = false;
		}
	}
	else if (DT_RIGHTLANECHANGE == m_drivingTask)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2.3)
			&& (t_veh_state.YrsF > 0.012)//TODO modify the param depend on data
			)
		{
			m_rightLaneChange_b = false;
			m_leftLaneChange_b = true;
		}
		else
		{
			m_leftLaneChange_b = false;
		}
	}
	else if (DT_TURN_LEFT == m_drivingTask)
	{

	}
	else if (DT_TURN_RIGHT == m_drivingTask)
	{

	}
	else if (DT_UNKNOWN == m_drivingTask)
	{

	}
	else
	{

	}
}
void DRIVINGTASK::RightLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	if (DT_STRAIGHT == m_drivingTask)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			&& (t_veh_state.YrsF > -0.012)//TODO modify the param depend on data
			)
		{
			m_rightLaneChange_b = true;
			m_straight_b = false;
		}
		else
		{
			m_rightLaneChange_b = false;
		}
	}
	else if (DT_LEFTLANECHANGE == m_drivingTask)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			&& (t_veh_state.YrsF < -0.15)//TODO modify the param depend on data
			)
		{
			m_rightLaneChange_b = true;
			m_leftLaneChange_b = false;
		}
		else
		{
			m_rightLaneChange_b = false;
		}
	}
	else if (DT_TURN_LEFT == m_drivingTask)
	{

	}
	else if (DT_TURN_RIGHT == m_drivingTask)
	{

	}
	else if (DT_UNKNOWN == m_drivingTask)
	{

	}
	else
	{

	}
}
void DRIVINGTASK::TurnLeftStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{

}
void DRIVINGTASK::TurnRightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{

}

void DRIVINGTASK::UnknownStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	if (false == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
	{
		if ((fabsf(t_veh_state.YrsF) <= 0.02)
			&& (t_veh_state.vRef > 5)
			)
		{
			m_unknown_b = true;
			m_straight_b = false;
			m_leftLaneChange_b = false;
			m_rightLaneChange_b = false;
			m_turnLeft_b = false;
			m_turnRight_b = false;
		}
		else if ((t_veh_state.YrsF >= 0.12)
			&& (t_veh_state.vRef > 5)
			)
		{
			m_unknown_b = false;
			m_straight_b = false;
			m_leftLaneChange_b = true;
			m_rightLaneChange_b = false;
			m_turnLeft_b = false;
			m_turnRight_b = false;
		}
		else if ((t_veh_state.YrsF <= -0.12)
			&& (t_veh_state.vRef > 5)
			)
		{
			m_unknown_b = false;
			m_straight_b = false;
			m_leftLaneChange_b = false;
			m_rightLaneChange_b = true;
			m_turnLeft_b = false;
			m_turnRight_b = false;
		}
	}
	else
	{

	}
	
}

void DRIVINGTASK::StraightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	if (DT_LEFTLANECHANGE == m_drivingTask)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 2.1)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] <1.9 )
			&& (fabsf(t_veh_state.YrsF) < 0.05)//TODO modify the param depend on data
			)
		{
			m_leftLaneChange_b = false;
			m_straight_b = true;
		}
	}
	else if (DT_RIGHTLANECHANGE == m_drivingTask)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 1)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 2.2)
			&& (fabsf(t_veh_state.YrsF) < 0.05)//TODO modify the param depend on data
			)
		{
			m_rightLaneChange_b = false;
			m_straight_b = true;
		}
	}
	else if (DT_TURN_LEFT == m_drivingTask)
	{

	}
	else if (DT_TURN_RIGHT == m_drivingTask)
	{

	}
	else if (DT_UNKNOWN == m_drivingTask)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 0.3)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 2.7)
			&& (fabsf(t_veh_state.YrsF) < 0.03)//TODO modify the param depend on data
			)
		{
			m_straight_b = true;
			m_leftLaneChange_b = false;
			m_rightLaneChange_b = false;
			m_turnLeft_b = false;
			m_turnRight_b = false;
		}
		else
		{
			m_straight_b = false;
			m_leftLaneChange_b = false;
			m_rightLaneChange_b = false;
			m_turnLeft_b = false;
			m_turnRight_b = false;
		}
	}
	else
	{

	}
}