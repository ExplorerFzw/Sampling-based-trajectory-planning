/*********************** dSPACE target specific file *************************

   Include file LM_TOS_rti.c:

   Definition of functions and variables for the system I/O and for
   the hardware and software interrupts used.

   RTI1401 7.12 (02-May-2019)
   Wed Jan 20 09:24:00 2021

   Copyright 2021, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#if !(defined(__RTI_SIMENGINE__) || defined(RTIMP_FRAME))
# error This file may be included only by the RTI(-MP) simulation engine.
#endif

/* Include the model header file. */
#include "LM_TOS.h"
#include "LM_TOS_private.h"

/* Defines for block output and parameter structure existence */
#define RTI_rtB_STRUCTURE_EXISTS       1
#define RTI_rtP_STRUCTURE_EXISTS       1
#define RTB_STRUCTURE_NAME             LM_TOS_B
#define RTP_STRUCTURE_NAME             LM_TOS_P

/* dSPACE generated includes for header files */
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <rtican_ds1401.h>
#ifndef dsRtmGetNumSampleTimes
# define dsRtmGetNumSampleTimes(rtm)   1
#endif

#ifndef dsRtmSetTaskTime
#define dsRtmSetTaskTime(rtm, sti, val) (((rtm)->Timing.taskTime0) = (val))
#endif

/****** Definitions: task functions for timer tasks *********************/

/* Timer Task 1. (Base rate). */
static void rti_TIMERA(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  baseRateService(task);

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* ===== Declarations of RTI blocks ======================================== */

/* dSPACE I/O Board DS1_RTICAN #1 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M1_C2;

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* dSPACE I/O Board RTICAN_GLOBAL #0 */

/* ===== Definition of interface functions for simulation engine =========== */
#if GRTINTERFACE == 1
#ifdef MULTITASKING
# define dsIsSampleHit(RTM,sti)        rtmGetSampleHitPtr(RTM)[sti]
#else
# define dsIsSampleHit(RTM,sti)        1
#endif

#else
#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

# define dsIsSampleHit(RTM,sti)        rtmStepTask(RTM, sti)
#endif

#undef __INLINE
#if defined(_INLINE)
# define __INLINE                      static inline
#else
# define __INLINE                      static
#endif

/*Define additional variables*/
static time_T dsTFinal = -1.0;

#define dsGetTFinal(rtm)               (dsTFinal)

static time_T dsStepSize = 0.005;

# define dsGetStepSize(rtm)            (dsStepSize)

static void rti_mdl_initialize_host_services(void)
{
  ts_timestamp_type ts = { 0, 0 };

  host_service(1, &ts);
  DsDaq_Init(0, 32, 1);
}

static void rti_mdl_initialize_io_boards(void)
{
  /* Registering of RTI products and modules at VCM */
  {
    vcm_module_register(VCM_MID_RTI1401, (void *) 0,
                        VCM_TXT_RTI1401, 7, 12, 0,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);

    {
      vcm_module_descriptor_type* msg_mod_ptr;
      msg_mod_ptr = vcm_module_register(VCM_MID_MATLAB, (void *) 0,
        VCM_TXT_MATLAB, 9, 5, 0,
        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_SIMULINK, msg_mod_ptr,
                          VCM_TXT_SIMULINK, 9, 2, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_RTW, msg_mod_ptr,
                          VCM_TXT_RTW, 9, 0, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW, msg_mod_ptr,
                          VCM_TXT_STATEFLOW, 9, 2, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW_CODER, msg_mod_ptr,
                          VCM_TXT_STATEFLOW_CODER, 9, 0, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
    }

    vcm_module_register(VCM_MID_RTICAN, (void *) 0,
                        VCM_TXT_RTICAN, 3, 4, 8,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
  }

  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[0].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M1_C2 = can_tp1_channel_init(can_tp1_address_table[0].
    module_addr, 1, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M1_C2,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M1_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M1_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_00" Id:768 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 768, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_01" Id:769 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 769, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_10" Id:778 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 778, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_11" Id:779 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 779, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_12" Id:780 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 780, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_13" Id:781 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 781, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_14" Id:782 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 2, 782, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_15" Id:783 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 783, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_16" Id:784 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 784, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_17" Id:785 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 785, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_18" Id:786 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 786, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_19" Id:787 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 787, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_02" Id:770 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 770, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_20" Id:788 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 3, 788, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_21" Id:789 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 789, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_22" Id:790 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 790, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_23" Id:791 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 791, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_24" Id:792 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 792, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_25" Id:793 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 793, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_26" Id:794 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 4, 794, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_27" Id:795 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 795, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_28" Id:796 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 796, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_29" Id:797 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 797, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_03" Id:771 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 771, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_30" Id:798 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 798, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_31" Id:799 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 5, 799, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_04" Id:772 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 772, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_05" Id:773 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 773, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_06" Id:774 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 774, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_07" Id:775 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 775, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_08" Id:776 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 776, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_09" Id:777 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 777, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_1" Id:570 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 570, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_2" Id:571 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 0, 571, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_00" Id:768 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1 = 0;        /* processed - flag */
    LM_TOS_B.SFunction1_o2 = 0;        /* timestamp */
    LM_TOS_B.SFunction1_o3 = 0;        /* deltatime */
    LM_TOS_B.SFunction1_o4 = 0;        /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_01" Id:769 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_o = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_d = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_c = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_n = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_10" Id:778 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_l = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_p = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_k = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_b = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_11" Id:779 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_k = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_i = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_d = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_a = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_12" Id:780 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_h = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_if = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_ko = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_c = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_13" Id:781 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_c = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_ik = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_b = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_o = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_14" Id:782 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_l1 = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_n = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_p = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_ay = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_15" Id:783 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_c3 = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_c = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_h = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_d = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_16" Id:784 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_j = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_b = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_g = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_m = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_17" Id:785 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_a = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_k = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_m = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_bn = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_18" Id:786 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_a5 = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_dd = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_e = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_k = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_19" Id:787 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_ld = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_nk = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_p0 = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_p = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_02" Id:770 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_b = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_h = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_bt = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_kn = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_20" Id:788 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_og = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_a = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_hs = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_dv = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_21" Id:789 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_f = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_n2 = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_dw = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_cd = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_22" Id:790 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_m = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_nj = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_cd = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_l = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_23" Id:791 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_d = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_ba = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_n = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_lv = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_24" Id:792 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_g = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_o = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_by = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_pw = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_25" Id:793 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_g4 = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_iv = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_j = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_h = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_26" Id:794 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_j5 = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_m = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_ce = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_lz = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_27" Id:795 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_jt = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_i1 = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_je = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_i = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_28" Id:796 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_kz = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_pe = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_cm = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_oy = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_29" Id:797 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_j3 = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_bz = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_hq = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_j = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_03" Id:771 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_fs = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_hk = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_kg = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_o3 = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_30" Id:798 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_ae = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_ah = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_jw = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_e = 0;      /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_31" Id:799 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_n = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_o2 = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_el = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_oa = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_04" Id:772 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_p = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_c0 = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_jt = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_bs = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_05" Id:773 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_mq = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_as = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_j3 = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_lo = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_06" Id:774 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_js = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_an = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_ek = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_oz = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_07" Id:775 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_ks = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_e = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_ei = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_ka = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_08" Id:776 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_l4 = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_iz = 0;     /* timestamp */
    LM_TOS_B.SFunction1_o3_nw = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_dp = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "Obj_Msg_09" Id:777 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_fp = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_l = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_o = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_ef = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_1" Id:570 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_i = 0;      /* processed - flag */
    LM_TOS_B.SFunction1_o2_f = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_b4 = 0;     /* deltatime */
    LM_TOS_B.SFunction1_o4_jp = 0;     /* delaytime */
  }

  /* dSPACE RTICAN TX Message Block: "ZOP_NarrowLine_2" Id:571 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B]->timestamp > 0.0) {
    LM_TOS_B.SFunction1_o1_df = 0;     /* processed - flag */
    LM_TOS_B.SFunction1_o2_g = 0;      /* timestamp */
    LM_TOS_B.SFunction1_o3_i = 0;      /* deltatime */
    LM_TOS_B.SFunction1_o4_kaj = 0;    /* delaytime */
  }

  /* dSPACE I/O Board RTICAN_GLOBAL #0 */
}

/* Function rti_mdl_slave_load() is empty */
#define rti_mdl_slave_load()

/* Function rti_mdl_rtk_initialize() is empty */
#define rti_mdl_rtk_initialize()

static void rti_mdl_initialize_io_units(void)
{
  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M1_C2, CAN_TP1_INT_DISABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(0);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[0].module_addr);

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X300])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X301])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X30F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X310])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X311])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X312])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X313])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X302])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X314])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X315])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X316])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X317])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X318])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X319])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][4] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X303])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][5] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X31F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X304])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X305])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X306])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X307])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X308])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X309])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X23B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }
}

/* Function rti_mdl_acknowledge_interrupts() is empty */
#define rti_mdl_acknowledge_interrupts()

/* Function rti_mdl_timetables_register() is empty */
#define rti_mdl_timetables_register()

static void rti_mdl_background(void)
{
  /* DsDaq background call */
  DsDaq_Background(0);

  /* dSPACE I/O Board DS1_RTICAN #1 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[0].module_addr, 0);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 1) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[0].module_addr);
  }
}

/* Function rti_mdl_sample_input() is empty */
#define rti_mdl_sample_input()

static void rti_mdl_daq_service()
{
  /* dSPACE Host Service */
  host_service(1, rtk_current_task_absolute_time_ptr_get());
  DsDaq_Service(0, 0, 1, (DsDaqSTimestampStruct *)
                rtk_current_task_absolute_time_ptr_get());
}

#undef __INLINE

/****** [EOF] ****************************************************************/
