// LM_TOS.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//***********************************************
#include"outputs.h"
#include"LM_BASE.h"
#include"LM_PP.h"
#include"TOS_PP.h"
#include"LMF.h"
#include"TOS_HWA.h"
#include"TOS_TRUCK_EVASION.h"
#include"TOS_NRA.h"
#include"VSL.h"
//****************just for debug*****************
#include<string.h>
#include <iostream>
#include<Windows.h>
#include<WinBase.h>
#include"BIRDVIEW.h"
#include"SCENARIO.h"
#include"adapter_sim_out.h"
#include<Python.h>
#include"ReadData.h"
#include"HMI.h"

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
extern TOS_OBJ_PROB_WITHIN_LANE t_tos_obj_within_lane_st;
extern PROB_EGO_VEHICLE_WITHIN_LANE_ST t_probEgoVehicleWithinLane_st;
extern HWA_TAR_OBJ_ST t_hwa_tar_obj_st;
extern TRUCK_EVASION_TAR_OBJ t_tar_obj_l_st;
extern TRUCK_EVASION_TAR_OBJ t_tar_obj_r_st;
extern NRA_INFO_ST t_nra_info_st;
extern HMI_DISPLAY_OBJ t_hmi_display_obj;
extern ATS_TO_ST t_ats_to_st;
//LANE_MODEL_OUTPUT_ST_adapter lane_model_output_st_adp;
// just for adapter for s_function
extern LANES_BAS_INFO_ST_adapter lanes_bas_info_st_adapter;
extern SEGMENTS_ST_adapter segments_st_adapter;
extern TAR_OBJS_ST_adapter tar_objs_st_adapter;
extern HMI_DISPLAY_OBJ_adapter t_hmi_display_obj_adp;

extern void LM_TOS_RUN();
extern void LM_TOS_INIT();



int main()
{
    //**************************************debug***************************
    BIRDVIEW birdview;
    SCENARIO scenario;
    ReadData readData;
    //************************************debug end****************************
    
    //ADAPTERS lm_adapters;
    //LM_PP lm_pp;
    //LMF lmf;
    //TOS_PP tos_pp;
    //TOS_HWA tos_hwa;
    //VSL vsl;
    //
    ////********************************input******************************
    //FUSION_LANE_OUTPUT_ST fus_lane_out_put_st;
    //FUSION_ROADEDGE_OUTPUT_ST fus_re_output_st;
    //FUSION_OBJ_OUTPUT_ST fus_obj_output_st;
    //VEHSTATE_ST vsi_vehState_st;
    //LANE_MODEL_OUTPUT_ST  lane_model_output_st;
    //LM_GENERAL_LIMIT_ST lm_general_limit_st;
    //VISION_LANE_INFO_ST vision_lane_info_st;
    //LANES_GENERAL_INFO_ST lanes_general_info_st;
    //OBJECT_LIST_BY_BC_CHECK object_list_by_bc_check_st;
    //TOS_OBJ_PROB_WITHIN_LANE t_tos_obj_within_lane_st;
    //PROB_EGO_VEHICLE_WITHIN_LANE_ST t_probEgoVehicleWithinLane_st;
    //HWA_TAR_OBJ_ST t_hwa_tar_obj_st;

    //********************************* init *************************************
    //lm_adapters.Init();
    //lm_pp.Init();
    //vsl.Init();
    //lmf.Init();
    //tos_pp.Init();
    //tos_hwa.Init();
    LM_TOS_INIT();
    //debug
    scenario.Init();
    readData.Init(0);
    


    //********************************* calc *************************************
    
    for (int t_i = 0; (t_i < 100000) || (true == readData.m_end); t_i++)
    {
        cout << readData.m_end<<endl;
        cout << t_i << endl;
        /*scenario.Calc_v();
        fus_obj_output_st = scenario.GetFusObj_st();
        fus_lane_out_put_st = scenario.GetFusLane_st();
        vsi_vehState_st = scenario.GetVehState();*/

        readData.Calc_V();
        fus_obj_output_st = readData.GetFusObjOutputST();
        fus_lane_out_put_st = readData.GetFusLaneOutputST();
        fus_roadEdge_output_st = readData.GetFusREOutputST();
        vsi_vehState_st = readData.GetVehStateST();
        

        LM_TOS_RUN();

        /*lm_adapters.Calc_v(fus_lane_out_put_st);
        vision_lane_info_st = lm_adapters.GetVisionLaneInfo_st();

        lm_pp.Calc_v(fus_obj_output_st, vsi_vehState_st, lane_model_output_st);
        lm_general_limit_st = lm_pp.Get_General_Limit_st();
        object_list_by_bc_check_st = lm_pp.Get_ObjListAfterBCCheck();

        vsl.Calc_v(lm_general_limit_st, vision_lane_info_st, vsi_vehState_st);
        lanes_general_info_st = vsl.GetLanesGeneralInfo_st();

        lmf.Calc_v(lanes_general_info_st);
        lane_model_output_st = lmf.Get_LaneModel_pst();

        tos_pp.Calc_v(fus_obj_output_st, lane_model_output_st, object_list_by_bc_check_st, vsi_vehState_st);
        t_tos_obj_within_lane_st = tos_pp.GetTosObjWithinLane_st();
        t_probEgoVehicleWithinLane_st = tos_pp.GetProbEgoVehWithinLane_st();

        tos_hwa.Calc_v(t_tos_obj_within_lane_st, t_probEgoVehicleWithinLane_st);
        t_hwa_tar_obj_st = tos_hwa.Get_tar_obj_ref();*/

#ifdef tos_debug
            birdview.Calc_v(fus_obj_output_st, object_list_by_bc_check_st, fus_lane_out_put_st, lane_model_output_st,t_hwa_tar_obj_st,t_tos_obj_within_lane_st, t_probEgoVehicleWithinLane_st,fus_roadEdge_output_st, readData.m_time,t_tar_obj_l_st, t_tar_obj_r_st,t_nra_info_st,vsi_vehState_st);
#endif
            cout << "cycle counter:" << t_i<<endl;
        //Sleep(1);
        
    }

    cout << readData.m_end;
    return 0;
}

