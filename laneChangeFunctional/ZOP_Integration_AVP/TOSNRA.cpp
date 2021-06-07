#include "TOSNRA.h"

TOS_NRA::TOS_NRA():
	nra_info_st()
{

}

void TOS_NRA::Init()
{
	nra_info_st.d2LeftRE = MAX_F;
	nra_info_st.d2RightRE = MAX_F;
	nra_info_st.leftNRAActive_b = false;
	nra_info_st.rightNRAActive_b = false;
	nra_info_st.m_countLeftNRA = NULL_UN8;
	nra_info_st.m_countRightNRA = NULL_UN8;
}

void TOS_NRA::Calc_v(TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st, FUSION_ROADEDGE_OUTPUT_ST& roadEdge_st, VEHSTATE_ST& t_vehState_st)
{
	bool t_leftRoadEdge_NRA = false;
	bool t_rightRoadEdge_NRA = false;
	float t_dLeftRE = MAX_F;
	float t_dRightRE = MAX_F;
	float t_dMin2RE = 0.42;
	if (((MEASUREMENT == roadEdge_st.leftRoadEdge.traceStatus) || (PREDICTED == roadEdge_st.leftRoadEdge.traceStatus)) &&
		((VISION_LINE_MIDDLE_HIGH == roadEdge_st.leftRoadEdge.quality) || (VISION_LINE_HIGH == roadEdge_st.leftRoadEdge.quality))
		//(roadEdge_st.leftRoadEdge.curFunction.startPoint.x0 < 10)
		)
	{
		t_dLeftRE = roadEdge_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff - 0.5 * GetEgoVehicleWidth_f();
		if ((t_vehState_st.vRef < 32 / 3.6) &&
			(t_dLeftRE < t_dMin2RE) &&
			(t_dLeftRE > -0.05)
			)
		{
			if (nra_info_st.m_countLeftNRA < MAX_UN8)
			{
				nra_info_st.m_countLeftNRA++;
			}
			else
			{
				nra_info_st.m_countLeftNRA = MAX_UN8;
			}
		}
		else
		{
			nra_info_st.m_countLeftNRA = NULL_UN8;
		}
	}
	else
	{
		nra_info_st.m_countLeftNRA = NULL_UN8;
	}

	if (((MEASUREMENT == roadEdge_st.rightRoadEdge.traceStatus) || (PREDICTED == roadEdge_st.rightRoadEdge.traceStatus)) &&
		((VISION_LINE_MIDDLE_HIGH == roadEdge_st.rightRoadEdge.quality) || (VISION_LINE_HIGH == roadEdge_st.rightRoadEdge.quality)) //&&
		//(roadEdge_st.rightRoadEdge.curFunction.startPoint.x0 < 10)
		)
	{
		t_dRightRE = roadEdge_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff + 0.5*GetEgoVehicleWidth_f();
		if ((t_vehState_st.vRef < 32 / 3.6) &&
			(t_dRightRE > -t_dMin2RE) &&
			(t_dRightRE < 0.05)
			)
		{
			if (nra_info_st.m_countRightNRA < MAX_UN8)
			{
				nra_info_st.m_countRightNRA++;
			}
			else
			{
				nra_info_st.m_countRightNRA = MAX_UN8;
			}
		}
		else
		{
			nra_info_st.m_countRightNRA = NULL_UN8;
		}
	}
	else
	{
		nra_info_st.m_countRightNRA = NULL_UN8;
	}

	if (ACTIVENRAMINCOUNT <= nra_info_st.m_countRightNRA)
	{
		nra_info_st.rightNRAActive_b = true;
		nra_info_st.d2RightRE = roadEdge_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff + 0.5 * GetEgoVehicleWidth_f();
		nra_info_st.r_c0 = roadEdge_st.rightRoadEdge.curFunction.latDistanceZeroOrderCoeff;
		nra_info_st.r_c1 = roadEdge_st.rightRoadEdge.curFunction.latDistanceFirstOrderCoeff;
		nra_info_st.r_c2 = roadEdge_st.rightRoadEdge.curFunction.latDistanceSecondOrderCoeff;
		nra_info_st.r_start_x0 = 0;
		nra_info_st.r_end_x0 = roadEdge_st.rightRoadEdge.curFunction.longDistanceToend;
		if (4 == roadEdge_st.rightRoadEdge.type)//wall
		{
			nra_info_st.r_line_type = 2;
		}
		else if (5 == roadEdge_st.rightRoadEdge.type)//fence
		{
			nra_info_st.r_line_type = 1;
		}
		else 
		{
			nra_info_st.r_line_type = 0;
		}

		
	}
	else
	{
		nra_info_st.rightNRAActive_b = false;
		nra_info_st.d2RightRE = MAX_F;
		nra_info_st.r_c0 = MAX_F;
		nra_info_st.r_c1 = MAX_F;
		nra_info_st.r_c2 = MAX_F;
		nra_info_st.r_start_x0 = MAX_F;
		nra_info_st.r_end_x0 = MAX_F;
		nra_info_st.r_line_type = 0;

	}
	if (ACTIVENRAMINCOUNT <= nra_info_st.m_countLeftNRA)
	{
		nra_info_st.leftNRAActive_b = true;
		nra_info_st.d2LeftRE = roadEdge_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff - 0.5 * GetEgoVehicleWidth_f();
		nra_info_st.l_c0 = roadEdge_st.leftRoadEdge.curFunction.latDistanceZeroOrderCoeff;
		nra_info_st.l_c1 = roadEdge_st.leftRoadEdge.curFunction.latDistanceFirstOrderCoeff;
		nra_info_st.l_c2 = roadEdge_st.leftRoadEdge.curFunction.latDistanceSecondOrderCoeff;
		nra_info_st.l_start_x0 = 0;
		nra_info_st.l_end_x0 = roadEdge_st.leftRoadEdge.curFunction.longDistanceToend;
		if (4 == roadEdge_st.leftRoadEdge.type)//wall
		{
			nra_info_st.l_line_type = 2;
		}
		else if (5 == roadEdge_st.leftRoadEdge.type)//fence
		{
			nra_info_st.l_line_type = 1;
		}
		else
		{
			nra_info_st.l_line_type = 0;
		}
	}
	else
	{
		nra_info_st.leftNRAActive_b = false;
		nra_info_st.d2LeftRE = MAX_F;
		nra_info_st.l_c0 = MAX_F;
		nra_info_st.l_c1 = MAX_F;
		nra_info_st.l_c2 = MAX_F;
		nra_info_st.l_start_x0 = MAX_F;
		nra_info_st.l_end_x0 = MAX_F;
		nra_info_st.l_line_type = 0;
	}


}

NRA_INFO_ST& TOS_NRA::GetNRAINFO()
{
	return nra_info_st;
}

