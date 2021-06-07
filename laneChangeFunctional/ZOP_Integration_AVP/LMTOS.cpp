// LM_TOS.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//***********************************************
#include"Outputs.h"
#include"LMBase.h"
#include"LMPp.h"
#include"TOSPp.h"
#include"LMF.h"
#include"TOSHWA.h"
#include"TOSTruckEvasion.h"
#include"TOSNRA.h"
#include"VSL.h"
//****************just for debug*****************
#include<string.h>
#include <iostream>
#include<Windows.h>
#include<WinBase.h>
#include"BirdView.h"
#include"Scenario.h"
#include"AdapterSimOutput.h"
#include"ReadData.h"
#include"HMI.h"
#include"DrivingManeuver.h"

#define tos_debug

using namespace std;

extern ADAPTERS lm_adapters;
extern LM_PP lm_pp;
extern LMF lmf;
extern TOS_PP tos_pp;
extern TOS_HWA tos_hwa;
extern VSL vsl;
extern TOS_NRA nra;
extern TOS_TRUCK_EVASION truckEvasion;
extern HMI hmi;
extern DrivingManeuver drivingManeuver;
//********************************input******************************
extern FUSION_LANE_OUTPUT_ST fus_lane_out_put_st;
extern FUSION_ROADEDGE_OUTPUT_ST  fus_roadEdge_output_st;
extern FUSION_OBJ_OUTPUT_ST fus_obj_output_st;
extern VEHSTATE_ST vsi_vehState_st;
extern LANE_MODEL_OUTPUT_ST  lane_model_output_st;
extern LM_GENERAL_LIMIT_ST lm_general_limit_st;
extern VISION_LANE_INFO_ST vision_lane_info_st;
extern LANES_GENERAL_INFO_ST lanes_general_info_st;
extern OBJECT_LIST_BY_BC_CHECK object_list_by_bc_check_st;
extern TOS_OBJ_PROB_WITHIN_LANE tos_obj_within_lane_st;
extern PROB_EGO_VEHICLE_WITHIN_LANE_ST probEgoVehicleWithinLane_st;
extern HWA_TAR_OBJ_ST hwa_tar_obj_st;
extern HWA_TAR_OBJ_OUTPUT_ADAPTER_ST hwa_tar_obj_output_adapter_st;
extern TRUCK_EVASION_TAR_OBJ tar_obj_l_st;
extern TRUCK_EVASION_TAR_OBJ tar_obj_r_st;
extern NRA_INFO_ST nra_info_st;
extern HMI_DISPLAY_OBJ hmi_display_obj;
extern ATS_TO_ST ats_to_st;
//LANE_MODEL_OUTPUT_ST_adapter lane_model_output_st_adp;
// just for adapter for s_function
extern LANES_BAS_INFO_ST_adapter lanes_bas_info_st_adapter;
extern SEGMENTS_ST_adapter segments_st_adapter;
extern TAR_OBJS_ST_adapter tar_objs_st_adapter;
extern HMI_DISPLAY_OBJ_adapter hmi_display_obj_adp;
extern uint8_t teFlag_un8;

extern void LM_TOS_RUN();
extern void LM_TOS_INIT();



int main()
{
    //**************************************debug***************************
    BIRDVIEW birdview;
    SCENARIO scenario;
    ReadData readData;
    //********************************* init *************************************
    LM_TOS_INIT();
    //debug
    SetCycleTime_s(0.01);//set cycle time
    scenario.Init();
    readData.Init(0);
    //********************************* calc *************************************

    for (int t_i = 0; (t_i < 100000) || (true == readData.m_end); t_i++)
    {
        cout << readData.m_end << endl;
        cout << t_i << endl;
        //*************************fake information********************************
        //scenario.Calc_v();
        //fus_obj_output_st = scenario.GetFusObj_st();
        //fus_lane_out_put_st = scenario.GetFusLane_st();
        //fus_roadEdge_output_st = scenario.GetFusRE_st();
        //vsi_vehState_st = scenario.GetVehState();
        //*************************************** real data ************************
        readData.Calc_V();
        fus_obj_output_st = readData.GetFusObjOutputST();
        fus_lane_out_put_st = readData.GetFusLaneOutputST();
        fus_roadEdge_output_st = readData.GetFusREOutputST();
        vsi_vehState_st = readData.GetVehStateST();


        LM_TOS_RUN();

#ifdef tos_debug
        birdview.Calc_v(fus_obj_output_st, object_list_by_bc_check_st, fus_lane_out_put_st, lane_model_output_st, hwa_tar_obj_st, tos_obj_within_lane_st, probEgoVehicleWithinLane_st, fus_roadEdge_output_st, readData.m_time, tar_obj_l_st, tar_obj_r_st, nra_info_st, vsi_vehState_st, drivingManeuver.GetDrivingManeuver_un8());
#endif
        cout << "cycle counter:" << t_i << endl;
        LANE_MODEL_OUTPUT_ST lm1 = lmf.Get_LaneModel_pst();
        LANE_MODEL_OUTPUT_ST lmK1 = lmf.Get_LaneModelK1_st();
        cout << "LMK1:"<< lmK1.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] << endl;
        cout<< "LM:" << lm1.lanes_st[MIDDLE_LANE].segments_st[2].coef_arr_f[0] << endl;

        //Sleep(1);

    }

    cout << readData.m_end;
    return 0;
}

