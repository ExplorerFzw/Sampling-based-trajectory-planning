#ifndef HMI_H_
#define HMI_H_
#include"Outputs.h"
#include"LMCommonDefines.h"

class HMI
{
public:
	HMI();
	void Init();
	void Calc(LANE_MODEL_OUTPUT_ST& lane_medel, FUSION_OBJ_OUTPUT_ST& fus_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st, ATS_TO_ST& t_ats_po_st);
	void tem_Calc(OBJECT_LIST_BY_BC_CHECK& t_obj_list_by_bc_check_st, LANE_MODEL_OUTPUT_ST& lane_medel, FUSION_OBJ_OUTPUT_ST& fus_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_l_st, TRUCK_EVASION_TAR_OBJ& t_tar_obj_r_st, ATS_TO_ST& t_ats_po_st);
	HMI_DISPLAY_OBJ& GetHMIDisplay();
private:
	HMI_DISPLAY_OBJ hmi_display_obj;
};

#endif

