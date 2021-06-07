/*
 * F:\DatabaseZO\08.Code\Model\ZOP_Integration_20201230\slprj\rti1401\_sharedutils\LookUp_real32_T_real32_T.c
 *
 * Code generation for model "AccTarSel".
 *
 * Model version              : 1.399
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jan  2 20:13:33 2021
 * Created for block: <S144>/Lookup Table Dynamic1
 */

#include "rtwtypes.h"
#include "BINARYSEARCH_real32_T.h"
#include "LookUp_real32_T_real32_T.h"

/* Lookup Utility LookUp_real32_T_real32_T */
void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData, real32_T u,
  const real32_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real32_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real32_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real32_T num;
      real32_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0F;
    }

    {
      real32_T yLeftCast;
      real32_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}
