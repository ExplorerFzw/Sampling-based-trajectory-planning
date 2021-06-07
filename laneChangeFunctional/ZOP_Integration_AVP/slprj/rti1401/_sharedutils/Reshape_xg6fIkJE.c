/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\Reshape_xg6fIkJE.c
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.261
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:14:43 2021
 * Created for block: LCK
 */

#include "rtwtypes.h"
#include "Reshape_xg6fIkJE.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
void Reshape_xg6fIkJE(real_T output[3200], real_T max_ref, real32_T c2)
{
  int32_T i;
  real32_T y;
  real_T tmp;
  int32_T tmp_0;
  int32_T i_0;
  int32_T tmp_1;
  if (max_ref < 400.0) {
    tmp_1 = 401 - (int32_T)(max_ref + 1.0);
    tmp_0 = (int32_T)(max_ref + 1.0) - 1;
    for (i = 0; i < 8; i++) {
      tmp = output[(400 * i + (int32_T)max_ref) - 1];
      for (i_0 = 0; i_0 < tmp_1; i_0++) {
        output[(tmp_0 + i_0) + 400 * i] = tmp;
      }
    }

    y = c2 * 2.0F;
    tmp_1 = 401 - (int32_T)(max_ref + 1.0);
    tmp_0 = (int32_T)(max_ref + 1.0) - 1;
    for (i_0 = 0; i_0 < tmp_1; i_0++) {
      output[2000 + (tmp_0 + i_0)] = y;
    }
  }
}
