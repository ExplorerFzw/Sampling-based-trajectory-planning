#define S_FUNCTION_NAME  LKAReqToqHSC2_PV
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NINPUTS  4
#define NOUTPUTS 1

#define POLY 0x2F

static void mdlInitializeSizes(SimStruct *S)
{
    int_T  i=0, j=0;

    ssSetNumSFcnParams(S, 0);
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) 
    {
        return; /* Parameter mismatch will be reported by Simulink */
    }

    if (!ssSetNumInputPorts(S, NINPUTS)) return;
    for (i = 0; i < NINPUTS; i++) 
    {
        ssSetInputPortWidth(S, i, DYNAMICALLY_SIZED);
        ssSetInputPortDirectFeedThrough(S, i, 1);
        ssSetInputPortReusable(S, i, 1); 
    }

    if (!ssSetNumOutputPorts(S, NOUTPUTS)) return;
    for (j = 0; j < NOUTPUTS; j++) 
    {
        ssSetOutputPortWidth(S, j, DYNAMICALLY_SIZED);
        ssSetOutputPortReusable(S, j, 0);
    }

    ssSetNumSampleTimes(S, 1);
	ssSetNumRWork(S, 1);
 
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                    SS_OPTION_ALLOW_INPUT_SCALAR_EXPANSION |
                    SS_OPTION_USE_TLC_WITH_ACCELERATOR));     
                                                          
}


static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
    ssSetOffsetTime(S, 0, 0.0);

}

#define MDL_INITIALIZE_CONDITIONS
static void mdlInitializeConditions(SimStruct *S)
{
   real_T *RW = ssGetRWork(S);
   RW[0] = 0;
}

static void mdlOutputs(SimStruct *S, int_T tid)  
{
	real_T *RW = ssGetRWork(S);//Get a block's floating-point work vector nine?
    real_T *Pro_Val = ssGetOutputPortRealSignal(S,0);//Get a pointer to an output signal of type double (real_T)
    InputRealPtrsType  uPtrs1 = ssGetInputPortRealSignalPtrs(S,0); 
    real_T LKAReqToqStsHSC2;
    real_T LKAReqToqHSC2;
    real_T LKAReqToqVHSC2;
    real_T LKARollingCounter;
    int TEMP;
    int temp;
    
    
    
    LKARollingCounter = (*uPtrs1[0]);
    LKAReqToqVHSC2 = (*uPtrs1[1]);
    LKAReqToqHSC2 = ((*uPtrs1[2])+ 10.24)*100;
    LKAReqToqStsHSC2 = (*uPtrs1[3]);
    
//     temp = (int)LKAReqToqStsHSC2<<11; 
//     temp = temp + LKAReqToqHSC2;  
//     temp = (int)temp << 1 + (int)LKAReqToqVHSC2;
//     TEMP = temp + LKARollingCounter; 
//     Pro_Val[0] = (~(TEMP)+0x01)&0x3FFF;
    
  temp = (int)((((int)LKAReqToqHSC2<<1)|((int)LKAReqToqStsHSC2<<12)|(int)LKAReqToqVHSC2)&0x3FFF);
  temp = (int)((temp +(int) LKARollingCounter) & 0x3FFF);
  Pro_Val[0] = (int)((~temp+1) &0x3FFF);
 
}
static void mdlTerminate(SimStruct *S)
{
}


#ifdef  MATLAB_MEX_FILE
#include "simulink.c" 
#else
#include "cg_sfun.h" 
#endif
