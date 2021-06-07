#include "TOS_PP.h"
#include"adapters.h"
#include"lm_math_lib.h"



TOS_PP::TOS_PP():
	m_tos_obj_within_lane_st(),
	m_probEgoVehicleWithinLane_st()
{

}

void TOS_PP::Init()
{
	// object
	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
	{
		m_tos_obj_within_lane_st.m_obj_list_index_un8[t_i] = MAX_UN8;
		m_tos_obj_within_lane_st.m_valid[t_i] = false;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].Index_un8 = MAX_UN8;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[0] = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[1] = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[2] = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[3] = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[4] = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].trackingTimeWithinLane_un16 = 0;
		m_tos_obj_within_lane_st.m_withinLaneId[t_i] = MAX_UN8;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutIn_f = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutOut_f = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].overlap_f = NULL_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].TTC_f = MAX_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dx = MAX_F;
		m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dy = MAX_F;
	}

	// ego vehicle
	m_probEgoVehicleWithinLane_st.m_egoLaneId = MAX_UN8;
	m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[0] = NULL_F;
	m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[1] = NULL_F;
	m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[2] = NULL_F;
	m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[3] = NULL_F;
	m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[4] = NULL_F;
}
void TOS_PP::Calc_v(FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st, VEHSTATE_ST& t_vehState_st)
{
	ProbWithinLanes(fus_output_st,laneModel_output_st, obj_list_by_bc_check_st, t_vehState_st);
	Order4ObjList(fus_output_st);
	FiltObj4EachLane(fus_output_st,laneModel_output_st,obj_list_by_bc_check_st,t_vehState_st);
}

//uint8_t TOS_PP::FindLaneIdOfObject_un8(FUSION_OBJ_OUTPUT_ST& fus_output_st,LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st,uint8_t t_num)
//{
//	uint8_t t_lane_id = MAX_UN8;
//	float t_obj_dx = fus_output_st.objects[t_num].obj_estimate.longPosition;
//	float t_obj_dy = fus_output_st.objects[t_num].obj_estimate.latPosition;
//	float t_obj_width = fus_output_st.objects[t_num].obj_information.width;
//	float t_objLeftSide2MiddleCenter_f = MAX_F;
//	float t_objRightSide2MiddleCenter_f = MAX_F;
//	float t_objCenter2MiddleLaneCenter_f = MAX_F;
//	if ((true == obj_list_by_bc_check_st.valid_b[t_num]) &&
//		(true == laneModel_output_st.lanes_st[MIDDLE_LANE].available_b)&&
//		(laneModel_output_st.lanes_st[MIDDLE_LANE].front_lane_length_f > t_obj_dx)&&
//		(laneModel_output_st.lanes_st[MIDDLE_LANE].rear_lane_length_f < t_obj_dx)
//		)
//	{
//		for (uint8_t t_j = 0; t_j < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_j++)
//		{
//			float t_c0 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[0];
//			float t_c1 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[1];
//			float t_c2 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[2];
//			float t_c3 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[3];
//			float t_LL_Lane_width = laneModel_output_st.lanes_st[LEFT_LEFT_LANE].lane_dwidth_f;
//			float t_L_Lane_width = laneModel_output_st.lanes_st[LEFT_LANE].lane_dwidth_f;
//			float t_M_Lane_width = laneModel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f;
//			float t_R_Lane_width = laneModel_output_st.lanes_st[RIGHT_LANE].lane_dwidth_f;
//			float t_RR_Lane_width = laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].lane_dwidth_f;
//			float t_dLLL_line2MiddleLane = t_LL_Lane_width + t_L_Lane_width + 0.5* t_M_Lane_width;
//			float t_dLL_line2MiddleLane =t_L_Lane_width + 0.5 * t_M_Lane_width;
//			float t_dL_line2MiddleLane = 0.5 * t_M_Lane_width;
//			float t_dR_line2MiddleLane = -0.5 * t_M_Lane_width;
//			float t_dRR_line2MiddleLane = -0.5 * t_M_Lane_width - t_R_Lane_width;
//			float t_dRRR_line2MiddleLane = -0.5 * t_M_Lane_width - t_R_Lane_width - t_RR_Lane_width;
//			if ((t_obj_dx <= laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].dupperLimit_f)&&
//				(fabsf(t_c0)< 1)&&
//				(fabsf(t_c1) < 1)&&
//				(fabsf(t_c2) < 1)&&
//				(fabsf(t_c3) < 1)
//				)
//			{
//				
//				t_objCenter2MiddleLaneCenter_f = t_M_Lane_width *0.5 + t_obj_dx * t_c1 + t_obj_dx * t_c1 * t_c1 + t_obj_dx * t_c1 * t_c1 * t_c1;
//				t_objRightSide2MiddleCenter_f = t_objCenter2MiddleLaneCenter_f - 0.5 * t_obj_width;
//				t_objLeftSide2MiddleCenter_f = t_objCenter2MiddleLaneCenter_f + 0.5 * t_obj_width;
//				float t_probL_f = NULL_F;
//				float t_probM_f = NULL_F;
//				float t_probR_f = NULL_F;
//				float t_d_l = NULL_F;
//				float t_d_r = NULL_F;
//				float t_laneHalfWidth = NULL_F;
//				if ((t_objRightSide2MiddleCenter_f > t_dLLL_line2MiddleLane)||
//					(t_objLeftSide2MiddleCenter_f < t_dRRR_line2MiddleLane))
//				{
//					t_lane_id = MAX_UN8;
//					t_probL_f = NULL_F;
//					t_probM_f = NULL_F;
//					t_probR_f = NULL_F;
//					
//				}
//				else if (t_objCenter2MiddleLaneCenter_f > t_dLL_line2MiddleLane)
//				{
//					t_lane_id = LEFT_LEFT_LANE;
//					t_d_l = t_objLeftSide2MiddleCenter_f - t_LL_Lane_width * 0.5 - t_L_Lane_width - t_M_Lane_width * 0.5;
//					t_d_r = t_objRightSide2MiddleCenter_f - t_LL_Lane_width * 0.5 - t_L_Lane_width - t_M_Lane_width * 0.5;
//					t_laneHalfWidth = t_LL_Lane_width * 0.5;
//					ProbWithinLane4Obj_f(t_probL_f, t_probM_f, t_probR_f, t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
//				}
//				else if (t_objCenter2MiddleLaneCenter_f > t_dL_line2MiddleLane)
//				{
//					t_lane_id = LEFT_LANE;
//					t_d_l = t_objLeftSide2MiddleCenter_f - t_L_Lane_width * 0.5 - t_M_Lane_width * 0.5;
//					t_d_r = t_objRightSide2MiddleCenter_f - t_L_Lane_width * 0.5 - t_M_Lane_width * 0.5;
//					t_laneHalfWidth = t_L_Lane_width * 0.5;
//					ProbWithinLane4Obj_f(t_probL_f, t_probM_f, t_probR_f, t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
//				}
//				else if (t_objCenter2MiddleLaneCenter_f > t_dR_line2MiddleLane)
//				{
//					t_lane_id = MIDDLE_LANE;
//					t_d_l = t_objLeftSide2MiddleCenter_f;
//					t_d_r = t_objRightSide2MiddleCenter_f;
//					t_laneHalfWidth = t_M_Lane_width*0.5;
//					ProbWithinLane4Obj_f(t_probL_f, t_probM_f,t_probR_f, t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
//				}
//				else if (t_objCenter2MiddleLaneCenter_f > t_dRR_line2MiddleLane)
//				{
//					t_lane_id = RIGHT_LANE;
//					t_d_l = t_objLeftSide2MiddleCenter_f + t_R_Lane_width * 0.5 + t_M_Lane_width * 0.5;
//					t_d_r = t_objRightSide2MiddleCenter_f + t_R_Lane_width * 0.5 + t_M_Lane_width * 0.5;
//					t_laneHalfWidth = t_R_Lane_width * 0.5;
//					ProbWithinLane4Obj_f(t_probL_f, t_probM_f, t_probR_f, t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
//				}
//				else
//				{
//					t_lane_id = RIGHT_RIGHT_LANE;
//					t_d_l = t_objLeftSide2MiddleCenter_f + t_RR_Lane_width * 0.5 + t_RR_Lane_width  + t_M_Lane_width * 0.5;
//					t_d_r = t_objRightSide2MiddleCenter_f + t_RR_Lane_width * 0.5 + t_RR_Lane_width+ t_M_Lane_width * 0.5;
//					t_laneHalfWidth = t_RR_Lane_width * 0.5;
//					ProbWithinLane4Obj_f(t_probL_f, t_probM_f, t_probR_f, t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
//				}
//				break;
//			}
//
//		}
//
//	}
//
//	return t_lane_id;
//}
void TOS_PP::ProbWithinLane4Obj_f(float &t_probL_f, float &t_probM_f, float &t_probR_f, float t_d_l, float t_d_r, float t_objWidth,float t_laneHalfWidth)
{
	float t_minWidth = 0.2;
	t_objWidth = MAX_TP(t_objWidth, t_minWidth);
	
	if ((t_d_r >= -t_laneHalfWidth) && (t_d_l <= t_laneHalfWidth)
		)
	{
		t_probL_f = NULL_F;
		t_probM_f = float(1.0);
		t_probR_f = NULL_F;
	}
	else if (t_d_r < -t_laneHalfWidth)
	{
		t_probL_f = NULL_F;
		t_probM_f = float((t_laneHalfWidth + t_d_l) / t_objWidth); 
		t_probR_f = float(1.0 - t_probM_f);
	}
	else
	{
		t_probL_f = float((t_d_l - t_laneHalfWidth) / t_objWidth);
		t_probM_f =  float(1.0 - t_probL_f);
		t_probR_f = NULL_F;
	}
}
void TOS_PP::ProbWithinLanes(FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st, VEHSTATE_ST& t_vehState_st)
{
	uint8_t t_lane_id = MAX_UN8;
	float t_obj_dx = MAX_F;
	float t_obj_dy = MAX_F;
	float t_obj_width = MAX_F;
	float t_objLeftSide2MiddleCenter_f = MAX_F;
	float t_objRightSide2MiddleCenter_f = MAX_F;
	float t_objCenter2MiddleLaneCenter_f = MAX_F;
	float t_c0 = NULL_F;
	float t_c1 = NULL_F;
	float t_c2 = NULL_F;
	float t_c3 = NULL_F;
	float t_LL_Lane_width = NULL_F;
	float t_L_Lane_width = NULL_F;
	float t_M_Lane_width = NULL_F;
	float t_R_Lane_width = NULL_F;
	float t_RR_Lane_width = NULL_F;
	float t_dLLL_line2MiddleLane = NULL_F;
	float t_dLL_line2MiddleLane = NULL_F;
	float t_dL_line2MiddleLane = NULL_F;
	float t_dR_line2MiddleLane = NULL_F;
	float t_dRR_line2MiddleLane = NULL_F;
	float t_dRRR_line2MiddleLane = NULL_F;
	float t_probWithinLane[LM_MAX_NUMBER_OF_LANES] = { NULL_F,NULL_F,NULL_F,NULL_F,NULL_F };
	float t_d_l = NULL_F;
	float t_d_r = NULL_F;
	float t_laneHalfWidth = NULL_F;
	float t_egoVehWidth_f = GetEgoVehicleWidth_f();
	float t_ego2LeftLine = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[LM_START_NUMBER_OF_FRONT_COURSE_LIMITS].coef_arr_f[0];
	float t_ego2RightLine = t_ego2LeftLine - laneModel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f;
	float t_egoVeh2MiddleLaneCenter_f = (t_ego2LeftLine + t_ego2RightLine) / 2;
	float t_egoVehRightSide2MiddleCenter_f = -MAX_F;
	float t_egoVehLeftSide2MiddleCenter_f = MAX_F;


	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)//just for front object TODO
	{
		t_obj_dx = fus_output_st.objects[t_i].obj_estimate.longPosition;
		t_obj_dy = fus_output_st.objects[t_i].obj_estimate.latPosition;
		t_obj_width = fus_output_st.objects[t_i].obj_information.width;
		t_objLeftSide2MiddleCenter_f = MAX_F;
		t_objRightSide2MiddleCenter_f = MAX_F;
		t_objCenter2MiddleLaneCenter_f = MAX_F;
		if ((true == obj_list_by_bc_check_st.valid_b[t_i]) &&
			(true == laneModel_output_st.lanes_st[MIDDLE_LANE].available_b) &&
			(laneModel_output_st.lanes_st[MIDDLE_LANE].front_lane_length_f > t_obj_dx) &&
			(laneModel_output_st.lanes_st[MIDDLE_LANE].rear_lane_length_f < t_obj_dx)
			)
		{
			for (uint8_t t_j = 0; t_j < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_j++)
			{
				t_c0 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[0];
				t_c1 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[1];
				t_c2 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[2];
				t_c3 = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].coef_arr_f[3];
				t_LL_Lane_width = laneModel_output_st.lanes_st[LEFT_LEFT_LANE].lane_dwidth_f;
				t_L_Lane_width = laneModel_output_st.lanes_st[LEFT_LANE].lane_dwidth_f;
				t_M_Lane_width = laneModel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f;
				t_R_Lane_width = laneModel_output_st.lanes_st[RIGHT_LANE].lane_dwidth_f;
				t_RR_Lane_width = laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].lane_dwidth_f;
				t_dLLL_line2MiddleLane = t_LL_Lane_width + t_L_Lane_width + 0.5 * t_M_Lane_width;
				t_dLL_line2MiddleLane = t_L_Lane_width + 0.5 * t_M_Lane_width;
				t_dL_line2MiddleLane = 0.5 * t_M_Lane_width;
				t_dR_line2MiddleLane = -0.5 * t_M_Lane_width;
				t_dRR_line2MiddleLane = -0.5 * t_M_Lane_width - t_R_Lane_width;
				t_dRRR_line2MiddleLane = -0.5 * t_M_Lane_width - t_R_Lane_width - t_RR_Lane_width;
				if ((t_obj_dx <= laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[t_j].dupperLimit_f) &&
					(fabsf(t_c0) < 12) &&
					(fabsf(t_c1) < 1) &&
					(fabsf(t_c2) < 1) &&
					(fabsf(t_c3) < 1)
					)
				{

					t_objCenter2MiddleLaneCenter_f = t_obj_dy - t_egoVeh2MiddleLaneCenter_f - ( t_c1* t_obj_dx + t_c2*t_obj_dx * t_obj_dx + t_c3*t_obj_dx * t_obj_dx * t_obj_dx);
					t_objRightSide2MiddleCenter_f = t_objCenter2MiddleLaneCenter_f - 0.5 * t_obj_width;
					t_objLeftSide2MiddleCenter_f = t_objCenter2MiddleLaneCenter_f + 0.5 * t_obj_width;
					if ((t_objRightSide2MiddleCenter_f > t_dLLL_line2MiddleLane) ||
						(t_objLeftSide2MiddleCenter_f < t_dRRR_line2MiddleLane))
					{
						t_lane_id = MAX_UN8;
						t_probWithinLane[0] = NULL_F;
						t_probWithinLane[1] = NULL_F;
						t_probWithinLane[2] = NULL_F;
						t_probWithinLane[3] = NULL_F;
						t_probWithinLane[4] = NULL_F;

					}
					else if (t_objCenter2MiddleLaneCenter_f > t_dLL_line2MiddleLane)
					{
						t_lane_id = LEFT_LEFT_LANE;
						t_d_l = t_objLeftSide2MiddleCenter_f - t_LL_Lane_width * 0.5 - t_L_Lane_width - t_M_Lane_width * 0.5;
						t_d_r = t_objRightSide2MiddleCenter_f - t_LL_Lane_width * 0.5 - t_L_Lane_width - t_M_Lane_width * 0.5;
						t_laneHalfWidth = t_LL_Lane_width * 0.5;
						float t_tem = 0;
						ProbWithinLane4Obj_f(t_tem, t_probWithinLane[0], t_probWithinLane[1], t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
						t_probWithinLane[2] = NULL_F;
						t_probWithinLane[3] = NULL_F;
						t_probWithinLane[4] = NULL_F;
					}
					else if (t_objCenter2MiddleLaneCenter_f > t_dL_line2MiddleLane)
					{
						t_lane_id = LEFT_LANE;
						t_d_l = t_objLeftSide2MiddleCenter_f - t_L_Lane_width * 0.5 - t_M_Lane_width * 0.5;
						t_d_r = t_objRightSide2MiddleCenter_f - t_L_Lane_width * 0.5 - t_M_Lane_width * 0.5;
						t_laneHalfWidth = t_L_Lane_width * 0.5;
						ProbWithinLane4Obj_f(t_probWithinLane[0], t_probWithinLane[1], t_probWithinLane[2], t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
						t_probWithinLane[3] = NULL_F;
						t_probWithinLane[4] = NULL_F;
					}
					else if (t_objCenter2MiddleLaneCenter_f > t_dR_line2MiddleLane)
					{
						t_lane_id = MIDDLE_LANE;
						t_d_l = t_objLeftSide2MiddleCenter_f;
						t_d_r = t_objRightSide2MiddleCenter_f;
						t_laneHalfWidth = t_M_Lane_width * 0.5;
						ProbWithinLane4Obj_f(t_probWithinLane[1], t_probWithinLane[2], t_probWithinLane[3], t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
						t_probWithinLane[0] = NULL_F;
						t_probWithinLane[4] = NULL_F;
					}
					else if (t_objCenter2MiddleLaneCenter_f > t_dRR_line2MiddleLane)
					{
						t_lane_id = RIGHT_LANE;
						t_d_l = t_objLeftSide2MiddleCenter_f + t_R_Lane_width * 0.5 + t_M_Lane_width * 0.5;
						t_d_r = t_objRightSide2MiddleCenter_f + t_R_Lane_width * 0.5 + t_M_Lane_width * 0.5;
						t_laneHalfWidth = t_R_Lane_width * 0.5;
						ProbWithinLane4Obj_f(t_probWithinLane[2], t_probWithinLane[3], t_probWithinLane[4], t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
						t_probWithinLane[0] = NULL_F;
						t_probWithinLane[1] = NULL_F;
					}
					else
					{
						t_lane_id = RIGHT_RIGHT_LANE;
						t_d_l = t_objLeftSide2MiddleCenter_f + t_RR_Lane_width * 0.5 + t_RR_Lane_width + t_M_Lane_width * 0.5;
						t_d_r = t_objRightSide2MiddleCenter_f + t_RR_Lane_width * 0.5 + t_RR_Lane_width + t_M_Lane_width * 0.5;
						t_laneHalfWidth = t_RR_Lane_width * 0.5;
						float t_tem;
						ProbWithinLane4Obj_f(t_probWithinLane[3], t_probWithinLane[4], t_tem, t_d_l, t_d_r, t_obj_width, t_laneHalfWidth);
						t_probWithinLane[0] = NULL_F;
						t_probWithinLane[1] = NULL_F;
						t_probWithinLane[2] = NULL_F;

					}
					break;
				}

			}

		}
		else
		{
			t_lane_id = MAX_UN8;
			t_probWithinLane[0] = NULL_F;
			t_probWithinLane[1] = NULL_F;
			t_probWithinLane[2] = NULL_F;
			t_probWithinLane[3] = NULL_F;
			t_probWithinLane[4] = NULL_F;
		}

		// fill in
		if (t_lane_id <= RIGHT_RIGHT_LANE)// valid object
		{
			if ((true == m_tos_obj_within_lane_st.m_valid[t_i])&&
				(m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].ID_un8 == fus_output_st.objects[t_i].obj_property.id))// valid object last cycle
			{
				m_tos_obj_within_lane_st.m_valid[t_i] = true;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].ID_un8 = fus_output_st.objects[t_i].obj_property.id;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dis2EgoLaneCenter = (1-TOS_PP_ProbWithinLaneFiltFactor_f)* m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dis2EgoLaneCenter +(TOS_PP_ProbWithinLaneFiltFactor_f)* t_objCenter2MiddleLaneCenter_f;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[0] = (1 - TOS_PP_ProbWithinLaneFiltFactor_f) *m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[0] + (TOS_PP_ProbWithinLaneFiltFactor_f)* t_probWithinLane[0];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[1] = (1 - TOS_PP_ProbWithinLaneFiltFactor_f) * m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[1] + (TOS_PP_ProbWithinLaneFiltFactor_f) * t_probWithinLane[1];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[2] = (1 - TOS_PP_ProbWithinLaneFiltFactor_f) * m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[2] + (TOS_PP_ProbWithinLaneFiltFactor_f) * t_probWithinLane[2];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[3] = (1 - TOS_PP_ProbWithinLaneFiltFactor_f) * m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[3] + (TOS_PP_ProbWithinLaneFiltFactor_f) * t_probWithinLane[3];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[4] = (1 - TOS_PP_ProbWithinLaneFiltFactor_f) * m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[4] + (TOS_PP_ProbWithinLaneFiltFactor_f) * t_probWithinLane[4];
				if (m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].trackingTimeWithinLane_un16 < MAX_UN16)
				{
					m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].trackingTimeWithinLane_un16 += 1;
				}
				else
				{
					m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].trackingTimeWithinLane_un16 = MAX_UN16;
				}
				uint8_t t_LaneId_k = m_tos_obj_within_lane_st.m_withinLaneId[t_i];
				float t_PLane_K = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[t_LaneId_k];
				float t_PLane_cur = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[t_lane_id];
				if ((m_tos_obj_within_lane_st.m_withinLaneId[t_i] != t_lane_id) &&(t_PLane_K < t_PLane_cur))
				{
					m_tos_obj_within_lane_st.m_withinLaneId[t_i] = t_lane_id;
				}
				else
				{
					//keeping
				}
				float t_probCutIn_f = CutInProbCalc(t_i, fus_output_st, laneModel_output_st);
				float t_probCutOut_f = CutOutProbCalc(t_i, fus_output_st, laneModel_output_st);
				float t_overlap_f = OverLapCalc(t_i, fus_output_st, laneModel_output_st);

				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutIn_f = (TOS_PP_CutInFiltFactor_f) * t_probCutIn_f + (1-TOS_PP_CutInFiltFactor_f) * m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutIn_f;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutOut_f = (TOS_PP_CutOutFiltFactor_f) * t_probCutOut_f + (1 - TOS_PP_CutOutFiltFactor_f) * m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutOut_f;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].overlap_f = (TOS_PP_OverlapFiltFactor_f) * t_overlap_f + (1-TOS_PP_OverlapFiltFactor_f) * m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].overlap_f;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].TTC_f = TTC_Calac(t_i, fus_output_st, t_vehState_st);
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dx = fus_output_st.objects[t_i].obj_estimate.longPosition;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dy = fus_output_st.objects[t_i].obj_estimate.latPosition;

			}
			else// new object
			{
				m_tos_obj_within_lane_st.m_valid[t_i] = true;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].ID_un8 = fus_output_st.objects[t_i].obj_property.id;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dis2EgoLaneCenter = t_objCenter2MiddleLaneCenter_f ;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[0] = t_probWithinLane[0];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[1] = t_probWithinLane[1];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[2] = t_probWithinLane[2];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[3] = t_probWithinLane[3];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[4] = t_probWithinLane[4];
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].trackingTimeWithinLane_un16 = 1;
				m_tos_obj_within_lane_st.m_withinLaneId[t_i] = t_lane_id;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutIn_f = CutInProbCalc(t_i,fus_output_st,laneModel_output_st);
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutOut_f = CutOutProbCalc(t_i, fus_output_st, laneModel_output_st);
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].overlap_f = OverLapCalc(t_i, fus_output_st, laneModel_output_st);
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].TTC_f = TTC_Calac(t_i, fus_output_st, t_vehState_st);
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dx = fus_output_st.objects[t_i].obj_estimate.longPosition;
				m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dy = fus_output_st.objects[t_i].obj_estimate.latPosition;
			}
		}
		else//invalid: case 0; invalid case1: change from valid to invalid
		{
			m_tos_obj_within_lane_st.m_valid[t_i] = false;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].ID_un8 = MAX_UN8;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dis2EgoLaneCenter = MAX_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[0] = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[1] = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[2] = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[3] = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probWithinLane_arr_f[4] = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].trackingTimeWithinLane_un16 = 0;
			m_tos_obj_within_lane_st.m_withinLaneId[t_i] = MAX_UN8;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutIn_f = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].probCutOut_f = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].overlap_f = NULL_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].TTC_f = MAX_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dx = MAX_F;
			m_tos_obj_within_lane_st.m_tarObj_arr_st[t_i].dy = MAX_F;
		}
	}

	// ego vehicle
	// Ego vehicle always stays middle lane
	if (true == laneModel_output_st.lanes_st[MIDDLE_LANE].available_b)
	{
		t_laneHalfWidth = 0.5*laneModel_output_st.lanes_st[MIDDLE_LANE].lane_dwidth_f;
		//t_egoVeh2MiddleLaneCenter_f = laneModel_output_st.lanes_st[MIDDLE_LANE].segments_st[LM_START_NUMBER_OF_FRONT_COURSE_LIMITS].coef_arr_f[0];
		t_egoVehRightSide2MiddleCenter_f = t_egoVeh2MiddleLaneCenter_f - 0.5 * t_egoVehWidth_f;
		t_egoVehLeftSide2MiddleCenter_f = t_egoVeh2MiddleLaneCenter_f + 0.5 * t_egoVehWidth_f;
		ProbWithinLane4Obj_f(t_probWithinLane[LEFT_LANE], t_probWithinLane[MIDDLE_LANE], t_probWithinLane[RIGHT_LANE], t_egoVehLeftSide2MiddleCenter_f, t_egoVehRightSide2MiddleCenter_f, t_egoVehWidth_f, t_laneHalfWidth);
		m_probEgoVehicleWithinLane_st.m_egoLaneId = laneModel_output_st.egoLaneID_un8;
		if ((m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[LEFT_LEFT_LANE] <= FLOAT_EPSILON) &&
			(m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[LEFT_LANE] <= FLOAT_EPSILON) &&
			(m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[MIDDLE_LANE] <= FLOAT_EPSILON) &&
			(m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[RIGHT_LANE] <= FLOAT_EPSILON) &&
			(m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[RIGHT_RIGHT_LANE] <= FLOAT_EPSILON)
			)
		{
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[LEFT_LEFT_LANE] = NULL_F;
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[LEFT_LANE] = t_probWithinLane[LEFT_LANE];
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[MIDDLE_LANE] = t_probWithinLane[MIDDLE_LANE];
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[RIGHT_LANE] = t_probWithinLane[RIGHT_LANE];
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[RIGHT_RIGHT_LANE] = NULL_F;
		}
		else
		{
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[LEFT_LEFT_LANE] = NULL_F;
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[LEFT_LANE] = (TOS_PP_ProbWithinLaneFiltFactor_f) * t_probWithinLane[LEFT_LANE] + (1 - TOS_PP_ProbWithinLaneFiltFactor_f) * m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[LEFT_LANE];
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[MIDDLE_LANE] = (TOS_PP_ProbWithinLaneFiltFactor_f) * t_probWithinLane[MIDDLE_LANE] + (1 - TOS_PP_ProbWithinLaneFiltFactor_f) * m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[MIDDLE_LANE];
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[RIGHT_LANE] = (TOS_PP_ProbWithinLaneFiltFactor_f) * t_probWithinLane[RIGHT_LANE] + (1 - TOS_PP_ProbWithinLaneFiltFactor_f) * m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[RIGHT_LANE];
			m_probEgoVehicleWithinLane_st.m_prob_ego_vehicle_within_Lane[RIGHT_RIGHT_LANE] = NULL_F;
		}
		
	}

}

PROB_EGO_VEHICLE_WITHIN_LANE_ST& TOS_PP::GetProbEgoVehWithinLane_st()
{
	return m_probEgoVehicleWithinLane_st;
}

float TOS_PP::CutInProbCalc(uint8_t t_obj_num, FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st)//just for object in R,L,M Lane
{
	uint8_t t_egoLaneId = laneModel_output_st.egoLaneID_un8;
	float t_prob_f = 0;
	float t_egoLaneWidth_f = laneModel_output_st.lanes_st[t_egoLaneId].lane_dwidth_f;
	float t_obj_ay_f = fus_output_st.objects[t_obj_num].obj_estimate.latAbsoluteAcceleration;
	float t_obj_vy_f = fus_output_st.objects[t_obj_num].obj_estimate.latAbsoluteVelocity;
	float t_obj_width_f = fus_output_st.objects[t_obj_num].obj_information.width;
	float t_dis2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_obj_num].dis2EgoLaneCenter;
	if ((t_dis2EgoLaneCenter > 0.5 * t_obj_width_f) &&// from left lane change to ego lane
		(t_dis2EgoLaneCenter < 0.5 * (t_egoLaneWidth_f +  t_obj_width_f)) &&
		(t_obj_ay_f < TOS_PP_CutInMinAy_f) &&
		(t_obj_vy_f < -TOS_PP_CutInMinVy_f)
		)
	{
		float t_predictTime_f = TOS_PP_CutInPredTime_f;
		float t_dMovingAfterCertainTime = t_obj_vy_f * t_predictTime_f + 0.5 * t_obj_ay_f * t_predictTime_f * t_predictTime_f;
		float t_dPre2CenterLane = t_dMovingAfterCertainTime + t_dis2EgoLaneCenter;
		if (t_dPre2CenterLane <= 0.5 * t_obj_width_f)
		{
			t_prob_f = 1.0;
		}
		else if (t_dPre2CenterLane > 0.5 * (t_egoLaneWidth_f + t_obj_width_f))
		{
			t_prob_f = 0.0;
		}
		else
		{
			t_prob_f = 1.0 - (t_dPre2CenterLane - 0.5 * t_obj_width_f) / (0.5*t_egoLaneWidth_f);
		}
	}
	else if ((t_dis2EgoLaneCenter < (-0.5 * t_obj_width_f)) &&// from right lane change to ego lane
		(t_dis2EgoLaneCenter > (-0.5*(t_egoLaneWidth_f + t_obj_width_f))) &&
		(t_obj_ay_f > -TOS_PP_CutInMinAy_f) &&
		(t_obj_vy_f > TOS_PP_CutInMinVy_f)
		)
	{
		float t_predictTime_f = TOS_PP_CutInPredTime_f;
		float t_dMovingAfterCertainTime = t_obj_vy_f * t_predictTime_f + 0.5 * t_obj_ay_f * t_predictTime_f * t_predictTime_f;
		float t_dPre2CenterLane = t_dMovingAfterCertainTime + t_dis2EgoLaneCenter;
		if (t_dPre2CenterLane >= -0.5 * t_obj_width_f)
		{
			t_prob_f = 1.0;
		}
		else if (t_dPre2CenterLane < (-0.5 * (t_egoLaneWidth_f + t_obj_width_f)))
		{
			t_prob_f = 0.0;
		}
		else
		{
			t_prob_f = 1.0 + (t_dPre2CenterLane + 0.5 * t_obj_width_f) / (0.5 * t_egoLaneWidth_f);
		}

	}
	else
	{
		t_prob_f = 0;
	}
	return t_prob_f;
}
float TOS_PP::CutOutProbCalc(uint8_t t_obj_num, FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st)//just for object in R,L,M Lane
{
	uint8_t t_egoLaneId = laneModel_output_st.egoLaneID_un8;
	float t_prob_f = 0;
	float t_egoLaneWidth_f = laneModel_output_st.lanes_st[t_egoLaneId].lane_dwidth_f;
	float t_obj_ay_f = fus_output_st.objects[t_obj_num].obj_estimate.latAbsoluteAcceleration;
	float t_obj_vy_f = fus_output_st.objects[t_obj_num].obj_estimate.latAbsoluteVelocity;
	float t_obj_width_f = fus_output_st.objects[t_obj_num].obj_information.width;
	float t_dis2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_obj_num].dis2EgoLaneCenter;
	if ((t_dis2EgoLaneCenter > 0.5 * t_obj_width_f) &&// from ego lane change to left lane
		(t_dis2EgoLaneCenter < 0.5 * (t_egoLaneWidth_f + t_obj_width_f)) &&
		(t_obj_ay_f > -TOS_PP_CutOutMinAy_f) &&
		(t_obj_vy_f > TOS_PP_CutOutMinVy_f)
		)
	{
		float t_predictTime_f = TOS_PP_CutOutPredTime_f;
		float t_dMovingAfterCertainTime = t_obj_vy_f * t_predictTime_f + 0.5 * t_obj_ay_f * t_predictTime_f * t_predictTime_f;
		float t_dPre2CenterLane = t_dMovingAfterCertainTime + t_dis2EgoLaneCenter;
		if (t_dPre2CenterLane >= 0.5 * t_obj_width_f + 0.5 * t_egoLaneWidth_f)
		{
			t_prob_f = 1.0;
		}
		else if (t_dPre2CenterLane <= 0.5 * t_obj_width_f)
		{
			t_prob_f = 0.0;
		}
		else
		{
			t_prob_f = (t_dPre2CenterLane - 0.5 * t_obj_width_f) / (0.5 * t_egoLaneWidth_f);
		}
	}
	else if ((t_dis2EgoLaneCenter < (-0.5 * t_obj_width_f)) &&// from ego lane change to right lane
		(t_dis2EgoLaneCenter > (-0.5 * (t_egoLaneWidth_f + t_obj_width_f))) &&
		(t_obj_ay_f < TOS_PP_CutOutMinAy_f) &&
		(t_obj_vy_f < - TOS_PP_CutOutMinVy_f)
		)
	{
		float t_predictTime_f = TOS_PP_CutInPredTime_f;
		float t_dMovingAfterCertainTime = t_obj_vy_f * t_predictTime_f + 0.5 * t_obj_ay_f * t_predictTime_f * t_predictTime_f;
		float t_dPre2CenterLane = t_dMovingAfterCertainTime + t_dis2EgoLaneCenter;
		if (t_dPre2CenterLane >= -0.5 * t_obj_width_f)
		{
			t_prob_f = 0.0;
		}
		else if (t_dPre2CenterLane <= -(0.5 * t_obj_width_f + 0.5 * t_egoLaneWidth_f))
		{
			t_prob_f = 1.0;
		}
		else
		{
			t_prob_f = -(t_dPre2CenterLane + 0.5 * t_obj_width_f) / (0.5 * t_egoLaneWidth_f);
		}

	}
	else
	{
		t_prob_f = 0;
	}
	return t_prob_f;
}

float TOS_PP::OverLapCalc(uint8_t t_obj_num, FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st)// just for object in R ,L ,M Lane
{
	uint8_t t_egoLaneId = laneModel_output_st.egoLaneID_un8;
	float t_overlap_f = 0;
	float t_EgoVehicleWidth = GetEgoVehicleWidth_f();
	float t_EgoVehHalfWidth = 0.5 * t_EgoVehicleWidth;
	float t_egoLaneWidth_f = laneModel_output_st.lanes_st[t_egoLaneId].lane_dwidth_f;
	float t_egoLaneHalfWidth_f = 0.5*t_egoLaneWidth_f;
	float t_obj_ay_f = fus_output_st.objects[t_obj_num].obj_estimate.latAbsoluteAcceleration;
	float t_obj_vy_f = fus_output_st.objects[t_obj_num].obj_estimate.latAbsoluteVelocity;
	float t_obj_width_f = fus_output_st.objects[t_obj_num].obj_information.width;
	float t_objHalfWidth_f = 0.5 * t_obj_width_f;
	float t_disObj2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_obj_num].dis2EgoLaneCenter;
	float t_disEgoVehicle2EgoLaneCenter = t_egoLaneHalfWidth_f - laneModel_output_st.lanes_st[t_egoLaneId].segments_st[LM_START_NUMBER_OF_FRONT_COURSE_LIMITS].coef_arr_f[0];

	if ((true == laneModel_output_st.lanes_st[t_egoLaneId].available_b) &&
		(true == m_tos_obj_within_lane_st.m_valid[t_obj_num]) &&
		(t_disEgoVehicle2EgoLaneCenter > (-t_EgoVehHalfWidth - t_EgoVehHalfWidth)) &&
		(t_disEgoVehicle2EgoLaneCenter < (t_EgoVehHalfWidth + t_EgoVehHalfWidth)) &&
		(t_disObj2EgoLaneCenter > (-t_EgoVehHalfWidth - t_EgoVehHalfWidth)) &&
		(t_disObj2EgoLaneCenter < (t_EgoVehHalfWidth + t_EgoVehHalfWidth))
		)
	{
		float t_dEgoRightSide2EgoLaneCenter = t_disEgoVehicle2EgoLaneCenter - t_EgoVehHalfWidth;
		float t_dEgoLeftSide2EgoLaneCenter = t_disEgoVehicle2EgoLaneCenter + t_EgoVehHalfWidth;
		float t_dObjRightSide2EgoLaneCenter = t_disObj2EgoLaneCenter - t_objHalfWidth_f;
		float t_dObjLeftSide2EgoLaneCenter = t_disObj2EgoLaneCenter + t_objHalfWidth_f;
		if ((t_dEgoRightSide2EgoLaneCenter >= t_dObjLeftSide2EgoLaneCenter) ||
			(t_dEgoLeftSide2EgoLaneCenter <= t_dObjRightSide2EgoLaneCenter)
			)
		{
			t_overlap_f = 0.0;
		}
		else
		{
			float t_deltaRightSide = fabsf(t_dEgoRightSide2EgoLaneCenter - t_dObjRightSide2EgoLaneCenter);
			float t_deltaLeftSide = fabsf(t_dEgoLeftSide2EgoLaneCenter - t_dObjLeftSide2EgoLaneCenter);
			t_overlap_f = 0.5 * (t_obj_width_f + t_EgoVehicleWidth - t_deltaRightSide - t_deltaLeftSide);
		}
	}
	return t_overlap_f;
}

void TOS_PP::Order4ObjList(FUSION_OBJ_OUTPUT_ST& fus_output_st)
{
	uint8_t t_num = 0, t_tem = 0;
	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
	{
		if (true == m_tos_obj_within_lane_st.m_valid[t_i])
		{
			m_tos_obj_within_lane_st.m_obj_list_index_un8[t_num] = t_i;//fus_output_st.objects[t_i].obj_estimate.longPosition;
			t_num++;
		}
		else
		{
			m_tos_obj_within_lane_st.m_obj_list_index_un8[FUS_MAX_OBJ_NUM - t_num - 1] = MAX_UN8;
		}
	}

	for (uint8_t t_j = 0; t_j < t_num; t_j++)
	{
		for (uint8_t t_k = t_j+1; t_k < t_num; t_k++)
		{
			uint8_t t_index1 = m_tos_obj_within_lane_st.m_obj_list_index_un8[t_j];
			uint8_t t_index2 = m_tos_obj_within_lane_st.m_obj_list_index_un8[t_k];
			float t_dx1 = fus_output_st.objects[t_index1].obj_estimate.longPosition;
			float t_dx2 = fus_output_st.objects[t_index2].obj_estimate.longPosition;

			if (fabsf(t_dx1) > fabsf(t_dx2))
			{
				m_tos_obj_within_lane_st.m_obj_list_index_un8[t_j] = t_index2;
				m_tos_obj_within_lane_st.m_obj_list_index_un8[t_k] = t_index1;
			}
		}
	}
}
TOS_OBJ_PROB_WITHIN_LANE& TOS_PP::GetTosObjWithinLane_st()
{
	return m_tos_obj_within_lane_st;
}

float TOS_PP::TTC_Calac(uint8_t t_index,FUSION_OBJ_OUTPUT_ST& fus_output_st, VEHSTATE_ST& t_vehState_st)
{
	float t_ttc = MAX_F;
	float t_max = 60;
	if ((true == m_tos_obj_within_lane_st.m_valid[t_index]) &&
		(m_tos_obj_within_lane_st.m_withinLaneId[t_index] >= LEFT_LANE) &&
		(m_tos_obj_within_lane_st.m_withinLaneId[t_index] <= RIGHT_LANE) &&
		(t_vehState_st.vRef > 0)
		)
	{
		float t_dRel = fus_output_st.objects[t_index].obj_estimate.longPosition;
		float t_dDrontBumper = GetEgoVehicleFrontBumper_f();
		float t_dRearBumper = GetEgoVehicleRearBumper_f();
		float t_dobjLength = fus_output_st.objects[t_index].obj_information.length;
		float t_dMin = t_dDrontBumper + t_dRearBumper + t_dobjLength;
		float t_vRel = fus_output_st.objects[t_index].obj_estimate.longRelativeVelocity;

		if (fabsf(t_dRel) <= t_dMin)
		{
			t_ttc = 0;
		}
		else if (t_dRel > t_dMin)// in front
		{
			if (t_vRel < -0.3)
			{
				t_ttc = -(t_dRel - t_dDrontBumper - 0.5 * t_dobjLength) / t_vRel;
			}
			else
			{
				t_ttc = MAX_F;
			}
		}
		else//in rear
		{
			if (t_vRel > 0.3)
			{
				t_ttc = -(t_dRel + t_dDrontBumper + 0.5 * t_dobjLength) / t_vRel;
			}
			else
			{
				t_ttc = MAX_F;
			}
		}

	}
	else
	{
		t_ttc = MAX_F;
	}

	t_ttc = MIN_TP(t_ttc, t_max);
	return t_ttc;

}

void TOS_PP::FiltObj4EachLane(FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st, VEHSTATE_ST& t_vehState_st)
{
	
	uint8_t t_index = MAX_UN8;
	uint8_t t_count_LLLane = NULL_UN8, t_count_LLane = NULL_UN8, t_count_EgoLane = NULL_UN8, t_count_RLane = NULL_UN8, t_count_RRLane = NULL_UN8;
	uint8_t t_LaneId = MAX_UN8;
	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
	{
		t_index = m_tos_obj_within_lane_st.m_obj_list_index_un8[t_i];
		t_LaneId = m_tos_obj_within_lane_st.m_withinLaneId[t_index];
		if ((true == m_tos_obj_within_lane_st.m_valid[t_index]) && (t_index != MAX_UN8))
		{
			
			switch (t_LaneId)
			{
			case LEFT_LEFT_LANE:
			{
				if (t_count_LLLane <= TARGET_OBJECT_NUM_WITHIN_LANE)
				{
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].dis2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dis2EgoLaneCenter;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].TTC_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].ID_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].ID_un8;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].Index_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].Index_un8;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].probWithinLane_arr_f[0] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[0];
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].probWithinLane_arr_f[1] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[1];
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].probWithinLane_arr_f[2] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[2];
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].probWithinLane_arr_f[3] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[3];
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].probWithinLane_arr_f[4] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[4];
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].probCutIn_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutIn_f;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].probCutOut_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutOut_f;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].overlap_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].overlap_f;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].trackingTimeWithinLane_un16 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].trackingTimeWithinLane_un16;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].dx = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dx;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].ObjectList_st[t_count_LLLane].dy = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dy;
					t_count_LLLane++;
					laneModel_output_st.lanes_st[LEFT_LEFT_LANE].objectNum_un8 = t_count_LLLane;
				}
				break;
			}
			case LEFT_LANE:
			{
				if (t_count_LLane <= TARGET_OBJECT_NUM_WITHIN_LANE)
				{
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].dis2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dis2EgoLaneCenter;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].TTC_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].ID_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].ID_un8;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].Index_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].Index_un8;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].probWithinLane_arr_f[0] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[0];
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].probWithinLane_arr_f[1] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[1];
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].probWithinLane_arr_f[2] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[2];
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].probWithinLane_arr_f[3] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[3];
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].probWithinLane_arr_f[4] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[4];
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].probCutIn_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutIn_f;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].probCutOut_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutOut_f;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].overlap_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].overlap_f;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].trackingTimeWithinLane_un16 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].trackingTimeWithinLane_un16;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].dx = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dx;
					laneModel_output_st.lanes_st[LEFT_LANE].ObjectList_st[t_count_LLane].dy = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dy;
					t_count_LLane++;
					laneModel_output_st.lanes_st[LEFT_LANE].objectNum_un8 = t_count_LLane;
				}
				break;
			}	
			case MIDDLE_LANE:
			{
				if (t_count_EgoLane <= TARGET_OBJECT_NUM_WITHIN_LANE)
				{
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].dis2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dis2EgoLaneCenter;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].TTC_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].ID_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].ID_un8;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].Index_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].Index_un8;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].probWithinLane_arr_f[0] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[0];
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].probWithinLane_arr_f[1] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[1];
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].probWithinLane_arr_f[2] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[2];
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].probWithinLane_arr_f[3] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[3];
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].probWithinLane_arr_f[4] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[4];
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].probCutIn_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutIn_f;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].probCutOut_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutOut_f;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].overlap_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].overlap_f;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].trackingTimeWithinLane_un16 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].trackingTimeWithinLane_un16;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].dx = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dx;
					laneModel_output_st.lanes_st[MIDDLE_LANE].ObjectList_st[t_count_EgoLane].dy = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dy;
					t_count_EgoLane++;
					laneModel_output_st.lanes_st[MIDDLE_LANE].objectNum_un8 = t_count_EgoLane;
				}
				break;
			}
			case RIGHT_LANE:
			{
				if (t_count_RLane <= TARGET_OBJECT_NUM_WITHIN_LANE)
				{
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].dis2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dis2EgoLaneCenter;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].TTC_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].ID_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].ID_un8;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].Index_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].Index_un8;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].probWithinLane_arr_f[0] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[0];
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].probWithinLane_arr_f[1] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[1];
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].probWithinLane_arr_f[2] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[2];
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].probWithinLane_arr_f[3] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[3];
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].probWithinLane_arr_f[4] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[4];
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].probCutIn_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutIn_f;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].probCutOut_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutOut_f;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].overlap_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].overlap_f;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].trackingTimeWithinLane_un16 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].trackingTimeWithinLane_un16;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].dx = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dx;
					laneModel_output_st.lanes_st[RIGHT_LANE].ObjectList_st[t_count_RLane].dy = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dy;
					t_count_RLane++;
					laneModel_output_st.lanes_st[RIGHT_LANE].objectNum_un8 = t_count_RLane++;
					
				}
				break;
			}
			case RIGHT_RIGHT_LANE:
			{
				if (t_count_RRLane <= TARGET_OBJECT_NUM_WITHIN_LANE)
				{
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].dis2EgoLaneCenter = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dis2EgoLaneCenter;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].TTC_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].TTC_f;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].ID_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].ID_un8;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].Index_un8 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].Index_un8;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].probWithinLane_arr_f[0] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[0];
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].probWithinLane_arr_f[1] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[1];
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].probWithinLane_arr_f[2] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[2];
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].probWithinLane_arr_f[3] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[3];
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].probWithinLane_arr_f[4] = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probWithinLane_arr_f[4];
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].probCutIn_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutIn_f;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].probCutOut_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutOut_f;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].overlap_f = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].overlap_f;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].trackingTimeWithinLane_un16 = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].trackingTimeWithinLane_un16;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].dx = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dx;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].ObjectList_st[t_count_RRLane].dy = m_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].dy;
					t_count_RRLane++;
					laneModel_output_st.lanes_st[RIGHT_RIGHT_LANE].objectNum_un8 = t_count_RRLane++;
				}
				break;
			}
			default:
				break;

			}
		}
			
	}
	
}