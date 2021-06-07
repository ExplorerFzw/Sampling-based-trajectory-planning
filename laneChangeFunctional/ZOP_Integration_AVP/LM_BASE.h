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

#ifndef LM_BASE_H_
#define LM_BASE_H_
#include"defines.h"
#include"lm_common_defines.h"
#include"outputs.h"
#include"inputs.h"



class LM_BASE
{
public:
	LM_BASE();
	virtual void Init();
	virtual void Init_RearLane_v();
	virtual void Init_FrontLane_v();
	virtual void Calc_v(LM_GENERAL_LIMIT_ST&  inputLimit_pst,  VISION_LANE_INFO_ST&  vision_lane_info_st,  VEHSTATE_ST&  veh_state, VEHICLE_MOVEMENT_ST& m_vehMovement_st) = 0;
	LM_TYPE GetType(void) { return m_lm_type_en; };//Returns the type of the lane model
	virtual ~LM_BASE() {};
	explicit LM_BASE(const LM_TYPE lmType_en);//Constructor specifing the type
	LANES_GENERAL_INFO_ST& GetLanesGeneralInfo_st();
protected:
	LANES_GENERAL_INFO_ST m_lanes_general_info_st;
private:
	virtual void frontLaneModelCalc_v( LM_GENERAL_LIMIT_ST&  inputLimit_pst,  VISION_LANE_INFO_ST&  vision_lane_info_st,  VEHSTATE_ST&  veh_state, VEHICLE_MOVEMENT_ST& m_vehMovement_st)=0;
	virtual void rearLaneModelCalc( LM_GENERAL_LIMIT_ST&  inputLimit_pst,  VISION_LANE_INFO_ST&  vision_lane_info_st,  VEHSTATE_ST&  veh_state, VEHICLE_MOVEMENT_ST& m_vehMovement_st)=0;
	LM_TYPE m_lm_type_en;//lane model type
	

};

#endif