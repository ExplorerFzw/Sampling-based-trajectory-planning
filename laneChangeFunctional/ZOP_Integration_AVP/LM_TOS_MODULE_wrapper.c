
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif

#include "LM_TOS_MODULE_bus.h"

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include<string.h>
#include"Defines.h"
#include"Inputs.h"
#include"LMCommonDefines.h"
#include"AdapterSimOutput.h"
#include"Outputs.h"
#include"Parameters.h"
#include"LMTOSRunAlgo.h"
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
extern struct FUSION_LANE_OUTPUT_ST fus_lane_out_put_st;
extern struct FUSION_ROADEDGE_OUTPUT_ST  fus_roadEdge_output_st;
extern struct FUSION_OBJ_OUTPUT_ST fus_obj_output_st;
extern struct VEHSTATE_ST vsi_vehState_st;
extern struct LANE_MODEL_OUTPUT_ST  lane_model_output_st;
extern struct LM_GENERAL_LIMIT_ST lm_general_limit_st;
extern struct VISION_LANE_INFO_ST vision_lane_info_st;
extern struct LANES_GENERAL_INFO_ST lanes_general_info_st;
extern struct OBJECT_LIST_BY_BC_CHECK object_list_by_bc_check_st;
extern struct TOS_OBJ_PROB_WITHIN_LANE tos_obj_within_lane_st;
extern struct PROB_EGO_VEHICLE_WITHIN_LANE_ST probEgoVehicleWithinLane_st;
extern struct HWA_TAR_OBJ_ST hwa_tar_obj_st;
extern struct HWA_TAR_OBJ_OUTPUT_ADAPTER_ST hwa_tar_obj_output_adapter_st;
extern struct LANES_BAS_INFO_ST_adapter lanes_bas_info_st_adapter;
extern struct SEGMENTS_ST_adapter segments_st_adapter;
extern struct TAR_OBJS_ST_adapter tar_objs_st_adapter;
extern struct TRUCK_EVASION_TAR_OBJ tar_obj_l_st;
extern struct TRUCK_EVASION_TAR_OBJ tar_obj_r_st;
extern struct NRA_INFO_ST nra_info_st;
extern struct HMI_DISPLAY_OBJ hmi_display_obj;
extern struct HMI_DISPLAY_OBJ_adapter hmi_display_obj_adp;
extern struct ATS_TO_ST ats_to_st;
extern float g_cycleTime_s_f;
extern uint8_t teFlag_un8;
extern void LM_TOS_INIT();
extern void LM_TOS_RUN();
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Start function
 *
 */
void LM_TOS_MODULE_Start_wrapper(void)
{
/* %%%-SFUNWIZ_wrapper_Start_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Custom Start code goes here.
 */
SetCycleTime_s(0.01);
LM_TOS_INIT();
/* %%%-SFUNWIZ_wrapper_Start_Changes_END --- EDIT HERE TO _BEGIN */
}
/*
 * Output function
 *
 */
void LM_TOS_MODULE_Outputs_wrapper(const real_T *timeStamp_In,
			const uint32_T *frameNum_In,
			const FUS_OUTOBJ_LIST_ST *objects_In,
			const VSI_VEHSTATE_ST *vehState_In,
			const FUS_LANE_OUTPUT_ST *fus_Lane_In,
			const FUS_ROAD_EDGE_OUTPUT_ST *fus_roadEdge_In,
			const ATS_PO_ST *acc_to_In,
			uint8_T *egoLaneId_output,
			LANES_BAS_INFO_ST_adt *lanes_bas_info_st_output,
			TARGETOBJECTS_ST_adp *tar_obj_st_output,
			SEGMENTS_ST_adp *segments_st_output,
			HWA_TARGETOBJECT_OUTPUT_ADAPTER_ST *hwa_tar_obj_st_output,
			uint8_T *hmi_obj_count_output,
			HMI_OUTPUT_ST_APT *hmi_info_st_output,
			NARROW_LANE_SUPPORT_OUTPUT_ST *nls_info_st_output,
			uint16_T *rolling_count_output,
			uint8_T *te_Flag_output)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
fus_obj_output_st.timeStamp = timeStamp_In[0];
fus_obj_output_st.frameNum = frameNum_In[0];
memcpy(&(fus_obj_output_st.objects),(objects_In),sizeof(FUS_OBJ_DATA_ST)*40);
memcpy(&vsi_vehState_st,(vehState_In),sizeof(VSI_VEHSTATE_ST));
memcpy(&fus_lane_out_put_st,(fus_Lane_In),sizeof(FUS_LANE_OUTPUT_ST));
memcpy(&fus_roadEdge_output_st,(fus_roadEdge_In),sizeof(FUS_ROAD_EDGE_OUTPUT_ST));
ats_to_st.valid = (boolean_T)(acc_to_In->Valid);
ats_to_st.index = (uint8_T)acc_to_In->Index;
ats_to_st.dx = acc_to_In->dx;
ats_to_st.dy = acc_to_In->dy;
ats_to_st.vx = acc_to_In->vx;
ats_to_st.vy = acc_to_In->vy;
ats_to_st.ax = acc_to_In->ax;
ats_to_st.vxAbs = acc_to_In->vxAbs;
ats_to_st.axAbs = acc_to_In->axAbs;
ats_to_st.vxAbs = acc_to_In->vxAbs;
ats_to_st.type = (uint8_T)(acc_to_In->Type);
ats_to_st.motionSts = (uint8_T)(acc_to_In->MotionSts);
// calc
LM_TOS_RUN();
//output
egoLaneId_output[0] = lane_model_output_st.egoLaneID_un8;
memcpy(lanes_bas_info_st_output,&(lanes_bas_info_st_adapter),sizeof(LANES_BAS_INFO_ST_adt));
memcpy(tar_obj_st_output,&(tar_objs_st_adapter),sizeof(TARGETOBJECTS_ST_adp));
memcpy(segments_st_output,&(segments_st_adapter),sizeof(SEGMENTS_ST_adp));
memcpy(hwa_tar_obj_st_output,&(hwa_tar_obj_output_adapter_st),sizeof(HWA_TARGETOBJECT_OUTPUT_ADAPTER_ST));
hmi_obj_count_output[0] = 0;//t_hmi_display_obj.object_count;//TODO NO USE
memcpy(hmi_info_st_output,&(hmi_display_obj_adp),sizeof(HMI_OUTPUT_ST_APT));
memcpy(nls_info_st_output,&(nra_info_st),sizeof(NARROW_LANE_SUPPORT_OUTPUT_ST));
te_Flag_output[0] = teFlag_un8;
if(rolling_count_output[0]>=0xFFFF-1)
{
    rolling_count_output[0] = 0;
}
else
{
    rolling_count_output[0] = rolling_count_output[0]+1;
}
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


