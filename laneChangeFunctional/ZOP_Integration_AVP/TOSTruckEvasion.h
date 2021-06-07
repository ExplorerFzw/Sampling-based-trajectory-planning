#ifndef TOS_TRUCK_EVASION_H_
#define TOS_TRUCK_EVASION_H_

#include"Inputs.h"
#include"LMCommonDefines.h"

enum TE_TYPE
{
    TE_INVALID = 0,
    TE_LEFT = 1,
    TE_RIGHT = 2,
    TE_LEFT_AND_RIGHT = 3
};

class TOS_TRUCK_EVASION 
{
public:
    TOS_TRUCK_EVASION();
    ~TOS_TRUCK_EVASION() {};
    void Init();
    void Calc(FUSION_OBJ_OUTPUT_ST& fus_obj_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st);
    void LeftSide_Calc(FUSION_OBJ_OUTPUT_ST& fus_obj_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st);
    void RightSide_Calc(FUSION_OBJ_OUTPUT_ST& fus_obj_output_st, TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st);
    TRUCK_EVASION_TAR_OBJ& GetLSideTarObj();
    TRUCK_EVASION_TAR_OBJ& GetRSideTarObj();
    uint8_t& GetTEFlag() { return m_TE_Flag; }
private:
    TRUCK_EVASION_TAR_OBJ m_tar_obj_l_st;
    TRUCK_EVASION_TAR_OBJ m_tar_obj_r_st;
    uint8_t m_TE_Flag;// 0: invalid, 1:Left, 2:Right, 3: Left and Right
};

#endif

