/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\combination_MXznzaCx.c
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.261
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:14:43 2021
 * Created for block: LCK
 */

#include "rtwtypes.h"
#include <string.h>
#include "rt_powd_snf.h"
#include "combination_MXznzaCx.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
void combination_MXznzaCx(real32_T a0, real32_T a1, real32_T a3, real32_T a4,
  real32_T a5, real_T Te, real_T velocity, real_T ref_poly[800])
{
  real_T b_index;
  real_T t;
  real_T b;
  int32_T i;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  int32_T b_index_0;
  memset(&ref_poly[0], 0, 800U * sizeof(real_T));
  b_index = 1.0;
  b = Te / 0.05;
  for (i = 0; i < (int32_T)(b + 1.0); i++) {
    t = (real_T)i * 0.05;
    tmp = rt_powd_snf(t, 3.0);
    tmp_0 = rt_powd_snf(t, 4.0);
    tmp_1 = rt_powd_snf(t, 5.0);
    b_index_0 = (int32_T)b_index - 1;
    ref_poly[b_index_0] = (real32_T)(velocity * t);
    ref_poly[400 + b_index_0] = (((a1 * (real32_T)t + a0) + a3 * (real32_T)tmp)
      + a4 * (real32_T)tmp_0) + a5 * (real32_T)tmp_1;
    b_index++;
  }
}
