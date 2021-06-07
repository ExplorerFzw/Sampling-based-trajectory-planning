#ifndef TOS_NRA_H_
#define TOS_NRA_H_
#include"LMCommonDefines.h"

class TOS_NRA
{
public:
    TOS_NRA();
    ~TOS_NRA() {};
    void Init();
    NRA_INFO_ST& GetNRAINFO();
    void Calc_v(TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st, FUSION_ROADEDGE_OUTPUT_ST& roadEdge_st, VEHSTATE_ST& t_vehState_st);
private:
    NRA_INFO_ST nra_info_st;

};

#endif

