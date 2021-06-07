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

#ifndef VSL_H_
#define VSL_H_

#include"LMCommonDefines.h"

#define MAX_DEBOUNCE_DIS_OF_VSL  float(100)// 100m
#define MIN_LONG_GAP_BETWEEN_POINTS  float(1.85)
#define MAX_LONG_GAP_BETWEEN_POINTS  float(5)
#define MIN_LAT_GAP_BETWEEN_POINTS_TO_INIT  float(0.68)
#define MAX_LAT_GAP_BETWEEN_POINTS  float(0.48)
#define P_MinLengthOfAvailableLine_F float(0.5)
#define P_MAX_DEBOUNCE_DIS_OF_SEGMENT float(30)// 30m
#define P_MAX_IGNORE_DIS_OF_SEGMENT_RECOVERY float(1)
#define P_RECOVERY_FACTOR float(2)
#define VSL_FILT_FACTOR float(0.1)

class VSL
{
public:
	VSL();
	//explicit VSL(const LM_TYPE lmType_en);
	void Init();
	void Init_RearLane_v();
	void Init_FrontLane_v();
	void Init_RearPointsBuff();
	void Calc_v( LM_GENERAL_LIMIT_ST&  inputLimit_pst,  VISION_LANE_INFO_ST&  vision_lane_info_st, VEHSTATE_ST&  veh_state, VEHICLE_MOVEMENT_ST& m_vehMovement_st, uint8_t t_curDMState, uint8_t t_DMStateK1);
	LANES_GENERAL_INFO_ST& GetLanesGeneralInfo_st() { return m_lanes_general_info_st; }
private:
	void findTheBestLine(LM_GENERAL_LIMIT_ST& inputLimits_pst, VISION_LANE_INFO_ST& vision_lane_info_st, VEHSTATE_ST& veh_state, VEHICLE_MOVEMENT_ST& t_vehMovement_st);
	void frontLaneModelCalc_v( LM_GENERAL_LIMIT_ST&  inputLimit_pst,  VISION_LANE_INFO_ST&  vision_lane_info_st, VEHSTATE_ST&  veh_state, VEHICLE_MOVEMENT_ST& m_vehMovement_st);
	void rearLaneModelCalc( LM_GENERAL_LIMIT_ST&  inputLimit_pst,  VISION_LANE_INFO_ST&  vision_lane_info_st,  VEHSTATE_ST&  veh_state, VEHICLE_MOVEMENT_ST& m_vehMovement_st, uint8_t t_curDMState, uint8_t t_DMStateK1);
	void StoreRearPointsCalc_V(LM_GENERAL_LIMIT_ST& inputLimit_pst, VISION_LANE_INFO_ST& vision_lane_info_st, VEHSTATE_ST& veh_state,VEHICLE_MOVEMENT_ST& m_vehMovement_st, uint8_t t_curDMState, uint8_t t_DMStateK1);
	struct BEST_LINE_FROM_VISION_ST m_best_line_info_st;
	struct REAR_POINT_BUFFER_ST m_rearPointsBuf_st;
	LANES_GENERAL_INFO_ST m_lanes_general_info_st;
	float m_debounce4LLane_f;
	float m_debounce4MLane_f;
	float m_debounce4RLane_f;
	uint8_t m_debounce4NewStart_un8;
	float m_debounce4Segments_arr[TOTAL_SEGMENT_NUM];

	


};

#endif

