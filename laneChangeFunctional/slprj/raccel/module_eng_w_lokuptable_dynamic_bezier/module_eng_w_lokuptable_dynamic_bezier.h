#include "__cf_module_eng_w_lokuptable_dynamic_bezier.h"
#ifndef RTW_HEADER_module_eng_w_lokuptable_dynamic_bezier_h_
#define RTW_HEADER_module_eng_w_lokuptable_dynamic_bezier_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef module_eng_w_lokuptable_dynamic_bezier_COMMON_INCLUDES_
#define module_eng_w_lokuptable_dynamic_bezier_COMMON_INCLUDES_
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
#include "module_eng_w_lokuptable_dynamic_bezier_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME module_eng_w_lokuptable_dynamic_bezier
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (1) 
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
typedef struct { real_T pdnnt52o54 [ 3200 ] ; } B ; typedef struct { real_T
dyq5ezgm3b [ 3200 ] ; struct { void * AQHandles ; void * SlioLTF ; }
p5n1thzmil ; struct { void * AQHandles ; void * SlioLTF ; } mxiwcvqbmt ;
struct { void * AQHandles ; void * SlioLTF ; } jlug4gimi0 ; } DW ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
Delay1_InitialCondition [ 3200 ] ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern const rtwCAPI_ModelMappingStaticInfo *
module_eng_w_lokuptable_dynamic_bezier_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
