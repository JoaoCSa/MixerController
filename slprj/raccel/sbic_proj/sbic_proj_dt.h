#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_gkZrYrvlubExXmxUNcFGZF" , 14 ,
48 } , { "struct_RCP1oovUDF2zF6C9vcJmtG" , 15 , 48 } , {
"struct_OTlcYhhT3UxB0PEhAC2ANE" , 16 , 152 } , {
"struct_FOoMlVQ4d9OgoZkrIa8vkE" , 17 , 248 } , {
"struct_qZn2gh8CaG9v9WdC8eRmw" , 18 , 1888 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( struct_gkZrYrvlubExXmxUNcFGZF ) , sizeof
( struct_RCP1oovUDF2zF6C9vcJmtG ) , sizeof ( struct_OTlcYhhT3UxB0PEhAC2ANE )
, sizeof ( struct_FOoMlVQ4d9OgoZkrIa8vkE ) , sizeof (
struct_qZn2gh8CaG9v9WdC8eRmw ) } ; static const char_T * rtDataTypeNames [ ]
= { "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "struct_gkZrYrvlubExXmxUNcFGZF" ,
"struct_RCP1oovUDF2zF6C9vcJmtG" , "struct_OTlcYhhT3UxB0PEhAC2ANE" ,
"struct_FOoMlVQ4d9OgoZkrIa8vkE" , "struct_qZn2gh8CaG9v9WdC8eRmw" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . n1yshmema4
) , 0 , 0 , 32 } , { ( char_T * ) ( & rtB . asovhvs0ss . mt1ayxk2j4 [ 0 ] ) ,
0 , 0 , 103 } , { ( char_T * ) ( & rtB . pzksauq4ue . mt1ayxk2j4 [ 0 ] ) , 0
, 0 , 103 } , { ( char_T * ) ( & rtDW . g0r3yew555 ) , 0 , 0 , 8 } , { (
char_T * ) ( & rtDW . abvjhywgpb . LoggedData ) , 11 , 0 , 4 } , { ( char_T *
) ( & rtDW . ohg00fvsgq ) , 10 , 0 , 2 } , { ( char_T * ) ( & rtDW .
kz23uujhjm ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable rtBTransTable =
{ 7U , rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { {
( char_T * ) ( & rtP . OutputSamplePoints_Value [ 0 ] ) , 0 , 0 , 221 } } ;
static DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
