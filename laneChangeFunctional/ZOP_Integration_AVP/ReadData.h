#ifndef READDATA_H_
#define READDATA_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include"LMCommonDefines.h"
#include"Inputs.h"

using namespace std;

class ReadData
{
public:
	ReadData();
	~ReadData() {};
	void Init(float t_startTime_s);
	void Calc_V();
	void ObjCalc_V();
	void LaneCalc_V();
	void RECalc_V();
	void VehStateCalc_V();
	FUSION_ROADEDGE_OUTPUT_ST& GetFusREOutputST() { return m_fus_re_output_st; }
	FUSION_OBJ_OUTPUT_ST& GetFusObjOutputST() { return m_fus_obj_output_st; }
	FUSION_LANE_OUTPUT_ST& GetFusLaneOutputST() { return m_fus_lane_output_st; }
	VEHSTATE_ST& GetVehStateST() { return m_veh_state_st; }
	bool m_end;
	float m_time;
private:
	FUSION_ROADEDGE_OUTPUT_ST m_fus_re_output_st;
	FUSION_OBJ_OUTPUT_ST m_fus_obj_output_st;
	FUSION_LANE_OUTPUT_ST m_fus_lane_output_st;
	VEHSTATE_ST m_veh_state_st;
	ifstream m_fin;
	string m_line;
	vector<string> m_fields; //声明一个字符串向量
	int m_index;
	

	

};

#endif

