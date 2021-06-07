#include "ReadData.h"
using namespace std;

string Trim(string& str)
{
	//str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
	str.erase(0, str.find_first_not_of(" \t\r\n"));
	str.erase(str.find_last_not_of(" \t\r\n") + 1);
	return str;
}


ReadData::ReadData() :
	m_fus_lane_output_st(),
	m_fus_obj_output_st(),
	m_fus_re_output_st(),
	m_veh_state_st(),
	m_fin("D:\\Users\\only\\PycharmProjects\\pythonProject\\READDATA\\data_20210114_zop_rec_fus_033.csv"),//  data_20210111_zop_rec_fus_015 data_20210108_rec2_027 data_20210112_zop_rec_fus_021
	m_line(),
	m_end(false),
	m_fields(),
	m_index(0),
	m_time(0)
{
	
}

void ReadData::Init(float t_startTime_s)
{
	getline(m_fin, m_line);
	m_index = 0;
	int t_count = t_startTime_s * (1/GetCycleTime_s());
	for (int t_i = 0; t_i < t_count; t_i++)
	{
		getline(m_fin, m_line);
	}
}

void ReadData::Calc_V()
{
	
	
	if (getline(m_fin, m_line))   //整行读取，换行符“\n”区分，遇到文件尾标志eof终止读取
	{
		istringstream sin(m_line); //将整行字符串line读入到字符串流istringstream中
		vector<string> fields; //声明一个字符串向量
		m_fields = fields;
		string field;
		while (getline(sin, field, ',')) //将字符串流sin中的字符读入到field字符串中，以逗号为分隔符
		{
			m_fields.push_back(field); //将刚刚读取的字符串添加到向量fields中
		}
		m_index = 0;
		ObjCalc_V();
		LaneCalc_V();
		RECalc_V();
		VehStateCalc_V();
		
	}
	else
	{
		m_end = true;
	}

}
void ReadData::ObjCalc_V()
{
	m_time = atof(m_fields[m_index++].c_str());
	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
	{
        m_fus_obj_output_st.objects[t_i].obj_estimate.acceleration = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.curvature = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.headingAngle = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.latAbsoluteAcceleration = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.latAbsoluteVelocity = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.latPosition = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.latRelativeAcceleration = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.latRelativeVelocity = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.longAbsoluteAcceleration = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.longAbsoluteVelocity = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.longPosition = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.longRelativeAcceleration = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.longRelativeVelocity = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.speed = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_estimate.yawRate = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_information.distanceToleftNearLaneMarking = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_information.distanceToRightNearLaneMarking = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_information.height = atof(m_fields[m_index++].c_str());
        m_fus_obj_output_st.objects[t_i].obj_information.length = atof(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_information.motionPatternCurrent = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_information.motionPatternHistory = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_information.nearestSide = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_information.type = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_information.valid = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_information.width = atof(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.accelerationStdDev = atof(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.fcwConfidence = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.fusionSource = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.headingAngleStdDev = atof(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.id = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.latPositionStdDev = atof(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.leftNearLaneMarkingConfidence = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.longPositionStdDev = atof(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.motionModel = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.positionConfidence = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.rightNearLaneMarkingConfidence = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.speedStdDev = atof(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.tjaConfidence = 0;// atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.trackStatus = atoi(m_fields[m_index++].c_str());
		m_fus_obj_output_st.objects[t_i].obj_property.visionId = atoi(m_fields[m_index++].c_str());
	}
}
void ReadData::LaneCalc_V()
{
	m_fus_lane_output_st.timestamp = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.frameNum = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.hostLaneWidth = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftLaneWidth = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightLaneWidth = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.id = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.traceStatus = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.quality = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.color = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.type = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.width = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.curFunction.latDistanceZeroOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.curFunction.latDistanceFirstOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.curFunction.latDistanceSecondOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.curFunction.latDistanceThirdOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.curFunction.longDistanceToend = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.curFunction.startPoint.x0 = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftHostLane.curFunction.startPoint.y0 = atof(m_fields[m_index++].c_str());

	m_fus_lane_output_st.rightHostLane.id = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.traceStatus = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.quality = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.color = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.type = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.width = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.curFunction.latDistanceZeroOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.curFunction.latDistanceFirstOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.curFunction.latDistanceSecondOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.curFunction.latDistanceThirdOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.curFunction.longDistanceToend = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.curFunction.startPoint.x0 = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightHostLane.curFunction.startPoint.y0 = atof(m_fields[m_index++].c_str());

	m_fus_lane_output_st.leftNeighborLane.id = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.traceStatus = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.quality = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.color = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.type = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.width = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.curFunction.latDistanceZeroOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.curFunction.latDistanceFirstOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.curFunction.latDistanceSecondOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.curFunction.latDistanceThirdOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.curFunction.longDistanceToend = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.curFunction.startPoint.x0 = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.leftNeighborLane.curFunction.startPoint.y0 = atof(m_fields[m_index++].c_str());

	m_fus_lane_output_st.rightNeighborLane.id = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.traceStatus = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.quality = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.color = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.type = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.width = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.curFunction.latDistanceZeroOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.curFunction.latDistanceFirstOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.curFunction.latDistanceSecondOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.curFunction.latDistanceThirdOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.curFunction.longDistanceToend = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.curFunction.startPoint.x0 = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.rightNeighborLane.curFunction.startPoint.y0 = atof(m_fields[m_index++].c_str());

	m_fus_lane_output_st.primaryObjTrajectory.id = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.traceStatus = atoi(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.quality = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.curFunction.latDistanceZeroOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.curFunction.latDistanceFirstOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.curFunction.latDistanceSecondOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.curFunction.latDistanceThirdOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.curFunction.longDistanceToend = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.curFunction.startPoint.x0 = atof(m_fields[m_index++].c_str());
	m_fus_lane_output_st.primaryObjTrajectory.curFunction.startPoint.y0 = atof(m_fields[m_index++].c_str());

	m_fus_lane_output_st.laneChangeStatus = atof(m_fields[m_index++].c_str());
}
void ReadData::RECalc_V()
{
	m_fus_re_output_st.timestamp = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.frameNum = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.hostVehPos = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.quality = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.reserved = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.type = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.id = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.traceStatus = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceFirstOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceSecondOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceThirdOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.curFunction.longDistanceToend = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.curFunction.startPoint.x0 = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.leftRoadEdge.curFunction.startPoint.y0 = atof(m_fields[m_index++].c_str());

	m_fus_re_output_st.rightRoadEdge.quality = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.reserved = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.type = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.id = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.traceStatus = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceFirstOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceSecondOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceThirdOrderCoeff = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.curFunction.longDistanceToend = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.curFunction.startPoint.x0 = atof(m_fields[m_index++].c_str());
	m_fus_re_output_st.rightRoadEdge.curFunction.startPoint.y0 = atof(m_fields[m_index++].c_str());

	m_fus_re_output_st.errorFlag = atoi(m_fields[m_index++].c_str());
	m_fus_re_output_st.detectedEdgeCnt = atoi(m_fields[m_index++].c_str());

}
void ReadData::VehStateCalc_V()
{
	m_veh_state_st.YrsF = atof(m_fields[m_index++].c_str());
	m_veh_state_st.AxSensorF = atof(m_fields[m_index++].c_str());
	m_veh_state_st.StWheelAngleF = atof(m_fields[m_index++].c_str());
	m_veh_state_st.vRef = atof(m_fields[m_index++].c_str());
	m_veh_state_st.aRef = atof(m_fields[m_index++].c_str());
	m_veh_state_st.AxSlope = atof(m_fields[m_index++].c_str());
	m_veh_state_st.AxSlopeValid = true;// atof(m_fields[m_index++].c_str());
	m_veh_state_st.Curvature = atof(m_fields[m_index++].c_str());
}