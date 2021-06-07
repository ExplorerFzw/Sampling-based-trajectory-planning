/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\LinearInterpolation_QGOh67Ah.c
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.261
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:14:43 2021
 * Created for block: LCK
 */

#include "rtwtypes.h"
#include "rt_roundd_snf.h"
#include "LinearInterpolation_QGOh67Ah.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
real_T LinearInterpolation_QGOh67Ah(const real_T X[400], const real_T Y[400],
  real_T x)
{
  real_T y;
  real_T low;
  real_T high;
  int32_T Flag;
  real_T mid;
  boolean_T exitg1;
  y = 0.0;
  low = 1.0;
  high = 400.0;
  if (x <= X[0]) {
    y = Y[0];
  } else if (x >= X[399]) {
    y = Y[399];
  } else {
    Flag = 0;
    exitg1 = false;
    while ((!exitg1) && (Flag == 0)) {
      mid = rt_roundd_snf((low + high) * 0.5);
      if (X[(int32_T)mid - 1] == x) {
        y = Y[(int32_T)mid - 1];
        exitg1 = true;
      } else {
        if (x < X[(int32_T)mid - 1]) {
          high = mid;
        } else {
          low = mid;
        }

        if (high - low == 1.0) {
          Flag = 1;
        }

        y = (x - X[(int32_T)low - 1]) / (X[(int32_T)high - 1] - X[(int32_T)low -
          1]) * (Y[(int32_T)high - 1] - Y[(int32_T)low - 1]) + Y[(int32_T)low -
          1];
      }
    }
  }

  return y;
}
