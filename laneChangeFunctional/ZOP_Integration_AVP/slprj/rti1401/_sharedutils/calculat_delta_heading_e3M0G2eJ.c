/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\calculat_delta_heading_e3M0G2eJ.c
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
#include <string.h>
#include "calculat_delta_heading_e3M0G2eJ.h"

/* Function for MATLAB Function: '<S229>/Path_Planning_Function ' */
void calculat_delta_heading_e3M0G2eJ(const real_T center_line[800], const real_T
  traj_new[800], real_T ref_len_valid, real_T delta_heading[400])
{
  real_T x1;
  real_T b_y1;
  real_T x2;
  real_T y2;
  real_T square_term_1;
  real_T square_term_2;
  int32_T i;
  memset(&delta_heading[0], 0, 400U * sizeof(real_T));
  for (i = 0; i < (int32_T)(ref_len_valid - 1.0); i++) {
    x1 = center_line[i + 1] - center_line[i];
    b_y1 = center_line[i + 401] - center_line[400 + i];
    x2 = traj_new[i + 1] - traj_new[i];
    y2 = traj_new[i + 401] - traj_new[400 + i];
    square_term_1 = sqrt(x1 * x1 + b_y1 * b_y1);
    square_term_2 = sqrt(x2 * x2 + y2 * y2);
    if ((square_term_1 == 0.0) && (square_term_2 == 0.0)) {
      x1 = 0.0;
    } else {
      x1 = (x1 * y2 - x2 * b_y1) / fabs(square_term_1 * square_term_2 + 1.0E-5);
    }

    delta_heading[i] = asin(x1);
  }

  delta_heading[(int32_T)ref_len_valid - 1] = delta_heading[(int32_T)
    (ref_len_valid - 1.0) - 1];
}
