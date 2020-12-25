#include "__cf_test_on_module_eng_w_lokuptable_dynamic_bezier.h"
#include "rt_logging_mmi.h"
#include "test_on_module_eng_w_lokuptable_dynamic_bezier_capi.h"
#include <math.h>
#include "test_on_module_eng_w_lokuptable_dynamic_bezier.h"
#include "test_on_module_eng_w_lokuptable_dynamic_bezier_private.h"
#include "test_on_module_eng_w_lokuptable_dynamic_bezier_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.2 (R2019b) 18-Jul-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
 "slprj\\raccel\\test_on_module_eng_w_lokuptable_dynamic_bezier\\test_on_module_eng_w_lokuptable_dynamic_bezier_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static real_T nckgtmelxu ( const real_T X_p [ 400 ] , const real_T
Y [ 400 ] , real_T x ) ; static void ewztxai2yd ( const real_T output [ 3200
] , real_T long_S , real_T * search_latoff , real_T * search_theta , real_T *
search_kappa ) ; static real_T gsoeg0zcc2 ( real_T velocity , real_T TIME ) ;
static void irm0abwwfn ( real_T c0 , real_T c1 , real_T c2 , real_T c3 ,
real_T LEN , real_T reference [ 800 ] ) ; static real_T irs55adndb ( const
real_T reference [ 800 ] ) ; static void f5nh0o5evn ( const real_T
reference_1 [ 800 ] , real_T D0 , real_T Ti , real_T Di , real_T ref_bezier [
800 ] ) ; static void ipzgltchpz ( const real_T trajs_local [ 800 ] , const
real_T p_store [ 800 ] , real_T ref_len_valid , real_T trajs_new [ 800 ] ) ;
static void j3avhyetou ( const real_T center_line [ 800 ] , const real_T
traj_new [ 800 ] , real_T ref_len_valid , real_T delta_heading [ 400 ] ) ;
static void oksltklbiv ( const real_T trajs_new [ 800 ] , real_T
ref_len_valid , real_T kappa [ 400 ] ) ; static void pdd5mwr104 ( const
real_T output [ 3200 ] , real_T * max_ref , real_T * valid_len ) ; static
void c22u3nhzjk ( real_T output [ 3200 ] , real_T max_ref , real_T c2 ) ;
static real_T nckgtmelxu ( const real_T X_p [ 400 ] , const real_T Y [ 400 ]
, real_T x ) { real_T y ; real_T low ; real_T high ; int32_T Flag ; real_T
mid ; boolean_T exitg1 ; y = 0.0 ; low = 1.0 ; high = 400.0 ; if ( x <= X_p [
0 ] ) { y = Y [ 0 ] ; } else if ( x >= X_p [ 399 ] ) { y = Y [ 399 ] ; } else
{ Flag = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( Flag == 0 ) ) { mid =
muDoubleScalarRound ( ( low + high ) * 0.5 ) ; if ( X_p [ ( int32_T ) mid - 1
] == x ) { y = Y [ ( int32_T ) mid - 1 ] ; exitg1 = true ; } else { if ( x <
X_p [ ( int32_T ) mid - 1 ] ) { high = mid ; } else { low = mid ; } if ( high
- low == 1.0 ) { Flag = 1 ; } y = ( x - X_p [ ( int32_T ) low - 1 ] ) / ( X_p
[ ( int32_T ) high - 1 ] - X_p [ ( int32_T ) low - 1 ] ) * ( Y [ ( int32_T )
high - 1 ] - Y [ ( int32_T ) low - 1 ] ) + Y [ ( int32_T ) low - 1 ] ; } } }
return y ; } static void ewztxai2yd ( const real_T output [ 3200 ] , real_T
long_S , real_T * search_latoff , real_T * search_theta , real_T *
search_kappa ) { * search_latoff = nckgtmelxu ( & output [ 800 ] , & output [
1200 ] , long_S ) ; * search_theta = nckgtmelxu ( & output [ 800 ] , & output
[ 1600 ] , long_S ) ; * search_kappa = nckgtmelxu ( & output [ 800 ] , &
output [ 2000 ] , long_S ) ; } static real_T gsoeg0zcc2 ( real_T velocity ,
real_T TIME ) { real_T LEN ; LEN = muDoubleScalarRound ( velocity / 3.6 *
TIME ) ; if ( LEN == 0.0 ) { printf ( "LEN calculation error. \r" ) ; fflush
( stdout ) ; } return LEN ; } static void irm0abwwfn ( real_T c0 , real_T c1
, real_T c2 , real_T c3 , real_T LEN , real_T reference [ 800 ] ) { real_T
b_index ; real_T t ; int32_T b ; int32_T b_t ; int32_T b_index_p ; memset ( &
reference [ 0 ] , 0 , 800U * sizeof ( real_T ) ) ; b_index = 1.0 ; b = (
int32_T ) ( ( LEN + 0.5 ) / 0.5 ) ; for ( b_t = 0 ; b_t < b ; b_t ++ ) { t =
( real_T ) b_t * 0.5 ; b_index_p = ( int32_T ) b_index - 1 ; reference [
b_index_p ] = t ; reference [ b_index_p + 400 ] = ( ( c1 * t + c0 ) + t * t *
c2 ) + c3 * muDoubleScalarPower ( t , 3.0 ) ; b_index ++ ; } } static real_T
irs55adndb ( const real_T reference [ 800 ] ) { real_T len_valid ; boolean_T
x [ 400 ] ; int16_T ii_data [ 400 ] ; int32_T idx ; int32_T b_ii ; boolean_T
exitg1 ; for ( idx = 0 ; idx < 400 ; idx ++ ) { x [ idx ] = ( ( reference [
idx ] == 0.0 ) && ( reference [ idx + 400 ] == 0.0 ) ) ; } idx = 0 ; b_ii = 0
; exitg1 = false ; while ( ( ! exitg1 ) && ( b_ii < 400 ) ) { if ( x [ b_ii ]
) { idx ++ ; ii_data [ idx - 1 ] = ( int16_T ) ( b_ii + 1 ) ; if ( idx >= 400
) { exitg1 = true ; } else { b_ii ++ ; } } else { b_ii ++ ; } } if ( 1 > idx
) { idx = 0 ; } if ( idx == 1 ) { len_valid = 400.0 ; } else { len_valid = (
real_T ) ii_data [ 1 ] - 3.0 ; } return len_valid ; } static void f5nh0o5evn
( const real_T reference_1 [ 800 ] , real_T D0 , real_T Ti , real_T Di ,
real_T ref_bezier [ 800 ] ) { real_T S ; int32_T b_index ; real_T c ; real_T
c_a ; real_T d_a ; real_T f_a ; real_T h_a ; real_T b_c ; S = 0.0 ; memset (
& ref_bezier [ 0 ] , 0 , 800U * sizeof ( real_T ) ) ; b_index = 1 ; while ( (
S < Ti ) && ( b_index < 400 ) ) { c = muDoubleScalarPower ( 1.0 - S / Ti ,
5.0 ) ; c_a = muDoubleScalarPower ( 1.0 - S / Ti , 4.0 ) * 5.0 * ( S / Ti ) ;
d_a = S / Ti ; d_a = muDoubleScalarPower ( 1.0 - S / Ti , 3.0 ) * 10.0 * (
d_a * d_a ) ; f_a = 1.0 - S / Ti ; f_a = f_a * f_a * 10.0 *
muDoubleScalarPower ( S / Ti , 3.0 ) ; h_a = ( 1.0 - S / Ti ) * 5.0 *
muDoubleScalarPower ( S / Ti , 4.0 ) ; b_c = muDoubleScalarPower ( S / Ti ,
5.0 ) ; ref_bezier [ b_index - 1 ] = ( ( ( ( 0.15 * Ti * c_a + c * 0.0 ) +
0.5 * Ti * d_a ) + 0.5 * Ti * f_a ) + 0.85 * Ti * h_a ) + b_c * Ti ;
ref_bezier [ b_index + 399 ] = ( ( ( ( 0.4 * Di + 0.6 * D0 ) * d_a + ( c * D0
+ c_a * D0 ) ) + ( 0.4 * D0 + 0.6 * Di ) * f_a ) + h_a * Di ) + b_c * Di ; c
= reference_1 [ b_index ] - reference_1 [ b_index - 1 ] ; c_a = reference_1 [
b_index + 400 ] - reference_1 [ b_index + 399 ] ; S += muDoubleScalarSqrt ( c
* c + c_a * c_a ) ; b_index ++ ; } } static void ipzgltchpz ( const real_T
trajs_local [ 800 ] , const real_T p_store [ 800 ] , real_T ref_len_valid ,
real_T trajs_new [ 800 ] ) { real_T theta ; int32_T i ; memset ( & trajs_new
[ 0 ] , 0 , 800U * sizeof ( real_T ) ) ; for ( i = 0 ; i < ( int32_T )
ref_len_valid ; i ++ ) { if ( trajs_local [ i ] <= 0.0001 ) { theta = 0.0 ; }
else if ( ( real_T ) i + 1.0 == 1.0 ) { theta = muDoubleScalarAtan (
trajs_local [ 400 ] / trajs_local [ 0 ] ) ; } else if ( trajs_local [ i ] -
trajs_local [ i - 1 ] <= 0.0001 ) { theta = 0.0 ; } else { theta =
muDoubleScalarAtan ( ( trajs_local [ i + 400 ] - trajs_local [ i + 399 ] ) /
( trajs_local [ i ] - trajs_local [ i - 1 ] ) ) ; } if ( ( theta > -
1.5707963267948966 ) && ( theta <= 0.0 ) ) { trajs_new [ i ] = p_store [ i +
400 ] * muDoubleScalarSin ( theta ) + trajs_local [ i ] ; trajs_new [ i + 400
] = p_store [ i + 400 ] * muDoubleScalarCos ( theta ) + trajs_local [ i + 400
] ; } else if ( ( theta > 0.0 ) && ( theta < 1.5707963267948966 ) ) {
trajs_new [ i ] = trajs_local [ i ] - p_store [ i + 400 ] * muDoubleScalarSin
( theta ) ; trajs_new [ i + 400 ] = p_store [ i + 400 ] * muDoubleScalarCos (
theta ) + trajs_local [ i + 400 ] ; } else { printf (
"it seems that the reference line is unacceptable!" ) ; fflush ( stdout ) ; }
} } static void j3avhyetou ( const real_T center_line [ 800 ] , const real_T
traj_new [ 800 ] , real_T ref_len_valid , real_T delta_heading [ 400 ] ) {
real_T x1 ; real_T b_y1 ; real_T x2 ; real_T y2 ; real_T square_term_1 ;
real_T square_term_2 ; int32_T i ; memset ( & delta_heading [ 0 ] , 0 , 400U
* sizeof ( real_T ) ) ; for ( i = 0 ; i < ( int32_T ) ( ref_len_valid - 1.0 )
; i ++ ) { x1 = center_line [ i + 1 ] - center_line [ i ] ; b_y1 =
center_line [ i + 401 ] - center_line [ i + 400 ] ; x2 = traj_new [ i + 1 ] -
traj_new [ i ] ; y2 = traj_new [ i + 401 ] - traj_new [ i + 400 ] ;
square_term_1 = muDoubleScalarSqrt ( x1 * x1 + b_y1 * b_y1 ) ; square_term_2
= muDoubleScalarSqrt ( x2 * x2 + y2 * y2 ) ; if ( ( square_term_1 == 0.0 ) &&
( square_term_2 == 0.0 ) ) { x1 = 0.0 ; } else { x1 = ( x1 * x2 + b_y1 * y2 )
/ muDoubleScalarAbs ( square_term_1 * square_term_2 + 1.0E-5 ) ; }
delta_heading [ i ] = muDoubleScalarSign ( traj_new [ i + 401 ] - center_line
[ i + 401 ] ) * muDoubleScalarAcos ( x1 ) ; } delta_heading [ ( int32_T )
ref_len_valid - 1 ] = delta_heading [ ( int32_T ) ( ref_len_valid - 1.0 ) - 1
] ; } static void oksltklbiv ( const real_T trajs_new [ 800 ] , real_T
ref_len_valid , real_T kappa [ 400 ] ) { real_T pd [ 400 ] ; real_T pdd [ 400
] ; real_T denominator_pdd ; int32_T i ; memset ( & pd [ 0 ] , 0 , 400U *
sizeof ( real_T ) ) ; memset ( & pdd [ 0 ] , 0 , 400U * sizeof ( real_T ) ) ;
memset ( & kappa [ 0 ] , 0 , 400U * sizeof ( real_T ) ) ; for ( i = 0 ; i < (
int32_T ) ( ref_len_valid - 1.0 ) ; i ++ ) { if ( trajs_new [ i + 1 ] -
trajs_new [ i ] <= 0.0001 ) { denominator_pdd = 0.0001 ; } else {
denominator_pdd = trajs_new [ i + 1 ] - trajs_new [ i ] ; } pd [ i ] = (
trajs_new [ i + 401 ] - trajs_new [ i + 400 ] ) / denominator_pdd ; } pd [
399 ] = pd [ 398 ] ; for ( i = 0 ; i < ( int32_T ) ( ref_len_valid - 2.0 ) ;
i ++ ) { denominator_pdd = ( trajs_new [ i + 1 ] - trajs_new [ i ] ) * 0.5 ;
if ( denominator_pdd * denominator_pdd <= 0.001 ) { denominator_pdd = 0.001 ;
} else { denominator_pdd = ( trajs_new [ i + 1 ] - trajs_new [ i ] ) * 0.5 ;
denominator_pdd *= denominator_pdd ; } pdd [ i ] = ( ( trajs_new [ i + 402 ]
- trajs_new [ i + 401 ] * 2.0 ) + trajs_new [ i + 400 ] ) / denominator_pdd ;
} pdd [ 398 ] = pdd [ 397 ] ; pdd [ 399 ] = pdd [ 397 ] ; for ( i = 0 ; i < (
int32_T ) ref_len_valid ; i ++ ) { kappa [ i ] = pdd [ i ] /
muDoubleScalarPower ( pd [ i ] * pd [ i ] + 1.0 , 1.5 ) ; } } static void
pdd5mwr104 ( const real_T output [ 3200 ] , real_T * max_ref , real_T *
valid_len ) { boolean_T x [ 400 ] ; int16_T ii_data [ 400 ] ; int32_T idx ;
int32_T b_ii ; boolean_T exitg1 ; for ( idx = 0 ; idx < 400 ; idx ++ ) { x [
idx ] = ( ( output [ idx + 800 ] == 0.0 ) && ( output [ idx + 1200 ] == 0.0 )
) ; } idx = 0 ; b_ii = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_ii <
400 ) ) { if ( x [ b_ii ] ) { idx ++ ; ii_data [ idx - 1 ] = ( int16_T ) (
b_ii + 1 ) ; if ( idx >= 400 ) { exitg1 = true ; } else { b_ii ++ ; } } else
{ b_ii ++ ; } } if ( 1 > idx ) { idx = 0 ; } if ( idx == 1 ) { * max_ref =
400.0 ; * valid_len = output [ 1199 ] ; } else { * max_ref = ( real_T )
ii_data [ 1 ] - 3.0 ; * valid_len = output [ ii_data [ 1 ] + 796 ] ; } }
static void c22u3nhzjk ( real_T output [ 3200 ] , real_T max_ref , real_T c2
) { int32_T i ; real_T tmp ; int32_T tmp_p ; int32_T i_p ; int32_T tmp_e ; if
( max_ref < 400.0 ) { tmp_e = 401 - ( int32_T ) ( max_ref + 1.0 ) ; tmp_p = (
int32_T ) ( max_ref + 1.0 ) ; for ( i = 0 ; i < 8 ; i ++ ) { tmp = output [ (
400 * i + ( int32_T ) max_ref ) - 1 ] ; for ( i_p = 0 ; i_p < tmp_e ; i_p ++
) { output [ ( ( tmp_p + i_p ) + 400 * i ) - 1 ] = tmp ; } } tmp_e = 401 - (
int32_T ) ( max_ref + 1.0 ) ; tmp_p = ( int32_T ) ( max_ref + 1.0 ) ; for (
i_p = 0 ; i_p < tmp_e ; i_p ++ ) { output [ ( tmp_p + i_p ) + 1999 ] = c2 *
2.0 ; } } } void MdlInitialize ( void ) { rtDW . mxjsrdkg5p = ( rtInf ) ;
memcpy ( & rtDW . lit01jofcz [ 0 ] , & rtP . Delay1_InitialCondition [ 0 ] ,
3200U * sizeof ( real_T ) ) ; } void MdlStart ( void ) { { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwDisableStreamingToRepository ( slioCatalogue ) ) { {
{ sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars
( "c1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "c1" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function1" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "c1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. outpvkilqu . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"96925dc3-15d3-4de7-ae03-6431a8673f19" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . outpvkilqu . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . outpvkilqu . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . outpvkilqu .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . outpvkilqu . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . outpvkilqu . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
outpvkilqu . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "c1" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "c1" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function1" , 1 , 0 ,
slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) )
{ sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function1" , 1 , "c1"
) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . outpvkilqu .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"c0" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "c0" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "c0" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. k3lks2jlox . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"d870e21d-4269-43b4-baea-3becfed55199" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . k3lks2jlox . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . k3lks2jlox . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . k3lks2jlox .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . k3lks2jlox . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . k3lks2jlox . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
k3lks2jlox . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "c0" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "c0" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function" , 1 , 0 ,
slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) )
{ sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/MATLAB Function" , 1 , "c0" )
; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . k3lks2jlox .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"latoff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "latoff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "latoff" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. lr0eceqiyw . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cf545f1f-e192-41f2-808f-ae0b7bd44b4c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . lr0eceqiyw . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . lr0eceqiyw . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . lr0eceqiyw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . lr0eceqiyw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . lr0eceqiyw . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
lr0eceqiyw . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "latoff" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "" , "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"latoff" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 1
, 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue
( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap .
fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 1
, "latoff" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . lr0eceqiyw .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"theta" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "theta" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "theta" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. gwa32ocgwz . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8ef4d4a7-30ca-4746-a37c-cbc5788319aa" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . gwa32ocgwz . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . gwa32ocgwz . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . gwa32ocgwz .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . gwa32ocgwz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . gwa32ocgwz . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
gwa32ocgwz . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "theta" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"theta" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 2
, 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue
( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap .
fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 2
, "theta" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . gwa32ocgwz .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"kappa" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "kappa" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "kappa" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 2 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. aq5wcvsjsz . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3afb5369-0ab8-4d93-8f64-951b2b7a4f87" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . aq5wcvsjsz . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . aq5wcvsjsz . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . aq5wcvsjsz .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . aq5wcvsjsz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . aq5wcvsjsz . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
aq5wcvsjsz . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "kappa" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"kappa" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 3
, 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue
( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap .
fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 3
, "kappa" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue )
) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . aq5wcvsjsz .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"time" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "time" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Saturation" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "time" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. g10aqb4fo0 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8b2b4ccb-440d-40a2-9fd3-a09c36e5c2e7" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . g10aqb4fo0 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . g10aqb4fo0 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . g10aqb4fo0 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . g10aqb4fo0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . g10aqb4fo0 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
g10aqb4fo0 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "time" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"time" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Saturation" , 1 , 0 ,
slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) )
{ sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Saturation" , 1 , "time" ) ;
} if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . g10aqb4fo0 .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Flag" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Flag" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"test_on_module_eng_w_lokuptable_dynamic_bezier/Manual Switch" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Flag" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ild40i04oe . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"d0baee2d-8541-4d39-b4d9-08bb42e27c3b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . ild40i04oe . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ild40i04oe . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ild40i04oe .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ild40i04oe . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ild40i04oe . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
ild40i04oe . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Flag" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "Flag" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Manual Switch" , 1 , 0 ,
slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) )
{ sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_module_eng_w_lokuptable_dynamic_bezier/Manual Switch" , 1 , "Flag" )
; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . ild40i04oe .
SlioLTF = accessor ; } } } } rtDW . hvhjdggged = 0 ; MdlInitialize ( ) ; }
void MdlOutputs ( int_T tid ) { real_T jj4nc2pmaq ; real_T deltaT ; real_T
riseValLimit ; real_T ref_len_valid ; real_T hmx2pehnq5 ; int32_T i ; real_T
tmp [ 400 ] ; real_T tmp_p [ 400 ] ; if ( ssGetTaskTime ( rtS , 0 ) < rtP .
Ramp_start ) { hmx2pehnq5 = rtP . Step_Y0 ; } else { hmx2pehnq5 = rtP .
Ramp_slope ; } hmx2pehnq5 = ( ssGetT ( rtS ) - rtP . Ramp_start ) *
hmx2pehnq5 + rtP . Ramp_InitialOutput ; if ( rtDW . mxjsrdkg5p == ( rtInf ) )
{ rtB . dcylbszwvu = hmx2pehnq5 ; } else { deltaT = ssGetTaskTime ( rtS , 0 )
- rtDW . mxjsrdkg5p ; riseValLimit = deltaT * rtP . RateLimiter_RisingLim ;
ref_len_valid = hmx2pehnq5 - rtDW . fepqcopbju ; if ( ref_len_valid >
riseValLimit ) { rtB . dcylbszwvu = rtDW . fepqcopbju + riseValLimit ; } else
{ deltaT *= rtP . RateLimiter_FallingLim ; if ( ref_len_valid < deltaT ) {
rtB . dcylbszwvu = rtDW . fepqcopbju + deltaT ; } else { rtB . dcylbszwvu =
hmx2pehnq5 ; } } } if ( ssGetTaskTime ( rtS , 0 ) < rtP . Ramp2_start ) {
hmx2pehnq5 = rtP . Step_Y0_jgpfzpiva0 ; } else { hmx2pehnq5 = rtP .
Ramp2_slope ; } hmx2pehnq5 = ( ssGetT ( rtS ) - rtP . Ramp2_start ) *
hmx2pehnq5 + rtP . Ramp2_InitialOutput ; if ( hmx2pehnq5 > rtP .
Saturation_UpperSat ) { rtB . oe3c4znfcp = rtP . Saturation_UpperSat ; } else
if ( hmx2pehnq5 < rtP . Saturation_LowerSat ) { rtB . oe3c4znfcp = rtP .
Saturation_LowerSat ; } else { rtB . oe3c4znfcp = hmx2pehnq5 ; } if ( ( rtB .
oe3c4znfcp >= 0.0 ) && ( rtB . oe3c4znfcp < 5.0 ) ) { rtB . l51zhrvowj =
0.014000000000000002 * rtB . oe3c4znfcp ; } else { rtB . l51zhrvowj = ( rtB .
oe3c4znfcp - 10.0 ) * - 0.014000000000000002 ; } { if ( ( rtDW . outpvkilqu .
AQHandles || rtDW . outpvkilqu . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . outpvkilqu . AQHandles , rtDW . outpvkilqu .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . l51zhrvowj + 0 )
; } } if ( ( rtB . oe3c4znfcp >= 0.0 ) && ( rtB . oe3c4znfcp < 5.0 ) ) { rtB
. bpanjkoblb = 0.3 * rtB . oe3c4znfcp ; } else { rtB . bpanjkoblb = 0.3 * rtB
. oe3c4znfcp + - 3.0 ; } { if ( ( rtDW . k3lks2jlox . AQHandles || rtDW .
k3lks2jlox . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . k3lks2jlox . AQHandles , rtDW . k3lks2jlox . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . bpanjkoblb + 0 ) ; } } rtB .
m5wn5qm1va = ( rtDW . hvhjdggged < rtP . PulseGenerator_Duty ) && ( rtDW .
hvhjdggged >= 0 ) ? rtP . PulseGenerator_Amp : 0.0 ; if ( rtDW . hvhjdggged
>= rtP . PulseGenerator_Period - 1.0 ) { rtDW . hvhjdggged = 0 ; } else {
rtDW . hvhjdggged ++ ; } for ( i = 0 ; i < 3200 ; i ++ ) { rtB . adklmhhvve [
i ] = rtDW . lit01jofcz [ i ] ; rtB . j2cijk4wqe [ i ] = rtB . adklmhhvve [ i
] ; } rtB . kf01b2elbf = 0.0 ; rtB . avyrn0tmre = 0.0 ; rtB . ayzjxwgubr =
0.0 ; if ( rtB . m5wn5qm1va == 1.0 ) { hmx2pehnq5 = gsoeg0zcc2 ( rtP .
uConstant8_Value , rtB . oe3c4znfcp ) ; irm0abwwfn ( rtB . bpanjkoblb , rtB .
l51zhrvowj , rtP . Constant17_Value , rtP . Constant18_Value , hmx2pehnq5 ,
rtB . reference ) ; ref_len_valid = irs55adndb ( rtB . reference ) ;
f5nh0o5evn ( rtB . reference , rtB . bpanjkoblb , hmx2pehnq5 ,
muDoubleScalarAbs ( rtP . Constant12_Value ) * rtP . Constant9_Value + rtB .
bpanjkoblb , rtB . ref_bezier ) ; ipzgltchpz ( rtB . reference , rtB .
ref_bezier , ref_len_valid , rtB . trajs_new_origin ) ; j3avhyetou ( rtB .
reference , rtB . trajs_new_origin , ref_len_valid , tmp ) ; oksltklbiv ( rtB
. trajs_new_origin , ref_len_valid , tmp_p ) ; for ( i = 0 ; i < 800 ; i ++ )
{ rtB . j2cijk4wqe [ i ] = rtB . trajs_new_origin [ i ] ; rtB . j2cijk4wqe [
i + 800 ] = rtB . ref_bezier [ i ] ; } for ( i = 0 ; i < 400 ; i ++ ) { rtB .
j2cijk4wqe [ i + 1600 ] = tmp [ i ] ; rtB . j2cijk4wqe [ i + 2000 ] = tmp_p [
i ] ; } for ( i = 0 ; i < 800 ; i ++ ) { rtB . j2cijk4wqe [ i + 2400 ] = -
1.0 ; } pdd5mwr104 ( rtB . j2cijk4wqe , & hmx2pehnq5 , & ref_len_valid ) ;
c22u3nhzjk ( rtB . j2cijk4wqe , hmx2pehnq5 , rtP . Constant17_Value ) ;
ewztxai2yd ( rtB . j2cijk4wqe , rtB . dcylbszwvu , & rtB . kf01b2elbf , & rtB
. avyrn0tmre , & rtB . ayzjxwgubr ) ; } else { if ( rtB . m5wn5qm1va == 0.0 )
{ ewztxai2yd ( rtB . j2cijk4wqe , rtB . dcylbszwvu , & rtB . kf01b2elbf , &
rtB . avyrn0tmre , & rtB . ayzjxwgubr ) ; } } { if ( ( rtDW . lr0eceqiyw .
AQHandles || rtDW . lr0eceqiyw . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . lr0eceqiyw . AQHandles , rtDW . lr0eceqiyw .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . kf01b2elbf + 0 )
; } } { if ( ( rtDW . gwa32ocgwz . AQHandles || rtDW . gwa32ocgwz . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . gwa32ocgwz .
AQHandles , rtDW . gwa32ocgwz . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . avyrn0tmre + 0 ) ; } } { if ( ( rtDW . aq5wcvsjsz .
AQHandles || rtDW . aq5wcvsjsz . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . aq5wcvsjsz . AQHandles , rtDW . aq5wcvsjsz .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . ayzjxwgubr + 0 )
; } } { if ( ( rtDW . g10aqb4fo0 . AQHandles || rtDW . g10aqb4fo0 . SlioLTF )
&& ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . g10aqb4fo0 .
AQHandles , rtDW . g10aqb4fo0 . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . oe3c4znfcp + 0 ) ; } } if ( rtP .
ManualSwitch_CurrentSetting == 1 ) { jj4nc2pmaq = rtP . Constant10_Value ; }
else { jj4nc2pmaq = rtP . Constant11_Value ; } { if ( ( rtDW . ild40i04oe .
AQHandles || rtDW . ild40i04oe . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . ild40i04oe . AQHandles , rtDW . ild40i04oe .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & jj4nc2pmaq + 0 ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { rtDW . fepqcopbju
= rtB . dcylbszwvu ; rtDW . mxjsrdkg5p = ssGetTaskTime ( rtS , 0 ) ; memcpy (
& rtDW . lit01jofcz [ 0 ] , & rtB . j2cijk4wqe [ 0 ] , 3200U * sizeof (
real_T ) ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { { if ( rtDW .
outpvkilqu . AQHandles ) { sdiTerminateStreaming ( & rtDW . outpvkilqu .
AQHandles ) ; } if ( rtDW . outpvkilqu . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . outpvkilqu . SlioLTF ) ; } } { if ( rtDW
. k3lks2jlox . AQHandles ) { sdiTerminateStreaming ( & rtDW . k3lks2jlox .
AQHandles ) ; } if ( rtDW . k3lks2jlox . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . k3lks2jlox . SlioLTF ) ; } } { if ( rtDW
. lr0eceqiyw . AQHandles ) { sdiTerminateStreaming ( & rtDW . lr0eceqiyw .
AQHandles ) ; } if ( rtDW . lr0eceqiyw . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . lr0eceqiyw . SlioLTF ) ; } } { if ( rtDW
. gwa32ocgwz . AQHandles ) { sdiTerminateStreaming ( & rtDW . gwa32ocgwz .
AQHandles ) ; } if ( rtDW . gwa32ocgwz . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . gwa32ocgwz . SlioLTF ) ; } } { if ( rtDW
. aq5wcvsjsz . AQHandles ) { sdiTerminateStreaming ( & rtDW . aq5wcvsjsz .
AQHandles ) ; } if ( rtDW . aq5wcvsjsz . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . aq5wcvsjsz . SlioLTF ) ; } } { if ( rtDW
. g10aqb4fo0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . g10aqb4fo0 .
AQHandles ) ; } if ( rtDW . g10aqb4fo0 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . g10aqb4fo0 . SlioLTF ) ; } } { if ( rtDW
. ild40i04oe . AQHandles ) { sdiTerminateStreaming ( & rtDW . ild40i04oe .
AQHandles ) ; } if ( rtDW . ild40i04oe . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . ild40i04oe . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 40 ) ;
ssSetNumBlockIO ( rtS , 11 ) ; ssSetNumBlockParams ( rtS , 3224 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.001 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2824683340U ) ; ssSetChecksumVal ( rtS , 1 ,
2569191226U ) ; ssSetChecksumVal ( rtS , 2 , 3077094236U ) ; ssSetChecksumVal
( rtS , 3 , 3729324196U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
test_on_module_eng_w_lokuptable_dynamic_bezier_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"test_on_module_eng_w_lokuptable_dynamic_bezier" ) ; ssSetPath ( rtS ,
"test_on_module_eng_w_lokuptable_dynamic_bezier" ) ; ssSetTStart ( rtS , 0.0
) ; ssSetTFinal ( rtS , rtInf ) ; ssSetStepSize ( rtS , 0.001 ) ;
ssSetFixedStepSize ( rtS , 0.001 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) ,
( NULL ) ) ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver ( rtS
, 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
2824683340U ) ; ssSetChecksumVal ( rtS , 1 , 2569191226U ) ; ssSetChecksumVal
( rtS , 2 , 3077094236U ) ; ssSetChecksumVal ( rtS , 3 , 3729324196U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 4 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
