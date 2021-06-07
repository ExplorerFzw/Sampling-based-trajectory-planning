#include"DrivingManeuver.h"
#include"LMMathLib.h"
#include"Parameters.h"


DrivingManeuver::DrivingManeuver() :
	m_drivingManeuver(DM_UNKNOWN),
	m_drivingManeuverK1(DM_UNKNOWN),
	m_lastDMState(DM_UNKNOWN),
	m_yawChange1s(NULL_F),
	m_yawChange2s(NULL_F),
	m_leftLaneChange_b(false),
	m_rightLaneChange_b(false),
	m_turnLeft_b(false),
	m_turnRight_b(false),
	m_straight_b(false),
	m_unknown_b(false)
{

}

void DrivingManeuver::Init_V()
{
	m_drivingManeuver = DM_UNKNOWN;
	m_drivingManeuverK1 = DM_UNKNOWN;
	m_lastDMState = DM_UNKNOWN;
	m_yawChange1s = NULL_F;
	m_yawChange2s = NULL_F;
	m_leftLaneChange_b = false;
	m_rightLaneChange_b = false;
	m_turnLeft_b = false;
	m_turnRight_b = false;
	m_straight_b = false;
	m_unknown_b = false;
}
void DrivingManeuver::Calc_V(VEHMOVBUFFINFO_ST& t_yaw_st, VEHMOVBUFFINFO_ST& t_yawRate_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	uint8_t t_tem = 0;
	uint8_t t_count1s = 20;// (uint8_t)(1.0 / 0.05);
	if (m_lastDMState == m_drivingManeuver)
	{
		// keeping
	}
	else
	{
		m_lastDMState = m_drivingManeuver;
	}
	m_drivingManeuverK1 = m_drivingManeuver;
	m_yawChange1s = 0;
	m_yawChange2s = 0;
	for (uint8_t t_i = 0; t_i < t_yaw_st.m_count; t_i++)
	{
		if (t_yaw_st.m_firstIndex + t_i >= VEHMOVBUFFER)
		{
			t_tem = (t_yaw_st.m_firstIndex + t_i) % VEHMOVBUFFER;
		}
		else
		{
			t_tem = t_yaw_st.m_firstIndex + t_i;
		}
		if (t_i < t_count1s)
		{
			m_yawChange1s += t_yaw_st.m_value[t_tem];
			m_yawChange2s += t_yaw_st.m_value[t_tem];
		}
		else
		{
			m_yawChange2s += t_yaw_st.m_value[t_tem];
		}
	}


	StraightStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	LeftLaneChangeStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	RightLaneChangeStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	TurnLeftStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	TurnRightStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);
	UnknownStateCalc_V(t_lanemodel_k1_st, t_lanemodel_output_st, t_veh_state, t_vehMovement_st);

	if (true == m_straight_b)
	{
		m_drivingManeuver = DM_STRAIGHT;
	}
	else if (true == m_leftLaneChange_b)
	{
		m_drivingManeuver = DM_LEFTLANECHANGE;
	}
	else if (true == m_rightLaneChange_b)
	{
		m_drivingManeuver = DM_RIGHTLANECHANGE;
	}
	else if (true == m_turnLeft_b)
	{
		m_drivingManeuver = DM_TURN_LEFT;
	}
	else if (true == m_turnRight_b)
	{
		m_drivingManeuver = DM_TURN_RIGHT;
	}
	else
	{
		m_drivingManeuver = DM_UNKNOWN;
	}
		

	
	
}

void DrivingManeuver::LeftLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	if (DM_STRAIGHT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&&(true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&&(t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0]< 0.3)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2.3)
			)
		{
			m_leftLaneChange_b = true;
			m_straight_b = false;
		}
	}
	else if (DM_RIGHTLANECHANGE == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2.3)
			)
		{
			m_rightLaneChange_b = false;
			m_leftLaneChange_b = true;
		}
	}
	else if (DM_TURN_RIGHT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2.3)
			)
		{
			m_turnRight_b = false;
			m_leftLaneChange_b = true;
		}
	}
	else if (DM_TURN_LEFT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2.3)
			)
		{
			m_turnLeft_b = false;
			m_leftLaneChange_b = true;
		}
	}
	else
	{

	}
}
void DrivingManeuver::RightLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	float t_yaw1s = Interp1(P_Veh2Yaw1s4TurnLOrR_Arr, P_MinYaw1sDiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_yaw2s = Interp1(P_Veh2Yaw2s4TurnLOrR_Arr, P_MinYaw2sDiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);

	if (DM_STRAIGHT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			)
		{
			m_rightLaneChange_b = true;
			m_straight_b = false;
		}
	}
	else if (DM_LEFTLANECHANGE == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			)
		{
			m_rightLaneChange_b = true;
			m_leftLaneChange_b = false;
		}
	}
	else if (DM_TURN_LEFT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			)
		{
			m_rightLaneChange_b = true;
			m_turnLeft_b = false;
		}
	}
	else if (DM_TURN_RIGHT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 2)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] < 0.3)
			)
		{
			m_rightLaneChange_b = true;
			m_turnRight_b = false;
		}
	}
	else
	{

	}
}
void DrivingManeuver::TurnLeftStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	float t_maxAcc = Interp1(P_Veh2Accl4TurnLOrR_Arr, P_MaxAccl2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_minDel = Interp1(P_Veh2Decl4TurnLOrR_Arr, P_MaxDecl2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_MinRawrate = Interp1(P_Veh2Yawrate4TurnLOrR_Arr, P_MinYawrate2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_MinCurv = Interp1(P_Veh2Curv4TurnLOrR_Arr, P_MinCurv2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_yaw1s = Interp1(P_Veh2Yaw1s4TurnLOrR_Arr, P_MinYaw1sDiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_yaw2s = Interp1(P_Veh2Yaw2s4TurnLOrR_Arr, P_MinYaw2sDiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	bool t_lineMarkingCheck_b = false;

	if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
		&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
		&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 0.5)
		&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
		&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
		&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 0.5)
		&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].detectedByVideo_b)
		)
	{
		t_lineMarkingCheck_b = false;//always within the same lane
	}
	else
	{
		t_lineMarkingCheck_b = true;
	}
	
	if (DM_TURN_LEFT != m_drivingManeuver)
	{
		if ((t_veh_state.vRef < P_MaxVelocity4TurnLeftOrRight_F)// max velocity: 90kph
			&& (t_veh_state.vRef > P_MinVelocity4TurnLeftOrRight_F)// min velocity: 4kph
			&& (t_veh_state.aRef < t_maxAcc)
			&& (t_veh_state.aRef > t_minDel)
			&& (t_veh_state.YrsF > t_MinRawrate)
			&& (t_veh_state.Curvature > t_MinCurv)
			&& (m_yawChange1s > t_yaw1s)
			&& (m_yawChange2s > t_yaw2s)
			&& (true == t_lineMarkingCheck_b)
			)
		{
			m_turnLeft_b = true;
			m_straight_b = false;
			m_leftLaneChange_b = false;
			m_rightLaneChange_b = false;
			m_turnRight_b = false;
			m_unknown_b = false;
		}
	}
	
}
void DrivingManeuver::TurnRightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	float t_maxAcc = Interp1(P_Veh2Accl4TurnLOrR_Arr, P_MaxAccl2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_minDel = Interp1(P_Veh2Decl4TurnLOrR_Arr, P_MaxDecl2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_MinYawRate = Interp1(P_Veh2Yawrate4TurnLOrR_Arr, P_MinYawrate2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_MinCurv = Interp1(P_Veh2Curv4TurnLOrR_Arr, P_MinCurv2DiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_yaw1s = Interp1(P_Veh2Yaw1s4TurnLOrR_Arr, P_MinYaw1sDiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	float t_yaw2s = Interp1(P_Veh2Yaw2s4TurnLOrR_Arr, P_MinYaw2sDiffVx4Trans2TurnLOrR_Arr, 6, t_veh_state.vRef);
	bool t_lineMarkingCheck_b = false;

	if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
		&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
		&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 0.5)
		&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
		&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
		&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > 0.5)
		&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].detectedByVideo_b)
		)
	{
		t_lineMarkingCheck_b = false;//always within the same lane
	}
	else
	{
		t_lineMarkingCheck_b = true;
	}

	if (DM_TURN_RIGHT != m_drivingManeuver)
	{
		if ((t_veh_state.vRef < P_MaxVelocity4TurnLeftOrRight_F)
			&& (t_veh_state.vRef > P_MinVelocity4TurnLeftOrRight_F)
			&& (t_veh_state.aRef < t_maxAcc)
			&& (t_veh_state.aRef > t_minDel)
			&& (t_veh_state.YrsF < -t_MinYawRate)
			&& (t_veh_state.Curvature < -t_MinCurv)
			&& (m_yawChange1s < -t_yaw1s)
			&& (m_yawChange2s < -t_yaw2s)
			&& (true == t_lineMarkingCheck_b)
			)
		{
			m_turnRight_b = true;
			m_straight_b = false;
			m_leftLaneChange_b = false;
			m_rightLaneChange_b = false;
			m_turnLeft_b = false;
			m_unknown_b = false;
		}
	}
}

void DrivingManeuver::UnknownStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	if ((false == m_turnLeft_b)
		&& (false == m_turnRight_b)
		&& (false == m_leftLaneChange_b)
		&& (false == m_rightLaneChange_b)
		&& (false == m_straight_b)
		)
	{
		m_unknown_b = true;
	}
	
}

void DrivingManeuver::StraightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st)
{
	float t_thresholdFromUnown2Straight = Interp1(P_Veh2Yawrate_Arr, P_MaxYawrate2DiffVxWithinDrStrgt_Arr, 6, t_veh_state.vRef);
	float t_halfWidthOfEgoVehicle = 0.5*GetEgoVehicleWidth_f();
	
	if (DM_LEFTLANECHANGE == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] + t_halfWidthOfEgoVehicle <t_lanemodel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] + t_halfWidthOfEgoVehicle < t_lanemodel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f)
			&& (fabsf(t_veh_state.YrsF) < t_thresholdFromUnown2Straight)//TODO modify the param depend on data
			)
		{
			m_leftLaneChange_b = false;
			m_straight_b = true;
		}
	}
	else if (DM_RIGHTLANECHANGE == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > t_halfWidthOfEgoVehicle)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > t_halfWidthOfEgoVehicle)
			&& (fabsf(t_veh_state.YrsF) < t_thresholdFromUnown2Straight)//TODO modify the param depend on data
			)
		{
			m_rightLaneChange_b = false;
			m_straight_b = true;
		}
	}
	else if (DM_TURN_LEFT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] + t_halfWidthOfEgoVehicle < t_lanemodel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] + t_halfWidthOfEgoVehicle < t_lanemodel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f)
			&& (fabsf(t_veh_state.YrsF) < t_thresholdFromUnown2Straight)//TODO modify the param depend on data
			&& (fabsf(m_yawChange1s) < 0.05)
			)
		{
			m_turnLeft_b = false;
			m_straight_b = true;
		}
	}
	else if (DM_TURN_RIGHT == m_drivingManeuver)
	{
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > t_halfWidthOfEgoVehicle)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > t_halfWidthOfEgoVehicle)
			&& (fabsf(t_veh_state.YrsF) < t_thresholdFromUnown2Straight)//TODO modify the param depend on data
			&& (fabsf(m_yawChange1s) < 0.05)
			)
		{
			m_turnRight_b = false;
			m_straight_b = true;
		}
	}
	else if (DM_UNKNOWN == m_drivingManeuver)
	{
		
		if ((true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_k1_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > t_halfWidthOfEgoVehicle)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].available_b)
			&& (true == t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].available_b)
			&& (t_lanemodel_output_st.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] > t_halfWidthOfEgoVehicle)
			&& (fabsf(t_veh_state.YrsF) < t_thresholdFromUnown2Straight)//TODO modify the param depend on data
			&& (fabsf(m_yawChange1s) < 0.03)
			)
		{
			m_straight_b = true;
			m_leftLaneChange_b = false;
			m_rightLaneChange_b = false;
			m_turnLeft_b = false;
			m_turnRight_b = false;
			m_unknown_b = false;
		}
	}
	else
	{

	}
}