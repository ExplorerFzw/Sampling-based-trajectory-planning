/******************************************************************************/
/*! \file:
 *
 *  \brief:
 *
 *  \author: CAI Yuxi
 *
 *  \data:2020-12
 */
 /******************************************************************************/

#ifndef TOS_PP_H_
#define TOS_PP_H_

#include"lm_common_defines.h"
#include"outputs.h"

#define TOS_PP_ProbWithinLaneFiltFactor_f float(0.04)
#define  TOS_PP_CutInFiltFactor_f float(0.04)
#define  TOS_PP_CutOutFiltFactor_f float(0.04)
#define  TOS_PP_OverlapFiltFactor_f float(0.04)
#define  TOS_PP_CutInPredTime_f float(1.5)
#define  TOS_PP_CutOutPredTime_f float(1.4)
#define  TOS_PP_CutInMinAy_f float(0.2)
#define  TOS_PP_CutInMinVy_f float(0.1)
#define  TOS_PP_CutOutMinAy_f float(0.2)
#define  TOS_PP_CutOutMinVy_f float(0.1)



class TOS_PP
{
public:
	TOS_PP();
	void Init();
	void Calc_v(FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st, VEHSTATE_ST& t_vehState_st);
	void ProbWithinLanes(FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st, VEHSTATE_ST& t_vehState_st);
	TOS_OBJ_PROB_WITHIN_LANE& GetTosObjWithinLane_st();
	PROB_EGO_VEHICLE_WITHIN_LANE_ST& GetProbEgoVehWithinLane_st();
	~TOS_PP() {};
private:
	//uint8_t FindLaneIdOfObject_un8(FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st, uint8_t t_num);
	void ProbWithinLane4Obj_f(float& t_probL_f, float& t_probM_f, float& t_probR_f, float t_d_l, float t_d_r, float t_objHalfWidth, float t_laneHalfWidth);
	void Order4ObjList(FUSION_OBJ_OUTPUT_ST& fus_output_st);
	float CutInProbCalc(uint8_t t_obj_num, FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st);
	float CutOutProbCalc(uint8_t t_obj_num, FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st);
	float OverLapCalc(uint8_t t_obj_num, FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st);
	float TTC_Calac(uint8_t t_index, FUSION_OBJ_OUTPUT_ST& fus_output_st, VEHSTATE_ST& t_vehState_st);
	void FiltObj4EachLane(FUSION_OBJ_OUTPUT_ST& fus_output_st, LANE_MODEL_OUTPUT_ST& laneModel_output_st, OBJECT_LIST_BY_BC_CHECK& obj_list_by_bc_check_st, VEHSTATE_ST& t_vehState_st);
	TOS_OBJ_PROB_WITHIN_LANE m_tos_obj_within_lane_st;
	PROB_EGO_VEHICLE_WITHIN_LANE_ST m_probEgoVehicleWithinLane_st;
};

#endif

