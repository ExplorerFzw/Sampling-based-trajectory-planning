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

#ifndef TOS_BASE_H_
#define TOS_BASE_H_
#include"LMCommonDefines.h"

class TOSBase
{
public:
	TOSBase();
	void virtual Calc_v(TOS_OBJ_PROB_WITHIN_LANE& t_tos_obj_within_lane_st, PROB_EGO_VEHICLE_WITHIN_LANE_ST& t_probEgoVehicleWithinLane_st) {};
	~TOSBase() {};

};

#endif

