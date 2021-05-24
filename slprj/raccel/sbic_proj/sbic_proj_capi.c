#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "sbic_proj_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "sbic_proj.h"
#include "sbic_proj_capi.h"
#include "sbic_proj_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"sbic_proj/Fuzzy Logic  Controller4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 5 , TARGET_STRING ( "sbic_proj/Fuzzy Logic  Controller6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"sbic_proj/Derivative2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3
, 0 , TARGET_STRING ( "sbic_proj/Derivative3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "sbic_proj/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"sbic_proj/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 ,
TARGET_STRING ( "sbic_proj/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 7 , 0 , TARGET_STRING ( "sbic_proj/Integrator3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"sbic_proj/Cc1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 ,
TARGET_STRING ( "sbic_proj/Hc1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 10 , 0 , TARGET_STRING ( "sbic_proj/Sum10" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING ( "sbic_proj/Sum11" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"sbic_proj/Sum6" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 ,
TARGET_STRING ( "sbic_proj/Sum7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 14 , 1 , TARGET_STRING (
"sbic_proj/Fuzzy Logic  Controller4/Defuzzify Outputs" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 15 , 3 , TARGET_STRING (
"sbic_proj/Fuzzy Logic  Controller4/Evaluate Rule Consequents" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 5 , TARGET_STRING (
"sbic_proj/Fuzzy Logic  Controller6/Defuzzify Outputs" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 17 , 7 , TARGET_STRING (
"sbic_proj/Fuzzy Logic  Controller6/Evaluate Rule Consequents" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"sbic_proj/Mixer1/Integrator2" ) , TARGET_STRING ( "C" ) , 0 , 0 , 0 , 0 , 0
} , { 19 , 0 , TARGET_STRING ( "sbic_proj/Mixer1/Integrator3" ) ,
TARGET_STRING ( "h" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"sbic_proj/Mixer1/Divide1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
21 , 0 , TARGET_STRING ( "sbic_proj/Mixer1/Divide2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING ( "sbic_proj/Mixer1/Divide3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"sbic_proj/Mixer1/Product2" ) , TARGET_STRING ( "C_dot" ) , 0 , 0 , 0 , 0 , 0
} , { 24 , 0 , TARGET_STRING ( "sbic_proj/Mixer1/Product3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"sbic_proj/Mixer1/Product4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 26 , 0 , TARGET_STRING ( "sbic_proj/Mixer1/Product5" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING ( "sbic_proj/Mixer1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"sbic_proj/Mixer1/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29
, 0 , TARGET_STRING ( "sbic_proj/Mixer1/Sum4" ) , TARGET_STRING ( "h_dot" ) ,
0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING ( "sbic_proj/Mixer1/Sum5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"sbic_proj/Mixer1/Sum6" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0
, 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 32 , TARGET_STRING (
"sbic_proj/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 33 ,
TARGET_STRING ( "sbic_proj/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 34 , TARGET_STRING ( "sbic_proj/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 35 , TARGET_STRING ( "sbic_proj/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING ( "sbic_proj/Integrator2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 37 , TARGET_STRING (
"sbic_proj/Integrator3" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0
} , { 38 , TARGET_STRING ( "sbic_proj/Cc1" ) , TARGET_STRING ( "Time" ) , 0 ,
0 , 0 } , { 39 , TARGET_STRING ( "sbic_proj/Cc1" ) , TARGET_STRING ( "Before"
) , 0 , 0 , 0 } , { 40 , TARGET_STRING ( "sbic_proj/Cc1" ) , TARGET_STRING (
"After" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING ( "sbic_proj/Hc1" ) ,
TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , { 42 , TARGET_STRING (
"sbic_proj/Hc1" ) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 43 ,
TARGET_STRING ( "sbic_proj/Hc1" ) , TARGET_STRING ( "After" ) , 0 , 0 , 0 } ,
{ 44 , TARGET_STRING (
"sbic_proj/Fuzzy Logic  Controller4/Output Sample Points" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 45 , TARGET_STRING (
"sbic_proj/Fuzzy Logic  Controller6/Output Sample Points" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 46 , TARGET_STRING ( "sbic_proj/Mixer1/C1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 47 , TARGET_STRING (
"sbic_proj/Mixer1/C2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 48 ,
TARGET_STRING ( "sbic_proj/Mixer1/S" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 49 , TARGET_STRING ( "sbic_proj/Mixer1/cte" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING ( "sbic_proj/Mixer1/k" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING (
"sbic_proj/Mixer1/Integrator2" ) , TARGET_STRING ( "InitialCondition" ) , 0 ,
0 , 0 } , { 52 , TARGET_STRING ( "sbic_proj/Mixer1/Integrator3" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0
, ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . oqfpznbzpy , & rtB . e5c2r1pkkc ,
& rtB . lor0dkgm1f , & rtB . la5awzogi1 , & rtB . enhlzsphpy , & rtB .
iyaf0ud5zw , & rtB . hqxxewduyw , & rtB . pmkpemkp1a , & rtB . j1eso3l5m5 , &
rtB . icdomxfukm , & rtB . poygtn0tnt , & rtB . jrdna522lh , & rtB .
cg2fphhwhd , & rtB . ltg31jcsgr , & rtB . oqfpznbzpy , & rtB . pzksauq4ue .
g1ghek1a0h [ 0 ] , & rtB . e5c2r1pkkc , & rtB . asovhvs0ss . g1ghek1a0h [ 0 ]
, & rtB . n1yshmema4 , & rtB . jbnhhr3osn , & rtB . li0wgxwtbz , & rtB .
fyc5mvmtwx , & rtB . e05bzd5rkg , & rtB . jpmkrtflva , & rtB . g5jdnmpzzw , &
rtB . lyjinuefxx , & rtB . jwh4mkaqvj , & rtB . mos5nlnpbh , & rtB .
oex4kic2xe , & rtB . iqp3oylfk5 , & rtB . j05yyorecx , & rtB . lzlflijh2a , &
rtP . Constant2_Value , & rtP . Constant3_Value , & rtP . Gain_Gain , & rtP .
Gain1_Gain , & rtP . Integrator2_IC_owzkbh1yyf , & rtP .
Integrator3_IC_loycuqzyet , & rtP . Cc1_Time , & rtP . Cc1_Y0 , & rtP .
Cc1_YFinal , & rtP . Hc1_Time , & rtP . Hc1_Y0 , & rtP . Hc1_YFinal , & rtP .
OutputSamplePoints_Value [ 0 ] , & rtP . OutputSamplePoints_Value_cprhcqdrno
[ 0 ] , & rtP . C1_Value , & rtP . C2_Value , & rtP . S_Value , & rtP .
cte_Value , & rtP . k_Value , & rtP . Integrator2_IC , & rtP . Integrator3_IC
, } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 101 , 1 , 1 , 101 } ; static const real_T rtcapiStoredFloats [ ] = {
0.0 , 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 32 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 21 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 4213349719U , 1628794593U , 3024637739U ,
349963155U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
sbic_proj_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void sbic_proj_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void sbic_proj_host_InitializeDataMapInfo ( sbic_proj_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
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
