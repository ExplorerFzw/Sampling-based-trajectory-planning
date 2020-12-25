#include "__cf_module_eng_w_lokuptable_dynamic_bezier.h"
#include "rt_logging_mmi.h"
#include "module_eng_w_lokuptable_dynamic_bezier_capi.h"
#include <math.h>
#include "module_eng_w_lokuptable_dynamic_bezier.h"
#include "module_eng_w_lokuptable_dynamic_bezier_private.h"
#include "module_eng_w_lokuptable_dynamic_bezier_dt.h"
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
 "slprj\\raccel\\module_eng_w_lokuptable_dynamic_bezier\\module_eng_w_lokuptable_dynamic_bezier_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static real_T n33tznsxp0 ( const real_T X_p [ 400 ] , const real_T
Y [ 400 ] , real_T x ) ; static void dl0ibvtsfg ( const real_T output [ 3200
] , real_T long_S , real_T * search_latoff , real_T * search_theta , real_T *
search_kappa ) ; static real_T n33tznsxp0 ( const real_T X_p [ 400 ] , const
real_T Y [ 400 ] , real_T x ) { real_T y ; real_T low ; real_T high ; int32_T
Flag ; real_T mid ; boolean_T exitg1 ; y = 0.0 ; low = 1.0 ; high = 400.0 ;
if ( x <= X_p [ 0 ] ) { y = Y [ 0 ] ; } else if ( x >= X_p [ 399 ] ) { y = Y
[ 399 ] ; } else { Flag = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( Flag
== 0 ) ) { mid = muDoubleScalarRound ( ( low + high ) * 0.5 ) ; if ( X_p [ (
int32_T ) mid - 1 ] == x ) { y = Y [ ( int32_T ) mid - 1 ] ; exitg1 = true ;
} else { if ( x < X_p [ ( int32_T ) mid - 1 ] ) { high = mid ; } else { low =
mid ; } if ( high - low == 1.0 ) { Flag = 1 ; } y = ( x - X_p [ ( int32_T )
low - 1 ] ) / ( X_p [ ( int32_T ) high - 1 ] - X_p [ ( int32_T ) low - 1 ] )
* ( Y [ ( int32_T ) high - 1 ] - Y [ ( int32_T ) low - 1 ] ) + Y [ ( int32_T
) low - 1 ] ; } } } return y ; } static void dl0ibvtsfg ( const real_T output
[ 3200 ] , real_T long_S , real_T * search_latoff , real_T * search_theta ,
real_T * search_kappa ) { * search_latoff = n33tznsxp0 ( & output [ 800 ] , &
output [ 1200 ] , long_S ) ; * search_theta = n33tznsxp0 ( & output [ 800 ] ,
& output [ 1600 ] , long_S ) ; * search_kappa = n33tznsxp0 ( & output [ 800 ]
, & output [ 2000 ] , long_S ) ; } void MdlInitialize ( void ) { memcpy ( &
rtDW . dyq5ezgm3b [ 0 ] , & rtP . Delay1_InitialCondition [ 0 ] , 3200U *
sizeof ( real_T ) ) ; } void MdlStart ( void ) { { void * * slioCatalogueAddr
= rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void * *
pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
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
( "latoff" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "latoff" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "latoff" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. p5n1thzmil . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cf545f1f-e192-41f2-808f-ae0b7bd44b4c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . p5n1thzmil . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . p5n1thzmil . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . p5n1thzmil .
AQHandles , ssGetT ( rtS ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
p5n1thzmil . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
p5n1thzmil . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
p5n1thzmil . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "latoff" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"" , "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"latoff" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 1 , 0 ,
slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) )
{ sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 1 ,
"latoff" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) )
{ if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . p5n1thzmil .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"theta" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "theta" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "theta" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mxiwcvqbmt . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"8ef4d4a7-30ca-4746-a37c-cbc5788319aa" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . mxiwcvqbmt . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . mxiwcvqbmt . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . mxiwcvqbmt .
AQHandles , ssGetT ( rtS ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
mxiwcvqbmt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
mxiwcvqbmt . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
mxiwcvqbmt . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "theta" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "theta" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 2 , 0 ,
slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) )
{ sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 2 ,
"theta" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) )
{ if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . mxiwcvqbmt .
SlioLTF = accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"kappa" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "kappa" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "kappa" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 2 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jlug4gimi0 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3afb5369-0ab8-4d93-8f64-951b2b7a4f87" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . jlug4gimi0 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . jlug4gimi0 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . jlug4gimi0 .
AQHandles , ssGetT ( rtS ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
jlug4gimi0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
jlug4gimi0 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
jlug4gimi0 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "kappa" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "kappa" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 3 , 0 ,
slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) )
{ sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"module_eng_w_lokuptable_dynamic_bezier/Path_Planning_Function " , 3 ,
"kappa" ) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) )
{ if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; rtDW . jlug4gimi0 .
SlioLTF = accessor ; } } } } MdlInitialize ( ) ; } void MdlOutputs ( int_T
tid ) { real_T pgpjobok41 ; real_T jicstlajl0 ; real_T ho4ql01xb1 ; memcpy (
& rtB . pdnnt52o54 [ 0 ] , & rtDW . dyq5ezgm3b [ 0 ] , 3200U * sizeof (
real_T ) ) ; dl0ibvtsfg ( rtB . pdnnt52o54 , 0.0 , & pgpjobok41 , &
jicstlajl0 , & ho4ql01xb1 ) ; { if ( ( rtDW . p5n1thzmil . AQHandles || rtDW
. p5n1thzmil . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal
( rtDW . p5n1thzmil . AQHandles , rtDW . p5n1thzmil . SlioLTF , 0 , ssGetT (
rtS ) , ( char * ) & pgpjobok41 + 0 ) ; } } { if ( ( rtDW . mxiwcvqbmt .
AQHandles || rtDW . mxiwcvqbmt . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . mxiwcvqbmt . AQHandles , rtDW . mxiwcvqbmt .
SlioLTF , 0 , ssGetT ( rtS ) , ( char * ) & jicstlajl0 + 0 ) ; } } { if ( (
rtDW . jlug4gimi0 . AQHandles || rtDW . jlug4gimi0 . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . jlug4gimi0 .
AQHandles , rtDW . jlug4gimi0 . SlioLTF , 0 , ssGetT ( rtS ) , ( char * ) &
ho4ql01xb1 + 0 ) ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T
tid ) { memcpy ( & rtDW . dyq5ezgm3b [ 0 ] , & rtB . pdnnt52o54 [ 0 ] , 3200U
* sizeof ( real_T ) ) ; UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void
) { { if ( rtDW . p5n1thzmil . AQHandles ) { sdiTerminateStreaming ( & rtDW .
p5n1thzmil . AQHandles ) ; } if ( rtDW . p5n1thzmil . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . p5n1thzmil . SlioLTF ) ; } } { if ( rtDW
. mxiwcvqbmt . AQHandles ) { sdiTerminateStreaming ( & rtDW . mxiwcvqbmt .
AQHandles ) ; } if ( rtDW . mxiwcvqbmt . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . mxiwcvqbmt . SlioLTF ) ; } } { if ( rtDW
. jlug4gimi0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . jlug4gimi0 .
AQHandles ) ; } if ( rtDW . jlug4gimi0 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . jlug4gimi0 . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 6 ) ;
ssSetNumBlockIO ( rtS , 1 ) ; ssSetNumBlockParams ( rtS , 3200 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.001 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 952780247U ) ; ssSetChecksumVal ( rtS , 1 ,
3838118734U ) ; ssSetChecksumVal ( rtS , 2 , 356925125U ) ; ssSetChecksumVal
( rtS , 3 , 4178359405U ) ; }
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
module_eng_w_lokuptable_dynamic_bezier_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"module_eng_w_lokuptable_dynamic_bezier" ) ; ssSetPath ( rtS ,
"module_eng_w_lokuptable_dynamic_bezier" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , rtInf ) ; ssSetStepSize ( rtS , 0.001 ) ;
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
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 952780247U
) ; ssSetChecksumVal ( rtS , 1 , 3838118734U ) ; ssSetChecksumVal ( rtS , 2 ,
356925125U ) ; ssSetChecksumVal ( rtS , 3 , 4178359405U ) ; { static const
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
