/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration\slprj\rti1401\_sharedutils\mod_nP8BelbH.c
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.283
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Jan 11 15:39:01 2021
 * Created for block: LCK
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "mod_nP8BelbH.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
real_T mod_nP8BelbH(real_T x)
{
  real_T r;
  boolean_T rEQ0;
  real_T q;
  if ((!rtIsInf(x)) && (!rtIsNaN(x))) {
    if (x == 0.0) {
      r = 0.0;
    } else {
      r = fmod(x, 0.01);
      rEQ0 = (r == 0.0);
      if (!rEQ0) {
        q = fabs(x / 0.01);
        rEQ0 = (fabs(q - floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        r = 0.0;
      } else {
        if (x < 0.0) {
          r += 0.01;
        }
      }
    }
  } else {
    r = (rtNaN);
  }

  return r;
}
