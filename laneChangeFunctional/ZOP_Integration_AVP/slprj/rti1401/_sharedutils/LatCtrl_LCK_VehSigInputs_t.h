#ifndef RTW_HEADER_LatCtrl_LCK_VehSigInputs_t_h_
#define RTW_HEADER_LatCtrl_LCK_VehSigInputs_t_h_
#include "rtwtypes.h"

typedef struct {
  real32_T Vehicle_Speed;
  real32_T Steer_Ang;
  real32_T Steer_Spd;
  real32_T Steer_Torq;
  real32_T Veh_Yaw_Rate;
  real32_T LDWLKASwReq;
  real32_T LKATrqOvrlTrqDStat;
  real32_T DirectionIndSwitchPos;
  boolean_T BrkPedalApplied;
  real32_T AccPedalPosition;
  real32_T Gear_Pos;
} LatCtrl_LCK_VehSigInputs_t;

#endif                                 /* RTW_HEADER_LatCtrl_LCK_VehSigInputs_t_h_ */
