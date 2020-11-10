/*
 * untitled.cpp
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C++ source code generated on : Tue Nov 10 09:02:04 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Model step function */
void untitledModelClass::step()
{
  real_T y;
  int32_T i;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Input'
   */
  /* :  y = 0; */
  y = 0.0;

  /* :  for i = 1:u */
  for (i = 0; i < static_cast<int32_T>(untitled_U.Input); i++) {
    /* :  y = y + sqrt(i + i*i + i*i*i); */
    y += std::sqrt(((static_cast<real_T>(i) + 1.0) * (static_cast<real_T>(i) +
      1.0) + (static_cast<real_T>(i) + 1.0)) + (static_cast<real_T>(i) + 1.0) *
                   (static_cast<real_T>(i) + 1.0) * (static_cast<real_T>(i) +
      1.0));
  }

  /* Outport: '<Root>/Output' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  untitled_Y.Output = y;

  /* Matfile logging */
  rt_UpdateTXYLogVars((&untitled_M)->rtwLogInfo, (&(&untitled_M)
    ->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0005s, 0.0s] */
    if ((rtmGetTFinal((&untitled_M))!=-1) &&
        !((rtmGetTFinal((&untitled_M))-(&untitled_M)->Timing.taskTime0) >
          (&untitled_M)->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus((&untitled_M), "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++(&untitled_M)->Timing.clockTick0)) {
    ++(&untitled_M)->Timing.clockTickH0;
  }

  (&untitled_M)->Timing.taskTime0 = (&untitled_M)->Timing.clockTick0 *
    (&untitled_M)->Timing.stepSize0 + (&untitled_M)->Timing.clockTickH0 *
    (&untitled_M)->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void untitledModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal((&untitled_M), 10.0);
  (&untitled_M)->Timing.stepSize0 = 0.0005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    (&untitled_M)->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo((&untitled_M)->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs((&untitled_M)->rtwLogInfo, (NULL));
    rtliSetLogT((&untitled_M)->rtwLogInfo, "tout");
    rtliSetLogX((&untitled_M)->rtwLogInfo, "");
    rtliSetLogXFinal((&untitled_M)->rtwLogInfo, "");
    rtliSetLogVarNameModifier((&untitled_M)->rtwLogInfo, "rt_");
    rtliSetLogFormat((&untitled_M)->rtwLogInfo, 4);
    rtliSetLogMaxRows((&untitled_M)->rtwLogInfo, 0);
    rtliSetLogDecimation((&untitled_M)->rtwLogInfo, 1);
    rtliSetLogY((&untitled_M)->rtwLogInfo, "");
    rtliSetLogYSignalInfo((&untitled_M)->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs((&untitled_M)->rtwLogInfo, (NULL));
  }

  /* external inputs */
  untitled_U.Input = 0.0;

  /* external outputs */
  untitled_Y.Output = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime((&untitled_M)->rtwLogInfo, 0.0, rtmGetTFinal
    ((&untitled_M)), (&untitled_M)->Timing.stepSize0, (&rtmGetErrorStatus
    ((&untitled_M))));
}

/* Model terminate function */
void untitledModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
untitledModelClass::untitledModelClass() : untitled_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
untitledModelClass::~untitledModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_untitled_T * untitledModelClass::getRTM()
{
  return (&untitled_M);
}
