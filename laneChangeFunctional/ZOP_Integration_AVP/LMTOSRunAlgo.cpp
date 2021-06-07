//***********************************************
#include"LMTOSRunAlgo.h"
#include"Outputs.h"
#include"LMBase.h"
#include"LMPp.h"
#include"TOSPp.h"
#include"LMF.h"
#include"TOSHWA.h"
#include"AdapterSimOutput.h"
#include<string>
#include"TOSNRA.h"
#include"TOSTruckEvasion.h"
#include"HMI.h"
#include"CoordinationTransformation.h"
#include"Adapters.h"
#include"VSL.h"
#include"AdapterSimOutput.h"
#include"VehicleMovement.h"
#include"DrivingManeuver.h"


ADAPTERS lm_adapters;
LM_PP lm_pp;
LMF lmf;
TOS_PP tos_pp;
TOS_HWA tos_hwa;
VSL vsl;
TOS_NRA nra;
TOS_TRUCK_EVASION truckEvasion;
HMI hmi;
CoordinationTransformation coorTransfm;
VehicleMovement vehMov;
DrivingManeuver drivingManeuver;


//********************************input******************************
FUSION_LANE_OUTPUT_ST fus_lane_out_put_st;
FUSION_ROADEDGE_OUTPUT_ST  fus_roadEdge_output_st;
FUSION_OBJ_OUTPUT_ST fus_obj_output_st;
VEHSTATE_ST vsi_vehState_st;
LANE_MODEL_OUTPUT_ST  lane_model_output_st;
LM_GENERAL_LIMIT_ST lm_general_limit_st;
VISION_LANE_INFO_ST vision_lane_info_st;
LANES_GENERAL_INFO_ST lanes_general_info_st;
OBJECT_LIST_BY_BC_CHECK object_list_by_bc_check_st;
TOS_OBJ_PROB_WITHIN_LANE tos_obj_within_lane_st;
PROB_EGO_VEHICLE_WITHIN_LANE_ST probEgoVehicleWithinLane_st;
HWA_TAR_OBJ_ST hwa_tar_obj_st;
HWA_TAR_OBJ_OUTPUT_ADAPTER_ST hwa_tar_obj_output_adapter_st;
TRUCK_EVASION_TAR_OBJ tar_obj_l_st;
TRUCK_EVASION_TAR_OBJ tar_obj_r_st;
NRA_INFO_ST nra_info_st;
HMI_DISPLAY_OBJ hmi_display_obj;
ATS_TO_ST ats_to_st;
// just for adapter for s_function
LANES_BAS_INFO_ST_adapter lanes_bas_info_st_adapter;
SEGMENTS_ST_adapter segments_st_adapter;
TAR_OBJS_ST_adapter tar_objs_st_adapter;
HMI_DISPLAY_OBJ_adapter hmi_display_obj_adp;
VEHICLE_MOVEMENT_ST vehMovement_st;
uint8_t teFlag_un8;



void LM_TOS_INIT()
{
    lm_adapters.Init();
    lm_pp.Init();
    vsl.Init();
    lmf.Init();
    tos_pp.Init();
    tos_hwa.Init();
    nra.Init();
    truckEvasion.Init();
    hmi.Init();
    //coorTransfm.Init();
    vehMov.Init();
    drivingManeuver.Init_V();
}


void LM_TOS_RUN()
{
    lm_adapters.Calc_v(fus_lane_out_put_st);
    // ******************* patch start ******************************
    /*lm_adapters.Modify_Calc_v(fus_lane_out_put_st);
    lm_adapters.RE_Modify_Calc_v(fus_roadEdge_output_st);
    fus_roadEdge_output_st = lm_adapters.GetREInfo_st();*/
    // ******************* patch end ********************************
    vision_lane_info_st = lm_adapters.GetVisionLaneInfo_st();

    vehMov.Calc_V(vsi_vehState_st);
    //coorTransfm.Calc_V(vsi_vehState_st);
    vehMovement_st = vehMov.GetVehMovement_st();

    lm_pp.Calc_v(fus_obj_output_st, vsi_vehState_st, lane_model_output_st);
    lm_general_limit_st = lm_pp.Get_General_Limit_st();
    object_list_by_bc_check_st = lm_pp.Get_ObjListAfterBCCheck();

    vsl.Calc_v(lm_general_limit_st, vision_lane_info_st, vsi_vehState_st, vehMovement_st, drivingManeuver.GetDrivingManeuver_un8(), drivingManeuver.GetDrivingManeuverK1_un8());
    lanes_general_info_st = vsl.GetLanesGeneralInfo_st();

    lmf.Calc_v(lanes_general_info_st);
    lane_model_output_st = lmf.Get_LaneModel_pst();

    drivingManeuver.Calc_V(vehMov.GetEgoYawBuff_st(), vehMov.GetEgoYawRateBuff_st(), lmf.Get_LaneModelK1_st(), lane_model_output_st, vsi_vehState_st, vehMovement_st);

    tos_pp.Calc_v(fus_obj_output_st, lane_model_output_st, object_list_by_bc_check_st, vsi_vehState_st);
    tos_obj_within_lane_st = tos_pp.GetTosObjWithinLane_st();
    probEgoVehicleWithinLane_st = tos_pp.GetProbEgoVehWithinLane_st();

    tos_hwa.Calc_v(tos_obj_within_lane_st, probEgoVehicleWithinLane_st);
    hwa_tar_obj_st = tos_hwa.Get_tar_obj_ref();

    nra.Calc_v(tos_obj_within_lane_st,probEgoVehicleWithinLane_st, fus_roadEdge_output_st, vsi_vehState_st);
    nra_info_st = nra.GetNRAINFO();

    truckEvasion.Calc(fus_obj_output_st,tos_obj_within_lane_st,probEgoVehicleWithinLane_st);
    tar_obj_l_st = truckEvasion.GetLSideTarObj();
    tar_obj_r_st = truckEvasion.GetRSideTarObj();
    teFlag_un8 = truckEvasion.GetTEFlag();

    //hmi.Calc(lane_model_output_st, fus_obj_output_st, tos_obj_within_lane_st,tar_obj_l_st,tar_obj_r_st, ats_to_st);
    hmi.tem_Calc(object_list_by_bc_check_st,lane_model_output_st, fus_obj_output_st, tos_obj_within_lane_st, tar_obj_l_st, tar_obj_r_st, ats_to_st);
    hmi_display_obj = hmi.GetHMIDisplay();

    //adapter for sfunction
    LM_ADAPTER();
    HMI_ADAPTER();
    HWA_TAR_OBJ_ADAPTER();

}

void HWA_TAR_OBJ_ADAPTER()
{
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.ID_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].ID_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.Index_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].Index_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.overlap_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].overlap_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.probCutIn_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.probCutOut_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_0_st.TTC_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[0].TTC_f;

    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.ID_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].ID_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.Index_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].Index_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.overlap_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].overlap_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.probCutIn_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.probCutOut_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_1_st.TTC_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[1].TTC_f;

    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.ID_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].ID_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.Index_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].Index_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.overlap_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].overlap_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.probCutIn_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.probCutOut_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_2_st.TTC_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[2].TTC_f;

    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.ID_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].ID_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.Index_un8 = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].Index_un8;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.overlap_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].overlap_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.probCutIn_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.probCutOut_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_EgoLane_TarObj_3_st.TTC_f = hwa_tar_obj_st.m_EgoLane_TarObj_st[3].TTC_f;

    // left
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.ID_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].ID_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.Index_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].Index_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.overlap_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].overlap_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.probCutIn_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.probCutOut_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_0_st.TTC_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[0].TTC_f;

    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.ID_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].ID_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.Index_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].Index_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.overlap_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].overlap_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.probCutIn_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.probCutOut_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_1_st.TTC_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[1].TTC_f;

    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.ID_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].ID_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.Index_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].Index_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.overlap_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].overlap_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.probCutIn_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.probCutOut_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_2_st.TTC_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[2].TTC_f;

    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.ID_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].ID_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.Index_un8 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].Index_un8;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.overlap_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].overlap_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.probCutIn_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.probCutOut_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_L_NeighborLane_TarObj_3_st.TTC_f = hwa_tar_obj_st.m_L_NeighborLane_TarObj_st[3].TTC_f;
    //right
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.ID_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].ID_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.Index_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].Index_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.overlap_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].overlap_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.probCutIn_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.probCutOut_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_0_st.TTC_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[0].TTC_f;

    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.ID_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].ID_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.Index_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].Index_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.overlap_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].overlap_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.probCutIn_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.probCutOut_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_1_st.TTC_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[1].TTC_f;

    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.ID_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].ID_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.Index_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].Index_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.overlap_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].overlap_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.probCutIn_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.probCutOut_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_2_st.TTC_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[2].TTC_f;

    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.dis2EgoLaneCenter = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].dis2EgoLaneCenter;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.ID_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].ID_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.Index_un8 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].Index_un8;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.overlap_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].overlap_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.probCutIn_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].probCutIn_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.probCutOut_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].probCutOut_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.probWithinLane_arr_f_0 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].probWithinLane_arr_f[0];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.probWithinLane_arr_f_1 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].probWithinLane_arr_f[1];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.probWithinLane_arr_f_2 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].probWithinLane_arr_f[2];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.probWithinLane_arr_f_3 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].probWithinLane_arr_f[3];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.probWithinLane_arr_f_4 = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].probWithinLane_arr_f[4];
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.trackingTimeWithinLane_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].trackingTimeWithinLane_f;
    hwa_tar_obj_output_adapter_st.m_R_NeighborLane_TarObj_3_st.TTC_f = hwa_tar_obj_st.m_R_NeighborLane_TarObj_st[3].TTC_f;
}


void LM_ADAPTER()
{
    lanes_bas_info_st_adapter.lane0_bas_info_st.available_b = lane_model_output_st.lanes_st[0].available_b; 
    lanes_bas_info_st_adapter.lane0_bas_info_st.front_lane_length_f = lane_model_output_st.lanes_st[0].front_lane_length_f;
    lanes_bas_info_st_adapter.lane0_bas_info_st.lane_dwidth_f = lane_model_output_st.lanes_st[0].lane_dwidth_f;
    lanes_bas_info_st_adapter.lane0_bas_info_st.objectNum_un8 = lane_model_output_st.lanes_st[0].objectNum_un8;
    lanes_bas_info_st_adapter.lane0_bas_info_st.rear_lane_length_f = lane_model_output_st.lanes_st[0].rear_lane_length_f;

    lanes_bas_info_st_adapter.lane1_bas_info_st.available_b = lane_model_output_st.lanes_st[1].available_b;
    lanes_bas_info_st_adapter.lane1_bas_info_st.front_lane_length_f = lane_model_output_st.lanes_st[1].front_lane_length_f;
    lanes_bas_info_st_adapter.lane1_bas_info_st.lane_dwidth_f = lane_model_output_st.lanes_st[1].lane_dwidth_f;
    lanes_bas_info_st_adapter.lane1_bas_info_st.objectNum_un8 = lane_model_output_st.lanes_st[1].objectNum_un8;
    lanes_bas_info_st_adapter.lane1_bas_info_st.rear_lane_length_f = lane_model_output_st.lanes_st[1].rear_lane_length_f;

    lanes_bas_info_st_adapter.lane2_bas_info_st.available_b = lane_model_output_st.lanes_st[2].available_b;
    lanes_bas_info_st_adapter.lane2_bas_info_st.front_lane_length_f = lane_model_output_st.lanes_st[2].front_lane_length_f;
    lanes_bas_info_st_adapter.lane2_bas_info_st.lane_dwidth_f = lane_model_output_st.lanes_st[2].lane_dwidth_f;
    lanes_bas_info_st_adapter.lane2_bas_info_st.objectNum_un8 = lane_model_output_st.lanes_st[2].objectNum_un8;
    lanes_bas_info_st_adapter.lane2_bas_info_st.rear_lane_length_f = lane_model_output_st.lanes_st[2].rear_lane_length_f;

    lanes_bas_info_st_adapter.lane3_bas_info_st.available_b = lane_model_output_st.lanes_st[3].available_b;
    lanes_bas_info_st_adapter.lane3_bas_info_st.front_lane_length_f = lane_model_output_st.lanes_st[3].front_lane_length_f;
    lanes_bas_info_st_adapter.lane3_bas_info_st.lane_dwidth_f = lane_model_output_st.lanes_st[3].lane_dwidth_f;
    lanes_bas_info_st_adapter.lane3_bas_info_st.objectNum_un8 = lane_model_output_st.lanes_st[3].objectNum_un8;
    lanes_bas_info_st_adapter.lane3_bas_info_st.rear_lane_length_f = lane_model_output_st.lanes_st[3].rear_lane_length_f;

    lanes_bas_info_st_adapter.lane4_bas_info_st.available_b = lane_model_output_st.lanes_st[4].available_b;
    lanes_bas_info_st_adapter.lane4_bas_info_st.front_lane_length_f = lane_model_output_st.lanes_st[4].front_lane_length_f;
    lanes_bas_info_st_adapter.lane4_bas_info_st.lane_dwidth_f = lane_model_output_st.lanes_st[4].lane_dwidth_f;
    lanes_bas_info_st_adapter.lane4_bas_info_st.objectNum_un8 = lane_model_output_st.lanes_st[4].objectNum_un8;
    lanes_bas_info_st_adapter.lane4_bas_info_st.rear_lane_length_f = lane_model_output_st.lanes_st[4].rear_lane_length_f;

    //lane 0 segment
    segments_st_adapter.lane0_segment_0.coef_arr_f_0 = lane_model_output_st.lanes_st[0].segments_st[0].coef_arr_f[0];
    segments_st_adapter.lane0_segment_0.coef_arr_f_1 = lane_model_output_st.lanes_st[0].segments_st[0].coef_arr_f[1];
    segments_st_adapter.lane0_segment_0.coef_arr_f_2 = lane_model_output_st.lanes_st[0].segments_st[0].coef_arr_f[2];
    segments_st_adapter.lane0_segment_0.coef_arr_f_3 = lane_model_output_st.lanes_st[0].segments_st[0].coef_arr_f[3];
    segments_st_adapter.lane0_segment_0.dlowerLimit_f = lane_model_output_st.lanes_st[0].segments_st[0].dlowerLimit_f;
    segments_st_adapter.lane0_segment_0.dupperLimit_f = lane_model_output_st.lanes_st[0].segments_st[0].dupperLimit_f;
    segments_st_adapter.lane0_segment_0.numOfSegment_un8 = lane_model_output_st.lanes_st[0].segments_st[0].numOfSegment_un8;
    segments_st_adapter.lane0_segment_0.available_b = lane_model_output_st.lanes_st[0].segments_st[0].available_b;
    segments_st_adapter.lane0_segment_0.detectedByVideo_b = lane_model_output_st.lanes_st[0].segments_st[0].detectedByVideo_b;
    segments_st_adapter.lane0_segment_0.quality_f = lane_model_output_st.lanes_st[0].segments_st[0].quality_f;

    segments_st_adapter.lane0_segment_1.coef_arr_f_0 = lane_model_output_st.lanes_st[0].segments_st[1].coef_arr_f[0];
    segments_st_adapter.lane0_segment_1.coef_arr_f_1 = lane_model_output_st.lanes_st[0].segments_st[1].coef_arr_f[1];
    segments_st_adapter.lane0_segment_1.coef_arr_f_2 = lane_model_output_st.lanes_st[0].segments_st[1].coef_arr_f[2];
    segments_st_adapter.lane0_segment_1.coef_arr_f_3 = lane_model_output_st.lanes_st[0].segments_st[1].coef_arr_f[3];
    segments_st_adapter.lane0_segment_1.dlowerLimit_f = lane_model_output_st.lanes_st[0].segments_st[1].dlowerLimit_f;
    segments_st_adapter.lane0_segment_1.dupperLimit_f = lane_model_output_st.lanes_st[0].segments_st[1].dupperLimit_f;
    segments_st_adapter.lane0_segment_1.numOfSegment_un8 = lane_model_output_st.lanes_st[0].segments_st[1].numOfSegment_un8;
    segments_st_adapter.lane0_segment_1.available_b = lane_model_output_st.lanes_st[0].segments_st[1].available_b;
    segments_st_adapter.lane0_segment_1.detectedByVideo_b = lane_model_output_st.lanes_st[0].segments_st[1].detectedByVideo_b;
    segments_st_adapter.lane0_segment_1.quality_f = lane_model_output_st.lanes_st[0].segments_st[1].quality_f;

    segments_st_adapter.lane0_segment_2.coef_arr_f_0 = lane_model_output_st.lanes_st[0].segments_st[2].coef_arr_f[0];
    segments_st_adapter.lane0_segment_2.coef_arr_f_1 = lane_model_output_st.lanes_st[0].segments_st[2].coef_arr_f[1];
    segments_st_adapter.lane0_segment_2.coef_arr_f_2 = lane_model_output_st.lanes_st[0].segments_st[2].coef_arr_f[2];
    segments_st_adapter.lane0_segment_2.coef_arr_f_3 = lane_model_output_st.lanes_st[0].segments_st[2].coef_arr_f[3];
    segments_st_adapter.lane0_segment_2.dlowerLimit_f = lane_model_output_st.lanes_st[0].segments_st[2].dlowerLimit_f;
    segments_st_adapter.lane0_segment_2.dupperLimit_f = lane_model_output_st.lanes_st[0].segments_st[2].dupperLimit_f;
    segments_st_adapter.lane0_segment_2.numOfSegment_un8 = lane_model_output_st.lanes_st[0].segments_st[2].numOfSegment_un8;
    segments_st_adapter.lane0_segment_2.available_b = lane_model_output_st.lanes_st[0].segments_st[2].available_b;
    segments_st_adapter.lane0_segment_2.detectedByVideo_b = lane_model_output_st.lanes_st[0].segments_st[2].detectedByVideo_b;
    segments_st_adapter.lane0_segment_2.quality_f = lane_model_output_st.lanes_st[0].segments_st[2].quality_f;

    segments_st_adapter.lane0_segment_3.coef_arr_f_0 = lane_model_output_st.lanes_st[0].segments_st[3].coef_arr_f[0];
    segments_st_adapter.lane0_segment_3.coef_arr_f_1 = lane_model_output_st.lanes_st[0].segments_st[3].coef_arr_f[1];
    segments_st_adapter.lane0_segment_3.coef_arr_f_2 = lane_model_output_st.lanes_st[0].segments_st[3].coef_arr_f[2];
    segments_st_adapter.lane0_segment_3.coef_arr_f_3 = lane_model_output_st.lanes_st[0].segments_st[3].coef_arr_f[3];
    segments_st_adapter.lane0_segment_3.dlowerLimit_f = lane_model_output_st.lanes_st[0].segments_st[3].dlowerLimit_f;
    segments_st_adapter.lane0_segment_3.dupperLimit_f = lane_model_output_st.lanes_st[0].segments_st[3].dupperLimit_f;
    segments_st_adapter.lane0_segment_3.numOfSegment_un8 = lane_model_output_st.lanes_st[0].segments_st[3].numOfSegment_un8;
    segments_st_adapter.lane0_segment_3.available_b = lane_model_output_st.lanes_st[0].segments_st[3].available_b;
    segments_st_adapter.lane0_segment_3.detectedByVideo_b = lane_model_output_st.lanes_st[0].segments_st[3].detectedByVideo_b;
    segments_st_adapter.lane0_segment_3.quality_f = lane_model_output_st.lanes_st[0].segments_st[3].quality_f;

    segments_st_adapter.lane0_segment_4.coef_arr_f_0 = lane_model_output_st.lanes_st[0].segments_st[4].coef_arr_f[0];
    segments_st_adapter.lane0_segment_4.coef_arr_f_1 = lane_model_output_st.lanes_st[0].segments_st[4].coef_arr_f[1];
    segments_st_adapter.lane0_segment_4.coef_arr_f_2 = lane_model_output_st.lanes_st[0].segments_st[4].coef_arr_f[2];
    segments_st_adapter.lane0_segment_4.coef_arr_f_3 = lane_model_output_st.lanes_st[0].segments_st[4].coef_arr_f[3];
    segments_st_adapter.lane0_segment_4.dlowerLimit_f = lane_model_output_st.lanes_st[0].segments_st[4].dlowerLimit_f;
    segments_st_adapter.lane0_segment_4.dupperLimit_f = lane_model_output_st.lanes_st[0].segments_st[4].dupperLimit_f;
    segments_st_adapter.lane0_segment_4.numOfSegment_un8 = lane_model_output_st.lanes_st[0].segments_st[4].numOfSegment_un8;
    segments_st_adapter.lane0_segment_4.available_b = lane_model_output_st.lanes_st[0].segments_st[4].available_b;
    segments_st_adapter.lane0_segment_4.detectedByVideo_b = lane_model_output_st.lanes_st[0].segments_st[4].detectedByVideo_b;
    segments_st_adapter.lane0_segment_4.quality_f = lane_model_output_st.lanes_st[0].segments_st[4].quality_f;

    segments_st_adapter.lane0_segment_5.coef_arr_f_0 = lane_model_output_st.lanes_st[0].segments_st[5].coef_arr_f[0];
    segments_st_adapter.lane0_segment_5.coef_arr_f_1 = lane_model_output_st.lanes_st[0].segments_st[5].coef_arr_f[1];
    segments_st_adapter.lane0_segment_5.coef_arr_f_2 = lane_model_output_st.lanes_st[0].segments_st[5].coef_arr_f[2];
    segments_st_adapter.lane0_segment_5.coef_arr_f_3 = lane_model_output_st.lanes_st[0].segments_st[5].coef_arr_f[3];
    segments_st_adapter.lane0_segment_5.dlowerLimit_f = lane_model_output_st.lanes_st[0].segments_st[5].dlowerLimit_f;
    segments_st_adapter.lane0_segment_5.dupperLimit_f = lane_model_output_st.lanes_st[0].segments_st[5].dupperLimit_f;
    segments_st_adapter.lane0_segment_5.numOfSegment_un8 = lane_model_output_st.lanes_st[0].segments_st[5].numOfSegment_un8;
    segments_st_adapter.lane0_segment_5.available_b = lane_model_output_st.lanes_st[0].segments_st[5].available_b;
    segments_st_adapter.lane0_segment_5.detectedByVideo_b = lane_model_output_st.lanes_st[0].segments_st[5].detectedByVideo_b;
    segments_st_adapter.lane0_segment_5.quality_f = lane_model_output_st.lanes_st[0].segments_st[5].quality_f;

    // lane1 segment
    segments_st_adapter.lane1_segment_0.coef_arr_f_0 = lane_model_output_st.lanes_st[1].segments_st[0].coef_arr_f[0];
    segments_st_adapter.lane1_segment_0.coef_arr_f_1 = lane_model_output_st.lanes_st[1].segments_st[0].coef_arr_f[1];
    segments_st_adapter.lane1_segment_0.coef_arr_f_2 = lane_model_output_st.lanes_st[1].segments_st[0].coef_arr_f[2];
    segments_st_adapter.lane1_segment_0.coef_arr_f_3 = lane_model_output_st.lanes_st[1].segments_st[0].coef_arr_f[3];
    segments_st_adapter.lane1_segment_0.dlowerLimit_f = lane_model_output_st.lanes_st[1].segments_st[0].dlowerLimit_f;
    segments_st_adapter.lane1_segment_0.dupperLimit_f = lane_model_output_st.lanes_st[1].segments_st[0].dupperLimit_f;
    segments_st_adapter.lane1_segment_0.numOfSegment_un8 = lane_model_output_st.lanes_st[1].segments_st[0].numOfSegment_un8;
    segments_st_adapter.lane1_segment_0.available_b = lane_model_output_st.lanes_st[1].segments_st[0].available_b;
    segments_st_adapter.lane1_segment_0.detectedByVideo_b = lane_model_output_st.lanes_st[1].segments_st[0].detectedByVideo_b;
    segments_st_adapter.lane1_segment_0.quality_f = lane_model_output_st.lanes_st[1].segments_st[0].quality_f;

    segments_st_adapter.lane1_segment_1.coef_arr_f_0 = lane_model_output_st.lanes_st[1].segments_st[1].coef_arr_f[0];
    segments_st_adapter.lane1_segment_1.coef_arr_f_1 = lane_model_output_st.lanes_st[1].segments_st[1].coef_arr_f[1];
    segments_st_adapter.lane1_segment_1.coef_arr_f_2 = lane_model_output_st.lanes_st[1].segments_st[1].coef_arr_f[2];
    segments_st_adapter.lane1_segment_1.coef_arr_f_3 = lane_model_output_st.lanes_st[1].segments_st[1].coef_arr_f[3];
    segments_st_adapter.lane1_segment_1.dlowerLimit_f = lane_model_output_st.lanes_st[1].segments_st[1].dlowerLimit_f;
    segments_st_adapter.lane1_segment_1.dupperLimit_f = lane_model_output_st.lanes_st[1].segments_st[1].dupperLimit_f;
    segments_st_adapter.lane1_segment_1.numOfSegment_un8 = lane_model_output_st.lanes_st[1].segments_st[1].numOfSegment_un8;
    segments_st_adapter.lane1_segment_1.available_b = lane_model_output_st.lanes_st[1].segments_st[1].available_b;
    segments_st_adapter.lane1_segment_1.detectedByVideo_b = lane_model_output_st.lanes_st[1].segments_st[1].detectedByVideo_b;
    segments_st_adapter.lane1_segment_1.quality_f = lane_model_output_st.lanes_st[1].segments_st[1].quality_f;

    segments_st_adapter.lane1_segment_2.coef_arr_f_0 = lane_model_output_st.lanes_st[1].segments_st[2].coef_arr_f[0];
    segments_st_adapter.lane1_segment_2.coef_arr_f_1 = lane_model_output_st.lanes_st[1].segments_st[2].coef_arr_f[1];
    segments_st_adapter.lane1_segment_2.coef_arr_f_2 = lane_model_output_st.lanes_st[1].segments_st[2].coef_arr_f[2];
    segments_st_adapter.lane1_segment_2.coef_arr_f_3 = lane_model_output_st.lanes_st[1].segments_st[2].coef_arr_f[3];
    segments_st_adapter.lane1_segment_2.dlowerLimit_f = lane_model_output_st.lanes_st[1].segments_st[2].dlowerLimit_f;
    segments_st_adapter.lane1_segment_2.dupperLimit_f = lane_model_output_st.lanes_st[1].segments_st[2].dupperLimit_f;
    segments_st_adapter.lane1_segment_2.numOfSegment_un8 = lane_model_output_st.lanes_st[1].segments_st[2].numOfSegment_un8;
    segments_st_adapter.lane1_segment_2.available_b = lane_model_output_st.lanes_st[1].segments_st[2].available_b;
    segments_st_adapter.lane1_segment_2.detectedByVideo_b = lane_model_output_st.lanes_st[1].segments_st[2].detectedByVideo_b;
    segments_st_adapter.lane1_segment_2.quality_f = lane_model_output_st.lanes_st[1].segments_st[2].quality_f;

    segments_st_adapter.lane1_segment_3.coef_arr_f_0 = lane_model_output_st.lanes_st[1].segments_st[3].coef_arr_f[0];
    segments_st_adapter.lane1_segment_3.coef_arr_f_1 = lane_model_output_st.lanes_st[1].segments_st[3].coef_arr_f[1];
    segments_st_adapter.lane1_segment_3.coef_arr_f_2 = lane_model_output_st.lanes_st[1].segments_st[3].coef_arr_f[2];
    segments_st_adapter.lane1_segment_3.coef_arr_f_3 = lane_model_output_st.lanes_st[1].segments_st[3].coef_arr_f[3];
    segments_st_adapter.lane1_segment_3.dlowerLimit_f = lane_model_output_st.lanes_st[1].segments_st[3].dlowerLimit_f;
    segments_st_adapter.lane1_segment_3.dupperLimit_f = lane_model_output_st.lanes_st[1].segments_st[3].dupperLimit_f;
    segments_st_adapter.lane1_segment_3.numOfSegment_un8 = lane_model_output_st.lanes_st[1].segments_st[3].numOfSegment_un8;
    segments_st_adapter.lane1_segment_3.available_b = lane_model_output_st.lanes_st[1].segments_st[3].available_b;
    segments_st_adapter.lane1_segment_3.detectedByVideo_b = lane_model_output_st.lanes_st[1].segments_st[3].detectedByVideo_b;
    segments_st_adapter.lane1_segment_3.quality_f = lane_model_output_st.lanes_st[1].segments_st[3].quality_f;

    segments_st_adapter.lane1_segment_4.coef_arr_f_0 = lane_model_output_st.lanes_st[1].segments_st[4].coef_arr_f[0];
    segments_st_adapter.lane1_segment_4.coef_arr_f_1 = lane_model_output_st.lanes_st[1].segments_st[4].coef_arr_f[1];
    segments_st_adapter.lane1_segment_4.coef_arr_f_2 = lane_model_output_st.lanes_st[1].segments_st[4].coef_arr_f[2];
    segments_st_adapter.lane1_segment_4.coef_arr_f_3 = lane_model_output_st.lanes_st[1].segments_st[4].coef_arr_f[3];
    segments_st_adapter.lane1_segment_4.dlowerLimit_f = lane_model_output_st.lanes_st[1].segments_st[4].dlowerLimit_f;
    segments_st_adapter.lane1_segment_4.dupperLimit_f = lane_model_output_st.lanes_st[1].segments_st[4].dupperLimit_f;
    segments_st_adapter.lane1_segment_4.numOfSegment_un8 = lane_model_output_st.lanes_st[1].segments_st[4].numOfSegment_un8;
    segments_st_adapter.lane1_segment_4.available_b = lane_model_output_st.lanes_st[1].segments_st[4].available_b;
    segments_st_adapter.lane1_segment_4.detectedByVideo_b = lane_model_output_st.lanes_st[1].segments_st[4].detectedByVideo_b;
    segments_st_adapter.lane1_segment_4.quality_f = lane_model_output_st.lanes_st[1].segments_st[4].quality_f;

    segments_st_adapter.lane1_segment_5.coef_arr_f_0 = lane_model_output_st.lanes_st[1].segments_st[5].coef_arr_f[0];
    segments_st_adapter.lane1_segment_5.coef_arr_f_1 = lane_model_output_st.lanes_st[1].segments_st[5].coef_arr_f[1];
    segments_st_adapter.lane1_segment_5.coef_arr_f_2 = lane_model_output_st.lanes_st[1].segments_st[5].coef_arr_f[2];
    segments_st_adapter.lane1_segment_5.coef_arr_f_3 = lane_model_output_st.lanes_st[1].segments_st[5].coef_arr_f[3];
    segments_st_adapter.lane1_segment_5.dlowerLimit_f = lane_model_output_st.lanes_st[1].segments_st[5].dlowerLimit_f;
    segments_st_adapter.lane1_segment_5.dupperLimit_f = lane_model_output_st.lanes_st[1].segments_st[5].dupperLimit_f;
    segments_st_adapter.lane1_segment_5.numOfSegment_un8 = lane_model_output_st.lanes_st[1].segments_st[5].numOfSegment_un8;
    segments_st_adapter.lane1_segment_5.available_b = lane_model_output_st.lanes_st[1].segments_st[5].available_b;
    segments_st_adapter.lane1_segment_5.detectedByVideo_b = lane_model_output_st.lanes_st[1].segments_st[5].detectedByVideo_b;
    segments_st_adapter.lane1_segment_5.quality_f = lane_model_output_st.lanes_st[1].segments_st[5].quality_f;

    // lane2 segment
    segments_st_adapter.lane2_segment_0.coef_arr_f_0 = lane_model_output_st.lanes_st[2].segments_st[0].coef_arr_f[0];
    segments_st_adapter.lane2_segment_0.coef_arr_f_1 = lane_model_output_st.lanes_st[2].segments_st[0].coef_arr_f[1];
    segments_st_adapter.lane2_segment_0.coef_arr_f_2 = lane_model_output_st.lanes_st[2].segments_st[0].coef_arr_f[2];
    segments_st_adapter.lane2_segment_0.coef_arr_f_3 = lane_model_output_st.lanes_st[2].segments_st[0].coef_arr_f[3];
    segments_st_adapter.lane2_segment_0.dlowerLimit_f = lane_model_output_st.lanes_st[2].segments_st[0].dlowerLimit_f;
    segments_st_adapter.lane2_segment_0.dupperLimit_f = lane_model_output_st.lanes_st[2].segments_st[0].dupperLimit_f;
    segments_st_adapter.lane2_segment_0.numOfSegment_un8 = lane_model_output_st.lanes_st[2].segments_st[0].numOfSegment_un8;
    segments_st_adapter.lane2_segment_0.available_b = lane_model_output_st.lanes_st[2].segments_st[0].available_b;
    segments_st_adapter.lane2_segment_0.detectedByVideo_b = lane_model_output_st.lanes_st[2].segments_st[0].detectedByVideo_b;
    segments_st_adapter.lane2_segment_0.quality_f = lane_model_output_st.lanes_st[2].segments_st[0].quality_f;

    segments_st_adapter.lane2_segment_1.coef_arr_f_0 = lane_model_output_st.lanes_st[2].segments_st[1].coef_arr_f[0];
    segments_st_adapter.lane2_segment_1.coef_arr_f_1 = lane_model_output_st.lanes_st[2].segments_st[1].coef_arr_f[1];
    segments_st_adapter.lane2_segment_1.coef_arr_f_2 = lane_model_output_st.lanes_st[2].segments_st[1].coef_arr_f[2];
    segments_st_adapter.lane2_segment_1.coef_arr_f_3 = lane_model_output_st.lanes_st[2].segments_st[1].coef_arr_f[3];
    segments_st_adapter.lane2_segment_1.dlowerLimit_f = lane_model_output_st.lanes_st[2].segments_st[1].dlowerLimit_f;
    segments_st_adapter.lane2_segment_1.dupperLimit_f = lane_model_output_st.lanes_st[2].segments_st[1].dupperLimit_f;
    segments_st_adapter.lane2_segment_1.numOfSegment_un8 = lane_model_output_st.lanes_st[2].segments_st[1].numOfSegment_un8;
    segments_st_adapter.lane2_segment_1.available_b = lane_model_output_st.lanes_st[2].segments_st[1].available_b;
    segments_st_adapter.lane2_segment_1.detectedByVideo_b = lane_model_output_st.lanes_st[2].segments_st[1].detectedByVideo_b;
    segments_st_adapter.lane2_segment_1.quality_f = lane_model_output_st.lanes_st[2].segments_st[1].quality_f;

    segments_st_adapter.lane2_segment_2.coef_arr_f_0 = lane_model_output_st.lanes_st[2].segments_st[2].coef_arr_f[0];
    segments_st_adapter.lane2_segment_2.coef_arr_f_1 = lane_model_output_st.lanes_st[2].segments_st[2].coef_arr_f[1];
    segments_st_adapter.lane2_segment_2.coef_arr_f_2 = lane_model_output_st.lanes_st[2].segments_st[2].coef_arr_f[2];
    segments_st_adapter.lane2_segment_2.coef_arr_f_3 = lane_model_output_st.lanes_st[2].segments_st[2].coef_arr_f[3];
    segments_st_adapter.lane2_segment_2.dlowerLimit_f = lane_model_output_st.lanes_st[2].segments_st[2].dlowerLimit_f;
    segments_st_adapter.lane2_segment_2.dupperLimit_f = lane_model_output_st.lanes_st[2].segments_st[2].dupperLimit_f;
    segments_st_adapter.lane2_segment_2.numOfSegment_un8 = lane_model_output_st.lanes_st[2].segments_st[2].numOfSegment_un8;
    segments_st_adapter.lane2_segment_2.available_b = lane_model_output_st.lanes_st[2].segments_st[2].available_b;
    segments_st_adapter.lane2_segment_2.detectedByVideo_b = lane_model_output_st.lanes_st[2].segments_st[2].detectedByVideo_b;
    segments_st_adapter.lane2_segment_2.quality_f = lane_model_output_st.lanes_st[2].segments_st[2].quality_f;

    segments_st_adapter.lane2_segment_3.coef_arr_f_0 = lane_model_output_st.lanes_st[2].segments_st[3].coef_arr_f[0];
    segments_st_adapter.lane2_segment_3.coef_arr_f_1 = lane_model_output_st.lanes_st[2].segments_st[3].coef_arr_f[1];
    segments_st_adapter.lane2_segment_3.coef_arr_f_2 = lane_model_output_st.lanes_st[2].segments_st[3].coef_arr_f[2];
    segments_st_adapter.lane2_segment_3.coef_arr_f_3 = lane_model_output_st.lanes_st[2].segments_st[3].coef_arr_f[3];
    segments_st_adapter.lane2_segment_3.dlowerLimit_f = lane_model_output_st.lanes_st[2].segments_st[3].dlowerLimit_f;
    segments_st_adapter.lane2_segment_3.dupperLimit_f = lane_model_output_st.lanes_st[2].segments_st[3].dupperLimit_f;
    segments_st_adapter.lane2_segment_3.numOfSegment_un8 = lane_model_output_st.lanes_st[2].segments_st[3].numOfSegment_un8;
    segments_st_adapter.lane2_segment_3.available_b = lane_model_output_st.lanes_st[2].segments_st[3].available_b;
    segments_st_adapter.lane2_segment_3.detectedByVideo_b = lane_model_output_st.lanes_st[2].segments_st[3].detectedByVideo_b;
    segments_st_adapter.lane2_segment_3.quality_f = lane_model_output_st.lanes_st[2].segments_st[3].quality_f;

    segments_st_adapter.lane2_segment_4.coef_arr_f_0 = lane_model_output_st.lanes_st[2].segments_st[4].coef_arr_f[0];
    segments_st_adapter.lane2_segment_4.coef_arr_f_1 = lane_model_output_st.lanes_st[2].segments_st[4].coef_arr_f[1];
    segments_st_adapter.lane2_segment_4.coef_arr_f_2 = lane_model_output_st.lanes_st[2].segments_st[4].coef_arr_f[2];
    segments_st_adapter.lane2_segment_4.coef_arr_f_3 = lane_model_output_st.lanes_st[2].segments_st[4].coef_arr_f[3];
    segments_st_adapter.lane2_segment_4.dlowerLimit_f = lane_model_output_st.lanes_st[2].segments_st[4].dlowerLimit_f;
    segments_st_adapter.lane2_segment_4.dupperLimit_f = lane_model_output_st.lanes_st[2].segments_st[4].dupperLimit_f;
    segments_st_adapter.lane2_segment_4.numOfSegment_un8 = lane_model_output_st.lanes_st[2].segments_st[4].numOfSegment_un8;
    segments_st_adapter.lane2_segment_4.available_b = lane_model_output_st.lanes_st[2].segments_st[4].available_b;
    segments_st_adapter.lane2_segment_4.detectedByVideo_b = lane_model_output_st.lanes_st[2].segments_st[4].detectedByVideo_b;
    segments_st_adapter.lane2_segment_4.quality_f = lane_model_output_st.lanes_st[2].segments_st[4].quality_f;

    segments_st_adapter.lane2_segment_5.coef_arr_f_0 = lane_model_output_st.lanes_st[2].segments_st[5].coef_arr_f[0];
    segments_st_adapter.lane2_segment_5.coef_arr_f_1 = lane_model_output_st.lanes_st[2].segments_st[5].coef_arr_f[1];
    segments_st_adapter.lane2_segment_5.coef_arr_f_2 = lane_model_output_st.lanes_st[2].segments_st[5].coef_arr_f[2];
    segments_st_adapter.lane2_segment_5.coef_arr_f_3 = lane_model_output_st.lanes_st[2].segments_st[5].coef_arr_f[3];
    segments_st_adapter.lane2_segment_5.dlowerLimit_f = lane_model_output_st.lanes_st[2].segments_st[5].dlowerLimit_f;
    segments_st_adapter.lane2_segment_5.dupperLimit_f = lane_model_output_st.lanes_st[2].segments_st[5].dupperLimit_f;
    segments_st_adapter.lane2_segment_5.numOfSegment_un8 = lane_model_output_st.lanes_st[2].segments_st[5].numOfSegment_un8;
    segments_st_adapter.lane2_segment_5.available_b = lane_model_output_st.lanes_st[2].segments_st[5].available_b;
    segments_st_adapter.lane2_segment_5.detectedByVideo_b = lane_model_output_st.lanes_st[2].segments_st[5].detectedByVideo_b;
    segments_st_adapter.lane2_segment_5.quality_f = lane_model_output_st.lanes_st[2].segments_st[5].quality_f;

    // lane3 segment
    segments_st_adapter.lane3_segment_0.coef_arr_f_0 = lane_model_output_st.lanes_st[3].segments_st[0].coef_arr_f[0];
    segments_st_adapter.lane3_segment_0.coef_arr_f_1 = lane_model_output_st.lanes_st[3].segments_st[0].coef_arr_f[1];
    segments_st_adapter.lane3_segment_0.coef_arr_f_2 = lane_model_output_st.lanes_st[3].segments_st[0].coef_arr_f[2];
    segments_st_adapter.lane3_segment_0.coef_arr_f_3 = lane_model_output_st.lanes_st[3].segments_st[0].coef_arr_f[3];
    segments_st_adapter.lane3_segment_0.dlowerLimit_f = lane_model_output_st.lanes_st[3].segments_st[0].dlowerLimit_f;
    segments_st_adapter.lane3_segment_0.dupperLimit_f = lane_model_output_st.lanes_st[3].segments_st[0].dupperLimit_f;
    segments_st_adapter.lane3_segment_0.numOfSegment_un8 = lane_model_output_st.lanes_st[3].segments_st[0].numOfSegment_un8;
    segments_st_adapter.lane3_segment_0.available_b = lane_model_output_st.lanes_st[3].segments_st[0].available_b;
    segments_st_adapter.lane3_segment_0.detectedByVideo_b = lane_model_output_st.lanes_st[3].segments_st[0].detectedByVideo_b;
    segments_st_adapter.lane3_segment_0.quality_f = lane_model_output_st.lanes_st[3].segments_st[0].quality_f;

    segments_st_adapter.lane3_segment_1.coef_arr_f_0 = lane_model_output_st.lanes_st[3].segments_st[1].coef_arr_f[0];
    segments_st_adapter.lane3_segment_1.coef_arr_f_1 = lane_model_output_st.lanes_st[3].segments_st[1].coef_arr_f[1];
    segments_st_adapter.lane3_segment_1.coef_arr_f_2 = lane_model_output_st.lanes_st[3].segments_st[1].coef_arr_f[2];
    segments_st_adapter.lane3_segment_1.coef_arr_f_3 = lane_model_output_st.lanes_st[3].segments_st[1].coef_arr_f[3];
    segments_st_adapter.lane3_segment_1.dlowerLimit_f = lane_model_output_st.lanes_st[3].segments_st[1].dlowerLimit_f;
    segments_st_adapter.lane3_segment_1.dupperLimit_f = lane_model_output_st.lanes_st[3].segments_st[1].dupperLimit_f;
    segments_st_adapter.lane3_segment_1.numOfSegment_un8 = lane_model_output_st.lanes_st[3].segments_st[1].numOfSegment_un8;
    segments_st_adapter.lane3_segment_1.available_b = lane_model_output_st.lanes_st[3].segments_st[1].available_b;
    segments_st_adapter.lane3_segment_1.detectedByVideo_b = lane_model_output_st.lanes_st[3].segments_st[1].detectedByVideo_b;
    segments_st_adapter.lane3_segment_1.quality_f = lane_model_output_st.lanes_st[3].segments_st[1].quality_f;

    segments_st_adapter.lane3_segment_2.coef_arr_f_0 = lane_model_output_st.lanes_st[3].segments_st[2].coef_arr_f[0];
    segments_st_adapter.lane3_segment_2.coef_arr_f_1 = lane_model_output_st.lanes_st[3].segments_st[2].coef_arr_f[1];
    segments_st_adapter.lane3_segment_2.coef_arr_f_2 = lane_model_output_st.lanes_st[3].segments_st[2].coef_arr_f[2];
    segments_st_adapter.lane3_segment_2.coef_arr_f_3 = lane_model_output_st.lanes_st[3].segments_st[2].coef_arr_f[3];
    segments_st_adapter.lane3_segment_2.dlowerLimit_f = lane_model_output_st.lanes_st[3].segments_st[2].dlowerLimit_f;
    segments_st_adapter.lane3_segment_2.dupperLimit_f = lane_model_output_st.lanes_st[3].segments_st[2].dupperLimit_f;
    segments_st_adapter.lane3_segment_2.numOfSegment_un8 = lane_model_output_st.lanes_st[3].segments_st[2].numOfSegment_un8;
    segments_st_adapter.lane3_segment_2.available_b = lane_model_output_st.lanes_st[3].segments_st[2].available_b;
    segments_st_adapter.lane3_segment_2.detectedByVideo_b = lane_model_output_st.lanes_st[3].segments_st[2].detectedByVideo_b;
    segments_st_adapter.lane3_segment_2.quality_f = lane_model_output_st.lanes_st[3].segments_st[2].quality_f;

    segments_st_adapter.lane3_segment_3.coef_arr_f_0 = lane_model_output_st.lanes_st[3].segments_st[3].coef_arr_f[0];
    segments_st_adapter.lane3_segment_3.coef_arr_f_1 = lane_model_output_st.lanes_st[3].segments_st[3].coef_arr_f[1];
    segments_st_adapter.lane3_segment_3.coef_arr_f_2 = lane_model_output_st.lanes_st[3].segments_st[3].coef_arr_f[2];
    segments_st_adapter.lane3_segment_3.coef_arr_f_3 = lane_model_output_st.lanes_st[3].segments_st[3].coef_arr_f[3];
    segments_st_adapter.lane3_segment_3.dlowerLimit_f = lane_model_output_st.lanes_st[3].segments_st[3].dlowerLimit_f;
    segments_st_adapter.lane3_segment_3.dupperLimit_f = lane_model_output_st.lanes_st[3].segments_st[3].dupperLimit_f;
    segments_st_adapter.lane3_segment_3.numOfSegment_un8 = lane_model_output_st.lanes_st[3].segments_st[3].numOfSegment_un8;
    segments_st_adapter.lane3_segment_3.available_b = lane_model_output_st.lanes_st[3].segments_st[3].available_b;
    segments_st_adapter.lane3_segment_3.detectedByVideo_b = lane_model_output_st.lanes_st[3].segments_st[3].detectedByVideo_b;
    segments_st_adapter.lane3_segment_3.quality_f = lane_model_output_st.lanes_st[3].segments_st[3].quality_f;

    segments_st_adapter.lane3_segment_4.coef_arr_f_0 = lane_model_output_st.lanes_st[3].segments_st[4].coef_arr_f[0];
    segments_st_adapter.lane3_segment_4.coef_arr_f_1 = lane_model_output_st.lanes_st[3].segments_st[4].coef_arr_f[1];
    segments_st_adapter.lane3_segment_4.coef_arr_f_2 = lane_model_output_st.lanes_st[3].segments_st[4].coef_arr_f[2];
    segments_st_adapter.lane3_segment_4.coef_arr_f_3 = lane_model_output_st.lanes_st[3].segments_st[4].coef_arr_f[3];
    segments_st_adapter.lane3_segment_4.dlowerLimit_f = lane_model_output_st.lanes_st[3].segments_st[4].dlowerLimit_f;
    segments_st_adapter.lane3_segment_4.dupperLimit_f = lane_model_output_st.lanes_st[3].segments_st[4].dupperLimit_f;
    segments_st_adapter.lane3_segment_4.numOfSegment_un8 = lane_model_output_st.lanes_st[3].segments_st[4].numOfSegment_un8;
    segments_st_adapter.lane3_segment_4.available_b = lane_model_output_st.lanes_st[3].segments_st[4].available_b;
    segments_st_adapter.lane3_segment_4.detectedByVideo_b = lane_model_output_st.lanes_st[3].segments_st[4].detectedByVideo_b;
    segments_st_adapter.lane3_segment_4.quality_f = lane_model_output_st.lanes_st[3].segments_st[4].quality_f;

    segments_st_adapter.lane3_segment_5.coef_arr_f_0 = lane_model_output_st.lanes_st[3].segments_st[5].coef_arr_f[0];
    segments_st_adapter.lane3_segment_5.coef_arr_f_1 = lane_model_output_st.lanes_st[3].segments_st[5].coef_arr_f[1];
    segments_st_adapter.lane3_segment_5.coef_arr_f_2 = lane_model_output_st.lanes_st[3].segments_st[5].coef_arr_f[2];
    segments_st_adapter.lane3_segment_5.coef_arr_f_3 = lane_model_output_st.lanes_st[3].segments_st[5].coef_arr_f[3];
    segments_st_adapter.lane3_segment_5.dlowerLimit_f = lane_model_output_st.lanes_st[3].segments_st[5].dlowerLimit_f;
    segments_st_adapter.lane3_segment_5.dupperLimit_f = lane_model_output_st.lanes_st[3].segments_st[5].dupperLimit_f;
    segments_st_adapter.lane3_segment_5.numOfSegment_un8 = lane_model_output_st.lanes_st[3].segments_st[5].numOfSegment_un8;
    segments_st_adapter.lane3_segment_5.available_b = lane_model_output_st.lanes_st[3].segments_st[5].available_b;
    segments_st_adapter.lane3_segment_5.detectedByVideo_b = lane_model_output_st.lanes_st[3].segments_st[5].detectedByVideo_b;
    segments_st_adapter.lane3_segment_5.quality_f = lane_model_output_st.lanes_st[3].segments_st[5].quality_f;

    // lane4 segment
    segments_st_adapter.lane4_segment_0.coef_arr_f_0 = lane_model_output_st.lanes_st[4].segments_st[0].coef_arr_f[0];
    segments_st_adapter.lane4_segment_0.coef_arr_f_1 = lane_model_output_st.lanes_st[4].segments_st[0].coef_arr_f[1];
    segments_st_adapter.lane4_segment_0.coef_arr_f_2 = lane_model_output_st.lanes_st[4].segments_st[0].coef_arr_f[2];
    segments_st_adapter.lane4_segment_0.coef_arr_f_3 = lane_model_output_st.lanes_st[4].segments_st[0].coef_arr_f[3];
    segments_st_adapter.lane4_segment_0.dlowerLimit_f = lane_model_output_st.lanes_st[4].segments_st[0].dlowerLimit_f;
    segments_st_adapter.lane4_segment_0.dupperLimit_f = lane_model_output_st.lanes_st[4].segments_st[0].dupperLimit_f;
    segments_st_adapter.lane4_segment_0.numOfSegment_un8 = lane_model_output_st.lanes_st[4].segments_st[0].numOfSegment_un8;
    segments_st_adapter.lane4_segment_0.available_b = lane_model_output_st.lanes_st[4].segments_st[0].available_b;
    segments_st_adapter.lane4_segment_0.detectedByVideo_b = lane_model_output_st.lanes_st[4].segments_st[0].detectedByVideo_b;
    segments_st_adapter.lane4_segment_0.quality_f = lane_model_output_st.lanes_st[4].segments_st[0].quality_f;

    segments_st_adapter.lane4_segment_1.coef_arr_f_0 = lane_model_output_st.lanes_st[4].segments_st[1].coef_arr_f[0];
    segments_st_adapter.lane4_segment_1.coef_arr_f_1 = lane_model_output_st.lanes_st[4].segments_st[1].coef_arr_f[1];
    segments_st_adapter.lane4_segment_1.coef_arr_f_2 = lane_model_output_st.lanes_st[4].segments_st[1].coef_arr_f[2];
    segments_st_adapter.lane4_segment_1.coef_arr_f_3 = lane_model_output_st.lanes_st[4].segments_st[1].coef_arr_f[3];
    segments_st_adapter.lane4_segment_1.dlowerLimit_f = lane_model_output_st.lanes_st[4].segments_st[1].dlowerLimit_f;
    segments_st_adapter.lane4_segment_1.dupperLimit_f = lane_model_output_st.lanes_st[4].segments_st[1].dupperLimit_f;
    segments_st_adapter.lane4_segment_1.numOfSegment_un8 = lane_model_output_st.lanes_st[4].segments_st[1].numOfSegment_un8;
    segments_st_adapter.lane4_segment_1.available_b = lane_model_output_st.lanes_st[4].segments_st[1].available_b;
    segments_st_adapter.lane4_segment_1.detectedByVideo_b = lane_model_output_st.lanes_st[4].segments_st[1].detectedByVideo_b;
    segments_st_adapter.lane4_segment_1.quality_f = lane_model_output_st.lanes_st[4].segments_st[1].quality_f;

    segments_st_adapter.lane4_segment_2.coef_arr_f_0 = lane_model_output_st.lanes_st[4].segments_st[2].coef_arr_f[0];
    segments_st_adapter.lane4_segment_2.coef_arr_f_1 = lane_model_output_st.lanes_st[4].segments_st[2].coef_arr_f[1];
    segments_st_adapter.lane4_segment_2.coef_arr_f_2 = lane_model_output_st.lanes_st[4].segments_st[2].coef_arr_f[2];
    segments_st_adapter.lane4_segment_2.coef_arr_f_3 = lane_model_output_st.lanes_st[4].segments_st[2].coef_arr_f[3];
    segments_st_adapter.lane4_segment_2.dlowerLimit_f = lane_model_output_st.lanes_st[4].segments_st[2].dlowerLimit_f;
    segments_st_adapter.lane4_segment_2.dupperLimit_f = lane_model_output_st.lanes_st[4].segments_st[2].dupperLimit_f;
    segments_st_adapter.lane4_segment_2.numOfSegment_un8 = lane_model_output_st.lanes_st[4].segments_st[2].numOfSegment_un8;
    segments_st_adapter.lane4_segment_2.available_b = lane_model_output_st.lanes_st[4].segments_st[2].available_b;
    segments_st_adapter.lane4_segment_2.detectedByVideo_b = lane_model_output_st.lanes_st[4].segments_st[2].detectedByVideo_b;
    segments_st_adapter.lane4_segment_2.quality_f = lane_model_output_st.lanes_st[4].segments_st[2].quality_f;

    segments_st_adapter.lane4_segment_3.coef_arr_f_0 = lane_model_output_st.lanes_st[4].segments_st[3].coef_arr_f[0];
    segments_st_adapter.lane4_segment_3.coef_arr_f_1 = lane_model_output_st.lanes_st[4].segments_st[3].coef_arr_f[1];
    segments_st_adapter.lane4_segment_3.coef_arr_f_2 = lane_model_output_st.lanes_st[4].segments_st[3].coef_arr_f[2];
    segments_st_adapter.lane4_segment_3.coef_arr_f_3 = lane_model_output_st.lanes_st[4].segments_st[3].coef_arr_f[3];
    segments_st_adapter.lane4_segment_3.dlowerLimit_f = lane_model_output_st.lanes_st[4].segments_st[3].dlowerLimit_f;
    segments_st_adapter.lane4_segment_3.dupperLimit_f = lane_model_output_st.lanes_st[4].segments_st[3].dupperLimit_f;
    segments_st_adapter.lane4_segment_3.numOfSegment_un8 = lane_model_output_st.lanes_st[4].segments_st[3].numOfSegment_un8;
    segments_st_adapter.lane4_segment_3.available_b = lane_model_output_st.lanes_st[4].segments_st[3].available_b;
    segments_st_adapter.lane4_segment_3.detectedByVideo_b = lane_model_output_st.lanes_st[4].segments_st[3].detectedByVideo_b;
    segments_st_adapter.lane4_segment_3.quality_f = lane_model_output_st.lanes_st[4].segments_st[3].quality_f;

    segments_st_adapter.lane4_segment_4.coef_arr_f_0 = lane_model_output_st.lanes_st[4].segments_st[4].coef_arr_f[0];
    segments_st_adapter.lane4_segment_4.coef_arr_f_1 = lane_model_output_st.lanes_st[4].segments_st[4].coef_arr_f[1];
    segments_st_adapter.lane4_segment_4.coef_arr_f_2 = lane_model_output_st.lanes_st[4].segments_st[4].coef_arr_f[2];
    segments_st_adapter.lane4_segment_4.coef_arr_f_3 = lane_model_output_st.lanes_st[4].segments_st[4].coef_arr_f[3];
    segments_st_adapter.lane4_segment_4.dlowerLimit_f = lane_model_output_st.lanes_st[4].segments_st[4].dlowerLimit_f;
    segments_st_adapter.lane4_segment_4.dupperLimit_f = lane_model_output_st.lanes_st[4].segments_st[4].dupperLimit_f;
    segments_st_adapter.lane4_segment_4.numOfSegment_un8 = lane_model_output_st.lanes_st[4].segments_st[4].numOfSegment_un8;
    segments_st_adapter.lane4_segment_4.available_b = lane_model_output_st.lanes_st[4].segments_st[4].available_b;
    segments_st_adapter.lane4_segment_4.detectedByVideo_b = lane_model_output_st.lanes_st[4].segments_st[4].detectedByVideo_b;
    segments_st_adapter.lane4_segment_4.quality_f = lane_model_output_st.lanes_st[4].segments_st[4].quality_f;

    segments_st_adapter.lane4_segment_5.coef_arr_f_0 = lane_model_output_st.lanes_st[4].segments_st[5].coef_arr_f[0];
    segments_st_adapter.lane4_segment_5.coef_arr_f_1 = lane_model_output_st.lanes_st[4].segments_st[5].coef_arr_f[1];
    segments_st_adapter.lane4_segment_5.coef_arr_f_2 = lane_model_output_st.lanes_st[4].segments_st[5].coef_arr_f[2];
    segments_st_adapter.lane4_segment_5.coef_arr_f_3 = lane_model_output_st.lanes_st[4].segments_st[5].coef_arr_f[3];
    segments_st_adapter.lane4_segment_5.dlowerLimit_f = lane_model_output_st.lanes_st[4].segments_st[5].dlowerLimit_f;
    segments_st_adapter.lane4_segment_5.dupperLimit_f = lane_model_output_st.lanes_st[4].segments_st[5].dupperLimit_f;
    segments_st_adapter.lane4_segment_5.numOfSegment_un8 = lane_model_output_st.lanes_st[4].segments_st[5].numOfSegment_un8;
    segments_st_adapter.lane4_segment_5.available_b = lane_model_output_st.lanes_st[4].segments_st[5].available_b;
    segments_st_adapter.lane4_segment_5.detectedByVideo_b = lane_model_output_st.lanes_st[4].segments_st[5].detectedByVideo_b;
    segments_st_adapter.lane4_segment_5.quality_f = lane_model_output_st.lanes_st[4].segments_st[5].quality_f;

    //target
    // Lane0_tar0
    tar_objs_st_adapter.lane0_tar_obj_0.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[0].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_0.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[0].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_0.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[0].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_0.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[0].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_0.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[0].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_0.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[0].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_0.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[0].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_0.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[0].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_0.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[0].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_0.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[0].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_0.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[0].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_0.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[0].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_0.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[0].trackingTimeWithinLane_f;
    // Lane0_tar1
    tar_objs_st_adapter.lane0_tar_obj_1.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[1].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_1.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[1].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_1.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[1].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_1.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[1].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_1.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[1].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_1.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[1].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_1.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[1].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_1.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[1].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_1.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[1].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_1.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[1].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_1.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[1].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_1.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[1].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_1.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[1].trackingTimeWithinLane_f;
    // Lane0_tar2
    tar_objs_st_adapter.lane0_tar_obj_2.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[2].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_2.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[2].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_2.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[2].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_2.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[2].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_2.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[2].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_2.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[2].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_2.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[2].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_2.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[2].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_2.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[2].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_2.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[2].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_2.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[2].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_2.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[2].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_2.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[2].trackingTimeWithinLane_f;
    // Lane0_tar3
    tar_objs_st_adapter.lane0_tar_obj_3.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[3].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_3.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[3].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_3.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[3].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_3.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[3].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_3.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[3].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_3.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[3].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_3.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[3].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_3.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[3].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_3.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[3].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_3.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[3].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_3.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[3].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_3.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[3].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_3.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[3].trackingTimeWithinLane_f;
    // Lane0_tar4
    tar_objs_st_adapter.lane0_tar_obj_4.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[4].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_4.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[4].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_4.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[4].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_4.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[4].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_4.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[4].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_4.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[4].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_4.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[4].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_4.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[4].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_4.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[4].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_4.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[4].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_4.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[4].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_4.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[4].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_4.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[4].trackingTimeWithinLane_f;
    // Lane0_tar5
    tar_objs_st_adapter.lane0_tar_obj_5.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[5].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_5.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[5].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_5.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[5].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_5.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[5].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_5.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[5].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_5.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[5].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_5.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[5].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_5.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[5].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_5.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[5].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_5.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[5].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_5.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[5].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_5.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[5].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_5.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[5].trackingTimeWithinLane_f;
    // Lane0_tar6
    tar_objs_st_adapter.lane0_tar_obj_6.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[6].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_6.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[6].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_6.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[6].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_6.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[6].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_6.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[6].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_6.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[6].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_6.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[6].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_6.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[6].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_6.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[6].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_6.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[6].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_6.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[6].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_6.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[6].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_6.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[6].trackingTimeWithinLane_f;
    // Lane0_tar7
    tar_objs_st_adapter.lane0_tar_obj_7.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[7].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_7.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[7].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_7.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[7].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_7.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[7].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_7.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[7].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_7.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[7].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_7.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[7].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_7.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[7].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_7.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[7].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_7.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[7].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_7.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[7].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_7.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[7].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_7.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[7].trackingTimeWithinLane_f;
    // Lane0_tar8
    tar_objs_st_adapter.lane0_tar_obj_8.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[8].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_8.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[8].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_8.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[8].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_8.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[8].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_8.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[8].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_8.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[8].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_8.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[8].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_8.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[8].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_8.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[8].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_8.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[8].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_8.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[8].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_8.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[8].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_8.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[8].trackingTimeWithinLane_f;
    // Lane0_tar9
    tar_objs_st_adapter.lane0_tar_obj_9.dis2EgoLaneCenter = lane_model_output_st.lanes_st[0].ObjectList_st[9].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane0_tar_obj_9.TTC_f = lane_model_output_st.lanes_st[0].ObjectList_st[9].TTC_f;
    tar_objs_st_adapter.lane0_tar_obj_9.ID_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[9].ID_un8;
    tar_objs_st_adapter.lane0_tar_obj_9.Index_un8 = lane_model_output_st.lanes_st[0].ObjectList_st[9].Index_un8;
    tar_objs_st_adapter.lane0_tar_obj_9.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[0].ObjectList_st[9].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane0_tar_obj_9.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[0].ObjectList_st[9].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane0_tar_obj_9.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[0].ObjectList_st[9].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane0_tar_obj_9.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[0].ObjectList_st[9].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane0_tar_obj_9.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[0].ObjectList_st[9].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane0_tar_obj_9.probCutIn_f = lane_model_output_st.lanes_st[0].ObjectList_st[9].probCutIn_f;
    tar_objs_st_adapter.lane0_tar_obj_9.probCutOut_f = lane_model_output_st.lanes_st[0].ObjectList_st[9].probCutOut_f;
    tar_objs_st_adapter.lane0_tar_obj_9.overlap_f = lane_model_output_st.lanes_st[0].ObjectList_st[9].overlap_f;
    tar_objs_st_adapter.lane0_tar_obj_9.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[9].trackingTimeWithinLane_f;

    //target
    // Lane1_tar0
    tar_objs_st_adapter.lane1_tar_obj_0.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[0].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_0.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[0].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_0.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[0].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_0.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[0].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_0.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[0].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_0.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[0].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_0.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[0].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_0.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[0].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_0.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[0].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_0.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[0].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_0.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[0].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_0.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[0].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_0.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[0].trackingTimeWithinLane_f;
    // Lane1_tar1
    tar_objs_st_adapter.lane1_tar_obj_1.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[1].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_1.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[1].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_1.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[1].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_1.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[1].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_1.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[1].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_1.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[1].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_1.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[1].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_1.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[1].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_1.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[1].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_1.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[1].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_1.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[1].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_1.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[1].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_1.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[1].trackingTimeWithinLane_f;
    // Lane1_tar2
    tar_objs_st_adapter.lane1_tar_obj_2.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[2].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_2.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[2].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_2.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[2].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_2.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[2].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_2.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[2].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_2.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[2].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_2.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[2].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_2.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[2].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_2.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[2].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_2.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[2].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_2.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[2].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_2.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[2].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_2.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[2].trackingTimeWithinLane_f;
    // Lane1_tar3
    tar_objs_st_adapter.lane1_tar_obj_3.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[3].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_3.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[3].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_3.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[3].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_3.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[3].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_3.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[3].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_3.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[3].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_3.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[3].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_3.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[3].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_3.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[3].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_3.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[3].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_3.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[3].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_3.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[3].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_3.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[3].trackingTimeWithinLane_f;
    // Lane1_tar4
    tar_objs_st_adapter.lane1_tar_obj_4.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[4].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_4.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[4].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_4.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[4].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_4.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[4].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_4.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[4].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_4.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[4].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_4.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[4].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_4.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[4].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_4.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[4].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_4.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[4].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_4.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[4].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_4.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[4].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_4.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[4].trackingTimeWithinLane_f;
    // Lane1_tar5
    tar_objs_st_adapter.lane1_tar_obj_5.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[5].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_5.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[5].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_5.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[5].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_5.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[5].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_5.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[5].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_5.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[5].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_5.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[5].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_5.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[5].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_5.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[5].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_5.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[5].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_5.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[5].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_5.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[5].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_5.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[5].trackingTimeWithinLane_f;
    // Lane1_tar6
    tar_objs_st_adapter.lane1_tar_obj_6.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[6].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_6.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[6].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_6.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[6].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_6.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[6].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_6.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[6].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_6.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[6].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_6.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[6].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_6.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[6].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_6.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[6].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_6.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[6].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_6.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[6].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_6.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[6].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_6.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[6].trackingTimeWithinLane_f;
    // Lane1_tar7
    tar_objs_st_adapter.lane1_tar_obj_7.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[7].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_7.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[7].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_7.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[7].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_7.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[7].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_7.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[7].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_7.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[7].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_7.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[7].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_7.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[7].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_7.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[7].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_7.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[7].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_7.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[7].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_7.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[7].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_7.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[7].trackingTimeWithinLane_f;
    // Lane1_tar8
    tar_objs_st_adapter.lane1_tar_obj_8.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[8].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_8.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[8].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_8.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[8].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_8.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[8].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_8.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[8].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_8.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[8].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_8.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[8].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_8.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[8].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_8.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[8].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_8.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[8].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_8.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[8].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_8.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[8].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_8.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[8].trackingTimeWithinLane_f;
    // Lane1_tar9
    tar_objs_st_adapter.lane1_tar_obj_9.dis2EgoLaneCenter = lane_model_output_st.lanes_st[1].ObjectList_st[9].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane1_tar_obj_9.TTC_f = lane_model_output_st.lanes_st[1].ObjectList_st[9].TTC_f;
    tar_objs_st_adapter.lane1_tar_obj_9.ID_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[9].ID_un8;
    tar_objs_st_adapter.lane1_tar_obj_9.Index_un8 = lane_model_output_st.lanes_st[1].ObjectList_st[9].Index_un8;
    tar_objs_st_adapter.lane1_tar_obj_9.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[1].ObjectList_st[9].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane1_tar_obj_9.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[1].ObjectList_st[9].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane1_tar_obj_9.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[1].ObjectList_st[9].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane1_tar_obj_9.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[1].ObjectList_st[9].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane1_tar_obj_9.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[1].ObjectList_st[9].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane1_tar_obj_9.probCutIn_f = lane_model_output_st.lanes_st[1].ObjectList_st[9].probCutIn_f;
    tar_objs_st_adapter.lane1_tar_obj_9.probCutOut_f = lane_model_output_st.lanes_st[1].ObjectList_st[9].probCutOut_f;
    tar_objs_st_adapter.lane1_tar_obj_9.overlap_f = lane_model_output_st.lanes_st[1].ObjectList_st[9].overlap_f;
    tar_objs_st_adapter.lane1_tar_obj_9.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[1].ObjectList_st[9].trackingTimeWithinLane_f;

    //target
    // Lane2_tar0
    tar_objs_st_adapter.lane2_tar_obj_0.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[0].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_0.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[0].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_0.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[0].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_0.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[0].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_0.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[0].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_0.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[0].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_0.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[0].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_0.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[0].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_0.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[0].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_0.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[0].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_0.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[0].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_0.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[0].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_0.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[0].trackingTimeWithinLane_f;
    // Lane2_tar1
    tar_objs_st_adapter.lane2_tar_obj_1.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[1].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_1.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[1].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_1.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[1].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_1.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[1].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_1.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[1].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_1.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[1].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_1.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[1].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_1.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[1].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_1.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[1].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_1.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[1].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_1.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[1].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_1.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[1].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_1.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[1].trackingTimeWithinLane_f;
    // Lane2_tar2
    tar_objs_st_adapter.lane2_tar_obj_2.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[2].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_2.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[2].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_2.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[2].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_2.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[2].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_2.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[2].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_2.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[2].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_2.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[2].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_2.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[2].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_2.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[2].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_2.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[2].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_2.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[2].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_2.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[2].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_2.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[2].trackingTimeWithinLane_f;
    // Lane2_tar3
    tar_objs_st_adapter.lane2_tar_obj_3.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[3].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_3.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[3].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_3.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[3].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_3.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[3].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_3.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[3].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_3.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[3].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_3.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[3].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_3.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[3].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_3.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[3].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_3.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[3].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_3.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[3].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_3.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[3].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_3.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[3].trackingTimeWithinLane_f;
    // Lane2_tar4
    tar_objs_st_adapter.lane2_tar_obj_4.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[4].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_4.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[4].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_4.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[4].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_4.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[4].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_4.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[4].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_4.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[4].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_4.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[4].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_4.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[4].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_4.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[4].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_4.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[4].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_4.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[4].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_4.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[4].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_4.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[4].trackingTimeWithinLane_f;
    // Lane2_tar5
    tar_objs_st_adapter.lane2_tar_obj_5.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[5].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_5.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[5].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_5.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[5].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_5.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[5].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_5.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[5].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_5.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[5].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_5.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[5].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_5.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[5].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_5.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[5].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_5.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[5].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_5.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[5].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_5.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[5].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_5.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[5].trackingTimeWithinLane_f;
    // Lane2_tar6
    tar_objs_st_adapter.lane2_tar_obj_6.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[6].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_6.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[6].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_6.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[6].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_6.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[6].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_6.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[6].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_6.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[6].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_6.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[6].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_6.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[6].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_6.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[6].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_6.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[6].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_6.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[6].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_6.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[6].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_6.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[6].trackingTimeWithinLane_f;
    // Lane2_tar7
    tar_objs_st_adapter.lane2_tar_obj_7.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[7].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_7.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[7].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_7.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[7].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_7.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[7].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_7.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[7].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_7.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[7].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_7.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[7].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_7.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[7].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_7.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[7].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_7.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[7].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_7.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[7].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_7.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[7].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_7.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[7].trackingTimeWithinLane_f;
    // Lane2_tar8
    tar_objs_st_adapter.lane2_tar_obj_8.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[8].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_8.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[8].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_8.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[8].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_8.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[8].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_8.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[8].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_8.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[8].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_8.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[8].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_8.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[8].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_8.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[8].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_8.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[8].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_8.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[8].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_8.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[8].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_8.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[8].trackingTimeWithinLane_f;
    // Lane2_tar9
    tar_objs_st_adapter.lane2_tar_obj_9.dis2EgoLaneCenter = lane_model_output_st.lanes_st[2].ObjectList_st[9].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane2_tar_obj_9.TTC_f = lane_model_output_st.lanes_st[2].ObjectList_st[9].TTC_f;
    tar_objs_st_adapter.lane2_tar_obj_9.ID_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[9].ID_un8;
    tar_objs_st_adapter.lane2_tar_obj_9.Index_un8 = lane_model_output_st.lanes_st[2].ObjectList_st[9].Index_un8;
    tar_objs_st_adapter.lane2_tar_obj_9.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[2].ObjectList_st[9].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane2_tar_obj_9.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[2].ObjectList_st[9].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane2_tar_obj_9.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[2].ObjectList_st[9].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane2_tar_obj_9.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[2].ObjectList_st[9].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane2_tar_obj_9.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[2].ObjectList_st[9].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane2_tar_obj_9.probCutIn_f = lane_model_output_st.lanes_st[2].ObjectList_st[9].probCutIn_f;
    tar_objs_st_adapter.lane2_tar_obj_9.probCutOut_f = lane_model_output_st.lanes_st[2].ObjectList_st[9].probCutOut_f;
    tar_objs_st_adapter.lane2_tar_obj_9.overlap_f = lane_model_output_st.lanes_st[2].ObjectList_st[9].overlap_f;
    tar_objs_st_adapter.lane2_tar_obj_9.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[2].ObjectList_st[9].trackingTimeWithinLane_f;

    //target
    // Lane3_tar0
    tar_objs_st_adapter.lane3_tar_obj_0.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[0].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_0.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[0].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_0.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[0].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_0.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[0].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_0.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[0].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_0.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[0].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_0.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[0].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_0.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[0].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_0.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[0].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_0.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[0].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_0.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[0].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_0.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[0].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_0.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[0].trackingTimeWithinLane_f;
    // Lane3_tar1
    tar_objs_st_adapter.lane3_tar_obj_1.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[1].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_1.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[1].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_1.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[1].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_1.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[1].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_1.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[1].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_1.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[1].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_1.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[1].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_1.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[1].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_1.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[1].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_1.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[1].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_1.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[1].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_1.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[1].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_1.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[1].trackingTimeWithinLane_f;
    // Lane3_tar2
    tar_objs_st_adapter.lane3_tar_obj_2.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[2].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_2.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[2].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_2.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[2].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_2.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[2].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_2.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[2].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_2.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[2].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_2.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[2].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_2.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[2].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_2.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[2].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_2.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[2].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_2.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[2].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_2.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[2].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_2.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[2].trackingTimeWithinLane_f;
    // Lane3_tar3
    tar_objs_st_adapter.lane3_tar_obj_3.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[3].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_3.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[3].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_3.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[3].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_3.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[3].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_3.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[3].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_3.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[3].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_3.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[3].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_3.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[3].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_3.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[3].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_3.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[3].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_3.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[3].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_3.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[3].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_3.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[3].trackingTimeWithinLane_f;
    // Lane3_tar4
    tar_objs_st_adapter.lane3_tar_obj_4.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[4].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_4.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[4].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_4.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[4].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_4.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[4].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_4.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[4].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_4.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[4].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_4.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[4].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_4.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[4].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_4.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[4].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_4.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[4].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_4.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[4].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_4.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[4].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_4.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[4].trackingTimeWithinLane_f;
    // Lane3_tar5
    tar_objs_st_adapter.lane3_tar_obj_5.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[5].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_5.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[5].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_5.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[5].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_5.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[5].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_5.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[5].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_5.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[5].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_5.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[5].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_5.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[5].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_5.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[5].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_5.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[5].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_5.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[5].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_5.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[5].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_5.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[5].trackingTimeWithinLane_f;
    // Lane3_tar6
    tar_objs_st_adapter.lane3_tar_obj_6.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[6].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_6.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[6].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_6.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[6].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_6.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[6].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_6.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[6].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_6.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[6].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_6.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[6].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_6.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[6].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_6.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[6].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_6.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[6].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_6.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[6].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_6.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[6].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_6.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[6].trackingTimeWithinLane_f;
    // Lane3_tar7
    tar_objs_st_adapter.lane3_tar_obj_7.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[7].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_7.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[7].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_7.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[7].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_7.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[7].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_7.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[7].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_7.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[7].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_7.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[7].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_7.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[7].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_7.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[7].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_7.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[7].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_7.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[7].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_7.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[7].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_7.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[7].trackingTimeWithinLane_f;
    // Lane3_tar8
    tar_objs_st_adapter.lane3_tar_obj_8.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[8].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_8.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[8].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_8.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[8].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_8.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[8].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_8.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[8].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_8.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[8].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_8.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[8].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_8.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[8].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_8.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[8].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_8.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[8].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_8.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[8].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_8.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[8].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_8.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[8].trackingTimeWithinLane_f;
    // Lane3_tar9
    tar_objs_st_adapter.lane3_tar_obj_9.dis2EgoLaneCenter = lane_model_output_st.lanes_st[3].ObjectList_st[9].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane3_tar_obj_9.TTC_f = lane_model_output_st.lanes_st[3].ObjectList_st[9].TTC_f;
    tar_objs_st_adapter.lane3_tar_obj_9.ID_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[9].ID_un8;
    tar_objs_st_adapter.lane3_tar_obj_9.Index_un8 = lane_model_output_st.lanes_st[3].ObjectList_st[9].Index_un8;
    tar_objs_st_adapter.lane3_tar_obj_9.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[3].ObjectList_st[9].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane3_tar_obj_9.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[3].ObjectList_st[9].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane3_tar_obj_9.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[3].ObjectList_st[9].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane3_tar_obj_9.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[3].ObjectList_st[9].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane3_tar_obj_9.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[3].ObjectList_st[9].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane3_tar_obj_9.probCutIn_f = lane_model_output_st.lanes_st[3].ObjectList_st[9].probCutIn_f;
    tar_objs_st_adapter.lane3_tar_obj_9.probCutOut_f = lane_model_output_st.lanes_st[3].ObjectList_st[9].probCutOut_f;
    tar_objs_st_adapter.lane3_tar_obj_9.overlap_f = lane_model_output_st.lanes_st[3].ObjectList_st[9].overlap_f;
    tar_objs_st_adapter.lane3_tar_obj_9.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[3].ObjectList_st[9].trackingTimeWithinLane_f;

    //target
    // Lane4_tar0
    tar_objs_st_adapter.lane4_tar_obj_0.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[0].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_0.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[0].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_0.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[0].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_0.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[0].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_0.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[0].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_0.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[0].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_0.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[0].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_0.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[0].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_0.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[0].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_0.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[0].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_0.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[0].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_0.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[0].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_0.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[0].trackingTimeWithinLane_f;
    // Lane4_tar1
    tar_objs_st_adapter.lane4_tar_obj_1.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[1].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_1.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[1].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_1.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[1].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_1.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[1].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_1.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[1].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_1.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[1].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_1.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[1].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_1.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[1].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_1.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[1].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_1.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[1].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_1.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[1].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_1.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[1].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_1.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[1].trackingTimeWithinLane_f;
    // Lane4_tar2
    tar_objs_st_adapter.lane4_tar_obj_2.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[2].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_2.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[2].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_2.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[2].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_2.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[2].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_2.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[2].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_2.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[2].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_2.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[2].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_2.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[2].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_2.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[2].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_2.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[2].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_2.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[2].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_2.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[2].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_2.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[2].trackingTimeWithinLane_f;
    // Lane4_tar3
    tar_objs_st_adapter.lane4_tar_obj_3.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[3].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_3.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[3].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_3.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[3].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_3.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[3].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_3.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[3].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_3.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[3].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_3.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[3].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_3.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[3].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_3.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[3].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_3.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[3].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_3.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[3].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_3.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[3].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_3.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[3].trackingTimeWithinLane_f;
    // Lane4_tar4
    tar_objs_st_adapter.lane4_tar_obj_4.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[4].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_4.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[4].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_4.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[4].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_4.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[4].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_4.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[4].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_4.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[4].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_4.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[4].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_4.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[4].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_4.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[4].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_4.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[4].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_4.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[4].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_4.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[4].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_4.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[4].trackingTimeWithinLane_f;
    // Lane4_tar5
    tar_objs_st_adapter.lane4_tar_obj_5.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[5].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_5.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[5].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_5.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[5].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_5.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[5].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_5.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[5].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_5.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[5].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_5.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[5].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_5.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[5].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_5.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[5].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_5.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[5].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_5.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[5].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_5.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[5].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_5.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[5].trackingTimeWithinLane_f;
    // Lane4_tar6
    tar_objs_st_adapter.lane4_tar_obj_6.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[6].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_6.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[6].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_6.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[6].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_6.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[6].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_6.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[6].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_6.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[6].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_6.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[6].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_6.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[6].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_6.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[6].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_6.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[6].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_6.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[6].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_6.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[6].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_6.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[6].trackingTimeWithinLane_f;
    // Lane4_tar7
    tar_objs_st_adapter.lane4_tar_obj_7.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[7].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_7.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[7].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_7.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[7].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_7.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[7].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_7.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[7].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_7.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[7].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_7.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[7].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_7.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[7].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_7.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[7].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_7.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[7].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_7.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[7].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_7.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[7].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_7.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[7].trackingTimeWithinLane_f;
    // Lane4_tar8
    tar_objs_st_adapter.lane4_tar_obj_8.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[8].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_8.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[8].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_8.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[8].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_8.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[8].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_8.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[8].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_8.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[8].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_8.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[8].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_8.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[8].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_8.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[8].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_8.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[8].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_8.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[8].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_8.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[8].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_8.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[4].ObjectList_st[8].trackingTimeWithinLane_f;
    // Lane4_tar9
    tar_objs_st_adapter.lane4_tar_obj_9.dis2EgoLaneCenter = lane_model_output_st.lanes_st[4].ObjectList_st[9].dis2EgoLaneCenter;
    tar_objs_st_adapter.lane4_tar_obj_9.TTC_f = lane_model_output_st.lanes_st[4].ObjectList_st[9].TTC_f;
    tar_objs_st_adapter.lane4_tar_obj_9.ID_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[9].ID_un8;
    tar_objs_st_adapter.lane4_tar_obj_9.Index_un8 = lane_model_output_st.lanes_st[4].ObjectList_st[9].Index_un8;
    tar_objs_st_adapter.lane4_tar_obj_9.probWithinLane_arr_f_0 = lane_model_output_st.lanes_st[4].ObjectList_st[9].probWithinLane_arr_f[0];
    tar_objs_st_adapter.lane4_tar_obj_9.probWithinLane_arr_f_1 = lane_model_output_st.lanes_st[4].ObjectList_st[9].probWithinLane_arr_f[1];
    tar_objs_st_adapter.lane4_tar_obj_9.probWithinLane_arr_f_2 = lane_model_output_st.lanes_st[4].ObjectList_st[9].probWithinLane_arr_f[2];
    tar_objs_st_adapter.lane4_tar_obj_9.probWithinLane_arr_f_3 = lane_model_output_st.lanes_st[4].ObjectList_st[9].probWithinLane_arr_f[3];
    tar_objs_st_adapter.lane4_tar_obj_9.probWithinLane_arr_f_4 = lane_model_output_st.lanes_st[4].ObjectList_st[9].probWithinLane_arr_f[4];
    tar_objs_st_adapter.lane4_tar_obj_9.probCutIn_f = lane_model_output_st.lanes_st[4].ObjectList_st[9].probCutIn_f;
    tar_objs_st_adapter.lane4_tar_obj_9.probCutOut_f = lane_model_output_st.lanes_st[4].ObjectList_st[9].probCutOut_f;
    tar_objs_st_adapter.lane4_tar_obj_9.overlap_f = lane_model_output_st.lanes_st[4].ObjectList_st[9].overlap_f;
    tar_objs_st_adapter.lane4_tar_obj_9.trackingTimeWithinLane_f = lane_model_output_st.lanes_st[0].ObjectList_st[0].trackingTimeWithinLane_f;

}

void HMI_ADAPTER()
{
    //hmi_display_obj_adp.object_count = hmi_display_obj.object_count;
    //0
    hmi_display_obj_adp.object_0.dx = hmi_display_obj.objects[0].dx;
    hmi_display_obj_adp.object_0.dy = hmi_display_obj.objects[0].dy;
    hmi_display_obj_adp.object_0.object_ID = hmi_display_obj.objects[0].object_ID;
    hmi_display_obj_adp.object_0.obj_attr = hmi_display_obj.objects[0].obj_attr;
    hmi_display_obj_adp.object_0.obj_type = hmi_display_obj.objects[0].obj_type;
    //1
    hmi_display_obj_adp.object_1.dx = hmi_display_obj.objects[1].dx;
    hmi_display_obj_adp.object_1.dy = hmi_display_obj.objects[1].dy;
    hmi_display_obj_adp.object_1.object_ID = hmi_display_obj.objects[1].object_ID;
    hmi_display_obj_adp.object_1.obj_attr = hmi_display_obj.objects[1].obj_attr;
    hmi_display_obj_adp.object_1.obj_type = hmi_display_obj.objects[1].obj_type;
    //2
    hmi_display_obj_adp.object_2.dx = hmi_display_obj.objects[2].dx;
    hmi_display_obj_adp.object_2.dy = hmi_display_obj.objects[2].dy;
    hmi_display_obj_adp.object_2.object_ID = hmi_display_obj.objects[2].object_ID;
    hmi_display_obj_adp.object_2.obj_attr = hmi_display_obj.objects[2].obj_attr;
    hmi_display_obj_adp.object_2.obj_type = hmi_display_obj.objects[2].obj_type;
    //3
    hmi_display_obj_adp.object_3.dx = hmi_display_obj.objects[3].dx;
    hmi_display_obj_adp.object_3.dy = hmi_display_obj.objects[3].dy;
    hmi_display_obj_adp.object_3.object_ID = hmi_display_obj.objects[3].object_ID;
    hmi_display_obj_adp.object_3.obj_attr = hmi_display_obj.objects[3].obj_attr;
    hmi_display_obj_adp.object_3.obj_type = hmi_display_obj.objects[3].obj_type;
    //4
    hmi_display_obj_adp.object_4.dx = hmi_display_obj.objects[4].dx;
    hmi_display_obj_adp.object_4.dy = hmi_display_obj.objects[4].dy;
    hmi_display_obj_adp.object_4.object_ID = hmi_display_obj.objects[4].object_ID;
    hmi_display_obj_adp.object_4.obj_attr = hmi_display_obj.objects[4].obj_attr;
    hmi_display_obj_adp.object_4.obj_type = hmi_display_obj.objects[4].obj_type;
    //5
    hmi_display_obj_adp.object_5.dx = hmi_display_obj.objects[5].dx;
    hmi_display_obj_adp.object_5.dy = hmi_display_obj.objects[5].dy;
    hmi_display_obj_adp.object_5.object_ID = hmi_display_obj.objects[5].object_ID;
    hmi_display_obj_adp.object_5.obj_attr = hmi_display_obj.objects[5].obj_attr;
    hmi_display_obj_adp.object_5.obj_type = hmi_display_obj.objects[5].obj_type;
    //6
    hmi_display_obj_adp.object_6.dx = hmi_display_obj.objects[6].dx;
    hmi_display_obj_adp.object_6.dy = hmi_display_obj.objects[6].dy;
    hmi_display_obj_adp.object_6.object_ID = hmi_display_obj.objects[6].object_ID;
    hmi_display_obj_adp.object_6.obj_attr = hmi_display_obj.objects[6].obj_attr;
    hmi_display_obj_adp.object_6.obj_type = hmi_display_obj.objects[6].obj_type;
    //7
    hmi_display_obj_adp.object_7.dx = hmi_display_obj.objects[7].dx;
    hmi_display_obj_adp.object_7.dy = hmi_display_obj.objects[7].dy;
    hmi_display_obj_adp.object_7.object_ID = hmi_display_obj.objects[7].object_ID;
    hmi_display_obj_adp.object_7.obj_attr = hmi_display_obj.objects[7].obj_attr;
    hmi_display_obj_adp.object_7.obj_type = hmi_display_obj.objects[7].obj_type;
    //8
    hmi_display_obj_adp.object_8.dx = hmi_display_obj.objects[8].dx;
    hmi_display_obj_adp.object_8.dy = hmi_display_obj.objects[8].dy;
    hmi_display_obj_adp.object_8.object_ID = hmi_display_obj.objects[8].object_ID;
    hmi_display_obj_adp.object_8.obj_attr = hmi_display_obj.objects[8].obj_attr;
    hmi_display_obj_adp.object_8.obj_type = hmi_display_obj.objects[8].obj_type;
    //9
    hmi_display_obj_adp.object_9.dx = hmi_display_obj.objects[9].dx;
    hmi_display_obj_adp.object_9.dy = hmi_display_obj.objects[9].dy;
    hmi_display_obj_adp.object_9.object_ID = hmi_display_obj.objects[9].object_ID;
    hmi_display_obj_adp.object_9.obj_attr = hmi_display_obj.objects[9].obj_attr;
    hmi_display_obj_adp.object_9.obj_type = hmi_display_obj.objects[9].obj_type;

    //110
    hmi_display_obj_adp.object_10.dx = hmi_display_obj.objects[10].dx;
    hmi_display_obj_adp.object_10.dy = hmi_display_obj.objects[10].dy;
    hmi_display_obj_adp.object_10.object_ID = hmi_display_obj.objects[10].object_ID;
    hmi_display_obj_adp.object_10.obj_attr = hmi_display_obj.objects[10].obj_attr;
    hmi_display_obj_adp.object_10.obj_type = hmi_display_obj.objects[10].obj_type;
    //11
    hmi_display_obj_adp.object_11.dx = hmi_display_obj.objects[11].dx;
    hmi_display_obj_adp.object_11.dy = hmi_display_obj.objects[11].dy;
    hmi_display_obj_adp.object_11.object_ID = hmi_display_obj.objects[11].object_ID;
    hmi_display_obj_adp.object_11.obj_attr = hmi_display_obj.objects[11].obj_attr;
    hmi_display_obj_adp.object_11.obj_type = hmi_display_obj.objects[11].obj_type;
    //12
    hmi_display_obj_adp.object_12.dx = hmi_display_obj.objects[12].dx;
    hmi_display_obj_adp.object_12.dy = hmi_display_obj.objects[12].dy;
    hmi_display_obj_adp.object_12.object_ID = hmi_display_obj.objects[12].object_ID;
    hmi_display_obj_adp.object_12.obj_attr = hmi_display_obj.objects[12].obj_attr;
    hmi_display_obj_adp.object_12.obj_type = hmi_display_obj.objects[12].obj_type;
    //13
    hmi_display_obj_adp.object_13.dx = hmi_display_obj.objects[13].dx;
    hmi_display_obj_adp.object_13.dy = hmi_display_obj.objects[13].dy;
    hmi_display_obj_adp.object_13.object_ID = hmi_display_obj.objects[13].object_ID;
    hmi_display_obj_adp.object_13.obj_attr = hmi_display_obj.objects[13].obj_attr;
    hmi_display_obj_adp.object_13.obj_type = hmi_display_obj.objects[13].obj_type;
    //14
    hmi_display_obj_adp.object_14.dx = hmi_display_obj.objects[14].dx;
    hmi_display_obj_adp.object_14.dy = hmi_display_obj.objects[14].dy;
    hmi_display_obj_adp.object_14.object_ID = hmi_display_obj.objects[14].object_ID;
    hmi_display_obj_adp.object_14.obj_attr = hmi_display_obj.objects[14].obj_attr;
    hmi_display_obj_adp.object_14.obj_type = hmi_display_obj.objects[14].obj_type;
    //15
    hmi_display_obj_adp.object_15.dx = hmi_display_obj.objects[15].dx;
    hmi_display_obj_adp.object_15.dy = hmi_display_obj.objects[15].dy;
    hmi_display_obj_adp.object_15.object_ID = hmi_display_obj.objects[15].object_ID;
    hmi_display_obj_adp.object_15.obj_attr = hmi_display_obj.objects[15].obj_attr;
    hmi_display_obj_adp.object_15.obj_type = hmi_display_obj.objects[15].obj_type;
    //16
    hmi_display_obj_adp.object_16.dx = hmi_display_obj.objects[16].dx;
    hmi_display_obj_adp.object_16.dy = hmi_display_obj.objects[16].dy;
    hmi_display_obj_adp.object_16.object_ID = hmi_display_obj.objects[16].object_ID;
    hmi_display_obj_adp.object_16.obj_attr = hmi_display_obj.objects[16].obj_attr;
    hmi_display_obj_adp.object_16.obj_type = hmi_display_obj.objects[16].obj_type;
    //17
    hmi_display_obj_adp.object_17.dx = hmi_display_obj.objects[17].dx;
    hmi_display_obj_adp.object_17.dy = hmi_display_obj.objects[17].dy;
    hmi_display_obj_adp.object_17.object_ID = hmi_display_obj.objects[17].object_ID;
    hmi_display_obj_adp.object_17.obj_attr = hmi_display_obj.objects[17].obj_attr;
    hmi_display_obj_adp.object_17.obj_type = hmi_display_obj.objects[17].obj_type;
    //18
    hmi_display_obj_adp.object_18.dx = hmi_display_obj.objects[18].dx;
    hmi_display_obj_adp.object_18.dy = hmi_display_obj.objects[18].dy;
    hmi_display_obj_adp.object_18.object_ID = hmi_display_obj.objects[18].object_ID;
    hmi_display_obj_adp.object_18.obj_attr = hmi_display_obj.objects[18].obj_attr;
    hmi_display_obj_adp.object_18.obj_type = hmi_display_obj.objects[18].obj_type;
    //19
    hmi_display_obj_adp.object_19.dx = hmi_display_obj.objects[19].dx;
    hmi_display_obj_adp.object_19.dy = hmi_display_obj.objects[19].dy;
    hmi_display_obj_adp.object_19.object_ID = hmi_display_obj.objects[19].object_ID;
    hmi_display_obj_adp.object_19.obj_attr = hmi_display_obj.objects[19].obj_attr;
    hmi_display_obj_adp.object_19.obj_type = hmi_display_obj.objects[0].obj_type;

    //20
    hmi_display_obj_adp.object_20.dx = hmi_display_obj.objects[20].dx;
    hmi_display_obj_adp.object_20.dy = hmi_display_obj.objects[20].dy;
    hmi_display_obj_adp.object_20.object_ID = hmi_display_obj.objects[20].object_ID;
    hmi_display_obj_adp.object_20.obj_attr = hmi_display_obj.objects[20].obj_attr;
    hmi_display_obj_adp.object_20.obj_type = hmi_display_obj.objects[20].obj_type;
    //21
    hmi_display_obj_adp.object_21.dx = hmi_display_obj.objects[21].dx;
    hmi_display_obj_adp.object_21.dy = hmi_display_obj.objects[21].dy;
    hmi_display_obj_adp.object_21.object_ID = hmi_display_obj.objects[21].object_ID;
    hmi_display_obj_adp.object_21.obj_attr = hmi_display_obj.objects[21].obj_attr;
    hmi_display_obj_adp.object_21.obj_type = hmi_display_obj.objects[21].obj_type;
    //22
    hmi_display_obj_adp.object_22.dx = hmi_display_obj.objects[22].dx;
    hmi_display_obj_adp.object_22.dy = hmi_display_obj.objects[22].dy;
    hmi_display_obj_adp.object_22.object_ID = hmi_display_obj.objects[22].object_ID;
    hmi_display_obj_adp.object_22.obj_attr = hmi_display_obj.objects[22].obj_attr;
    hmi_display_obj_adp.object_22.obj_type = hmi_display_obj.objects[22].obj_type;
    //23
    hmi_display_obj_adp.object_23.dx = hmi_display_obj.objects[23].dx;
    hmi_display_obj_adp.object_23.dy = hmi_display_obj.objects[23].dy;
    hmi_display_obj_adp.object_23.object_ID = hmi_display_obj.objects[23].object_ID;
    hmi_display_obj_adp.object_23.obj_attr = hmi_display_obj.objects[23].obj_attr;
    hmi_display_obj_adp.object_23.obj_type = hmi_display_obj.objects[23].obj_type;
    //24
    hmi_display_obj_adp.object_24.dx = hmi_display_obj.objects[24].dx;
    hmi_display_obj_adp.object_24.dy = hmi_display_obj.objects[24].dy;
    hmi_display_obj_adp.object_24.object_ID = hmi_display_obj.objects[24].object_ID;
    hmi_display_obj_adp.object_24.obj_attr = hmi_display_obj.objects[24].obj_attr;
    hmi_display_obj_adp.object_24.obj_type = hmi_display_obj.objects[24].obj_type;
    //25
    hmi_display_obj_adp.object_25.dx = hmi_display_obj.objects[25].dx;
    hmi_display_obj_adp.object_25.dy = hmi_display_obj.objects[25].dy;
    hmi_display_obj_adp.object_25.object_ID = hmi_display_obj.objects[25].object_ID;
    hmi_display_obj_adp.object_25.obj_attr = hmi_display_obj.objects[25].obj_attr;
    hmi_display_obj_adp.object_25.obj_type = hmi_display_obj.objects[25].obj_type;
    //26
    hmi_display_obj_adp.object_26.dx = hmi_display_obj.objects[26].dx;
    hmi_display_obj_adp.object_26.dy = hmi_display_obj.objects[26].dy;
    hmi_display_obj_adp.object_26.object_ID = hmi_display_obj.objects[26].object_ID;
    hmi_display_obj_adp.object_26.obj_attr = hmi_display_obj.objects[26].obj_attr;
    hmi_display_obj_adp.object_26.obj_type = hmi_display_obj.objects[26].obj_type;
    //27
    hmi_display_obj_adp.object_27.dx = hmi_display_obj.objects[27].dx;
    hmi_display_obj_adp.object_27.dy = hmi_display_obj.objects[27].dy;
    hmi_display_obj_adp.object_27.object_ID = hmi_display_obj.objects[27].object_ID;
    hmi_display_obj_adp.object_27.obj_attr = hmi_display_obj.objects[27].obj_attr;
    hmi_display_obj_adp.object_27.obj_type = hmi_display_obj.objects[27].obj_type;
    //28
    hmi_display_obj_adp.object_28.dx = hmi_display_obj.objects[28].dx;
    hmi_display_obj_adp.object_28.dy = hmi_display_obj.objects[28].dy;
    hmi_display_obj_adp.object_28.object_ID = hmi_display_obj.objects[28].object_ID;
    hmi_display_obj_adp.object_28.obj_attr = hmi_display_obj.objects[28].obj_attr;
    hmi_display_obj_adp.object_28.obj_type = hmi_display_obj.objects[28].obj_type;
    //29
    hmi_display_obj_adp.object_29.dx = hmi_display_obj.objects[29].dx;
    hmi_display_obj_adp.object_29.dy = hmi_display_obj.objects[29].dy;
    hmi_display_obj_adp.object_29.object_ID = hmi_display_obj.objects[29].object_ID;
    hmi_display_obj_adp.object_29.obj_attr = hmi_display_obj.objects[29].obj_attr;
    hmi_display_obj_adp.object_29.obj_type = hmi_display_obj.objects[29].obj_type;

    //30
    hmi_display_obj_adp.object_30.dx = hmi_display_obj.objects[30].dx;
    hmi_display_obj_adp.object_30.dy = hmi_display_obj.objects[30].dy;
    hmi_display_obj_adp.object_30.object_ID = hmi_display_obj.objects[30].object_ID;
    hmi_display_obj_adp.object_30.obj_attr = hmi_display_obj.objects[30].obj_attr;
    hmi_display_obj_adp.object_30.obj_type = hmi_display_obj.objects[30].obj_type;
    //31
    hmi_display_obj_adp.object_31.dx = hmi_display_obj.objects[31].dx;
    hmi_display_obj_adp.object_31.dy = hmi_display_obj.objects[31].dy;
    hmi_display_obj_adp.object_31.object_ID = hmi_display_obj.objects[31].object_ID;
    hmi_display_obj_adp.object_31.obj_attr = hmi_display_obj.objects[31].obj_attr;
    hmi_display_obj_adp.object_31.obj_type = hmi_display_obj.objects[31].obj_type;

}
