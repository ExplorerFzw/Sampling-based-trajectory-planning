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

#ifndef LM_PP_H_
#define LM_PP_H_

#include"LMCommonDefines.h"
#include"Inputs.h"
#include"Outputs.h"



class LM_PP
{
public:
	LM_PP();
	void Init();
	void Calc_v(FUSION_OBJ_OUTPUT_ST& obj_data_st, VEHSTATE_ST& veh_state, LANE_MODEL_OUTPUT_ST& lane_medel);
	OBJECT_LIST_BY_BC_CHECK& Get_ObjListAfterBCCheck();
	void BC_Check_Calc(FUSION_OBJ_OUTPUT_ST& obj_data_st, VEHSTATE_ST& veh_state, LANE_MODEL_OUTPUT_ST& lane_medel);
	LM_GENERAL_LIMIT_ST& Get_General_Limit_st();
	~LM_PP() {};
private:
	void LM_General_Limit_Calc(VEHSTATE_ST& veh_state);
	struct OBJECT_LIST_BY_BC_CHECK m_obj_list_by_bc_check_st;
	struct LM_GENERAL_LIMIT_ST m_lm_general_limit_st;

};

#endif