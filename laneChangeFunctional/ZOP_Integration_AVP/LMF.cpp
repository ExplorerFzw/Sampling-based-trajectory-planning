#include "LMF.h"
#include"VSL.h"

LMF::LMF():
	lanemodel_output_st()
{

}

void LMF::Init()
{
	lanemodel_output_st.egoLaneID_un8 = MIDDLE_LANE;
	for (uint8_t t_lane = LEFT_LANE, t_lane_vsl = 0; t_lane < RIGHT_LANE; t_lane++, t_lane_vsl++)//currently just consider 3 lanes
	{
		lanemodel_output_st.lanes_st[t_lane].available_b = false;
		lanemodel_output_st.lanes_st[t_lane].lane_dwidth_f = NULL_F;
		lanemodel_output_st.lanes_st[t_lane].front_lane_length_f = NULL_F;
		lanemodel_output_st.lanes_st[t_lane].rear_lane_length_f = NULL_F;
		for (uint8_t t_course = 0; t_course < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_course++)
		{
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].available_b = false;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].detectedByVideo_b = false;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].dlowerLimit_f = MAX_F;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].dupperLimit_f = -MAX_F;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].numOfSegment_un8 = MAX_UN8;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].quality_f = NULL_F;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[0] = NULL_F;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[1] = NULL_F;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[2] = NULL_F;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[3] = NULL_F;

		}

	}
}

void LMF::Calc_v(LANES_GENERAL_INFO_ST& vsl_lane_info_st)
{
	lanemodel_K1_st = lanemodel_output_st;
	//directly from VSL
	lanemodel_output_st.egoLaneID_un8 = MIDDLE_LANE;
	for (uint8_t t_lane = LEFT_LANE, t_lane_vsl = 0; t_lane <= RIGHT_LANE; t_lane++, t_lane_vsl++)//currently just consider 3 lanes
	{
		lanemodel_output_st.lanes_st[t_lane].available_b = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].available_b;
		lanemodel_output_st.lanes_st[t_lane].lane_dwidth_f = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].width_f;
		lanemodel_output_st.lanes_st[t_lane].front_lane_length_f = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].front_length_f;
		lanemodel_output_st.lanes_st[t_lane].rear_lane_length_f = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].rear_length_f;
		for (uint8_t t_course = 0; t_course < LM_MAX_NUMBER_OF_COURSE_LIMITS; t_course++)
		{
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].available_b = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].available_b;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].detectedByVideo_b = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].detectedByVideo_b;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].dlowerLimit_f = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].dlowerLimit_f;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].dupperLimit_f = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].dupperLimit_f;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].numOfSegment_un8 = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].numOfSegment_un8;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].quality_f = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].quality_f;
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[0] = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].coef_arr_f[0];
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[1] = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].coef_arr_f[1];
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[2] = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].coef_arr_f[2];
			lanemodel_output_st.lanes_st[t_lane].segments_st[t_course].coef_arr_f[3] = vsl_lane_info_st.lane_general_info_st[t_lane_vsl].segments_st[t_course].coef_arr_f[3];

		}
		
	}

	
}

LANE_MODEL_OUTPUT_ST& LMF::Get_LaneModel_pst()
{
	return lanemodel_output_st;
}
