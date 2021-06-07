/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\xscal_8DLN1HPA.c
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.261
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:14:43 2021
 * Created for block: LCK
 */

#include "rtwtypes.h"
#include "xscal_8DLN1HPA.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
void xscal_8DLN1HPA(real_T a, real_T x[9], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}
