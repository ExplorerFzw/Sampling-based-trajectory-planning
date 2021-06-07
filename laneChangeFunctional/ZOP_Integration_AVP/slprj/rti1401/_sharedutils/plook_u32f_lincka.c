/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\plook_u32f_lincka.c
 *
 * Code generation for model "AccTarSel".
 *
 * Model version              : 1.399
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:13:33 2021
 * Created for block: AccTarSel
 */

#include "rtwtypes.h"
#include "linsearch_u32f.h"
#include "plook_u32f_lincka.h"

uint32_T plook_u32f_lincka(real32_T u, const real32_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = linsearch_u32f(u, bp, maxIndex >> 1U);
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}
