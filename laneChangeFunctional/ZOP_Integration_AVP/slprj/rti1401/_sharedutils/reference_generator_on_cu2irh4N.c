/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\reference_generator_on_cu2irh4N.c
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
#include "reference_generator_on_cu2irh4N.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
void reference_generator_on_cu2irh4N(real32_T c0, real32_T c1, real32_T c2,
  real32_T c3, real_T Te, real_T velocity_ms, real_T reference[800])
{
  real_T b_index;
  real_T t;
  real_T b;
  int32_T i;
  real_T tmp;
  int32_T b_index_0;
  memset(&reference[0], 0, 800U * sizeof(real_T));
  b_index = 1.0;
  b = Te / 0.05;
  for (i = 0; i < (int32_T)(b + 1.0); i++) {
    t = (real_T)i * 0.05;
    tmp = rt_powd_snf(t, 3.0);
    b_index_0 = (int32_T)b_index - 1;
    reference[b_index_0] = (real32_T)(velocity_ms * t);
    reference[400 + b_index_0] = ((c1 * (real32_T)t + c0) + (real32_T)(t * t) *
      c2) + c3 * (real32_T)tmp;
    b_index++;
  }
}
