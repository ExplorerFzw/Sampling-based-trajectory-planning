#ifndef DRIVINGTASK_H_
#define DRIVINGTASK_H_
#include"lm_common_defines.h"
enum DRIVING_TASK_EM
{
	DT_UNKNOWN = 0,
	DT_LEFTLANECHANGE = 1,
	DT_RIGHTLANECHANGE = 2,
	DT_TURN_LEFT = 3,
	DT_TURN_RIGHT = 4,
	DT_STRAIGHT = 5
};
class DRIVINGTASK
{
public:
	DRIVINGTASK();
	~DRIVINGTASK() { };
	void Calc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st,VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	uint8_t GetDrivingTask_un8() { return m_drivingTask; }
	uint8_t GetDrivingTaskK1_un8() { return m_drivingTaskK1; }
private:
	void LeftLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void RightLaneChangeStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void TurnLeftStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void TurnRightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void StraightStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void UnknownStateCalc_V(LANE_MODEL_OUTPUT_ST& t_lanemodel_k1_st, LANE_MODEL_OUTPUT_ST& t_lanemodel_output_st, VEHSTATE_ST& t_veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	uint8_t m_drivingTask;
	uint8_t m_drivingTaskK1;
	bool m_leftLaneChange_b;
	bool m_rightLaneChange_b;
	bool m_turnLeft_b;
	bool m_turnRight_b;
	bool m_straight_b;
	bool m_unknown_b;
	
};

#endif
