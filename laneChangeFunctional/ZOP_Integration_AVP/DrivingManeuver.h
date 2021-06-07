#ifndef DRIVINGTASK_H_
#define DRIVINGTASK_H_
#include"LMCommonDefines.h"

enum DRIVING_MANUVER_EM
{
	DM_UNKNOWN = 0,
	DM_LEFTLANECHANGE = 1,
	DM_RIGHTLANECHANGE = 2,
	DM_TURN_LEFT = 3,
	DM_TURN_RIGHT = 4,
	DM_STRAIGHT = 5
};
class DrivingManeuver
{
public:
	DrivingManeuver();
	~DrivingManeuver() { };
	void Init_V();
	void Calc_V(VEHMOVBUFFINFO_ST& t_yaw_st, VEHMOVBUFFINFO_ST& t_yawRate_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st,VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	uint8_t& GetDrivingManeuver_un8() { return m_drivingManeuver; }
	uint8_t& GetDrivingManeuverK1_un8() { return m_drivingManeuverK1; }
	uint8_t& GetLastDMState_un8() { return m_lastDMState; }
private:
	void LeftLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void RightLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void TurnLeftStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void TurnRightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void StraightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void UnknownStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	uint8_t m_drivingManeuver;
	uint8_t m_drivingManeuverK1;
	uint8_t m_lastDMState;
	float m_yawChange1s;
	float m_yawChange2s;
	bool m_leftLaneChange_b;
	bool m_rightLaneChange_b;
	bool m_turnLeft_b;
	bool m_turnRight_b;
	bool m_straight_b;
	bool m_unknown_b;
	
};

#endif
