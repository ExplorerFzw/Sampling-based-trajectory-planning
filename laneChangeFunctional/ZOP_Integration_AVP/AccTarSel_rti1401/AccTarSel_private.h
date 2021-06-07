/*
 * AccTarSel_private.h
 *
 * Code generation for model "AccTarSel".
 *
 * Model version              : 1.222
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Dec  2 15:41:53 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AccTarSel_private_h_
#define RTW_HEADER_AccTarSel_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "AccTarSel.h"

extern real32_T rt_powf_snf(real32_T u0, real32_T u1);
void BINARYSEARCH_real32_T(uint32_T *piLeft, uint32_T *piRght, real32_T u, const
  real32_T *pData, uint32_T iHi);
void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData, real32_T u,
  const real32_T *pUData, uint32_T iHi);
extern real32_T look1_iflf_linlxpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_linlcpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern uint32_T plook_u32f_lincka(real32_T u, const real32_T bp[], uint32_T
  maxIndex);
extern uint32_T linsearch_u32f(real32_T u, const real32_T bp[], uint32_T
  startIndex);
extern void AccTarSel_IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1,
  real32_T *rty_Out2, P_IfActionSubsystem_AccTarSel_T *localP);
extern void AccTarSel_IfActionSubsystem2(real32_T *rty_Out1,
  P_IfActionSubsystem2_AccTarSe_T *localP);
extern void AccTarSel_IfActionSubsystem3(real32_T rtu_In1, real32_T *rty_Out1);
extern void AccTarSel_ObjNoStop(real32_T *rty_tToStop, real32_T *rty_dToStop,
  P_ObjNoStop_AccTarSel_T *localP);
extern void AccTarSel_IfActionSubsystem1(real32_T rtu_vRelAim, real32_T rtu_vRel,
  real32_T *rty_Out1);
extern void AccTarSel_IfActionSubsystem_d(boolean_T rtu_In1, boolean_T *rty_Out1);

#endif                                 /* RTW_HEADER_AccTarSel_private_h_ */
