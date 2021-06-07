#ifndef SCENARIO_H_
#define SCENARIO_H_
#include"Outputs.h"
#include"LMCommonDefines.h"
#include"Adapters.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<string.h>
#include <vector>



enum OBJ_SCENARIO
{
	CONS_VX_CONS_VX_CONS_AX_CONS_AY = 0,
	CONS_VX_VAR_VX_CONS_AX_VAR_AY = 0,
	VAR_VX_CONS_VX_VAR_AX_CONS_AY = 0
};
enum class LANE_SCENARIO
{
	STRAIGHT = 0,
	CURVE_R500 = 0,
	CURVE_R1000 = 0
};

class SCENARIO
{
public:
	SCENARIO();
	void Init();
	void Calc_v();
	void ObjSceCalc_v();
	void LaneSceCalc_v();
	void RESceCalc_v();
	void VehStateCalc_v();
	FUSION_OBJ_OUTPUT_ST& GetFusObj_st()
	{
		return m_fus_obj_st;
	}
	FUSION_LANE_OUTPUT_ST& GetFusLane_st()
	{
		return m_fus_lane_st;
	}
	VEHSTATE_ST& GetVehState()
	{
		return m_vehState_st;
	}
	FUSION_ROADEDGE_OUTPUT_ST& GetFusRE_st()
	{
		return m_fus_re_st;
	}

	~SCENARIO() {};
private:
	void SetObjAttrib(uint8_t t_i, float t_long, float t_lat, float t_vx, float t_vy, float t_ax, float t_ay);
	OBJ_SCENARIO m_objScenario[6];
	LANE_SCENARIO m_laneScenario;
	FUSION_OBJ_OUTPUT_ST m_fus_obj_st;
	FUSION_LANE_OUTPUT_ST m_fus_lane_st;
	FUSION_ROADEDGE_OUTPUT_ST m_fus_re_st;
	VEHSTATE_ST m_vehState_st;
	float m_laneWidth_f;
};

#endif

