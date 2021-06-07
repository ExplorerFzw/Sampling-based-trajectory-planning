/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\xnrm2_KFYZv9aK.c
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.261
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:14:43 2021
 * Created for block: LCK
 */

#include "rtwtypes.h"
#include <math.h>
#include "xnrm2_KFYZv9aK.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
real_T xnrm2_KFYZv9aK(int32_T n, const real_T x[9], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}
