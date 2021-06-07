/*
 * Intergration_ZOP_private.h
 *
 * Code generation for model "Intergration_ZOP".
 *
 * Model version              : 1.385
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Mar 17 16:07:06 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Intergration_ZOP_private_h_
#define RTW_HEADER_Intergration_ZOP_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Intergration_ZOP.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void CheckSum_0x242_Start_wrapper(void);
  extern void CheckSum_0x242_Outputs_wrapper(const uint8_T *data,
    const uint8_T *length,
    uint8_T *u8_crc8);
  extern void CheckSum_0x242_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void CheckSum_Tx_Radar410_Start_wrapper(void);
  extern void CheckSum_Tx_Radar410_Outputs_wrapper(const uint8_T *data,
    const uint8_T *length,
    uint8_T *u8_crc8);
  extern void CheckSum_Tx_Radar410_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M3_C1;

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M3_C2;

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M3_NUMMSG               23

extern can_tp1_canMsg* can_type1_msg_M3[CANTP1_M3_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C2;

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C1;

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M1_NUMMSG               84

extern can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M2_C2;

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M2_NUMMSG               81

extern can_tp1_canMsg* can_type1_msg_M2[CANTP1_M2_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* Declaration of user indices (CAN_Type1_M3) */
#define CANTP1_M3_C1_TX_STD_0X127      0
#define TX_C1_STD_0X127                0
#undef TX_C1_STD_0X127
#define CANTP1_M3_C1_TX_STD_0X123      1
#define TX_C1_STD_0X123                1
#undef TX_C1_STD_0X123
#define CANTP1_M3_C1_TX_STD_0X124      2
#define TX_C1_STD_0X124                2
#undef TX_C1_STD_0X124
#define CANTP1_M3_C1_TX_STD_0X126      3
#define TX_C1_STD_0X126                3
#undef TX_C1_STD_0X126
#define CANTP1_M3_C1_TX_STD_0X131      4
#define TX_C1_STD_0X131                4
#undef TX_C1_STD_0X131
#define CANTP1_M3_C1_TX_STD_0X132      5
#define TX_C1_STD_0X132                5
#undef TX_C1_STD_0X132
#define CANTP1_M3_C1_TX_STD_0XE1       6
#define TX_C1_STD_0XE1                 6
#undef TX_C1_STD_0XE1
#define CANTP1_M3_C1_TX_STD_0X46A      7
#define TX_C1_STD_0X46A                7
#undef TX_C1_STD_0X46A
#define CANTP1_M3_C1_TX_STD_0X21C      8
#define TX_C1_STD_0X21C                8
#undef TX_C1_STD_0X21C
#define CANTP1_M3_C1_TX_STD_0X194      9
#define TX_C1_STD_0X194                9
#undef TX_C1_STD_0X194
#define CANTP1_M3_C1_TX_STD_0X1E5      10
#define TX_C1_STD_0X1E5                10
#undef TX_C1_STD_0X1E5
#define CANTP1_M3_C1_TX_STD_0X185      11
#define TX_C1_STD_0X185                11
#undef TX_C1_STD_0X185
#define CANTP1_M3_C1_TX_STD_0X1E9      12
#define TX_C1_STD_0X1E9                12
#undef TX_C1_STD_0X1E9
#define CANTP1_M3_C1_TX_STD_0X23C      13
#define TX_C1_STD_0X23C                13
#undef TX_C1_STD_0X23C
#define CANTP1_M3_C1_TX_STD_0XC9       14
#define TX_C1_STD_0XC9                 14
#undef TX_C1_STD_0XC9
#define CANTP1_M3_C1_RX_STD_0X60A      15
#define RX_C1_STD_0X60A                15
#undef RX_C1_STD_0X60A
#define CANTP1_M3_C1_RX_STD_0X60B      16
#define RX_C1_STD_0X60B                16
#undef RX_C1_STD_0X60B
#define CANTP1_M3_C1_RX_STD_0X61A      17
#define RX_C1_STD_0X61A                17
#undef RX_C1_STD_0X61A
#define CANTP1_M3_C1_RX_STD_0X61B      18
#define RX_C1_STD_0X61B                18
#undef RX_C1_STD_0X61B
#define CANTP1_M3_C2_RX_STD_0X63A      19
#define RX_C2_STD_0X63A                19
#undef RX_C2_STD_0X63A
#define CANTP1_M3_C2_RX_STD_0X63B      20
#define RX_C2_STD_0X63B                20
#undef RX_C2_STD_0X63B
#define CANTP1_M3_C2_RX_STD_0X62A      21
#define RX_C2_STD_0X62A                21
#undef RX_C2_STD_0X62A
#define CANTP1_M3_C2_RX_STD_0X62B      22
#define RX_C2_STD_0X62B                22
#undef RX_C2_STD_0X62B

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C1_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C1_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M3_C1_MCRCLT_STD;

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C2_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M3_C2_MCRCLT_STD;

/* Declaration of user indices (CAN_Type1_M1) */
#define CANTP1_M1_C2_TX_STD_0X300      0
#define TX_C2_STD_0X300                0
#undef TX_C2_STD_0X300
#define CANTP1_M1_C2_TX_STD_0X301      1
#define TX_C2_STD_0X301                1
#undef TX_C2_STD_0X301
#define CANTP1_M1_C2_TX_STD_0X30A      2
#define TX_C2_STD_0X30A                2
#undef TX_C2_STD_0X30A
#define CANTP1_M1_C2_TX_STD_0X30B      3
#define TX_C2_STD_0X30B                3
#undef TX_C2_STD_0X30B
#define CANTP1_M1_C2_TX_STD_0X30C      4
#define TX_C2_STD_0X30C                4
#undef TX_C2_STD_0X30C
#define CANTP1_M1_C2_TX_STD_0X30D      5
#define TX_C2_STD_0X30D                5
#undef TX_C2_STD_0X30D
#define CANTP1_M1_C2_TX_STD_0X30E      6
#define TX_C2_STD_0X30E                6
#undef TX_C2_STD_0X30E
#define CANTP1_M1_C2_TX_STD_0X30F      7
#define TX_C2_STD_0X30F                7
#undef TX_C2_STD_0X30F
#define CANTP1_M1_C2_TX_STD_0X310      8
#define TX_C2_STD_0X310                8
#undef TX_C2_STD_0X310
#define CANTP1_M1_C2_TX_STD_0X311      9
#define TX_C2_STD_0X311                9
#undef TX_C2_STD_0X311
#define CANTP1_M1_C2_TX_STD_0X312      10
#define TX_C2_STD_0X312                10
#undef TX_C2_STD_0X312
#define CANTP1_M1_C2_TX_STD_0X313      11
#define TX_C2_STD_0X313                11
#undef TX_C2_STD_0X313
#define CANTP1_M1_C2_TX_STD_0X302      12
#define TX_C2_STD_0X302                12
#undef TX_C2_STD_0X302
#define CANTP1_M1_C2_TX_STD_0X314      13
#define TX_C2_STD_0X314                13
#undef TX_C2_STD_0X314
#define CANTP1_M1_C2_TX_STD_0X315      14
#define TX_C2_STD_0X315                14
#undef TX_C2_STD_0X315
#define CANTP1_M1_C2_TX_STD_0X316      15
#define TX_C2_STD_0X316                15
#undef TX_C2_STD_0X316
#define CANTP1_M1_C2_TX_STD_0X317      16
#define TX_C2_STD_0X317                16
#undef TX_C2_STD_0X317
#define CANTP1_M1_C2_TX_STD_0X318      17
#define TX_C2_STD_0X318                17
#undef TX_C2_STD_0X318
#define CANTP1_M1_C2_TX_STD_0X319      18
#define TX_C2_STD_0X319                18
#undef TX_C2_STD_0X319
#define CANTP1_M1_C2_TX_STD_0X31A      19
#define TX_C2_STD_0X31A                19
#undef TX_C2_STD_0X31A
#define CANTP1_M1_C2_TX_STD_0X31B      20
#define TX_C2_STD_0X31B                20
#undef TX_C2_STD_0X31B
#define CANTP1_M1_C2_TX_STD_0X31C      21
#define TX_C2_STD_0X31C                21
#undef TX_C2_STD_0X31C
#define CANTP1_M1_C2_TX_STD_0X31D      22
#define TX_C2_STD_0X31D                22
#undef TX_C2_STD_0X31D
#define CANTP1_M1_C2_TX_STD_0X303      23
#define TX_C2_STD_0X303                23
#undef TX_C2_STD_0X303
#define CANTP1_M1_C2_TX_STD_0X31E      24
#define TX_C2_STD_0X31E                24
#undef TX_C2_STD_0X31E
#define CANTP1_M1_C2_TX_STD_0X31F      25
#define TX_C2_STD_0X31F                25
#undef TX_C2_STD_0X31F
#define CANTP1_M1_C2_TX_STD_0X304      26
#define TX_C2_STD_0X304                26
#undef TX_C2_STD_0X304
#define CANTP1_M1_C2_TX_STD_0X305      27
#define TX_C2_STD_0X305                27
#undef TX_C2_STD_0X305
#define CANTP1_M1_C2_TX_STD_0X306      28
#define TX_C2_STD_0X306                28
#undef TX_C2_STD_0X306
#define CANTP1_M1_C2_TX_STD_0X307      29
#define TX_C2_STD_0X307                29
#undef TX_C2_STD_0X307
#define CANTP1_M1_C2_TX_STD_0X308      30
#define TX_C2_STD_0X308                30
#undef TX_C2_STD_0X308
#define CANTP1_M1_C2_TX_STD_0X309      31
#define TX_C2_STD_0X309                31
#undef TX_C2_STD_0X309
#define CANTP1_M1_C2_TX_STD_0X23A      32
#define TX_C2_STD_0X23A                32
#undef TX_C2_STD_0X23A
#define CANTP1_M1_C2_TX_STD_0X23B      33
#define TX_C2_STD_0X23B                33
#undef TX_C2_STD_0X23B
#define CANTP1_M1_C2_TX_STD_0X235      34
#define TX_C2_STD_0X235                34
#undef TX_C2_STD_0X235
#define CANTP1_M1_C2_TX_STD_0X236      35
#define TX_C2_STD_0X236                35
#undef TX_C2_STD_0X236
#define CANTP1_M1_C2_TX_STD_0X255      36
#define TX_C2_STD_0X255                36
#undef TX_C2_STD_0X255
#define CANTP1_M1_C2_TX_STD_0X21C      37
#define TX_C2_STD_0X21C                37
#undef TX_C2_STD_0X21C
#define CANTP1_M1_C2_TX_STD_0X46A      38
#define TX_C2_STD_0X46A                38
#undef TX_C2_STD_0X46A
#define CANTP1_M1_C2_TX_STD_0X1E5      39
#define TX_C2_STD_0X1E5                39
#undef TX_C2_STD_0X1E5
#define CANTP1_M1_C2_TX_STD_0X194      40
#define TX_C2_STD_0X194                40
#undef TX_C2_STD_0X194
#define CANTP1_M1_C2_TX_STD_0X265      41
#define TX_C2_STD_0X265                41
#undef TX_C2_STD_0X265
#define CANTP1_M1_C2_TX_STD_0X266      42
#define TX_C2_STD_0X266                42
#undef TX_C2_STD_0X266
#define CANTP1_M1_C2_TX_STD_0X24C      43
#define TX_C2_STD_0X24C                43
#undef TX_C2_STD_0X24C
#define CANTP1_M1_C2_TX_STD_0X24E      44
#define TX_C2_STD_0X24E                44
#undef TX_C2_STD_0X24E
#define CANTP1_M1_C2_TX_STD_0X712      45
#define TX_C2_STD_0X712                45
#undef TX_C2_STD_0X712
#define CANTP1_M1_C2_TX_STD_0X713      46
#define TX_C2_STD_0X713                46
#undef TX_C2_STD_0X713
#define CANTP1_M1_C2_TX_STD_0X714      47
#define TX_C2_STD_0X714                47
#undef TX_C2_STD_0X714
#define CANTP1_M1_C2_RX_STD_0X250      48
#define RX_C2_STD_0X250                48
#undef RX_C2_STD_0X250
#define CANTP1_M1_C2_RX_STD_0X711      49
#define RX_C2_STD_0X711                49
#undef RX_C2_STD_0X711
#define CANTP1_M1_C2_RX_STD_0X710      50
#define RX_C2_STD_0X710                50
#undef RX_C2_STD_0X710
#define CANTP1_M1_C2_RX_STD_0X216      51
#define RX_C2_STD_0X216                51
#undef RX_C2_STD_0X216
#define CANTP1_M1_C2_RX_STD_0X215      52
#define RX_C2_STD_0X215                52
#undef RX_C2_STD_0X215
#define CANTP1_M1_C2_RX_STD_0X210      53
#define RX_C2_STD_0X210                53
#undef RX_C2_STD_0X210
#define CANTP1_M1_C2_RX_STD_0X21A      54
#define RX_C2_STD_0X21A                54
#undef RX_C2_STD_0X21A
#define CANTP1_M1_C2_RX_STD_0X230      55
#define RX_C2_STD_0X230                55
#undef RX_C2_STD_0X230
#define CANTP1_M1_C2_RX_STD_0X715      56
#define RX_C2_STD_0X715                56
#undef RX_C2_STD_0X715
#define CANTP1_M1_C2_RX_STD_0X260      57
#define RX_C2_STD_0X260                57
#undef RX_C2_STD_0X260
#define CANTP1_M1_C1_TX_STD_0X165      58
#define TX_C1_STD_0X165                58
#undef TX_C1_STD_0X165
#define CANTP1_M1_C1_TX_STD_0X242      59
#define TX_C1_STD_0X242                59
#undef TX_C1_STD_0X242
#define CANTP1_M1_C1_TX_STD_0X244      60
#define TX_C1_STD_0X244                60
#undef TX_C1_STD_0X244
#define CANTP1_M1_C1_TX_STD_0X246      61
#define TX_C1_STD_0X246                61
#undef TX_C1_STD_0X246
#define CANTP1_M1_C1_TX_STD_0X1FD      62
#define TX_C1_STD_0X1FD                62
#undef TX_C1_STD_0X1FD
#define CANTP1_M1_C1_TX_STD_0X167      63
#define TX_C1_STD_0X167                63
#undef TX_C1_STD_0X167
#define CANTP1_M1_C1_TX_STD_0X166      64
#define TX_C1_STD_0X166                64
#undef TX_C1_STD_0X166
#define CANTP1_M1_C1_RX_STD_0X194      65
#define RX_C1_STD_0X194                65
#undef RX_C1_STD_0X194
#define CANTP1_M1_C1_RX_STD_0XFB       66
#define RX_C1_STD_0XFB                 66
#undef RX_C1_STD_0XFB
#define CANTP1_M1_C1_RX_STD_0X1E1      67
#define RX_C1_STD_0X1E1                67
#undef RX_C1_STD_0X1E1
#define CANTP1_M1_C1_RX_STD_0X1E5      68
#define RX_C1_STD_0X1E5                68
#undef RX_C1_STD_0X1E5
#define CANTP1_M1_C1_RX_STD_0X185      69
#define RX_C1_STD_0X185                69
#undef RX_C1_STD_0X185
#define CANTP1_M1_C1_RX_STD_0X1E9      70
#define RX_C1_STD_0X1E9                70
#undef RX_C1_STD_0X1E9
#define CANTP1_M1_C1_RX_STD_0X23C      71
#define RX_C1_STD_0X23C                71
#undef RX_C1_STD_0X23C
#define CANTP1_M1_C1_RX_STD_0X24C      72
#define RX_C1_STD_0X24C                72
#undef RX_C1_STD_0X24C
#define CANTP1_M1_C1_RX_STD_0X24E      73
#define RX_C1_STD_0X24E                73
#undef RX_C1_STD_0X24E
#define CANTP1_M1_C1_RX_STD_0XAF       74
#define RX_C1_STD_0XAF                 74
#undef RX_C1_STD_0XAF
#define CANTP1_M1_C1_RX_STD_0XAC       75
#define RX_C1_STD_0XAC                 75
#undef RX_C1_STD_0XAC
#define CANTP1_M1_C1_RX_STD_0X1B6      76
#define RX_C1_STD_0X1B6                76
#undef RX_C1_STD_0X1B6
#define CANTP1_M1_C1_RX_STD_0X46A      77
#define RX_C1_STD_0X46A                77
#undef RX_C1_STD_0X46A
#define CANTP1_M1_C1_RX_STD_0X376      78
#define RX_C1_STD_0X376                78
#undef RX_C1_STD_0X376
#define CANTP1_M1_C1_RX_STD_0X1EC      79
#define RX_C1_STD_0X1EC                79
#undef RX_C1_STD_0X1EC
#define CANTP1_M1_C1_RX_STD_0X251      80
#define RX_C1_STD_0X251                80
#undef RX_C1_STD_0X251
#define CANTP1_M1_C1_RX_STD_0X19C      81
#define RX_C1_STD_0X19C                81
#undef RX_C1_STD_0X19C
#define CANTP1_M1_C1_RX_STD_0X21C      82
#define RX_C1_STD_0X21C                82
#undef RX_C1_STD_0X21C
#define CANTP1_M1_C1_RX_STD_0XC9       83
#define RX_C1_STD_0XC9                 83
#undef RX_C1_STD_0XC9

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C2_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M1_C2_MCRCLT_STD;

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C1_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M1_C1_MCRCLT_STD;

/* Declaration of user indices (CAN_Type1_M2) */
#define CANTP1_M2_C2_RX_STD_0X50       0
#define RX_C2_STD_0X50                 0
#undef RX_C2_STD_0X50
#define CANTP1_M2_C2_RX_STD_0X20       1
#define RX_C2_STD_0X20                 1
#undef RX_C2_STD_0X20
#define CANTP1_M2_C2_RX_STD_0X51       2
#define RX_C2_STD_0X51                 2
#undef RX_C2_STD_0X51
#define CANTP1_M2_C2_RX_STD_0X21       3
#define RX_C2_STD_0X21                 3
#undef RX_C2_STD_0X21
#define CANTP1_M2_C2_RX_STD_0X52       4
#define RX_C2_STD_0X52                 4
#undef RX_C2_STD_0X52
#define CANTP1_M2_C2_RX_STD_0X22       5
#define RX_C2_STD_0X22                 5
#undef RX_C2_STD_0X22
#define CANTP1_M2_C2_RX_STD_0X53       6
#define RX_C2_STD_0X53                 6
#undef RX_C2_STD_0X53
#define CANTP1_M2_C2_RX_STD_0X23       7
#define RX_C2_STD_0X23                 7
#undef RX_C2_STD_0X23
#define CANTP1_M2_C2_RX_STD_0X54       8
#define RX_C2_STD_0X54                 8
#undef RX_C2_STD_0X54
#define CANTP1_M2_C2_RX_STD_0X24       9
#define RX_C2_STD_0X24                 9
#undef RX_C2_STD_0X24
#define CANTP1_M2_C2_RX_STD_0X55       10
#define RX_C2_STD_0X55                 10
#undef RX_C2_STD_0X55
#define CANTP1_M2_C2_RX_STD_0X25       11
#define RX_C2_STD_0X25                 11
#undef RX_C2_STD_0X25
#define CANTP1_M2_C2_RX_STD_0X56       12
#define RX_C2_STD_0X56                 12
#undef RX_C2_STD_0X56
#define CANTP1_M2_C2_RX_STD_0X26       13
#define RX_C2_STD_0X26                 13
#undef RX_C2_STD_0X26
#define CANTP1_M2_C2_RX_STD_0X57       14
#define RX_C2_STD_0X57                 14
#undef RX_C2_STD_0X57
#define CANTP1_M2_C2_RX_STD_0X27       15
#define RX_C2_STD_0X27                 15
#undef RX_C2_STD_0X27
#define CANTP1_M2_C2_RX_STD_0X58       16
#define RX_C2_STD_0X58                 16
#undef RX_C2_STD_0X58
#define CANTP1_M2_C2_RX_STD_0X28       17
#define RX_C2_STD_0X28                 17
#undef RX_C2_STD_0X28
#define CANTP1_M2_C2_RX_STD_0X59       18
#define RX_C2_STD_0X59                 18
#undef RX_C2_STD_0X59
#define CANTP1_M2_C2_RX_STD_0X29       19
#define RX_C2_STD_0X29                 19
#undef RX_C2_STD_0X29
#define CANTP1_M2_C2_RX_STD_0X5A       20
#define RX_C2_STD_0X5A                 20
#undef RX_C2_STD_0X5A
#define CANTP1_M2_C2_RX_STD_0X2A       21
#define RX_C2_STD_0X2A                 21
#undef RX_C2_STD_0X2A
#define CANTP1_M2_C2_RX_STD_0X5B       22
#define RX_C2_STD_0X5B                 22
#undef RX_C2_STD_0X5B
#define CANTP1_M2_C2_RX_STD_0X2B       23
#define RX_C2_STD_0X2B                 23
#undef RX_C2_STD_0X2B
#define CANTP1_M2_C2_RX_STD_0X5C       24
#define RX_C2_STD_0X5C                 24
#undef RX_C2_STD_0X5C
#define CANTP1_M2_C2_RX_STD_0X2C       25
#define RX_C2_STD_0X2C                 25
#undef RX_C2_STD_0X2C
#define CANTP1_M2_C2_RX_STD_0X5D       26
#define RX_C2_STD_0X5D                 26
#undef RX_C2_STD_0X5D
#define CANTP1_M2_C2_RX_STD_0X2D       27
#define RX_C2_STD_0X2D                 27
#undef RX_C2_STD_0X2D
#define CANTP1_M2_C2_RX_STD_0X5E       28
#define RX_C2_STD_0X5E                 28
#undef RX_C2_STD_0X5E
#define CANTP1_M2_C2_RX_STD_0X2E       29
#define RX_C2_STD_0X2E                 29
#undef RX_C2_STD_0X2E
#define CANTP1_M2_C2_RX_STD_0X5F       30
#define RX_C2_STD_0X5F                 30
#undef RX_C2_STD_0X5F
#define CANTP1_M2_C2_RX_STD_0X2F       31
#define RX_C2_STD_0X2F                 31
#undef RX_C2_STD_0X2F
#define CANTP1_M2_C2_RX_STD_0X60       32
#define RX_C2_STD_0X60                 32
#undef RX_C2_STD_0X60
#define CANTP1_M2_C2_RX_STD_0X30       33
#define RX_C2_STD_0X30                 33
#undef RX_C2_STD_0X30
#define CANTP1_M2_C2_RX_STD_0X61       34
#define RX_C2_STD_0X61                 34
#undef RX_C2_STD_0X61
#define CANTP1_M2_C2_RX_STD_0X31       35
#define RX_C2_STD_0X31                 35
#undef RX_C2_STD_0X31
#define CANTP1_M2_C2_RX_STD_0X62       36
#define RX_C2_STD_0X62                 36
#undef RX_C2_STD_0X62
#define CANTP1_M2_C2_RX_STD_0X32       37
#define RX_C2_STD_0X32                 37
#undef RX_C2_STD_0X32
#define CANTP1_M2_C2_RX_STD_0X63       38
#define RX_C2_STD_0X63                 38
#undef RX_C2_STD_0X63
#define CANTP1_M2_C2_RX_STD_0X33       39
#define RX_C2_STD_0X33                 39
#undef RX_C2_STD_0X33
#define CANTP1_M2_C2_RX_STD_0X64       40
#define RX_C2_STD_0X64                 40
#undef RX_C2_STD_0X64
#define CANTP1_M2_C2_RX_STD_0X34       41
#define RX_C2_STD_0X34                 41
#undef RX_C2_STD_0X34
#define CANTP1_M2_C2_RX_STD_0X65       42
#define RX_C2_STD_0X65                 42
#undef RX_C2_STD_0X65
#define CANTP1_M2_C2_RX_STD_0X35       43
#define RX_C2_STD_0X35                 43
#undef RX_C2_STD_0X35
#define CANTP1_M2_C2_RX_STD_0X66       44
#define RX_C2_STD_0X66                 44
#undef RX_C2_STD_0X66
#define CANTP1_M2_C2_RX_STD_0X36       45
#define RX_C2_STD_0X36                 45
#undef RX_C2_STD_0X36
#define CANTP1_M2_C2_RX_STD_0X67       46
#define RX_C2_STD_0X67                 46
#undef RX_C2_STD_0X67
#define CANTP1_M2_C2_RX_STD_0X37       47
#define RX_C2_STD_0X37                 47
#undef RX_C2_STD_0X37
#define CANTP1_M2_C2_RX_STD_0X68       48
#define RX_C2_STD_0X68                 48
#undef RX_C2_STD_0X68
#define CANTP1_M2_C2_RX_STD_0X38       49
#define RX_C2_STD_0X38                 49
#undef RX_C2_STD_0X38
#define CANTP1_M2_C2_RX_STD_0X69       50
#define RX_C2_STD_0X69                 50
#undef RX_C2_STD_0X69
#define CANTP1_M2_C2_RX_STD_0X39       51
#define RX_C2_STD_0X39                 51
#undef RX_C2_STD_0X39
#define CANTP1_M2_C2_RX_STD_0X6A       52
#define RX_C2_STD_0X6A                 52
#undef RX_C2_STD_0X6A
#define CANTP1_M2_C2_RX_STD_0X3A       53
#define RX_C2_STD_0X3A                 53
#undef RX_C2_STD_0X3A
#define CANTP1_M2_C2_RX_STD_0X6B       54
#define RX_C2_STD_0X6B                 54
#undef RX_C2_STD_0X6B
#define CANTP1_M2_C2_RX_STD_0X3B       55
#define RX_C2_STD_0X3B                 55
#undef RX_C2_STD_0X3B
#define CANTP1_M2_C2_RX_STD_0X6C       56
#define RX_C2_STD_0X6C                 56
#undef RX_C2_STD_0X6C
#define CANTP1_M2_C2_RX_STD_0X3C       57
#define RX_C2_STD_0X3C                 57
#undef RX_C2_STD_0X3C
#define CANTP1_M2_C2_RX_STD_0X6D       58
#define RX_C2_STD_0X6D                 58
#undef RX_C2_STD_0X6D
#define CANTP1_M2_C2_RX_STD_0X3D       59
#define RX_C2_STD_0X3D                 59
#undef RX_C2_STD_0X3D
#define CANTP1_M2_C2_RX_STD_0X6E       60
#define RX_C2_STD_0X6E                 60
#undef RX_C2_STD_0X6E
#define CANTP1_M2_C2_RX_STD_0X3E       61
#define RX_C2_STD_0X3E                 61
#undef RX_C2_STD_0X3E
#define CANTP1_M2_C2_RX_STD_0X6F       62
#define RX_C2_STD_0X6F                 62
#undef RX_C2_STD_0X6F
#define CANTP1_M2_C2_RX_STD_0X3F       63
#define RX_C2_STD_0X3F                 63
#undef RX_C2_STD_0X3F
#define CANTP1_M2_C2_RX_STD_0X70       64
#define RX_C2_STD_0X70                 64
#undef RX_C2_STD_0X70
#define CANTP1_M2_C2_RX_STD_0X40       65
#define RX_C2_STD_0X40                 65
#undef RX_C2_STD_0X40
#define CANTP1_M2_C2_RX_STD_0X71       66
#define RX_C2_STD_0X71                 66
#undef RX_C2_STD_0X71
#define CANTP1_M2_C2_RX_STD_0X41       67
#define RX_C2_STD_0X41                 67
#undef RX_C2_STD_0X41
#define CANTP1_M2_C2_RX_STD_0X72       68
#define RX_C2_STD_0X72                 68
#undef RX_C2_STD_0X72
#define CANTP1_M2_C2_RX_STD_0X42       69
#define RX_C2_STD_0X42                 69
#undef RX_C2_STD_0X42
#define CANTP1_M2_C2_RX_STD_0X73       70
#define RX_C2_STD_0X73                 70
#undef RX_C2_STD_0X73
#define CANTP1_M2_C2_RX_STD_0X43       71
#define RX_C2_STD_0X43                 71
#undef RX_C2_STD_0X43
#define CANTP1_M2_C2_RX_STD_0X74       72
#define RX_C2_STD_0X74                 72
#undef RX_C2_STD_0X74
#define CANTP1_M2_C2_RX_STD_0X44       73
#define RX_C2_STD_0X44                 73
#undef RX_C2_STD_0X44
#define CANTP1_M2_C2_RX_STD_0X75       74
#define RX_C2_STD_0X75                 74
#undef RX_C2_STD_0X75
#define CANTP1_M2_C2_RX_STD_0X45       75
#define RX_C2_STD_0X45                 75
#undef RX_C2_STD_0X45
#define CANTP1_M2_C2_RX_STD_0X76       76
#define RX_C2_STD_0X76                 76
#undef RX_C2_STD_0X76
#define CANTP1_M2_C2_RX_STD_0X46       77
#define RX_C2_STD_0X46                 77
#undef RX_C2_STD_0X46
#define CANTP1_M2_C2_RX_STD_0X77       78
#define RX_C2_STD_0X77                 78
#undef RX_C2_STD_0X77
#define CANTP1_M2_C2_RX_STD_0X47       79
#define RX_C2_STD_0X47                 79
#undef RX_C2_STD_0X47
#define CANTP1_M2_C2_RX_STD_0X80       80
#define RX_C2_STD_0X80                 80
#undef RX_C2_STD_0X80

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C2_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M2_C2_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M2_C2_MCRCLT_STD;
extern void LKAReqToqHSC2_PV(SimStruct *rts);
extern void RTICANMM_MAIN_CAN(SimStruct *rts);
extern void RTICANMM_SETUP_Controller1(SimStruct *rts);
extern void Intergration__IfActionSubsystem(real32_T *rty_Out1,
  P_IfActionSubsystem_Intergrat_T *localP);
extern void Int_FunctionCallSubsystem1_Init(void);
extern void In_FunctionCallSubsystem1_Reset(void);
extern void Intergra_FunctionCallSubsystem1(void);
extern void Inte_FunctionCallSubsystem_Init(void);
extern void Int_FunctionCallSubsystem_Reset(void);
extern void Intergrat_FunctionCallSubsystem(void);
extern void I_FunctionCallSubsystem1_d_Init(void);
extern void FunctionCallSubsystem1_i_Reset(void);
extern void Interg_FunctionCallSubsystem1_b(void);
extern void In_FunctionCallSubsystem_l_Init(void);
extern void I_FunctionCallSubsystem_b_Reset(void);
extern void Intergr_FunctionCallSubsystem_a(void);
extern void I_FunctionCallSubsystem1_n_Init(void);
extern void FunctionCallSubsystem1_f_Reset(void);
extern void Interg_FunctionCallSubsystem1_o(void);
extern void In_FunctionCallSubsystem_f_Init(void);
extern void I_FunctionCallSubsystem_n_Reset(void);
extern void Intergr_FunctionCallSubsystem_g(void);
extern void I_FunctionCallSubsystem1_k_Init(void);
extern void FunctionCallSubsystem1_l_Reset(void);
extern void Inter_FunctionCallSubsystem1_bb(void);
extern void In_FunctionCallSubsystem_e_Init(void);
extern void I_FunctionCallSubsystem_d_Reset(void);
extern void Intergr_FunctionCallSubsystem_j(void);
extern void Int_FunctionCallSubsystem1_Term(void);
extern void Inte_FunctionCallSubsystem_Term(void);
extern void I_FunctionCallSubsystem1_i_Term(void);
extern void In_FunctionCallSubsystem_b_Term(void);
extern void I_FunctionCallSubsystem1_b_Term(void);
extern void In_FunctionCallSubsystem_j_Term(void);
extern void I_FunctionCallSubsystem1_l_Term(void);
extern void In_FunctionCallSubsystem_l_Term(void);

#endif                                 /* RTW_HEADER_Intergration_ZOP_private_h_ */
