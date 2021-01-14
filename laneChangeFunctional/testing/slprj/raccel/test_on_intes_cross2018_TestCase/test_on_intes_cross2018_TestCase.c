#include "__cf_test_on_intes_cross2018_TestCase.h"
#include "rt_logging_mmi.h"
#include "test_on_intes_cross2018_TestCase_capi.h"
#include <math.h>
#include "test_on_intes_cross2018_TestCase.h"
#include "test_on_intes_cross2018_TestCase_private.h"
#include "test_on_intes_cross2018_TestCase_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 1 ; const char_T
* gbl_raccel_Version = "9.0 (R2018b) 24-May-2018" ; void
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
 "slprj\\raccel\\test_on_intes_cross2018_TestCase\\test_on_intes_cross2018_TestCase_Jpattern.mat"
; const int_T gblNumRootInportBlks = 3 ; const int_T gblNumModelInputs = 3 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { 0 , 0 , 0 } ;
const int_T gblInportDims [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; const int_T
gblInportComplex [ ] = { 0 , 0 , 0 } ; const int_T gblInportInterpoFlag [ ] =
{ 1 , 1 , 1 } ; const int_T gblInportContinuous [ ] = { 0 , 0 , 0 } ; int_T
enableFcnCallFlag [ ] = { 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
#define btu3j1cxfm ((uint8_T)0U)
#define dgnhhjw1dz ((uint8_T)1U)
#define kfa2rkip0f ((uint8_T)2U)
#define kznutae3qm (-1)
#define mnwkihkqxv ((uint8_T)3U)
B rtB ; DW rtDW ; ExtU rtU ; ExtY rtY ; static SimStruct model_S ; SimStruct
* const rtS = & model_S ; void MdlInitialize ( void ) { rtDW . fefwksgptx =
kznutae3qm ; rtDW . h41q4x2dy5 = 0U ; rtDW . djqg3p0ays = btu3j1cxfm ; } void
MdlStart ( void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
void * r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const int
maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [ 16384 ] ;
bool errorCreatingOSigstreamManager = false ; const char *
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
externalInputIsInDatasetFormat ) { rtwISigstreamManagerSetDestinationBase (
pISigstreamManager , 0 , & rtU . kjmlgzhvvi ) ;
rtwISigstreamManagerSetDestinationBase ( pISigstreamManager , 1 , & rtU .
f1ariqgtmg ) ; rtwISigstreamManagerSetDestinationBase ( pISigstreamManager ,
2 , & rtU . itqoqedeef ) ; } } { void * slioCatalogue = rt_slioCatalogue ( )
? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "Flag" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "Flag" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"test_on_intes_cross2018_TestCase/Chart" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Flag" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dvyiaaebog . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ac4d9f76-5cb6-4cfd-94ea-25845e1bf538" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. dvyiaaebog . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . dvyiaaebog
. AQHandles , "0.01" , 0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime (
rtDW . dvyiaaebog . AQHandles , ssGetT ( rtS ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . dvyiaaebog . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . dvyiaaebog . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } rtDW . dvyiaaebog . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; if ( slioCatalogue && rtwIsLoggingToFile
( slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T
sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "Flag" , "zoh" , 0 , (
unsigned int * ) sigDimsArray , 1 , "double" , "" , "0.01" , 0.01 ,
ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "Flag" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_intes_cross2018_TestCase/Chart" , 1 , 0 , slioCatalogue , ( NULL ) ,
0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"test_on_intes_cross2018_TestCase/Chart" , 1 , "Flag" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . dvyiaaebog . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "Flag" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "Flag" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"test_on_intes_cross2018_TestCase/Flag" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Flag" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dsa0zy4kkw . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2ec0924a-a0db-488a-ba1c-335cf40660e5" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. dsa0zy4kkw . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . dsa0zy4kkw
. AQHandles , "0.01" , 0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime (
rtDW . dsa0zy4kkw . AQHandles , ssGetT ( rtS ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . dsa0zy4kkw . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . dsa0zy4kkw . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . dsa0zy4kkw . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . dsa0zy4kkw . AQHandles , 1 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } rtDW .
dsa0zy4kkw . SlioLTF = ( NULL ) ; } MdlInitialize ( ) ; } void MdlOutputs (
int_T tid ) { boolean_T sf_internal_predicateOutput ; if ( gblInportFileName
!= ( NULL ) ) { real_T time = ssGetT ( rtS ) ; bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
slIsRapidAcceleratorSimulating ( ) && externalInputIsInDatasetFormat ) {
const int maxErrorBufferSize = 16384 ; char errMsg [ 16384 ] ; bool
bSetErrorStatus = false ; bSetErrorStatus =
rtwISigstreamManagerInjectDataSingleRate ( pISigstreamManager , time , 1 ,
"<Root>/dist" , "[t, u]" , errMsg , maxErrorBufferSize ) ; if (
bSetErrorStatus ) { ssSetErrorStatus ( rtS , errMsg ) ; return ; } } else {
int_T currTimeIdx ; int_T i ; if ( gblInportTUtables [ 0 ] . nTimePoints > 0
) { { { int k = 1 ; if ( gblInportTUtables [ 0 ] . nTimePoints == 1 ) { k = 0
; } currTimeIdx = rt_getTimeIdx ( gblInportTUtables [ 0 ] . time , time ,
gblInportTUtables [ 0 ] . nTimePoints , gblInportTUtables [ 0 ] . currTimeIdx
, 1 , 0 ) ; gblInportTUtables [ 0 ] . currTimeIdx = currTimeIdx ; for ( i = 0
; i < 1 ; i ++ ) { real_T * realPtr1 = ( real_T * ) gblInportTUtables [ 0 ] .
ur + i * gblInportTUtables [ 0 ] . nTimePoints + currTimeIdx ; real_T *
realPtr2 = realPtr1 + 1 * k ; ( void ) rt_Interpolate_Datatype ( realPtr1 ,
realPtr2 , & rtU . kjmlgzhvvi , time , gblInportTUtables [ 0 ] . time [
currTimeIdx ] , gblInportTUtables [ 0 ] . time [ currTimeIdx + k ] ,
gblInportTUtables [ 0 ] . uDataType ) ; } } } } if ( gblInportTUtables [ 1 ]
. nTimePoints > 0 ) { { { int k = 1 ; if ( gblInportTUtables [ 1 ] .
nTimePoints == 1 ) { k = 0 ; } currTimeIdx = rt_getTimeIdx (
gblInportTUtables [ 1 ] . time , time , gblInportTUtables [ 1 ] . nTimePoints
, gblInportTUtables [ 1 ] . currTimeIdx , 1 , 0 ) ; gblInportTUtables [ 1 ] .
currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real_T * realPtr1
= ( real_T * ) gblInportTUtables [ 1 ] . ur + i * gblInportTUtables [ 1 ] .
nTimePoints + currTimeIdx ; real_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . f1ariqgtmg , time ,
gblInportTUtables [ 1 ] . time [ currTimeIdx ] , gblInportTUtables [ 1 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 1 ] . uDataType ) ; } } } } if
( gblInportTUtables [ 2 ] . nTimePoints > 0 ) { { { int k = 1 ; if (
gblInportTUtables [ 2 ] . nTimePoints == 1 ) { k = 0 ; } currTimeIdx =
rt_getTimeIdx ( gblInportTUtables [ 2 ] . time , time , gblInportTUtables [ 2
] . nTimePoints , gblInportTUtables [ 2 ] . currTimeIdx , 1 , 0 ) ;
gblInportTUtables [ 2 ] . currTimeIdx = currTimeIdx ; for ( i = 0 ; i < 1 ; i
++ ) { real_T * realPtr1 = ( real_T * ) gblInportTUtables [ 2 ] . ur + i *
gblInportTUtables [ 2 ] . nTimePoints + currTimeIdx ; real_T * realPtr2 =
realPtr1 + 1 * k ; ( void ) rt_Interpolate_Datatype ( realPtr1 , realPtr2 , &
rtU . itqoqedeef , time , gblInportTUtables [ 2 ] . time [ currTimeIdx ] ,
gblInportTUtables [ 2 ] . time [ currTimeIdx + k ] , gblInportTUtables [ 2 ]
. uDataType ) ; } } } } } } rtDW . fefwksgptx = kznutae3qm ; if ( rtDW .
h41q4x2dy5 == 0U ) { rtDW . h41q4x2dy5 = 1U ; rtDW . djqg3p0ays = dgnhhjw1dz
; rtB . ea04mfxkat = 0.0 ; } else { switch ( rtDW . djqg3p0ays ) { case
dgnhhjw1dz : sf_internal_predicateOutput = ( ( rtU . itqoqedeef > 0.0 ) && (
rtU . kjmlgzhvvi > 0.0 ) ) ; if ( sf_internal_predicateOutput ) { rtDW .
djqg3p0ays = mnwkihkqxv ; rtB . ea04mfxkat = 0.0 ; } break ; case kfa2rkip0f
: sf_internal_predicateOutput = ( ( rtU . kjmlgzhvvi < - 5.0 ) || ( rtU .
itqoqedeef < 0.0 ) ) ; if ( sf_internal_predicateOutput ) { rtDW . djqg3p0ays
= dgnhhjw1dz ; rtB . ea04mfxkat = 0.0 ; } else { rtB . ea04mfxkat = 1.0 ; }
break ; default : if ( ( rtU . itqoqedeef > 0.0 ) && ( rtU . kjmlgzhvvi > 0.0
) && ( rtU . kjmlgzhvvi / ( rtU . f1ariqgtmg + 0.0001 ) <= 7.0 ) ) { rtDW .
djqg3p0ays = kfa2rkip0f ; } break ; } } rtY . mwlt3b0dyi = rtB . ea04mfxkat ;
{ if ( ( rtDW . dvyiaaebog . AQHandles || rtDW . dvyiaaebog . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . dvyiaaebog .
AQHandles , rtDW . dvyiaaebog . SlioLTF , 0 , ssGetT ( rtS ) , ( void * ) &
rtB . ea04mfxkat ) ; } } { if ( ( rtDW . dsa0zy4kkw . AQHandles || rtDW .
dsa0zy4kkw . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . dsa0zy4kkw . AQHandles , rtDW . dsa0zy4kkw . SlioLTF , 0 , ssGetT (
rtS ) , ( void * ) & rtB . ea04mfxkat ) ; } } UNUSED_PARAMETER ( tid ) ; }
void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlTerminate
( void ) { { if ( rtDW . dvyiaaebog . AQHandles ) { sdiTerminateStreaming ( &
rtDW . dvyiaaebog . AQHandles ) ; } if ( rtDW . dvyiaaebog . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dvyiaaebog . SlioLTF ) ; } } { if ( rtDW
. dsa0zy4kkw . AQHandles ) { sdiTerminateStreaming ( & rtDW . dsa0zy4kkw .
AQHandles ) ; } if ( rtDW . dsa0zy4kkw . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . dsa0zy4kkw . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 1 ) ; ssSetNumU ( rtS , 3 ) ; ssSetDirectFeedThrough ( rtS , 1 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 5 ) ;
ssSetNumBlockIO ( rtS , 1 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 535229183U ) ;
ssSetChecksumVal ( rtS , 1 , 2503800108U ) ; ssSetChecksumVal ( rtS , 2 ,
765538042U ) ; ssSetChecksumVal ( rtS , 3 , 2413199432U ) ; }
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
( B ) ) ; } { ssSetU ( rtS , ( ( void * ) & rtU ) ) ; ( void ) memset ( & rtU
, 0 , sizeof ( ExtU ) ) ; } { ssSetY ( rtS , & rtY ) ; rtY . mwlt3b0dyi = 0.0
; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; (
void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo
dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 14 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
test_on_intes_cross2018_TestCase_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"test_on_intes_cross2018_TestCase" ) ; ssSetPath ( rtS ,
"test_on_intes_cross2018_TestCase" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 0.0 ) ; ssSetStepSize ( rtS , 0.01 ) ; ssSetFixedStepSize
( rtS , 0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; }
{ rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogXSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; { static void * rt_LoggedOutputSignalPtrs [ ] = { & rtY .
mwlt3b0dyi } ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( (
LogSignalPtrsType ) rt_LoggedOutputSignalPtrs ) ) ; } { static int_T
rt_LoggedOutputWidths [ ] = { 1 } ; static int_T rt_LoggedOutputNumDimensions
[ ] = { 1 } ; static int_T rt_LoggedOutputDimensions [ ] = { 1 } ; static
boolean_T rt_LoggedOutputIsVarDims [ ] = { 0 } ; static void *
rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_LoggedOutputDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_LoggedOutputComplexSignals [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T *
rt_LoggedOutputLabels [ ] = { "Flag" } ; static const char_T *
rt_LoggedOutputBlockNames [ ] = { "test_on_intes_cross2018_TestCase/Flag" } ;
static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedOutputSignalInfo [ ] = { { 1 , rt_LoggedOutputWidths ,
rt_LoggedOutputNumDimensions , rt_LoggedOutputDimensions ,
rt_LoggedOutputIsVarDims , rt_LoggedCurrentSignalDimensions ,
rt_LoggedCurrentSignalDimensionsSize , rt_LoggedOutputDataTypeIds ,
rt_LoggedOutputComplexSignals , ( NULL ) , rt_LoggingPreprocessingFcnPtrs , {
rt_LoggedOutputLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert } } ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS
) , rt_LoggedOutputSignalInfo ) ; rt_LoggedCurrentSignalDimensions [ 0 ] = &
rt_LoggedOutputWidths [ 0 ] ; } rtliSetLogY ( ssGetRTWLogInfo ( rtS ) ,
"yout" ) ; } { static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 535229183U
) ; ssSetChecksumVal ( rtS , 1 , 2503800108U ) ; ssSetChecksumVal ( rtS , 2 ,
765538042U ) ; ssSetChecksumVal ( rtS , 3 , 2413199432U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 2 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = - 1 ; void MdlOutputsParameterSampleTime
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
