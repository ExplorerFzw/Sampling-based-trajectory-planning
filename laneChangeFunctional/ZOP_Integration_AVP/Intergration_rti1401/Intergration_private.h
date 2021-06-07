/*
 * Intergration_private.h
 *
 * Code generation for model "Intergration".
 *
 * Model version              : 1.139
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Dec 11 09:12:57 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Intergration_private_h_
#define RTW_HEADER_Intergration_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
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
extern can_tp1_canChannel* can_type1_channel_M1_C1;

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M1_NUMMSG               21

extern can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M3_C2;

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M3_NUMMSG               7

extern can_tp1_canMsg* can_type1_msg_M3[CANTP1_M3_NUMMSG];

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

/* Declaration of user indices (CAN_Type1_M1) */
#define CANTP1_M1_C1_TX_STD_0X165      0
#define TX_C1_STD_0X165                0
#undef TX_C1_STD_0X165
#define CANTP1_M1_C1_TX_STD_0X242      1
#define TX_C1_STD_0X242                1
#undef TX_C1_STD_0X242
#define CANTP1_M1_C1_TX_STD_0X244      2
#define TX_C1_STD_0X244                2
#undef TX_C1_STD_0X244
#define CANTP1_M1_C1_TX_STD_0X246      3
#define TX_C1_STD_0X246                3
#undef TX_C1_STD_0X246
#define CANTP1_M1_C1_RX_STD_0X194      4
#define RX_C1_STD_0X194                4
#undef RX_C1_STD_0X194
#define CANTP1_M1_C1_RX_STD_0XFB       5
#define RX_C1_STD_0XFB                 5
#undef RX_C1_STD_0XFB
#define CANTP1_M1_C1_RX_STD_0X1E1      6
#define RX_C1_STD_0X1E1                6
#undef RX_C1_STD_0X1E1
#define CANTP1_M1_C1_RX_STD_0X1E5      7
#define RX_C1_STD_0X1E5                7
#undef RX_C1_STD_0X1E5
#define CANTP1_M1_C1_RX_STD_0X185      8
#define RX_C1_STD_0X185                8
#undef RX_C1_STD_0X185
#define CANTP1_M1_C1_RX_STD_0X1E9      9
#define RX_C1_STD_0X1E9                9
#undef RX_C1_STD_0X1E9
#define CANTP1_M1_C1_RX_STD_0X23C      10
#define RX_C1_STD_0X23C                10
#undef RX_C1_STD_0X23C
#define CANTP1_M1_C1_RX_STD_0X24C      11
#define RX_C1_STD_0X24C                11
#undef RX_C1_STD_0X24C
#define CANTP1_M1_C1_RX_STD_0X24E      12
#define RX_C1_STD_0X24E                12
#undef RX_C1_STD_0X24E
#define CANTP1_M1_C1_RX_STD_0XAF       13
#define RX_C1_STD_0XAF                 13
#undef RX_C1_STD_0XAF
#define CANTP1_M1_C1_RX_STD_0XAC       14
#define RX_C1_STD_0XAC                 14
#undef RX_C1_STD_0XAC
#define CANTP1_M1_C1_RX_STD_0X1B6      15
#define RX_C1_STD_0X1B6                15
#undef RX_C1_STD_0X1B6
#define CANTP1_M1_C1_RX_STD_0X46A      16
#define RX_C1_STD_0X46A                16
#undef RX_C1_STD_0X46A
#define CANTP1_M1_C1_RX_STD_0X376      17
#define RX_C1_STD_0X376                17
#undef RX_C1_STD_0X376
#define CANTP1_M1_C1_RX_STD_0X1EC      18
#define RX_C1_STD_0X1EC                18
#undef RX_C1_STD_0X1EC
#define CANTP1_M1_C1_RX_STD_0X251      19
#define RX_C1_STD_0X251                19
#undef RX_C1_STD_0X251
#define CANTP1_M1_C1_RX_STD_0X19C      20
#define RX_C1_STD_0X19C                20
#undef RX_C1_STD_0X19C

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M1_C1_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M1_C1_MCRCLT_STD;

/* Declaration of user indices (CAN_Type1_M3) */
#define CANTP1_M3_C2_TX_STD_0X127      0
#define TX_C2_STD_0X127                0
#undef TX_C2_STD_0X127
#define CANTP1_M3_C2_TX_STD_0X123      1
#define TX_C2_STD_0X123                1
#undef TX_C2_STD_0X123
#define CANTP1_M3_C2_TX_STD_0X124      2
#define TX_C2_STD_0X124                2
#undef TX_C2_STD_0X124
#define CANTP1_M3_C2_TX_STD_0X126      3
#define TX_C2_STD_0X126                3
#undef TX_C2_STD_0X126
#define CANTP1_M3_C2_TX_STD_0X131      4
#define TX_C2_STD_0X131                4
#undef TX_C2_STD_0X131
#define CANTP1_M3_C2_TX_STD_0X132      5
#define TX_C2_STD_0X132                5
#undef TX_C2_STD_0X132
#define CANTP1_M3_C2_TX_STD_0XE1       6
#define TX_C2_STD_0XE1                 6
#undef TX_C2_STD_0XE1

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M3_C2_XTD;

/* predefine pointer to CAN message object for STD-Msg */
extern can_tp1_canMsg* CANTP1_RX_SPMSG_M3_C2_STD;

/* predefine needed identifiers for mcr-queue */
extern can_tp1_canMsg* CANTP1_RX_M3_C2_MCRCLT_STD;

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

#endif                                 /* RTW_HEADER_Intergration_private_h_ */
