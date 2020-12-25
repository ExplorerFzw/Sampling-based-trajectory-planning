#include "__cf_test_on_module_eng_w_lokuptable_dynamic_bezier.h"
#ifndef RTW_HEADER_test_on_module_eng_w_lokuptable_dynamic_bezier_h_
#define RTW_HEADER_test_on_module_eng_w_lokuptable_dynamic_bezier_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef test_on_module_eng_w_lokuptable_dynamic_bezier_COMMON_INCLUDES_
#define test_on_module_eng_w_lokuptable_dynamic_bezier_COMMON_INCLUDES_
#include <stdlib.h>
#include <stdio.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "test_on_module_eng_w_lokuptable_dynamic_bezier_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME test_on_module_eng_w_lokuptable_dynamic_bezier
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (11) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T adklmhhvve [ 3200 ] ; real_T reference [ 800 ] ;
real_T ref_bezier [ 800 ] ; real_T trajs_new_origin [ 800 ] ; real_T
dcylbszwvu ; real_T oe3c4znfcp ; real_T m5wn5qm1va ; real_T kf01b2elbf ;
real_T avyrn0tmre ; real_T ayzjxwgubr ; real_T j2cijk4wqe [ 3200 ] ; real_T
l51zhrvowj ; real_T bpanjkoblb ; } B ; typedef struct { real_T lit01jofcz [
3200 ] ; real_T fepqcopbju ; real_T mxjsrdkg5p ; struct { void * AQHandles ;
void * SlioLTF ; } outpvkilqu ; struct { void * AQHandles ; void * SlioLTF ;
} k3lks2jlox ; struct { void * AQHandles ; void * SlioLTF ; } lr0eceqiyw ;
struct { void * AQHandles ; void * SlioLTF ; } gwa32ocgwz ; struct { void *
AQHandles ; void * SlioLTF ; } aq5wcvsjsz ; struct { void * AQHandles ; void
* SlioLTF ; } g10aqb4fo0 ; struct { void * AQHandles ; void * SlioLTF ; }
ild40i04oe ; int32_T hvhjdggged ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
Ramp_InitialOutput ; real_T Ramp2_InitialOutput ; real_T Ramp_slope ; real_T
Ramp2_slope ; real_T Ramp_start ; real_T Ramp2_start ; real_T Step_Y0 ;
real_T RateLimiter_RisingLim ; real_T RateLimiter_FallingLim ; real_T
Step_Y0_jgpfzpiva0 ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat
; real_T PulseGenerator_Amp ; real_T PulseGenerator_Period ; real_T
PulseGenerator_Duty ; real_T PulseGenerator_PhaseDelay ; real_T
Delay1_InitialCondition [ 3200 ] ; real_T uConstant8_Value ; real_T
Constant12_Value ; real_T Constant17_Value ; real_T Constant18_Value ; real_T
Constant9_Value ; real_T Constant10_Value ; real_T Constant11_Value ; uint8_T
ManualSwitch_CurrentSetting ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern const rtwCAPI_ModelMappingStaticInfo *
test_on_module_eng_w_lokuptable_dynamic_bezier_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
