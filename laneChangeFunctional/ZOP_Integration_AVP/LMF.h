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

#ifndef LMF_H_
#define LMF_H_
#include"LMCommonDefines.h"




class LMF
{
public:
	LMF();
	void Init();
	void Calc_v(LANES_GENERAL_INFO_ST& vsl_lane_info_st);
	~LMF() {};
	LANE_MODEL_OUTPUT_ST& Get_LaneModel_pst();
	LANE_MODEL_OUTPUT_ST& Get_LaneModelK1_st() { return lanemodel_K1_st; }
private:
	struct LANE_MODEL_OUTPUT_ST lanemodel_output_st;
	struct LANE_MODEL_OUTPUT_ST lanemodel_K1_st;

};

#endif

