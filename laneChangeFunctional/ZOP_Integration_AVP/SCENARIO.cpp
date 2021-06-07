#include "Scenario.h"

SCENARIO::SCENARIO():
	m_objScenario{ CONS_VX_CONS_VX_CONS_AX_CONS_AY},
	m_laneScenario{ LANE_SCENARIO::STRAIGHT },
	m_fus_obj_st(),
	m_fus_lane_st(),
	m_fus_re_st(),
	m_vehState_st(),
	m_laneWidth_f(3.5)
{

}

void SCENARIO::Init()
{
	SetObjAttrib(1, 20, m_laneWidth_f, 30.0, 0, 0.0, 0.0);
	SetObjAttrib(2, 80, m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(3, 100, 0, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(4, 65, 0, 30.0, -0.0, 0.0, 0.0);
	SetObjAttrib(5, 60, -m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(6, 20, -m_laneWidth_f, 10.0, 0.0, 0.0, 0.0);
	SetObjAttrib(7, 40, m_laneWidth_f, 30.0, 0, 0.0, 0.0);
	SetObjAttrib(8, 60, m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(9, 80, 0, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(10, 55, 0, 30.0, -0.0, 0.0, 0.0);
	SetObjAttrib(11, 90, -m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(12, 40, -m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);

	SetObjAttrib(39, -20, m_laneWidth_f, 30.0, 0, 0.0, 0.0);
	SetObjAttrib(38, -53, m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(37, -10, 0, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(36, -65, 0, 30.0, -0.0, 0.0, 0.0);
	SetObjAttrib(35, -60, -m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(34, -20, -m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(33, -40, m_laneWidth_f, 30.0, 0, 0.0, 0.0);
	SetObjAttrib(32, -60, m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(31, -71, 0, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(30, -55, 0, 30.0, -0.0, 0.0, 0.0);
	SetObjAttrib(29, -73, -m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
	SetObjAttrib(28, -40, -m_laneWidth_f, 30.0, 0.0, 0.0, 0.0);
}
void SCENARIO::Calc_v()
{
	ObjSceCalc_v();
	LaneSceCalc_v();
	VehStateCalc_v();
	RESceCalc_v();
}
void SCENARIO::ObjSceCalc_v()
{
// update
	float t_cycleTime = GetCycleTime_s();
	for (uint8_t t_i = 0; t_i < FUS_MAX_OBJ_NUM; t_i++)
	{
		//m_fus_obj_st.objects[t_i].obj_estimate.acceleration = 0;
		//m_fus_obj_st.objects[t_i].obj_estimate.curvature = 0;
		//m_fus_obj_st.objects[t_i].obj_estimate.headingAngle = 0;
		//m_fus_obj_st.objects[t_i].obj_estimate.latAbsoluteAcceleration = t_ay;
		m_fus_obj_st.objects[t_i].obj_estimate.latAbsoluteVelocity += t_cycleTime* m_fus_obj_st.objects[t_i].obj_estimate.latAbsoluteAcceleration;
		m_fus_obj_st.objects[t_i].obj_estimate.latPosition += m_fus_obj_st.objects[t_i].obj_estimate.latAbsoluteVelocity* t_cycleTime;
		//m_fus_obj_st.objects[t_i].obj_estimate.latRelativeAcceleration = 0;
		//m_fus_obj_st.objects[t_i].obj_estimate.latRelativeVelocity = 0;
		//m_fus_obj_st.objects[t_i].obj_estimate.longAbsoluteAcceleration = t_ax;
		//m_fus_obj_st.objects[t_i].obj_estimate.longAbsoluteVelocity = t_vx;
		//m_fus_obj_st.objects[t_i].obj_estimate.longPosition = t_long;
		//m_fus_obj_st.objects[t_i].obj_estimate.longRelativeAcceleration = 0;
		m_fus_obj_st.objects[t_i].obj_estimate.longRelativeVelocity = m_fus_obj_st.objects[t_i].obj_estimate.longAbsoluteVelocity - m_vehState_st.vRef;
		//m_fus_obj_st.objects[t_i].obj_estimate.speed = 0;
		//m_fus_obj_st.objects[t_i].obj_estimate.yawRate = 0;
		//m_fus_obj_st.objects[t_i].obj_information.valid = 1;
		//m_fus_obj_st.objects[t_i].obj_information.type = uint8_t(OBJ_TYPE::BUS);
		//m_fus_obj_st.objects[t_i].obj_information.nearestSide = 0;
		//m_fus_obj_st.objects[t_i].obj_information.motionPatternCurrent = 2;
		//m_fus_obj_st.objects[t_i].obj_information.motionPatternHistory = 2;
		//m_fus_obj_st.objects[t_i].obj_information.width = 2;
		//m_fus_obj_st.objects[t_i].obj_information.height = 1.5;
		//m_fus_obj_st.objects[t_i].obj_information.length = 4.5;
		//m_fus_obj_st.objects[t_i].obj_information.distanceToleftNearLaneMarking = 0.5 * m_laneWidth_f;
		//m_fus_obj_st.objects[t_i].obj_information.distanceToRightNearLaneMarking = -0.5 * m_laneWidth_f;
		//m_fus_obj_st.objects[t_i].obj_property.id = t_i;
		//m_fus_obj_st.objects[t_i].obj_property.fusionSource = 2;
		//m_fus_obj_st.objects[t_i].obj_property.motionModel = 0;
		//m_fus_obj_st.objects[t_i].obj_property.trackStatus = 1;
		//m_fus_obj_st.objects[t_i].obj_property.positionConfidence = 1;
		//m_fus_obj_st.objects[t_i].obj_property.fcwConfidence = 1;
		//m_fus_obj_st.objects[t_i].obj_property.tjaConfidence = 1;
		//m_fus_obj_st.objects[t_i].obj_property.leftNearLaneMarkingConfidence = 0;
		//m_fus_obj_st.objects[t_i].obj_property.rightNearLaneMarkingConfidence = 0;
		//m_fus_obj_st.objects[t_i].obj_property.visionId = t_i;
		//m_fus_obj_st.objects[t_i].obj_property.accelerationStdDev = 0;
		//m_fus_obj_st.objects[t_i].obj_property.headingAngleStdDev = 0;
		//m_fus_obj_st.objects[t_i].obj_property.latPositionStdDev = 0;
		//m_fus_obj_st.objects[t_i].obj_property.longPositionStdDev = 0;
		//m_fus_obj_st.objects[t_i].obj_property.speedStdDev = 0;
	}
	
}

void SCENARIO::SetObjAttrib(uint8_t t_i,float t_long, float t_lat,float t_vx, float t_vy, float t_ax, float t_ay)
{
	m_fus_obj_st.objects[t_i].obj_estimate.acceleration = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.curvature = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.headingAngle = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.latAbsoluteAcceleration = t_ay;
	m_fus_obj_st.objects[t_i].obj_estimate.latAbsoluteVelocity = t_vy;
	m_fus_obj_st.objects[t_i].obj_estimate.latPosition = t_lat;
	m_fus_obj_st.objects[t_i].obj_estimate.latRelativeAcceleration = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.latRelativeVelocity = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.longAbsoluteAcceleration = t_ax;
	m_fus_obj_st.objects[t_i].obj_estimate.longAbsoluteVelocity = t_vx;
	m_fus_obj_st.objects[t_i].obj_estimate.longPosition = t_long;
	m_fus_obj_st.objects[t_i].obj_estimate.longRelativeAcceleration = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.longRelativeVelocity = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.speed = 0;
	m_fus_obj_st.objects[t_i].obj_estimate.yawRate = 0;
	m_fus_obj_st.objects[t_i].obj_information.valid = 1;
	m_fus_obj_st.objects[t_i].obj_information.type = uint8_t(OBJ_TYPE::TRUCK);
	m_fus_obj_st.objects[t_i].obj_information.nearestSide = 0;
	m_fus_obj_st.objects[t_i].obj_information.motionPatternCurrent = 2;
	m_fus_obj_st.objects[t_i].obj_information.motionPatternHistory = 2;
	m_fus_obj_st.objects[t_i].obj_information.width = 2;
	m_fus_obj_st.objects[t_i].obj_information.height = 1.5;
	m_fus_obj_st.objects[t_i].obj_information.length = 4.5;
	m_fus_obj_st.objects[t_i].obj_information.distanceToleftNearLaneMarking = 0.5 * m_laneWidth_f;
	m_fus_obj_st.objects[t_i].obj_information.distanceToRightNearLaneMarking = -0.5 * m_laneWidth_f;
	m_fus_obj_st.objects[t_i].obj_property.id = t_i;
	m_fus_obj_st.objects[t_i].obj_property.fusionSource = 2;
	m_fus_obj_st.objects[t_i].obj_property.motionModel = 0;
	m_fus_obj_st.objects[t_i].obj_property.trackStatus = 1;
	m_fus_obj_st.objects[t_i].obj_property.positionConfidence = 1;
	m_fus_obj_st.objects[t_i].obj_property.fcwConfidence = 1;
	m_fus_obj_st.objects[t_i].obj_property.tjaConfidence = 1;
	m_fus_obj_st.objects[t_i].obj_property.leftNearLaneMarkingConfidence = 0;
	m_fus_obj_st.objects[t_i].obj_property.rightNearLaneMarkingConfidence = 0;
	m_fus_obj_st.objects[t_i].obj_property.visionId = t_i;
	m_fus_obj_st.objects[t_i].obj_property.accelerationStdDev = 0;
	m_fus_obj_st.objects[t_i].obj_property.headingAngleStdDev = 0;
	m_fus_obj_st.objects[t_i].obj_property.latPositionStdDev = 0;
	m_fus_obj_st.objects[t_i].obj_property.longPositionStdDev = 0;
	m_fus_obj_st.objects[t_i].obj_property.speedStdDev = 0;
}

void SCENARIO::VehStateCalc_v()
{
	m_vehState_st.aRef = 0;
	m_vehState_st.AxSensorF = 0;
	m_vehState_st.AxSlope = 0;
	m_vehState_st.AxSlopeValid = true;
	m_vehState_st.Curvature = 0;
	m_vehState_st.StWheelAngleF = 0;
	m_vehState_st.vRef = 30;
	m_vehState_st.YrsF = 0;
}

void SCENARIO::RESceCalc_v()
{
	m_fus_re_st.detectedEdgeCnt = 100;
	m_fus_re_st.errorFlag = false;
	m_fus_re_st.frameNum = 6;
	m_fus_re_st.hostVehPos = 1;
	m_fus_re_st.leftRoadEdge.quality = VISION_LINE_HIGH;
	m_fus_re_st.leftRoadEdge.traceStatus = MEASUREMENT;
	m_fus_re_st.leftRoadEdge.curFunction.longDistanceToend = 120;
	m_fus_re_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff = 8;
	m_fus_re_st.leftRoadEdge.curFunction.latDistanceFirstOrderCoeff = 0.0;
	m_fus_re_st.leftRoadEdge.curFunction.latDistanceSecondOrderCoeff = 0.0;
	m_fus_re_st.leftRoadEdge.curFunction.latDistanceThirdOrderCoeff = 0.0;
	m_fus_re_st.leftRoadEdge.type = 5;

	m_fus_re_st.rightRoadEdge.quality = VISION_LINE_HIGH;
	m_fus_re_st.rightRoadEdge.traceStatus = MEASUREMENT;
	m_fus_re_st.rightRoadEdge.curFunction.longDistanceToend = 120;
	m_fus_re_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff = -8;
	m_fus_re_st.rightRoadEdge.curFunction.latDistanceFirstOrderCoeff = 0.0;
	m_fus_re_st.rightRoadEdge.curFunction.latDistanceSecondOrderCoeff = 0.0;
	m_fus_re_st.rightRoadEdge.curFunction.latDistanceThirdOrderCoeff = 0.0;
	m_fus_re_st.rightRoadEdge.type = 5;

}

void SCENARIO::LaneSceCalc_v()
{
	m_fus_lane_st.leftNeighborLane.id = 0;
	m_fus_lane_st.leftNeighborLane.curFunction.latDistanceZeroOrderCoeff = m_laneWidth_f * 1.5;
	m_fus_lane_st.leftNeighborLane.curFunction.latDistanceFirstOrderCoeff = -0.00;
	m_fus_lane_st.leftNeighborLane.curFunction.latDistanceSecondOrderCoeff = -0.000;
	m_fus_lane_st.leftNeighborLane.curFunction.latDistanceThirdOrderCoeff = -0.0000;
	m_fus_lane_st.leftNeighborLane.curFunction.longDistanceToend = 120;
	m_fus_lane_st.leftNeighborLane.curFunction.startPoint.x0 = 0;
	m_fus_lane_st.leftNeighborLane.curFunction.startPoint.y0 = m_laneWidth_f * 1.5;
	m_fus_lane_st.leftNeighborLane.quality = VISION_LINE_HIGH;
	m_fus_lane_st.leftNeighborLane.traceStatus = MEASUREMENT;
	m_fus_lane_st.leftNeighborLane.type = 2;
	m_fus_lane_st.leftNeighborLane.width = m_laneWidth_f;

	m_fus_lane_st.leftHostLane.id = 1;
	m_fus_lane_st.leftHostLane.curFunction.latDistanceZeroOrderCoeff = m_laneWidth_f * 0.5;
	m_fus_lane_st.leftHostLane.curFunction.latDistanceFirstOrderCoeff = -0.00;
	m_fus_lane_st.leftHostLane.curFunction.latDistanceSecondOrderCoeff = -0.000;
	m_fus_lane_st.leftHostLane.curFunction.latDistanceThirdOrderCoeff = -0.0000;
	m_fus_lane_st.leftHostLane.curFunction.longDistanceToend = 120;
	m_fus_lane_st.leftHostLane.curFunction.startPoint.x0 = 0;
	m_fus_lane_st.leftHostLane.curFunction.startPoint.y0 = m_laneWidth_f * 0.5;
	m_fus_lane_st.leftHostLane.quality = VISION_LINE_HIGH;
	m_fus_lane_st.leftHostLane.traceStatus = MEASUREMENT;
	m_fus_lane_st.leftHostLane.type = 2;
	m_fus_lane_st.leftHostLane.width = m_laneWidth_f;

	m_fus_lane_st.rightHostLane.id = 2;
	m_fus_lane_st.rightHostLane.curFunction.latDistanceZeroOrderCoeff = -m_laneWidth_f * 0.5;
	m_fus_lane_st.rightHostLane.curFunction.latDistanceFirstOrderCoeff = -0.00;
	m_fus_lane_st.rightHostLane.curFunction.latDistanceSecondOrderCoeff = -0.000;
	m_fus_lane_st.rightHostLane.curFunction.latDistanceThirdOrderCoeff = -0.0000;
	m_fus_lane_st.rightHostLane.curFunction.longDistanceToend = 120;
	m_fus_lane_st.rightHostLane.curFunction.startPoint.x0 = 0;
	m_fus_lane_st.rightHostLane.curFunction.startPoint.y0 = -m_laneWidth_f * 0.5;
	m_fus_lane_st.rightHostLane.quality = VISION_LINE_HIGH;
	m_fus_lane_st.rightHostLane.traceStatus = MEASUREMENT;
	m_fus_lane_st.rightHostLane.type = 2;
	m_fus_lane_st.rightHostLane.width = m_laneWidth_f;

	m_fus_lane_st.rightNeighborLane.id = 3;
	m_fus_lane_st.rightNeighborLane.curFunction.latDistanceZeroOrderCoeff = -m_laneWidth_f * 1.5;
	m_fus_lane_st.rightNeighborLane.curFunction.latDistanceFirstOrderCoeff = -0.00;
	m_fus_lane_st.rightNeighborLane.curFunction.latDistanceSecondOrderCoeff = -0.000;
	m_fus_lane_st.rightNeighborLane.curFunction.latDistanceThirdOrderCoeff = -0.0000;
	m_fus_lane_st.rightNeighborLane.curFunction.longDistanceToend = 120;
	m_fus_lane_st.rightNeighborLane.curFunction.startPoint.x0 = 0;
	m_fus_lane_st.rightNeighborLane.curFunction.startPoint.y0 = -m_laneWidth_f * 1.5;
	m_fus_lane_st.rightNeighborLane.quality = VISION_LINE_HIGH;
	m_fus_lane_st.rightNeighborLane.traceStatus = MEASUREMENT;
	m_fus_lane_st.rightNeighborLane.type = 2;
	m_fus_lane_st.rightNeighborLane.width = m_laneWidth_f;

	m_fus_lane_st.hostLaneWidth = m_laneWidth_f;




}
