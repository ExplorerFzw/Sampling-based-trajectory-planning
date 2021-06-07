/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\mod_4K2xLldT.c
 *
 * Code generation for model "AccTarSel".
 *
 * Model version              : 1.399
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:13:33 2021
 * Created for block: AccTarSel
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "mod_4K2xLldT.h"

/* Function for Chart: '<Root>/ACC_State_Machine1' */
real32_T mod_4K2xLldT(real32_T x)
{
  real32_T r;
  if ((!rtIsInfF(x)) && (!rtIsNaNF(x))) {
    if (x == 0.0F) {
      r = 0.0F;
    } else {
      r = (real32_T)fmod(x, 5.0);
      if (r == 0.0F) {
        r = 0.0F;
      } else {
        if (x < 0.0F) {
          r += 5.0F;
        }
      }
    }
  } else {
    r = (rtNaNF);
  }

  return r;
}
