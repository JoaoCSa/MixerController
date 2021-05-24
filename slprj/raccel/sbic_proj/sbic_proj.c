#include "rt_logging_mmi.h"
#include "sbic_proj_capi.h"
#include <math.h>
#include "sbic_proj.h"
#include "sbic_proj_private.h"
#include "sbic_proj_dt.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
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
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.4 (R2020b) 29-Jul-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; } B rtB
; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static void ltgvzexw0a ( const real_T x [ 101 ] , const real_T
params [ 3 ] , real_T y [ 101 ] ) ; static real_T kl4vtyrhpq ( real_T x ,
const real_T params [ 3 ] ) ; static void ltgvzexw0a ( const real_T x [ 101 ]
, const real_T params [ 3 ] , real_T y [ 101 ] ) { real_T a ; real_T b ;
real_T c ; real_T x_p ; int32_T i ; a = params [ 0 ] ; b = params [ 1 ] ; c =
params [ 2 ] ; for ( i = 0 ; i < 101 ; i ++ ) { x_p = x [ i ] ; y [ i ] = 0.0
; if ( ( a != b ) && ( a < x_p ) && ( x_p < b ) ) { y [ i ] = 1.0 / ( b - a )
* ( x_p - a ) ; } if ( ( b != c ) && ( b < x_p ) && ( x_p < c ) ) { y [ i ] =
1.0 / ( c - b ) * ( c - x_p ) ; } if ( x_p == b ) { y [ i ] = 1.0 ; } } }
void hnktmxv3qw ( real_T cwajuedmck , real_T bv0hp0cgjy , const real_T
h230zo5ojt [ 9 ] , const real_T e0tj30fo4z [ 101 ] , ktbm03kdi1 * localB ) {
static const real_T b [ 3 ] = { - 19.99 , - 15.0 , - 7.5 } ; static const
real_T c [ 3 ] = { 7.5 , 15.0 , 20.0 } ; static const int8_T d [ 9 ] = { 2 ,
1 , 1 , 3 , 3 , 3 , 5 , 5 , 4 } ; real_T outputMFCache [ 505 ] ; real_T tmp [
101 ] ; real_T tmp_e [ 101 ] ; real_T tmp_g [ 101 ] ; real_T tmp_i [ 101 ] ;
real_T tmp_m [ 101 ] ; real_T tmp_p [ 3 ] ; real_T mfVal ; real_T x_idx_0 ;
real_T x_idx_1 ; int32_T i ; int32_T sampleID ; localB -> mt1ayxk2j4 [ 0 ] =
cwajuedmck ; localB -> mt1ayxk2j4 [ 1 ] = bv0hp0cgjy ; ltgvzexw0a (
e0tj30fo4z , b , tmp ) ; tmp_p [ 0 ] = - 15.0 ; tmp_p [ 1 ] = - 7.5 ; tmp_p [
2 ] = 0.0 ; ltgvzexw0a ( e0tj30fo4z , tmp_p , tmp_e ) ; tmp_p [ 0 ] = - 7.5 ;
tmp_p [ 1 ] = 0.0 ; tmp_p [ 2 ] = 7.5 ; ltgvzexw0a ( e0tj30fo4z , tmp_p ,
tmp_i ) ; tmp_p [ 0 ] = 0.0 ; tmp_p [ 1 ] = 7.5 ; tmp_p [ 2 ] = 15.0 ;
ltgvzexw0a ( e0tj30fo4z , tmp_p , tmp_m ) ; ltgvzexw0a ( e0tj30fo4z , c ,
tmp_g ) ; for ( i = 0 ; i < 101 ; i ++ ) { localB -> g1ghek1a0h [ i ] = 0.0 ;
outputMFCache [ 5 * i ] = tmp [ i ] ; outputMFCache [ 5 * i + 1 ] = tmp_e [ i
] ; outputMFCache [ 5 * i + 2 ] = tmp_i [ i ] ; outputMFCache [ 5 * i + 3 ] =
tmp_m [ i ] ; outputMFCache [ 5 * i + 4 ] = tmp_g [ i ] ; } for ( i = 0 ; i <
9 ; i ++ ) { x_idx_1 = h230zo5ojt [ i ] ; for ( sampleID = 0 ; sampleID < 101
; sampleID ++ ) { x_idx_0 = outputMFCache [ ( 5 * sampleID + d [ i ] ) - 1 ]
; if ( ( x_idx_0 > x_idx_1 ) || ( muDoubleScalarIsNaN ( x_idx_0 ) && ( !
muDoubleScalarIsNaN ( x_idx_1 ) ) ) ) { mfVal = x_idx_1 ; } else { mfVal =
x_idx_0 ; } x_idx_0 = localB -> g1ghek1a0h [ sampleID ] ; if ( ( x_idx_0 <
mfVal ) || ( muDoubleScalarIsNaN ( x_idx_0 ) && ( ! muDoubleScalarIsNaN (
mfVal ) ) ) ) { localB -> g1ghek1a0h [ sampleID ] = mfVal ; } else { localB
-> g1ghek1a0h [ sampleID ] = x_idx_0 ; } } } } static real_T kl4vtyrhpq (
real_T x , const real_T params [ 3 ] ) { real_T y ; y = 0.0 ; if ( ( params [
0 ] != params [ 1 ] ) && ( params [ 0 ] < x ) && ( x < params [ 1 ] ) ) { y =
1.0 / ( params [ 1 ] - params [ 0 ] ) * ( x - params [ 0 ] ) ; } if ( (
params [ 1 ] != params [ 2 ] ) && ( params [ 1 ] < x ) && ( x < params [ 2 ]
) ) { y = 1.0 / ( params [ 2 ] - params [ 1 ] ) * ( params [ 2 ] - x ) ; } if
( x == params [ 1 ] ) { y = 1.0 ; } return y ; } void MdlInitialize ( void )
{ rtX . hifoxbwidi = rtP . Integrator2_IC ; rtX . eetrxcjywg = rtP .
Integrator3_IC ; rtDW . g0r3yew555 = ( rtInf ) ; rtDW . mvk1jj3hso = ( rtInf
) ; rtDW . jselmfphou = ( rtInf ) ; rtDW . j2p5llirqj = ( rtInf ) ; rtX .
e2t30tkdey = rtP . Integrator2_IC_owzkbh1yyf ; rtX . fqw22orvsi = rtP .
Integrator3_IC_loycuqzyet ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} rtDW . kz23uujhjm = 0 ; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid )
{ real_T duuqq24zfn [ 9 ] ; real_T nunrvlpmxs [ 9 ] ; static const real_T b [
3 ] = { - 6.25 , - 5.0 , 0.0 } ; static const real_T c [ 3 ] = { 0.0 , 5.0 ,
6.25 } ; static const real_T d [ 3 ] = { - 3.76 , - 3.0 , - 0.0 } ; static
const real_T e [ 3 ] = { 0.0 , 3.0 , 3.75 } ; static const int8_T f [ 18 ] =
{ 1 , 1 , 1 , 2 , 2 , 2 , 3 , 3 , 3 , 1 , 2 , 3 , 1 , 2 , 3 , 1 , 2 , 3 } ;
real_T inputMFCache [ 6 ] ; real_T tmp [ 3 ] ; real_T area ; real_T
m1klkkgwhs ; real_T x_idx_1 ; real_T * lastU ; int32_T ruleID ; rtB .
n1yshmema4 = rtX . hifoxbwidi ; rtB . jbnhhr3osn = rtX . eetrxcjywg ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . ohg00fvsgq = ( ssGetTaskTime ( rtS ,
1 ) >= rtP . Hc1_Time ) ; if ( rtDW . ohg00fvsgq == 1 ) { rtB . icdomxfukm =
rtP . Hc1_YFinal ; } else { rtB . icdomxfukm = rtP . Hc1_Y0 ; } } rtB .
cg2fphhwhd = rtB . icdomxfukm - rtB . jbnhhr3osn ; rtB . enhlzsphpy = rtP .
Gain_Gain * rtB . cg2fphhwhd ; if ( ( rtDW . g0r3yew555 >= ssGetT ( rtS ) )
&& ( rtDW . mvk1jj3hso >= ssGetT ( rtS ) ) ) { rtB . lor0dkgm1f = 0.0 ; }
else { m1klkkgwhs = rtDW . g0r3yew555 ; lastU = & rtDW . pzsvowouqu ; if (
rtDW . g0r3yew555 < rtDW . mvk1jj3hso ) { if ( rtDW . mvk1jj3hso < ssGetT (
rtS ) ) { m1klkkgwhs = rtDW . mvk1jj3hso ; lastU = & rtDW . km5toz3cpe ; } }
else { if ( rtDW . g0r3yew555 >= ssGetT ( rtS ) ) { m1klkkgwhs = rtDW .
mvk1jj3hso ; lastU = & rtDW . km5toz3cpe ; } } rtB . lor0dkgm1f = ( rtB .
cg2fphhwhd - * lastU ) / ( ssGetT ( rtS ) - m1klkkgwhs ) ; } rtB . ggor25n2lf
[ 0 ] = rtB . enhlzsphpy ; rtB . ggor25n2lf [ 1 ] = rtB . lor0dkgm1f ;
m1klkkgwhs = 0.0 ; inputMFCache [ 0 ] = kl4vtyrhpq ( rtB . ggor25n2lf [ 0 ] ,
b ) ; tmp [ 0 ] = - 5.0 ; tmp [ 1 ] = 0.0 ; tmp [ 2 ] = 5.0 ; inputMFCache [
1 ] = kl4vtyrhpq ( rtB . ggor25n2lf [ 0 ] , tmp ) ; inputMFCache [ 2 ] =
kl4vtyrhpq ( rtB . ggor25n2lf [ 0 ] , c ) ; inputMFCache [ 3 ] = kl4vtyrhpq (
rtB . ggor25n2lf [ 1 ] , d ) ; tmp [ 0 ] = - 3.0 ; tmp [ 1 ] = 0.0 ; tmp [ 2
] = 3.0 ; inputMFCache [ 4 ] = kl4vtyrhpq ( rtB . ggor25n2lf [ 1 ] , tmp ) ;
inputMFCache [ 5 ] = kl4vtyrhpq ( rtB . ggor25n2lf [ 1 ] , e ) ; for ( ruleID
= 0 ; ruleID < 9 ; ruleID ++ ) { nunrvlpmxs [ ruleID ] = 1.0 ; area =
nunrvlpmxs [ ruleID ] ; x_idx_1 = inputMFCache [ f [ ruleID ] - 1 ] ; if ( (
area > x_idx_1 ) || ( muDoubleScalarIsNaN ( area ) && ( ! muDoubleScalarIsNaN
( x_idx_1 ) ) ) ) { nunrvlpmxs [ ruleID ] = x_idx_1 ; } else { nunrvlpmxs [
ruleID ] = area ; } area = nunrvlpmxs [ ruleID ] ; x_idx_1 = inputMFCache [ f
[ ruleID + 9 ] + 2 ] ; if ( ( area > x_idx_1 ) || ( muDoubleScalarIsNaN (
area ) && ( ! muDoubleScalarIsNaN ( x_idx_1 ) ) ) ) { nunrvlpmxs [ ruleID ] =
x_idx_1 ; } else { nunrvlpmxs [ ruleID ] = area ; } m1klkkgwhs += nunrvlpmxs
[ ruleID ] ; } hnktmxv3qw ( rtB . enhlzsphpy , rtB . lor0dkgm1f , nunrvlpmxs
, rtP . OutputSamplePoints_Value , & rtB . pzksauq4ue ) ; if ( m1klkkgwhs ==
0.0 ) { rtB . oqfpznbzpy = 0.0 ; } else { m1klkkgwhs = 0.0 ; area = 0.0 ; for
( ruleID = 0 ; ruleID < 101 ; ruleID ++ ) { area += rtB . pzksauq4ue .
g1ghek1a0h [ ruleID ] ; } if ( area == 0.0 ) { rtB . oqfpznbzpy = ( rtP .
OutputSamplePoints_Value [ 0 ] + rtP . OutputSamplePoints_Value [ 100 ] ) /
2.0 ; } else { for ( ruleID = 0 ; ruleID < 101 ; ruleID ++ ) { m1klkkgwhs +=
rtP . OutputSamplePoints_Value [ ruleID ] * rtB . pzksauq4ue . g1ghek1a0h [
ruleID ] ; } rtB . oqfpznbzpy = 1.0 / area * m1klkkgwhs ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . lc44bvkzcz = ( ssGetTaskTime ( rtS ,
1 ) >= rtP . Cc1_Time ) ; if ( rtDW . lc44bvkzcz == 1 ) { rtB . j1eso3l5m5 =
rtP . Cc1_YFinal ; } else { rtB . j1eso3l5m5 = rtP . Cc1_Y0 ; } } rtB .
ltg31jcsgr = rtB . j1eso3l5m5 - rtB . n1yshmema4 ; if ( ( rtDW . jselmfphou
>= ssGetT ( rtS ) ) && ( rtDW . j2p5llirqj >= ssGetT ( rtS ) ) ) { rtB .
la5awzogi1 = 0.0 ; } else { m1klkkgwhs = rtDW . jselmfphou ; lastU = & rtDW .
ndht4wb3k4 ; if ( rtDW . jselmfphou < rtDW . j2p5llirqj ) { if ( rtDW .
j2p5llirqj < ssGetT ( rtS ) ) { m1klkkgwhs = rtDW . j2p5llirqj ; lastU = &
rtDW . bur1z3xnlu ; } } else { if ( rtDW . jselmfphou >= ssGetT ( rtS ) ) {
m1klkkgwhs = rtDW . j2p5llirqj ; lastU = & rtDW . bur1z3xnlu ; } } rtB .
la5awzogi1 = ( rtB . ltg31jcsgr - * lastU ) / ( ssGetT ( rtS ) - m1klkkgwhs )
; } rtB . iyaf0ud5zw = rtP . Gain1_Gain * rtB . ltg31jcsgr ; rtB . aqtbduj4dr
[ 0 ] = rtB . iyaf0ud5zw ; rtB . aqtbduj4dr [ 1 ] = rtB . la5awzogi1 ;
m1klkkgwhs = 0.0 ; inputMFCache [ 0 ] = kl4vtyrhpq ( rtB . aqtbduj4dr [ 0 ] ,
b ) ; tmp [ 0 ] = - 5.0 ; tmp [ 1 ] = 0.0 ; tmp [ 2 ] = 5.0 ; inputMFCache [
1 ] = kl4vtyrhpq ( rtB . aqtbduj4dr [ 0 ] , tmp ) ; inputMFCache [ 2 ] =
kl4vtyrhpq ( rtB . aqtbduj4dr [ 0 ] , c ) ; inputMFCache [ 3 ] = kl4vtyrhpq (
rtB . aqtbduj4dr [ 1 ] , d ) ; tmp [ 0 ] = - 3.0 ; tmp [ 1 ] = 0.0 ; tmp [ 2
] = 3.0 ; inputMFCache [ 4 ] = kl4vtyrhpq ( rtB . aqtbduj4dr [ 1 ] , tmp ) ;
inputMFCache [ 5 ] = kl4vtyrhpq ( rtB . aqtbduj4dr [ 1 ] , e ) ; for ( ruleID
= 0 ; ruleID < 9 ; ruleID ++ ) { duuqq24zfn [ ruleID ] = 1.0 ; area =
duuqq24zfn [ ruleID ] ; x_idx_1 = inputMFCache [ f [ ruleID ] - 1 ] ; if ( (
area > x_idx_1 ) || ( muDoubleScalarIsNaN ( area ) && ( ! muDoubleScalarIsNaN
( x_idx_1 ) ) ) ) { duuqq24zfn [ ruleID ] = x_idx_1 ; } else { duuqq24zfn [
ruleID ] = area ; } area = duuqq24zfn [ ruleID ] ; x_idx_1 = inputMFCache [ f
[ ruleID + 9 ] + 2 ] ; if ( ( area > x_idx_1 ) || ( muDoubleScalarIsNaN (
area ) && ( ! muDoubleScalarIsNaN ( x_idx_1 ) ) ) ) { duuqq24zfn [ ruleID ] =
x_idx_1 ; } else { duuqq24zfn [ ruleID ] = area ; } m1klkkgwhs += duuqq24zfn
[ ruleID ] ; } hnktmxv3qw ( rtB . iyaf0ud5zw , rtB . la5awzogi1 , duuqq24zfn
, rtP . OutputSamplePoints_Value_cprhcqdrno , & rtB . asovhvs0ss ) ; if (
m1klkkgwhs == 0.0 ) { rtB . e5c2r1pkkc = 0.0 ; } else { m1klkkgwhs = 0.0 ;
area = 0.0 ; for ( ruleID = 0 ; ruleID < 101 ; ruleID ++ ) { area += rtB .
asovhvs0ss . g1ghek1a0h [ ruleID ] ; } if ( area == 0.0 ) { rtB . e5c2r1pkkc
= ( rtP . OutputSamplePoints_Value_cprhcqdrno [ 0 ] + rtP .
OutputSamplePoints_Value_cprhcqdrno [ 100 ] ) / 2.0 ; } else { for ( ruleID =
0 ; ruleID < 101 ; ruleID ++ ) { m1klkkgwhs += rtP .
OutputSamplePoints_Value_cprhcqdrno [ ruleID ] * rtB . asovhvs0ss .
g1ghek1a0h [ ruleID ] ; } rtB . e5c2r1pkkc = 1.0 / area * m1klkkgwhs ; } }
rtB . hqxxewduyw = rtX . e2t30tkdey ; rtB . pmkpemkp1a = rtX . fqw22orvsi ;
rtB . li0wgxwtbz = rtP . cte_Value / rtB . jbnhhr3osn ; rtB . jrdna522lh =
rtP . Constant3_Value + rtB . pmkpemkp1a ; rtB . fyc5mvmtwx = rtB .
jrdna522lh / rtP . S_Value ; rtB . poygtn0tnt = rtB . hqxxewduyw + rtP .
Constant2_Value ; rtB . e05bzd5rkg = rtB . poygtn0tnt / rtP . S_Value ; rtB .
mos5nlnpbh = rtP . C1_Value - rtB . n1yshmema4 ; rtB . g5jdnmpzzw = rtB .
fyc5mvmtwx * rtB . mos5nlnpbh ; rtB . j05yyorecx = rtP . C2_Value - rtB .
n1yshmema4 ; rtB . jwh4mkaqvj = rtB . e05bzd5rkg * rtB . j05yyorecx ; rtB .
lzlflijh2a = rtB . g5jdnmpzzw + rtB . jwh4mkaqvj ; rtB . jpmkrtflva = rtB .
li0wgxwtbz * rtB . lzlflijh2a ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW
. kz23uujhjm != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
rtDW . kz23uujhjm = 0 ; } m1klkkgwhs = muDoubleScalarSqrt ( rtB . jbnhhr3osn
) ; } else { if ( rtB . jbnhhr3osn < 0.0 ) { m1klkkgwhs = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtB . jbnhhr3osn ) ) ; } else {
m1klkkgwhs = muDoubleScalarSqrt ( rtB . jbnhhr3osn ) ; } if ( rtB .
jbnhhr3osn < 0.0 ) { rtDW . kz23uujhjm = 1 ; } } rtB . lyjinuefxx = rtP .
k_Value * m1klkkgwhs ; rtB . oex4kic2xe = rtB . fyc5mvmtwx + rtB . e05bzd5rkg
; rtB . iqp3oylfk5 = rtB . oex4kic2xe - rtB . lyjinuefxx ; UNUSED_PARAMETER (
tid ) ; } void MdlOutputsTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlUpdate ( int_T tid ) { real_T * lastU ; if ( rtDW . g0r3yew555 == (
rtInf ) ) { rtDW . g0r3yew555 = ssGetT ( rtS ) ; lastU = & rtDW . pzsvowouqu
; } else if ( rtDW . mvk1jj3hso == ( rtInf ) ) { rtDW . mvk1jj3hso = ssGetT (
rtS ) ; lastU = & rtDW . km5toz3cpe ; } else if ( rtDW . g0r3yew555 < rtDW .
mvk1jj3hso ) { rtDW . g0r3yew555 = ssGetT ( rtS ) ; lastU = & rtDW .
pzsvowouqu ; } else { rtDW . mvk1jj3hso = ssGetT ( rtS ) ; lastU = & rtDW .
km5toz3cpe ; } * lastU = rtB . cg2fphhwhd ; if ( rtDW . jselmfphou == ( rtInf
) ) { rtDW . jselmfphou = ssGetT ( rtS ) ; lastU = & rtDW . ndht4wb3k4 ; }
else if ( rtDW . j2p5llirqj == ( rtInf ) ) { rtDW . j2p5llirqj = ssGetT ( rtS
) ; lastU = & rtDW . bur1z3xnlu ; } else if ( rtDW . jselmfphou < rtDW .
j2p5llirqj ) { rtDW . jselmfphou = ssGetT ( rtS ) ; lastU = & rtDW .
ndht4wb3k4 ; } else { rtDW . j2p5llirqj = ssGetT ( rtS ) ; lastU = & rtDW .
bur1z3xnlu ; } * lastU = rtB . ltg31jcsgr ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> hifoxbwidi = rtB . jpmkrtflva ; _rtXdot -> eetrxcjywg =
rtB . iqp3oylfk5 ; _rtXdot -> e2t30tkdey = rtB . e5c2r1pkkc ; _rtXdot ->
fqw22orvsi = rtB . oqfpznbzpy ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> jkmrnwb13p = ssGetT ( rtS )
- rtP . Hc1_Time ; _rtZCSV -> f10mdzoyfk = ssGetT ( rtS ) - rtP . Cc1_Time ;
} void MdlTerminate ( void ) { } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 4 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 56 ) ;
ssSetNumBlockIO ( rtS , 34 ) ; ssSetNumBlockParams ( rtS , 221 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 4213349719U ) ; ssSetChecksumVal ( rtS , 1 ,
1628794593U ) ; ssSetChecksumVal ( rtS , 2 , 3024637739U ) ; ssSetChecksumVal
( rtS , 3 , 349963155U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
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
( ( void * ) & rtB ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtB ) ,
"BlockIO" ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; }
{ real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void )
memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) &
rtDW ; ssSetRootDWork ( rtS , dwork ) ; ssSetWorkSizeInBytes ( rtS , sizeof (
rtDW ) , "DWork" ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 19 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } sbic_proj_InitializeDataMapInfo (
) ; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS )
; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"sbic_proj" ) ; ssSetPath ( rtS , "sbic_proj" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 200.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 }
; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "sbic_proj/Mixer1/Integrator2" ,
"sbic_proj/Mixer1/Integrator3" , "sbic_proj/Integrator2" ,
"sbic_proj/Integrator3" } ; static const char_T * rt_LoggedStateNames [ ] = {
"" , "" , "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 ,
0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { {
0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 4 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 4 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . hifoxbwidi ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . eetrxcjywg ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . e2t30tkdey ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . fqw22orvsi ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 4 ] ;
static real_T absTol [ 4 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 4 ] = { 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 4 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 4 ] ; static uint8_T zcAttributes [ 2 ] = {
( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 2 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
j1eso3l5m5 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
icdomxfukm ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 4 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 4.0 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 2 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS
, 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector (
rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 2 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 2 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 4213349719U ) ; ssSetChecksumVal ( rtS , 1 ,
1628794593U ) ; ssSetChecksumVal ( rtS , 2 , 3024637739U ) ; ssSetChecksumVal
( rtS , 3 , 349963155U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 9 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
