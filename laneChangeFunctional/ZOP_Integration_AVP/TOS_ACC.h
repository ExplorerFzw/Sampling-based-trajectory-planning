#ifndef TOS_ACC_H_
#define TOS_ACC_H_
#include"lm_common_defines.h"
class TOS_ACC 
{
public:
    TOS_ACC();
    ~TOS_ACC() {};
    void Calc_v(TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st);
};

#endif

