/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration\slprj\rti1401\_sharedutils\plook_u32s32_evencka.c
 *
 * Code generation for model "AccTarSel".
 *
 * Model version              : 1.460
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Jan 22 10:53:05 2021
 * Created for block: AccTarSel
 */

#include "rtwtypes.h"
#include "plook_u32s32_evencka.h"

uint32_T plook_u32s32_evencka(int32_T u, int32_T bp0, uint32_T bpSpace, uint32_T
  maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'even'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp0) {
    bpIndex = 0U;
  } else {
    bpIndex = ((uint32_T)u - bp0) / bpSpace;
    if (bpIndex < maxIndex) {
    } else {
      bpIndex = maxIndex;
    }
  }

  return bpIndex;
}
