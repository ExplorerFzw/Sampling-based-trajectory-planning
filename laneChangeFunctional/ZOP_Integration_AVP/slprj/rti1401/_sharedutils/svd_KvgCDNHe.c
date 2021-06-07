/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\svd_KvgCDNHe.c
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
#include "rt_nonfinite.h"
#include "xaxpy_CrKdALXW.h"
#include "xaxpy_kfK2yJt1.h"
#include "xaxpy_yzl4GSHI.h"
#include "xdotc_r02YCO6T.h"
#include "xnrm2_KFYZv9aK.h"
#include "xnrm2_aiKRBp0D.h"
#include "xrot_MNAqxYk4.h"
#include "xrotg_a4chrhrN.h"
#include "xscal_8DLN1HPA.h"
#include "xswap_dkg56tB7.h"
#include "svd_KvgCDNHe.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
void svd_KvgCDNHe(const real_T A[9], real_T U[9], real_T s[3], real_T V[9])
{
  real_T b_A[9];
  real_T b_s[3];
  real_T e[3];
  real_T work[3];
  real_T Vf[9];
  int32_T qq;
  boolean_T apply_transform;
  real_T nrm;
  int32_T qjj;
  int32_T m;
  real_T rt;
  real_T r;
  int32_T kase;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  int32_T c_q;
  boolean_T exitg1;
  e[0] = 0.0;
  work[0] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  for (m = 0; m < 9; m++) {
    b_A[m] = A[m];
    U[m] = 0.0;
    Vf[m] = 0.0;
  }

  apply_transform = false;
  nrm = xnrm2_KFYZv9aK(3, b_A, 1);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      nrm = -nrm;
    }

    b_s[0] = nrm;
    if (fabs(b_s[0]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[0];
      for (m = 0; m < 3; m++) {
        b_A[m] *= nrm;
      }
    } else {
      for (m = 0; m < 3; m++) {
        b_A[m] /= b_s[0];
      }
    }

    b_A[0]++;
    b_s[0] = -b_s[0];
  } else {
    b_s[0] = 0.0;
  }

  for (m = 1; m + 1 < 4; m++) {
    qjj = 3 * m;
    if (apply_transform) {
      xaxpy_yzl4GSHI(3, -(xdotc_r02YCO6T(3, b_A, 1, b_A, qjj + 1) / b_A[0]), 1,
                     b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 0; m + 1 < 4; m++) {
    U[m] = b_A[m];
  }

  nrm = xnrm2_aiKRBp0D(e, 2);
  if (nrm == 0.0) {
    e[0] = 0.0;
  } else {
    if (e[1] < 0.0) {
      nrm = -nrm;
    }

    e[0] = nrm;
    if (fabs(nrm) >= 1.0020841800044864E-292) {
      nrm = 1.0 / nrm;
      for (m = 1; m < 3; m++) {
        e[m] *= nrm;
      }
    } else {
      for (m = 1; m < 3; m++) {
        e[m] /= nrm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (m = 2; m < 4; m++) {
      work[m - 1] = 0.0;
    }

    for (m = 1; m + 1 < 4; m++) {
      xaxpy_kfK2yJt1(2, e[m], b_A, 3 * m + 2, work, 2);
    }

    for (m = 1; m + 1 < 4; m++) {
      xaxpy_CrKdALXW(2, -e[m] / e[1], work, 2, b_A, 3 * m + 2);
    }
  }

  for (m = 1; m + 1 < 4; m++) {
    Vf[m] = e[m];
  }

  apply_transform = false;
  nrm = xnrm2_KFYZv9aK(2, b_A, 5);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[4] < 0.0) {
      nrm = -nrm;
    }

    b_s[1] = nrm;
    if (fabs(b_s[1]) >= 1.0020841800044864E-292) {
      nrm = 1.0 / b_s[1];
      for (m = 4; m < 6; m++) {
        b_A[m] *= nrm;
      }
    } else {
      for (m = 4; m < 6; m++) {
        b_A[m] /= b_s[1];
      }
    }

    b_A[4]++;
    b_s[1] = -b_s[1];
  } else {
    b_s[1] = 0.0;
  }

  for (m = 2; m + 1 < 4; m++) {
    qjj = 3 * m + 1;
    if (apply_transform) {
      xaxpy_yzl4GSHI(2, -(xdotc_r02YCO6T(2, b_A, 5, b_A, qjj + 1) / b_A[4]), 5,
                     b_A, qjj + 1);
    }

    e[m] = b_A[qjj];
  }

  for (m = 1; m + 1 < 4; m++) {
    U[m + 3] = b_A[m + 3];
  }

  m = 1;
  b_s[2] = b_A[8];
  e[1] = b_A[7];
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (c_q = 1; c_q >= 0; c_q--) {
    qq = 3 * c_q + c_q;
    if (b_s[c_q] != 0.0) {
      for (kase = c_q + 1; kase + 1 < 4; kase++) {
        qjj = (3 * kase + c_q) + 1;
        xaxpy_yzl4GSHI(3 - c_q, -(xdotc_r02YCO6T(3 - c_q, U, qq + 1, U, qjj) /
          U[qq]), qq + 1, U, qjj);
      }

      for (qjj = c_q; qjj + 1 < 4; qjj++) {
        U[qjj + 3 * c_q] = -U[3 * c_q + qjj];
      }

      U[qq]++;
      if (0 <= c_q - 1) {
        U[3 * c_q] = 0.0;
      }
    } else {
      U[3 * c_q] = 0.0;
      U[1 + 3 * c_q] = 0.0;
      U[2 + 3 * c_q] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (c_q = 2; c_q >= 0; c_q--) {
    if ((c_q + 1 <= 1) && (e[0] != 0.0)) {
      xaxpy_yzl4GSHI(2, -(xdotc_r02YCO6T(2, Vf, 2, Vf, 5) / Vf[1]), 2, Vf, 5);
      xaxpy_yzl4GSHI(2, -(xdotc_r02YCO6T(2, Vf, 2, Vf, 8) / Vf[1]), 2, Vf, 8);
    }

    Vf[3 * c_q] = 0.0;
    Vf[1 + 3 * c_q] = 0.0;
    Vf[2 + 3 * c_q] = 0.0;
    Vf[c_q + 3 * c_q] = 1.0;
  }

  nrm = e[0];
  if (b_s[0] != 0.0) {
    rt = fabs(b_s[0]);
    r = b_s[0] / rt;
    b_s[0] = rt;
    nrm /= r;
    xscal_8DLN1HPA(r, U, 1);
  }

  if (nrm != 0.0) {
    rt = fabs(nrm);
    r = rt / nrm;
    nrm = rt;
    b_s[1] *= r;
    xscal_8DLN1HPA(r, Vf, 4);
  }

  e[0] = nrm;
  nrm = e[1];
  if (b_s[1] != 0.0) {
    rt = fabs(b_s[1]);
    r = b_s[1] / rt;
    b_s[1] = rt;
    nrm /= r;
    xscal_8DLN1HPA(r, U, 4);
  }

  if (nrm != 0.0) {
    rt = fabs(nrm);
    r = rt / nrm;
    nrm = rt;
    b_s[2] *= r;
    xscal_8DLN1HPA(r, Vf, 7);
  }

  e[1] = nrm;
  if (b_s[2] != 0.0) {
    rt = fabs(b_s[2]);
    r = b_s[2] / rt;
    b_s[2] = rt;
    xscal_8DLN1HPA(r, U, 7);
  }

  e[2] = 0.0;
  qq = 0;
  r = b_s[0];
  nrm = e[0];
  if ((r > nrm) || rtIsNaN(nrm)) {
    nrm = r;
  }

  r = b_s[1];
  rt = e[1];
  if ((r > rt) || rtIsNaN(rt)) {
    rt = r;
  }

  if ((!(nrm > rt)) && (!rtIsNaN(rt))) {
    nrm = rt;
  }

  r = b_s[2];
  if (!(r > 0.0)) {
    r = 0.0;
  }

  if ((!(nrm > r)) && (!rtIsNaN(r))) {
    nrm = r;
  }

  while ((m + 2 > 0) && (qq < 75)) {
    c_q = m + 1;
    exitg1 = false;
    while (!(exitg1 || (c_q == 0))) {
      rt = fabs(e[c_q - 1]);
      if ((rt <= (fabs(b_s[c_q - 1]) + fabs(b_s[c_q])) * 2.2204460492503131E-16)
          || ((rt <= 1.0020841800044864E-292) || ((qq > 20) && (rt <=
             2.2204460492503131E-16 * nrm)))) {
        e[c_q - 1] = 0.0;
        exitg1 = true;
      } else {
        c_q--;
      }
    }

    if (m + 1 == c_q) {
      kase = 4;
    } else {
      qjj = m + 2;
      kase = m + 2;
      exitg1 = false;
      while ((!exitg1) && (kase >= c_q)) {
        qjj = kase;
        if (kase == c_q) {
          exitg1 = true;
        } else {
          rt = 0.0;
          if (kase < m + 2) {
            rt = fabs(e[kase - 1]);
          }

          if (kase > c_q + 1) {
            rt += fabs(e[kase - 2]);
          }

          r = fabs(b_s[kase - 1]);
          if ((r <= 2.2204460492503131E-16 * rt) || (r <=
               1.0020841800044864E-292)) {
            b_s[kase - 1] = 0.0;
            exitg1 = true;
          } else {
            kase--;
          }
        }
      }

      if (qjj == c_q) {
        kase = 3;
      } else if (m + 2 == qjj) {
        kase = 1;
      } else {
        kase = 2;
        c_q = qjj;
      }
    }

    switch (kase) {
     case 1:
      rt = e[m];
      e[m] = 0.0;
      for (qjj = m; qjj + 1 >= c_q + 1; qjj--) {
        r = b_s[qjj];
        xrotg_a4chrhrN(&r, &rt, &sqds, &smm1);
        b_s[qjj] = r;
        if (qjj + 1 > c_q + 1) {
          rt = -smm1 * e[0];
          e[0] *= sqds;
        }

        xrot_MNAqxYk4(Vf, 1 + 3 * qjj, 1 + 3 * (m + 1), sqds, smm1);
      }
      break;

     case 2:
      rt = e[c_q - 1];
      e[c_q - 1] = 0.0;
      for (qjj = c_q; qjj < m + 2; qjj++) {
        r = b_s[qjj];
        xrotg_a4chrhrN(&r, &rt, &sqds, &smm1);
        b_s[qjj] = r;
        rt = -smm1 * e[qjj];
        e[qjj] *= sqds;
        xrot_MNAqxYk4(U, 1 + 3 * qjj, 1 + 3 * (c_q - 1), sqds, smm1);
      }
      break;

     case 3:
      r = fabs(b_s[m + 1]);
      rt = fabs(b_s[m]);
      if ((r > rt) || rtIsNaN(rt)) {
        rt = r;
      }

      r = fabs(e[m]);
      if ((rt > r) || rtIsNaN(r)) {
        r = rt;
      }

      rt = fabs(b_s[c_q]);
      if ((r > rt) || rtIsNaN(rt)) {
        rt = r;
      }

      r = fabs(e[c_q]);
      if ((rt > r) || rtIsNaN(r)) {
        r = rt;
      }

      rt = b_s[m + 1] / r;
      smm1 = b_s[m] / r;
      emm1 = e[m] / r;
      sqds = b_s[c_q] / r;
      smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
      emm1 *= rt;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      rt = (sqds + rt) * (sqds - rt) + shift;
      r = e[c_q] / r * sqds;
      for (qjj = c_q + 1; qjj <= m + 1; qjj++) {
        xrotg_a4chrhrN(&rt, &r, &sqds, &smm1);
        if (qjj > c_q + 1) {
          e[0] = rt;
        }

        rt = b_s[qjj - 1] * sqds + e[qjj - 1] * smm1;
        e[qjj - 1] = e[qjj - 1] * sqds - b_s[qjj - 1] * smm1;
        r = smm1 * b_s[qjj];
        b_s[qjj] *= sqds;
        xrot_MNAqxYk4(Vf, 1 + 3 * (qjj - 1), 1 + 3 * qjj, sqds, smm1);
        xrotg_a4chrhrN(&rt, &r, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        rt = e[qjj - 1] * sqds + smm1 * b_s[qjj];
        b_s[qjj] = e[qjj - 1] * -smm1 + sqds * b_s[qjj];
        r = smm1 * e[qjj];
        e[qjj] *= sqds;
        xrot_MNAqxYk4(U, 1 + 3 * (qjj - 1), 1 + 3 * qjj, sqds, smm1);
      }

      e[m] = rt;
      qq++;
      break;

     default:
      if (b_s[c_q] < 0.0) {
        b_s[c_q] = -b_s[c_q];
        xscal_8DLN1HPA(-1.0, Vf, 1 + 3 * c_q);
      }

      qq = c_q + 1;
      while ((c_q + 1 < 3) && (b_s[c_q] < b_s[qq])) {
        rt = b_s[c_q];
        b_s[c_q] = b_s[qq];
        b_s[qq] = rt;
        xswap_dkg56tB7(Vf, 1 + 3 * c_q, 1 + 3 * (c_q + 1));
        xswap_dkg56tB7(U, 1 + 3 * c_q, 1 + 3 * (c_q + 1));
        c_q = qq;
        qq++;
      }

      qq = 0;
      m--;
      break;
    }
  }

  for (m = 0; m < 3; m++) {
    s[m] = b_s[m];
    V[3 * m] = Vf[3 * m];
    V[1 + 3 * m] = Vf[3 * m + 1];
    V[2 + 3 * m] = Vf[3 * m + 2];
  }
}
