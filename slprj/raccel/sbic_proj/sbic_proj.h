#ifndef RTW_HEADER_sbic_proj_h_
#define RTW_HEADER_sbic_proj_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef sbic_proj_COMMON_INCLUDES_
#define sbic_proj_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "sbic_proj_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME sbic_proj
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (34) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
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
typedef struct { real_T mt1ayxk2j4 [ 2 ] ; real_T g1ghek1a0h [ 101 ] ; }
ktbm03kdi1 ; typedef struct { real_T n1yshmema4 ; real_T jbnhhr3osn ; real_T
icdomxfukm ; real_T cg2fphhwhd ; real_T enhlzsphpy ; real_T lor0dkgm1f ;
real_T j1eso3l5m5 ; real_T ltg31jcsgr ; real_T la5awzogi1 ; real_T iyaf0ud5zw
; real_T hqxxewduyw ; real_T pmkpemkp1a ; real_T li0wgxwtbz ; real_T
jrdna522lh ; real_T fyc5mvmtwx ; real_T poygtn0tnt ; real_T e05bzd5rkg ;
real_T mos5nlnpbh ; real_T g5jdnmpzzw ; real_T j05yyorecx ; real_T jwh4mkaqvj
; real_T lzlflijh2a ; real_T jpmkrtflva ; real_T lyjinuefxx ; real_T
oex4kic2xe ; real_T iqp3oylfk5 ; real_T aqtbduj4dr [ 2 ] ; real_T e5c2r1pkkc
; real_T ggor25n2lf [ 2 ] ; real_T oqfpznbzpy ; ktbm03kdi1 asovhvs0ss ;
ktbm03kdi1 pzksauq4ue ; } B ; typedef struct { real_T g0r3yew555 ; real_T
pzsvowouqu ; real_T mvk1jj3hso ; real_T km5toz3cpe ; real_T jselmfphou ;
real_T ndht4wb3k4 ; real_T j2p5llirqj ; real_T bur1z3xnlu ; struct { void *
LoggedData ; } abvjhywgpb ; struct { void * LoggedData ; } nkejidkc2e ;
struct { void * LoggedData ; } m04kw0504z ; struct { void * LoggedData ; }
n0mu3dpwsr ; int_T ohg00fvsgq ; int_T lc44bvkzcz ; int8_T kz23uujhjm ; } DW ;
typedef struct { real_T hifoxbwidi ; real_T eetrxcjywg ; real_T e2t30tkdey ;
real_T fqw22orvsi ; } X ; typedef struct { real_T hifoxbwidi ; real_T
eetrxcjywg ; real_T e2t30tkdey ; real_T fqw22orvsi ; } XDot ; typedef struct
{ boolean_T hifoxbwidi ; boolean_T eetrxcjywg ; boolean_T e2t30tkdey ;
boolean_T fqw22orvsi ; } XDis ; typedef struct { real_T hifoxbwidi ; real_T
eetrxcjywg ; real_T e2t30tkdey ; real_T fqw22orvsi ; } CStateAbsTol ; typedef
struct { real_T hifoxbwidi ; real_T eetrxcjywg ; real_T e2t30tkdey ; real_T
fqw22orvsi ; } CXPtMin ; typedef struct { real_T hifoxbwidi ; real_T
eetrxcjywg ; real_T e2t30tkdey ; real_T fqw22orvsi ; } CXPtMax ; typedef
struct { real_T jkmrnwb13p ; real_T f10mdzoyfk ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
OutputSamplePoints_Value [ 101 ] ; real_T OutputSamplePoints_Value_cprhcqdrno
[ 101 ] ; real_T Integrator2_IC ; real_T Integrator3_IC ; real_T Hc1_Time ;
real_T Hc1_Y0 ; real_T Hc1_YFinal ; real_T Gain_Gain ; real_T Cc1_Time ;
real_T Cc1_Y0 ; real_T Cc1_YFinal ; real_T Gain1_Gain ; real_T
Integrator2_IC_owzkbh1yyf ; real_T Integrator3_IC_loycuqzyet ; real_T
Constant2_Value ; real_T Constant3_Value ; real_T C1_Value ; real_T C2_Value
; real_T S_Value ; real_T cte_Value ; real_T k_Value ; } ; extern const char
* RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
sbic_proj_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ; extern
const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern const
int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ; extern
const char * gblInportFileName ; extern const int_T gblNumRootInportBlks ;
extern const int_T gblNumModelInputs ; extern const int_T
gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ; extern
const int_T gblInportComplex [ ] ; extern const int_T gblInportInterpoFlag [
] ; extern const int_T gblInportContinuous [ ] ; extern const int_T
gblParameterTuningTid ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
