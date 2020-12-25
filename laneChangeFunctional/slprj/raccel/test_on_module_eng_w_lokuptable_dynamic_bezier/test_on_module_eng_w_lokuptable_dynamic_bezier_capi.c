#include "__cf_test_on_module_eng_w_lokuptable_dynamic_bezier.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "test_on_module_eng_w_lokuptable_dynamic_bezier_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "test_on_module_eng_w_lokuptable_dynamic_bezier.h"
#include "test_on_module_eng_w_lokuptable_dynamic_bezier_capi.h"
#include "test_on_module_eng_w_lokuptable_dynamic_bezier_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function" ) ,
TARGET_STRING ( "c0" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 2 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function1" ) ,
TARGET_STRING ( "c1" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 3 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ,
TARGET_STRING ( "latoff" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 3 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ,
TARGET_STRING ( "theta" ) , 1 , 0 , 0 , 0 , 0 } , { 4 , 3 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ,
TARGET_STRING ( "kappa" ) , 2 , 0 , 0 , 0 , 0 } , { 5 , 3 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ,
TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Pulse Generator" ) ,
TARGET_STRING ( "Flag" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Rate Limiter" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Saturation" ) , TARGET_STRING
( "time" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Delay1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 ,
0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 10 ,
TARGET_STRING ( "test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp" ) ,
TARGET_STRING ( "slope" ) , 0 , 0 , 0 } , { 11 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp" ) , TARGET_STRING (
"start" ) , 0 , 0 , 0 } , { 12 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 13 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp2" ) , TARGET_STRING (
"slope" ) , 0 , 0 , 0 } , { 14 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp2" ) , TARGET_STRING (
"start" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp2" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 0 , 0 } , { 16 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/4Constant8" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Constant10" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 18 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Constant11" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 19 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Constant12" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Constant17" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 21 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Constant18" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Constant9" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 23 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Pulse Generator" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Pulse Generator" ) ,
TARGET_STRING ( "Period" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Pulse Generator" ) ,
TARGET_STRING ( "PulseWidth" ) , 0 , 0 , 0 } , { 26 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Pulse Generator" ) ,
TARGET_STRING ( "PhaseDelay" ) , 0 , 0 , 0 } , { 27 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Rate Limiter" ) ,
TARGET_STRING ( "RisingSlewLimit" ) , 0 , 0 , 0 } , { 28 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Rate Limiter" ) ,
TARGET_STRING ( "FallingSlewLimit" ) , 0 , 0 , 0 } , { 29 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Saturation" ) , TARGET_STRING
( "UpperLimit" ) , 0 , 0 , 0 } , { 30 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Saturation" ) , TARGET_STRING
( "LowerLimit" ) , 0 , 0 , 0 } , { 31 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Manual Switch" ) ,
TARGET_STRING ( "CurrentSetting" ) , 1 , 0 , 0 } , { 32 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 33 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp/Step" ) , TARGET_STRING
( "Before" ) , 0 , 0 , 0 } , { 34 , TARGET_STRING (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Ramp2/Step" ) , TARGET_STRING
( "Before" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . bpanjkoblb , & rtB . l51zhrvowj ,
& rtB . kf01b2elbf , & rtB . avyrn0tmre , & rtB . ayzjxwgubr , & rtB .
j2cijk4wqe [ 0 ] , & rtB . m5wn5qm1va , & rtB . dcylbszwvu , & rtB .
oe3c4znfcp , & rtB . adklmhhvve [ 0 ] , & rtP . Ramp_slope , & rtP .
Ramp_start , & rtP . Ramp_InitialOutput , & rtP . Ramp2_slope , & rtP .
Ramp2_start , & rtP . Ramp2_InitialOutput , & rtP . uConstant8_Value , & rtP
. Constant10_Value , & rtP . Constant11_Value , & rtP . Constant12_Value , &
rtP . Constant17_Value , & rtP . Constant18_Value , & rtP . Constant9_Value ,
& rtP . PulseGenerator_Amp , & rtP . PulseGenerator_Period , & rtP .
PulseGenerator_Duty , & rtP . PulseGenerator_PhaseDelay , & rtP .
RateLimiter_RisingLim , & rtP . RateLimiter_FallingLim , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
ManualSwitch_CurrentSetting , & rtP . Delay1_InitialCondition [ 0 ] , & rtP .
Step_Y0 , & rtP . Step_Y0_jgpfzpiva0 , } ; static int32_T * rtVarDimsAddrMap
[ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 400 , 8 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 0.001 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 10 , ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 25 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2824683340U , 2569191226U , 3077094236U , 3729324196U } , ( NULL ) , 0 ,
0 } ; const rtwCAPI_ModelMappingStaticInfo *
test_on_module_eng_w_lokuptable_dynamic_bezier_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void test_on_module_eng_w_lokuptable_dynamic_bezier_InitializeDataMapInfo (
void ) { rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void
test_on_module_eng_w_lokuptable_dynamic_bezier_host_InitializeDataMapInfo (
test_on_module_eng_w_lokuptable_dynamic_bezier_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
