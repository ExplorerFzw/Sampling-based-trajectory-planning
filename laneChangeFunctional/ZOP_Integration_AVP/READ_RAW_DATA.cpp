#include "READ_RAW_DATA.h"

READ_RAW_DATA::READ_RAW_DATA() :
	fus_obj_output_st(),
	fus_lane_output_st(),
	veh_state_st(),
	fus_road_edge_output_st()
{

}

void READ_RAW_DATA::Calc()
{
	OBJCalc();
	LaneCalc();
	RoadEdgeCalc();
	VehStateCalc();

}
void READ_RAW_DATA::OBJCalc()
{

}
void READ_RAW_DATA::LaneCalc()
{

}
void READ_RAW_DATA::RoadEdgeCalc()
{

}
void READ_RAW_DATA::VehStateCalc()
{

}


FUSION_OBJ_OUTPUT_ST& READ_RAW_DATA::GetFusObjOutput()
{
	return fus_obj_output_st;
}
FUSION_LANE_OUTPUT_ST& READ_RAW_DATA::GETFusLaneOutput()
{
	return fus_lane_output_st;
}
VEHSTATE_ST READ_RAW_DATA::GetVehState()
{
	return veh_state_st;
}
FUSION_ROADEDGE_OUTPUT_ST& READ_RAW_DATA::GetFusRoadEdgeOutput()
{
	return fus_road_edge_output_st;
}



