/*
 * LM_TOS_private.h
 *
 * Code generation for model "LM_TOS".
 *
 * Model version              : 1.358
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Jan 20 09:24:00 2021
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LM_TOS_private_h_
#define RTW_HEADER_LM_TOS_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifdef __cplusplus

extern "C" {

#endif

  extern void LM_TOS_MODULE_Start_wrapper(void);
  extern void LM_TOS_MODULE_Outputs_wrapper(const real_T *timeStamp_In,
    const uint32_T *frameNum_In,
    const FUS_OUTOBJ_LIST_ST *objects_In,
    const VSI_VEHSTATE_ST *vehState_In,
    const FUS_LANE_OUTPUT_ST *fus_Lane_In,
    const FUS_ROAD_EDGE_OUTPUT_ST *fus_roadEdge_In,
    const ATS_PO_ST *acc_to_In,
    uint8_T *egoLaneId_output,
    LANES_BAS_INFO_ST_adt *lanes_bas_info_st_output,
    TARGETOBJECTS_ST_adp *tar_obj_st_output,
    SEGMENTS_ST_adp *segments_st_output,
    HWA_TARGETOBJECT_OUTPUT_ADAPTER_ST *hwa_tar_obj_st_output,
    uint8_T *hmi_obj_count_output,
    HMI_OUTPUT_ST_APT *hmi_info_st_output,
    NARROW_LANE_SUPPORT_OUTPUT_ST *nls_info_st_output,
    uint16_T *rolling_count_output,
    uint8_T *te_Flag_output);
  extern void LM_TOS_MODULE_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C2;

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M1_NUMMSG               34

extern can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

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

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

#endif                                 /* RTW_HEADER_LM_TOS_private_h_ */
