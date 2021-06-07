#include "HMI.h"


HMI::HMI():
	hmi_display_obj()
{

}

void HMI::Init()
{
	hmi_display_obj.object_count = NULL_UN8;
	for (uint8_t t_i = 0; t_i < MAX_OBJ_NUM_4_HMI; t_i++)
	{
		hmi_display_obj.objects[t_i].dx = MAX_F;
		hmi_display_obj.objects[t_i].dy = MAX_F;
		hmi_display_obj.objects[t_i].object_ID = MAX_UN8;
		hmi_display_obj.objects[t_i].obj_type = CLASS_DEFAULT;
		hmi_display_obj.objects[t_i].obj_attr = CLASS_SPE_DEFAULT;

	}
}

void HMI::Calc(LANE_MODEL_OUTPUT_ST& lane_medel,FUSION_OBJ_OUTPUT_ST& fus_output_st,TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st,TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st, ATS_TO_ST& t_ats_po_st)
{
	uint8_t t_HMI_MAX_Obj = MAX_OBJ_NUM_4_HMI;
	uint8_t t_numEachLane = NULL_UN8, t_totalNumObj = NULL_UN8, t_index = MAX_UN8;
	for (uint8_t t_lane = LEFT_LANE; (t_lane <= RIGHT_LANE)&&(t_totalNumObj < t_HMI_MAX_Obj); t_lane++)
	{
		t_numEachLane = lane_medel.lanes_st[t_lane].objectNum_un8;
		for (uint8_t t_i = 0; t_i < t_numEachLane; t_i++)
		{
			t_index = lane_medel.lanes_st[t_lane].ObjectList_st[t_i].Index_un8;
			hmi_display_obj.objects[t_totalNumObj].object_ID = lane_medel.lanes_st[t_lane].ObjectList_st[t_i].ID_un8 ;
			hmi_display_obj.objects[t_totalNumObj].dx = lane_medel.lanes_st[t_lane].ObjectList_st[t_i].dx;
			hmi_display_obj.objects[t_totalNumObj].dy = lane_medel.lanes_st[t_lane].ObjectList_st[t_i].dy;
			if (uint8_t(PEDESTRIAN) == fus_output_st.objects[t_index].obj_information.type)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_PEDESTRIAN;
			}
			else if (uint8_t(CYCLIST) == fus_output_st.objects[t_index].obj_information.type)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_BIKE;
			}
			else if ((uint8_t(SMALL_MEDIUM_CAR) == fus_output_st.objects[t_index].obj_information.type)||
				(uint8_t(TINY_CAR) == fus_output_st.objects[t_index].obj_information.type)||
				(uint8_t(UNCERTAIN_VEHICLE) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(BUS) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(AMBULANCE) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(TRI_MOTOR) == fus_output_st.objects[t_index].obj_information.type)
				)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_CAR;
			}
			else if (uint8_t(TRUCK) == fus_output_st.objects[t_index].obj_information.type)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_TRUCK;
			}
			else
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_DEFAULT;
			}
			if (t_ats_po_st.index == t_index)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_ACC_FRONT_CAR;
			}
			else if (lane_medel.lanes_st[t_lane].ObjectList_st[t_i].probCutIn_f > 0.6)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_CUT_IN;
			}
			else if ((uint8_t(TRUCK) == fus_output_st.objects[t_index].obj_information.type) &&
				((t_i == t_tar_obj_r_st.index) || (t_i == t_tar_obj_l_st.index))
				)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_TRUCK_EVASION;
			}
			else if ((LEFT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_i])||
				(RIGHT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_i]))
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_OBSTACLE_ON_ADJACENT_LANE;
			}
			else
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_SPE_DEFAULT;
			}
			t_totalNumObj++;

		}
	}

	hmi_display_obj.object_count = t_totalNumObj;
}
void HMI::tem_Calc(OBJECT_LIST_BY_BC_CHECK& t_obj_list_by_bc_check_st,LANE_MODEL_OUTPUT_ST& lane_medel, FUSION_OBJ_OUTPUT_ST& fus_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st, ATS_TO_ST& t_ats_po_st)
{
	uint8_t t_HMI_MAX_Obj = MAX_OBJ_NUM_4_HMI;
	uint8_t t_numEachLane = NULL_UN8, t_totalNumObj = NULL_UN8, t_index = MAX_UN8;
	OBJECT_LIST_BY_BC_CHECK tem_obj_list_by_bc_check_st;
	//order
	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
	{
		if (true == t_obj_list_by_bc_check_st.valid_b[t_i])
		{
			t_index = t_i;
			hmi_display_obj.objects[t_totalNumObj].object_ID = t_obj_list_by_bc_check_st.id[t_i];
			hmi_display_obj.objects[t_totalNumObj].dx = fus_output_st.objects[t_i].obj_estimate.longPosition;
			hmi_display_obj.objects[t_totalNumObj].dy = fus_output_st.objects[t_i].obj_estimate.latPosition;
			if (uint8_t(PEDESTRIAN) == fus_output_st.objects[t_index].obj_information.type)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_PEDESTRIAN;
			}
			else if (uint8_t(CYCLIST) == fus_output_st.objects[t_index].obj_information.type)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_BIKE;
			}
			else if ((uint8_t(SMALL_MEDIUM_CAR) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(TINY_CAR) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(UNCERTAIN_VEHICLE) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(BUS) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(AMBULANCE) == fus_output_st.objects[t_index].obj_information.type) ||
				(uint8_t(TRI_MOTOR) == fus_output_st.objects[t_index].obj_information.type)
				)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_CAR;
			}
			else if (uint8_t(TRUCK) == fus_output_st.objects[t_index].obj_information.type)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_TRUCK;
			}
			else
			{
				hmi_display_obj.objects[t_totalNumObj].obj_type = CLASS_DEFAULT;
			}
			if (t_ats_po_st.index == t_index)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_ACC_FRONT_CAR;
			}
			else if (t_tos_obj_within_lane_st.m_tarObj_arr_st[t_index].probCutIn_f > 0.6)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_CUT_IN;
			}
			else if ((uint8_t(TRUCK) == fus_output_st.objects[t_index].obj_information.type) &&
				((t_index == t_tar_obj_r_st.index) || (t_index == t_tar_obj_l_st.index))
				)
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_TRUCK_EVASION;
			}
			else if ((LEFT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_i]) ||
				(RIGHT_LANE == t_tos_obj_within_lane_st.m_withinLaneId[t_i]))
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_OBSTACLE_ON_ADJACENT_LANE;
			}
			else
			{
				hmi_display_obj.objects[t_totalNumObj].obj_attr = CLASS_SPE_DEFAULT;
			}
			t_totalNumObj++;
		}
	}

	hmi_display_obj.object_count = t_totalNumObj;

	// clear disappear object
	for (uint8_t t_k = t_totalNumObj; t_k < MAX_OBJ_NUM_4_HMI; t_k++)
	{
		hmi_display_obj.objects[t_k].dx = MAX_F;
		hmi_display_obj.objects[t_k].dy = MAX_F;
		hmi_display_obj.objects[t_k].object_ID = MAX_UN8;
		hmi_display_obj.objects[t_k].obj_type = CLASS_DEFAULT;
		hmi_display_obj.objects[t_k].obj_attr = CLASS_SPE_DEFAULT;

	}
}
HMI_DISPLAY_OBJ& HMI::GetHMIDisplay()
{
	return hmi_display_obj;
}

