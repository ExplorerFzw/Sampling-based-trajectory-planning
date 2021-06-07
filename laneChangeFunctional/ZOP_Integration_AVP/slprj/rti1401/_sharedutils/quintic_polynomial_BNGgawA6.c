/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\quintic_polynomial_BNGgawA6.c
 *
 * Code generation for model "LCK".
 *
 * Model version              : 1.261
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:14:43 2021
 * Created for block: LCK
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "rt_powd_snf.h"
#include "svd_KvgCDNHe.h"
#include "quintic_polynomial_BNGgawA6.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
void quintic_polynomial_BNGgawA6(real32_T xs, real32_T vxs, real32_T xe, real_T
  T, real32_T *a0, real32_T *a1, real_T *a2, real32_T *a3, real32_T *a4,
  real32_T *a5)
{
  real_T A[9];
  real32_T x[3];
  real_T X[9];
  real_T V[9];
  int32_T r;
  int32_T vcol;
  real_T U[9];
  real_T s[3];
  int32_T j;
  boolean_T b_p;
  real_T absxk;
  int32_T ia;
  int32_T ib;
  int32_T b_ic;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real32_T x_0;
  real32_T xe_idx_0;
  real32_T xe_idx_1;
  absxk = rt_powd_snf(T, 3.0);
  tmp = rt_powd_snf(T, 4.0);
  tmp_0 = rt_powd_snf(T, 5.0);
  tmp_1 = rt_powd_snf(T, 3.0);
  tmp_2 = rt_powd_snf(T, 4.0);
  tmp_3 = rt_powd_snf(T, 3.0);
  A[0] = absxk;
  A[3] = tmp;
  A[6] = tmp_0;
  A[1] = T * T * 3.0;
  A[4] = 4.0 * tmp_1;
  A[7] = 5.0 * tmp_2;
  A[2] = 6.0 * T;
  A[5] = T * T * 12.0;
  A[8] = 20.0 * tmp_3;
  b_p = true;
  for (r = 0; r < 9; r++) {
    absxk = A[r];
    X[r] = 0.0;
    if (b_p && ((!rtIsInf(absxk)) && (!rtIsNaN(absxk)))) {
      b_p = true;
    } else {
      b_p = false;
    }
  }

  if (!b_p) {
    for (r = 0; r < 9; r++) {
      X[r] = (rtNaN);
    }
  } else {
    svd_KvgCDNHe(A, U, s, V);
    absxk = fabs(s[0]);
    if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &vcol);
        absxk = ldexp(1.0, vcol - 53);
      }
    } else {
      absxk = (rtNaN);
    }

    absxk *= 3.0;
    r = -1;
    vcol = 0;
    while ((vcol < 3) && (s[vcol] > absxk)) {
      r++;
      vcol++;
    }

    if (r + 1 > 0) {
      vcol = 0;
      for (j = 0; j <= r; j++) {
        absxk = 1.0 / s[j];
        for (ib = vcol; ib < vcol + 3; ib++) {
          V[ib] *= absxk;
        }

        vcol += 3;
      }

      for (vcol = 0; vcol < 3; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 3; vcol < 6; vcol++) {
        X[vcol] = 0.0;
      }

      for (vcol = 6; vcol < 9; vcol++) {
        X[vcol] = 0.0;
      }

      vcol = -1;
      j = 3 * r + 1;
      for (ib = 1; ib <= j; ib += 3) {
        ia = vcol;
        for (b_ic = 0; b_ic < 3; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 3;
      }

      vcol = -1;
      j = 3 * r + 2;
      for (ib = 2; ib <= j; ib += 3) {
        ia = vcol;
        for (b_ic = 3; b_ic < 6; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 3;
      }

      vcol = -1;
      j = 3 * r + 3;
      for (ib = 3; ib <= j; ib += 3) {
        ia = vcol;
        for (b_ic = 6; b_ic < 9; b_ic++) {
          ia++;
          X[b_ic] += U[ib - 1] * V[ia];
        }

        vcol += 3;
      }
    }
  }

  xe_idx_0 = ((xe - xs) - vxs * (real32_T)T) - (real32_T)(T * T * 0.0);
  xe_idx_1 = (0.0F - vxs) - (real32_T)(0.0 * T);
  for (r = 0; r < 3; r++) {
    x_0 = (real32_T)X[r] * xe_idx_0;
    x_0 += (real32_T)X[r + 3] * xe_idx_1;
    x_0 += (real32_T)X[r + 6] * 0.0F;
    x[r] = x_0;
  }

  *a0 = xs;
  *a1 = vxs;
  *a2 = 0.0;
  *a3 = x[0];
  *a4 = x[1];
  *a5 = x[2];
}
