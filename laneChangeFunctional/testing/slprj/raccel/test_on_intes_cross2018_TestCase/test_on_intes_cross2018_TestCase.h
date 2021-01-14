#include "__cf_test_on_intes_cross2018_TestCase.h"
#ifndef RTW_HEADER_test_on_intes_cross2018_TestCase_h_
#define RTW_HEADER_test_on_intes_cross2018_TestCase_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef test_on_intes_cross2018_TestCase_COMMON_INCLUDES_
#define test_on_intes_cross2018_TestCase_COMMON_INCLUDES_
#include <stdlib.h>
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
#include "test_on_intes_cross2018_TestCase_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME test_on_intes_cross2018_TestCase
#define NSAMPLE_TIMES (1) 
#define NINPUTS (3)       
#define NOUTPUTS (1)     
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
typedef struct { real_T ea04mfxkat ; } B ; typedef struct { struct { void *
AQHandles ; void * SlioLTF ; } dvyiaaebog ; struct { void * AQHandles ; void
* SlioLTF ; } dsa0zy4kkw ; int32_T fefwksgptx ; uint8_T h41q4x2dy5 ; uint8_T
djqg3p0ays ; } DW ; typedef struct { real_T kjmlgzhvvi ; real_T f1ariqgtmg ;
real_T itqoqedeef ; } ExtU ; typedef struct { real_T mwlt3b0dyi ; } ExtY ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; extern const
char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern
ExtU rtU ; extern ExtY rtY ; extern const rtwCAPI_ModelMappingStaticInfo *
test_on_intes_cross2018_TestCase_GetCAPIStaticMap ( void ) ; extern SimStruct
* const rtS ; extern const int_T gblNumToFiles ; extern const int_T
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
