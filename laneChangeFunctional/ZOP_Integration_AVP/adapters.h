/******************************************************************************/
/*! \file:
 *
 *  \brief:
 *
 *  \author: CAI Yuxi
 * 
 *  \data:2020-12
 */
 /******************************************************************************/

#ifndef LM_ADAPTERS_H_
#define LM_ADAPTERS_H_
#include"Defines.h"
#include"Outputs.h"
#include"LMCommonDefines.h"



class ADAPTERS
{
public:
	ADAPTERS();
	VISION_LANE_INFO_ST& GetVisionLaneInfo_st();
	FUSION_ROADEDGE_OUTPUT_ST& GetREInfo_st() { return  m_fus_re_output_st; }
	void Calc_v(FUSION_LANE_OUTPUT_ST& fus_lane_output_st);
	void Modify_Calc_v(FUSION_LANE_OUTPUT_ST& fus_lane_output_st);
	void RE_Modify_Calc_v(FUSION_ROADEDGE_OUTPUT_ST& fus_re_output_st);
	void Init();
	~ADAPTERS() {};
private:
	VISION_LANE_INFO_ST m_vision_lane_info_st;
	FUSION_ROADEDGE_OUTPUT_ST m_fus_re_output_st;
	void VisionLaneCalc(FUSION_LANE_OUTPUT_ST& fus_lane_output_st);
};




//***********************************************************************************************

#endif
