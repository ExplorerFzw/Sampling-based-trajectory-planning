/*
 * LM_TOS_data.c
 *
 * Code generation for model "LM_TOS".
 *
 * Model version              : 1.358
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Jan 20 09:24:00 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LM_TOS.h"
#include "LM_TOS_private.h"

/* Block parameters (default storage) */
P_LM_TOS_T LM_TOS_P = {
  /* Expression: 0
   * Referenced by: '<S8>/Constant18'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S8>/Constant19'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S8>/Constant28'
   */
  2.0,

  /* Expression: 3
   * Referenced by: '<S8>/Constant29'
   */
  3.0,

  /* Expression: 4
   * Referenced by: '<S8>/Constant30'
   */
  4.0,

  /* Expression: 5
   * Referenced by: '<S8>/Constant31'
   */
  5.0,

  /* Expression: 6
   * Referenced by: '<S8>/Constant32'
   */
  6.0,

  /* Expression: 7
   * Referenced by: '<S8>/Constant33'
   */
  7.0,

  /* Expression: 8
   * Referenced by: '<S8>/Constant34'
   */
  8.0,

  /* Expression: 9
   * Referenced by: '<S8>/Constant35'
   */
  9.0,

  /* Expression: 10
   * Referenced by: '<S8>/Constant20'
   */
  10.0,

  /* Expression: 11
   * Referenced by: '<S8>/Constant21'
   */
  11.0,

  /* Expression: 12
   * Referenced by: '<S8>/Constant24'
   */
  12.0,

  /* Expression: 13
   * Referenced by: '<S8>/Constant25'
   */
  13.0,

  /* Expression: 14
   * Referenced by: '<S8>/Constant26'
   */
  14.0,

  /* Expression: 15
   * Referenced by: '<S8>/Constant27'
   */
  15.0,

  /* Expression: 16
   * Referenced by: '<S8>/Constant22'
   */
  16.0,

  /* Expression: 17
   * Referenced by: '<S8>/Constant23'
   */
  17.0,

  /* Expression: 18
   * Referenced by: '<S8>/Constant'
   */
  18.0,

  /* Expression: 19
   * Referenced by: '<S8>/Constant1'
   */
  19.0,

  /* Expression: 20
   * Referenced by: '<S8>/Constant2'
   */
  20.0,

  /* Expression: 21
   * Referenced by: '<S8>/Constant3'
   */
  21.0,

  /* Expression: 22
   * Referenced by: '<S8>/Constant4'
   */
  22.0,

  /* Expression: 23
   * Referenced by: '<S8>/Constant5'
   */
  23.0,

  /* Expression: 24
   * Referenced by: '<S8>/Constant6'
   */
  24.0,

  /* Expression: 25
   * Referenced by: '<S8>/Constant7'
   */
  25.0,

  /* Expression: 26
   * Referenced by: '<S8>/Constant8'
   */
  26.0,

  /* Expression: 27
   * Referenced by: '<S8>/Constant9'
   */
  27.0,

  /* Expression: 28
   * Referenced by: '<S8>/Constant10'
   */
  28.0,

  /* Expression: 29
   * Referenced by: '<S8>/Constant11'
   */
  29.0,

  /* Expression: 30
   * Referenced by: '<S8>/Constant14'
   */
  30.0,

  /* Expression: 31
   * Referenced by: '<S8>/Constant15'
   */
  31.0,

  /* Expression: 32
   * Referenced by: '<S8>/Constant16'
   */
  32.0,

  /* Expression: 33
   * Referenced by: '<S8>/Constant17'
   */
  33.0,

  /* Expression: 34
   * Referenced by: '<S8>/Constant12'
   */
  34.0,

  /* Expression: 35
   * Referenced by: '<S8>/Constant13'
   */
  35.0,

  /* Expression: 36
   * Referenced by: '<S8>/Constant38'
   */
  36.0,

  /* Expression: 37
   * Referenced by: '<S8>/Constant39'
   */
  37.0,

  /* Expression: 38
   * Referenced by: '<S8>/Constant36'
   */
  38.0,

  /* Expression: 39
   * Referenced by: '<S8>/Constant37'
   */
  39.0,

  /* Expression: 0
   * Referenced by: '<S111>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S111>/Constant1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S112>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S112>/Constant1'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S113>/Constant'
   */
  10.0,

  /* Expression: 0
   * Referenced by: '<S113>/Constant1'
   */
  0.0,

  /* Expression: 11
   * Referenced by: '<S114>/Constant'
   */
  11.0,

  /* Expression: 0
   * Referenced by: '<S114>/Constant1'
   */
  0.0,

  /* Expression: 12
   * Referenced by: '<S115>/Constant'
   */
  12.0,

  /* Expression: 0
   * Referenced by: '<S115>/Constant1'
   */
  0.0,

  /* Expression: 13
   * Referenced by: '<S116>/Constant'
   */
  13.0,

  /* Expression: 0
   * Referenced by: '<S116>/Constant1'
   */
  0.0,

  /* Expression: 14
   * Referenced by: '<S117>/Constant'
   */
  14.0,

  /* Expression: 0
   * Referenced by: '<S117>/Constant1'
   */
  0.0,

  /* Expression: 15
   * Referenced by: '<S118>/Constant'
   */
  15.0,

  /* Expression: 0
   * Referenced by: '<S118>/Constant1'
   */
  0.0,

  /* Expression: 16
   * Referenced by: '<S119>/Constant'
   */
  16.0,

  /* Expression: 0
   * Referenced by: '<S119>/Constant1'
   */
  0.0,

  /* Expression: 17
   * Referenced by: '<S120>/Constant'
   */
  17.0,

  /* Expression: 0
   * Referenced by: '<S120>/Constant1'
   */
  0.0,

  /* Expression: 18
   * Referenced by: '<S121>/Constant'
   */
  18.0,

  /* Expression: 0
   * Referenced by: '<S121>/Constant1'
   */
  0.0,

  /* Expression: 19
   * Referenced by: '<S122>/Constant'
   */
  19.0,

  /* Expression: 0
   * Referenced by: '<S122>/Constant1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S123>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S123>/Constant1'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S124>/Constant'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<S124>/Constant1'
   */
  0.0,

  /* Expression: 21
   * Referenced by: '<S125>/Constant'
   */
  21.0,

  /* Expression: 0
   * Referenced by: '<S125>/Constant1'
   */
  0.0,

  /* Expression: 22
   * Referenced by: '<S126>/Constant'
   */
  22.0,

  /* Expression: 0
   * Referenced by: '<S126>/Constant1'
   */
  0.0,

  /* Expression: 23
   * Referenced by: '<S127>/Constant'
   */
  23.0,

  /* Expression: 0
   * Referenced by: '<S127>/Constant1'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S128>/Constant'
   */
  24.0,

  /* Expression: 0
   * Referenced by: '<S128>/Constant1'
   */
  0.0,

  /* Expression: 25
   * Referenced by: '<S129>/Constant'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S129>/Constant1'
   */
  0.0,

  /* Expression: 26
   * Referenced by: '<S130>/Constant'
   */
  26.0,

  /* Expression: 0
   * Referenced by: '<S130>/Constant1'
   */
  0.0,

  /* Expression: 27
   * Referenced by: '<S131>/Constant'
   */
  27.0,

  /* Expression: 0
   * Referenced by: '<S131>/Constant1'
   */
  0.0,

  /* Expression: 28
   * Referenced by: '<S132>/Constant'
   */
  28.0,

  /* Expression: 0
   * Referenced by: '<S132>/Constant1'
   */
  0.0,

  /* Expression: 29
   * Referenced by: '<S133>/Constant'
   */
  29.0,

  /* Expression: 0
   * Referenced by: '<S133>/Constant1'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S134>/Constant'
   */
  3.0,

  /* Expression: 0
   * Referenced by: '<S134>/Constant1'
   */
  0.0,

  /* Expression: 30
   * Referenced by: '<S135>/Constant'
   */
  30.0,

  /* Expression: 0
   * Referenced by: '<S135>/Constant1'
   */
  0.0,

  /* Expression: 31
   * Referenced by: '<S136>/Constant'
   */
  31.0,

  /* Expression: 0
   * Referenced by: '<S136>/Constant1'
   */
  0.0,

  /* Expression: 4
   * Referenced by: '<S137>/Constant'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S137>/Constant1'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S138>/Constant'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S138>/Constant1'
   */
  0.0,

  /* Expression: 6
   * Referenced by: '<S139>/Constant'
   */
  6.0,

  /* Expression: 0
   * Referenced by: '<S139>/Constant1'
   */
  0.0,

  /* Expression: 7
   * Referenced by: '<S140>/Constant'
   */
  7.0,

  /* Expression: 0
   * Referenced by: '<S140>/Constant1'
   */
  0.0,

  /* Expression: 8
   * Referenced by: '<S141>/Constant'
   */
  8.0,

  /* Expression: 0
   * Referenced by: '<S141>/Constant1'
   */
  0.0,

  /* Expression: 9
   * Referenced by: '<S142>/Constant'
   */
  9.0,

  /* Expression: 0
   * Referenced by: '<S142>/Constant1'
   */
  0.0
};
