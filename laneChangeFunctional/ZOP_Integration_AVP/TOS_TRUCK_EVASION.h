#ifndef TOS_TRUCK_EVASION_H_
#define TOS_TRUCK_EVASION_H_

#include"inputs.h"
#include"lm_common_defines.h"

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
private:
    TRUCK_EVASION_TAR_OBJ m_tar_obj_l_st;
    TRUCK_EVASION_TAR_OBJ m_tar_obj_r_st;

};

#endif

