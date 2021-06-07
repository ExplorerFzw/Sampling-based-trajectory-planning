#include "ReadRawData.h"

ReadRawData::ReadRawData() :
	fus_obj_output_st(),
	fus_lane_output_st(),
	veh_state_st(),
	fus_road_edge_output_st()
{

}

void ReadRawData::Calc()
{
	OBJCalc();
	LaneCalc();
	RoadEdgeCalc();
	VehStateCalc();

}
void ReadRawData::OBJCalc()
{

}
void ReadRawData::LaneCalc()
{

}
void ReadRawData::RoadEdgeCalc()
{

}
void ReadRawData::VehStateCalc()
{

}


FUSION_OBJ_OUTPUT_ST& ReadRawData::GetFusObjOutput()
{
	return fus_obj_output_st;
}
FUSION_LANE_OUTPUT_ST& ReadRawData::GETFusLaneOutput()
{
	return fus_lane_output_st;
}
VEHSTATE_ST ReadRawData::GetVehState()
{
	return veh_state_st;
}
FUSION_ROADEDGE_OUTPUT_ST& ReadRawData::GetFusRoadEdgeOutput()
{
	return fus_road_edge_output_st;
}



