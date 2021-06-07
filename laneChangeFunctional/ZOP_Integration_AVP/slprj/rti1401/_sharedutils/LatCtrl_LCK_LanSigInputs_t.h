#ifndef RTW_HEADER_LatCtrl_LCK_LanSigInputs_t_h_
#define RTW_HEADER_LatCtrl_LCK_LanSigInputs_t_h_
#include "rtwtypes.h"

typedef struct {
  real32_T VID_Lin_01_ProbExists;
  real32_T VID_Lin_01_Type;
  real32_T VID_Lin_01_A0;
  real32_T VID_Lin_01_A1;
  real32_T VID_Lin_01_A2;
  real32_T VID_Lin_01_A3;
  real32_T VID_Lin_01_Range;
  real32_T VID_Lin_02_ProbExists;
  real32_T VID_Lin_02_Type;
  real32_T VID_Lin_02_A0;
  real32_T VID_Lin_02_A1;
  real32_T VID_Lin_02_A2;
  real32_T VID_Lin_02_A3;
  real32_T VID_Lin_02_Range;
  real32_T VID_Lane_Width;
} LatCtrl_LCK_LanSigInputs_t;

#endif                                 /* RTW_HEADER_LatCtrl_LCK_LanSigInputs_t_h_ */
