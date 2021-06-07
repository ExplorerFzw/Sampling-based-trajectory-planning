#include "TOS_HWA.h"

TOS_HWA::TOS_HWA():
	m_hwa_tar_obj_st()
{

}

void TOS_HWA::Calc_v(TOS_OBJ_PROB_WITHIN_LANE&  t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST&  t_probEgoVehicleWithinLane_st)
{
	uint8_t t_numNeighborL = 0;
	uint8_t t_numNeighborR = 0;
	uint8_t t_numEgoLane = 0;
	uint8_t t_objIndex = MAX_UN8;
	uint8_t t_LaneId = MAX_UN8;
	bool t_noEnd_b = true;
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
				if (t_numNeighborL < MAX_TAR_OBJ_NUM_IN_LANE)
				{
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].trackingTimeWithinLane_un16 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_un16;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_numNeighborL].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
				}
				++t_numNeighborL;
				break;
			}
			case MIDDLE_LANE:
			{
				if (t_numEgoLane < MAX_TAR_OBJ_NUM_IN_LANE)
				{
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].trackingTimeWithinLane_un16 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_un16;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_numEgoLane].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
				}
				++t_numEgoLane;
				break;
			}
			case RIGHT_LANE:
			{
				if (t_numNeighborR < MAX_TAR_OBJ_NUM_IN_LANE)
				{
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].Index_un8 = t_objIndex;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].ID_un8 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].ID_un8;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].dis2EgoLaneCenter = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].dis2EgoLaneCenter;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].probCutIn_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutIn_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].probCutOut_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probCutOut_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].trackingTimeWithinLane_un16 = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].trackingTimeWithinLane_un16;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].overlap_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].overlap_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].TTC_f = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].TTC_f;
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].probWithinLane_arr_f[LEFT_LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LEFT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].probWithinLane_arr_f[LEFT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[LEFT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].probWithinLane_arr_f[MIDDLE_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[MIDDLE_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].probWithinLane_arr_f[RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_LANE];
					m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_numNeighborR].probWithinLane_arr_f[RIGHT_RIGHT_LANE] = t_tos_obj_within_lane_st.m_tarObj_arr_st[t_objIndex].probWithinLane_arr_f[RIGHT_RIGHT_LANE];
				}
				++t_numNeighborR;
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
	for (uint8_t t_i = 0; t_i < MAX_TAR_OBJ_NUM_IN_LANE; t_i++)
	{
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].trackingTimeWithinLane_un16 = NULL_UN16;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[t_i].TTC_f = MAX_F;

		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].trackingTimeWithinLane_un16 = NULL_UN16;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[t_i].TTC_f = MAX_F;

		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].dis2EgoLaneCenter = MAX_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].Index_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].ID_un8 = MAX_UN8;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].probCutIn_f = NULL_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].probCutOut_f = NULL_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].trackingTimeWithinLane_un16 = NULL_UN16;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].overlap_f = NULL_F;
		m_hwa_tar_obj_st.m_EgoLane_TarObj_st[t_i].TTC_f = MAX_F;
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
