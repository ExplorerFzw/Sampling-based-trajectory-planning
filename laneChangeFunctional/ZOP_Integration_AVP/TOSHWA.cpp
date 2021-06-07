#include "TOSHWA.h"

TOS_HWA::TOS_HWA():
	m_hwa_tar_obj_st(),
	m_hwa_tar_obj_K1_st()
{

}

void TOS_HWA::Calc_v(TOS_OBJ_PROB_WITHIN_LANE&  t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST&  t_probEgoVehicleWithinLane_st)
{
	uint8_t t_numNeighborL_F = 0, t_numNeighborL_R = 0;
	uint8_t t_numNeighborR_F = 0, t_numNeighborR_R = 0;
	uint8_t t_numEgoLane_F = 0 , t_numEgoLane_R = 0;
	uint8_t t_objIndex = MAX_UN8;
	uint8_t t_LaneId = MAX_UN8;
	bool t_noEnd_b = true;
	//****************************** asign to K1 and Init************************
	m_hwa_tar_obj_K1_st = m_hwa_tar_obj_st;
	InitTarObj();
	//****************************** update **************************************
	// case0: cut in
	// case1:cut out
	// case2:overlap
	for (uint8_t t_i = 0; (t_i < FUS_MAX_OBJ_NUM)&&(t_noEnd_b); t_i++)
	{
		if (t_tos_obj_within_lane_st.m_obj_list_index_un8[t_i] < FUS_MAX_OBJ_NUM)
		{
			t_objIndex = t_tos_obj_within_lane_st.m_obj_list_index_un8[t_i];// get the nearest one for rest obj
			t_LaneId = t_tos_obj_within_lane_st.m_withinLaneId[t_objIndex];
			switch (t_LaneId)
			{
			case LEFT_LANE:
			{
				if ((t_numNeighborL_R < MAX_TAR_OBJ_NUM_IN_REAR_LANE)
					&&(t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx < 0)
					)
				{
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].trackingTimeWithinLane_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].dx = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_R].dy = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dy;
					++t_numNeighborL_R;
				}
				else if ((t_numNeighborL_F < MAX_TAR_OBJ_NUM_IN_FRONT_LANE)
					&& (t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx >= 0)
					)
				{
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].trackingTimeWithinLane_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dx = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dy = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dy;
					++t_numNeighborL_F;
				}
				
				break;
			}
			case MIDDLE_LANE:
			{
				if ((t_numEgoLane_R < MAX_TAR_OBJ_NUM_IN_REAR_LANE)
						&& (t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx < 0)
						)
				{
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].trackingTimeWithinLane_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].dx = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_R].dy = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dy;
					t_numEgoLane_R++;
				}
				else if ((t_numEgoLane_F < MAX_TAR_OBJ_NUM_IN_FRONT_LANE)
					&& (t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx >= 0)
					)
				{
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].trackingTimeWithinLane_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dx = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dy = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dy;
					t_numEgoLane_F++;
				}
				break;
			}
			case RIGHT_LANE:
			{
				if ((t_numNeighborR_R < MAX_TAR_OBJ_NUM_IN_REAR_LANE)
						&& (t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx < 0)
						)
				{
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].trackingTimeWithinLane_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].dx = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_R].dy = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dy;
					t_numNeighborR_R++;
				}
				else if ((t_numNeighborR_F < MAX_TAR_OBJ_NUM_IN_FRONT_LANE)
					&& (t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx >= 0)
					)
				{
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].trackingTimeWithinLane_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dx = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dx;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR_F + MAX_TAR_OBJ_NUM_IN_REAR_LANE].dy = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dy;
					t_numNeighborR_F++;
				}
				break;
			}
				

			}
		}
		else
		{
			t_noEnd_b = false;
		}
		
	}
}

void TOS_HWA::Init()
{
	InitTarObjK1();
	InitTarObj();
}
void TOS_HWA::InitTarObjK1()
{
	for (uint8_t t_i = 0; t_i < MAX_TAR_OBJ_NUM_IN_LANE; t_i++)
	{
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].trackingTimeWithinLane_f = NULL_UN16;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].TTC_f = MAX_F;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].dx = MAX_F;
		m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].dy = MAX_F;

		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].trackingTimeWithinLane_f = NULL_UN16;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].TTC_f = MAX_F;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].dx = MAX_F;
		m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].dy = MAX_F;

		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].trackingTimeWithinLane_f = NULL_UN16;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].TTC_f = MAX_F;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].dx = MAX_F;
		m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].dy = MAX_F;

		for (uint8_t t_lanes = 0; t_lanes < LM_MAX_NUMBER_OF_LANES; t_lanes++)
		{
			m_hwa_tar_obj_K1_st.m_L_NeighborLane_TarObj_st[t_i].probWithinLane_arr_f[t_lanes] = NULL_F;
			m_hwa_tar_obj_K1_st.m_R_NeighborLane_TarObj_st[t_i].probWithinLane_arr_f[t_lanes] = NULL_F;
			m_hwa_tar_obj_K1_st.m_EgoLane_TarObj_st[t_i].probWithinLane_arr_f[t_lanes] = NULL_F;
		}
		
	}
}

void TOS_HWA::InitTarObj()
{
	for (uint8_t t_i = 0; t_i < MAX_TAR_OBJ_NUM_IN_LANE; t_i++)
	{
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].trackingTimeWithinLane_f = NULL_UN16;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].TTC_f = MAX_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].dx = MAX_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].dy = MAX_F;

		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].trackingTimeWithinLane_f = NULL_UN16;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].TTC_f = MAX_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].dx = MAX_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].dy = MAX_F;

		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].trackingTimeWithinLane_f = NULL_UN16;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].TTC_f = MAX_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].dx = MAX_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].dy = MAX_F;

		for (uint8_t t_lanes = 0; t_lanes < LM_MAX_NUMBER_OF_LANES; t_lanes++)
		{
			m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].probWithinLane_arr_f[t_lanes] = NULL_F;
			m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].probWithinLane_arr_f[t_lanes] = NULL_F;
			m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].probWithinLane_arr_f[t_lanes] = NULL_F;
		}
	}
}

HWA_TAR_OBJ_ST& TOS_HWA::Get_tar_obj_ref()
{
	return m_hwa_tar_obj_st;
}
