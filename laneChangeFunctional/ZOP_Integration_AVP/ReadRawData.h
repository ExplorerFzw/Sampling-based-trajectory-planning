#ifndef READ_RAW_DATA_H_
#define READ_RAW_DATA_H_
#include"LMCommonDefines.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/ml.hpp>

class ReadRawData
{
public:
	ReadRawData();
	~ReadRawData() {};
	void Calc();
	void OBJCalc();
	void LaneCalc();
	void RoadEdgeCalc();
	void VehStateCalc();
	FUSION_OBJ_OUTPUT_ST& GetFusObjOutput();
	FUSION_LANE_OUTPUT_ST& GETFusLaneOutput();
	VEHSTATE_ST GetVehState();
	FUSION_ROADEDGE_OUTPUT_ST& GetFusRoadEdgeOutput();
private:
	FUSION_OBJ_OUTPUT_ST fus_obj_output_st;
	FUSION_LANE_OUTPUT_ST fus_lane_output_st;
	VEHSTATE_ST veh_state_st;
	FUSION_ROADEDGE_OUTPUT_ST fus_road_edge_output_st;


};

#endif

