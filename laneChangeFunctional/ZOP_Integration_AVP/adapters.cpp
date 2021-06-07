#include"Adapters.h"


ADAPTERS::ADAPTERS():
	m_vision_lane_info_st()
{

}

void ADAPTERS::Calc_v(FUSION_LANE_OUTPUT_ST& fus_lane_output_st)
{
	VisionLaneCalc(fus_lane_output_st);
}

void ADAPTERS::Init()
{
	// vision line info
	m_vision_lane_info_st.frameNum = NULL_UN32;
	m_vision_lane_info_st.laneChangeStatus = NO_LANE_CHANGE;
	m_vision_lane_info_st.timestamp = NULL_DB;
	for (uint8_t t_i = 0; t_i < VSL_MAX_LINE_NUM; t_i++)
	{
		m_vision_lane_info_st.lines_st_arr[t_i].color = NULL_UN8;
		m_vision_lane_info_st.lines_st_arr[t_i].id = NULL_UN8;
		m_vision_lane_info_st.lines_st_arr[t_i].quality = NULL_UN8;
		m_vision_lane_info_st.lines_st_arr[t_i].traceStatus = NULL_UN8;
		m_vision_lane_info_st.lines_st_arr[t_i].type = NULL_UN32;
		m_vision_lane_info_st.lines_st_arr[t_i].width = NULL_F;
		m_vision_lane_info_st.lines_st_arr[t_i].curFunction.latDistanceFirstOrderCoeff = NULL_F;
		m_vision_lane_info_st.lines_st_arr[t_i].curFunction.latDistanceSecondOrderCoeff = NULL_F;
		m_vision_lane_info_st.lines_st_arr[t_i].curFunction.latDistanceThirdOrderCoeff = NULL_F;
		m_vision_lane_info_st.lines_st_arr[t_i].curFunction.latDistanceZeroOrderCoeff = NULL_F;
		m_vision_lane_info_st.lines_st_arr[t_i].curFunction.longDistanceToend = NULL_F;
		m_vision_lane_info_st.lines_st_arr[t_i].curFunction.startPoint.x0 = NULL_F;
		m_vision_lane_info_st.lines_st_arr[t_i].curFunction.startPoint.y0 = NULL_F;
	}
}

void ADAPTERS::VisionLaneCalc(FUSION_LANE_OUTPUT_ST& fus_lane_output_st)
{
	m_vision_lane_info_st.frameNum = fus_lane_output_st.frameNum;
	m_vision_lane_info_st.laneChangeStatus = fus_lane_output_st.laneChangeStatus;
	m_vision_lane_info_st.timestamp = fus_lane_output_st.timestamp;
	m_vision_lane_info_st.hostLaneWidth = fus_lane_output_st.hostLaneWidth;
	m_vision_lane_info_st.leftLaneWidth = fus_lane_output_st.leftLaneWidth;
	m_vision_lane_info_st.rightLaneWidth = fus_lane_output_st.rightLaneWidth;
	// LL_Line
	m_vision_lane_info_st.lines_st_arr[0].color = fus_lane_output_st.leftNeighborLane.color;
	m_vision_lane_info_st.lines_st_arr[0].id = fus_lane_output_st.leftNeighborLane.id;
	m_vision_lane_info_st.lines_st_arr[0].quality = fus_lane_output_st.leftNeighborLane.quality;
	m_vision_lane_info_st.lines_st_arr[0].traceStatus = fus_lane_output_st.leftNeighborLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[0].type = fus_lane_output_st.leftNeighborLane.type;
	m_vision_lane_info_st.lines_st_arr[0].width = fus_lane_output_st.leftNeighborLane.width;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceFirstOrderCoeff = fus_lane_output_st.leftNeighborLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceSecondOrderCoeff = fus_lane_output_st.leftNeighborLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceThirdOrderCoeff = fus_lane_output_st.leftNeighborLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceZeroOrderCoeff = fus_lane_output_st.leftNeighborLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.longDistanceToend = fus_lane_output_st.leftNeighborLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.startPoint.x0 = fus_lane_output_st.leftNeighborLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.startPoint.y0 = fus_lane_output_st.leftNeighborLane.curFunction.startPoint.y0;
	// L_Line
	m_vision_lane_info_st.lines_st_arr[1].color = fus_lane_output_st.leftHostLane.color;
	m_vision_lane_info_st.lines_st_arr[1].id = fus_lane_output_st.leftHostLane.id;
	m_vision_lane_info_st.lines_st_arr[1].quality = fus_lane_output_st.leftHostLane.quality;
	m_vision_lane_info_st.lines_st_arr[1].traceStatus = fus_lane_output_st.leftHostLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[1].type = fus_lane_output_st.leftHostLane.type;
	m_vision_lane_info_st.lines_st_arr[1].width = fus_lane_output_st.leftHostLane.width;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceFirstOrderCoeff = fus_lane_output_st.leftHostLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceSecondOrderCoeff = fus_lane_output_st.leftHostLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceThirdOrderCoeff = fus_lane_output_st.leftHostLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceZeroOrderCoeff = fus_lane_output_st.leftHostLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.longDistanceToend = fus_lane_output_st.leftHostLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.startPoint.x0 = fus_lane_output_st.leftHostLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.startPoint.y0 = fus_lane_output_st.leftHostLane.curFunction.startPoint.y0;
	// R_Line
	m_vision_lane_info_st.lines_st_arr[2].color = fus_lane_output_st.rightHostLane.color;
	m_vision_lane_info_st.lines_st_arr[2].id = fus_lane_output_st.rightHostLane.id;
	m_vision_lane_info_st.lines_st_arr[2].quality = fus_lane_output_st.rightHostLane.quality;
	m_vision_lane_info_st.lines_st_arr[2].traceStatus = fus_lane_output_st.rightHostLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[2].type = fus_lane_output_st.rightHostLane.type;
	m_vision_lane_info_st.lines_st_arr[2].width = fus_lane_output_st.rightHostLane.width;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceFirstOrderCoeff = fus_lane_output_st.rightHostLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceSecondOrderCoeff = fus_lane_output_st.rightHostLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceThirdOrderCoeff = fus_lane_output_st.rightHostLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceZeroOrderCoeff = fus_lane_output_st.rightHostLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.longDistanceToend = fus_lane_output_st.rightHostLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.startPoint.x0 = fus_lane_output_st.rightHostLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.startPoint.y0 = fus_lane_output_st.rightHostLane.curFunction.startPoint.y0;
	// LL_Line
	m_vision_lane_info_st.lines_st_arr[3].color = fus_lane_output_st.rightNeighborLane.color;
	m_vision_lane_info_st.lines_st_arr[3].id = fus_lane_output_st.rightNeighborLane.id;
	m_vision_lane_info_st.lines_st_arr[3].quality = fus_lane_output_st.rightNeighborLane.quality;
	m_vision_lane_info_st.lines_st_arr[3].traceStatus = fus_lane_output_st.rightNeighborLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[3].type = fus_lane_output_st.rightNeighborLane.type;
	m_vision_lane_info_st.lines_st_arr[3].width = fus_lane_output_st.rightNeighborLane.width;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceFirstOrderCoeff = fus_lane_output_st.rightNeighborLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceSecondOrderCoeff = fus_lane_output_st.rightNeighborLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceThirdOrderCoeff = fus_lane_output_st.rightNeighborLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceZeroOrderCoeff = fus_lane_output_st.rightNeighborLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.longDistanceToend = fus_lane_output_st.rightNeighborLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.startPoint.x0 = fus_lane_output_st.rightNeighborLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.startPoint.y0 = fus_lane_output_st.rightNeighborLane.curFunction.startPoint.y0;
}

void ADAPTERS::Modify_Calc_v(FUSION_LANE_OUTPUT_ST& fus_lane_output_st)
{
	m_vision_lane_info_st.frameNum = fus_lane_output_st.frameNum;
	m_vision_lane_info_st.laneChangeStatus = fus_lane_output_st.laneChangeStatus;
	m_vision_lane_info_st.timestamp = fus_lane_output_st.timestamp;
	m_vision_lane_info_st.hostLaneWidth = fus_lane_output_st.hostLaneWidth;
	m_vision_lane_info_st.leftLaneWidth = fus_lane_output_st.leftLaneWidth;
	m_vision_lane_info_st.rightLaneWidth = fus_lane_output_st.rightLaneWidth;
	// LL_Line
	m_vision_lane_info_st.lines_st_arr[0].color = fus_lane_output_st.rightNeighborLane.color;
	m_vision_lane_info_st.lines_st_arr[0].id = fus_lane_output_st.rightNeighborLane.id;
	m_vision_lane_info_st.lines_st_arr[0].quality = fus_lane_output_st.rightNeighborLane.quality;
	m_vision_lane_info_st.lines_st_arr[0].traceStatus = fus_lane_output_st.rightNeighborLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[0].type = fus_lane_output_st.rightNeighborLane.type;
	m_vision_lane_info_st.lines_st_arr[0].width = fus_lane_output_st.rightNeighborLane.width;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceFirstOrderCoeff = -fus_lane_output_st.rightNeighborLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceSecondOrderCoeff = -fus_lane_output_st.rightNeighborLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceThirdOrderCoeff = -fus_lane_output_st.rightNeighborLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.latDistanceZeroOrderCoeff = -fus_lane_output_st.rightNeighborLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.longDistanceToend = fus_lane_output_st.rightNeighborLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.startPoint.x0 = fus_lane_output_st.rightNeighborLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[0].curFunction.startPoint.y0 = fus_lane_output_st.rightNeighborLane.curFunction.startPoint.y0;
	// L_Line
	m_vision_lane_info_st.lines_st_arr[1].color = fus_lane_output_st.rightHostLane.color;
	m_vision_lane_info_st.lines_st_arr[1].id = fus_lane_output_st.rightHostLane.id;
	m_vision_lane_info_st.lines_st_arr[1].quality = fus_lane_output_st.rightHostLane.quality;
	m_vision_lane_info_st.lines_st_arr[1].traceStatus = fus_lane_output_st.rightHostLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[1].type = fus_lane_output_st.rightHostLane.type;
	m_vision_lane_info_st.lines_st_arr[1].width = fus_lane_output_st.rightHostLane.width;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceFirstOrderCoeff = -fus_lane_output_st.rightHostLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceSecondOrderCoeff = -fus_lane_output_st.rightHostLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceThirdOrderCoeff = -fus_lane_output_st.rightHostLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.latDistanceZeroOrderCoeff = -fus_lane_output_st.rightHostLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.longDistanceToend = fus_lane_output_st.rightHostLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.startPoint.x0 = fus_lane_output_st.rightHostLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[1].curFunction.startPoint.y0 = fus_lane_output_st.rightHostLane.curFunction.startPoint.y0;
	// R_Line
	m_vision_lane_info_st.lines_st_arr[2].color = fus_lane_output_st.leftHostLane.color;
	m_vision_lane_info_st.lines_st_arr[2].id = fus_lane_output_st.leftHostLane.id;
	m_vision_lane_info_st.lines_st_arr[2].quality = fus_lane_output_st.leftHostLane.quality;
	m_vision_lane_info_st.lines_st_arr[2].traceStatus = fus_lane_output_st.leftHostLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[2].type = fus_lane_output_st.leftHostLane.type;
	m_vision_lane_info_st.lines_st_arr[2].width = fus_lane_output_st.leftHostLane.width;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceFirstOrderCoeff = -fus_lane_output_st.leftHostLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceSecondOrderCoeff = -fus_lane_output_st.leftHostLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceThirdOrderCoeff = -fus_lane_output_st.leftHostLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.latDistanceZeroOrderCoeff = -fus_lane_output_st.leftHostLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.longDistanceToend = fus_lane_output_st.leftHostLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.startPoint.x0 = fus_lane_output_st.leftHostLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[2].curFunction.startPoint.y0 = fus_lane_output_st.leftHostLane.curFunction.startPoint.y0;
	// LL_Line
	m_vision_lane_info_st.lines_st_arr[3].color = fus_lane_output_st.leftNeighborLane.color;
	m_vision_lane_info_st.lines_st_arr[3].id = fus_lane_output_st.leftNeighborLane.id;
	m_vision_lane_info_st.lines_st_arr[3].quality = fus_lane_output_st.leftNeighborLane.quality;
	m_vision_lane_info_st.lines_st_arr[3].traceStatus = fus_lane_output_st.leftNeighborLane.traceStatus;
	m_vision_lane_info_st.lines_st_arr[3].type = fus_lane_output_st.leftNeighborLane.type;
	m_vision_lane_info_st.lines_st_arr[3].width = fus_lane_output_st.leftNeighborLane.width;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceFirstOrderCoeff = -fus_lane_output_st.leftNeighborLane.curFunction.latDistanceFirstOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceSecondOrderCoeff = -fus_lane_output_st.leftNeighborLane.curFunction.latDistanceSecondOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceThirdOrderCoeff = -fus_lane_output_st.leftNeighborLane.curFunction.latDistanceThirdOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.latDistanceZeroOrderCoeff = -fus_lane_output_st.leftNeighborLane.curFunction.latDistanceZeroOrderCoeff;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.longDistanceToend = fus_lane_output_st.leftNeighborLane.curFunction.longDistanceToend;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.startPoint.x0 = fus_lane_output_st.leftNeighborLane.curFunction.startPoint.x0;
	m_vision_lane_info_st.lines_st_arr[3].curFunction.startPoint.y0 = fus_lane_output_st.leftNeighborLane.curFunction.startPoint.y0;
}

void ADAPTERS::RE_Modify_Calc_v(FUSION_ROADEDGE_OUTPUT_ST& fus_re_output_st)
{
	m_fus_re_output_st.detectedEdgeCnt = fus_re_output_st.detectedEdgeCnt;
	m_fus_re_output_st.errorFlag = fus_re_output_st.errorFlag;
	m_fus_re_output_st.frameNum = fus_re_output_st.frameNum;
	m_fus_re_output_st.hostVehPos = fus_re_output_st.hostVehPos;
	m_fus_re_output_st.timestamp = fus_re_output_st.timestamp;
	m_fus_re_output_st.leftRoadEdge.id = fus_re_output_st.rightRoadEdge.id;
	m_fus_re_output_st.leftRoadEdge.quality = fus_re_output_st.rightRoadEdge.quality;
	m_fus_re_output_st.leftRoadEdge.reserved = fus_re_output_st.rightRoadEdge.reserved;
	m_fus_re_output_st.leftRoadEdge.traceStatus = fus_re_output_st.rightRoadEdge.traceStatus;
	m_fus_re_output_st.leftRoadEdge.type = fus_re_output_st.rightRoadEdge.type;
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceFirstOrderCoeff = -fus_re_output_st.rightRoadEdge.curFunction.latDistanceFirstOrderCoeff;
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceSecondOrderCoeff = -fus_re_output_st.rightRoadEdge.curFunction.latDistanceSecondOrderCoeff;
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceThirdOrderCoeff = -fus_re_output_st.rightRoadEdge.curFunction.latDistanceThirdOrderCoeff;
	m_fus_re_output_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff = -fus_re_output_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff;
	m_fus_re_output_st.leftRoadEdge.curFunction.longDistanceToend = fus_re_output_st.rightRoadEdge.curFunction.longDistanceToend;
	m_fus_re_output_st.leftRoadEdge.curFunction.startPoint.x0 = -fus_re_output_st.rightRoadEdge.curFunction.startPoint.x0;
	m_fus_re_output_st.leftRoadEdge.curFunction.startPoint.y0 = -fus_re_output_st.rightRoadEdge.curFunction.startPoint.y0;

	m_fus_re_output_st.rightRoadEdge.id = fus_re_output_st.leftRoadEdge.id;
	m_fus_re_output_st.rightRoadEdge.quality = fus_re_output_st.leftRoadEdge.quality;
	m_fus_re_output_st.rightRoadEdge.reserved = fus_re_output_st.leftRoadEdge.reserved;
	m_fus_re_output_st.rightRoadEdge.traceStatus = fus_re_output_st.leftRoadEdge.traceStatus;
	m_fus_re_output_st.rightRoadEdge.type = fus_re_output_st.leftRoadEdge.type;
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceFirstOrderCoeff = -fus_re_output_st.leftRoadEdge.curFunction.latDistanceFirstOrderCoeff;
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceSecondOrderCoeff = -fus_re_output_st.leftRoadEdge.curFunction.latDistanceSecondOrderCoeff;
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceThirdOrderCoeff = -fus_re_output_st.leftRoadEdge.curFunction.latDistanceThirdOrderCoeff;
	m_fus_re_output_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff = -fus_re_output_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff;
	m_fus_re_output_st.rightRoadEdge.curFunction.longDistanceToend = fus_re_output_st.leftRoadEdge.curFunction.longDistanceToend;
	m_fus_re_output_st.rightRoadEdge.curFunction.startPoint.x0 = -fus_re_output_st.leftRoadEdge.curFunction.startPoint.x0;
	m_fus_re_output_st.rightRoadEdge.curFunction.startPoint.y0 = -fus_re_output_st.leftRoadEdge.curFunction.startPoint.y0;


}

VISION_LANE_INFO_ST& ADAPTERS::GetVisionLaneInfo_st()
{
	return m_vision_lane_info_st;
}