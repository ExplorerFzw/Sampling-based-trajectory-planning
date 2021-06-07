/*
 * Intergration.c
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

#include "Intergration_trc_ptr.h"
#include "Intergration.h"
#include "Intergration_private.h"
#include "look1_iflf_binlxpw.h"
#include "plook_u32f_lincka.h"

/* Block signals (default storage) */
B_Intergration_T Intergration_B;

/* Block states (default storage) */
DW_Intergration_T Intergration_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Intergration_T Intergration_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Intergration_T Intergration_Y;

/* Real-time model */
RT_MODEL_Intergration_T Intergration_M_;
RT_MODEL_Intergration_T *const Intergration_M = &Intergration_M_;

/* Model output function */
void Intergration_output(void)
{
  uint32_T bpIdx;
  real32_T tmp;
  real_T tmp_0;

  /* S-Function (rti_commonblock): '<S16>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP04" Id:404 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->processed) {
        Intergration_B.SFunction1_o5 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->processed;
        Intergration_B.SFunction1_o6 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->timestamp;
        Intergration_B.SFunction1_o7 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "TrShftLvrPos_h1HSC2" (32|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "TrShftLvrPosV_h1HSC2" (36|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "TrEstdGearHSC2" (56|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "TrEstdGearVHSC2" (60|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o5 = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion21' */
  Intergration_B.DataTypeConversion21 = (real32_T)Intergration_B.SFunction1_o1;

  /* DataTypeConversion: '<S6>/Data Type Conversion8' */
  Intergration_B.DataTypeConversion8_d1 = (Intergration_B.SFunction1_o2 != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion22' */
  Intergration_B.DataTypeConversion22 = (real32_T)Intergration_B.SFunction1_o3;

  /* DataTypeConversion: '<S6>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_fj = (Intergration_B.SFunction1_o4 != 0.0);

  /* BusCreator: '<S6>/Bus Creator' */
  Intergration_B.BusCreator_bu.TrShftLvrPos =
    Intergration_B.DataTypeConversion21;
  Intergration_B.BusCreator_bu.TrShftLvrPosV =
    Intergration_B.DataTypeConversion8_d1;
  Intergration_B.BusCreator_bu.TrEstdGear = Intergration_B.DataTypeConversion22;
  Intergration_B.BusCreator_bu.TrEstdGearV =
    Intergration_B.DataTypeConversion9_fj;

  /* S-Function (rti_commonblock): '<S17>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP27" Id:251 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->processed) {
        Intergration_B.SFunction1_o5_j = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->processed;
        Intergration_B.SFunction1_o6_f = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->timestamp;
        Intergration_B.SFunction1_o7_l = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "PtACCToqReqRespPVHSC2" (16|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o1_j = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "PtADASAlvRCHSC2" (20|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_a = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "AccelOvrdHSC2" (43|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_c = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "PtACCToqReqRespHSC2" (58|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o4_a = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o5_j = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion10' */
  Intergration_B.BusCreator1.AccelOvrd = (Intergration_B.SFunction1_o3_c != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion23' */
  Intergration_B.BusCreator1.PtACCToqReqResp = (real32_T)
    Intergration_B.SFunction1_o4_a;

  /* S-Function (rti_commonblock): '<S19>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FrP04" Id:481 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->processed) {
        Intergration_B.SFunction1_o12 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->processed;
        Intergration_B.SFunction1_o13 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->timestamp;
        Intergration_B.SFunction1_o14 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "CCSwStsAlvRC_h2HSC2" (32|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o1_m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsDistDecSwA_h2HSC2" (34|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o2_g = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsDistIncSwA_h2HSC2" (35|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_o = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsPV_h2HSC2" (40|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o4_b = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsSwDataIntgty_h2HSC2" (48|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_a = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsSpdDecSwA_h2HSC2" (50|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o6_c = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsSpdIncSwA_h2HSC2" (51|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o7_o = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsSetSwA_h2HSC2" (52|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o8 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsRsmSwA_h2HSC2" (53|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsOnSwA_h2HSC2" (54|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o10 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "CCSwStsCanclSwA_h2HSC2" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o12 = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  Intergration_B.BusCreator2_f.CCSwStsDistDecSwA =
    (Intergration_B.SFunction1_o2_g != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion1' */
  Intergration_B.BusCreator2_f.CCSwStsDistIncSwA =
    (Intergration_B.SFunction1_o3_o != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion2' */
  Intergration_B.BusCreator2_f.CCSwStsSpdDecSwA =
    (Intergration_B.SFunction1_o6_c != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion3' */
  Intergration_B.BusCreator2_f.CCSwStsSpdIncSwA =
    (Intergration_B.SFunction1_o7_o != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion4' */
  Intergration_B.BusCreator2_f.CCSwStsSetSwA = (Intergration_B.SFunction1_o8 !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion5' */
  Intergration_B.BusCreator2_f.CCSwStsRsmSwA = (Intergration_B.SFunction1_o9 !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion6' */
  Intergration_B.BusCreator2_f.CCSwStsOnSwA = (Intergration_B.SFunction1_o10 !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion7' */
  Intergration_B.BusCreator2_f.CCSwStsCanclSwA = (Intergration_B.SFunction1_o11
    != 0.0);

  /* S-Function (rti_commonblock): '<S23>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SAS_HSC2_FrP00" Id:485 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->processed) {
        Intergration_B.SFunction1_o11_g = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->processed;
        Intergration_B.SFunction1_o12_k = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->timestamp;
        Intergration_B.SFunction1_o13_l = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "StrgWhlAngSnsrChksmHSC2" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_g = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "StrgWhlAngExtdPVHSC2" (8|16, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
          Intergration_B.SFunction1_o2_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "StrgWhlAngGrdHSC2" (24|12, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x00000FFF;
          Intergration_B.SFunction1_o3_n = -2048 + ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "StrgWhlAngAlvRCHSC2" (36|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o4_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "StrgWhlAngHSC2" (40|16, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
          Intergration_B.SFunction1_o5_j5 = -2048 + ( 0.0625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "StrgWhlAngSnsrFltHSC2" (56|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o6_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "StrgWhlAngSnsrMultCapbHSC2" (57|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o7_i = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "StrgWhlAngSnsrInidHSC2" (58|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o8_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "StrgWhlAngSnsrCalStsHSC2" (61|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o9_j = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "StrgWhlAngVHSC2" (63|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o10_d = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o11_g = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion24' */
  Intergration_B.DataTypeConversion24 = (real32_T)Intergration_B.SFunction1_o3_n;

  /* DataTypeConversion: '<S6>/Data Type Conversion25' */
  Intergration_B.DataTypeConversion25 = (real32_T)
    Intergration_B.SFunction1_o5_j5;

  /* DataTypeConversion: '<S6>/Data Type Conversion11' */
  Intergration_B.DataTypeConversion11_nq = (Intergration_B.SFunction1_o6_h !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion12' */
  Intergration_B.DataTypeConversion12_c5 = (Intergration_B.SFunction1_o7_i !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion13' */
  Intergration_B.DataTypeConversion13_o5 = (Intergration_B.SFunction1_o8_h !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion26' */
  Intergration_B.DataTypeConversion26 = (real32_T)Intergration_B.SFunction1_o9_j;

  /* DataTypeConversion: '<S6>/Data Type Conversion14' */
  Intergration_B.DataTypeConversion14_c4 = (Intergration_B.SFunction1_o10_d !=
    0.0);

  /* BusCreator: '<S6>/Bus Creator3' */
  Intergration_B.BusCreator3.StrgWhlAngGrd = Intergration_B.DataTypeConversion24;
  Intergration_B.BusCreator3.StrgWhlAng = Intergration_B.DataTypeConversion25;
  Intergration_B.BusCreator3.StrgWhlAngSnsrFlt =
    Intergration_B.DataTypeConversion11_nq;
  Intergration_B.BusCreator3.StrgWhlAngSnsrMultCapb =
    Intergration_B.DataTypeConversion12_c5;
  Intergration_B.BusCreator3.StrgWhlAngSnsrInid =
    Intergration_B.DataTypeConversion13_o5;
  Intergration_B.BusCreator3.StrgWhlAngSnsrCalSts =
    Intergration_B.DataTypeConversion26;
  Intergration_B.BusCreator3.StrgWhlAngV =
    Intergration_B.DataTypeConversion14_c4;

  /* S-Function (rti_commonblock): '<S24>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP02" Id:389 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->processed) {
        Intergration_B.SFunction1_o5_o = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->processed;
        Intergration_B.SFunction1_o6_i = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->timestamp;
        Intergration_B.SFunction1_o7_e = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "VSELatAccHSC2" (0|12, standard signal, signed int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[2];
          CAN_Sgn.SignedSgn &= 0x00000FFF;
          if (CAN_Sgn.SignedSgn >> 11) {
            CAN_Sgn.SignedSgn |= 0xFFFFF000;
          }

          Intergration_B.SFunction1_o1_k = 0.015625 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "VSELongtAccHSC2" (16|10, standard signal, signed int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.SignedSgn &= 0x000003FF;
          if (CAN_Sgn.SignedSgn >> 9) {
            CAN_Sgn.SignedSgn |= 0xFFFFFC00;
          }

          Intergration_B.SFunction1_o2_k = 0.03 * ( ((real_T) CAN_Sgn.SignedSgn)
            );

          /* ...... "VSELongtAccVHSC2" (26|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "VSELatAccVHSC2" (27|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_h = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o5_o = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion27' */
  Intergration_B.DataTypeConversion27 = (real32_T)Intergration_B.SFunction1_o1_k;

  /* DataTypeConversion: '<S6>/Data Type Conversion28' */
  Intergration_B.DataTypeConversion28 = (real32_T)Intergration_B.SFunction1_o2_k;

  /* DataTypeConversion: '<S6>/Data Type Conversion15' */
  Intergration_B.DataTypeConversion15_a = (Intergration_B.SFunction1_o3_p != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion16' */
  Intergration_B.DataTypeConversion16_go = (Intergration_B.SFunction1_o4_h !=
    0.0);

  /* BusCreator: '<S6>/Bus Creator4' */
  Intergration_B.BusCreator4.VSELatAcc = Intergration_B.DataTypeConversion27;
  Intergration_B.BusCreator4.VSELongtAcc = Intergration_B.DataTypeConversion28;
  Intergration_B.BusCreator4.VSELongtAccV =
    Intergration_B.DataTypeConversion15_a;
  Intergration_B.BusCreator4.VSELatAccV = Intergration_B.DataTypeConversion16_go;

  /* S-Function (rti_commonblock): '<S25>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP05" Id:489 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->processed) {
        Intergration_B.SFunction1_o5_ag = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->processed;
        Intergration_B.SFunction1_o6_g = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->timestamp;
        Intergration_B.SFunction1_o7_b = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "VehDynYawRateHSC2" (16|12, standard signal, signed int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.SignedSgn &= 0x00000FFF;
          if (CAN_Sgn.SignedSgn >> 11) {
            CAN_Sgn.SignedSgn |= 0xFFFFF000;
          }

          Intergration_B.SFunction1_o1_i = 0.0625 * ( ((real_T)
            CAN_Sgn.SignedSgn) );

          /* ...... "VehDynYawRateVHSC2" (28|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o2_b = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EnDragToqRducnAHSC2" (33|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_l = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ABSAHSC2" (38|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_pj = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o5_ag = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion29' */
  Intergration_B.DataTypeConversion29 = (real32_T)Intergration_B.SFunction1_o1_i;

  /* DataTypeConversion: '<S6>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_nn = (Intergration_B.SFunction1_o2_b !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion18' */
  Intergration_B.BusCreator5.EnDragToqRducnA = (Intergration_B.SFunction1_o3_l
    != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion19' */
  Intergration_B.BusCreator5.ABSA = (Intergration_B.SFunction1_o4_pj != 0.0);

  /* BusCreator: '<S6>/Bus Creator5' */
  Intergration_B.BusCreator5.VehDynYawRate = Intergration_B.DataTypeConversion29;
  Intergration_B.BusCreator5.VehDynYawRateV =
    Intergration_B.DataTypeConversion17_nn;

  /* S-Function (rti_commonblock): '<S26>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP19" Id:572 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->processed) {
        Intergration_B.SFunction1_o5_i = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->processed;
        Intergration_B.SFunction1_o6_m = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->timestamp;
        Intergration_B.SFunction1_o7_g = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "VehSpdAvgAlvRCHSC2" (28|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o1_ke = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "VehSpdAvgHSC2" (32|15, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x00007FFF;
          Intergration_B.SFunction1_o2_d = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "VehSpdAvgVHSC2" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_lf = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "VehSpdAvgPVHSC2" (48|16, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
          Intergration_B.SFunction1_o4_pl = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o5_i = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion30' */
  Intergration_B.DataTypeConversion30 = (real32_T)Intergration_B.SFunction1_o2_d;

  /* DataTypeConversion: '<S6>/Data Type Conversion20' */
  Intergration_B.DataTypeConversion20 = (Intergration_B.SFunction1_o3_lf != 0.0);

  /* BusCreator: '<S6>/Bus Creator6' */
  Intergration_B.BusCreator6.VehSpdAvg = Intergration_B.DataTypeConversion30;
  Intergration_B.BusCreator6.VehSpdAvgV = Intergration_B.DataTypeConversion20;

  /* S-Function (rti_commonblock): '<S27>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP22" Id:588 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->processed) {
        Intergration_B.SFunction1_o14_c = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->processed;
        Intergration_B.SFunction1_o15 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->timestamp;
        Intergration_B.SFunction1_o16 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "WhlGndVelDrvnChksm_RadarHSC2" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_b = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "WhlGndVelLDrvn_RadarHSC2" (8|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o2_i = 0.03125 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "WhlGndVelRDrvn_RadarHSC2" (24|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o3_cp = 0.03125 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "BrkPdlDrvrAppdPrs_RadarHSC2" (40|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o4_l = 75 * ( ((real_T) CAN_Sgn.UnsignedSgn)
            );

          /* ...... "WhlGndVelDrvnRC_RadarHSC2" (48|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o5_n = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "BrkPdlDrvrAppdPrsAlvRC_RadarHSC2" (52|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o6_a = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "LDrvnWhlRotlDircnHSC2" (54|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o7_n = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "RDrvnWhlRotlDircnHSC2" (57|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o8_c = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "WhlGndVelLDrvnV_RadarHSC2" (59|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_f = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "WhlGndVelRDrvnV_RadarHSC2" (60|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o10_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "WhlBrkPrsStsHSC2" (61|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_b = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "BrkDiscTemStsHSC2" (62|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o12_l = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "BrkPdlDrvrAppdPrsV_RadarHSC2" (63|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o13_j = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o14_c = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion31' */
  Intergration_B.BusCreator7.WhlGndVelLDrvn_Radar = (real32_T)
    Intergration_B.SFunction1_o2_i;

  /* DataTypeConversion: '<S6>/Data Type Conversion32' */
  Intergration_B.BusCreator7.WhlGndVelRDrvn_Radar = (real32_T)
    Intergration_B.SFunction1_o3_cp;

  /* DataTypeConversion: '<S6>/Data Type Conversion33' */
  Intergration_B.BusCreator7.BrkPdlDrvrAppdPrs_Radar = (real32_T)
    Intergration_B.SFunction1_o4_l;

  /* DataTypeConversion: '<S6>/Data Type Conversion34' */
  Intergration_B.BusCreator7.LDrvnWhlRotlDircn = (real32_T)
    Intergration_B.SFunction1_o7_n;

  /* DataTypeConversion: '<S6>/Data Type Conversion35' */
  Intergration_B.BusCreator7.RDrvnWhlRotlDircn = (real32_T)
    Intergration_B.SFunction1_o8_c;

  /* DataTypeConversion: '<S6>/Data Type Conversion36' */
  Intergration_B.BusCreator7.WhlGndVelLDrvnV_Radar =
    (Intergration_B.SFunction1_o9_f != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion37' */
  Intergration_B.BusCreator7.WhlGndVelRDrvnV_Radar =
    (Intergration_B.SFunction1_o10_p != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion38' */
  Intergration_B.BusCreator7.WhlBrkPrsSts = (Intergration_B.SFunction1_o11_b !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion39' */
  Intergration_B.BusCreator7.BrkDiscTemSts = (Intergration_B.SFunction1_o12_l !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion40' */
  Intergration_B.BusCreator7.BrkPdlDrvrAppdPrsV_Radar =
    (Intergration_B.SFunction1_o13_j != 0.0);

  /* S-Function (rti_commonblock): '<S28>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP23" Id:590 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->processed) {
        Intergration_B.SFunction1_o13_i = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->processed;
        Intergration_B.SFunction1_o14_a = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->timestamp;
        Intergration_B.SFunction1_o15_o = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "WhlGndVelNonDrvnChksm_RadarHSC2" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_d = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "WhlGndVelLNonDrvn_RadarHSC2" (8|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o2_l = 0.03125 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "WhlGndVelRNonDrvn_RadarHSC2" (24|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o3_f = 0.03125 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "WhlGndVelLNonDrvnV_RadarHSC2" (38|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "WhlGndVelRNonDrvnV_RadarHSC2" (39|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o5_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "LNonDrvnWhlRotlDircn_RadarHSC2" (40|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o6_j = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "TCSOpngMd_RadarHSC2" (42|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_k = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "TCSOpngSts_RadarHSC2" (45|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o8_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "RNonDrvnWhlRotlDircn_RadarHSC2" (48|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o9_g = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "VSEMd_RadarHSC2" (50|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o10_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "VSESts_RadarHSC2" (53|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o11_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "WhlGndVelNonDrvnRC_RadarHSC2" (60|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o12_i = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_i = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion41' */
  Intergration_B.BusCreator8.WhlGndVelLNonDrvn_Radar = (real32_T)
    Intergration_B.SFunction1_o2_l;

  /* DataTypeConversion: '<S6>/Data Type Conversion42' */
  Intergration_B.BusCreator8.WhlGndVelRNonDrvn_Radar = (real32_T)
    Intergration_B.SFunction1_o3_f;

  /* DataTypeConversion: '<S6>/Data Type Conversion43' */
  Intergration_B.BusCreator8.WhlGndVelLNonDrvnV_Radar =
    (Intergration_B.SFunction1_o4_m != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion44' */
  Intergration_B.BusCreator8.WhlGndVelRNonDrvnV_Radar =
    (Intergration_B.SFunction1_o5_p != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion45' */
  Intergration_B.BusCreator8.LNonDrvnWhlRotlDircn_Radar = (real32_T)
    Intergration_B.SFunction1_o6_j;

  /* DataTypeConversion: '<S6>/Data Type Conversion46' */
  Intergration_B.BusCreator8.TCSOpngMd_Radar = (real32_T)
    Intergration_B.SFunction1_o7_k;

  /* DataTypeConversion: '<S6>/Data Type Conversion47' */
  Intergration_B.BusCreator8.TCSOpngSts_Radar = (real32_T)
    Intergration_B.SFunction1_o8_p;

  /* DataTypeConversion: '<S6>/Data Type Conversion48' */
  Intergration_B.BusCreator8.RNonDrvnWhlRotlDircn_Radar = (real32_T)
    Intergration_B.SFunction1_o9_g;

  /* DataTypeConversion: '<S6>/Data Type Conversion49' */
  Intergration_B.BusCreator8.VSEMd_Radar = (real32_T)
    Intergration_B.SFunction1_o10_h;

  /* DataTypeConversion: '<S6>/Data Type Conversion50' */
  Intergration_B.BusCreator8.VSESts_Radar = (real32_T)
    Intergration_B.SFunction1_o11_h;

  /* S-Function (rti_commonblock): '<S20>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP00" Id:175 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->processed) {
        Intergration_B.SFunction1_o9_je = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->processed;
        Intergration_B.SFunction1_o10_o = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->timestamp;
        Intergration_B.SFunction1_o11_f = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "EPTAccelActuPosPVHSC2" (8|9, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn &= 0x000001FF;
          Intergration_B.SFunction1_o1_n = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTAccelActuPosVHSC2" (19|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o2_ln = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "HCU_FrP00_RollingCounterHSC2" (20|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o3_pb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTBrkPdlDscrtInptStsHSC2" (39|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_bm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTBrkPdlDscrtInptStsVHSC2" (40|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o5_f = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTStCmdOn_h1HSC2" (41|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o6_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTBrkPdlDscrtInptStsPVHSC2" (42|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o7_m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTAccelActuPosHSC2" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o8_o = 0.392157 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_je = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion51' */
  Intergration_B.DataTypeConversion51 = (Intergration_B.SFunction1_o2_ln != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion52' */
  Intergration_B.DataTypeConversion52 = (Intergration_B.SFunction1_o4_bm != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion53' */
  Intergration_B.DataTypeConversion53 = (Intergration_B.SFunction1_o5_f != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion54' */
  Intergration_B.BusCreator10.EPTStCmdOn = (Intergration_B.SFunction1_o6_e !=
    0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion55' */
  Intergration_B.DataTypeConversion55 = (real32_T)Intergration_B.SFunction1_o8_o;

  /* BusCreator: '<S6>/Bus Creator10' */
  Intergration_B.BusCreator10.EPTAccelActuPosV =
    Intergration_B.DataTypeConversion51;
  Intergration_B.BusCreator10.EPTBrkPdlDscrtInptSts =
    Intergration_B.DataTypeConversion52;
  Intergration_B.BusCreator10.EPTBrkPdlDscrtInptStsV =
    Intergration_B.DataTypeConversion53;
  Intergration_B.BusCreator10.EPTAccelActuPos =
    Intergration_B.DataTypeConversion55;

  /* S-Function (rti_commonblock): '<S21>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP08" Id:172 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->processed) {
        Intergration_B.SFunction1_o7_p = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->processed;
        Intergration_B.SFunction1_o8_g = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->timestamp;
        Intergration_B.SFunction1_o9_j0 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "EPTTrInptShaftToqChksmHSC2" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_nn = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTTrInptShaftMaxAvlblToqHSC2" (32|12, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x00000FFF;
          Intergration_B.SFunction1_o2_l3 = -848 + ( 0.5 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "EPTTrInptShaftToqAlvRlngCtrHSC2" (44|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o3_ou = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTTrInptShaftMinAvlblToqHSC2" (48|12, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x00000FFF;
          Intergration_B.SFunction1_o4_pf = -848 + ( 0.5 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "EPTTrInptShaftMaxAvlblToqVHSC2" (60|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o5_m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTTrInptShaftMinAvlblToqVHSC2" (61|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o6_gt = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o7_p = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion56' */
  Intergration_B.DataTypeConversion56 = (real32_T)
    Intergration_B.SFunction1_o2_l3;

  /* DataTypeConversion: '<S6>/Data Type Conversion57' */
  Intergration_B.DataTypeConversion57 = (real32_T)
    Intergration_B.SFunction1_o4_pf;

  /* DataTypeConversion: '<S6>/Data Type Conversion58' */
  Intergration_B.DataTypeConversion58 = (Intergration_B.SFunction1_o5_m != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion59' */
  Intergration_B.DataTypeConversion59 = (Intergration_B.SFunction1_o6_gt != 0.0);

  /* BusCreator: '<S6>/Bus Creator11' */
  Intergration_B.BusCreator11.EPTTrInptShaftMaxAvlblToq =
    Intergration_B.DataTypeConversion56;
  Intergration_B.BusCreator11.EPTTrInptShaftMinAvlblToq =
    Intergration_B.DataTypeConversion57;
  Intergration_B.BusCreator11.EPTTrInptShaftMaxAvlblToqV =
    Intergration_B.DataTypeConversion58;
  Intergration_B.BusCreator11.EPTTrInptShaftMinAvlblToqV =
    Intergration_B.DataTypeConversion59;

  /* S-Function (rti_commonblock): '<S13>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "EHBS_HSC2_FrP00" Id:438 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->processed) {
        Intergration_B.SFunction1_o5_b = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->processed;
        Intergration_B.SFunction1_o6_k = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->timestamp;
        Intergration_B.SFunction1_o7_c = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "BrkPdlAppdChksmHSC2" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_dw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "BrkPdlAppdRCHSC2" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_c = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "BrkPdlAppdVHSC2" (48|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o3_nx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "BrkPdlAppdHSC2" (50|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_j = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o5_b = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion60' */
  Intergration_B.DataTypeConversion60 = (real32_T)
    Intergration_B.SFunction1_o3_nx;

  /* DataTypeConversion: '<S6>/Data Type Conversion61' */
  Intergration_B.DataTypeConversion61 = (Intergration_B.SFunction1_o4_j != 0.0);

  /* BusCreator: '<S6>/Bus Creator12' */
  Intergration_B.BusCreator12.BrkPdlAppdV = Intergration_B.DataTypeConversion60;
  Intergration_B.BusCreator12.BrkPdlAppd = Intergration_B.DataTypeConversion61;

  /* S-Function (rti_commonblock): '<S15>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_BCM_FrP04" Id:1130 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->processed) {
        Intergration_B.SFunction1_o21 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->processed;
        Intergration_B.SFunction1_o22 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->timestamp;
        Intergration_B.SFunction1_o23 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "VehSideLghtStsHSC2" (0|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o1_o = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "RDircnIndLghtFHSC2" (8|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o2_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "KeyDetIndxHSC2" (9|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o3_cs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FrtWiperParkPosAHSC2" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_mz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FrtWshrPumpAHSC2" (15|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o5_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "RLDoorOpenStsHSC2" (16|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o6_l = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FrtPsngDoorOpenStsHSC2" (18|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o7_ef = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "DspMeasSysHSC2" (20|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o8_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "BntOpenStsHSC2" (22|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o9_ja = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "RrFogLghtOnHSC2" (48|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o10_c = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "RDircnIOHSC2" (49|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_a = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "LDircnIndLghtFHSC2" (50|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o12_n = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "LDircnIOHSC2" (51|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o13_n = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "DipdBeamLghtOnHSC2" (53|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o14_j = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FrtFogLghtOnHSC2" (54|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o15_j = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "MainBeamLghtOnHSC2" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o16_g = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "DrvrDoorOpenStsHSC2" (56|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o17 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "DircnIndLampSwStsHSC2" (58|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o18 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "RRDoorOpenStsHSC2" (60|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o19 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "LdspcOpenStsHSC2" (62|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o20 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o21 = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion62' */
  Intergration_B.BusCreator13.DircnIndLampSwSts = (real32_T)
    Intergration_B.SFunction1_o18;

  /* S-Function (rti_commonblock): '<S18>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FICM_FrP02" Id:886 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->processed) {
        Intergration_B.SFunction1_o3_pi = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->processed;
        Intergration_B.SFunction1_o4_n = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->timestamp;
        Intergration_B.SFunction1_o5_en = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "RstrFctryDeftsReqHSC2" (0|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o1_op = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "LDWLKASwReqHSC2" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o2_lx = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o3_pi = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion63' */
  Intergration_B.BusCreator14.LDWLKASwReq = (real32_T)
    Intergration_B.SFunction1_o2_lx;

  /* S-Function (rti_commonblock): '<S14>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "EPS_HSC2_FrP03" Id:492 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->processed) {
        Intergration_B.SFunction1_o8_ct = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->processed;
        Intergration_B.SFunction1_o9_c = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->timestamp;
        Intergration_B.SFunction1_o10_cc = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "ChLKACtrlStsHSC2" (12|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o1_k1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "DrvrStrgDlvrdToqVHSC2" (15|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o2_bx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "DrvrStrgDlvrdToqHSC2" (16|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o3_b = -10.24 + ( 0.01 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "ChLKARespToqPVHSC2" (32|15, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x00007FFF;
          Intergration_B.SFunction1_o4_as = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChLKARespToqHSC2" (48|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o5_g = -10.24 + ( 0.01 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "ChLKARespToqVHSC2" (59|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o6_b = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChLKAAlvRCHSC2" (60|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o7_h = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o8_ct = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion64' */
  Intergration_B.BusCreator15.ChLKACtrlSts = (real32_T)
    Intergration_B.SFunction1_o1_k1;

  /* DataTypeConversion: '<S6>/Data Type Conversion65' */
  Intergration_B.DataTypeConversion65 = (Intergration_B.SFunction1_o2_bx != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion66' */
  Intergration_B.DataTypeConversion66 = (real32_T)Intergration_B.SFunction1_o3_b;

  /* DataTypeConversion: '<S6>/Data Type Conversion67' */
  Intergration_B.DataTypeConversion67 = (real32_T)Intergration_B.SFunction1_o5_g;

  /* DataTypeConversion: '<S6>/Data Type Conversion68' */
  Intergration_B.DataTypeConversion68 = (Intergration_B.SFunction1_o6_b != 0.0);

  /* BusCreator: '<S6>/Bus Creator15' */
  Intergration_B.BusCreator15.DrvrStrgDlvrdToqV =
    Intergration_B.DataTypeConversion65;
  Intergration_B.BusCreator15.DrvrStrgDlvrdToq =
    Intergration_B.DataTypeConversion66;
  Intergration_B.BusCreator15.ChLKARespToq = Intergration_B.DataTypeConversion67;
  Intergration_B.BusCreator15.ChLKARespToqV =
    Intergration_B.DataTypeConversion68;

  /* S-Function (rti_commonblock): '<S29>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP24" Id:593 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->processed) {
        Intergration_B.SFunction1_o11_j = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->processed;
        Intergration_B.SFunction1_o12_d = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->timestamp;
        Intergration_B.SFunction1_o13_d = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "ChACCAEBChksm_RadarHSC2" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_c = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "VehTrgtLongtAccHSC2" (32|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o2_pz = -7 + ( 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "ChACCAEBAlvRlngCtr_RadarHSC2" (41|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o3_py = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChAEBDclReqRespHSC2" (45|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o4_mp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChACCAEBBrkJerkReqRespHSC2" (48|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o5_k = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChAEBPrflReqRespHSC2" (51|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o6_ho = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChACCReqFlrStsHSC2" (54|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o7_pm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChAEBHydBrkAstReqRespHSC2" (56|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o8_eg = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "ChACCAccReqRespHSC2" (59|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o9_k = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "VehSdslStsHSC2" (62|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o10_p1 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o11_j = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion69' */
  Intergration_B.BusCreator16.VehTrgtLongtAcc = (real32_T)
    Intergration_B.SFunction1_o2_pz;

  /* DataTypeConversion: '<S6>/Data Type Conversion70' */
  Intergration_B.BusCreator16.ChAEBDclReqResp = (real32_T)
    Intergration_B.SFunction1_o4_mp;

  /* DataTypeConversion: '<S6>/Data Type Conversion71' */
  Intergration_B.BusCreator16.ChACCAEBBrkJerkReqResp = (real32_T)
    Intergration_B.SFunction1_o5_k;

  /* DataTypeConversion: '<S6>/Data Type Conversion72' */
  Intergration_B.BusCreator16.ChAEBPrflReqResp = (real32_T)
    Intergration_B.SFunction1_o6_ho;

  /* DataTypeConversion: '<S6>/Data Type Conversion73' */
  Intergration_B.BusCreator16.ChACCReqFlrSts = (real32_T)
    Intergration_B.SFunction1_o7_pm;

  /* DataTypeConversion: '<S6>/Data Type Conversion74' */
  Intergration_B.BusCreator16.ChAEBHydBrkAstReqResp = (real32_T)
    Intergration_B.SFunction1_o8_eg;

  /* DataTypeConversion: '<S6>/Data Type Conversion75' */
  Intergration_B.BusCreator16.ChACCAccReqResp = (real32_T)
    Intergration_B.SFunction1_o9_k;

  /* DataTypeConversion: '<S6>/Data Type Conversion76' */
  Intergration_B.BusCreator16.VehSdslSts = (real32_T)
    Intergration_B.SFunction1_o10_p1;

  /* S-Function (rti_commonblock): '<S22>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP13" Id:412 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]);

    /* Convert timestamp */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->processed) {
      can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->timestamp > 0.0) {
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->processed) {
        Intergration_B.SFunction1_o6_jq = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->processed;
        Intergration_B.SFunction1_o7_ia = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->timestamp;
        Intergration_B.SFunction1_o8_cv = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->deltatime;
        CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "VCUNRCDAlvRCHSC2" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o1_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTTrInptShaftSpdHSC2" (16|16, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
          Intergration_B.SFunction1_o2_n = -32767 + ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "EPTTrInptShaftToqHSC2" (32|12, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x00000FFF;
          Intergration_B.SFunction1_o3_i = -848 + ( 0.5 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "EPTTrInptShaftSpdVHSC2" (61|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_pm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "EPTTrInptShaftToqVHSC2" (62|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o5_l = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o6_jq = 0.0;
    }
  }

  /* DataTypeConversion: '<S6>/Data Type Conversion77' */
  Intergration_B.DataTypeConversion77 = (real32_T)Intergration_B.SFunction1_o2_n;

  /* DataTypeConversion: '<S6>/Data Type Conversion78' */
  Intergration_B.DataTypeConversion78 = (real32_T)Intergration_B.SFunction1_o3_i;

  /* DataTypeConversion: '<S6>/Data Type Conversion79' */
  Intergration_B.DataTypeConversion79 = (Intergration_B.SFunction1_o4_pm != 0.0);

  /* DataTypeConversion: '<S6>/Data Type Conversion80' */
  Intergration_B.DataTypeConversion80 = (Intergration_B.SFunction1_o5_l != 0.0);

  /* BusCreator: '<S6>/Bus Creator17' */
  Intergration_B.BusCreator17.EPTTrInptShaftSpd =
    Intergration_B.DataTypeConversion77;
  Intergration_B.BusCreator17.EPTTrInptShaftToq =
    Intergration_B.DataTypeConversion78;
  Intergration_B.BusCreator17.EPTTrInptShaftSpdV =
    Intergration_B.DataTypeConversion79;
  Intergration_B.BusCreator17.EPTTrInptShaftToqV =
    Intergration_B.DataTypeConversion80;

  /* BusCreator: '<S6>/Bus Creator9' */
  Intergration_B.COM_VehBus_st.x194 = Intergration_B.BusCreator_bu;
  Intergration_B.COM_VehBus_st.xFB = Intergration_B.BusCreator1;
  Intergration_B.COM_VehBus_st.x1E1 = Intergration_B.BusCreator2_f;
  Intergration_B.COM_VehBus_st.x1E5 = Intergration_B.BusCreator3;
  Intergration_B.COM_VehBus_st.x185 = Intergration_B.BusCreator4;
  Intergration_B.COM_VehBus_st.x1E9 = Intergration_B.BusCreator5;
  Intergration_B.COM_VehBus_st.x23C = Intergration_B.BusCreator6;
  Intergration_B.COM_VehBus_st.x24C = Intergration_B.BusCreator7;
  Intergration_B.COM_VehBus_st.x24E = Intergration_B.BusCreator8;
  Intergration_B.COM_VehBus_st.xAF = Intergration_B.BusCreator10;
  Intergration_B.COM_VehBus_st.xAC = Intergration_B.BusCreator11;
  Intergration_B.COM_VehBus_st.x1B6 = Intergration_B.BusCreator12;
  Intergration_B.COM_VehBus_st.x46A = Intergration_B.BusCreator13;
  Intergration_B.COM_VehBus_st.x376 = Intergration_B.BusCreator14;
  Intergration_B.COM_VehBus_st.x1EC = Intergration_B.BusCreator15;
  Intergration_B.COM_VehBus_st.x251 = Intergration_B.BusCreator16;
  Intergration_B.COM_VehBus_st.x19C = Intergration_B.BusCreator17;

  /* S-Function (rti_commonblock): '<S113>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part1of2" Id:80 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->processed) {
        Intergration_B.SFunction1_o13_p = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->processed;
        Intergration_B.SFunction1_o14_l = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->timestamp;
        Intergration_B.SFunction1_o15_g = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_00_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_kh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_00_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_hl = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_00_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_a = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_00_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_i = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_00_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_ay = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_00_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_cg = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_00_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_hm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_00_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_pb = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_00_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_kc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_00_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_j = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_00_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_00_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_kj = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_p = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S114>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part2of2" Id:32 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->processed) {
        Intergration_B.SFunction1_o9_p = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->processed;
        Intergration_B.SFunction1_o10_k = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->timestamp;
        Intergration_B.SFunction1_o11_n = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_00_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_dt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_00_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_h2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_00_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_00_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_je = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_00_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_d = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_00_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_jj = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_00_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_gq = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_00_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_p1 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_p = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S115>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part1of2" Id:81 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->processed) {
        Intergration_B.SFunction1_o13_jt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->processed;
        Intergration_B.SFunction1_o14_k = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->timestamp;
        Intergration_B.SFunction1_o15_op = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_01_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_l = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_01_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_pt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_01_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_hf = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_01_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_o = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_01_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_jy = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_01_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_m5 = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_01_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_hy = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_01_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_d = 0.1 * ( ((real_T) CAN_Sgn.UnsignedSgn)
            );

          /* ...... "FRS_P1_01_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_01_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_n = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_01_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_ng = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_01_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_o = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_jt = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S116>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part2of2" Id:33 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->processed) {
        Intergration_B.SFunction1_o9_g3 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->processed;
        Intergration_B.SFunction1_o10_g = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->timestamp;
        Intergration_B.SFunction1_o11_ac = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_01_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_om = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_01_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_a0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_01_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_bj = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_01_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_e = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_01_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_iw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_01_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_j0 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_01_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_bb = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_01_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_dj = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_g3 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S117>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part1of2" Id:82 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->processed) {
        Intergration_B.SFunction1_o13_pq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->processed;
        Intergration_B.SFunction1_o14_p = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->timestamp;
        Intergration_B.SFunction1_o15_b = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_02_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ix = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_02_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_cc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_02_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_cd = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_02_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_d = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_02_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_m1 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_02_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_kw = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_02_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_gs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_02_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_ec = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_02_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_n = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_02_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_a = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_02_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_p = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_02_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_g = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_pq = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S118>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part2of2" Id:34 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->processed) {
        Intergration_B.SFunction1_o9_b = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->processed;
        Intergration_B.SFunction1_o10_i = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->timestamp;
        Intergration_B.SFunction1_o11_e4 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_02_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_m1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_02_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_dm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_02_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_pt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_02_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_c = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_02_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_ni = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_02_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_ms = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_02_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_f = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_02_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_hs = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_b = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S119>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part1of2" Id:83 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->processed) {
        Intergration_B.SFunction1_o13_o = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->processed;
        Intergration_B.SFunction1_o14_n = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->timestamp;
        Intergration_B.SFunction1_o15_n = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_03_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_03_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_o = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_03_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ao = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_03_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_bl = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_03_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_pd = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_03_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_n = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_03_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_mn = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_03_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_hr = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_03_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_e4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_03_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_l = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_03_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_fc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_03_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_gr = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_o = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S120>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part2of2" Id:35 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->processed) {
        Intergration_B.SFunction1_o9_o = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->processed;
        Intergration_B.SFunction1_o10_f = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->timestamp;
        Intergration_B.SFunction1_o11_d = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_03_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_nu = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_03_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_dv = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_03_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_j = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_03_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_g = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_03_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_nf = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_03_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_ld = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_03_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_le = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_03_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_m = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_o = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S121>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part1of2" Id:84 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->processed) {
        Intergration_B.SFunction1_o13_g = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->processed;
        Intergration_B.SFunction1_o14_pg = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->timestamp;
        Intergration_B.SFunction1_o15_np = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_04_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_04_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_bl = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_04_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_cw = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_04_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_pj5 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_04_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_c = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_04_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_lu = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_04_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_kj = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_04_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_dx = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_04_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ow = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_04_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_jh = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_04_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_o = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_04_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_m = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_g = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S122>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part2of2" Id:36 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->processed) {
        Intergration_B.SFunction1_o9_a = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->processed;
        Intergration_B.SFunction1_o10_fa = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->timestamp;
        Intergration_B.SFunction1_o11_i = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_04_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_g4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_04_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_o3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_04_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_px = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_04_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_gy = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_04_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_c0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_04_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_ix = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_04_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ew = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_04_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_k = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_a = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S123>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part1of2" Id:85 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->processed) {
        Intergration_B.SFunction1_o13_gz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->processed;
        Intergration_B.SFunction1_o14_g = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->timestamp;
        Intergration_B.SFunction1_o15_a = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_05_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ip = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_05_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ot = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_05_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_k = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_05_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_ck = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_05_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_ix = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_05_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_d = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_05_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_i5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_05_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_kw = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_05_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ae = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_05_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_b = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_05_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_em = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_05_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_c = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_gz = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S124>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part2of2" Id:37 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->processed) {
        Intergration_B.SFunction1_o9_m = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->processed;
        Intergration_B.SFunction1_o10_g0 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->timestamp;
        Intergration_B.SFunction1_o11_nk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_05_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_mm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_05_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_f = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_05_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_05_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_m0 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_05_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_bi = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_05_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_m4 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_05_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_pr = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_05_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_a = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_m = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S125>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part1of2" Id:86 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->processed) {
        Intergration_B.SFunction1_o13_ic = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->processed;
        Intergration_B.SFunction1_o14_kk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->timestamp;
        Intergration_B.SFunction1_o15_bw = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_06_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_06_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_f3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_06_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_pf = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_06_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_ds = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_06_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_g2 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_06_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_ae = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_06_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_mm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_06_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_al = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_06_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_b5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_06_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_l0 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_06_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_fn = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_06_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_e = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_ic = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S126>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part2of2" Id:38 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->processed) {
        Intergration_B.SFunction1_o9_l = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->processed;
        Intergration_B.SFunction1_o10_n0 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->timestamp;
        Intergration_B.SFunction1_o11_az = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_06_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_g1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_06_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ot0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_06_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_06_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_mt = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_06_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_n1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_06_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_br = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_06_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_pu = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_06_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_ok = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_l = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S127>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part1of2" Id:87 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->processed) {
        Intergration_B.SFunction1_o13_h = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->processed;
        Intergration_B.SFunction1_o14_b = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->timestamp;
        Intergration_B.SFunction1_o15_o2 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_07_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_f = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_07_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ld = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_07_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_cv = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_07_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_iz = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_07_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_oi = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_07_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_p = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_07_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_ga = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_07_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_b = 0.1 * ( ((real_T) CAN_Sgn.UnsignedSgn)
            );

          /* ...... "FRS_P1_07_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_bq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_07_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_ol = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_07_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_ef = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_07_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_ig = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_h = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S128>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part2of2" Id:39 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->processed) {
        Intergration_B.SFunction1_o9_kj = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->processed;
        Intergration_B.SFunction1_o10_i5 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->timestamp;
        Intergration_B.SFunction1_o11_as = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_07_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_b3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_07_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_br = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_07_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_bl = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_07_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_ps = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_07_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_i0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_07_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_lf = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_07_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ik = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_07_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_hf = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_kj = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S129>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part1of2" Id:88 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->processed) {
        Intergration_B.SFunction1_o13_f = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->processed;
        Intergration_B.SFunction1_o14_j2 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->timestamp;
        Intergration_B.SFunction1_o15_k = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_08_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_c5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_08_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ha = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_08_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_d = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_08_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_ax = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_08_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_jj = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_08_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_o = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_08_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_a = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_08_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_bn = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_08_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_nd = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_08_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_oz = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_08_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_gj = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_08_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_dp = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_f = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S130>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part2of2" Id:40 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->processed) {
        Intergration_B.SFunction1_o9_g4 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->processed;
        Intergration_B.SFunction1_o10_e = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->timestamp;
        Intergration_B.SFunction1_o11_ij = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_08_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_08_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_f1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_08_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ej = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_08_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_lw = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_08_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_08_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_h4 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_08_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_px = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_08_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_kd = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_g4 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S131>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part1of2" Id:89 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->processed) {
        Intergration_B.SFunction1_o13_c = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->processed;
        Intergration_B.SFunction1_o14_j4 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->timestamp;
        Intergration_B.SFunction1_o15_d = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_09_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_09_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_fn = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_09_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_jo = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_09_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_gk = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_09_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_dm = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_09_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_iz = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_09_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_kx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_09_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_kt = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_09_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_o5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_09_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_au = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_09_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_he = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_09_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_el = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_c = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S132>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part2of2" Id:41 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->processed) {
        Intergration_B.SFunction1_o9_el = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->processed;
        Intergration_B.SFunction1_o10_kt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->timestamp;
        Intergration_B.SFunction1_o11_bw = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_09_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_dz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_09_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ic = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_09_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_fo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_09_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_le = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_09_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_bz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_09_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_nl = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_09_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_j = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_09_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_ci = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_el = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S133>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part1of2" Id:90 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->processed) {
        Intergration_B.SFunction1_o13_k = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->processed;
        Intergration_B.SFunction1_o14_ll = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->timestamp;
        Intergration_B.SFunction1_o15_o5 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_10_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_10_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_nh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_10_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ia = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_10_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_de = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_10_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_j2 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_10_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_gu = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_10_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_lo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_10_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_g5 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_10_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ev = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_10_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_pr = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_10_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_10_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_b = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_k = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S134>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part2of2" Id:42 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->processed) {
        Intergration_B.SFunction1_o9_po = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->processed;
        Intergration_B.SFunction1_o10_fz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->timestamp;
        Intergration_B.SFunction1_o11_c = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_10_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_m3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_10_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_he = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_10_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_dp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_10_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_gu = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_10_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_af = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_10_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_p4 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_10_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_em = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_10_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_eb = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_po = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S135>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part1of2" Id:91 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->processed) {
        Intergration_B.SFunction1_o13_iz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->processed;
        Intergration_B.SFunction1_o14_m = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->timestamp;
        Intergration_B.SFunction1_o15_om = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_11_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_khd = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_11_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_dp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_11_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_g = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_11_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_f = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_11_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_fx = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_11_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_ea = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_11_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_i2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_11_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_du = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_11_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_i = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_11_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_m = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_11_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_ji = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_11_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_f = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_iz = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S136>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part2of2" Id:43 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->processed) {
        Intergration_B.SFunction1_o9_kjw = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->processed;
        Intergration_B.SFunction1_o10_i0 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->timestamp;
        Intergration_B.SFunction1_o11_dh = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_11_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ih = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_11_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_gq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_11_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_le = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_11_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_l0 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_11_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_ht = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_11_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_ha = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_11_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_o3 = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_11_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_i = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_kjw = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S137>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part1of2" Id:92 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->processed) {
        Intergration_B.SFunction1_o13_gk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->processed;
        Intergration_B.SFunction1_o14_f = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->timestamp;
        Intergration_B.SFunction1_o15_ji = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_12_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_n0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_12_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_kp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_12_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_d3 = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_12_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_aq = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_12_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_j0 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_12_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_gn = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_12_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_nd = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_12_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_km = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_12_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_d = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_12_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_if = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_12_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_cw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_12_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_a = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_gk = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S138>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part2of2" Id:44 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->processed) {
        Intergration_B.SFunction1_o9_ab = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->processed;
        Intergration_B.SFunction1_o10_hu = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->timestamp;
        Intergration_B.SFunction1_o11_ijt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_12_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_eo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_12_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_lz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_12_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_l0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_12_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_i4 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_12_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_i2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_12_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_cp = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_12_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_e2 = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_12_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_dx3 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_ab = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S139>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part1of2" Id:93 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->processed) {
        Intergration_B.SFunction1_o13_ok = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->processed;
        Intergration_B.SFunction1_o14_nw = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->timestamp;
        Intergration_B.SFunction1_o15_c = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_13_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_opc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_13_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_id = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_13_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_mf = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_13_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_cg = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_13_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_afm = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_13_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_mt = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_13_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_loo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_13_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_ek = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_13_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_bw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_13_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_g2 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_13_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_fu = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_13_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_h = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_ok = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S140>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part2of2" Id:45 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->processed) {
        Intergration_B.SFunction1_o9_pg = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->processed;
        Intergration_B.SFunction1_o10_fe = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->timestamp;
        Intergration_B.SFunction1_o11_ic = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_13_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_dr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_13_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_oo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_13_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ml = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_13_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_b2 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_13_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_ny = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_13_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_ni = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_13_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ndy = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_13_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_gh = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_pg = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S141>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part1of2" Id:94 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->processed) {
        Intergration_B.SFunction1_o13_cs = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->processed;
        Intergration_B.SFunction1_o14_jq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->timestamp;
        Intergration_B.SFunction1_o15_ga = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_14_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_kc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_14_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ck = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_14_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ik = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_14_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_bj = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_14_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_ga = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_14_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_pv = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_14_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_d = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_14_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_cg = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_14_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_gk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_14_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_dc = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_14_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_k = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_14_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_j = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_cs = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S142>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part2of2" Id:46 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->processed) {
        Intergration_B.SFunction1_o9_nq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->processed;
        Intergration_B.SFunction1_o10_ou = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->timestamp;
        Intergration_B.SFunction1_o11_is = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_14_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_j4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_14_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_bh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_14_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_po = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_14_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_hv = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_14_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_g1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_14_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_nib = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_14_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ho = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_14_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_d3 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_nq = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S143>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part1of2" Id:95 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->processed) {
        Intergration_B.SFunction1_o13_a = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->processed;
        Intergration_B.SFunction1_o14_e = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->timestamp;
        Intergration_B.SFunction1_o15_l = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_15_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_a = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_15_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_oh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_15_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_bf = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_15_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_d2 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_15_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_lq = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_15_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_jz = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_15_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_aw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_15_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_bw = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_15_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_cd = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_15_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_o4 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_15_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_av = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_15_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_ff = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_a = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S144>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part2of2" Id:47 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->processed) {
        Intergration_B.SFunction1_o9_fk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->processed;
        Intergration_B.SFunction1_o10_pj = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->timestamp;
        Intergration_B.SFunction1_o11_dx = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_15_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_od = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_15_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_kpj = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_15_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_b0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_15_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_aq1 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_15_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_oo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_15_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_nb = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_15_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_eg = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_15_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_pa = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_fk = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S145>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part1of2" Id:96 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->processed) {
        Intergration_B.SFunction1_o13_go = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->processed;
        Intergration_B.SFunction1_o14_h = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->timestamp;
        Intergration_B.SFunction1_o15_nn = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_16_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_p0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_16_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_dd = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_16_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_bn = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_16_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_jj = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_16_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_pa = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_16_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_lfy = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_16_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_e0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_16_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_ms = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_16_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ic = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_16_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_id = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_16_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_cm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_16_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_fz = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_go = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S146>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part2of2" Id:48 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->processed) {
        Intergration_B.SFunction1_o9_ml = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->processed;
        Intergration_B.SFunction1_o10_pjk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->timestamp;
        Intergration_B.SFunction1_o11_im = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_16_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_no = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_16_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ns = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_16_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ma = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_16_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_ia = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_16_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_mq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_16_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_l0 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_16_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_in = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_16_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_as = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_ml = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S147>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part1of2" Id:97 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->processed) {
        Intergration_B.SFunction1_o13_m = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->processed;
        Intergration_B.SFunction1_o14_pe = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->timestamp;
        Intergration_B.SFunction1_o15_jm = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_17_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_17_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_iw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_17_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_nxj = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_17_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_o4 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_17_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_lp = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_17_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_dm = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_17_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_ex = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_17_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_cp = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_17_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_dm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_17_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_fw = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_17_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_ju = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_17_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_hd = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_m = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S148>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part2of2" Id:49 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->processed) {
        Intergration_B.SFunction1_o9_oq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->processed;
        Intergration_B.SFunction1_o10_op = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->timestamp;
        Intergration_B.SFunction1_o11_py = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_17_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_cb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_17_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_av = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_17_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ge = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_17_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_gb = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_17_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_iu = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_17_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_mc = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_17_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_hq = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_17_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_an = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_oq = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S149>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part1of2" Id:98 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->processed) {
        Intergration_B.SFunction1_o13_li = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->processed;
        Intergration_B.SFunction1_o14_pq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->timestamp;
        Intergration_B.SFunction1_o15_e = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_18_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_fb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_18_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_h5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_18_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_me = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_18_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_ih = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_18_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_ok = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_18_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_as = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_18_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_bz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_18_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_ew = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_18_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_h = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_18_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_ga = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_18_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_jz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_18_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_dz = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_li = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S150>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part2of2" Id:50 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->processed) {
        Intergration_B.SFunction1_o9_jk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->processed;
        Intergration_B.SFunction1_o10_cv = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->timestamp;
        Intergration_B.SFunction1_o11_m5 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_18_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ny = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_18_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_nsn = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_18_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_gf = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_18_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_b1 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_18_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_ac = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_18_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_fq = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_18_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_mnh = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_18_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_e3 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_jk = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S151>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part1of2" Id:99 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->processed) {
        Intergration_B.SFunction1_o13_mk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->processed;
        Intergration_B.SFunction1_o14_i = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->timestamp;
        Intergration_B.SFunction1_o15_ew = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_19_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_cz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_19_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ov = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_19_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ce = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_19_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_lx = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_19_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_gp = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_19_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_oo = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_19_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_ft = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_19_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_pq = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_19_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ho = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_19_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_hx = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_19_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_fd = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_19_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_kr = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_mk = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S152>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part2of2" Id:51 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->processed) {
        Intergration_B.SFunction1_o9_ij = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->processed;
        Intergration_B.SFunction1_o10_fh = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->timestamp;
        Intergration_B.SFunction1_o11_by = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_19_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ha = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_19_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ag = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_19_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ks = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_19_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_cy = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_19_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_mi = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_19_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_ft = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_19_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_od = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_19_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_gr = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_ij = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S153>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part1of2" Id:100 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->processed) {
        Intergration_B.SFunction1_o13_mn = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->processed;
        Intergration_B.SFunction1_o14_d = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->timestamp;
        Intergration_B.SFunction1_o15_i = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_20_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_fq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_20_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_20_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ff = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_20_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_mw = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_20_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_oj = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_20_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_i0 = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_20_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_fr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_20_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_kz = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_20_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_lk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_20_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_iw = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_20_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_dj = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_20_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_ct = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_mn = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S154>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part2of2" Id:52 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->processed) {
        Intergration_B.SFunction1_o9_gp = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->processed;
        Intergration_B.SFunction1_o10_k3 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->timestamp;
        Intergration_B.SFunction1_o11_nn = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_20_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_gs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_20_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_f0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_20_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ji = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_20_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_h5 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_20_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_jf = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_20_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_dw = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_20_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ni = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_20_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_n = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_gp = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S155>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part1of2" Id:101 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->processed) {
        Intergration_B.SFunction1_o13_an = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->processed;
        Intergration_B.SFunction1_o14_o = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->timestamp;
        Intergration_B.SFunction1_o15_m = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_21_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_jm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_21_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_lo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_21_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_nk = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_21_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_hf = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_21_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_lv = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_21_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_jv = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_21_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_dx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_21_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_ne = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_21_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_bx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_21_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_be = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_21_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_mi = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_21_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_ex = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_an = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S156>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part2of2" Id:53 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->processed) {
        Intergration_B.SFunction1_o9_dv = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->processed;
        Intergration_B.SFunction1_o10_jd = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->timestamp;
        Intergration_B.SFunction1_o11_p1 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_21_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_pr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_21_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_cb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_21_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_kt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_21_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_lo = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_21_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_l4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_21_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_b1 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_21_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_i0 = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_21_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_l = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_dv = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S157>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part1of2" Id:102 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->processed) {
        Intergration_B.SFunction1_o13_je = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->processed;
        Intergration_B.SFunction1_o14_kx = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->timestamp;
        Intergration_B.SFunction1_o15_ao = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_22_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_fr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_22_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_bt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_22_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ms = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_22_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_gf = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_22_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_k3 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_22_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_m5h = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_22_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_ie = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_22_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_by = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_22_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_bz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_22_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_lh = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_22_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_mt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_22_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_mu = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_je = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S158>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part2of2" Id:54 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->processed) {
        Intergration_B.SFunction1_o9_ee = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->processed;
        Intergration_B.SFunction1_o10_mk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->timestamp;
        Intergration_B.SFunction1_o11_og = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_22_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ll = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_22_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_pu = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_22_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_it = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_22_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_hp = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_22_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_hh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_22_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_hy = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_22_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_prb = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_22_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_ox = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_ee = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S159>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part1of2" Id:103 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->processed) {
        Intergration_B.SFunction1_o13_fu = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->processed;
        Intergration_B.SFunction1_o14_ly = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->timestamp;
        Intergration_B.SFunction1_o15_as = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_23_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_dt4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_23_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_g5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_23_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ek = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_23_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_a0 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_23_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_n2 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_23_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_dq = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_23_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_m2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_23_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_dt = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_23_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_gi = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_23_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_fx = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_23_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_ih = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_23_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_bq = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_fu = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S160>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part2of2" Id:55 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->processed) {
        Intergration_B.SFunction1_o9_fo = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->processed;
        Intergration_B.SFunction1_o10_dt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->timestamp;
        Intergration_B.SFunction1_o11_ne = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_23_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ir = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_23_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ddh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_23_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_dh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_23_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_pjx = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_23_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_bo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_23_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_oe = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_23_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ca = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_23_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_d2 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_fo = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S161>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part1of2" Id:104 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->processed) {
        Intergration_B.SFunction1_o13_nn = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->processed;
        Intergration_B.SFunction1_o14_jl = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->timestamp;
        Intergration_B.SFunction1_o15_p = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_24_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ma = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_24_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ix = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_24_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_pd = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_24_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_fb = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_24_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_bq = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_24_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_h5 = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_24_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_au = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_24_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_d3e = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_24_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_lg = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_24_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_da = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_24_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_hs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_24_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_nu = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_nn = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S162>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part2of2" Id:56 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->processed) {
        Intergration_B.SFunction1_o9_ny = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->processed;
        Intergration_B.SFunction1_o10_ge = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->timestamp;
        Intergration_B.SFunction1_o11_gx = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_24_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_oq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_24_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_e = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_24_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_hw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_24_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_of = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_24_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_dq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_24_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_hf = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_24_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ax = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_24_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_iv = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_ny = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S163>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part1of2" Id:105 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->processed) {
        Intergration_B.SFunction1_o13_n3 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->processed;
        Intergration_B.SFunction1_o14_lr = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->timestamp;
        Intergration_B.SFunction1_o15_a3 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_25_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_dy = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_25_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ap = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_25_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_msn = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_25_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_jel = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_25_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_k3t = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_25_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_m5e = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_25_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_frp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_25_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_hp = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_25_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_c2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_25_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_bn = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_25_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_mu = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_25_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_g1 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_n3 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S164>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part2of2" Id:57 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->processed) {
        Intergration_B.SFunction1_o9_p2 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->processed;
        Intergration_B.SFunction1_o10_g3 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->timestamp;
        Intergration_B.SFunction1_o11_e0 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_25_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_mc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_25_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_fk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_25_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_p0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_25_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_ed = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_25_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_ba = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_25_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_fk = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_25_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_k3 = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_25_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_m0 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_p2 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S165>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part1of2" Id:106 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->processed) {
        Intergration_B.SFunction1_o13_nz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->processed;
        Intergration_B.SFunction1_o14_gs = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->timestamp;
        Intergration_B.SFunction1_o15_lt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_26_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_nh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_26_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ia = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_26_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_io = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_26_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_f5 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_26_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_hd = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_26_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_ei = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_26_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_gi = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_26_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_hpp = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_26_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_eh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_26_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_nv = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_26_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_at = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_26_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_i4 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_nz = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S166>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part2of2" Id:58 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->processed) {
        Intergration_B.SFunction1_o9_kl = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->processed;
        Intergration_B.SFunction1_o10_ae = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->timestamp;
        Intergration_B.SFunction1_o11_b1 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_26_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_lw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_26_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_in = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_26_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_bg = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_26_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_k = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_26_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_ie = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_26_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_bf = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_26_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_kv = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_26_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_o0 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_kl = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S167>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part1of2" Id:107 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->processed) {
        Intergration_B.SFunction1_o13_kc = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->processed;
        Intergration_B.SFunction1_o14_pgf = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->timestamp;
        Intergration_B.SFunction1_o15_lz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_27_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_er = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_27_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_hg = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_27_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ck = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_27_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_dj = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_27_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_bd = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_27_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_li = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_27_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_ov = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_27_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_j = 0.1 * ( ((real_T) CAN_Sgn.UnsignedSgn)
            );

          /* ...... "FRS_P1_27_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_px = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_27_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_af = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_27_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_mi4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_27_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_e0 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_kc = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S168>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part2of2" Id:59 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->processed) {
        Intergration_B.SFunction1_o9_ha = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->processed;
        Intergration_B.SFunction1_o10_np = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->timestamp;
        Intergration_B.SFunction1_o11_kj = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_27_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_gb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_27_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_b3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_27_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ejb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_27_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_lg = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_27_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_ho = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_27_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_ldd = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_27_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_d0 = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_27_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_hq = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_ha = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S169>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part1of2" Id:108 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->processed) {
        Intergration_B.SFunction1_o13_fa = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->processed;
        Intergration_B.SFunction1_o14_fe = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->timestamp;
        Intergration_B.SFunction1_o15_km = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_28_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_lwj = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_28_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_f2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_28_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_gl = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_28_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_h0 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_28_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_gk = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_28_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_nm = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_28_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_mq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_28_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_cx = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_28_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ga = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_28_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_le = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_28_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_o5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_28_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_ds = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_fa = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S170>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part2of2" Id:60 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->processed) {
        Intergration_B.SFunction1_o9_hy = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->processed;
        Intergration_B.SFunction1_o10_dh = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->timestamp;
        Intergration_B.SFunction1_o11_f4 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_28_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_f2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_28_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ptv = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_28_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_hd = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_28_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_mpz = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_28_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_fb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_28_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_f1 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_28_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_oa = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_28_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_a0 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_hy = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S171>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part1of2" Id:109 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->processed) {
        Intergration_B.SFunction1_o13_pd = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->processed;
        Intergration_B.SFunction1_o14_og = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->timestamp;
        Intergration_B.SFunction1_o15_bv = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_29_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_eh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_29_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_bm = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_29_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_d3d = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_29_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_en = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_29_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_ov = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_29_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_os = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_29_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_eh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_29_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_jq = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_29_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_go = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_29_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_ly = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_29_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_img = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_29_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_oy = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_pd = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S172>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part2of2" Id:61 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->processed) {
        Intergration_B.SFunction1_o9_lr = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->processed;
        Intergration_B.SFunction1_o10_fu = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->timestamp;
        Intergration_B.SFunction1_o11_nc = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_29_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_29_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_f2g = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_29_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_hu = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_29_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_cn = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_29_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_km = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_29_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_gk = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_29_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_bf = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_29_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_dux = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_lr = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S173>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part1of2" Id:110 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->processed) {
        Intergration_B.SFunction1_o13_pr = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->processed;
        Intergration_B.SFunction1_o14_na = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->timestamp;
        Intergration_B.SFunction1_o15_db = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_30_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bv = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_30_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_dr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_30_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ez = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_30_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_o1 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_30_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_gm = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_30_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_gi = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_30_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_ps = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_30_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_hi = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_30_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_kr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_30_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_h5 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_30_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_oe = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_30_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_lv = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_pr = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S174>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part2of2" Id:62 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->processed) {
        Intergration_B.SFunction1_o9_cc = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->processed;
        Intergration_B.SFunction1_o10_in = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->timestamp;
        Intergration_B.SFunction1_o11_ii = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_30_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_hi = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_30_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_dh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_30_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_kg = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_30_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_aj = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_30_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_jc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_30_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_d4 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_30_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_fn = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_30_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_de = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_cc = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S175>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part1of2" Id:111 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->processed) {
        Intergration_B.SFunction1_o13_av = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->processed;
        Intergration_B.SFunction1_o14_he = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->timestamp;
        Intergration_B.SFunction1_o15_ci = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_31_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_l2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_31_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_mb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_31_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ior = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_31_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_pq = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_31_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_dqu = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_31_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_hh = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_31_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_j1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_31_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_hsb = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_31_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_bqg = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_31_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_gc = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_31_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_p0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_31_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_mi = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_av = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S176>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part2of2" Id:63 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->processed) {
        Intergration_B.SFunction1_o9_gc = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->processed;
        Intergration_B.SFunction1_o10_a1 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->timestamp;
        Intergration_B.SFunction1_o11_mb = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_31_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_fw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_31_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ff = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_31_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ko = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_31_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_lq = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_31_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_cg = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_31_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_mv = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_31_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_kd = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_31_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_px = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_gc = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S177>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part1of2" Id:112 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->processed) {
        Intergration_B.SFunction1_o13_gol = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->processed;
        Intergration_B.SFunction1_o14_ej = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->timestamp;
        Intergration_B.SFunction1_o15_au = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_32_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_bvk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_32_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_mr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_32_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_hq = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_32_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_kq = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_32_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_h2 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_32_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_oc = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_32_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_my = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_32_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_cr = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_32_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_h4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_32_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_on = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_32_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_cp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_32_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_bqg = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_gol = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S178>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part2of2" Id:64 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->processed) {
        Intergration_B.SFunction1_o9_o0 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->processed;
        Intergration_B.SFunction1_o10_hs = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->timestamp;
        Intergration_B.SFunction1_o11_fj = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_32_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ps = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_32_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_iq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_32_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ka = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_32_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_cs = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_32_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_hv = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_32_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_hp = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_32_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_id = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_32_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_gn = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_o0 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S179>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part1of2" Id:113 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->processed) {
        Intergration_B.SFunction1_o13_jo = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->processed;
        Intergration_B.SFunction1_o14_gd = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->timestamp;
        Intergration_B.SFunction1_o15_jl = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_33_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_c2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_33_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_j = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_33_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ffz = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_33_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_gbs = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_33_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_ne = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_33_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_l4 = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_33_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_eg3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_33_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_a5 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_33_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_dh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_33_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_k3v = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_33_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_hz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_33_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_j5 = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_jo = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S180>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part2of2" Id:65 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->processed) {
        Intergration_B.SFunction1_o9_pd = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->processed;
        Intergration_B.SFunction1_o10_o1 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->timestamp;
        Intergration_B.SFunction1_o11_eq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_33_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_f3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_33_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ej = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_33_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_kz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_33_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_lv = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_33_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_kp = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_33_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_bh = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_33_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_fm = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_33_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_f = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_pd = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S181>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part1of2" Id:114 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->processed) {
        Intergration_B.SFunction1_o13_d2 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->processed;
        Intergration_B.SFunction1_o14_lo = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->timestamp;
        Intergration_B.SFunction1_o15_kp = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_34_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_hy = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_34_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_l3o = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_34_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ht = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_34_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_ga = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_34_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_in = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_34_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_pa = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_34_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_dv = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_34_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_ky = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_34_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_cy = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_34_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_br = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_34_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_b2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_34_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_ae = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_d2 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S182>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part2of2" Id:66 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->processed) {
        Intergration_B.SFunction1_o9_k4 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->processed;
        Intergration_B.SFunction1_o10_eq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->timestamp;
        Intergration_B.SFunction1_o11_gm = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_34_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_lr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_34_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_jk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_34_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_ox = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_34_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_gue = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_34_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_mr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_34_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_lh = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_34_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_l4 = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_34_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_d2r = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_k4 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S183>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part1of2" Id:115 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->processed) {
        Intergration_B.SFunction1_o13_jx = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->processed;
        Intergration_B.SFunction1_o14_hz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->timestamp;
        Intergration_B.SFunction1_o15_id = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_35_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_kx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_35_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_h5m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_35_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_jm = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_35_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_jv = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_35_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_gr = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_35_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_jf = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_35_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_hs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_35_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_nf = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_35_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ec = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_35_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_fug = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_35_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_ap = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_35_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_kk = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_jx = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S184>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part2of2" Id:67 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->processed) {
        Intergration_B.SFunction1_o9_du = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->processed;
        Intergration_B.SFunction1_o10_o2 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->timestamp;
        Intergration_B.SFunction1_o11_n1 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_35_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ja = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_35_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_i4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_35_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_bs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_35_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_ok = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_35_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_cw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_35_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_do = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_35_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_ly = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_35_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_gf = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_du = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S185>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part1of2" Id:116 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->processed) {
        Intergration_B.SFunction1_o13_d0 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->processed;
        Intergration_B.SFunction1_o14_eb = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->timestamp;
        Intergration_B.SFunction1_o15_iz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_36_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_n2 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_36_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_jf = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_36_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ja = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_36_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_md = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_36_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_ev = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_36_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_ab = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_36_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_mc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_36_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_oi = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_36_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_kn = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_36_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_hf = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_36_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_dr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_36_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_mp = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_d0 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S186>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part2of2" Id:68 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->processed) {
        Intergration_B.SFunction1_o9_gr = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->processed;
        Intergration_B.SFunction1_o10_eg = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->timestamp;
        Intergration_B.SFunction1_o11_ps = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_36_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_c1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_36_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_kr = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_36_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_iu = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_36_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_aqo = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_36_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_fb0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_36_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_bk = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_36_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_n0 = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_36_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_mi = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_gr = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S187>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part1of2" Id:117 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->processed) {
        Intergration_B.SFunction1_o13_pj = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->processed;
        Intergration_B.SFunction1_o14_bt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->timestamp;
        Intergration_B.SFunction1_o15_kt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_37_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ff = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_37_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_loq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_37_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_em = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_37_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_ag = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_37_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_fh = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_37_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_kq = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_37_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_db = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_37_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_mn = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_37_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_cs = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_37_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_m5 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_37_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_l = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_37_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_an = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_pj = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S188>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part2of2" Id:69 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->processed) {
        Intergration_B.SFunction1_o9_lq = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->processed;
        Intergration_B.SFunction1_o10_jo = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->timestamp;
        Intergration_B.SFunction1_o11_dm = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_37_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_kb = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_37_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ac = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_37_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_lk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_37_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_kz = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_37_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_eo = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_37_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_a4 = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_37_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_na = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_37_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_o0m = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_lq = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S189>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part1of2" Id:118 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->processed) {
        Intergration_B.SFunction1_o13_hi = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->processed;
        Intergration_B.SFunction1_o14_ac = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->timestamp;
        Intergration_B.SFunction1_o15_bj = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_38_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_po = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_38_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_d4 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_38_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ar = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_38_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_f2 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_38_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_l3 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_38_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_lw = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_38_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_da = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_38_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_nz = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_38_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ey = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_38_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_e4 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_38_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_nq = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_38_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_hs = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_hi = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S190>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part2of2" Id:70 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->processed) {
        Intergration_B.SFunction1_o9_js = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->processed;
        Intergration_B.SFunction1_o10_az = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->timestamp;
        Intergration_B.SFunction1_o11_ay = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_38_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_ph = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_38_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_em = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_38_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_d5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_38_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_ig = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_38_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_d0 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_38_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_db = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_38_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_fx = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_38_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_be = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_js = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S191>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part1of2" Id:119 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->processed) {
        Intergration_B.SFunction1_o13_pu = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->processed;
        Intergration_B.SFunction1_o14_id = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->timestamp;
        Intergration_B.SFunction1_o15_o4 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P1_39_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_df = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_39_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_ko = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_39_Obj_ExstProb" (12|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o3_ac = 1.5873 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_39_Obj_XVelRel_Stdev" (18|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o4_i3 = 0.05 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_39_Obj_XAccRel" (25|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o5_n4 = -9.6 + ( 0.15 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P1_39_Obj_ObstacleProb" (32|5, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn &= 0x0000001F;
          Intergration_B.SFunction1_o6_ki = 3.2258 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_39_Obj_MotionPattern" (37|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o7_ha = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_39_Obj_YPos_Stdev" (40|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o8_bw0 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_39_Obj_ValidFlag" (47|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o9_ad = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_39_Obj_XPos_Stdev" (48|7, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x0000007F;
          Intergration_B.SFunction1_o10_on0 = 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P1_39_Obj_UpdateFlag" (55|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o11_b2m = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P1_39_Obj_ID" (56|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o12_mik = ((real_T) CAN_Sgn.UnsignedSgn);
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o13_pu = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S192>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part2of2" Id:71 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->processed) {
        Intergration_B.SFunction1_o9_b0 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->processed;
        Intergration_B.SFunction1_o10_azf = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->timestamp;
        Intergration_B.SFunction1_o11_gb = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_P2_39_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_fv = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_39_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_e1 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_39_Obj_MeasFlag" (12|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o3_jx = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_39_Obj_YVelRel" (13|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o4_cm = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_39_Obj_Type" (24|2, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          Intergration_B.SFunction1_o5_dz = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_P2_39_Obj_XPos" (26|14, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00003FFF;
          Intergration_B.SFunction1_o6_dk = 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) );

          /* ...... "FRS_P2_39_Obj_YPos" (40|13, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.UnsignedSgn &= 0x00001FFF;
          Intergration_B.SFunction1_o7_mx = -64 + ( 0.015625 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_P2_39_Obj_XVelRel" (53|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 5;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_f2 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o9_b0 = 0.0;
    }
  }

  /* S-Function (rti_commonblock): '<S193>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE RTICAN RX Message Block: "FRS_Status" Id:128 */
  {
    UInt32 *CAN_Msg;

    /* ... Read status and timestamp info (previous message) */
    can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]);

    /* Convert timestamp */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->processed) {
      can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->timestamp =
        rtk_dsts_time_to_simtime_convert
        (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->timestamp);
    }

    /* Messages with timestamp zero have been received in pause/stop state
       and must not be handled.
     */
    if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->timestamp > 0.0) {
      if (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->processed) {
        Intergration_B.SFunction1_o12_dy = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->processed;
        Intergration_B.SFunction1_o13_hp = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->timestamp;
        Intergration_B.SFunction1_o14_nu = (real_T)
          can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->deltatime;
        CAN_Msg = can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->data;

        /* ... Decode CAN Message */
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "FRS_Msg_CheckSum" (0|8, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          Intergration_B.SFunction1_o1_c1x = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_Msg_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn &= 0x0000000F;
          Intergration_B.SFunction1_o2_gc = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_Status_MisAlign" (12|3, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 4;
          CAN_Sgn.UnsignedSgn &= 0x00000007;
          Intergration_B.SFunction1_o3_n3 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_Status_HWErr" (15|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 7;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o4_fh = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_Status_BlkProg" (16|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o5_b5 = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_Fail" (17|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 1;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o6_pt = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_MeasEnabled" (18|1, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x00000001;
          Intergration_B.SFunction1_o7_gk = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_Host_Yaw" (19|11, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[4];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 3;
          CAN_Sgn.UnsignedSgn &= 0x000007FF;
          Intergration_B.SFunction1_o8_o5 = -102.4 + ( 0.1 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_HostSpeed" (30|12, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
          CAN_Sgn.SgnBytes.Byte2 = CAN_Msg[2];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 6;
          CAN_Sgn.UnsignedSgn &= 0x00000FFF;
          Intergration_B.SFunction1_o9_cn = -20 + ( 0.025 * ( ((real_T)
            CAN_Sgn.UnsignedSgn) ) );

          /* ...... "FRS_TimeStamp" (42|16, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
          CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
          CAN_Sgn.SgnBytes.Byte2 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
          Intergration_B.SFunction1_o10_cw = ((real_T) CAN_Sgn.UnsignedSgn);

          /* ...... "FRS_Latency" (58|6, standard signal, unsigned int, motorola back.) */
          CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) >> 2;
          CAN_Sgn.UnsignedSgn &= 0x0000003F;
          Intergration_B.SFunction1_o11_b5 = 2 * ( ((real_T) CAN_Sgn.UnsignedSgn)
            );
        }
      }
    }

    if (!can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80]->processed) {
      /* ... set RX status to 0 because no new message has arrived */
      Intergration_B.SFunction1_o12_dy = 0.0;
    }
  }

  /* DataTypeConversion: '<S72>/Data Type Conversion' */
  Intergration_B.BusCreator_e.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_kh;

  /* DataTypeConversion: '<S72>/Data Type Conversion1' */
  Intergration_B.BusCreator_e.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_hl;

  /* DataTypeConversion: '<S72>/Data Type Conversion2' */
  Intergration_B.BusCreator_e.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_a;

  /* DataTypeConversion: '<S72>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3 = (real32_T)Intergration_B.SFunction1_o4_i;

  /* DataTypeConversion: '<S72>/Data Type Conversion4' */
  Intergration_B.BusCreator_e.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_ay;

  /* DataTypeConversion: '<S72>/Data Type Conversion5' */
  Intergration_B.BusCreator_e.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_cg;

  /* DataTypeConversion: '<S72>/Data Type Conversion6' */
  Intergration_B.BusCreator_e.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_hm;

  /* DataTypeConversion: '<S72>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7 = (real32_T)Intergration_B.SFunction1_o8_pb;

  /* DataTypeConversion: '<S72>/Data Type Conversion8' */
  Intergration_B.BusCreator_e.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_kc;

  /* DataTypeConversion: '<S72>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9 = (real32_T)Intergration_B.SFunction1_o10_j;

  /* DataTypeConversion: '<S72>/Data Type Conversion10' */
  Intergration_B.BusCreator_e.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_e;

  /* DataTypeConversion: '<S72>/Data Type Conversion11' */
  Intergration_B.BusCreator_e.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_kj;

  /* DataTypeConversion: '<S72>/Data Type Conversion12' */
  Intergration_B.BusCreator_e.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_dt;

  /* DataTypeConversion: '<S72>/Data Type Conversion13' */
  Intergration_B.BusCreator_e.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_h2;

  /* DataTypeConversion: '<S72>/Data Type Conversion14' */
  Intergration_B.BusCreator_e.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_h;

  /* DataTypeConversion: '<S72>/Data Type Conversion15' */
  Intergration_B.BusCreator_e.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_je;

  /* DataTypeConversion: '<S72>/Data Type Conversion16' */
  Intergration_B.BusCreator_e.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_d;

  /* DataTypeConversion: '<S72>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17 = (real32_T)
    Intergration_B.SFunction1_o6_jj;

  /* DataTypeConversion: '<S72>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18 = (real32_T)
    Intergration_B.SFunction1_o7_gq;

  /* DataTypeConversion: '<S72>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19 = (real32_T)
    Intergration_B.SFunction1_o8_p1;

  /* BusCreator: '<S72>/Bus Creator' */
  Intergration_B.BusCreator_e.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3;
  Intergration_B.BusCreator_e.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7;
  Intergration_B.BusCreator_e.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9;
  Intergration_B.BusCreator_e.Obj_XPos = Intergration_B.DataTypeConversion17;
  Intergration_B.BusCreator_e.Obj_YPos = Intergration_B.DataTypeConversion18;
  Intergration_B.BusCreator_e.Obj_XVelRel = Intergration_B.DataTypeConversion19;

  /* DataTypeConversion: '<S73>/Data Type Conversion' */
  Intergration_B.BusCreator_l.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_l;

  /* DataTypeConversion: '<S73>/Data Type Conversion1' */
  Intergration_B.BusCreator_l.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_pt;

  /* DataTypeConversion: '<S73>/Data Type Conversion2' */
  Intergration_B.BusCreator_l.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_hf;

  /* DataTypeConversion: '<S73>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_d = (real32_T)
    Intergration_B.SFunction1_o4_o;

  /* DataTypeConversion: '<S73>/Data Type Conversion4' */
  Intergration_B.BusCreator_l.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_jy;

  /* DataTypeConversion: '<S73>/Data Type Conversion5' */
  Intergration_B.BusCreator_l.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_m5;

  /* DataTypeConversion: '<S73>/Data Type Conversion6' */
  Intergration_B.BusCreator_l.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_hy;

  /* DataTypeConversion: '<S73>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_j = (real32_T)
    Intergration_B.SFunction1_o8_d;

  /* DataTypeConversion: '<S73>/Data Type Conversion8' */
  Intergration_B.BusCreator_l.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_e;

  /* DataTypeConversion: '<S73>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_l = (real32_T)
    Intergration_B.SFunction1_o10_n;

  /* DataTypeConversion: '<S73>/Data Type Conversion10' */
  Intergration_B.BusCreator_l.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_ng;

  /* DataTypeConversion: '<S73>/Data Type Conversion11' */
  Intergration_B.BusCreator_l.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_o;

  /* DataTypeConversion: '<S73>/Data Type Conversion12' */
  Intergration_B.BusCreator_l.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_om;

  /* DataTypeConversion: '<S73>/Data Type Conversion13' */
  Intergration_B.BusCreator_l.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_a0;

  /* DataTypeConversion: '<S73>/Data Type Conversion14' */
  Intergration_B.BusCreator_l.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_bj;

  /* DataTypeConversion: '<S73>/Data Type Conversion15' */
  Intergration_B.BusCreator_l.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_e;

  /* DataTypeConversion: '<S73>/Data Type Conversion16' */
  Intergration_B.BusCreator_l.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_iw;

  /* DataTypeConversion: '<S73>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_k = (real32_T)
    Intergration_B.SFunction1_o6_j0;

  /* DataTypeConversion: '<S73>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_f = (real32_T)
    Intergration_B.SFunction1_o7_bb;

  /* DataTypeConversion: '<S73>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_b = (real32_T)
    Intergration_B.SFunction1_o8_dj;

  /* BusCreator: '<S73>/Bus Creator' */
  Intergration_B.BusCreator_l.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_d;
  Intergration_B.BusCreator_l.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_j;
  Intergration_B.BusCreator_l.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_l;
  Intergration_B.BusCreator_l.Obj_XPos = Intergration_B.DataTypeConversion17_k;
  Intergration_B.BusCreator_l.Obj_YPos = Intergration_B.DataTypeConversion18_f;
  Intergration_B.BusCreator_l.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_b;

  /* DataTypeConversion: '<S84>/Data Type Conversion' */
  Intergration_B.BusCreator_o.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_ix;

  /* DataTypeConversion: '<S84>/Data Type Conversion1' */
  Intergration_B.BusCreator_o.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_cc;

  /* DataTypeConversion: '<S84>/Data Type Conversion2' */
  Intergration_B.BusCreator_o.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_cd;

  /* DataTypeConversion: '<S84>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_m = (real32_T)
    Intergration_B.SFunction1_o4_d;

  /* DataTypeConversion: '<S84>/Data Type Conversion4' */
  Intergration_B.BusCreator_o.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_m1;

  /* DataTypeConversion: '<S84>/Data Type Conversion5' */
  Intergration_B.BusCreator_o.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_kw;

  /* DataTypeConversion: '<S84>/Data Type Conversion6' */
  Intergration_B.BusCreator_o.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_gs;

  /* DataTypeConversion: '<S84>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_n = (real32_T)
    Intergration_B.SFunction1_o8_ec;

  /* DataTypeConversion: '<S84>/Data Type Conversion8' */
  Intergration_B.BusCreator_o.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_n;

  /* DataTypeConversion: '<S84>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_c = (real32_T)
    Intergration_B.SFunction1_o10_a;

  /* DataTypeConversion: '<S84>/Data Type Conversion10' */
  Intergration_B.BusCreator_o.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_p;

  /* DataTypeConversion: '<S84>/Data Type Conversion11' */
  Intergration_B.BusCreator_o.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_g;

  /* DataTypeConversion: '<S84>/Data Type Conversion12' */
  Intergration_B.BusCreator_o.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_m1;

  /* DataTypeConversion: '<S84>/Data Type Conversion13' */
  Intergration_B.BusCreator_o.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_dm;

  /* DataTypeConversion: '<S84>/Data Type Conversion14' */
  Intergration_B.BusCreator_o.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_pt;

  /* DataTypeConversion: '<S84>/Data Type Conversion15' */
  Intergration_B.BusCreator_o.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_c;

  /* DataTypeConversion: '<S84>/Data Type Conversion16' */
  Intergration_B.BusCreator_o.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_ni;

  /* DataTypeConversion: '<S84>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_p = (real32_T)
    Intergration_B.SFunction1_o6_ms;

  /* DataTypeConversion: '<S84>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_k = (real32_T)
    Intergration_B.SFunction1_o7_f;

  /* DataTypeConversion: '<S84>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_g = (real32_T)
    Intergration_B.SFunction1_o8_hs;

  /* BusCreator: '<S84>/Bus Creator' */
  Intergration_B.BusCreator_o.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_m;
  Intergration_B.BusCreator_o.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_n;
  Intergration_B.BusCreator_o.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_c;
  Intergration_B.BusCreator_o.Obj_XPos = Intergration_B.DataTypeConversion17_p;
  Intergration_B.BusCreator_o.Obj_YPos = Intergration_B.DataTypeConversion18_k;
  Intergration_B.BusCreator_o.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_g;

  /* DataTypeConversion: '<S95>/Data Type Conversion' */
  Intergration_B.BusCreator_e1.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_bk;

  /* DataTypeConversion: '<S95>/Data Type Conversion1' */
  Intergration_B.BusCreator_e1.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_o;

  /* DataTypeConversion: '<S95>/Data Type Conversion2' */
  Intergration_B.BusCreator_e1.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ao;

  /* DataTypeConversion: '<S95>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_f = (real32_T)
    Intergration_B.SFunction1_o4_bl;

  /* DataTypeConversion: '<S95>/Data Type Conversion4' */
  Intergration_B.BusCreator_e1.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_pd;

  /* DataTypeConversion: '<S95>/Data Type Conversion5' */
  Intergration_B.BusCreator_e1.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_n;

  /* DataTypeConversion: '<S95>/Data Type Conversion6' */
  Intergration_B.BusCreator_e1.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_mn;

  /* DataTypeConversion: '<S95>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_g = (real32_T)
    Intergration_B.SFunction1_o8_hr;

  /* DataTypeConversion: '<S95>/Data Type Conversion8' */
  Intergration_B.BusCreator_e1.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_e4;

  /* DataTypeConversion: '<S95>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_g = (real32_T)
    Intergration_B.SFunction1_o10_l;

  /* DataTypeConversion: '<S95>/Data Type Conversion10' */
  Intergration_B.BusCreator_e1.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_fc;

  /* DataTypeConversion: '<S95>/Data Type Conversion11' */
  Intergration_B.BusCreator_e1.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_gr;

  /* DataTypeConversion: '<S95>/Data Type Conversion12' */
  Intergration_B.BusCreator_e1.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_nu;

  /* DataTypeConversion: '<S95>/Data Type Conversion13' */
  Intergration_B.BusCreator_e1.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_dv;

  /* DataTypeConversion: '<S95>/Data Type Conversion14' */
  Intergration_B.BusCreator_e1.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_j;

  /* DataTypeConversion: '<S95>/Data Type Conversion15' */
  Intergration_B.BusCreator_e1.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_g;

  /* DataTypeConversion: '<S95>/Data Type Conversion16' */
  Intergration_B.BusCreator_e1.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_nf;

  /* DataTypeConversion: '<S95>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_b = (real32_T)
    Intergration_B.SFunction1_o6_ld;

  /* DataTypeConversion: '<S95>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_f2 = (real32_T)
    Intergration_B.SFunction1_o7_le;

  /* DataTypeConversion: '<S95>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_m = (real32_T)
    Intergration_B.SFunction1_o8_m;

  /* BusCreator: '<S95>/Bus Creator' */
  Intergration_B.BusCreator_e1.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_f;
  Intergration_B.BusCreator_e1.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_g;
  Intergration_B.BusCreator_e1.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_g;
  Intergration_B.BusCreator_e1.Obj_XPos = Intergration_B.DataTypeConversion17_b;
  Intergration_B.BusCreator_e1.Obj_YPos = Intergration_B.DataTypeConversion18_f2;
  Intergration_B.BusCreator_e1.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_m;

  /* DataTypeConversion: '<S106>/Data Type Conversion' */
  Intergration_B.BusCreator_n.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_bt;

  /* DataTypeConversion: '<S106>/Data Type Conversion1' */
  Intergration_B.BusCreator_n.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_bl;

  /* DataTypeConversion: '<S106>/Data Type Conversion2' */
  Intergration_B.BusCreator_n.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_cw;

  /* DataTypeConversion: '<S106>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_k = (real32_T)
    Intergration_B.SFunction1_o4_pj5;

  /* DataTypeConversion: '<S106>/Data Type Conversion4' */
  Intergration_B.BusCreator_n.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_c;

  /* DataTypeConversion: '<S106>/Data Type Conversion5' */
  Intergration_B.BusCreator_n.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_lu;

  /* DataTypeConversion: '<S106>/Data Type Conversion6' */
  Intergration_B.BusCreator_n.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_kj;

  /* DataTypeConversion: '<S106>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_d = (real32_T)
    Intergration_B.SFunction1_o8_dx;

  /* DataTypeConversion: '<S106>/Data Type Conversion8' */
  Intergration_B.BusCreator_n.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ow;

  /* DataTypeConversion: '<S106>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_e = (real32_T)
    Intergration_B.SFunction1_o10_jh;

  /* DataTypeConversion: '<S106>/Data Type Conversion10' */
  Intergration_B.BusCreator_n.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_o;

  /* DataTypeConversion: '<S106>/Data Type Conversion11' */
  Intergration_B.BusCreator_n.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_m;

  /* DataTypeConversion: '<S106>/Data Type Conversion12' */
  Intergration_B.BusCreator_n.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_g4;

  /* DataTypeConversion: '<S106>/Data Type Conversion13' */
  Intergration_B.BusCreator_n.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_o3;

  /* DataTypeConversion: '<S106>/Data Type Conversion14' */
  Intergration_B.BusCreator_n.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_px;

  /* DataTypeConversion: '<S106>/Data Type Conversion15' */
  Intergration_B.BusCreator_n.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_gy;

  /* DataTypeConversion: '<S106>/Data Type Conversion16' */
  Intergration_B.BusCreator_n.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_c0;

  /* DataTypeConversion: '<S106>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_d = (real32_T)
    Intergration_B.SFunction1_o6_ix;

  /* DataTypeConversion: '<S106>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_j = (real32_T)
    Intergration_B.SFunction1_o7_ew;

  /* DataTypeConversion: '<S106>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_ge = (real32_T)
    Intergration_B.SFunction1_o8_k;

  /* BusCreator: '<S106>/Bus Creator' */
  Intergration_B.BusCreator_n.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_k;
  Intergration_B.BusCreator_n.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_d;
  Intergration_B.BusCreator_n.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_e;
  Intergration_B.BusCreator_n.Obj_XPos = Intergration_B.DataTypeConversion17_d;
  Intergration_B.BusCreator_n.Obj_YPos = Intergration_B.DataTypeConversion18_j;
  Intergration_B.BusCreator_n.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_ge;

  /* DataTypeConversion: '<S108>/Data Type Conversion' */
  Intergration_B.BusCreator_h.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_ip;

  /* DataTypeConversion: '<S108>/Data Type Conversion1' */
  Intergration_B.BusCreator_h.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ot;

  /* DataTypeConversion: '<S108>/Data Type Conversion2' */
  Intergration_B.BusCreator_h.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_k;

  /* DataTypeConversion: '<S108>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_n = (real32_T)
    Intergration_B.SFunction1_o4_ck;

  /* DataTypeConversion: '<S108>/Data Type Conversion4' */
  Intergration_B.BusCreator_h.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_ix;

  /* DataTypeConversion: '<S108>/Data Type Conversion5' */
  Intergration_B.BusCreator_h.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_d;

  /* DataTypeConversion: '<S108>/Data Type Conversion6' */
  Intergration_B.BusCreator_h.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_i5;

  /* DataTypeConversion: '<S108>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_c = (real32_T)
    Intergration_B.SFunction1_o8_kw;

  /* DataTypeConversion: '<S108>/Data Type Conversion8' */
  Intergration_B.BusCreator_h.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ae;

  /* DataTypeConversion: '<S108>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_m = (real32_T)
    Intergration_B.SFunction1_o10_b;

  /* DataTypeConversion: '<S108>/Data Type Conversion10' */
  Intergration_B.BusCreator_h.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_em;

  /* DataTypeConversion: '<S108>/Data Type Conversion11' */
  Intergration_B.BusCreator_h.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_c;

  /* DataTypeConversion: '<S108>/Data Type Conversion12' */
  Intergration_B.BusCreator_h.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_mm;

  /* DataTypeConversion: '<S108>/Data Type Conversion13' */
  Intergration_B.BusCreator_h.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_f;

  /* DataTypeConversion: '<S108>/Data Type Conversion14' */
  Intergration_B.BusCreator_h.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_e;

  /* DataTypeConversion: '<S108>/Data Type Conversion15' */
  Intergration_B.BusCreator_h.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_m0;

  /* DataTypeConversion: '<S108>/Data Type Conversion16' */
  Intergration_B.BusCreator_h.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_bi;

  /* DataTypeConversion: '<S108>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_pt = (real32_T)
    Intergration_B.SFunction1_o6_m4;

  /* DataTypeConversion: '<S108>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_m = (real32_T)
    Intergration_B.SFunction1_o7_pr;

  /* DataTypeConversion: '<S108>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_gx = (real32_T)
    Intergration_B.SFunction1_o8_a;

  /* BusCreator: '<S108>/Bus Creator' */
  Intergration_B.BusCreator_h.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_n;
  Intergration_B.BusCreator_h.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_c;
  Intergration_B.BusCreator_h.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_m;
  Intergration_B.BusCreator_h.Obj_XPos = Intergration_B.DataTypeConversion17_pt;
  Intergration_B.BusCreator_h.Obj_YPos = Intergration_B.DataTypeConversion18_m;
  Intergration_B.BusCreator_h.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_gx;

  /* DataTypeConversion: '<S109>/Data Type Conversion' */
  Intergration_B.BusCreator_ec.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_bo;

  /* DataTypeConversion: '<S109>/Data Type Conversion1' */
  Intergration_B.BusCreator_ec.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_f3;

  /* DataTypeConversion: '<S109>/Data Type Conversion2' */
  Intergration_B.BusCreator_ec.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_pf;

  /* DataTypeConversion: '<S109>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_h = (real32_T)
    Intergration_B.SFunction1_o4_ds;

  /* DataTypeConversion: '<S109>/Data Type Conversion4' */
  Intergration_B.BusCreator_ec.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_g2;

  /* DataTypeConversion: '<S109>/Data Type Conversion5' */
  Intergration_B.BusCreator_ec.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_ae;

  /* DataTypeConversion: '<S109>/Data Type Conversion6' */
  Intergration_B.BusCreator_ec.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_mm;

  /* DataTypeConversion: '<S109>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_k = (real32_T)
    Intergration_B.SFunction1_o8_al;

  /* DataTypeConversion: '<S109>/Data Type Conversion8' */
  Intergration_B.BusCreator_ec.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_b5;

  /* DataTypeConversion: '<S109>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_i = (real32_T)
    Intergration_B.SFunction1_o10_l0;

  /* DataTypeConversion: '<S109>/Data Type Conversion10' */
  Intergration_B.BusCreator_ec.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_fn;

  /* DataTypeConversion: '<S109>/Data Type Conversion11' */
  Intergration_B.BusCreator_ec.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_e;

  /* DataTypeConversion: '<S109>/Data Type Conversion12' */
  Intergration_B.BusCreator_ec.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_g1;

  /* DataTypeConversion: '<S109>/Data Type Conversion13' */
  Intergration_B.BusCreator_ec.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ot0;

  /* DataTypeConversion: '<S109>/Data Type Conversion14' */
  Intergration_B.BusCreator_ec.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_m;

  /* DataTypeConversion: '<S109>/Data Type Conversion15' */
  Intergration_B.BusCreator_ec.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_mt;

  /* DataTypeConversion: '<S109>/Data Type Conversion16' */
  Intergration_B.BusCreator_ec.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_n1;

  /* DataTypeConversion: '<S109>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_bo = (real32_T)
    Intergration_B.SFunction1_o6_br;

  /* DataTypeConversion: '<S109>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_g = (real32_T)
    Intergration_B.SFunction1_o7_pu;

  /* DataTypeConversion: '<S109>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_l = (real32_T)
    Intergration_B.SFunction1_o8_ok;

  /* BusCreator: '<S109>/Bus Creator' */
  Intergration_B.BusCreator_ec.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_h;
  Intergration_B.BusCreator_ec.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_k;
  Intergration_B.BusCreator_ec.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_i;
  Intergration_B.BusCreator_ec.Obj_XPos = Intergration_B.DataTypeConversion17_bo;
  Intergration_B.BusCreator_ec.Obj_YPos = Intergration_B.DataTypeConversion18_g;
  Intergration_B.BusCreator_ec.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_l;

  /* DataTypeConversion: '<S110>/Data Type Conversion' */
  Intergration_B.BusCreator_f.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_f;

  /* DataTypeConversion: '<S110>/Data Type Conversion1' */
  Intergration_B.BusCreator_f.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ld;

  /* DataTypeConversion: '<S110>/Data Type Conversion2' */
  Intergration_B.BusCreator_f.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_cv;

  /* DataTypeConversion: '<S110>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_i = (real32_T)
    Intergration_B.SFunction1_o4_iz;

  /* DataTypeConversion: '<S110>/Data Type Conversion4' */
  Intergration_B.BusCreator_f.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_oi;

  /* DataTypeConversion: '<S110>/Data Type Conversion5' */
  Intergration_B.BusCreator_f.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_p;

  /* DataTypeConversion: '<S110>/Data Type Conversion6' */
  Intergration_B.BusCreator_f.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_ga;

  /* DataTypeConversion: '<S110>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_nn = (real32_T)
    Intergration_B.SFunction1_o8_b;

  /* DataTypeConversion: '<S110>/Data Type Conversion8' */
  Intergration_B.BusCreator_f.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_bq;

  /* DataTypeConversion: '<S110>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_f = (real32_T)
    Intergration_B.SFunction1_o10_ol;

  /* DataTypeConversion: '<S110>/Data Type Conversion10' */
  Intergration_B.BusCreator_f.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_ef;

  /* DataTypeConversion: '<S110>/Data Type Conversion11' */
  Intergration_B.BusCreator_f.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_ig;

  /* DataTypeConversion: '<S110>/Data Type Conversion12' */
  Intergration_B.BusCreator_f.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_b3;

  /* DataTypeConversion: '<S110>/Data Type Conversion13' */
  Intergration_B.BusCreator_f.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_br;

  /* DataTypeConversion: '<S110>/Data Type Conversion14' */
  Intergration_B.BusCreator_f.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_bl;

  /* DataTypeConversion: '<S110>/Data Type Conversion15' */
  Intergration_B.BusCreator_f.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_ps;

  /* DataTypeConversion: '<S110>/Data Type Conversion16' */
  Intergration_B.BusCreator_f.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_i0;

  /* DataTypeConversion: '<S110>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_h = (real32_T)
    Intergration_B.SFunction1_o6_lf;

  /* DataTypeConversion: '<S110>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_i = (real32_T)
    Intergration_B.SFunction1_o7_ik;

  /* DataTypeConversion: '<S110>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_bo = (real32_T)
    Intergration_B.SFunction1_o8_hf;

  /* BusCreator: '<S110>/Bus Creator' */
  Intergration_B.BusCreator_f.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_i;
  Intergration_B.BusCreator_f.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_nn;
  Intergration_B.BusCreator_f.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_f;
  Intergration_B.BusCreator_f.Obj_XPos = Intergration_B.DataTypeConversion17_h;
  Intergration_B.BusCreator_f.Obj_YPos = Intergration_B.DataTypeConversion18_i;
  Intergration_B.BusCreator_f.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_bo;

  /* DataTypeConversion: '<S111>/Data Type Conversion' */
  Intergration_B.BusCreator_fc.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_c5;

  /* DataTypeConversion: '<S111>/Data Type Conversion1' */
  Intergration_B.BusCreator_fc.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ha;

  /* DataTypeConversion: '<S111>/Data Type Conversion2' */
  Intergration_B.BusCreator_fc.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_d;

  /* DataTypeConversion: '<S111>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_a = (real32_T)
    Intergration_B.SFunction1_o4_ax;

  /* DataTypeConversion: '<S111>/Data Type Conversion4' */
  Intergration_B.BusCreator_fc.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_jj;

  /* DataTypeConversion: '<S111>/Data Type Conversion5' */
  Intergration_B.BusCreator_fc.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_o;

  /* DataTypeConversion: '<S111>/Data Type Conversion6' */
  Intergration_B.BusCreator_fc.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_a;

  /* DataTypeConversion: '<S111>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_f = (real32_T)
    Intergration_B.SFunction1_o8_bn;

  /* DataTypeConversion: '<S111>/Data Type Conversion8' */
  Intergration_B.BusCreator_fc.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_nd;

  /* DataTypeConversion: '<S111>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_o = (real32_T)
    Intergration_B.SFunction1_o10_oz;

  /* DataTypeConversion: '<S111>/Data Type Conversion10' */
  Intergration_B.BusCreator_fc.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_gj;

  /* DataTypeConversion: '<S111>/Data Type Conversion11' */
  Intergration_B.BusCreator_fc.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_dp;

  /* DataTypeConversion: '<S111>/Data Type Conversion12' */
  Intergration_B.BusCreator_fc.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_bs;

  /* DataTypeConversion: '<S111>/Data Type Conversion13' */
  Intergration_B.BusCreator_fc.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_f1;

  /* DataTypeConversion: '<S111>/Data Type Conversion14' */
  Intergration_B.BusCreator_fc.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ej;

  /* DataTypeConversion: '<S111>/Data Type Conversion15' */
  Intergration_B.BusCreator_fc.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_lw;

  /* DataTypeConversion: '<S111>/Data Type Conversion16' */
  Intergration_B.BusCreator_fc.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_h;

  /* DataTypeConversion: '<S111>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_m = (real32_T)
    Intergration_B.SFunction1_o6_h4;

  /* DataTypeConversion: '<S111>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_gh = (real32_T)
    Intergration_B.SFunction1_o7_px;

  /* DataTypeConversion: '<S111>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_c = (real32_T)
    Intergration_B.SFunction1_o8_kd;

  /* BusCreator: '<S111>/Bus Creator' */
  Intergration_B.BusCreator_fc.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_a;
  Intergration_B.BusCreator_fc.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_f;
  Intergration_B.BusCreator_fc.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_o;
  Intergration_B.BusCreator_fc.Obj_XPos = Intergration_B.DataTypeConversion17_m;
  Intergration_B.BusCreator_fc.Obj_YPos = Intergration_B.DataTypeConversion18_gh;
  Intergration_B.BusCreator_fc.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_c;

  /* DataTypeConversion: '<S112>/Data Type Conversion' */
  Intergration_B.BusCreator_c.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_h;

  /* DataTypeConversion: '<S112>/Data Type Conversion1' */
  Intergration_B.BusCreator_c.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_fn;

  /* DataTypeConversion: '<S112>/Data Type Conversion2' */
  Intergration_B.BusCreator_c.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_jo;

  /* DataTypeConversion: '<S112>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_j = (real32_T)
    Intergration_B.SFunction1_o4_gk;

  /* DataTypeConversion: '<S112>/Data Type Conversion4' */
  Intergration_B.BusCreator_c.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_dm;

  /* DataTypeConversion: '<S112>/Data Type Conversion5' */
  Intergration_B.BusCreator_c.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_iz;

  /* DataTypeConversion: '<S112>/Data Type Conversion6' */
  Intergration_B.BusCreator_c.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_kx;

  /* DataTypeConversion: '<S112>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_kz = (real32_T)
    Intergration_B.SFunction1_o8_kt;

  /* DataTypeConversion: '<S112>/Data Type Conversion8' */
  Intergration_B.BusCreator_c.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_o5;

  /* DataTypeConversion: '<S112>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_gc = (real32_T)
    Intergration_B.SFunction1_o10_au;

  /* DataTypeConversion: '<S112>/Data Type Conversion10' */
  Intergration_B.BusCreator_c.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_he;

  /* DataTypeConversion: '<S112>/Data Type Conversion11' */
  Intergration_B.BusCreator_c.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_el;

  /* DataTypeConversion: '<S112>/Data Type Conversion12' */
  Intergration_B.BusCreator_c.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_dz;

  /* DataTypeConversion: '<S112>/Data Type Conversion13' */
  Intergration_B.BusCreator_c.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ic;

  /* DataTypeConversion: '<S112>/Data Type Conversion14' */
  Intergration_B.BusCreator_c.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_fo;

  /* DataTypeConversion: '<S112>/Data Type Conversion15' */
  Intergration_B.BusCreator_c.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_le;

  /* DataTypeConversion: '<S112>/Data Type Conversion16' */
  Intergration_B.BusCreator_c.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_bz;

  /* DataTypeConversion: '<S112>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_i = (real32_T)
    Intergration_B.SFunction1_o6_nl;

  /* DataTypeConversion: '<S112>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_o = (real32_T)
    Intergration_B.SFunction1_o7_j;

  /* DataTypeConversion: '<S112>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_c0 = (real32_T)
    Intergration_B.SFunction1_o8_ci;

  /* BusCreator: '<S112>/Bus Creator' */
  Intergration_B.BusCreator_c.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_j;
  Intergration_B.BusCreator_c.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_kz;
  Intergration_B.BusCreator_c.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_gc;
  Intergration_B.BusCreator_c.Obj_XPos = Intergration_B.DataTypeConversion17_i;
  Intergration_B.BusCreator_c.Obj_YPos = Intergration_B.DataTypeConversion18_o;
  Intergration_B.BusCreator_c.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_c0;

  /* DataTypeConversion: '<S74>/Data Type Conversion' */
  Intergration_B.BusCreator_m.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_e;

  /* DataTypeConversion: '<S74>/Data Type Conversion1' */
  Intergration_B.BusCreator_m.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_nh;

  /* DataTypeConversion: '<S74>/Data Type Conversion2' */
  Intergration_B.BusCreator_m.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ia;

  /* DataTypeConversion: '<S74>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_mm = (real32_T)
    Intergration_B.SFunction1_o4_de;

  /* DataTypeConversion: '<S74>/Data Type Conversion4' */
  Intergration_B.BusCreator_m.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_j2;

  /* DataTypeConversion: '<S74>/Data Type Conversion5' */
  Intergration_B.BusCreator_m.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_gu;

  /* DataTypeConversion: '<S74>/Data Type Conversion6' */
  Intergration_B.BusCreator_m.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_lo;

  /* DataTypeConversion: '<S74>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_co = (real32_T)
    Intergration_B.SFunction1_o8_g5;

  /* DataTypeConversion: '<S74>/Data Type Conversion8' */
  Intergration_B.BusCreator_m.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ev;

  /* DataTypeConversion: '<S74>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_h = (real32_T)
    Intergration_B.SFunction1_o10_pr;

  /* DataTypeConversion: '<S74>/Data Type Conversion10' */
  Intergration_B.BusCreator_m.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_m;

  /* DataTypeConversion: '<S74>/Data Type Conversion11' */
  Intergration_B.BusCreator_m.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_b;

  /* DataTypeConversion: '<S74>/Data Type Conversion12' */
  Intergration_B.BusCreator_m.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_m3;

  /* DataTypeConversion: '<S74>/Data Type Conversion13' */
  Intergration_B.BusCreator_m.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_he;

  /* DataTypeConversion: '<S74>/Data Type Conversion14' */
  Intergration_B.BusCreator_m.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_dp;

  /* DataTypeConversion: '<S74>/Data Type Conversion15' */
  Intergration_B.BusCreator_m.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_gu;

  /* DataTypeConversion: '<S74>/Data Type Conversion16' */
  Intergration_B.BusCreator_m.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_af;

  /* DataTypeConversion: '<S74>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_i2 = (real32_T)
    Intergration_B.SFunction1_o6_p4;

  /* DataTypeConversion: '<S74>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_n = (real32_T)
    Intergration_B.SFunction1_o7_em;

  /* DataTypeConversion: '<S74>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_m4 = (real32_T)
    Intergration_B.SFunction1_o8_eb;

  /* BusCreator: '<S74>/Bus Creator' */
  Intergration_B.BusCreator_m.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_mm;
  Intergration_B.BusCreator_m.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_co;
  Intergration_B.BusCreator_m.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_h;
  Intergration_B.BusCreator_m.Obj_XPos = Intergration_B.DataTypeConversion17_i2;
  Intergration_B.BusCreator_m.Obj_YPos = Intergration_B.DataTypeConversion18_n;
  Intergration_B.BusCreator_m.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_m4;

  /* DataTypeConversion: '<S75>/Data Type Conversion' */
  Intergration_B.BusCreator_j.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_khd;

  /* DataTypeConversion: '<S75>/Data Type Conversion1' */
  Intergration_B.BusCreator_j.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_dp;

  /* DataTypeConversion: '<S75>/Data Type Conversion2' */
  Intergration_B.BusCreator_j.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_g;

  /* DataTypeConversion: '<S75>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_a5 = (real32_T)
    Intergration_B.SFunction1_o4_f;

  /* DataTypeConversion: '<S75>/Data Type Conversion4' */
  Intergration_B.BusCreator_j.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_fx;

  /* DataTypeConversion: '<S75>/Data Type Conversion5' */
  Intergration_B.BusCreator_j.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_ea;

  /* DataTypeConversion: '<S75>/Data Type Conversion6' */
  Intergration_B.BusCreator_j.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_i2;

  /* DataTypeConversion: '<S75>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_o = (real32_T)
    Intergration_B.SFunction1_o8_du;

  /* DataTypeConversion: '<S75>/Data Type Conversion8' */
  Intergration_B.BusCreator_j.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_i;

  /* DataTypeConversion: '<S75>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_j = (real32_T)
    Intergration_B.SFunction1_o10_m;

  /* DataTypeConversion: '<S75>/Data Type Conversion10' */
  Intergration_B.BusCreator_j.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_ji;

  /* DataTypeConversion: '<S75>/Data Type Conversion11' */
  Intergration_B.BusCreator_j.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_f;

  /* DataTypeConversion: '<S75>/Data Type Conversion12' */
  Intergration_B.BusCreator_j.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ih;

  /* DataTypeConversion: '<S75>/Data Type Conversion13' */
  Intergration_B.BusCreator_j.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_gq;

  /* DataTypeConversion: '<S75>/Data Type Conversion14' */
  Intergration_B.BusCreator_j.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_le;

  /* DataTypeConversion: '<S75>/Data Type Conversion15' */
  Intergration_B.BusCreator_j.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_l0;

  /* DataTypeConversion: '<S75>/Data Type Conversion16' */
  Intergration_B.BusCreator_j.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_ht;

  /* DataTypeConversion: '<S75>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_d0 = (real32_T)
    Intergration_B.SFunction1_o6_ha;

  /* DataTypeConversion: '<S75>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_h = (real32_T)
    Intergration_B.SFunction1_o7_o3;

  /* DataTypeConversion: '<S75>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_p = (real32_T)
    Intergration_B.SFunction1_o8_i;

  /* BusCreator: '<S75>/Bus Creator' */
  Intergration_B.BusCreator_j.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_a5;
  Intergration_B.BusCreator_j.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_o;
  Intergration_B.BusCreator_j.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_j;
  Intergration_B.BusCreator_j.Obj_XPos = Intergration_B.DataTypeConversion17_d0;
  Intergration_B.BusCreator_j.Obj_YPos = Intergration_B.DataTypeConversion18_h;
  Intergration_B.BusCreator_j.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_p;

  /* DataTypeConversion: '<S76>/Data Type Conversion' */
  Intergration_B.BusCreator_lo.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_n0;

  /* DataTypeConversion: '<S76>/Data Type Conversion1' */
  Intergration_B.BusCreator_lo.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_kp;

  /* DataTypeConversion: '<S76>/Data Type Conversion2' */
  Intergration_B.BusCreator_lo.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_d3;

  /* DataTypeConversion: '<S76>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_l = (real32_T)
    Intergration_B.SFunction1_o4_aq;

  /* DataTypeConversion: '<S76>/Data Type Conversion4' */
  Intergration_B.BusCreator_lo.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_j0;

  /* DataTypeConversion: '<S76>/Data Type Conversion5' */
  Intergration_B.BusCreator_lo.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_gn;

  /* DataTypeConversion: '<S76>/Data Type Conversion6' */
  Intergration_B.BusCreator_lo.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_nd;

  /* DataTypeConversion: '<S76>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_l = (real32_T)
    Intergration_B.SFunction1_o8_km;

  /* DataTypeConversion: '<S76>/Data Type Conversion8' */
  Intergration_B.BusCreator_lo.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_d;

  /* DataTypeConversion: '<S76>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_e1 = (real32_T)
    Intergration_B.SFunction1_o10_if;

  /* DataTypeConversion: '<S76>/Data Type Conversion10' */
  Intergration_B.BusCreator_lo.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_cw;

  /* DataTypeConversion: '<S76>/Data Type Conversion11' */
  Intergration_B.BusCreator_lo.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_a;

  /* DataTypeConversion: '<S76>/Data Type Conversion12' */
  Intergration_B.BusCreator_lo.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_eo;

  /* DataTypeConversion: '<S76>/Data Type Conversion13' */
  Intergration_B.BusCreator_lo.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_lz;

  /* DataTypeConversion: '<S76>/Data Type Conversion14' */
  Intergration_B.BusCreator_lo.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_l0;

  /* DataTypeConversion: '<S76>/Data Type Conversion15' */
  Intergration_B.BusCreator_lo.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_i4;

  /* DataTypeConversion: '<S76>/Data Type Conversion16' */
  Intergration_B.BusCreator_lo.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_i2;

  /* DataTypeConversion: '<S76>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_b2 = (real32_T)
    Intergration_B.SFunction1_o6_cp;

  /* DataTypeConversion: '<S76>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_a = (real32_T)
    Intergration_B.SFunction1_o7_e2;

  /* DataTypeConversion: '<S76>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_d = (real32_T)
    Intergration_B.SFunction1_o8_dx3;

  /* BusCreator: '<S76>/Bus Creator' */
  Intergration_B.BusCreator_lo.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_l;
  Intergration_B.BusCreator_lo.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_l;
  Intergration_B.BusCreator_lo.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_e1;
  Intergration_B.BusCreator_lo.Obj_XPos = Intergration_B.DataTypeConversion17_b2;
  Intergration_B.BusCreator_lo.Obj_YPos = Intergration_B.DataTypeConversion18_a;
  Intergration_B.BusCreator_lo.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_d;

  /* DataTypeConversion: '<S77>/Data Type Conversion' */
  Intergration_B.BusCreator_i.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_opc;

  /* DataTypeConversion: '<S77>/Data Type Conversion1' */
  Intergration_B.BusCreator_i.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_id;

  /* DataTypeConversion: '<S77>/Data Type Conversion2' */
  Intergration_B.BusCreator_i.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_mf;

  /* DataTypeConversion: '<S77>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_d1 = (real32_T)
    Intergration_B.SFunction1_o4_cg;

  /* DataTypeConversion: '<S77>/Data Type Conversion4' */
  Intergration_B.BusCreator_i.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_afm;

  /* DataTypeConversion: '<S77>/Data Type Conversion5' */
  Intergration_B.BusCreator_i.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_mt;

  /* DataTypeConversion: '<S77>/Data Type Conversion6' */
  Intergration_B.BusCreator_i.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_loo;

  /* DataTypeConversion: '<S77>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_a = (real32_T)
    Intergration_B.SFunction1_o8_ek;

  /* DataTypeConversion: '<S77>/Data Type Conversion8' */
  Intergration_B.BusCreator_i.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_bw;

  /* DataTypeConversion: '<S77>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_el = (real32_T)
    Intergration_B.SFunction1_o10_g2;

  /* DataTypeConversion: '<S77>/Data Type Conversion10' */
  Intergration_B.BusCreator_i.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_fu;

  /* DataTypeConversion: '<S77>/Data Type Conversion11' */
  Intergration_B.BusCreator_i.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_h;

  /* DataTypeConversion: '<S77>/Data Type Conversion12' */
  Intergration_B.BusCreator_i.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_dr;

  /* DataTypeConversion: '<S77>/Data Type Conversion13' */
  Intergration_B.BusCreator_i.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_oo;

  /* DataTypeConversion: '<S77>/Data Type Conversion14' */
  Intergration_B.BusCreator_i.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ml;

  /* DataTypeConversion: '<S77>/Data Type Conversion15' */
  Intergration_B.BusCreator_i.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_b2;

  /* DataTypeConversion: '<S77>/Data Type Conversion16' */
  Intergration_B.BusCreator_i.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_ny;

  /* DataTypeConversion: '<S77>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_a = (real32_T)
    Intergration_B.SFunction1_o6_ni;

  /* DataTypeConversion: '<S77>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_d = (real32_T)
    Intergration_B.SFunction1_o7_ndy;

  /* DataTypeConversion: '<S77>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_pj = (real32_T)
    Intergration_B.SFunction1_o8_gh;

  /* BusCreator: '<S77>/Bus Creator' */
  Intergration_B.BusCreator_i.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_d1;
  Intergration_B.BusCreator_i.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_a;
  Intergration_B.BusCreator_i.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_el;
  Intergration_B.BusCreator_i.Obj_XPos = Intergration_B.DataTypeConversion17_a;
  Intergration_B.BusCreator_i.Obj_YPos = Intergration_B.DataTypeConversion18_d;
  Intergration_B.BusCreator_i.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_pj;

  /* DataTypeConversion: '<S80>/Data Type Conversion' */
  Intergration_B.BusCreator_a.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_kc;

  /* DataTypeConversion: '<S80>/Data Type Conversion1' */
  Intergration_B.BusCreator_a.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ck;

  /* DataTypeConversion: '<S80>/Data Type Conversion2' */
  Intergration_B.BusCreator_a.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ik;

  /* DataTypeConversion: '<S80>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_nt = (real32_T)
    Intergration_B.SFunction1_o4_bj;

  /* DataTypeConversion: '<S80>/Data Type Conversion4' */
  Intergration_B.BusCreator_a.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_ga;

  /* DataTypeConversion: '<S80>/Data Type Conversion5' */
  Intergration_B.BusCreator_a.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_pv;

  /* DataTypeConversion: '<S80>/Data Type Conversion6' */
  Intergration_B.BusCreator_a.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_d;

  /* DataTypeConversion: '<S80>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_lu = (real32_T)
    Intergration_B.SFunction1_o8_cg;

  /* DataTypeConversion: '<S80>/Data Type Conversion8' */
  Intergration_B.BusCreator_a.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_gk;

  /* DataTypeConversion: '<S80>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_mf = (real32_T)
    Intergration_B.SFunction1_o10_dc;

  /* DataTypeConversion: '<S80>/Data Type Conversion10' */
  Intergration_B.BusCreator_a.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_k;

  /* DataTypeConversion: '<S80>/Data Type Conversion11' */
  Intergration_B.BusCreator_a.Obj_ID = (real32_T)Intergration_B.SFunction1_o12_j;

  /* DataTypeConversion: '<S80>/Data Type Conversion12' */
  Intergration_B.BusCreator_a.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_j4;

  /* DataTypeConversion: '<S80>/Data Type Conversion13' */
  Intergration_B.BusCreator_a.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_bh;

  /* DataTypeConversion: '<S80>/Data Type Conversion14' */
  Intergration_B.BusCreator_a.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_po;

  /* DataTypeConversion: '<S80>/Data Type Conversion15' */
  Intergration_B.BusCreator_a.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_hv;

  /* DataTypeConversion: '<S80>/Data Type Conversion16' */
  Intergration_B.BusCreator_a.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_g1;

  /* DataTypeConversion: '<S80>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_mh = (real32_T)
    Intergration_B.SFunction1_o6_nib;

  /* DataTypeConversion: '<S80>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_og = (real32_T)
    Intergration_B.SFunction1_o7_ho;

  /* DataTypeConversion: '<S80>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_k = (real32_T)
    Intergration_B.SFunction1_o8_d3;

  /* BusCreator: '<S80>/Bus Creator' */
  Intergration_B.BusCreator_a.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_nt;
  Intergration_B.BusCreator_a.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_lu;
  Intergration_B.BusCreator_a.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_mf;
  Intergration_B.BusCreator_a.Obj_XPos = Intergration_B.DataTypeConversion17_mh;
  Intergration_B.BusCreator_a.Obj_YPos = Intergration_B.DataTypeConversion18_og;
  Intergration_B.BusCreator_a.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_k;

  /* DataTypeConversion: '<S81>/Data Type Conversion' */
  Intergration_B.BusCreator_k.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_a;

  /* DataTypeConversion: '<S81>/Data Type Conversion1' */
  Intergration_B.BusCreator_k.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_oh;

  /* DataTypeConversion: '<S81>/Data Type Conversion2' */
  Intergration_B.BusCreator_k.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_bf;

  /* DataTypeConversion: '<S81>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_c = (real32_T)
    Intergration_B.SFunction1_o4_d2;

  /* DataTypeConversion: '<S81>/Data Type Conversion4' */
  Intergration_B.BusCreator_k.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_lq;

  /* DataTypeConversion: '<S81>/Data Type Conversion5' */
  Intergration_B.BusCreator_k.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_jz;

  /* DataTypeConversion: '<S81>/Data Type Conversion6' */
  Intergration_B.BusCreator_k.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_aw;

  /* DataTypeConversion: '<S81>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_h = (real32_T)
    Intergration_B.SFunction1_o8_bw;

  /* DataTypeConversion: '<S81>/Data Type Conversion8' */
  Intergration_B.BusCreator_k.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_cd;

  /* DataTypeConversion: '<S81>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_iu = (real32_T)
    Intergration_B.SFunction1_o10_o4;

  /* DataTypeConversion: '<S81>/Data Type Conversion10' */
  Intergration_B.BusCreator_k.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_av;

  /* DataTypeConversion: '<S81>/Data Type Conversion11' */
  Intergration_B.BusCreator_k.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_ff;

  /* DataTypeConversion: '<S81>/Data Type Conversion12' */
  Intergration_B.BusCreator_k.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_od;

  /* DataTypeConversion: '<S81>/Data Type Conversion13' */
  Intergration_B.BusCreator_k.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_kpj;

  /* DataTypeConversion: '<S81>/Data Type Conversion14' */
  Intergration_B.BusCreator_k.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_b0;

  /* DataTypeConversion: '<S81>/Data Type Conversion15' */
  Intergration_B.BusCreator_k.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_aq1;

  /* DataTypeConversion: '<S81>/Data Type Conversion16' */
  Intergration_B.BusCreator_k.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_oo;

  /* DataTypeConversion: '<S81>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_hx = (real32_T)
    Intergration_B.SFunction1_o6_nb;

  /* DataTypeConversion: '<S81>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_c = (real32_T)
    Intergration_B.SFunction1_o7_eg;

  /* DataTypeConversion: '<S81>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_cc = (real32_T)
    Intergration_B.SFunction1_o8_pa;

  /* BusCreator: '<S81>/Bus Creator' */
  Intergration_B.BusCreator_k.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_c;
  Intergration_B.BusCreator_k.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_h;
  Intergration_B.BusCreator_k.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_iu;
  Intergration_B.BusCreator_k.Obj_XPos = Intergration_B.DataTypeConversion17_hx;
  Intergration_B.BusCreator_k.Obj_YPos = Intergration_B.DataTypeConversion18_c;
  Intergration_B.BusCreator_k.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_cc;

  /* DataTypeConversion: '<S82>/Data Type Conversion' */
  Intergration_B.BusCreator_a4.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_p0;

  /* DataTypeConversion: '<S82>/Data Type Conversion1' */
  Intergration_B.BusCreator_a4.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_dd;

  /* DataTypeConversion: '<S82>/Data Type Conversion2' */
  Intergration_B.BusCreator_a4.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_bn;

  /* DataTypeConversion: '<S82>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_b = (real32_T)
    Intergration_B.SFunction1_o4_jj;

  /* DataTypeConversion: '<S82>/Data Type Conversion4' */
  Intergration_B.BusCreator_a4.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_pa;

  /* DataTypeConversion: '<S82>/Data Type Conversion5' */
  Intergration_B.BusCreator_a4.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_lfy;

  /* DataTypeConversion: '<S82>/Data Type Conversion6' */
  Intergration_B.BusCreator_a4.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_e0;

  /* DataTypeConversion: '<S82>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_ju = (real32_T)
    Intergration_B.SFunction1_o8_ms;

  /* DataTypeConversion: '<S82>/Data Type Conversion8' */
  Intergration_B.BusCreator_a4.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ic;

  /* DataTypeConversion: '<S82>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_k = (real32_T)
    Intergration_B.SFunction1_o10_id;

  /* DataTypeConversion: '<S82>/Data Type Conversion10' */
  Intergration_B.BusCreator_a4.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_cm;

  /* DataTypeConversion: '<S82>/Data Type Conversion11' */
  Intergration_B.BusCreator_a4.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_fz;

  /* DataTypeConversion: '<S82>/Data Type Conversion12' */
  Intergration_B.BusCreator_a4.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_no;

  /* DataTypeConversion: '<S82>/Data Type Conversion13' */
  Intergration_B.BusCreator_a4.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ns;

  /* DataTypeConversion: '<S82>/Data Type Conversion14' */
  Intergration_B.BusCreator_a4.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ma;

  /* DataTypeConversion: '<S82>/Data Type Conversion15' */
  Intergration_B.BusCreator_a4.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_ia;

  /* DataTypeConversion: '<S82>/Data Type Conversion16' */
  Intergration_B.BusCreator_a4.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_mq;

  /* DataTypeConversion: '<S82>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_j = (real32_T)
    Intergration_B.SFunction1_o6_l0;

  /* DataTypeConversion: '<S82>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_ay = (real32_T)
    Intergration_B.SFunction1_o7_in;

  /* DataTypeConversion: '<S82>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_mt = (real32_T)
    Intergration_B.SFunction1_o8_as;

  /* BusCreator: '<S82>/Bus Creator' */
  Intergration_B.BusCreator_a4.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_b;
  Intergration_B.BusCreator_a4.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_ju;
  Intergration_B.BusCreator_a4.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_k;
  Intergration_B.BusCreator_a4.Obj_XPos = Intergration_B.DataTypeConversion17_j;
  Intergration_B.BusCreator_a4.Obj_YPos = Intergration_B.DataTypeConversion18_ay;
  Intergration_B.BusCreator_a4.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_mt;

  /* DataTypeConversion: '<S83>/Data Type Conversion' */
  Intergration_B.BusCreator_jl.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_bp;

  /* DataTypeConversion: '<S83>/Data Type Conversion1' */
  Intergration_B.BusCreator_jl.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_iw;

  /* DataTypeConversion: '<S83>/Data Type Conversion2' */
  Intergration_B.BusCreator_jl.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_nxj;

  /* DataTypeConversion: '<S83>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_id = (real32_T)
    Intergration_B.SFunction1_o4_o4;

  /* DataTypeConversion: '<S83>/Data Type Conversion4' */
  Intergration_B.BusCreator_jl.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_lp;

  /* DataTypeConversion: '<S83>/Data Type Conversion5' */
  Intergration_B.BusCreator_jl.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_dm;

  /* DataTypeConversion: '<S83>/Data Type Conversion6' */
  Intergration_B.BusCreator_jl.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_ex;

  /* DataTypeConversion: '<S83>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_hf = (real32_T)
    Intergration_B.SFunction1_o8_cp;

  /* DataTypeConversion: '<S83>/Data Type Conversion8' */
  Intergration_B.BusCreator_jl.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_dm;

  /* DataTypeConversion: '<S83>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_gh = (real32_T)
    Intergration_B.SFunction1_o10_fw;

  /* DataTypeConversion: '<S83>/Data Type Conversion10' */
  Intergration_B.BusCreator_jl.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_ju;

  /* DataTypeConversion: '<S83>/Data Type Conversion11' */
  Intergration_B.BusCreator_jl.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_hd;

  /* DataTypeConversion: '<S83>/Data Type Conversion12' */
  Intergration_B.BusCreator_jl.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_cb;

  /* DataTypeConversion: '<S83>/Data Type Conversion13' */
  Intergration_B.BusCreator_jl.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_av;

  /* DataTypeConversion: '<S83>/Data Type Conversion14' */
  Intergration_B.BusCreator_jl.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ge;

  /* DataTypeConversion: '<S83>/Data Type Conversion15' */
  Intergration_B.BusCreator_jl.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_gb;

  /* DataTypeConversion: '<S83>/Data Type Conversion16' */
  Intergration_B.BusCreator_jl.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_iu;

  /* DataTypeConversion: '<S83>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_o = (real32_T)
    Intergration_B.SFunction1_o6_mc;

  /* DataTypeConversion: '<S83>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_as = (real32_T)
    Intergration_B.SFunction1_o7_hq;

  /* DataTypeConversion: '<S83>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_dw = (real32_T)
    Intergration_B.SFunction1_o8_an;

  /* BusCreator: '<S83>/Bus Creator' */
  Intergration_B.BusCreator_jl.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_id;
  Intergration_B.BusCreator_jl.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_hf;
  Intergration_B.BusCreator_jl.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_gh;
  Intergration_B.BusCreator_jl.Obj_XPos = Intergration_B.DataTypeConversion17_o;
  Intergration_B.BusCreator_jl.Obj_YPos = Intergration_B.DataTypeConversion18_as;
  Intergration_B.BusCreator_jl.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_dw;

  /* DataTypeConversion: '<S85>/Data Type Conversion' */
  Intergration_B.BusCreator_ep.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_fb;

  /* DataTypeConversion: '<S85>/Data Type Conversion1' */
  Intergration_B.BusCreator_ep.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_h5;

  /* DataTypeConversion: '<S85>/Data Type Conversion2' */
  Intergration_B.BusCreator_ep.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_me;

  /* DataTypeConversion: '<S85>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_l0 = (real32_T)
    Intergration_B.SFunction1_o4_ih;

  /* DataTypeConversion: '<S85>/Data Type Conversion4' */
  Intergration_B.BusCreator_ep.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_ok;

  /* DataTypeConversion: '<S85>/Data Type Conversion5' */
  Intergration_B.BusCreator_ep.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_as;

  /* DataTypeConversion: '<S85>/Data Type Conversion6' */
  Intergration_B.BusCreator_ep.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_bz;

  /* DataTypeConversion: '<S85>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_ax = (real32_T)
    Intergration_B.SFunction1_o8_ew;

  /* DataTypeConversion: '<S85>/Data Type Conversion8' */
  Intergration_B.BusCreator_ep.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_h;

  /* DataTypeConversion: '<S85>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_kl = (real32_T)
    Intergration_B.SFunction1_o10_ga;

  /* DataTypeConversion: '<S85>/Data Type Conversion10' */
  Intergration_B.BusCreator_ep.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_jz;

  /* DataTypeConversion: '<S85>/Data Type Conversion11' */
  Intergration_B.BusCreator_ep.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_dz;

  /* DataTypeConversion: '<S85>/Data Type Conversion12' */
  Intergration_B.BusCreator_ep.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ny;

  /* DataTypeConversion: '<S85>/Data Type Conversion13' */
  Intergration_B.BusCreator_ep.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_nsn;

  /* DataTypeConversion: '<S85>/Data Type Conversion14' */
  Intergration_B.BusCreator_ep.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_gf;

  /* DataTypeConversion: '<S85>/Data Type Conversion15' */
  Intergration_B.BusCreator_ep.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_b1;

  /* DataTypeConversion: '<S85>/Data Type Conversion16' */
  Intergration_B.BusCreator_ep.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_ac;

  /* DataTypeConversion: '<S85>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_c = (real32_T)
    Intergration_B.SFunction1_o6_fq;

  /* DataTypeConversion: '<S85>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_p = (real32_T)
    Intergration_B.SFunction1_o7_mnh;

  /* DataTypeConversion: '<S85>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_d2 = (real32_T)
    Intergration_B.SFunction1_o8_e3;

  /* BusCreator: '<S85>/Bus Creator' */
  Intergration_B.BusCreator_ep.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_l0;
  Intergration_B.BusCreator_ep.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_ax;
  Intergration_B.BusCreator_ep.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_kl;
  Intergration_B.BusCreator_ep.Obj_XPos = Intergration_B.DataTypeConversion17_c;
  Intergration_B.BusCreator_ep.Obj_YPos = Intergration_B.DataTypeConversion18_p;
  Intergration_B.BusCreator_ep.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_d2;

  /* DataTypeConversion: '<S86>/Data Type Conversion' */
  Intergration_B.BusCreator_d.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_cz;

  /* DataTypeConversion: '<S86>/Data Type Conversion1' */
  Intergration_B.BusCreator_d.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ov;

  /* DataTypeConversion: '<S86>/Data Type Conversion2' */
  Intergration_B.BusCreator_d.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ce;

  /* DataTypeConversion: '<S86>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_fs = (real32_T)
    Intergration_B.SFunction1_o4_lx;

  /* DataTypeConversion: '<S86>/Data Type Conversion4' */
  Intergration_B.BusCreator_d.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_gp;

  /* DataTypeConversion: '<S86>/Data Type Conversion5' */
  Intergration_B.BusCreator_d.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_oo;

  /* DataTypeConversion: '<S86>/Data Type Conversion6' */
  Intergration_B.BusCreator_d.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_ft;

  /* DataTypeConversion: '<S86>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_fm = (real32_T)
    Intergration_B.SFunction1_o8_pq;

  /* DataTypeConversion: '<S86>/Data Type Conversion8' */
  Intergration_B.BusCreator_d.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ho;

  /* DataTypeConversion: '<S86>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_ek = (real32_T)
    Intergration_B.SFunction1_o10_hx;

  /* DataTypeConversion: '<S86>/Data Type Conversion10' */
  Intergration_B.BusCreator_d.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_fd;

  /* DataTypeConversion: '<S86>/Data Type Conversion11' */
  Intergration_B.BusCreator_d.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_kr;

  /* DataTypeConversion: '<S86>/Data Type Conversion12' */
  Intergration_B.BusCreator_d.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ha;

  /* DataTypeConversion: '<S86>/Data Type Conversion13' */
  Intergration_B.BusCreator_d.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ag;

  /* DataTypeConversion: '<S86>/Data Type Conversion14' */
  Intergration_B.BusCreator_d.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ks;

  /* DataTypeConversion: '<S86>/Data Type Conversion15' */
  Intergration_B.BusCreator_d.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_cy;

  /* DataTypeConversion: '<S86>/Data Type Conversion16' */
  Intergration_B.BusCreator_d.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_mi;

  /* DataTypeConversion: '<S86>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_e = (real32_T)
    Intergration_B.SFunction1_o6_ft;

  /* DataTypeConversion: '<S86>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_l = (real32_T)
    Intergration_B.SFunction1_o7_od;

  /* DataTypeConversion: '<S86>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_j = (real32_T)
    Intergration_B.SFunction1_o8_gr;

  /* BusCreator: '<S86>/Bus Creator' */
  Intergration_B.BusCreator_d.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_fs;
  Intergration_B.BusCreator_d.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_fm;
  Intergration_B.BusCreator_d.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_ek;
  Intergration_B.BusCreator_d.Obj_XPos = Intergration_B.DataTypeConversion17_e;
  Intergration_B.BusCreator_d.Obj_YPos = Intergration_B.DataTypeConversion18_l;
  Intergration_B.BusCreator_d.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_j;

  /* DataTypeConversion: '<S87>/Data Type Conversion' */
  Intergration_B.BusCreator_h2.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_fq;

  /* DataTypeConversion: '<S87>/Data Type Conversion1' */
  Intergration_B.BusCreator_h2.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_m;

  /* DataTypeConversion: '<S87>/Data Type Conversion2' */
  Intergration_B.BusCreator_h2.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ff;

  /* DataTypeConversion: '<S87>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_o = (real32_T)
    Intergration_B.SFunction1_o4_mw;

  /* DataTypeConversion: '<S87>/Data Type Conversion4' */
  Intergration_B.BusCreator_h2.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_oj;

  /* DataTypeConversion: '<S87>/Data Type Conversion5' */
  Intergration_B.BusCreator_h2.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_i0;

  /* DataTypeConversion: '<S87>/Data Type Conversion6' */
  Intergration_B.BusCreator_h2.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_fr;

  /* DataTypeConversion: '<S87>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_dd = (real32_T)
    Intergration_B.SFunction1_o8_kz;

  /* DataTypeConversion: '<S87>/Data Type Conversion8' */
  Intergration_B.BusCreator_h2.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_lk;

  /* DataTypeConversion: '<S87>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_n = (real32_T)
    Intergration_B.SFunction1_o10_iw;

  /* DataTypeConversion: '<S87>/Data Type Conversion10' */
  Intergration_B.BusCreator_h2.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_dj;

  /* DataTypeConversion: '<S87>/Data Type Conversion11' */
  Intergration_B.BusCreator_h2.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_ct;

  /* DataTypeConversion: '<S87>/Data Type Conversion12' */
  Intergration_B.BusCreator_h2.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_gs;

  /* DataTypeConversion: '<S87>/Data Type Conversion13' */
  Intergration_B.BusCreator_h2.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_f0;

  /* DataTypeConversion: '<S87>/Data Type Conversion14' */
  Intergration_B.BusCreator_h2.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ji;

  /* DataTypeConversion: '<S87>/Data Type Conversion15' */
  Intergration_B.BusCreator_h2.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_h5;

  /* DataTypeConversion: '<S87>/Data Type Conversion16' */
  Intergration_B.BusCreator_h2.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_jf;

  /* DataTypeConversion: '<S87>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_oi = (real32_T)
    Intergration_B.SFunction1_o6_dw;

  /* DataTypeConversion: '<S87>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_gt = (real32_T)
    Intergration_B.SFunction1_o7_ni;

  /* DataTypeConversion: '<S87>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_f = (real32_T)
    Intergration_B.SFunction1_o8_n;

  /* BusCreator: '<S87>/Bus Creator' */
  Intergration_B.BusCreator_h2.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_o;
  Intergration_B.BusCreator_h2.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_dd;
  Intergration_B.BusCreator_h2.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_n;
  Intergration_B.BusCreator_h2.Obj_XPos = Intergration_B.DataTypeConversion17_oi;
  Intergration_B.BusCreator_h2.Obj_YPos = Intergration_B.DataTypeConversion18_gt;
  Intergration_B.BusCreator_h2.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_f;

  /* DataTypeConversion: '<S88>/Data Type Conversion' */
  Intergration_B.BusCreator_hh.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_jm;

  /* DataTypeConversion: '<S88>/Data Type Conversion1' */
  Intergration_B.BusCreator_hh.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_lo;

  /* DataTypeConversion: '<S88>/Data Type Conversion2' */
  Intergration_B.BusCreator_hh.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_nk;

  /* DataTypeConversion: '<S88>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_j4 = (real32_T)
    Intergration_B.SFunction1_o4_hf;

  /* DataTypeConversion: '<S88>/Data Type Conversion4' */
  Intergration_B.BusCreator_hh.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_lv;

  /* DataTypeConversion: '<S88>/Data Type Conversion5' */
  Intergration_B.BusCreator_hh.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_jv;

  /* DataTypeConversion: '<S88>/Data Type Conversion6' */
  Intergration_B.BusCreator_hh.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_dx;

  /* DataTypeConversion: '<S88>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_m = (real32_T)
    Intergration_B.SFunction1_o8_ne;

  /* DataTypeConversion: '<S88>/Data Type Conversion8' */
  Intergration_B.BusCreator_hh.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_bx;

  /* DataTypeConversion: '<S88>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_em = (real32_T)
    Intergration_B.SFunction1_o10_be;

  /* DataTypeConversion: '<S88>/Data Type Conversion10' */
  Intergration_B.BusCreator_hh.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_mi;

  /* DataTypeConversion: '<S88>/Data Type Conversion11' */
  Intergration_B.BusCreator_hh.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_ex;

  /* DataTypeConversion: '<S88>/Data Type Conversion12' */
  Intergration_B.BusCreator_hh.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_pr;

  /* DataTypeConversion: '<S88>/Data Type Conversion13' */
  Intergration_B.BusCreator_hh.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_cb;

  /* DataTypeConversion: '<S88>/Data Type Conversion14' */
  Intergration_B.BusCreator_hh.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_kt;

  /* DataTypeConversion: '<S88>/Data Type Conversion15' */
  Intergration_B.BusCreator_hh.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_lo;

  /* DataTypeConversion: '<S88>/Data Type Conversion16' */
  Intergration_B.BusCreator_hh.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_l4;

  /* DataTypeConversion: '<S88>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_mn = (real32_T)
    Intergration_B.SFunction1_o6_b1;

  /* DataTypeConversion: '<S88>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_o4 = (real32_T)
    Intergration_B.SFunction1_o7_i0;

  /* DataTypeConversion: '<S88>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_da = (real32_T)
    Intergration_B.SFunction1_o8_l;

  /* BusCreator: '<S88>/Bus Creator' */
  Intergration_B.BusCreator_hh.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_j4;
  Intergration_B.BusCreator_hh.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_m;
  Intergration_B.BusCreator_hh.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_em;
  Intergration_B.BusCreator_hh.Obj_XPos = Intergration_B.DataTypeConversion17_mn;
  Intergration_B.BusCreator_hh.Obj_YPos = Intergration_B.DataTypeConversion18_o4;
  Intergration_B.BusCreator_hh.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_da;

  /* DataTypeConversion: '<S78>/Data Type Conversion' */
  Intergration_B.BusCreator_fq.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_fr;

  /* DataTypeConversion: '<S78>/Data Type Conversion1' */
  Intergration_B.BusCreator_fq.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_bt;

  /* DataTypeConversion: '<S78>/Data Type Conversion2' */
  Intergration_B.BusCreator_fq.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ms;

  /* DataTypeConversion: '<S78>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_na = (real32_T)
    Intergration_B.SFunction1_o4_gf;

  /* DataTypeConversion: '<S78>/Data Type Conversion4' */
  Intergration_B.BusCreator_fq.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_k3;

  /* DataTypeConversion: '<S78>/Data Type Conversion5' */
  Intergration_B.BusCreator_fq.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_m5h;

  /* DataTypeConversion: '<S78>/Data Type Conversion6' */
  Intergration_B.BusCreator_fq.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_ie;

  /* DataTypeConversion: '<S78>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_gb = (real32_T)
    Intergration_B.SFunction1_o8_by;

  /* DataTypeConversion: '<S78>/Data Type Conversion8' */
  Intergration_B.BusCreator_fq.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_bz;

  /* DataTypeConversion: '<S78>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_jo = (real32_T)
    Intergration_B.SFunction1_o10_lh;

  /* DataTypeConversion: '<S78>/Data Type Conversion10' */
  Intergration_B.BusCreator_fq.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_mt;

  /* DataTypeConversion: '<S78>/Data Type Conversion11' */
  Intergration_B.BusCreator_fq.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_mu;

  /* DataTypeConversion: '<S78>/Data Type Conversion12' */
  Intergration_B.BusCreator_fq.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ll;

  /* DataTypeConversion: '<S78>/Data Type Conversion13' */
  Intergration_B.BusCreator_fq.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_pu;

  /* DataTypeConversion: '<S78>/Data Type Conversion14' */
  Intergration_B.BusCreator_fq.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_it;

  /* DataTypeConversion: '<S78>/Data Type Conversion15' */
  Intergration_B.BusCreator_fq.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_hp;

  /* DataTypeConversion: '<S78>/Data Type Conversion16' */
  Intergration_B.BusCreator_fq.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_hh;

  /* DataTypeConversion: '<S78>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_jq = (real32_T)
    Intergration_B.SFunction1_o6_hy;

  /* DataTypeConversion: '<S78>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_lk = (real32_T)
    Intergration_B.SFunction1_o7_prb;

  /* DataTypeConversion: '<S78>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_n = (real32_T)
    Intergration_B.SFunction1_o8_ox;

  /* BusCreator: '<S78>/Bus Creator' */
  Intergration_B.BusCreator_fq.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_na;
  Intergration_B.BusCreator_fq.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_gb;
  Intergration_B.BusCreator_fq.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_jo;
  Intergration_B.BusCreator_fq.Obj_XPos = Intergration_B.DataTypeConversion17_jq;
  Intergration_B.BusCreator_fq.Obj_YPos = Intergration_B.DataTypeConversion18_lk;
  Intergration_B.BusCreator_fq.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_n;

  /* DataTypeConversion: '<S79>/Data Type Conversion' */
  Intergration_B.BusCreator_ag.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_dt4;

  /* DataTypeConversion: '<S79>/Data Type Conversion1' */
  Intergration_B.BusCreator_ag.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_g5;

  /* DataTypeConversion: '<S79>/Data Type Conversion2' */
  Intergration_B.BusCreator_ag.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ek;

  /* DataTypeConversion: '<S79>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_p = (real32_T)
    Intergration_B.SFunction1_o4_a0;

  /* DataTypeConversion: '<S79>/Data Type Conversion4' */
  Intergration_B.BusCreator_ag.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_n2;

  /* DataTypeConversion: '<S79>/Data Type Conversion5' */
  Intergration_B.BusCreator_ag.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_dq;

  /* DataTypeConversion: '<S79>/Data Type Conversion6' */
  Intergration_B.BusCreator_ag.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_m2;

  /* DataTypeConversion: '<S79>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_fq = (real32_T)
    Intergration_B.SFunction1_o8_dt;

  /* DataTypeConversion: '<S79>/Data Type Conversion8' */
  Intergration_B.BusCreator_ag.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_gi;

  /* DataTypeConversion: '<S79>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_ox = (real32_T)
    Intergration_B.SFunction1_o10_fx;

  /* DataTypeConversion: '<S79>/Data Type Conversion10' */
  Intergration_B.BusCreator_ag.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_ih;

  /* DataTypeConversion: '<S79>/Data Type Conversion11' */
  Intergration_B.BusCreator_ag.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_bq;

  /* DataTypeConversion: '<S79>/Data Type Conversion12' */
  Intergration_B.BusCreator_ag.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ir;

  /* DataTypeConversion: '<S79>/Data Type Conversion13' */
  Intergration_B.BusCreator_ag.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ddh;

  /* DataTypeConversion: '<S79>/Data Type Conversion14' */
  Intergration_B.BusCreator_ag.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_dh;

  /* DataTypeConversion: '<S79>/Data Type Conversion15' */
  Intergration_B.BusCreator_ag.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_pjx;

  /* DataTypeConversion: '<S79>/Data Type Conversion16' */
  Intergration_B.BusCreator_ag.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_bo;

  /* DataTypeConversion: '<S79>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_dk = (real32_T)
    Intergration_B.SFunction1_o6_oe;

  /* DataTypeConversion: '<S79>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_dj = (real32_T)
    Intergration_B.SFunction1_o7_ca;

  /* DataTypeConversion: '<S79>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_i = (real32_T)
    Intergration_B.SFunction1_o8_d2;

  /* BusCreator: '<S79>/Bus Creator' */
  Intergration_B.BusCreator_ag.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_p;
  Intergration_B.BusCreator_ag.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_fq;
  Intergration_B.BusCreator_ag.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_ox;
  Intergration_B.BusCreator_ag.Obj_XPos = Intergration_B.DataTypeConversion17_dk;
  Intergration_B.BusCreator_ag.Obj_YPos = Intergration_B.DataTypeConversion18_dj;
  Intergration_B.BusCreator_ag.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_i;

  /* DataTypeConversion: '<S89>/Data Type Conversion' */
  Intergration_B.BusCreator_k1.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_ma;

  /* DataTypeConversion: '<S89>/Data Type Conversion1' */
  Intergration_B.BusCreator_k1.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ix;

  /* DataTypeConversion: '<S89>/Data Type Conversion2' */
  Intergration_B.BusCreator_k1.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_pd;

  /* DataTypeConversion: '<S89>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_m0 = (real32_T)
    Intergration_B.SFunction1_o4_fb;

  /* DataTypeConversion: '<S89>/Data Type Conversion4' */
  Intergration_B.BusCreator_k1.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_bq;

  /* DataTypeConversion: '<S89>/Data Type Conversion5' */
  Intergration_B.BusCreator_k1.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_h5;

  /* DataTypeConversion: '<S89>/Data Type Conversion6' */
  Intergration_B.BusCreator_k1.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_au;

  /* DataTypeConversion: '<S89>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_i = (real32_T)
    Intergration_B.SFunction1_o8_d3e;

  /* DataTypeConversion: '<S89>/Data Type Conversion8' */
  Intergration_B.BusCreator_k1.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_lg;

  /* DataTypeConversion: '<S89>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_m3 = (real32_T)
    Intergration_B.SFunction1_o10_da;

  /* DataTypeConversion: '<S89>/Data Type Conversion10' */
  Intergration_B.BusCreator_k1.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_hs;

  /* DataTypeConversion: '<S89>/Data Type Conversion11' */
  Intergration_B.BusCreator_k1.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_nu;

  /* DataTypeConversion: '<S89>/Data Type Conversion12' */
  Intergration_B.BusCreator_k1.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_oq;

  /* DataTypeConversion: '<S89>/Data Type Conversion13' */
  Intergration_B.BusCreator_k1.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_e;

  /* DataTypeConversion: '<S89>/Data Type Conversion14' */
  Intergration_B.BusCreator_k1.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_hw;

  /* DataTypeConversion: '<S89>/Data Type Conversion15' */
  Intergration_B.BusCreator_k1.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_of;

  /* DataTypeConversion: '<S89>/Data Type Conversion16' */
  Intergration_B.BusCreator_k1.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_dq;

  /* DataTypeConversion: '<S89>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_g = (real32_T)
    Intergration_B.SFunction1_o6_hf;

  /* DataTypeConversion: '<S89>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_e = (real32_T)
    Intergration_B.SFunction1_o7_ax;

  /* DataTypeConversion: '<S89>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_gt = (real32_T)
    Intergration_B.SFunction1_o8_iv;

  /* BusCreator: '<S89>/Bus Creator' */
  Intergration_B.BusCreator_k1.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_m0;
  Intergration_B.BusCreator_k1.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_i;
  Intergration_B.BusCreator_k1.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_m3;
  Intergration_B.BusCreator_k1.Obj_XPos = Intergration_B.DataTypeConversion17_g;
  Intergration_B.BusCreator_k1.Obj_YPos = Intergration_B.DataTypeConversion18_e;
  Intergration_B.BusCreator_k1.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_gt;

  /* DataTypeConversion: '<S90>/Data Type Conversion' */
  Intergration_B.BusCreator_ds.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_dy;

  /* DataTypeConversion: '<S90>/Data Type Conversion1' */
  Intergration_B.BusCreator_ds.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ap;

  /* DataTypeConversion: '<S90>/Data Type Conversion2' */
  Intergration_B.BusCreator_ds.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_msn;

  /* DataTypeConversion: '<S90>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_pl = (real32_T)
    Intergration_B.SFunction1_o4_jel;

  /* DataTypeConversion: '<S90>/Data Type Conversion4' */
  Intergration_B.BusCreator_ds.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_k3t;

  /* DataTypeConversion: '<S90>/Data Type Conversion5' */
  Intergration_B.BusCreator_ds.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_m5e;

  /* DataTypeConversion: '<S90>/Data Type Conversion6' */
  Intergration_B.BusCreator_ds.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_frp;

  /* DataTypeConversion: '<S90>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_fmn = (real32_T)
    Intergration_B.SFunction1_o8_hp;

  /* DataTypeConversion: '<S90>/Data Type Conversion8' */
  Intergration_B.BusCreator_ds.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_c2;

  /* DataTypeConversion: '<S90>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_f2 = (real32_T)
    Intergration_B.SFunction1_o10_bn;

  /* DataTypeConversion: '<S90>/Data Type Conversion10' */
  Intergration_B.BusCreator_ds.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_mu;

  /* DataTypeConversion: '<S90>/Data Type Conversion11' */
  Intergration_B.BusCreator_ds.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_g1;

  /* DataTypeConversion: '<S90>/Data Type Conversion12' */
  Intergration_B.BusCreator_ds.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_mc;

  /* DataTypeConversion: '<S90>/Data Type Conversion13' */
  Intergration_B.BusCreator_ds.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_fk;

  /* DataTypeConversion: '<S90>/Data Type Conversion14' */
  Intergration_B.BusCreator_ds.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_p0;

  /* DataTypeConversion: '<S90>/Data Type Conversion15' */
  Intergration_B.BusCreator_ds.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_ed;

  /* DataTypeConversion: '<S90>/Data Type Conversion16' */
  Intergration_B.BusCreator_ds.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_ba;

  /* DataTypeConversion: '<S90>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_m4 = (real32_T)
    Intergration_B.SFunction1_o6_fk;

  /* DataTypeConversion: '<S90>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_i2 = (real32_T)
    Intergration_B.SFunction1_o7_k3;

  /* DataTypeConversion: '<S90>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_kl = (real32_T)
    Intergration_B.SFunction1_o8_m0;

  /* BusCreator: '<S90>/Bus Creator' */
  Intergration_B.BusCreator_ds.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_pl;
  Intergration_B.BusCreator_ds.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_fmn;
  Intergration_B.BusCreator_ds.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_f2;
  Intergration_B.BusCreator_ds.Obj_XPos = Intergration_B.DataTypeConversion17_m4;
  Intergration_B.BusCreator_ds.Obj_YPos = Intergration_B.DataTypeConversion18_i2;
  Intergration_B.BusCreator_ds.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_kl;

  /* DataTypeConversion: '<S93>/Data Type Conversion' */
  Intergration_B.BusCreator_oy.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_nh;

  /* DataTypeConversion: '<S93>/Data Type Conversion1' */
  Intergration_B.BusCreator_oy.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ia;

  /* DataTypeConversion: '<S93>/Data Type Conversion2' */
  Intergration_B.BusCreator_oy.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_io;

  /* DataTypeConversion: '<S93>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_lk = (real32_T)
    Intergration_B.SFunction1_o4_f5;

  /* DataTypeConversion: '<S93>/Data Type Conversion4' */
  Intergration_B.BusCreator_oy.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_hd;

  /* DataTypeConversion: '<S93>/Data Type Conversion5' */
  Intergration_B.BusCreator_oy.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_ei;

  /* DataTypeConversion: '<S93>/Data Type Conversion6' */
  Intergration_B.BusCreator_oy.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_gi;

  /* DataTypeConversion: '<S93>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_fmr = (real32_T)
    Intergration_B.SFunction1_o8_hpp;

  /* DataTypeConversion: '<S93>/Data Type Conversion8' */
  Intergration_B.BusCreator_oy.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_eh;

  /* DataTypeConversion: '<S93>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_mt = (real32_T)
    Intergration_B.SFunction1_o10_nv;

  /* DataTypeConversion: '<S93>/Data Type Conversion10' */
  Intergration_B.BusCreator_oy.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_at;

  /* DataTypeConversion: '<S93>/Data Type Conversion11' */
  Intergration_B.BusCreator_oy.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_i4;

  /* DataTypeConversion: '<S93>/Data Type Conversion12' */
  Intergration_B.BusCreator_oy.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_lw;

  /* DataTypeConversion: '<S93>/Data Type Conversion13' */
  Intergration_B.BusCreator_oy.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_in;

  /* DataTypeConversion: '<S93>/Data Type Conversion14' */
  Intergration_B.BusCreator_oy.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_bg;

  /* DataTypeConversion: '<S93>/Data Type Conversion15' */
  Intergration_B.BusCreator_oy.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_k;

  /* DataTypeConversion: '<S93>/Data Type Conversion16' */
  Intergration_B.BusCreator_oy.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_ie;

  /* DataTypeConversion: '<S93>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_hz = (real32_T)
    Intergration_B.SFunction1_o6_bf;

  /* DataTypeConversion: '<S93>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_kg = (real32_T)
    Intergration_B.SFunction1_o7_kv;

  /* DataTypeConversion: '<S93>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_lp = (real32_T)
    Intergration_B.SFunction1_o8_o0;

  /* BusCreator: '<S93>/Bus Creator' */
  Intergration_B.BusCreator_oy.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_lk;
  Intergration_B.BusCreator_oy.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_fmr;
  Intergration_B.BusCreator_oy.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_mt;
  Intergration_B.BusCreator_oy.Obj_XPos = Intergration_B.DataTypeConversion17_hz;
  Intergration_B.BusCreator_oy.Obj_YPos = Intergration_B.DataTypeConversion18_kg;
  Intergration_B.BusCreator_oy.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_lp;

  /* DataTypeConversion: '<S94>/Data Type Conversion' */
  Intergration_B.BusCreator_g.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_er;

  /* DataTypeConversion: '<S94>/Data Type Conversion1' */
  Intergration_B.BusCreator_g.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_hg;

  /* DataTypeConversion: '<S94>/Data Type Conversion2' */
  Intergration_B.BusCreator_g.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ck;

  /* DataTypeConversion: '<S94>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_e = (real32_T)
    Intergration_B.SFunction1_o4_dj;

  /* DataTypeConversion: '<S94>/Data Type Conversion4' */
  Intergration_B.BusCreator_g.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_bd;

  /* DataTypeConversion: '<S94>/Data Type Conversion5' */
  Intergration_B.BusCreator_g.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_li;

  /* DataTypeConversion: '<S94>/Data Type Conversion6' */
  Intergration_B.BusCreator_g.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_ov;

  /* DataTypeConversion: '<S94>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_e = (real32_T)
    Intergration_B.SFunction1_o8_j;

  /* DataTypeConversion: '<S94>/Data Type Conversion8' */
  Intergration_B.BusCreator_g.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_px;

  /* DataTypeConversion: '<S94>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_iw = (real32_T)
    Intergration_B.SFunction1_o10_af;

  /* DataTypeConversion: '<S94>/Data Type Conversion10' */
  Intergration_B.BusCreator_g.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_mi4;

  /* DataTypeConversion: '<S94>/Data Type Conversion11' */
  Intergration_B.BusCreator_g.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_e0;

  /* DataTypeConversion: '<S94>/Data Type Conversion12' */
  Intergration_B.BusCreator_g.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_gb;

  /* DataTypeConversion: '<S94>/Data Type Conversion13' */
  Intergration_B.BusCreator_g.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_b3;

  /* DataTypeConversion: '<S94>/Data Type Conversion14' */
  Intergration_B.BusCreator_g.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ejb;

  /* DataTypeConversion: '<S94>/Data Type Conversion15' */
  Intergration_B.BusCreator_g.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_lg;

  /* DataTypeConversion: '<S94>/Data Type Conversion16' */
  Intergration_B.BusCreator_g.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_ho;

  /* DataTypeConversion: '<S94>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_cn = (real32_T)
    Intergration_B.SFunction1_o6_ldd;

  /* DataTypeConversion: '<S94>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_kj = (real32_T)
    Intergration_B.SFunction1_o7_d0;

  /* DataTypeConversion: '<S94>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_fc = (real32_T)
    Intergration_B.SFunction1_o8_hq;

  /* BusCreator: '<S94>/Bus Creator' */
  Intergration_B.BusCreator_g.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_e;
  Intergration_B.BusCreator_g.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_e;
  Intergration_B.BusCreator_g.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_iw;
  Intergration_B.BusCreator_g.Obj_XPos = Intergration_B.DataTypeConversion17_cn;
  Intergration_B.BusCreator_g.Obj_YPos = Intergration_B.DataTypeConversion18_kj;
  Intergration_B.BusCreator_g.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_fc;

  /* DataTypeConversion: '<S96>/Data Type Conversion' */
  Intergration_B.BusCreator_ng.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_lwj;

  /* DataTypeConversion: '<S96>/Data Type Conversion1' */
  Intergration_B.BusCreator_ng.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_f2;

  /* DataTypeConversion: '<S96>/Data Type Conversion2' */
  Intergration_B.BusCreator_ng.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_gl;

  /* DataTypeConversion: '<S96>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_pli = (real32_T)
    Intergration_B.SFunction1_o4_h0;

  /* DataTypeConversion: '<S96>/Data Type Conversion4' */
  Intergration_B.BusCreator_ng.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_gk;

  /* DataTypeConversion: '<S96>/Data Type Conversion5' */
  Intergration_B.BusCreator_ng.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_nm;

  /* DataTypeConversion: '<S96>/Data Type Conversion6' */
  Intergration_B.BusCreator_ng.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_mq;

  /* DataTypeConversion: '<S96>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_aa = (real32_T)
    Intergration_B.SFunction1_o8_cx;

  /* DataTypeConversion: '<S96>/Data Type Conversion8' */
  Intergration_B.BusCreator_ng.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ga;

  /* DataTypeConversion: '<S96>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_cz = (real32_T)
    Intergration_B.SFunction1_o10_le;

  /* DataTypeConversion: '<S96>/Data Type Conversion10' */
  Intergration_B.BusCreator_ng.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_o5;

  /* DataTypeConversion: '<S96>/Data Type Conversion11' */
  Intergration_B.BusCreator_ng.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_ds;

  /* DataTypeConversion: '<S96>/Data Type Conversion12' */
  Intergration_B.BusCreator_ng.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_f2;

  /* DataTypeConversion: '<S96>/Data Type Conversion13' */
  Intergration_B.BusCreator_ng.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ptv;

  /* DataTypeConversion: '<S96>/Data Type Conversion14' */
  Intergration_B.BusCreator_ng.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_hd;

  /* DataTypeConversion: '<S96>/Data Type Conversion15' */
  Intergration_B.BusCreator_ng.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_mpz;

  /* DataTypeConversion: '<S96>/Data Type Conversion16' */
  Intergration_B.BusCreator_ng.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_fb;

  /* DataTypeConversion: '<S96>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_gk = (real32_T)
    Intergration_B.SFunction1_o6_f1;

  /* DataTypeConversion: '<S96>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_ey = (real32_T)
    Intergration_B.SFunction1_o7_oa;

  /* DataTypeConversion: '<S96>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_a = (real32_T)
    Intergration_B.SFunction1_o8_a0;

  /* BusCreator: '<S96>/Bus Creator' */
  Intergration_B.BusCreator_ng.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_pli;
  Intergration_B.BusCreator_ng.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_aa;
  Intergration_B.BusCreator_ng.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_cz;
  Intergration_B.BusCreator_ng.Obj_XPos = Intergration_B.DataTypeConversion17_gk;
  Intergration_B.BusCreator_ng.Obj_YPos = Intergration_B.DataTypeConversion18_ey;
  Intergration_B.BusCreator_ng.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_a;

  /* DataTypeConversion: '<S97>/Data Type Conversion' */
  Intergration_B.BusCreator_gj.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_eh;

  /* DataTypeConversion: '<S97>/Data Type Conversion1' */
  Intergration_B.BusCreator_gj.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_bm;

  /* DataTypeConversion: '<S97>/Data Type Conversion2' */
  Intergration_B.BusCreator_gj.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_d3d;

  /* DataTypeConversion: '<S97>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_oe = (real32_T)
    Intergration_B.SFunction1_o4_en;

  /* DataTypeConversion: '<S97>/Data Type Conversion4' */
  Intergration_B.BusCreator_gj.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_ov;

  /* DataTypeConversion: '<S97>/Data Type Conversion5' */
  Intergration_B.BusCreator_gj.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_os;

  /* DataTypeConversion: '<S97>/Data Type Conversion6' */
  Intergration_B.BusCreator_gj.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_eh;

  /* DataTypeConversion: '<S97>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_mh = (real32_T)
    Intergration_B.SFunction1_o8_jq;

  /* DataTypeConversion: '<S97>/Data Type Conversion8' */
  Intergration_B.BusCreator_gj.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_go;

  /* DataTypeConversion: '<S97>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_kg = (real32_T)
    Intergration_B.SFunction1_o10_ly;

  /* DataTypeConversion: '<S97>/Data Type Conversion10' */
  Intergration_B.BusCreator_gj.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_img;

  /* DataTypeConversion: '<S97>/Data Type Conversion11' */
  Intergration_B.BusCreator_gj.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_oy;

  /* DataTypeConversion: '<S97>/Data Type Conversion12' */
  Intergration_B.BusCreator_gj.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_bx;

  /* DataTypeConversion: '<S97>/Data Type Conversion13' */
  Intergration_B.BusCreator_gj.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_f2g;

  /* DataTypeConversion: '<S97>/Data Type Conversion14' */
  Intergration_B.BusCreator_gj.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_hu;

  /* DataTypeConversion: '<S97>/Data Type Conversion15' */
  Intergration_B.BusCreator_gj.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_cn;

  /* DataTypeConversion: '<S97>/Data Type Conversion16' */
  Intergration_B.BusCreator_gj.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_km;

  /* DataTypeConversion: '<S97>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_c5 = (real32_T)
    Intergration_B.SFunction1_o6_gk;

  /* DataTypeConversion: '<S97>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_oc = (real32_T)
    Intergration_B.SFunction1_o7_bf;

  /* DataTypeConversion: '<S97>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_nd = (real32_T)
    Intergration_B.SFunction1_o8_dux;

  /* BusCreator: '<S97>/Bus Creator' */
  Intergration_B.BusCreator_gj.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_oe;
  Intergration_B.BusCreator_gj.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_mh;
  Intergration_B.BusCreator_gj.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_kg;
  Intergration_B.BusCreator_gj.Obj_XPos = Intergration_B.DataTypeConversion17_c5;
  Intergration_B.BusCreator_gj.Obj_YPos = Intergration_B.DataTypeConversion18_oc;
  Intergration_B.BusCreator_gj.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_nd;

  /* DataTypeConversion: '<S98>/Data Type Conversion' */
  Intergration_B.BusCreator_h1.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_bv;

  /* DataTypeConversion: '<S98>/Data Type Conversion1' */
  Intergration_B.BusCreator_h1.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_dr;

  /* DataTypeConversion: '<S98>/Data Type Conversion2' */
  Intergration_B.BusCreator_h1.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ez;

  /* DataTypeConversion: '<S98>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_dz = (real32_T)
    Intergration_B.SFunction1_o4_o1;

  /* DataTypeConversion: '<S98>/Data Type Conversion4' */
  Intergration_B.BusCreator_h1.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_gm;

  /* DataTypeConversion: '<S98>/Data Type Conversion5' */
  Intergration_B.BusCreator_h1.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_gi;

  /* DataTypeConversion: '<S98>/Data Type Conversion6' */
  Intergration_B.BusCreator_h1.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_ps;

  /* DataTypeConversion: '<S98>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_gt = (real32_T)
    Intergration_B.SFunction1_o8_hi;

  /* DataTypeConversion: '<S98>/Data Type Conversion8' */
  Intergration_B.BusCreator_h1.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_kr;

  /* DataTypeConversion: '<S98>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_ij = (real32_T)
    Intergration_B.SFunction1_o10_h5;

  /* DataTypeConversion: '<S98>/Data Type Conversion10' */
  Intergration_B.BusCreator_h1.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_oe;

  /* DataTypeConversion: '<S98>/Data Type Conversion11' */
  Intergration_B.BusCreator_h1.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_lv;

  /* DataTypeConversion: '<S98>/Data Type Conversion12' */
  Intergration_B.BusCreator_h1.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_hi;

  /* DataTypeConversion: '<S98>/Data Type Conversion13' */
  Intergration_B.BusCreator_h1.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_dh;

  /* DataTypeConversion: '<S98>/Data Type Conversion14' */
  Intergration_B.BusCreator_h1.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_kg;

  /* DataTypeConversion: '<S98>/Data Type Conversion15' */
  Intergration_B.BusCreator_h1.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_aj;

  /* DataTypeConversion: '<S98>/Data Type Conversion16' */
  Intergration_B.BusCreator_h1.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_jc;

  /* DataTypeConversion: '<S98>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_do = (real32_T)
    Intergration_B.SFunction1_o6_d4;

  /* DataTypeConversion: '<S98>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_ge = (real32_T)
    Intergration_B.SFunction1_o7_fn;

  /* DataTypeConversion: '<S98>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_gtf = (real32_T)
    Intergration_B.SFunction1_o8_de;

  /* BusCreator: '<S98>/Bus Creator' */
  Intergration_B.BusCreator_h1.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_dz;
  Intergration_B.BusCreator_h1.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_gt;
  Intergration_B.BusCreator_h1.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_ij;
  Intergration_B.BusCreator_h1.Obj_XPos = Intergration_B.DataTypeConversion17_do;
  Intergration_B.BusCreator_h1.Obj_YPos = Intergration_B.DataTypeConversion18_ge;
  Intergration_B.BusCreator_h1.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_gtf;

  /* DataTypeConversion: '<S99>/Data Type Conversion' */
  Intergration_B.BusCreator_mf.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_l2;

  /* DataTypeConversion: '<S99>/Data Type Conversion1' */
  Intergration_B.BusCreator_mf.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_mb;

  /* DataTypeConversion: '<S99>/Data Type Conversion2' */
  Intergration_B.BusCreator_mf.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ior;

  /* DataTypeConversion: '<S99>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_pc = (real32_T)
    Intergration_B.SFunction1_o4_pq;

  /* DataTypeConversion: '<S99>/Data Type Conversion4' */
  Intergration_B.BusCreator_mf.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_dqu;

  /* DataTypeConversion: '<S99>/Data Type Conversion5' */
  Intergration_B.BusCreator_mf.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_hh;

  /* DataTypeConversion: '<S99>/Data Type Conversion6' */
  Intergration_B.BusCreator_mf.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_j1;

  /* DataTypeConversion: '<S99>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_b = (real32_T)
    Intergration_B.SFunction1_o8_hsb;

  /* DataTypeConversion: '<S99>/Data Type Conversion8' */
  Intergration_B.BusCreator_mf.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_bqg;

  /* DataTypeConversion: '<S99>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_a = (real32_T)
    Intergration_B.SFunction1_o10_gc;

  /* DataTypeConversion: '<S99>/Data Type Conversion10' */
  Intergration_B.BusCreator_mf.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_p0;

  /* DataTypeConversion: '<S99>/Data Type Conversion11' */
  Intergration_B.BusCreator_mf.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_mi;

  /* DataTypeConversion: '<S99>/Data Type Conversion12' */
  Intergration_B.BusCreator_mf.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_fw;

  /* DataTypeConversion: '<S99>/Data Type Conversion13' */
  Intergration_B.BusCreator_mf.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ff;

  /* DataTypeConversion: '<S99>/Data Type Conversion14' */
  Intergration_B.BusCreator_mf.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ko;

  /* DataTypeConversion: '<S99>/Data Type Conversion15' */
  Intergration_B.BusCreator_mf.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_lq;

  /* DataTypeConversion: '<S99>/Data Type Conversion16' */
  Intergration_B.BusCreator_mf.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_cg;

  /* DataTypeConversion: '<S99>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_n = (real32_T)
    Intergration_B.SFunction1_o6_mv;

  /* DataTypeConversion: '<S99>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_g1 = (real32_T)
    Intergration_B.SFunction1_o7_kd;

  /* DataTypeConversion: '<S99>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_mo = (real32_T)
    Intergration_B.SFunction1_o8_px;

  /* BusCreator: '<S99>/Bus Creator' */
  Intergration_B.BusCreator_mf.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_pc;
  Intergration_B.BusCreator_mf.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_b;
  Intergration_B.BusCreator_mf.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_a;
  Intergration_B.BusCreator_mf.Obj_XPos = Intergration_B.DataTypeConversion17_n;
  Intergration_B.BusCreator_mf.Obj_YPos = Intergration_B.DataTypeConversion18_g1;
  Intergration_B.BusCreator_mf.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_mo;

  /* DataTypeConversion: '<S100>/Data Type Conversion' */
  Intergration_B.BusCreator_ms.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_bvk;

  /* DataTypeConversion: '<S100>/Data Type Conversion1' */
  Intergration_B.BusCreator_ms.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_mr;

  /* DataTypeConversion: '<S100>/Data Type Conversion2' */
  Intergration_B.BusCreator_ms.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_hq;

  /* DataTypeConversion: '<S100>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_oc = (real32_T)
    Intergration_B.SFunction1_o4_kq;

  /* DataTypeConversion: '<S100>/Data Type Conversion4' */
  Intergration_B.BusCreator_ms.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_h2;

  /* DataTypeConversion: '<S100>/Data Type Conversion5' */
  Intergration_B.BusCreator_ms.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_oc;

  /* DataTypeConversion: '<S100>/Data Type Conversion6' */
  Intergration_B.BusCreator_ms.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_my;

  /* DataTypeConversion: '<S100>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_ep = (real32_T)
    Intergration_B.SFunction1_o8_cr;

  /* DataTypeConversion: '<S100>/Data Type Conversion8' */
  Intergration_B.BusCreator_ms.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_h4;

  /* DataTypeConversion: '<S100>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_mv = (real32_T)
    Intergration_B.SFunction1_o10_on;

  /* DataTypeConversion: '<S100>/Data Type Conversion10' */
  Intergration_B.BusCreator_ms.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_cp;

  /* DataTypeConversion: '<S100>/Data Type Conversion11' */
  Intergration_B.BusCreator_ms.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_bqg;

  /* DataTypeConversion: '<S100>/Data Type Conversion12' */
  Intergration_B.BusCreator_ms.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ps;

  /* DataTypeConversion: '<S100>/Data Type Conversion13' */
  Intergration_B.BusCreator_ms.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_iq;

  /* DataTypeConversion: '<S100>/Data Type Conversion14' */
  Intergration_B.BusCreator_ms.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ka;

  /* DataTypeConversion: '<S100>/Data Type Conversion15' */
  Intergration_B.BusCreator_ms.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_cs;

  /* DataTypeConversion: '<S100>/Data Type Conversion16' */
  Intergration_B.BusCreator_ms.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_hv;

  /* DataTypeConversion: '<S100>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_m0 = (real32_T)
    Intergration_B.SFunction1_o6_hp;

  /* DataTypeConversion: '<S100>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_ms = (real32_T)
    Intergration_B.SFunction1_o7_id;

  /* DataTypeConversion: '<S100>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_h = (real32_T)
    Intergration_B.SFunction1_o8_gn;

  /* BusCreator: '<S100>/Bus Creator' */
  Intergration_B.BusCreator_ms.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_oc;
  Intergration_B.BusCreator_ms.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_ep;
  Intergration_B.BusCreator_ms.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_mv;
  Intergration_B.BusCreator_ms.Obj_XPos = Intergration_B.DataTypeConversion17_m0;
  Intergration_B.BusCreator_ms.Obj_YPos = Intergration_B.DataTypeConversion18_ms;
  Intergration_B.BusCreator_ms.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_h;

  /* DataTypeConversion: '<S101>/Data Type Conversion' */
  Intergration_B.BusCreator_or.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_c2;

  /* DataTypeConversion: '<S101>/Data Type Conversion1' */
  Intergration_B.BusCreator_or.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_j;

  /* DataTypeConversion: '<S101>/Data Type Conversion2' */
  Intergration_B.BusCreator_or.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ffz;

  /* DataTypeConversion: '<S101>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_ol = (real32_T)
    Intergration_B.SFunction1_o4_gbs;

  /* DataTypeConversion: '<S101>/Data Type Conversion4' */
  Intergration_B.BusCreator_or.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_ne;

  /* DataTypeConversion: '<S101>/Data Type Conversion5' */
  Intergration_B.BusCreator_or.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_l4;

  /* DataTypeConversion: '<S101>/Data Type Conversion6' */
  Intergration_B.BusCreator_or.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_eg3;

  /* DataTypeConversion: '<S101>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_ce = (real32_T)
    Intergration_B.SFunction1_o8_a5;

  /* DataTypeConversion: '<S101>/Data Type Conversion8' */
  Intergration_B.BusCreator_or.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_dh;

  /* DataTypeConversion: '<S101>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_kgp = (real32_T)
    Intergration_B.SFunction1_o10_k3v;

  /* DataTypeConversion: '<S101>/Data Type Conversion10' */
  Intergration_B.BusCreator_or.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_hz;

  /* DataTypeConversion: '<S101>/Data Type Conversion11' */
  Intergration_B.BusCreator_or.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_j5;

  /* DataTypeConversion: '<S101>/Data Type Conversion12' */
  Intergration_B.BusCreator_or.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_f3;

  /* DataTypeConversion: '<S101>/Data Type Conversion13' */
  Intergration_B.BusCreator_or.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ej;

  /* DataTypeConversion: '<S101>/Data Type Conversion14' */
  Intergration_B.BusCreator_or.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_kz;

  /* DataTypeConversion: '<S101>/Data Type Conversion15' */
  Intergration_B.BusCreator_or.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_lv;

  /* DataTypeConversion: '<S101>/Data Type Conversion16' */
  Intergration_B.BusCreator_or.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_kp;

  /* DataTypeConversion: '<S101>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_cb = (real32_T)
    Intergration_B.SFunction1_o6_bh;

  /* DataTypeConversion: '<S101>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_id = (real32_T)
    Intergration_B.SFunction1_o7_fm;

  /* DataTypeConversion: '<S101>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_ds = (real32_T)
    Intergration_B.SFunction1_o8_f;

  /* BusCreator: '<S101>/Bus Creator' */
  Intergration_B.BusCreator_or.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_ol;
  Intergration_B.BusCreator_or.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_ce;
  Intergration_B.BusCreator_or.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_kgp;
  Intergration_B.BusCreator_or.Obj_XPos = Intergration_B.DataTypeConversion17_cb;
  Intergration_B.BusCreator_or.Obj_YPos = Intergration_B.DataTypeConversion18_id;
  Intergration_B.BusCreator_or.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_ds;

  /* DataTypeConversion: '<S91>/Data Type Conversion' */
  Intergration_B.BusCreator_ig.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_hy;

  /* DataTypeConversion: '<S91>/Data Type Conversion1' */
  Intergration_B.BusCreator_ig.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_l3o;

  /* DataTypeConversion: '<S91>/Data Type Conversion2' */
  Intergration_B.BusCreator_ig.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ht;

  /* DataTypeConversion: '<S91>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_lw = (real32_T)
    Intergration_B.SFunction1_o4_ga;

  /* DataTypeConversion: '<S91>/Data Type Conversion4' */
  Intergration_B.BusCreator_ig.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_in;

  /* DataTypeConversion: '<S91>/Data Type Conversion5' */
  Intergration_B.BusCreator_ig.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_pa;

  /* DataTypeConversion: '<S91>/Data Type Conversion6' */
  Intergration_B.BusCreator_ig.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_dv;

  /* DataTypeConversion: '<S91>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_ez = (real32_T)
    Intergration_B.SFunction1_o8_ky;

  /* DataTypeConversion: '<S91>/Data Type Conversion8' */
  Intergration_B.BusCreator_ig.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_cy;

  /* DataTypeConversion: '<S91>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_n0 = (real32_T)
    Intergration_B.SFunction1_o10_br;

  /* DataTypeConversion: '<S91>/Data Type Conversion10' */
  Intergration_B.BusCreator_ig.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_b2;

  /* DataTypeConversion: '<S91>/Data Type Conversion11' */
  Intergration_B.BusCreator_ig.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_ae;

  /* DataTypeConversion: '<S91>/Data Type Conversion12' */
  Intergration_B.BusCreator_ig.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_lr;

  /* DataTypeConversion: '<S91>/Data Type Conversion13' */
  Intergration_B.BusCreator_ig.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_jk;

  /* DataTypeConversion: '<S91>/Data Type Conversion14' */
  Intergration_B.BusCreator_ig.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_ox;

  /* DataTypeConversion: '<S91>/Data Type Conversion15' */
  Intergration_B.BusCreator_ig.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_gue;

  /* DataTypeConversion: '<S91>/Data Type Conversion16' */
  Intergration_B.BusCreator_ig.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_mr;

  /* DataTypeConversion: '<S91>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_bt = (real32_T)
    Intergration_B.SFunction1_o6_lh;

  /* DataTypeConversion: '<S91>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_c2 = (real32_T)
    Intergration_B.SFunction1_o7_l4;

  /* DataTypeConversion: '<S91>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_mx = (real32_T)
    Intergration_B.SFunction1_o8_d2r;

  /* BusCreator: '<S91>/Bus Creator' */
  Intergration_B.BusCreator_ig.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_lw;
  Intergration_B.BusCreator_ig.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_ez;
  Intergration_B.BusCreator_ig.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_n0;
  Intergration_B.BusCreator_ig.Obj_XPos = Intergration_B.DataTypeConversion17_bt;
  Intergration_B.BusCreator_ig.Obj_YPos = Intergration_B.DataTypeConversion18_c2;
  Intergration_B.BusCreator_ig.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_mx;

  /* DataTypeConversion: '<S92>/Data Type Conversion' */
  Intergration_B.BusCreator_i4.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_kx;

  /* DataTypeConversion: '<S92>/Data Type Conversion1' */
  Intergration_B.BusCreator_i4.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_h5m;

  /* DataTypeConversion: '<S92>/Data Type Conversion2' */
  Intergration_B.BusCreator_i4.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_jm;

  /* DataTypeConversion: '<S92>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_am = (real32_T)
    Intergration_B.SFunction1_o4_jv;

  /* DataTypeConversion: '<S92>/Data Type Conversion4' */
  Intergration_B.BusCreator_i4.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_gr;

  /* DataTypeConversion: '<S92>/Data Type Conversion5' */
  Intergration_B.BusCreator_i4.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_jf;

  /* DataTypeConversion: '<S92>/Data Type Conversion6' */
  Intergration_B.BusCreator_i4.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_hs;

  /* DataTypeConversion: '<S92>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_jw = (real32_T)
    Intergration_B.SFunction1_o8_nf;

  /* DataTypeConversion: '<S92>/Data Type Conversion8' */
  Intergration_B.BusCreator_i4.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ec;

  /* DataTypeConversion: '<S92>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_fg = (real32_T)
    Intergration_B.SFunction1_o10_fug;

  /* DataTypeConversion: '<S92>/Data Type Conversion10' */
  Intergration_B.BusCreator_i4.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_ap;

  /* DataTypeConversion: '<S92>/Data Type Conversion11' */
  Intergration_B.BusCreator_i4.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_kk;

  /* DataTypeConversion: '<S92>/Data Type Conversion12' */
  Intergration_B.BusCreator_i4.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ja;

  /* DataTypeConversion: '<S92>/Data Type Conversion13' */
  Intergration_B.BusCreator_i4.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_i4;

  /* DataTypeConversion: '<S92>/Data Type Conversion14' */
  Intergration_B.BusCreator_i4.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_bs;

  /* DataTypeConversion: '<S92>/Data Type Conversion15' */
  Intergration_B.BusCreator_i4.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_ok;

  /* DataTypeConversion: '<S92>/Data Type Conversion16' */
  Intergration_B.BusCreator_i4.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_cw;

  /* DataTypeConversion: '<S92>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_gd = (real32_T)
    Intergration_B.SFunction1_o6_do;

  /* DataTypeConversion: '<S92>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_lj = (real32_T)
    Intergration_B.SFunction1_o7_ly;

  /* DataTypeConversion: '<S92>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_kn = (real32_T)
    Intergration_B.SFunction1_o8_gf;

  /* BusCreator: '<S92>/Bus Creator' */
  Intergration_B.BusCreator_i4.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_am;
  Intergration_B.BusCreator_i4.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_jw;
  Intergration_B.BusCreator_i4.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_fg;
  Intergration_B.BusCreator_i4.Obj_XPos = Intergration_B.DataTypeConversion17_gd;
  Intergration_B.BusCreator_i4.Obj_YPos = Intergration_B.DataTypeConversion18_lj;
  Intergration_B.BusCreator_i4.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_kn;

  /* DataTypeConversion: '<S104>/Data Type Conversion' */
  Intergration_B.BusCreator_el.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_n2;

  /* DataTypeConversion: '<S104>/Data Type Conversion1' */
  Intergration_B.BusCreator_el.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_jf;

  /* DataTypeConversion: '<S104>/Data Type Conversion2' */
  Intergration_B.BusCreator_el.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ja;

  /* DataTypeConversion: '<S104>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_mt = (real32_T)
    Intergration_B.SFunction1_o4_md;

  /* DataTypeConversion: '<S104>/Data Type Conversion4' */
  Intergration_B.BusCreator_el.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_ev;

  /* DataTypeConversion: '<S104>/Data Type Conversion5' */
  Intergration_B.BusCreator_el.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_ab;

  /* DataTypeConversion: '<S104>/Data Type Conversion6' */
  Intergration_B.BusCreator_el.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_mc;

  /* DataTypeConversion: '<S104>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_ip = (real32_T)
    Intergration_B.SFunction1_o8_oi;

  /* DataTypeConversion: '<S104>/Data Type Conversion8' */
  Intergration_B.BusCreator_el.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_kn;

  /* DataTypeConversion: '<S104>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_mw = (real32_T)
    Intergration_B.SFunction1_o10_hf;

  /* DataTypeConversion: '<S104>/Data Type Conversion10' */
  Intergration_B.BusCreator_el.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_dr;

  /* DataTypeConversion: '<S104>/Data Type Conversion11' */
  Intergration_B.BusCreator_el.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_mp;

  /* DataTypeConversion: '<S104>/Data Type Conversion12' */
  Intergration_B.BusCreator_el.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_c1;

  /* DataTypeConversion: '<S104>/Data Type Conversion13' */
  Intergration_B.BusCreator_el.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_kr;

  /* DataTypeConversion: '<S104>/Data Type Conversion14' */
  Intergration_B.BusCreator_el.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_iu;

  /* DataTypeConversion: '<S104>/Data Type Conversion15' */
  Intergration_B.BusCreator_el.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_aqo;

  /* DataTypeConversion: '<S104>/Data Type Conversion16' */
  Intergration_B.BusCreator_el.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_fb0;

  /* DataTypeConversion: '<S104>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_mhl = (real32_T)
    Intergration_B.SFunction1_o6_bk;

  /* DataTypeConversion: '<S104>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_om = (real32_T)
    Intergration_B.SFunction1_o7_n0;

  /* DataTypeConversion: '<S104>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_an = (real32_T)
    Intergration_B.SFunction1_o8_mi;

  /* BusCreator: '<S104>/Bus Creator' */
  Intergration_B.BusCreator_el.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_mt;
  Intergration_B.BusCreator_el.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_ip;
  Intergration_B.BusCreator_el.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_mw;
  Intergration_B.BusCreator_el.Obj_XPos =
    Intergration_B.DataTypeConversion17_mhl;
  Intergration_B.BusCreator_el.Obj_YPos = Intergration_B.DataTypeConversion18_om;
  Intergration_B.BusCreator_el.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_an;

  /* DataTypeConversion: '<S105>/Data Type Conversion' */
  Intergration_B.BusCreator_c2.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_ff;

  /* DataTypeConversion: '<S105>/Data Type Conversion1' */
  Intergration_B.BusCreator_c2.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_loq;

  /* DataTypeConversion: '<S105>/Data Type Conversion2' */
  Intergration_B.BusCreator_c2.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_em;

  /* DataTypeConversion: '<S105>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_fr = (real32_T)
    Intergration_B.SFunction1_o4_ag;

  /* DataTypeConversion: '<S105>/Data Type Conversion4' */
  Intergration_B.BusCreator_c2.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_fh;

  /* DataTypeConversion: '<S105>/Data Type Conversion5' */
  Intergration_B.BusCreator_c2.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_kq;

  /* DataTypeConversion: '<S105>/Data Type Conversion6' */
  Intergration_B.BusCreator_c2.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_db;

  /* DataTypeConversion: '<S105>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_p = (real32_T)
    Intergration_B.SFunction1_o8_mn;

  /* DataTypeConversion: '<S105>/Data Type Conversion8' */
  Intergration_B.BusCreator_c2.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_cs;

  /* DataTypeConversion: '<S105>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_mb = (real32_T)
    Intergration_B.SFunction1_o10_m5;

  /* DataTypeConversion: '<S105>/Data Type Conversion10' */
  Intergration_B.BusCreator_c2.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_l;

  /* DataTypeConversion: '<S105>/Data Type Conversion11' */
  Intergration_B.BusCreator_c2.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_an;

  /* DataTypeConversion: '<S105>/Data Type Conversion12' */
  Intergration_B.BusCreator_c2.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_kb;

  /* DataTypeConversion: '<S105>/Data Type Conversion13' */
  Intergration_B.BusCreator_c2.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_ac;

  /* DataTypeConversion: '<S105>/Data Type Conversion14' */
  Intergration_B.BusCreator_c2.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_lk;

  /* DataTypeConversion: '<S105>/Data Type Conversion15' */
  Intergration_B.BusCreator_c2.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_kz;

  /* DataTypeConversion: '<S105>/Data Type Conversion16' */
  Intergration_B.BusCreator_c2.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_eo;

  /* DataTypeConversion: '<S105>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_f = (real32_T)
    Intergration_B.SFunction1_o6_a4;

  /* DataTypeConversion: '<S105>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_ft = (real32_T)
    Intergration_B.SFunction1_o7_na;

  /* DataTypeConversion: '<S105>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_mtp = (real32_T)
    Intergration_B.SFunction1_o8_o0m;

  /* BusCreator: '<S105>/Bus Creator' */
  Intergration_B.BusCreator_c2.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_fr;
  Intergration_B.BusCreator_c2.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_p;
  Intergration_B.BusCreator_c2.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_mb;
  Intergration_B.BusCreator_c2.Obj_XPos = Intergration_B.DataTypeConversion17_f;
  Intergration_B.BusCreator_c2.Obj_YPos = Intergration_B.DataTypeConversion18_ft;
  Intergration_B.BusCreator_c2.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_mtp;

  /* DataTypeConversion: '<S102>/Data Type Conversion' */
  Intergration_B.BusCreator_p.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_po;

  /* DataTypeConversion: '<S102>/Data Type Conversion1' */
  Intergration_B.BusCreator_p.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_d4;

  /* DataTypeConversion: '<S102>/Data Type Conversion2' */
  Intergration_B.BusCreator_p.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ar;

  /* DataTypeConversion: '<S102>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_pq = (real32_T)
    Intergration_B.SFunction1_o4_f2;

  /* DataTypeConversion: '<S102>/Data Type Conversion4' */
  Intergration_B.BusCreator_p.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_l3;

  /* DataTypeConversion: '<S102>/Data Type Conversion5' */
  Intergration_B.BusCreator_p.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_lw;

  /* DataTypeConversion: '<S102>/Data Type Conversion6' */
  Intergration_B.BusCreator_p.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_da;

  /* DataTypeConversion: '<S102>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_ft = (real32_T)
    Intergration_B.SFunction1_o8_nz;

  /* DataTypeConversion: '<S102>/Data Type Conversion8' */
  Intergration_B.BusCreator_p.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ey;

  /* DataTypeConversion: '<S102>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_d = (real32_T)
    Intergration_B.SFunction1_o10_e4;

  /* DataTypeConversion: '<S102>/Data Type Conversion10' */
  Intergration_B.BusCreator_p.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_nq;

  /* DataTypeConversion: '<S102>/Data Type Conversion11' */
  Intergration_B.BusCreator_p.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_hs;

  /* DataTypeConversion: '<S102>/Data Type Conversion12' */
  Intergration_B.BusCreator_p.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_ph;

  /* DataTypeConversion: '<S102>/Data Type Conversion13' */
  Intergration_B.BusCreator_p.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_em;

  /* DataTypeConversion: '<S102>/Data Type Conversion14' */
  Intergration_B.BusCreator_p.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_d5;

  /* DataTypeConversion: '<S102>/Data Type Conversion15' */
  Intergration_B.BusCreator_p.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_ig;

  /* DataTypeConversion: '<S102>/Data Type Conversion16' */
  Intergration_B.BusCreator_p.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_d0;

  /* DataTypeConversion: '<S102>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_pg = (real32_T)
    Intergration_B.SFunction1_o6_db;

  /* DataTypeConversion: '<S102>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_if = (real32_T)
    Intergration_B.SFunction1_o7_fx;

  /* DataTypeConversion: '<S102>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_mv = (real32_T)
    Intergration_B.SFunction1_o8_be;

  /* BusCreator: '<S102>/Bus Creator' */
  Intergration_B.BusCreator_p.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_pq;
  Intergration_B.BusCreator_p.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_ft;
  Intergration_B.BusCreator_p.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_d;
  Intergration_B.BusCreator_p.Obj_XPos = Intergration_B.DataTypeConversion17_pg;
  Intergration_B.BusCreator_p.Obj_YPos = Intergration_B.DataTypeConversion18_if;
  Intergration_B.BusCreator_p.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_mv;

  /* DataTypeConversion: '<S103>/Data Type Conversion' */
  Intergration_B.BusCreator_hi.Msg_CheckSum1 = (real32_T)
    Intergration_B.SFunction1_o1_df;

  /* DataTypeConversion: '<S103>/Data Type Conversion1' */
  Intergration_B.BusCreator_hi.Msg_AliveCounter1 = (real32_T)
    Intergration_B.SFunction1_o2_ko;

  /* DataTypeConversion: '<S103>/Data Type Conversion2' */
  Intergration_B.BusCreator_hi.Obj_ExstProb = (real32_T)
    Intergration_B.SFunction1_o3_ac;

  /* DataTypeConversion: '<S103>/Data Type Conversion3' */
  Intergration_B.DataTypeConversion3_li = (real32_T)
    Intergration_B.SFunction1_o4_i3;

  /* DataTypeConversion: '<S103>/Data Type Conversion4' */
  Intergration_B.BusCreator_hi.Obj_XAccRel = (real32_T)
    Intergration_B.SFunction1_o5_n4;

  /* DataTypeConversion: '<S103>/Data Type Conversion5' */
  Intergration_B.BusCreator_hi.Obj_ObstacleProb = (real32_T)
    Intergration_B.SFunction1_o6_ki;

  /* DataTypeConversion: '<S103>/Data Type Conversion6' */
  Intergration_B.BusCreator_hi.Obj_MotionPattern = (real32_T)
    Intergration_B.SFunction1_o7_ha;

  /* DataTypeConversion: '<S103>/Data Type Conversion7' */
  Intergration_B.DataTypeConversion7_gbf = (real32_T)
    Intergration_B.SFunction1_o8_bw0;

  /* DataTypeConversion: '<S103>/Data Type Conversion8' */
  Intergration_B.BusCreator_hi.Obj_ValidFlag = (real32_T)
    Intergration_B.SFunction1_o9_ad;

  /* DataTypeConversion: '<S103>/Data Type Conversion9' */
  Intergration_B.DataTypeConversion9_ca = (real32_T)
    Intergration_B.SFunction1_o10_on0;

  /* DataTypeConversion: '<S103>/Data Type Conversion10' */
  Intergration_B.BusCreator_hi.Obj_UpdateFlag = (real32_T)
    Intergration_B.SFunction1_o11_b2m;

  /* DataTypeConversion: '<S103>/Data Type Conversion11' */
  Intergration_B.BusCreator_hi.Obj_ID = (real32_T)
    Intergration_B.SFunction1_o12_mik;

  /* DataTypeConversion: '<S103>/Data Type Conversion12' */
  Intergration_B.BusCreator_hi.Msg_CheckSum2 = (real32_T)
    Intergration_B.SFunction1_o1_fv;

  /* DataTypeConversion: '<S103>/Data Type Conversion13' */
  Intergration_B.BusCreator_hi.Msg_AliveCounter2 = (real32_T)
    Intergration_B.SFunction1_o2_e1;

  /* DataTypeConversion: '<S103>/Data Type Conversion14' */
  Intergration_B.BusCreator_hi.Obj_MeasFlag = (real32_T)
    Intergration_B.SFunction1_o3_jx;

  /* DataTypeConversion: '<S103>/Data Type Conversion15' */
  Intergration_B.BusCreator_hi.Obj_YVelRel = (real32_T)
    Intergration_B.SFunction1_o4_cm;

  /* DataTypeConversion: '<S103>/Data Type Conversion16' */
  Intergration_B.BusCreator_hi.Obj_Type = (real32_T)
    Intergration_B.SFunction1_o5_dz;

  /* DataTypeConversion: '<S103>/Data Type Conversion17' */
  Intergration_B.DataTypeConversion17_b2u = (real32_T)
    Intergration_B.SFunction1_o6_dk;

  /* DataTypeConversion: '<S103>/Data Type Conversion18' */
  Intergration_B.DataTypeConversion18_gf = (real32_T)
    Intergration_B.SFunction1_o7_mx;

  /* DataTypeConversion: '<S103>/Data Type Conversion19' */
  Intergration_B.DataTypeConversion19_g1 = (real32_T)
    Intergration_B.SFunction1_o8_f2;

  /* BusCreator: '<S103>/Bus Creator' */
  Intergration_B.BusCreator_hi.Obj_XVelRel_Stdev =
    Intergration_B.DataTypeConversion3_li;
  Intergration_B.BusCreator_hi.Obj_YPos_Stdev =
    Intergration_B.DataTypeConversion7_gbf;
  Intergration_B.BusCreator_hi.Obj_XPos_Stdev =
    Intergration_B.DataTypeConversion9_ca;
  Intergration_B.BusCreator_hi.Obj_XPos =
    Intergration_B.DataTypeConversion17_b2u;
  Intergration_B.BusCreator_hi.Obj_YPos = Intergration_B.DataTypeConversion18_gf;
  Intergration_B.BusCreator_hi.Obj_XVelRel =
    Intergration_B.DataTypeConversion19_g1;

  /* DataTypeConversion: '<S107>/Data Type Conversion' */
  Intergration_B.BusCreator_b.Msg_CheckSum = (real32_T)
    Intergration_B.SFunction1_o1_c1x;

  /* DataTypeConversion: '<S107>/Data Type Conversion1' */
  Intergration_B.BusCreator_b.Msg_AliveCounter = (real32_T)
    Intergration_B.SFunction1_o2_gc;

  /* DataTypeConversion: '<S107>/Data Type Conversion2' */
  Intergration_B.BusCreator_b.Status_MisAlign = (real32_T)
    Intergration_B.SFunction1_o3_n3;

  /* DataTypeConversion: '<S107>/Data Type Conversion3' */
  Intergration_B.BusCreator_b.Status_HWErr = (real32_T)
    Intergration_B.SFunction1_o4_fh;

  /* DataTypeConversion: '<S107>/Data Type Conversion4' */
  Intergration_B.BusCreator_b.Status_BlkProg = (real32_T)
    Intergration_B.SFunction1_o5_b5;

  /* DataTypeConversion: '<S107>/Data Type Conversion5' */
  Intergration_B.BusCreator_b.Fail = (real32_T)Intergration_B.SFunction1_o6_pt;

  /* DataTypeConversion: '<S107>/Data Type Conversion6' */
  Intergration_B.BusCreator_b.MeasEnabled = (real32_T)
    Intergration_B.SFunction1_o7_gk;

  /* DataTypeConversion: '<S107>/Data Type Conversion7' */
  Intergration_B.BusCreator_b.Host_Yaw = (real32_T)
    Intergration_B.SFunction1_o8_o5;

  /* DataTypeConversion: '<S107>/Data Type Conversion8' */
  Intergration_B.BusCreator_b.HostSpeed = (real32_T)
    Intergration_B.SFunction1_o9_cn;

  /* DataTypeConversion: '<S107>/Data Type Conversion9' */
  Intergration_B.BusCreator_b.TimeStamp = (real32_T)
    Intergration_B.SFunction1_o10_cw;

  /* DataTypeConversion: '<S107>/Data Type Conversion10' */
  Intergration_B.BusCreator_b.Latency = (real32_T)
    Intergration_B.SFunction1_o11_b5;

  /* BusCreator: '<S7>/Bus Creator' */
  Intergration_B.BusCreator.x50_20_Obj_00 = Intergration_B.BusCreator_e;
  Intergration_B.BusCreator.x51_21_Obj_01 = Intergration_B.BusCreator_l;
  Intergration_B.BusCreator.x52_22_Obj_02 = Intergration_B.BusCreator_o;
  Intergration_B.BusCreator.x53_23_Obj_03 = Intergration_B.BusCreator_e1;
  Intergration_B.BusCreator.x54_24_Obj_04 = Intergration_B.BusCreator_n;
  Intergration_B.BusCreator.x55_25_Obj_05 = Intergration_B.BusCreator_h;
  Intergration_B.BusCreator.x56_26_Obj_06 = Intergration_B.BusCreator_ec;
  Intergration_B.BusCreator.x57_27_Obj_07 = Intergration_B.BusCreator_f;
  Intergration_B.BusCreator.x58_28_Obj_08 = Intergration_B.BusCreator_fc;
  Intergration_B.BusCreator.x59_29_Obj_09 = Intergration_B.BusCreator_c;
  Intergration_B.BusCreator.x5A_2A_Obj_10 = Intergration_B.BusCreator_m;
  Intergration_B.BusCreator.x5B_2B_Obj_11 = Intergration_B.BusCreator_j;
  Intergration_B.BusCreator.x5C_2C_Obj_12 = Intergration_B.BusCreator_lo;
  Intergration_B.BusCreator.x5D_2D_Obj_13 = Intergration_B.BusCreator_i;
  Intergration_B.BusCreator.x5E_2E_Obj_14 = Intergration_B.BusCreator_a;
  Intergration_B.BusCreator.x5F_2F_Obj_15 = Intergration_B.BusCreator_k;
  Intergration_B.BusCreator.x60_30_Obj_16 = Intergration_B.BusCreator_a4;
  Intergration_B.BusCreator.x61_31_Obj_17 = Intergration_B.BusCreator_jl;
  Intergration_B.BusCreator.x62_32_Obj_18 = Intergration_B.BusCreator_ep;
  Intergration_B.BusCreator.x63_33_Obj_19 = Intergration_B.BusCreator_d;
  Intergration_B.BusCreator.x64_34_Obj_20 = Intergration_B.BusCreator_h2;
  Intergration_B.BusCreator.x65_35_Obj_21 = Intergration_B.BusCreator_hh;
  Intergration_B.BusCreator.x66_36_Obj_22 = Intergration_B.BusCreator_fq;
  Intergration_B.BusCreator.x67_37_Obj_23 = Intergration_B.BusCreator_ag;
  Intergration_B.BusCreator.x68_38_Obj_24 = Intergration_B.BusCreator_k1;
  Intergration_B.BusCreator.x69_39_Obj_25 = Intergration_B.BusCreator_ds;
  Intergration_B.BusCreator.x6A_3A_Obj_26 = Intergration_B.BusCreator_oy;
  Intergration_B.BusCreator.x6B_3B_Obj_27 = Intergration_B.BusCreator_g;
  Intergration_B.BusCreator.x6C_3C_Obj_28 = Intergration_B.BusCreator_ng;
  Intergration_B.BusCreator.x6D_3D_Obj_29 = Intergration_B.BusCreator_gj;
  Intergration_B.BusCreator.x6E_3E_Obj_30 = Intergration_B.BusCreator_h1;
  Intergration_B.BusCreator.x6F_3F_Obj_31 = Intergration_B.BusCreator_mf;
  Intergration_B.BusCreator.x70_40_Obj_32 = Intergration_B.BusCreator_ms;
  Intergration_B.BusCreator.x71_41_Obj_33 = Intergration_B.BusCreator_or;
  Intergration_B.BusCreator.x72_42_Obj_34 = Intergration_B.BusCreator_ig;
  Intergration_B.BusCreator.x73_43_Obj_35 = Intergration_B.BusCreator_i4;
  Intergration_B.BusCreator.x74_44_Obj_36 = Intergration_B.BusCreator_el;
  Intergration_B.BusCreator.x75_45_Obj_37 = Intergration_B.BusCreator_c2;
  Intergration_B.BusCreator.x76_46_Obj_38 = Intergration_B.BusCreator_p;
  Intergration_B.BusCreator.x77_47_Obj_39 = Intergration_B.BusCreator_hi;
  Intergration_B.BusCreator.x80_Status = Intergration_B.BusCreator_b;

  /* ModelReference: '<Root>/FUS' */
  fusionAlg(&Intergration_B.BusCreator.x50_20_Obj_00.Obj_ExstProb,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_XAccRel,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_MotionPattern,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_ValidFlag,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_ID,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_MeasFlag,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_YVelRel,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_Type,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_XPos,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_YPos,
            &Intergration_B.BusCreator.x50_20_Obj_00.Obj_XVelRel,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_ExstProb,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_XAccRel,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_MotionPattern,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_ValidFlag,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_ID,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_MeasFlag,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_YVelRel,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_Type,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_XPos,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_YPos,
            &Intergration_B.BusCreator.x51_21_Obj_01.Obj_XVelRel,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_ExstProb,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_XAccRel,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_MotionPattern,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_ValidFlag,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_ID,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_MeasFlag,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_YVelRel,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_Type,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_XPos,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_YPos,
            &Intergration_B.BusCreator.x52_22_Obj_02.Obj_XVelRel,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_ExstProb,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_XAccRel,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_MotionPattern,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_ValidFlag,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_ID,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_MeasFlag,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_YVelRel,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_Type,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_XPos,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_YPos,
            &Intergration_B.BusCreator.x53_23_Obj_03.Obj_XVelRel,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_ExstProb,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_XAccRel,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_MotionPattern,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_ValidFlag,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_ID,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_MeasFlag,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_YVelRel,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_Type,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_XPos,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_YPos,
            &Intergration_B.BusCreator.x54_24_Obj_04.Obj_XVelRel,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_ExstProb,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_XAccRel,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_MotionPattern,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_ValidFlag,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_ID,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_MeasFlag,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_YVelRel,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_Type,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_XPos,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_YPos,
            &Intergration_B.BusCreator.x55_25_Obj_05.Obj_XVelRel,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_ExstProb,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_XAccRel,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_MotionPattern,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_ValidFlag,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_ID,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_MeasFlag,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_YVelRel,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_Type,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_XPos,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_YPos,
            &Intergration_B.BusCreator.x56_26_Obj_06.Obj_XVelRel,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_ExstProb,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_XAccRel,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_MotionPattern,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_ValidFlag,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_ID,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_MeasFlag,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_YVelRel,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_Type,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_XPos,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_YPos,
            &Intergration_B.BusCreator.x57_27_Obj_07.Obj_XVelRel,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_ExstProb,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_XAccRel,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_MotionPattern,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_ValidFlag,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_ID,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_MeasFlag,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_YVelRel,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_Type,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_XPos,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_YPos,
            &Intergration_B.BusCreator.x58_28_Obj_08.Obj_XVelRel,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_ExstProb,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_XAccRel,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_MotionPattern,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_ValidFlag,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_ID,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_MeasFlag,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_YVelRel,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_Type,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_XPos,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_YPos,
            &Intergration_B.BusCreator.x59_29_Obj_09.Obj_XVelRel,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_ExstProb,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_XAccRel,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_MotionPattern,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_ValidFlag,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_ID,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_MeasFlag,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_YVelRel,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_Type,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_XPos,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_YPos,
            &Intergration_B.BusCreator.x5A_2A_Obj_10.Obj_XVelRel,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_ExstProb,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_XAccRel,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_MotionPattern,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_ValidFlag,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_ID,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_MeasFlag,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_YVelRel,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_Type,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_XPos,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_YPos,
            &Intergration_B.BusCreator.x5B_2B_Obj_11.Obj_XVelRel,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_ExstProb,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_XAccRel,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_MotionPattern,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_ValidFlag,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_ID,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_MeasFlag,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_YVelRel,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_Type,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_XPos,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_YPos,
            &Intergration_B.BusCreator.x5C_2C_Obj_12.Obj_XVelRel,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_ExstProb,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_XAccRel,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_MotionPattern,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_ValidFlag,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_ID,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_MeasFlag,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_YVelRel,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_Type,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_XPos,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_YPos,
            &Intergration_B.BusCreator.x5D_2D_Obj_13.Obj_XVelRel,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_ExstProb,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_XAccRel,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_MotionPattern,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_ValidFlag,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_ID,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_MeasFlag,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_YVelRel,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_Type,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_XPos,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_YPos,
            &Intergration_B.BusCreator.x5E_2E_Obj_14.Obj_XVelRel,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_ExstProb,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_XAccRel,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_MotionPattern,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_ValidFlag,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_ID,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_MeasFlag,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_YVelRel,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_Type,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_XPos,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_YPos,
            &Intergration_B.BusCreator.x5F_2F_Obj_15.Obj_XVelRel,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_ExstProb,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_XAccRel,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_MotionPattern,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_ValidFlag,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_ID,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_MeasFlag,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_YVelRel,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_Type,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_XPos,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_YPos,
            &Intergration_B.BusCreator.x60_30_Obj_16.Obj_XVelRel,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_ExstProb,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_XAccRel,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_MotionPattern,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_ValidFlag,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_ID,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_MeasFlag,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_YVelRel,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_Type,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_XPos,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_YPos,
            &Intergration_B.BusCreator.x61_31_Obj_17.Obj_XVelRel,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_ExstProb,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_XAccRel,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_MotionPattern,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_ValidFlag,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_ID,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_MeasFlag,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_YVelRel,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_Type,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_XPos,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_YPos,
            &Intergration_B.BusCreator.x62_32_Obj_18.Obj_XVelRel,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_ExstProb,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_XAccRel,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_MotionPattern,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_ValidFlag,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_ID,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_MeasFlag,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_YVelRel,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_Type,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_XPos,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_YPos,
            &Intergration_B.BusCreator.x63_33_Obj_19.Obj_XVelRel,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_ExstProb,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_XAccRel,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_MotionPattern,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_ValidFlag,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_ID,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_MeasFlag,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_YVelRel,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_Type,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_XPos,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_YPos,
            &Intergration_B.BusCreator.x64_34_Obj_20.Obj_XVelRel,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_ExstProb,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_XAccRel,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_MotionPattern,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_ValidFlag,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_ID,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_MeasFlag,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_YVelRel,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_Type,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_XPos,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_YPos,
            &Intergration_B.BusCreator.x65_35_Obj_21.Obj_XVelRel,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_ExstProb,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_XAccRel,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_MotionPattern,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_ValidFlag,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_ID,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_MeasFlag,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_YVelRel,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_Type,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_XPos,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_YPos,
            &Intergration_B.BusCreator.x66_36_Obj_22.Obj_XVelRel,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_ExstProb,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_XAccRel,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_MotionPattern,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_ValidFlag,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_ID,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_MeasFlag,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_YVelRel,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_Type,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_XPos,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_YPos,
            &Intergration_B.BusCreator.x67_37_Obj_23.Obj_XVelRel,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_ExstProb,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_XAccRel,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_MotionPattern,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_ValidFlag,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_ID,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_MeasFlag,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_YVelRel,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_Type,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_XPos,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_YPos,
            &Intergration_B.BusCreator.x68_38_Obj_24.Obj_XVelRel,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_ExstProb,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_XAccRel,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_MotionPattern,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_ValidFlag,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_ID,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_MeasFlag,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_YVelRel,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_Type,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_XPos,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_YPos,
            &Intergration_B.BusCreator.x69_39_Obj_25.Obj_XVelRel,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_ExstProb,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_XAccRel,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_MotionPattern,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_ValidFlag,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_ID,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_MeasFlag,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_YVelRel,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_Type,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_XPos,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_YPos,
            &Intergration_B.BusCreator.x6A_3A_Obj_26.Obj_XVelRel,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_ExstProb,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_XAccRel,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_MotionPattern,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_ValidFlag,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_ID,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_MeasFlag,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_YVelRel,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_Type,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_XPos,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_YPos,
            &Intergration_B.BusCreator.x6B_3B_Obj_27.Obj_XVelRel,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_ExstProb,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_XAccRel,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_MotionPattern,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_ValidFlag,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_ID,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_MeasFlag,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_YVelRel,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_Type,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_XPos,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_YPos,
            &Intergration_B.BusCreator.x6C_3C_Obj_28.Obj_XVelRel,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_ExstProb,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_XAccRel,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_MotionPattern,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_ValidFlag,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_ID,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_MeasFlag,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_YVelRel,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_Type,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_XPos,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_YPos,
            &Intergration_B.BusCreator.x6D_3D_Obj_29.Obj_XVelRel,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_ExstProb,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_XAccRel,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_MotionPattern,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_ValidFlag,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_ID,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_MeasFlag,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_YVelRel,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_Type,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_XPos,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_YPos,
            &Intergration_B.BusCreator.x6E_3E_Obj_30.Obj_XVelRel,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_ExstProb,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_XAccRel,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_MotionPattern,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_ValidFlag,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_ID,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_MeasFlag,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_YVelRel,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_Type,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_XPos,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_YPos,
            &Intergration_B.BusCreator.x6F_3F_Obj_31.Obj_XVelRel,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_ExstProb,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_XAccRel,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_MotionPattern,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_ValidFlag,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_ID,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_MeasFlag,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_YVelRel,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_Type,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_XPos,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_YPos,
            &Intergration_B.BusCreator.x70_40_Obj_32.Obj_XVelRel,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_ExstProb,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_XAccRel,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_MotionPattern,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_ValidFlag,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_ID,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_MeasFlag,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_YVelRel,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_Type,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_XPos,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_YPos,
            &Intergration_B.BusCreator.x71_41_Obj_33.Obj_XVelRel,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_ExstProb,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_XAccRel,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_MotionPattern,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_ValidFlag,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_ID,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_MeasFlag,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_YVelRel,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_Type,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_XPos,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_YPos,
            &Intergration_B.BusCreator.x72_42_Obj_34.Obj_XVelRel,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_ExstProb,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_XAccRel,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_MotionPattern,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_ValidFlag,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_ID,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_MeasFlag,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_YVelRel,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_Type,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_XPos,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_YPos,
            &Intergration_B.BusCreator.x73_43_Obj_35.Obj_XVelRel,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_ExstProb,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_XAccRel,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_MotionPattern,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_ValidFlag,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_ID,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_MeasFlag,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_YVelRel,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_Type,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_XPos,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_YPos,
            &Intergration_B.BusCreator.x74_44_Obj_36.Obj_XVelRel,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_ExstProb,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_XAccRel,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_MotionPattern,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_ValidFlag,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_ID,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_MeasFlag,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_YVelRel,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_Type,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_XPos,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_YPos,
            &Intergration_B.BusCreator.x75_45_Obj_37.Obj_XVelRel,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_ExstProb,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_XAccRel,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_MotionPattern,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_ValidFlag,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_ID,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_MeasFlag,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_YVelRel,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_Type,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_XPos,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_YPos,
            &Intergration_B.BusCreator.x76_46_Obj_38.Obj_XVelRel,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_ExstProb,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_XVelRel_Stdev,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_XAccRel,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_ObstacleProb,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_MotionPattern,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_YPos_Stdev,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_ValidFlag,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_XPos_Stdev,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_UpdateFlag,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_ID,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_MeasFlag,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_YVelRel,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_Type,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_XPos,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_YPos,
            &Intergration_B.BusCreator.x77_47_Obj_39.Obj_XVelRel,
            &Intergration_B.BusCreator.x80_Status.Msg_CheckSum,
            &Intergration_B.BusCreator.x80_Status.Msg_AliveCounter,
            &Intergration_B.BusCreator.x80_Status.Status_MisAlign,
            &Intergration_B.BusCreator.x80_Status.Status_HWErr,
            &Intergration_B.BusCreator.x80_Status.Status_BlkProg,
            &Intergration_B.BusCreator.x80_Status.Fail,
            &Intergration_B.BusCreator.x80_Status.MeasEnabled,
            &Intergration_B.BusCreator.x80_Status.Host_Yaw,
            &Intergration_B.BusCreator.x80_Status.HostSpeed,
            &Intergration_B.BusCreator.x80_Status.TimeStamp,
            &Intergration_B.BusCreator.x80_Status.Latency,
            &Intergration_B.COM_VehBus_st.x1E9.VehDynYawRate,
            &Intergration_B.COM_VehBus_st.x23C.VehSpdAvg,
            &Intergration_B.FUS_ObjOutput_st);

  /* BusCreator: '<Root>/Bus Creator1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  Intergration_B.SYS_Info_st.dT = Intergration_P.Constant_Value_m;

  /* ModelReference: '<Root>/VSI' */
  VSI(&Intergration_B.SYS_Info_st, &Intergration_B.COM_VehBus_st,
      &Intergration_B.YrsF, &Intergration_B.AxSensorF,
      &Intergration_B.StWheelAngleF, &Intergration_B.vRef, &Intergration_B.aRef,
      &Intergration_B.AxSlope, &Intergration_B.AxSlopeValid,
      &Intergration_B.Curvature);

  /* BusCreator: '<Root>/BusConversion_InsertedFor_ACC_at_inport_2' */
  Intergration_B.BusConversion_InsertedFor_ACC_a.YrsF = Intergration_B.YrsF;
  Intergration_B.BusConversion_InsertedFor_ACC_a.AxSensorF =
    Intergration_B.AxSensorF;
  Intergration_B.BusConversion_InsertedFor_ACC_a.StWheelAngleF =
    Intergration_B.StWheelAngleF;
  Intergration_B.BusConversion_InsertedFor_ACC_a.vRef = Intergration_B.vRef;
  Intergration_B.BusConversion_InsertedFor_ACC_a.aRef = Intergration_B.aRef;
  Intergration_B.BusConversion_InsertedFor_ACC_a.AxSlope =
    Intergration_B.AxSlope;
  Intergration_B.BusConversion_InsertedFor_ACC_a.AxSlopeValid =
    Intergration_B.AxSlopeValid;
  Intergration_B.BusConversion_InsertedFor_ACC_a.Curvature =
    Intergration_B.Curvature;

  /* Memory: '<Root>/Memory' */
  Intergration_B.Memory = Intergration_DW.Memory_PreviousInput;

  /* ModelReference: '<Root>/ACC' incorporates:
   *  Inport: '<Root>/DrvAct'
   *  Inport: '<Root>/ObjList'
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   */
  AccTarSel(&Intergration_B.COM_VehBus_st, &Intergration_B.FUS_ObjOutput_st,
            &Intergration_B.BusConversion_InsertedFor_ACC_a,
            &Intergration_B.SYS_Info_st, &Intergration_B.BusCreator,
            &Intergration_B.Memory, &Intergration_Y.ACC_LgtCtrl_st,
            &Intergration_B.ATS_Po_st);

  /* BusCreator: '<Root>/BusConversion_InsertedFor_VLC_at_inport_2' */
  Intergration_B.BusConversion_InsertedFor_VLC_a.YrsF = Intergration_B.YrsF;
  Intergration_B.BusConversion_InsertedFor_VLC_a.AxSensorF =
    Intergration_B.AxSensorF;
  Intergration_B.BusConversion_InsertedFor_VLC_a.StWheelAngleF =
    Intergration_B.StWheelAngleF;
  Intergration_B.BusConversion_InsertedFor_VLC_a.vRef = Intergration_B.vRef;
  Intergration_B.BusConversion_InsertedFor_VLC_a.aRef = Intergration_B.aRef;
  Intergration_B.BusConversion_InsertedFor_VLC_a.AxSlope =
    Intergration_B.AxSlope;
  Intergration_B.BusConversion_InsertedFor_VLC_a.AxSlopeValid =
    Intergration_B.AxSlopeValid;
  Intergration_B.BusConversion_InsertedFor_VLC_a.Curvature =
    Intergration_B.Curvature;

  /* ModelReference: '<Root>/VLC' incorporates:
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   *  Outport: '<Root>/VLC_LgtCmd_st'
   */
  VLC(&Intergration_Y.ACC_LgtCtrl_st, &Intergration_B.SYS_Info_st,
      &Intergration_B.BusConversion_InsertedFor_VLC_a,
      &Intergration_B.COM_VehBus_st, &Intergration_Y.VLC_LgtCmd_st);

  /* Chart: '<Root>/OutputSignal_OS' incorporates:
   *  Constant: '<S201>/Constant'
   */
  Intergration_DW.i++;
  if (Intergration_DW.i % 2 == 0) {
    /* Outputs for Function Call SubSystem: '<Root>/Tx_410_10ms' */

    /* Abs: '<S9>/Abs' */
    Intergration_B.Abs = (real32_T)fabs
      (Intergration_B.COM_VehBus_st.x1E5.StrgWhlAngGrd);

    /* DataTypeConversion: '<S9>/Cast To Double1' */
    Intergration_B.CastToDouble1 = Intergration_B.Abs;

    /* Sum: '<S261>/Add' incorporates:
     *  Constant: '<S261>/Constant1'
     */
    Intergration_B.Add = Intergration_B.COM_VehBus_st.x1E5.StrgWhlAng +
      Intergration_P.Constant1_Value_pd;

    /* Product: '<S261>/Divide1' incorporates:
     *  Constant: '<S261>/Constant2'
     */
    Intergration_B.Divide1 = Intergration_B.Add /
      Intergration_P.Constant2_Value_j;

    /* DataTypeConversion: '<S261>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide1);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_gt = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S261>/Data Type Conversion1' */

    /* Product: '<S261>/Multiply' incorporates:
     *  Constant: '<S261>/Constant3'
     */
    Intergration_B.Multiply = (real_T)Intergration_B.DataTypeConversion1_gt *
      Intergration_P.Constant3_Value_k;

    /* Sum: '<S261>/Add1' incorporates:
     *  Constant: '<S261>/Constant4'
     */
    Intergration_B.Add1 = Intergration_B.Multiply -
      Intergration_P.Constant4_Value_n;

    /* DataTypeConversion: '<S9>/Cast To Double2' */
    Intergration_B.CastToDouble2 = Intergration_B.Add1;

    /* Delay: '<S258>/Delay' */
    Intergration_B.Delay = Intergration_DW.Delay_DSTATE;

    /* DataTypeConversion: '<S262>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_as = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S262>/Data Type Conversion1' */

    /* ArithShift: '<S262>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_hp = (uint8_T)
      (Intergration_B.DataTypeConversion1_as << 4);

    /* S-Function (sfix_bitop): '<S262>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_c3 = (uint8_T)
      (Intergration_B.ShiftArithmetic1_hp &
       Intergration_P.BitwiseOperator2_BitMask_ly);

    /* DataTypeConversion: '<S9>/Cast To Double3' */
    Intergration_B.CastToDouble3 = Intergration_B.BitwiseOperator2_c3;

    /* ArithShift: '<S261>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1 = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_gt >> 8);

    /* S-Function (sfix_bitop): '<S261>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1 = (uint16_T)(Intergration_B.ShiftArithmetic1
      & Intergration_P.BitwiseOperator1_BitMask_i);

    /* S-Function (sfix_bitop): '<S261>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2 = (uint16_T)
      (Intergration_B.DataTypeConversion1_gt &
       Intergration_P.BitwiseOperator2_BitMask_c);

    /* DataTypeConversion: '<S260>/Data Type Conversion1' */
    tmp = (real32_T)floor(Intergration_B.Abs);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_fk = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S260>/Data Type Conversion1' */

    /* S-Function (sfix_bitop): '<S260>/Bitwise Operator1' */
    Intergration_B.VectorConcatenate1[2] = (uint8_T)
      (Intergration_B.DataTypeConversion1_fk &
       Intergration_P.BitwiseOperator1_BitMask_a);

    /* DataTypeConversion: '<S261>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1[0] = (uint8_T)
      Intergration_B.BitwiseOperator1;

    /* DataTypeConversion: '<S261>/Data Type Conversion3' */
    Intergration_B.VectorConcatenate1[1] = (uint8_T)
      Intergration_B.BitwiseOperator2;

    /* SignalConversion: '<S9>/ConcatBufferAtVector Concatenate1In4' */
    Intergration_B.VectorConcatenate1[3] = Intergration_B.BitwiseOperator2_c3;

    /* SignalConversion: '<S9>/ConcatBufferAtVector Concatenate1In5' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Intergration_B.VectorConcatenate1[4] = Intergration_P.Constant_Value_dg;

    /* SignalConversion: '<S9>/ConcatBufferAtVector Concatenate1In6' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Intergration_B.VectorConcatenate1[5] = Intergration_P.Constant_Value_dg;

    /* SignalConversion: '<S9>/ConcatBufferAtVector Concatenate1In7' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Intergration_B.VectorConcatenate1[6] = Intergration_P.Constant_Value_dg;

    /* S-Function (CheckSum_Tx_Radar410): '<S9>/S-Function Builder1' incorporates:
     *  Constant: '<S9>/Constant6'
     */
    CheckSum_Tx_Radar410_Outputs_wrapper(&Intergration_B.VectorConcatenate1[0],
      &Intergration_P.Constant6_Value_gr, &Intergration_B.SFunctionBuilder1);

    /* DataTypeConversion: '<S9>/Cast To Double4' */
    Intergration_B.CastToDouble4 = Intergration_B.SFunctionBuilder1;

    /* S-Function (rti_commonblock): '<S259>/S-Function1' incorporates:
     *  Constant: '<S9>/Constant1'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "SAS_Status" Id:225 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]);

      /* Convert timestamp */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->processed) {
        can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_bvm = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->processed;
        Intergration_B.SFunction1_o2_a2 = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->timestamp;
        Intergration_B.SFunction1_o3_gp = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->deltatime;
        Intergration_B.SFunction1_o4_eh = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "SAS_Status_Checksum" (16|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble4 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "SAS_Status_AliveCounter" (28|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble3 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "SAS_CalibrationSts" (38|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_hn ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "SAS_FailureSts" (39|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_hn ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "SAS_SteerWheelRotSpd" (40|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1 - ( 0 ) )
          / 4 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "SAS_SteerWheelAngle" (48|16, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2 - ( -780 )
          ) / 0.1 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte1;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1], 8, &(CAN_Msg
        [0]), delayTime);
    }

    /* Switch: '<S258>/Switch' incorporates:
     *  Constant: '<S258>/Constant6'
     */
    if (Intergration_B.Delay > Intergration_P.Switch_Threshold_l) {
      Intergration_B.Switch = Intergration_P.Constant6_Value_f;
    } else {
      Intergration_B.Switch = Intergration_B.Delay;
    }

    /* End of Switch: '<S258>/Switch' */

    /* Sum: '<S258>/Add2' incorporates:
     *  Constant: '<S258>/Constant5'
     */
    Intergration_B.Add2 = Intergration_P.Constant5_Value_h +
      Intergration_B.Switch;

    /* Update for Delay: '<S258>/Delay' */
    Intergration_DW.Delay_DSTATE = Intergration_B.Add2;

    /* End of Outputs for SubSystem: '<Root>/Tx_410_10ms' */
  }

  if (Intergration_DW.i % 4 == 0) {
    /* Outputs for Function Call SubSystem: '<Root>/TX' */

    /* Switch: '<S206>/Switch' incorporates:
     *  Constant: '<S206>/EngineTorqReqSt'
     *  Constant: '<S206>/P_x165_On'
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    if (rtP_P_x165_On > Intergration_P.Switch_Threshold_dw) {
      Intergration_B.COM_x165_st.ACCToqReqStsHSC2 =
        Intergration_Y.VLC_LgtCmd_st.EngineTorqReqSt;
    } else {
      Intergration_B.COM_x165_st.ACCToqReqStsHSC2 =
        Intergration_P.EngineTorqReqSt_Value;
    }

    /* End of Switch: '<S206>/Switch' */

    /* Switch: '<S206>/Switch1' incorporates:
     *  Constant: '<S206>/EngineTorqReq'
     *  Constant: '<S206>/P_x165_On'
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    if (rtP_P_x165_On > Intergration_P.Switch1_Threshold) {
      Intergration_B.COM_x165_st.ACCToqReqValHSC2 =
        Intergration_Y.VLC_LgtCmd_st.EngineTorqReq;
    } else {
      Intergration_B.COM_x165_st.ACCToqReqValHSC2 =
        Intergration_P.EngineTorqReq_Value;
    }

    /* End of Switch: '<S206>/Switch1' */

    /* Sum: '<S235>/Add' incorporates:
     *  Constant: '<S235>/Constant4'
     */
    Intergration_B.Add_d = Intergration_B.COM_x165_st.ACCToqReqValHSC2 +
      Intergration_P.Constant4_Value;

    /* Product: '<S235>/Divide' incorporates:
     *  Constant: '<S235>/Constant5'
     */
    Intergration_B.Divide = Intergration_B.Add_d /
      Intergration_P.Constant5_Value;

    /* DataTypeConversion: '<S235>/Data Type Conversion' */
    tmp_0 = floor(Intergration_B.Divide);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion_dv = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S235>/Data Type Conversion' */

    /* Product: '<S235>/Multiply' incorporates:
     *  Constant: '<S235>/Constant'
     */
    Intergration_B.Multiply_i = Intergration_P.Constant_Value * (real_T)
      Intergration_B.DataTypeConversion_dv;

    /* Sum: '<S235>/Add3' incorporates:
     *  Constant: '<S235>/Constant1'
     */
    Intergration_B.Add3 = Intergration_B.Multiply_i -
      Intergration_P.Constant1_Value;

    /* DataTypeConversion: '<S199>/Cast To Double11' */
    Intergration_B.CastToDouble11 = Intergration_B.Add3;

    /* DataTypeConversion: '<S199>/Cast To Double12' */
    Intergration_B.CastToDouble12 = Intergration_B.COM_x165_st.ACCToqReqStsHSC2;

    /* Delay: '<S203>/Delay' */
    Intergration_B.Delay_p = Intergration_DW.Delay_DSTATE_m;

    /* DataTypeConversion: '<S199>/Cast To Double13' */
    Intergration_B.CastToDouble13 = Intergration_B.Delay_p;

    /* ArithShift: '<S235>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_h = (uint16_T)
      (Intergration_B.DataTypeConversion_dv << 2);

    /* DataTypeConversion: '<S235>/Data Type Conversion3' */
    Intergration_B.DataTypeConversion3_n3 =
      Intergration_B.COM_x165_st.ACCToqReqStsHSC2;

    /* S-Function (sfix_bitop): '<S235>/Bitwise Operator4' */
    Intergration_B.BitwiseOperator4 = (uint16_T)
      (Intergration_B.ShiftArithmetic1_h | Intergration_B.DataTypeConversion3_n3);

    /* S-Function (sfix_bitop): '<S235>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_f = (uint16_T)
      (Intergration_B.BitwiseOperator4 & Intergration_P.BitwiseOperator2_BitMask);

    /* DataTypeConversion: '<S235>/Data Type Conversion1' */
    Intergration_B.DataTypeConversion1_ih = Intergration_B.BitwiseOperator2_f;

    /* DataTypeConversion: '<S235>/Data Type Conversion4' */
    tmp_0 = floor(Intergration_B.Delay_p);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion4_nq = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S235>/Data Type Conversion4' */

    /* Sum: '<S235>/Add1' */
    Intergration_B.Add1_gl = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_ih +
      Intergration_B.DataTypeConversion4_nq);

    /* S-Function (sfix_bitop): '<S235>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_d = (uint16_T)(Intergration_B.Add1_gl &
      Intergration_P.BitwiseOperator1_BitMask);

    /* DataTypeConversion: '<S235>/Data Type Conversion2' */
    Intergration_B.DataTypeConversion2_pv = Intergration_B.BitwiseOperator1_d;

    /* S-Function (sfix_bitop): '<S235>/Bitwise Operator3' */
    Intergration_B.BitwiseOperator3 = (uint16_T)
      ~Intergration_B.DataTypeConversion2_pv;

    /* Sum: '<S235>/Add2' incorporates:
     *  Constant: '<S235>/Constant6'
     */
    Intergration_B.Add2_j = (uint16_T)((uint32_T)Intergration_B.BitwiseOperator3
      + Intergration_P.Constant6_Value_o);

    /* DataTypeConversion: '<S199>/Cast To Double31' */
    Intergration_B.CastToDouble31 = Intergration_B.Add2_j;

    /* S-Function (rti_commonblock): '<S234>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FVCM_FrP00" Id:357 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]);

      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_bsg = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->processed;
        Intergration_B.SFunction1_o2_mc = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->timestamp;
        Intergration_B.SFunction1_o3_au = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->deltatime;
        Intergration_B.SFunction1_o4_c5 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "ACCAlvRCHSC2" (8|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble13 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCToqReqValPVHSC2" (16|16, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble31 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "ACCToqReqValHSC2" (32|12, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble11 - ( -848
          ) ) / 0.5 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000FFF;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "ACCToqReqStsHSC2" (62|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble12 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* DataTypeConversion: '<S237>/Data Type Conversion2' */
    tmp_0 = floor(Intergration_B.Delay_p);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion2_kx = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S237>/Data Type Conversion2' */

    /* ArithShift: '<S237>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_c = (uint8_T)
      (Intergration_B.DataTypeConversion2_kx << 3);

    /* S-Function (sfix_bitop): '<S237>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_gc = (uint8_T)
      (Intergration_B.ShiftArithmetic2_c &
       Intergration_P.BitwiseOperator2_BitMask_fz);

    /* Switch: '<S207>/Switch6' incorporates:
     *  Constant: '<S207>/CDDStandstillReq'
     *  Constant: '<S207>/P_x242_On'
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    if (rtP_P_x242_On > Intergration_P.Switch6_Threshold) {
      Intergration_B.COM_x242_st.ACCSdslReq_RadarHSC2 =
        Intergration_Y.VLC_LgtCmd_st.CDDStandstillReq;
    } else {
      Intergration_B.COM_x242_st.ACCSdslReq_RadarHSC2 =
        Intergration_P.CDDStandstillReq_Value;
    }

    /* End of Switch: '<S207>/Switch6' */

    /* Switch: '<S207>/Switch5' incorporates:
     *  Constant: '<S207>/CDDDriveoffReq'
     *  Constant: '<S207>/P_x242_On'
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    if (rtP_P_x242_On > Intergration_P.Switch5_Threshold) {
      Intergration_B.COM_x242_st.ACCGoReqHSC2 =
        Intergration_Y.VLC_LgtCmd_st.CDDDriveoffReq;
    } else {
      Intergration_B.COM_x242_st.ACCGoReqHSC2 =
        Intergration_P.CDDDriveoffReq_Value;
    }

    /* End of Switch: '<S207>/Switch5' */

    /* Switch: '<S207>/Switch4' incorporates:
     *  Constant: '<S207>/CDDAxtar'
     *  Constant: '<S207>/P_x242_On'
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    if (rtP_P_x242_On > Intergration_P.Switch4_Threshold) {
      Intergration_B.COM_x242_st.ACCAccReqValHSC2 =
        Intergration_Y.VLC_LgtCmd_st.CDDAxtar;
    } else {
      Intergration_B.COM_x242_st.ACCAccReqValHSC2 =
        Intergration_P.CDDAxtar_Value;
    }

    /* End of Switch: '<S207>/Switch4' */

    /* Switch: '<S207>/Switch3' incorporates:
     *  Constant: '<S207>/CDDEnable'
     *  Constant: '<S207>/P_x242_On'
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    if (rtP_P_x242_On > Intergration_P.Switch3_Threshold) {
      Intergration_B.COM_x242_st.ACCAccReqStsHSC2 =
        Intergration_Y.VLC_LgtCmd_st.CDDEnable;
    } else {
      Intergration_B.COM_x242_st.ACCAccReqStsHSC2 =
        Intergration_P.CDDEnable_Value;
    }

    /* End of Switch: '<S207>/Switch3' */

    /* Lookup_n-D: '<S207>/1-D Lookup Table' incorporates:
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    Intergration_B.ACCState = look1_iflf_binlxpw
      (Intergration_Y.VLC_LgtCmd_st.ACCState,
       Intergration_P.uDLookupTable_bp01Data,
       Intergration_P.uDLookupTable_tableData, 4U);

    /* Switch: '<S207>/Switch2' incorporates:
     *  Constant: '<S207>/ACCState'
     *  Constant: '<S207>/P_x242_On'
     */
    if (rtP_P_x242_On > Intergration_P.Switch2_Threshold) {
      Intergration_B.COM_x242_st.ACCSysSts_RadarHSC2 = Intergration_B.ACCState;
    } else {
      Intergration_B.COM_x242_st.ACCSysSts_RadarHSC2 =
        Intergration_P.ACCState_Value;
    }

    /* End of Switch: '<S207>/Switch2' */

    /* BusCreator: '<S207>/Bus Creator1' incorporates:
     *  Constant: '<S207>/ACCAccReqValTolMax'
     *  Constant: '<S207>/ACCAccReqValTolMin'
     *  Constant: '<S207>/ACCMinBrkReqSts'
     *  Constant: '<S207>/ACCReqBrkPrfrd'
     *  Constant: '<S207>/ACCSysFltSts'
     *  Constant: '<S207>/ChACCShtdwnMd'
     */
    Intergration_B.COM_x242_st.ACCAccReqValTolMinHSC2 =
      Intergration_P.ACCAccReqValTolMin_Value;
    Intergration_B.COM_x242_st.ACCSysFltSts_SCSHSC2 =
      Intergration_P.ACCSysFltSts_Value;
    Intergration_B.COM_x242_st.ACCAccReqValTolMaxHSC2 =
      Intergration_P.ACCAccReqValTolMax_Value;
    Intergration_B.COM_x242_st.ChACCShtdwnMdHSC2 =
      Intergration_P.ChACCShtdwnMd_Value;
    Intergration_B.COM_x242_st.ACCReqBrkPrfrdHSC2 =
      Intergration_P.ACCReqBrkPrfrd_Value;
    Intergration_B.COM_x242_st.ACCMinBrkReqStsHSC2 =
      Intergration_P.ACCMinBrkReqSts_Value;

    /* Sum: '<S237>/Add' incorporates:
     *  Constant: '<S237>/Constant2'
     */
    Intergration_B.Add_b = Intergration_B.COM_x242_st.ACCAccReqValHSC2 +
      Intergration_P.Constant2_Value;

    /* Product: '<S237>/Divide' incorporates:
     *  Constant: '<S237>/Constant3'
     */
    Intergration_B.Divide_e = Intergration_B.Add_b /
      Intergration_P.Constant3_Value;

    /* DataTypeConversion: '<S237>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide_e);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_a4 = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S237>/Data Type Conversion1' */

    /* ArithShift: '<S237>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_j = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_a4 >> 8);

    /* DataTypeConversion: '<S237>/Data Type Conversion3' */
    Intergration_B.DataTypeConversion3_ft = (uint8_T)
      Intergration_B.ShiftArithmetic1_j;

    /* S-Function (sfix_bitop): '<S237>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_h = (uint8_T)
      (Intergration_B.DataTypeConversion3_ft &
       Intergration_P.BitwiseOperator1_BitMask_hk);

    /* Sum: '<S237>/Add1' */
    Intergration_B.VectorConcatenate[0] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator2_gc + Intergration_B.BitwiseOperator1_h);

    /* DataTypeConversion: '<S237>/Data Type Conversion' */
    tmp_0 = floor(Intergration_B.Divide_e);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion_kba = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S237>/Data Type Conversion' */

    /* S-Function (sfix_bitop): '<S237>/Bitwise Operator' */
    Intergration_B.BitwiseOperator = (uint16_T)
      (Intergration_B.DataTypeConversion_kba &
       Intergration_P.BitwiseOperator_BitMask);

    /* DataTypeConversion: '<S237>/Data Type Conversion4' */
    Intergration_B.VectorConcatenate[1] = (uint8_T)
      Intergration_B.BitwiseOperator;

    /* DataTypeConversion: '<S238>/Data Type Conversion1' */
    Intergration_B.DataTypeConversion1_li =
      Intergration_B.COM_x242_st.ACCGoReqHSC2;

    /* ArithShift: '<S238>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_a = (uint8_T)
      (Intergration_B.DataTypeConversion1_li << 6);

    /* S-Function (sfix_bitop): '<S238>/Bitwise Operator' */
    Intergration_B.BitwiseOperator_i = (uint8_T)
      (Intergration_B.ShiftArithmetic1_a &
       Intergration_P.BitwiseOperator_BitMask_b);

    /* DataTypeConversion: '<S238>/Data Type Conversion2' */
    Intergration_B.DataTypeConversion2_ow =
      Intergration_B.COM_x242_st.ACCAccReqStsHSC2;

    /* ArithShift: '<S238>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_b = (uint8_T)
      (Intergration_B.DataTypeConversion2_ow << 4);

    /* S-Function (sfix_bitop): '<S238>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_gn = (uint8_T)
      (Intergration_B.ShiftArithmetic2_b &
       Intergration_P.BitwiseOperator1_BitMask_hs);

    /* Sum: '<S238>/Add' */
    Intergration_B.VectorConcatenate[3] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator_i + Intergration_B.BitwiseOperator1_gn);

    /* DataTypeConversion: '<S239>/Data Type Conversion1' */
    tmp = (real32_T)floor(Intergration_B.COM_x242_st.ACCSysSts_RadarHSC2);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_dc = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S239>/Data Type Conversion1' */

    /* ArithShift: '<S239>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_ja = (uint8_T)
      (Intergration_B.DataTypeConversion1_dc << 3);

    /* S-Function (sfix_bitop): '<S239>/Bitwise Operator' */
    Intergration_B.BitwiseOperator_p = (uint8_T)
      (Intergration_B.ShiftArithmetic1_ja &
       Intergration_P.BitwiseOperator_BitMask_a);

    /* DataTypeConversion: '<S239>/Data Type Conversion2' */
    tmp = (real32_T)floor(Intergration_B.COM_x242_st.ACCSysFltSts_SCSHSC2);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion2_dk = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S239>/Data Type Conversion2' */

    /* S-Function (sfix_bitop): '<S239>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_ae = (uint8_T)
      (Intergration_B.DataTypeConversion2_dk &
       Intergration_P.BitwiseOperator1_BitMask_fd);

    /* Sum: '<S239>/Add' */
    Intergration_B.VectorConcatenate[5] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator_p + Intergration_B.BitwiseOperator1_ae);

    /* DataTypeConversion: '<S240>/Data Type Conversion2' */
    Intergration_B.DataTypeConversion2_kw =
      Intergration_B.COM_x242_st.ACCSdslReq_RadarHSC2;

    /* ArithShift: '<S240>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_jr = (uint8_T)
      (Intergration_B.DataTypeConversion2_kw << 7);

    /* S-Function (sfix_bitop): '<S240>/Bitwise Operator2' */
    Intergration_B.VectorConcatenate[6] = (uint8_T)
      (Intergration_B.ShiftArithmetic1_jr &
       Intergration_P.BitwiseOperator2_BitMask_lf);

    /* SignalConversion: '<S200>/ConcatBufferAtVector ConcatenateIn3' incorporates:
     *  Constant: '<S200>/Constant2'
     */
    Intergration_B.VectorConcatenate[2] = Intergration_P.Constant2_Value_mr;

    /* SignalConversion: '<S200>/ConcatBufferAtVector ConcatenateIn5' incorporates:
     *  Constant: '<S200>/Constant2'
     */
    Intergration_B.VectorConcatenate[4] = Intergration_P.Constant2_Value_mr;

    /* S-Function (CheckSum_0x242): '<S200>/S-Function Builder' incorporates:
     *  Constant: '<S200>/Constant3'
     */
    CheckSum_0x242_Outputs_wrapper(&Intergration_B.VectorConcatenate[0],
      &Intergration_P.Constant3_Value_b, &Intergration_B.SFunctionBuilder);

    /* DataTypeConversion: '<S200>/Cast To Double30' */
    Intergration_B.CastToDouble30 = Intergration_B.SFunctionBuilder;

    /* DataTypeConversion: '<S200>/Cast To Double' */
    Intergration_B.CastToDouble =
      Intergration_B.COM_x242_st.ACCAccReqValTolMinHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double1' */
    Intergration_B.CastToDouble1_d =
      Intergration_B.COM_x242_st.ACCSdslReq_RadarHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double10' */
    Intergration_B.CastToDouble10 =
      Intergration_B.COM_x242_st.ACCMinBrkReqStsHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double2' */
    Intergration_B.CastToDouble2_k =
      Intergration_B.COM_x242_st.ACCSysFltSts_SCSHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double3' */
    Intergration_B.CastToDouble3_j =
      Intergration_B.COM_x242_st.ACCSysSts_RadarHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double32' */
    Intergration_B.CastToDouble32 = Intergration_B.Delay_p;

    /* DataTypeConversion: '<S200>/Cast To Double4' */
    Intergration_B.CastToDouble4_k =
      Intergration_B.COM_x242_st.ChACCShtdwnMdHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double5' */
    Intergration_B.CastToDouble5 = Intergration_B.COM_x242_st.ACCAccReqStsHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double6' */
    Intergration_B.CastToDouble6 = Intergration_B.COM_x242_st.ACCGoReqHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double7' */
    Intergration_B.CastToDouble7 =
      Intergration_B.COM_x242_st.ACCAccReqValTolMaxHSC2;

    /* DataTypeConversion: '<S200>/Cast To Double8' */
    Intergration_B.CastToDouble8 = Intergration_B.COM_x242_st.ACCReqBrkPrfrdHSC2;

    /* Product: '<S237>/Multiply' incorporates:
     *  Constant: '<S237>/Constant'
     */
    Intergration_B.Multiply_h = (real_T)Intergration_B.DataTypeConversion_kba *
      Intergration_P.Constant_Value_b;

    /* Sum: '<S237>/Add2' incorporates:
     *  Constant: '<S237>/Constant1'
     */
    Intergration_B.Add2_a = Intergration_B.Multiply_h -
      Intergration_P.Constant1_Value_d;

    /* DataTypeConversion: '<S200>/Cast To Double9' */
    Intergration_B.CastToDouble9 = Intergration_B.Add2_a;

    /* S-Function (rti_commonblock): '<S236>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP00" Id:578 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]);

      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_ce = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->processed;
        Intergration_B.SFunction1_o2_fl = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->timestamp;
        Intergration_B.SFunction1_o3_os = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->deltatime;
        Intergration_B.SFunction1_o4_hy = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "ACCSysChksm_SCSHSC2" (0|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble30 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCAccReqValTolMinHSC2" (8|7, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble - ( 0 ) ) /
          0.025 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000007F;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCSdslReq_RadarHSC2" (15|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1_d ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCSysFltSts_SCSHSC2" (16|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2_k ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCSysSts_RadarHSC2" (19|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble3_j ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ChACCShtdwnMdHSC2" (22|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble4_k ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCAccReqStsHSC2" (36|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble5 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCGoReqHSC2" (38|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble6 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCAccReqValTolMaxHSC2" (40|7, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble7 - ( 0 ) )
          / 0.025 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000007F;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCReqBrkPrfrdHSC2" (47|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble8 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCAccReqValHSC2" (48|11, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble9 - ( -7.22
          ) ) / 0.005 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000007FF;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "ACCSysAlvRlngCtr_SCSHSC2" (59|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble32 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCMinBrkReqStsHSC2" (63|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble10 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* DataTypeConversion: '<S247>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay_p);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_bz = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S247>/Data Type Conversion1' */

    /* Sum: '<S243>/Add' incorporates:
     *  Constant: '<S201>/AEBDclReqVal'
     *  Constant: '<S243>/Constant'
     */
    Intergration_B.Add_j = Intergration_P.AEBDclReqVal_Value +
      Intergration_P.Constant_Value_k;

    /* Product: '<S243>/Divide' incorporates:
     *  Constant: '<S243>/Constant1'
     */
    Intergration_B.Divide_l2 = (real32_T)(Intergration_B.Add_j /
      Intergration_P.Constant1_Value_o);

    /* DataTypeConversion: '<S243>/Data Type Conversion2' */
    tmp = (real32_T)floor(Intergration_B.Divide_l2);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion2_ie = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S243>/Data Type Conversion2' */
    /* S-Function (sfix_bitop): '<S243>/Bitwise Operator' */
    Intergration_B.VectorConcatenate1_c[0] = (uint8_T)
      (Intergration_B.DataTypeConversion2_ie &
       Intergration_P.BitwiseOperator_BitMask_f);

    /* S-Function (sfix_bitop): '<S244>/Bitwise Operator1' incorporates:
     *  Constant: '<S244>/Constant'
     */
    Intergration_B.BitwiseOperator1_de = (uint8_T)
      (Intergration_P.Constant_Value_fv &
       Intergration_P.BitwiseOperator1_BitMask_e);

    /* DataTypeConversion: '<S244>/Data Type Conversion2' incorporates:
     *  Constant: '<S201>/AEBPrflReq'
     */
    Intergration_B.DataTypeConversion2_i2 = Intergration_P.AEBPrflReq_Value;

    /* ArithShift: '<S244>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_kh = (uint8_T)
      (Intergration_B.DataTypeConversion2_i2 << 7);

    /* S-Function (sfix_bitop): '<S244>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_h = (uint8_T)
      (Intergration_B.ShiftArithmetic1_kh &
       Intergration_P.BitwiseOperator2_BitMask_d);

    /* DataTypeConversion: '<S245>/Data Type Conversion2' incorporates:
     *  Constant: '<S201>/ACCAEBBrkJerkLvlReq_Radar'
     */
    tmp = (real32_T)floor(Intergration_P.ACCAEBBrkJerkLvlReq_Radar_Value);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion2_ex = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S245>/Data Type Conversion2' */

    /* ArithShift: '<S245>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_jv = (uint8_T)
      (Intergration_B.DataTypeConversion2_ex << 2);

    /* S-Function (sfix_bitop): '<S245>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_l = (uint8_T)
      (Intergration_B.ShiftArithmetic1_jv &
       Intergration_P.BitwiseOperator2_BitMask_m0);

    /* DataTypeConversion: '<S245>/Data Type Conversion1' incorporates:
     *  Constant: '<S201>/AEBSysSts_Radar'
     */
    tmp = (real32_T)floor(Intergration_P.AEBSysSts_Radar_Value);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_ij = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S245>/Data Type Conversion1' */

    /* ArithShift: '<S245>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_af = (uint8_T)
      (Intergration_B.DataTypeConversion1_ij << 5);

    /* S-Function (sfix_bitop): '<S245>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_ho = (uint8_T)
      (Intergration_B.ShiftArithmetic2_af &
       Intergration_P.BitwiseOperator1_BitMask_d);

    /* DataTypeConversion: '<S246>/Data Type Conversion3' incorporates:
     *  Constant: '<S201>/AEBHydBrkAstLvlReq'
     */
    tmp = (real32_T)floor(Intergration_P.AEBHydBrkAstLvlReq_Value);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion3_eq = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S246>/Data Type Conversion3' */

    /* ArithShift: '<S246>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_d = (uint8_T)
      (Intergration_B.DataTypeConversion3_eq << 5);

    /* S-Function (sfix_bitop): '<S246>/Bitwise Operator3' */
    Intergration_B.BitwiseOperator3_o = (uint8_T)
      (Intergration_B.ShiftArithmetic2_d &
       Intergration_P.BitwiseOperator3_BitMask);

    /* DataTypeConversion: '<S246>/Data Type Conversion2' incorporates:
     *  Constant: '<S201>/AEBDclReqSts'
     */
    Intergration_B.DataTypeConversion2_mu = Intergration_P.AEBDclReqSts_Value;

    /* S-Function (sfix_bitop): '<S246>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_b = (uint8_T)
      (Intergration_B.DataTypeConversion2_mu &
       Intergration_P.BitwiseOperator2_BitMask_ng);

    /* DataTypeConversion: '<S246>/Data Type Conversion1' incorporates:
     *  Constant: '<S201>/AEBPedtrnSysSts'
     */
    tmp = (real32_T)floor(Intergration_P.AEBPedtrnSysSts_Value);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_hb = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S246>/Data Type Conversion1' */

    /* ArithShift: '<S246>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_ek = (uint8_T)
      (Intergration_B.DataTypeConversion1_hb << 2);

    /* S-Function (sfix_bitop): '<S246>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_n = (uint8_T)
      (Intergration_B.ShiftArithmetic1_ek &
       Intergration_P.BitwiseOperator1_BitMask_pj);

    /* DataTypeConversion: '<S247>/Data Type Conversion3' incorporates:
     *  Constant: '<S201>/AEBPedtrnSysFltSts'
     */
    tmp = (real32_T)floor(Intergration_P.AEBPedtrnSysFltSts_Value);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion3_dd = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S247>/Data Type Conversion3' */

    /* ArithShift: '<S247>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_o = (uint8_T)
      (Intergration_B.DataTypeConversion3_dd << 4);

    /* S-Function (sfix_bitop): '<S247>/Bitwise Operator3' */
    Intergration_B.BitwiseOperator3_d = (uint8_T)
      (Intergration_B.ShiftArithmetic2_o &
       Intergration_P.BitwiseOperator3_BitMask_d);

    /* S-Function (sfix_bitop): '<S247>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_aet = (uint8_T)
      (Intergration_B.DataTypeConversion1_bz &
       Intergration_P.BitwiseOperator1_BitMask_bb);

    /* Sum: '<S247>/Add' */
    Intergration_B.VectorConcatenate1_c[4] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator3_d + Intergration_B.BitwiseOperator1_aet);

    /* DataTypeConversion: '<S242>/Data Type Conversion3' incorporates:
     *  Constant: '<S201>/AEBSysFltSts_Radar'
     */
    tmp = (real32_T)floor(Intergration_P.AEBSysFltSts_Radar_Value);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion3_b0 = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S242>/Data Type Conversion3' */

    /* ArithShift: '<S242>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_mk = (uint8_T)
      (Intergration_B.DataTypeConversion3_b0 << 5);

    /* S-Function (sfix_bitop): '<S242>/Bitwise Operator3' */
    Intergration_B.VectorConcatenate1_c[5] = (uint8_T)
      (Intergration_B.ShiftArithmetic2_mk &
       Intergration_P.BitwiseOperator3_BitMask_o);

    /* Sum: '<S244>/Add' */
    Intergration_B.VectorConcatenate1_c[1] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator1_de + Intergration_B.BitwiseOperator2_h);

    /* Sum: '<S245>/Add' */
    Intergration_B.VectorConcatenate1_c[2] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator2_l + Intergration_B.BitwiseOperator1_ho);

    /* Sum: '<S246>/Add' */
    Intergration_B.VectorConcatenate1_c[3] = (uint8_T)((uint32_T)(uint8_T)
      ((uint32_T)Intergration_B.BitwiseOperator3_o +
       Intergration_B.BitwiseOperator2_b) + Intergration_B.BitwiseOperator1_n);
    Intergration_B.VectorConcatenate1_c[6] = Intergration_P.Constant_Value_j;

    /* S-Function (CheckSum_0x242): '<S201>/S-Function Builder1' incorporates:
     *  Constant: '<S201>/Constant'
     *  Constant: '<S201>/Constant1'
     */
    CheckSum_0x242_Outputs_wrapper(&Intergration_B.VectorConcatenate1_c[0],
      &Intergration_P.Constant1_Value_hq, &Intergration_B.SFunctionBuilder1_i);

    /* DataTypeConversion: '<S201>/Cast To Double45' */
    Intergration_B.CastToDouble45 = Intergration_B.SFunctionBuilder1_i;

    /* DataTypeConversion: '<S201>/Cast To Double33' incorporates:
     *  Constant: '<S201>/ACCAccReqValGrdMin'
     */
    Intergration_B.CastToDouble33 = Intergration_P.ACCAccReqValGrdMin_Value;

    /* DataTypeConversion: '<S201>/Cast To Double34' incorporates:
     *  Constant: '<S201>/AEBSysFltSts_Radar'
     */
    Intergration_B.CastToDouble34 = Intergration_P.AEBSysFltSts_Radar_Value;

    /* Product: '<S243>/Multiply' incorporates:
     *  Constant: '<S243>/Constant4'
     */
    Intergration_B.Multiply_l = (real_T)Intergration_B.DataTypeConversion2_ie *
      Intergration_P.Constant4_Value_a;

    /* Sum: '<S243>/Add1' incorporates:
     *  Constant: '<S243>/Constant5'
     */
    Intergration_B.Add1_i = Intergration_B.Multiply_l -
      Intergration_P.Constant5_Value_l;

    /* DataTypeConversion: '<S201>/Cast To Double35' */
    Intergration_B.CastToDouble35 = Intergration_B.Add1_i;

    /* DataTypeConversion: '<S201>/Cast To Double36' */
    Intergration_B.CastToDouble36 = Intergration_B.Delay_p;

    /* DataTypeConversion: '<S201>/Cast To Double37' incorporates:
     *  Constant: '<S201>/AEBPedtrnSysFltSts'
     */
    Intergration_B.CastToDouble37 = Intergration_P.AEBPedtrnSysFltSts_Value;

    /* DataTypeConversion: '<S201>/Cast To Double38' incorporates:
     *  Constant: '<S201>/AEBDclReqSts'
     */
    Intergration_B.CastToDouble38 = Intergration_P.AEBDclReqSts_Value;

    /* DataTypeConversion: '<S201>/Cast To Double39' incorporates:
     *  Constant: '<S201>/AEBPedtrnSysSts'
     */
    Intergration_B.CastToDouble39 = Intergration_P.AEBPedtrnSysSts_Value;

    /* DataTypeConversion: '<S201>/Cast To Double40' incorporates:
     *  Constant: '<S201>/AEBHydBrkAstLvlReq'
     */
    Intergration_B.CastToDouble40 = Intergration_P.AEBHydBrkAstLvlReq_Value;

    /* DataTypeConversion: '<S201>/Cast To Double41' incorporates:
     *  Constant: '<S201>/ACCAEBBrkJerkLvlReq_Radar'
     */
    Intergration_B.CastToDouble41 =
      Intergration_P.ACCAEBBrkJerkLvlReq_Radar_Value;

    /* DataTypeConversion: '<S201>/Cast To Double42' incorporates:
     *  Constant: '<S201>/AEBSysSts_Radar'
     */
    Intergration_B.CastToDouble42 = Intergration_P.AEBSysSts_Radar_Value;

    /* DataTypeConversion: '<S201>/Cast To Double43' incorporates:
     *  Constant: '<S201>/ACCAccReqValGrdMax'
     */
    Intergration_B.CastToDouble43 = Intergration_P.ACCAccReqValGrdMax_Value;

    /* DataTypeConversion: '<S201>/Cast To Double44' incorporates:
     *  Constant: '<S201>/AEBPrflReq'
     */
    Intergration_B.CastToDouble44 = Intergration_P.AEBPrflReq_Value;

    /* S-Function (rti_commonblock): '<S241>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP01" Id:580 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]);

      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_o1 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->processed;
        Intergration_B.SFunction1_o2_fs = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->timestamp;
        Intergration_B.SFunction1_o3_kl = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->deltatime;
        Intergration_B.SFunction1_o4_kx = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "AEBChksm_SCSHSC2" (0|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble45 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCAccReqValGrdMinHSC2" (8|7, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble33 -
          ( -12.7 ) ) / 0.1 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000007F;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBSysFltSts_RadarHSC2" (21|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble34 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 5;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBAlvRlngCtr_SCSHSC2" (24|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble36 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBPedtrnSysFltStsHSC2" (28|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble37 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBDclReqStsHSC2" (32|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble38 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBPedtrnSysStsHSC2" (34|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble39 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 2;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBHydBrkAstLvlReqHSC2" (37|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble40 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 5;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCAEBBrkJerkLvlReq_RadarHSC2" (42|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble41 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 2;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBSysSts_RadarHSC2" (45|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble42 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 5;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCAccReqValGrdMaxHSC2" (48|7, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble43 - ( 0 ) )
          / 0.1 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000007F;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBPrflReqHSC2" (55|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble44 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBDclReqValHSC2" (56|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble35 -
          ( -12.7 ) ) / 0.1 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* Switch: '<S203>/Switch' incorporates:
     *  Constant: '<S203>/Constant6'
     */
    if (Intergration_B.Delay_p > Intergration_P.Switch_Threshold) {
      Intergration_B.Switch_l = Intergration_P.Constant6_Value;
    } else {
      Intergration_B.Switch_l = Intergration_B.Delay_p;
    }

    /* End of Switch: '<S203>/Switch' */

    /* Sum: '<S203>/Add2' incorporates:
     *  Constant: '<S203>/Constant5'
     */
    Intergration_B.Add2_d = Intergration_P.Constant5_Value_n +
      Intergration_B.Switch_l;

    /* Gain: '<S208>/SetSpdConvert' incorporates:
     *  Outport: '<Root>/ACC_LgtCtrl_st'
     */
    Intergration_B.BusCreator2.ACCDrvrSelTrgtSpd_RadarHSC2 =
      Intergration_P.SetSpdConvert_Gain * Intergration_Y.ACC_LgtCtrl_st.ACCvSet;

    /* Lookup_n-D: '<S208>/1-D Lookup Table1' */
    bpIdx = plook_u32f_lincka(Intergration_B.ATS_Po_st.dx,
      Intergration_P.uDLookupTable1_bp01Data, 4U);
    Intergration_B.BusCreator2.ACCDetObjDistLvl_RadarHSC2 =
      Intergration_P.uDLookupTable1_tableData[bpIdx];

    /* BusCreator: '<S208>/Bus Creator2' incorporates:
     *  Constant: '<S208>/ACCDrvrSeldTrgtDistLvl'
     *  Constant: '<S208>/ACCDrvrTkovReq'
     *  Constant: '<S208>/ACCGoNotfr'
     *  Constant: '<S208>/ACCMsgReq'
     *  Constant: '<S208>/ACCSysCanclReq'
     *  Constant: '<S208>/ACCSysFltSts_246'
     *  Constant: '<S208>/AEBDspCmd'
     *  Constant: '<S208>/AEBMsgReq'
     *  Constant: '<S208>/AEBPedtrnDspCmd'
     *  Constant: '<S208>/FCWDspCmd'
     *  Constant: '<S208>/FCWSnstvtLvl'
     *  Constant: '<S208>/FCWSysFltSts'
     *  Constant: '<S208>/FCWrnngSts'
     *  Constant: '<S208>/RdrCalPrgsReq'
     */
    Intergration_B.BusCreator2.RdrCalPrgsReqHSC2 =
      Intergration_P.RdrCalPrgsReq_Value;
    Intergration_B.BusCreator2.FCWSysFltSts_RadarHSC2 =
      Intergration_P.FCWSysFltSts_Value;
    Intergration_B.BusCreator2.FCWSnstvtLvl_RadarHSC2 =
      Intergration_P.FCWSnstvtLvl_Value;
    Intergration_B.BusCreator2.FCWrnngSts_RadarHSC2 =
      Intergration_P.FCWrnngSts_Value;
    Intergration_B.BusCreator2.FCWDspCmd_RadarHSC2 =
      Intergration_P.FCWDspCmd_Value;
    Intergration_B.BusCreator2.AEBPedtrnDspCmdHSC2 =
      Intergration_P.AEBPedtrnDspCmd_Value;
    Intergration_B.BusCreator2.AEBMsgReqHSC2 = Intergration_P.AEBMsgReq_Value;
    Intergration_B.BusCreator2.AEBDspCmd_RadarHSC2 =
      Intergration_P.AEBDspCmd_Value;
    Intergration_B.BusCreator2.ACCSysFltSts_RadarHSC2 =
      Intergration_P.ACCSysFltSts_246_Value;
    Intergration_B.BusCreator2.ACCSysCanclReq_RadarHSC2 =
      Intergration_P.ACCSysCanclReq_Value;
    Intergration_B.BusCreator2.ACCObjDet_RadarHSC2 =
      Intergration_B.ATS_Po_st.Valid;
    Intergration_B.BusCreator2.ACCMsgReqHSC2 = Intergration_P.ACCMsgReq_Value;
    Intergration_B.BusCreator2.ACCGoNotfr_RadarHSC2 =
      Intergration_P.ACCGoNotfr_Value;
    Intergration_B.BusCreator2.ACCDrvrTkovReqHSC2 =
      Intergration_P.ACCDrvrTkovReq_Value;
    Intergration_B.BusCreator2.ACCDrvrSeldTrgtDistLvl_RadarHSC2 =
      Intergration_P.ACCDrvrSeldTrgtDistLvl_Value;

    /* BusCreator: '<S208>/Bus Creator' incorporates:
     *  Constant: '<S208>/ACCDetObjDistLvl'
     *  Constant: '<S208>/ACCDrvrSelTrgtSpd'
     *  Constant: '<S208>/ACCDrvrSeldTrgtDistLvl'
     *  Constant: '<S208>/ACCDrvrTkovReq'
     *  Constant: '<S208>/ACCGoNotfr'
     *  Constant: '<S208>/ACCMsgReq'
     *  Constant: '<S208>/ACCObjDet'
     *  Constant: '<S208>/ACCSysCanclReq'
     *  Constant: '<S208>/ACCSysFltSts_246'
     *  Constant: '<S208>/AEBDspCmd'
     *  Constant: '<S208>/AEBMsgReq'
     *  Constant: '<S208>/AEBPedtrnDspCmd'
     *  Constant: '<S208>/FCWDspCmd'
     *  Constant: '<S208>/FCWSnstvtLvl'
     *  Constant: '<S208>/FCWSysFltSts'
     *  Constant: '<S208>/FCWrnngSts'
     *  Constant: '<S208>/RdrCalPrgsReq'
     */
    Intergration_B.BusCreator_ld.RdrCalPrgsReqHSC2 =
      Intergration_P.RdrCalPrgsReq_Value;
    Intergration_B.BusCreator_ld.FCWSysFltSts_RadarHSC2 =
      Intergration_P.FCWSysFltSts_Value;
    Intergration_B.BusCreator_ld.FCWSnstvtLvl_RadarHSC2 =
      Intergration_P.FCWSnstvtLvl_Value;
    Intergration_B.BusCreator_ld.FCWrnngSts_RadarHSC2 =
      Intergration_P.FCWrnngSts_Value;
    Intergration_B.BusCreator_ld.FCWDspCmd_RadarHSC2 =
      Intergration_P.FCWDspCmd_Value;
    Intergration_B.BusCreator_ld.AEBPedtrnDspCmdHSC2 =
      Intergration_P.AEBPedtrnDspCmd_Value;
    Intergration_B.BusCreator_ld.AEBMsgReqHSC2 = Intergration_P.AEBMsgReq_Value;
    Intergration_B.BusCreator_ld.AEBDspCmd_RadarHSC2 =
      Intergration_P.AEBDspCmd_Value;
    Intergration_B.BusCreator_ld.ACCSysFltSts_RadarHSC2 =
      Intergration_P.ACCSysFltSts_246_Value;
    Intergration_B.BusCreator_ld.ACCSysCanclReq_RadarHSC2 =
      Intergration_P.ACCSysCanclReq_Value;
    Intergration_B.BusCreator_ld.ACCObjDet_RadarHSC2 =
      Intergration_P.ACCObjDet_Value;
    Intergration_B.BusCreator_ld.ACCMsgReqHSC2 = Intergration_P.ACCMsgReq_Value;
    Intergration_B.BusCreator_ld.ACCGoNotfr_RadarHSC2 =
      Intergration_P.ACCGoNotfr_Value;
    Intergration_B.BusCreator_ld.ACCDrvrTkovReqHSC2 =
      Intergration_P.ACCDrvrTkovReq_Value;
    Intergration_B.BusCreator_ld.ACCDrvrSelTrgtSpd_RadarHSC2 =
      Intergration_P.ACCDrvrSelTrgtSpd_Value;
    Intergration_B.BusCreator_ld.ACCDrvrSeldTrgtDistLvl_RadarHSC2 =
      Intergration_P.ACCDrvrSeldTrgtDistLvl_Value;
    Intergration_B.BusCreator_ld.ACCDetObjDistLvl_RadarHSC2 =
      Intergration_P.ACCDetObjDistLvl_Value;

    /* Switch: '<S208>/Switch7' incorporates:
     *  Constant: '<S208>/P_x246_On'
     */
    if (rtP_P_x246_On > Intergration_P.Switch7_Threshold) {
      Intergration_B.Switch7 = Intergration_B.BusCreator2;
    } else {
      Intergration_B.Switch7 = Intergration_B.BusCreator_ld;
    }

    /* End of Switch: '<S208>/Switch7' */

    /* DataTypeConversion: '<S202>/Cast To Double13' */
    Intergration_B.CastToDouble13_o =
      Intergration_B.Switch7.FCWrnngSts_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double14' */
    Intergration_B.CastToDouble14 = Intergration_B.Switch7.FCWDspCmd_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double15' */
    Intergration_B.CastToDouble15 = Intergration_B.Switch7.AEBDspCmd_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double16' */
    Intergration_B.CastToDouble16 =
      Intergration_B.Switch7.FCWSysFltSts_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double17' */
    Intergration_B.CastToDouble17 =
      Intergration_B.Switch7.FCWSnstvtLvl_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double18' */
    Intergration_B.CastToDouble18 = Intergration_B.Switch7.AEBPedtrnDspCmdHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double19' */
    Intergration_B.CastToDouble19 = Intergration_B.Switch7.RdrCalPrgsReqHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double20' */
    Intergration_B.CastToDouble20 = Intergration_B.Switch7.ACCGoNotfr_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double21' */
    Intergration_B.CastToDouble21 =
      Intergration_B.Switch7.ACCSysFltSts_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double22' */
    Intergration_B.CastToDouble22 = Intergration_B.Switch7.ACCDrvrTkovReqHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double23' */
    Intergration_B.CastToDouble23 =
      Intergration_B.Switch7.ACCDetObjDistLvl_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double24' */
    Intergration_B.CastToDouble24 =
      Intergration_B.Switch7.ACCDrvrSeldTrgtDistLvl_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double25' */
    Intergration_B.CastToDouble25 =
      Intergration_B.Switch7.ACCSysCanclReq_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double26' */
    Intergration_B.CastToDouble26 = Intergration_B.Switch7.AEBMsgReqHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double27' */
    Intergration_B.CastToDouble27 = Intergration_B.Switch7.ACCMsgReqHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double28' */
    Intergration_B.CastToDouble28 =
      Intergration_B.Switch7.ACCDrvrSelTrgtSpd_RadarHSC2;

    /* DataTypeConversion: '<S202>/Cast To Double29' */
    Intergration_B.CastToDouble29 = Intergration_B.Switch7.ACCObjDet_RadarHSC2;

    /* S-Function (rti_commonblock): '<S248>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP02" Id:582 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]);

      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_cn = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->processed;
        Intergration_B.SFunction1_o2_e5 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->timestamp;
        Intergration_B.SFunction1_o3_e5 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->deltatime;
        Intergration_B.SFunction1_o4_cm0 = (real_T)
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "FCWrnngSts_RadarHSC2" (9|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble13_o ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "FCWDspCmd_RadarHSC2" (12|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble14 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBDspCmd_RadarHSC2" (14|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble15 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "FCWSysFltSts_RadarHSC2" (16|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble16 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "FCWSnstvtLvl_RadarHSC2" (19|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble17 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBPedtrnDspCmdHSC2" (22|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble18 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "RdrCalPrgsReqHSC2" (24|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble19 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCGoNotfr_RadarHSC2" (27|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble20 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCSysFltSts_RadarHSC2" (28|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble21 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCDrvrTkovReqHSC2" (31|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble22 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCDetObjDistLvl_RadarHSC2" (32|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble23 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCDrvrSeldTrgtDistLvl_RadarHSC2" (35|3, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble24 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000007;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCSysCanclReq_RadarHSC2" (38|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble25 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "AEBMsgReqHSC2" (40|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble26 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCMsgReqHSC2" (44|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble27 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ACCDrvrSelTrgtSpd_RadarHSC2" (48|15, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble28 - ( 0 ) )
          / 0.015625 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00007FFF;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "ACCObjDet_RadarHSC2" (63|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble29 ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* DataTypeConversion: '<S195>/Cast To Double1' incorporates:
     *  Constant: '<S195>/Constant2'
     */
    Intergration_B.CastToDouble1_p = Intergration_P.Constant2_Value_f;

    /* DataTypeConversion: '<S195>/Cast To Double13' incorporates:
     *  Constant: '<S195>/Constant3'
     */
    Intergration_B.CastToDouble13_m = Intergration_P.Constant3_Value_d;

    /* DataTypeConversion: '<S195>/Cast To Double2' */
    Intergration_B.CastToDouble2_a =
      Intergration_B.COM_VehBus_st.x251.VehSdslSts;

    /* DataTypeConversion: '<S195>/Cast To Double3' incorporates:
     *  Constant: '<S195>/Constant'
     */
    Intergration_B.CastToDouble3_g = Intergration_P.Constant_Value_i;

    /* DataTypeConversion: '<S195>/Cast To Double4' incorporates:
     *  Constant: '<S195>/Constant4'
     */
    Intergration_B.CastToDouble4_o = Intergration_P.Constant4_Value_i;

    /* Delay: '<S211>/Delay' */
    Intergration_B.Delay_d = Intergration_DW.Delay_DSTATE_d;

    /* DataTypeConversion: '<S195>/Cast To Double5' */
    Intergration_B.CastToDouble5_o = Intergration_B.Delay_d;

    /* DataTypeConversion: '<S212>/Data Type Conversion3' incorporates:
     *  Constant: '<S195>/Constant4'
     */
    tmp = (real32_T)floor(Intergration_P.Constant4_Value_i);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion3_j1 = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S212>/Data Type Conversion3' */

    /* ArithShift: '<S212>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_e = (uint8_T)
      (Intergration_B.DataTypeConversion3_j1 << 7);

    /* S-Function (sfix_bitop): '<S212>/Bitwise Operator3' */
    Intergration_B.BitwiseOperator3_h = (uint8_T)
      (Intergration_B.ShiftArithmetic2_e &
       Intergration_P.BitwiseOperator3_BitMask_a);

    /* DataTypeConversion: '<S212>/Data Type Conversion1' incorporates:
     *  Constant: '<S195>/Constant1'
     */
    tmp = (real32_T)floor(Intergration_P.Constant1_Value_hk);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_hi = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S212>/Data Type Conversion1' */

    /* ArithShift: '<S212>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_p = (uint8_T)
      (Intergration_B.DataTypeConversion1_hi << 4);

    /* S-Function (sfix_bitop): '<S212>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_ga = (uint8_T)
      (Intergration_B.ShiftArithmetic1_p &
       Intergration_P.BitwiseOperator1_BitMask_k4);

    /* DataTypeConversion: '<S212>/Data Type Conversion2' incorporates:
     *  Constant: '<S195>/Constant'
     */
    tmp = (real32_T)floor(Intergration_P.Constant_Value_i);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion2_mr = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S212>/Data Type Conversion2' */

    /* ArithShift: '<S212>/Shift Arithmetic3' */
    Intergration_B.ShiftArithmetic3 = (uint8_T)
      (Intergration_B.DataTypeConversion2_mr << 2);

    /* S-Function (sfix_bitop): '<S212>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_dl = (uint8_T)
      (Intergration_B.ShiftArithmetic3 &
       Intergration_P.BitwiseOperator2_BitMask_a);

    /* DataTypeConversion: '<S213>/Data Type Conversion2' */
    tmp = (real32_T)floor(Intergration_B.COM_VehBus_st.x251.VehSdslSts);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion2_ff = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S213>/Data Type Conversion2' */

    /* ArithShift: '<S213>/Shift Arithmetic3' */
    Intergration_B.ShiftArithmetic3_c = (uint8_T)
      (Intergration_B.DataTypeConversion2_ff << 6);

    /* S-Function (sfix_bitop): '<S213>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_f3 = (uint8_T)
      (Intergration_B.ShiftArithmetic3_c &
       Intergration_P.BitwiseOperator2_BitMask_pv);

    /* DataTypeConversion: '<S213>/Data Type Conversion1' incorporates:
     *  Constant: '<S195>/Constant2'
     */
    tmp = (real32_T)floor(Intergration_P.Constant2_Value_f);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_lt = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S213>/Data Type Conversion1' */

    /* ArithShift: '<S213>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_b = (uint8_T)
      (Intergration_B.DataTypeConversion1_lt << 3);

    /* S-Function (sfix_bitop): '<S213>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_mq = (uint8_T)
      (Intergration_B.ShiftArithmetic1_b &
       Intergration_P.BitwiseOperator1_BitMask_bt);

    /* DataTypeConversion: '<S213>/Data Type Conversion3' incorporates:
     *  Constant: '<S195>/Constant3'
     */
    tmp = (real32_T)floor(Intergration_P.Constant3_Value_d);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion3_b0c = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S213>/Data Type Conversion3' */

    /* ArithShift: '<S213>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_n = (uint8_T)
      (Intergration_B.DataTypeConversion3_b0c << 1);

    /* S-Function (sfix_bitop): '<S213>/Bitwise Operator3' */
    Intergration_B.BitwiseOperator3_h1 = (uint8_T)
      (Intergration_B.ShiftArithmetic2_n &
       Intergration_P.BitwiseOperator3_BitMask_l);

    /* DataTypeConversion: '<S214>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay_d);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_fy = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S214>/Data Type Conversion1' */

    /* S-Function (sfix_bitop): '<S214>/Bitwise Operator2' */
    Intergration_B.VectorConcatenate1_o[6] = (uint8_T)
      (Intergration_B.DataTypeConversion1_fy &
       Intergration_P.BitwiseOperator2_BitMask_h);

    /* Sum: '<S212>/Add' */
    Intergration_B.VectorConcatenate1_o[0] = (uint8_T)((uint32_T)(uint8_T)
      ((uint32_T)Intergration_B.BitwiseOperator3_h +
       Intergration_B.BitwiseOperator1_ga) + Intergration_B.BitwiseOperator2_dl);

    /* Sum: '<S213>/Add' */
    Intergration_B.VectorConcatenate1_o[1] = (uint8_T)((uint32_T)(uint8_T)
      ((uint32_T)Intergration_B.BitwiseOperator2_f3 +
       Intergration_B.BitwiseOperator1_mq) + Intergration_B.BitwiseOperator3_h1);

    /* SignalConversion: '<S195>/ConcatBufferAtVector Concatenate1In3' incorporates:
     *  Constant: '<S195>/Constant5'
     */
    Intergration_B.VectorConcatenate1_o[2] = Intergration_P.Constant5_Value_k;

    /* SignalConversion: '<S195>/ConcatBufferAtVector Concatenate1In4' incorporates:
     *  Constant: '<S195>/Constant5'
     */
    Intergration_B.VectorConcatenate1_o[3] = Intergration_P.Constant5_Value_k;

    /* SignalConversion: '<S195>/ConcatBufferAtVector Concatenate1In5' incorporates:
     *  Constant: '<S195>/Constant5'
     */
    Intergration_B.VectorConcatenate1_o[4] = Intergration_P.Constant5_Value_k;

    /* SignalConversion: '<S195>/ConcatBufferAtVector Concatenate1In6' incorporates:
     *  Constant: '<S195>/Constant5'
     */
    Intergration_B.VectorConcatenate1_o[5] = Intergration_P.Constant5_Value_k;

    /* S-Function (CheckSum_Tx_Radar410): '<S195>/S-Function Builder' incorporates:
     *  Constant: '<S195>/Constant6'
     */
    CheckSum_Tx_Radar410_Outputs_wrapper(&Intergration_B.VectorConcatenate1_o[0],
      &Intergration_P.Constant6_Value_kg, &Intergration_B.SFunctionBuilder_n);

    /* DataTypeConversion: '<S195>/Cast To Double6' */
    Intergration_B.CastToDouble6_g = Intergration_B.SFunctionBuilder_n;

    /* DataTypeConversion: '<S195>/Cast To Double7' incorporates:
     *  Constant: '<S195>/Constant1'
     */
    Intergration_B.CastToDouble7_d = Intergration_P.Constant1_Value_hk;

    /* S-Function (rti_commonblock): '<S210>/S-Function1' incorporates:
     *  Constant: '<S195>/Constant7'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "ESC_DA_MESSAGE" Id:295 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]);

      /* Convert timestamp */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->processed) {
        can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_l5 = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->processed;
        Intergration_B.SFunction1_o2_nx = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->timestamp;
        Intergration_B.SFunction1_o3_dy = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->deltatime;
        Intergration_B.SFunction1_o4_kl = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "ESC_DA_MESSAGE_Checksum" (0|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble6_g ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_DA_MESSAGE_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble5_o ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_DTC_Active" (40|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_BrakeTempTooHigh" (41|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_QDCFRS" (47|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_ABA_active" (48|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_ABA_available" (49|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble13_m ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_AWB_active" (50|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 2;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_AWB_available" (51|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1_p ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_Vehiclestandstill" (54|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2_a ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_NoBrakeForce" (58|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble3_g ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 2;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_DiagExtModSts" (59|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_ABP_available" (60|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble7_d ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_ABP_active" (61|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 5;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_AEB_active" (62|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant7_Value ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_AEB_available" (63|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble4_o ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* Switch: '<S211>/Switch' incorporates:
     *  Constant: '<S211>/Constant6'
     */
    if (Intergration_B.Delay_d > Intergration_P.Switch_Threshold_d) {
      Intergration_B.Switch_b = Intergration_P.Constant6_Value_b;
    } else {
      Intergration_B.Switch_b = Intergration_B.Delay_d;
    }

    /* End of Switch: '<S211>/Switch' */

    /* Sum: '<S211>/Add2' incorporates:
     *  Constant: '<S211>/Constant5'
     */
    Intergration_B.Add2_b = Intergration_P.Constant5_Value_p +
      Intergration_B.Switch_b;

    /* Product: '<S219>/Divide' incorporates:
     *  Constant: '<S219>/Constant'
     */
    Intergration_B.Divide_n =
      Intergration_B.COM_VehBus_st.x24C.WhlGndVelRDrvn_Radar /
      Intergration_P.Constant_Value_p;

    /* DataTypeConversion: '<S219>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide_n);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_gr = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S219>/Data Type Conversion1' */

    /* Product: '<S219>/Multiply' incorporates:
     *  Constant: '<S219>/Constant1'
     */
    Intergration_B.Multiply_o = Intergration_P.Constant1_Value_h * (real_T)
      Intergration_B.DataTypeConversion1_gr;

    /* DataTypeConversion: '<S196>/Cast To Double1' */
    Intergration_B.CastToDouble1_k = Intergration_B.Multiply_o;

    /* DataTypeConversion: '<S196>/Cast To Double2' */
    Intergration_B.CastToDouble2_j =
      Intergration_B.COM_VehBus_st.x24C.LDrvnWhlRotlDircn;

    /* Product: '<S217>/Divide' incorporates:
     *  Constant: '<S217>/Constant'
     */
    Intergration_B.Divide_l =
      Intergration_B.COM_VehBus_st.x24C.WhlGndVelLDrvn_Radar /
      Intergration_P.Constant_Value_e;

    /* DataTypeConversion: '<S217>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide_l);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_hc = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S217>/Data Type Conversion1' */

    /* Product: '<S217>/Multiply' incorporates:
     *  Constant: '<S217>/Constant1'
     */
    Intergration_B.Multiply_f = Intergration_P.Constant1_Value_hc * (real_T)
      Intergration_B.DataTypeConversion1_hc;

    /* DataTypeConversion: '<S196>/Cast To Double3' */
    Intergration_B.CastToDouble3_o = Intergration_B.Multiply_f;

    /* DataTypeConversion: '<S196>/Cast To Double4' */
    Intergration_B.CastToDouble4_b =
      Intergration_B.COM_VehBus_st.x24C.RDrvnWhlRotlDircn;

    /* Delay: '<S216>/Delay' */
    Intergration_B.Delay_dl = Intergration_DW.Delay_DSTATE_p;

    /* DataTypeConversion: '<S196>/Cast To Double5' */
    Intergration_B.CastToDouble5_h = Intergration_B.Delay_dl;

    /* ArithShift: '<S217>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_i = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_hc >> 5);

    /* S-Function (sfix_bitop): '<S217>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_f = (uint16_T)
      (Intergration_B.ShiftArithmetic1_i &
       Intergration_P.BitwiseOperator1_BitMask_b);

    /* DataTypeConversion: '<S218>/Data Type Conversion1' */
    tmp = (real32_T)floor(Intergration_B.COM_VehBus_st.x24C.LDrvnWhlRotlDircn);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_ile = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S218>/Data Type Conversion1' */

    /* ArithShift: '<S218>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_of = (uint8_T)
      (Intergration_B.DataTypeConversion1_ile << 1);

    /* S-Function (sfix_bitop): '<S218>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_hq = (uint8_T)
      (Intergration_B.ShiftArithmetic1_of &
       Intergration_P.BitwiseOperator1_BitMask_j);

    /* ArithShift: '<S218>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2 = (uint16_T)
      (Intergration_B.DataTypeConversion1_hc << 3);

    /* S-Function (sfix_bitop): '<S218>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_d = (uint16_T)
      (Intergration_B.ShiftArithmetic2 &
       Intergration_P.BitwiseOperator2_BitMask_i);

    /* ArithShift: '<S219>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_g = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_gr >> 5);

    /* S-Function (sfix_bitop): '<S219>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_a = (uint16_T)
      (Intergration_B.ShiftArithmetic1_g &
       Intergration_P.BitwiseOperator1_BitMask_p);

    /* DataTypeConversion: '<S220>/Data Type Conversion1' */
    tmp = (real32_T)floor(Intergration_B.COM_VehBus_st.x24C.RDrvnWhlRotlDircn);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_dd = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S220>/Data Type Conversion1' */

    /* ArithShift: '<S220>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_np = (uint8_T)
      (Intergration_B.DataTypeConversion1_dd << 1);

    /* S-Function (sfix_bitop): '<S220>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_eq = (uint8_T)
      (Intergration_B.ShiftArithmetic1_np &
       Intergration_P.BitwiseOperator1_BitMask_o);

    /* ArithShift: '<S220>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_f = (uint16_T)
      (Intergration_B.DataTypeConversion1_gr << 3);

    /* S-Function (sfix_bitop): '<S220>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_c = (uint16_T)
      (Intergration_B.ShiftArithmetic2_f &
       Intergration_P.BitwiseOperator2_BitMask_p);

    /* DataTypeConversion: '<S221>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay_dl);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_bm = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S221>/Data Type Conversion1' */

    /* S-Function (sfix_bitop): '<S221>/Bitwise Operator2' */
    Intergration_B.VectorConcatenate1_p[6] = (uint8_T)
      (Intergration_B.DataTypeConversion1_bm &
       Intergration_P.BitwiseOperator2_BitMask_lp);

    /* DataTypeConversion: '<S217>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_p[0] = (uint8_T)
      Intergration_B.BitwiseOperator1_f;

    /* DataTypeConversion: '<S218>/Data Type Conversion2' */
    Intergration_B.DataTypeConversion2_om = (uint8_T)
      Intergration_B.BitwiseOperator2_d;

    /* Sum: '<S218>/Add' */
    Intergration_B.VectorConcatenate1_p[1] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator1_hq + Intergration_B.DataTypeConversion2_om);

    /* DataTypeConversion: '<S219>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_p[2] = (uint8_T)
      Intergration_B.BitwiseOperator1_a;

    /* DataTypeConversion: '<S220>/Data Type Conversion2' */
    Intergration_B.DataTypeConversion2_gk = (uint8_T)
      Intergration_B.BitwiseOperator2_c;

    /* Sum: '<S220>/Add' */
    Intergration_B.VectorConcatenate1_p[3] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator1_eq + Intergration_B.DataTypeConversion2_gk);

    /* SignalConversion: '<S196>/ConcatBufferAtVector Concatenate1In5' incorporates:
     *  Constant: '<S196>/Constant'
     */
    Intergration_B.VectorConcatenate1_p[4] = Intergration_P.Constant_Value_l;

    /* SignalConversion: '<S196>/ConcatBufferAtVector Concatenate1In6' incorporates:
     *  Constant: '<S196>/Constant'
     */
    Intergration_B.VectorConcatenate1_p[5] = Intergration_P.Constant_Value_l;

    /* S-Function (CheckSum_Tx_Radar410): '<S196>/S-Function Builder1' incorporates:
     *  Constant: '<S196>/Constant6'
     */
    CheckSum_Tx_Radar410_Outputs_wrapper(&Intergration_B.VectorConcatenate1_p[0],
      &Intergration_P.Constant6_Value_ko, &Intergration_B.SFunctionBuilder1_l);

    /* DataTypeConversion: '<S196>/Cast To Double6' */
    Intergration_B.CastToDouble6_h = Intergration_B.SFunctionBuilder1_l;

    /* S-Function (rti_commonblock): '<S215>/S-Function1' incorporates:
     *  Constant: '<S196>/Constant1'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "ESC_FrontWheelSpeedKPH" Id:291 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]);

      /* Convert timestamp */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->processed) {
        can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_c2m = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->processed;
        Intergration_B.SFunction1_o2_dj = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->timestamp;
        Intergration_B.SFunction1_o3_ksi = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->deltatime;
        Intergration_B.SFunction1_o4_ml = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "ESC_FrontWheelSpeedsKPH_Checksum" (0|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble6_h ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_FrontWheelSpeedsKPH_AliveCou" (8|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble5_h ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_Mcylinder_PressureInvalid" (12|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_d1 ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_Mcylinder_Pressure" (24|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_d1 ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_FRWheelSpeedInvalid" (32|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_d1 ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_FRWheelDirection" (33|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble4_b ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_FRWheelSpeedKPH" (35|13, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1_k - ( 0 )
          ) / 0.05625 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00001FFF;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "ESC_FLWheelSpeedInvalid" (48|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_d1 ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_FLWheelDirection" (49|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2_j ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_FLWheelSpeedKPH" (51|13, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble3_o - ( 0 )
          ) / 0.05625 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00001FFF;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte1;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* Switch: '<S216>/Switch' incorporates:
     *  Constant: '<S216>/Constant6'
     */
    if (Intergration_B.Delay_dl > Intergration_P.Switch_Threshold_j) {
      Intergration_B.Switch_lu = Intergration_P.Constant6_Value_g;
    } else {
      Intergration_B.Switch_lu = Intergration_B.Delay_dl;
    }

    /* End of Switch: '<S216>/Switch' */

    /* Sum: '<S216>/Add2' incorporates:
     *  Constant: '<S216>/Constant5'
     */
    Intergration_B.Add2_p = Intergration_P.Constant5_Value_m +
      Intergration_B.Switch_lu;

    /* Product: '<S226>/Divide' incorporates:
     *  Constant: '<S226>/Constant'
     */
    Intergration_B.Divide_lo =
      Intergration_B.COM_VehBus_st.x24E.WhlGndVelRNonDrvn_Radar /
      Intergration_P.Constant_Value_ea;

    /* DataTypeConversion: '<S226>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide_lo);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_oq = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S226>/Data Type Conversion1' */

    /* Product: '<S226>/Multiply' incorporates:
     *  Constant: '<S226>/Constant1'
     */
    Intergration_B.Multiply_on = Intergration_P.Constant1_Value_i * (real_T)
      Intergration_B.DataTypeConversion1_oq;

    /* DataTypeConversion: '<S197>/Cast To Double1' */
    Intergration_B.CastToDouble1_i = Intergration_B.Multiply_on;

    /* DataTypeConversion: '<S197>/Cast To Double2' */
    Intergration_B.CastToDouble2_p =
      Intergration_B.COM_VehBus_st.x24E.LNonDrvnWhlRotlDircn_Radar;

    /* DataTypeConversion: '<S197>/Cast To Double3' */
    Intergration_B.CastToDouble3_h =
      Intergration_B.COM_VehBus_st.x24E.RNonDrvnWhlRotlDircn_Radar;

    /* Product: '<S224>/Divide' incorporates:
     *  Constant: '<S224>/Constant'
     */
    Intergration_B.Divide_a =
      Intergration_B.COM_VehBus_st.x24E.WhlGndVelLNonDrvn_Radar /
      Intergration_P.Constant_Value_b4;

    /* DataTypeConversion: '<S224>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide_a);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_bd = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S224>/Data Type Conversion1' */

    /* Product: '<S224>/Multiply' incorporates:
     *  Constant: '<S224>/Constant1'
     */
    Intergration_B.Multiply_b = Intergration_P.Constant1_Value_n * (real_T)
      Intergration_B.DataTypeConversion1_bd;

    /* DataTypeConversion: '<S197>/Cast To Double4' */
    Intergration_B.CastToDouble4_l = Intergration_B.Multiply_b;

    /* Delay: '<S223>/Delay' */
    Intergration_B.Delay_h = Intergration_DW.Delay_DSTATE_p0;

    /* DataTypeConversion: '<S197>/Cast To Double5' */
    Intergration_B.CastToDouble5_hp = Intergration_B.Delay_h;

    /* ArithShift: '<S224>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_k = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_bd >> 5);

    /* S-Function (sfix_bitop): '<S224>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_o = (uint16_T)
      (Intergration_B.ShiftArithmetic1_k &
       Intergration_P.BitwiseOperator1_BitMask_g);

    /* DataTypeConversion: '<S225>/Data Type Conversion1' */
    tmp = (real32_T)floor
      (Intergration_B.COM_VehBus_st.x24E.LNonDrvnWhlRotlDircn_Radar);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_nb = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S225>/Data Type Conversion1' */

    /* ArithShift: '<S225>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_pk = (uint8_T)
      (Intergration_B.DataTypeConversion1_nb << 1);

    /* S-Function (sfix_bitop): '<S225>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_dd = (uint8_T)
      (Intergration_B.ShiftArithmetic1_pk &
       Intergration_P.BitwiseOperator1_BitMask_bs);

    /* ArithShift: '<S225>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_a = (uint16_T)
      (Intergration_B.DataTypeConversion1_bd << 3);

    /* S-Function (sfix_bitop): '<S225>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_k = (uint16_T)
      (Intergration_B.ShiftArithmetic2_a &
       Intergration_P.BitwiseOperator2_BitMask_f);

    /* ArithShift: '<S226>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_o = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_oq >> 5);

    /* S-Function (sfix_bitop): '<S226>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_m = (uint16_T)
      (Intergration_B.ShiftArithmetic1_o &
       Intergration_P.BitwiseOperator1_BitMask_k);

    /* DataTypeConversion: '<S227>/Data Type Conversion1' */
    tmp = (real32_T)floor
      (Intergration_B.COM_VehBus_st.x24E.RNonDrvnWhlRotlDircn_Radar);
    if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
      tmp = 0.0F;
    } else {
      tmp = (real32_T)fmod(tmp, 256.0);
    }

    Intergration_B.DataTypeConversion1_fq = (uint8_T)(tmp < 0.0F ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S227>/Data Type Conversion1' */

    /* ArithShift: '<S227>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_jg = (uint8_T)
      (Intergration_B.DataTypeConversion1_fq << 1);

    /* S-Function (sfix_bitop): '<S227>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_ed = (uint8_T)
      (Intergration_B.ShiftArithmetic1_jg &
       Intergration_P.BitwiseOperator1_BitMask_iy);

    /* ArithShift: '<S227>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_m = (uint16_T)
      (Intergration_B.DataTypeConversion1_oq << 3);

    /* S-Function (sfix_bitop): '<S227>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_dc = (uint16_T)
      (Intergration_B.ShiftArithmetic2_m &
       Intergration_P.BitwiseOperator2_BitMask_l);

    /* DataTypeConversion: '<S228>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay_h);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_ar = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S228>/Data Type Conversion1' */

    /* S-Function (sfix_bitop): '<S228>/Bitwise Operator2' */
    Intergration_B.VectorConcatenate1_e[6] = (uint8_T)
      (Intergration_B.DataTypeConversion1_ar &
       Intergration_P.BitwiseOperator2_BitMask_n4);

    /* DataTypeConversion: '<S224>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_e[0] = (uint8_T)
      Intergration_B.BitwiseOperator1_o;

    /* DataTypeConversion: '<S225>/Data Type Conversion2' */
    Intergration_B.DataTypeConversion2_em = (uint8_T)
      Intergration_B.BitwiseOperator2_k;

    /* Sum: '<S225>/Add' */
    Intergration_B.VectorConcatenate1_e[1] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator1_dd + Intergration_B.DataTypeConversion2_em);

    /* DataTypeConversion: '<S226>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_e[2] = (uint8_T)
      Intergration_B.BitwiseOperator1_m;

    /* DataTypeConversion: '<S227>/Data Type Conversion2' */
    Intergration_B.DataTypeConversion2_l = (uint8_T)
      Intergration_B.BitwiseOperator2_dc;

    /* Sum: '<S227>/Add' */
    Intergration_B.VectorConcatenate1_e[3] = (uint8_T)((uint32_T)
      Intergration_B.BitwiseOperator1_ed + Intergration_B.DataTypeConversion2_l);

    /* SignalConversion: '<S197>/ConcatBufferAtVector Concatenate1In5' incorporates:
     *  Constant: '<S197>/Constant'
     */
    Intergration_B.VectorConcatenate1_e[4] = Intergration_P.Constant_Value_e2;

    /* SignalConversion: '<S197>/ConcatBufferAtVector Concatenate1In6' incorporates:
     *  Constant: '<S197>/Constant'
     */
    Intergration_B.VectorConcatenate1_e[5] = Intergration_P.Constant_Value_e2;

    /* S-Function (CheckSum_Tx_Radar410): '<S197>/S-Function Builder1' incorporates:
     *  Constant: '<S197>/Constant6'
     */
    CheckSum_Tx_Radar410_Outputs_wrapper(&Intergration_B.VectorConcatenate1_e[0],
      &Intergration_P.Constant6_Value_gh, &Intergration_B.SFunctionBuilder1_m);

    /* DataTypeConversion: '<S197>/Cast To Double6' */
    Intergration_B.CastToDouble6_j = Intergration_B.SFunctionBuilder1_m;

    /* S-Function (rti_commonblock): '<S222>/S-Function1' incorporates:
     *  Constant: '<S197>/Constant1'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "ESC_RearWheelSpeedKPH" Id:292 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]);

      /* Convert timestamp */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->processed) {
        can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_cd = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->processed;
        Intergration_B.SFunction1_o2_pv = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->timestamp;
        Intergration_B.SFunction1_o3_bk = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->deltatime;
        Intergration_B.SFunction1_o4_fo = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "ESC_RearWheelSpeedsKPH_Checksum" (0|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble6_j ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_RearWheelSpeedsKPH_AliveCoun" (8|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble5_hp ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_RRWheelSpeedInvalid" (32|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_g ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_RRWheelDirection" (33|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble3_h ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_RRWheelSpeedKPH" (35|13, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1_i - ( 0 )
          ) / 0.05625 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00001FFF;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "ESC_RLWheelSpeedInvalid" (48|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_g ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_RLWheelDirection" (49|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2_p ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_RLWheelSpeedKPH" (51|13, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble4_l - ( 0 )
          ) / 0.05625 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00001FFF;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte1;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* Switch: '<S223>/Switch' incorporates:
     *  Constant: '<S223>/Constant6'
     */
    if (Intergration_B.Delay_h > Intergration_P.Switch_Threshold_n) {
      Intergration_B.Switch_a = Intergration_P.Constant6_Value_m;
    } else {
      Intergration_B.Switch_a = Intergration_B.Delay_h;
    }

    /* End of Switch: '<S223>/Switch' */

    /* Sum: '<S223>/Add2' incorporates:
     *  Constant: '<S223>/Constant5'
     */
    Intergration_B.Add2_pl = Intergration_P.Constant5_Value_g +
      Intergration_B.Switch_a;

    /* SignalConversion: '<S198>/ConcatBufferAtVector Concatenate1In1' incorporates:
     *  Constant: '<S198>/Constant'
     */
    Intergration_B.VectorConcatenate1_pm[0] = Intergration_P.Constant_Value_o;

    /* SignalConversion: '<S198>/ConcatBufferAtVector Concatenate1In4' incorporates:
     *  Constant: '<S198>/Constant'
     */
    Intergration_B.VectorConcatenate1_pm[3] = Intergration_P.Constant_Value_o;

    /* SignalConversion: '<S198>/ConcatBufferAtVector Concatenate1In5' incorporates:
     *  Constant: '<S198>/Constant'
     */
    Intergration_B.VectorConcatenate1_pm[4] = Intergration_P.Constant_Value_o;

    /* SignalConversion: '<S198>/ConcatBufferAtVector Concatenate1In6' incorporates:
     *  Constant: '<S198>/Constant'
     */
    Intergration_B.VectorConcatenate1_pm[5] = Intergration_P.Constant_Value_o;

    /* Product: '<S231>/Divide' incorporates:
     *  Constant: '<S231>/Constant'
     */
    Intergration_B.Divide_h = Intergration_B.COM_VehBus_st.x23C.VehSpdAvg /
      Intergration_P.Constant_Value_kn;

    /* DataTypeConversion: '<S231>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide_h);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_k2v = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S231>/Data Type Conversion1' */

    /* ArithShift: '<S231>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_oy = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_k2v >> 5);

    /* S-Function (sfix_bitop): '<S231>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_j = (uint16_T)
      (Intergration_B.ShiftArithmetic1_oy &
       Intergration_P.BitwiseOperator1_BitMask_c);

    /* DataTypeConversion: '<S231>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_pm[1] = (uint8_T)
      Intergration_B.BitwiseOperator1_j;

    /* ArithShift: '<S232>/Shift Arithmetic2' */
    Intergration_B.ShiftArithmetic2_p = (uint16_T)
      (Intergration_B.DataTypeConversion1_k2v << 3);

    /* S-Function (sfix_bitop): '<S232>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_g = (uint16_T)
      (Intergration_B.ShiftArithmetic2_p &
       Intergration_P.BitwiseOperator2_BitMask_m);

    /* DataTypeConversion: '<S232>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_pm[2] = (uint8_T)
      Intergration_B.BitwiseOperator2_g;

    /* Delay: '<S230>/Delay' */
    Intergration_B.Delay_p2 = Intergration_DW.Delay_DSTATE_mo;

    /* DataTypeConversion: '<S233>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay_p2);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_ed = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S233>/Data Type Conversion1' */

    /* S-Function (sfix_bitop): '<S233>/Bitwise Operator2' */
    Intergration_B.VectorConcatenate1_pm[6] = (uint8_T)
      (Intergration_B.DataTypeConversion1_ed &
       Intergration_P.BitwiseOperator2_BitMask_k);

    /* S-Function (CheckSum_Tx_Radar410): '<S198>/S-Function Builder1' incorporates:
     *  Constant: '<S198>/Constant6'
     */
    CheckSum_Tx_Radar410_Outputs_wrapper(&Intergration_B.VectorConcatenate1_pm[0],
      &Intergration_P.Constant6_Value_bu, &Intergration_B.SFunctionBuilder1_a);

    /* DataTypeConversion: '<S198>/Cast To Double1' */
    Intergration_B.CastToDouble1_i0 = Intergration_B.SFunctionBuilder1_a;

    /* DataTypeConversion: '<S198>/Cast To Double2' */
    Intergration_B.CastToDouble2_ap = Intergration_B.Delay_p2;

    /* Product: '<S231>/Multiply' incorporates:
     *  Constant: '<S231>/Constant1'
     */
    Intergration_B.Multiply_d = Intergration_P.Constant1_Value_l * (real_T)
      Intergration_B.DataTypeConversion1_k2v;

    /* DataTypeConversion: '<S198>/Cast To Double4' */
    Intergration_B.CastToDouble4_kv = Intergration_B.Multiply_d;

    /* S-Function (rti_commonblock): '<S229>/S-Function1' incorporates:
     *  Constant: '<S198>/Constant1'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "ESC_Status" Id:294 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]);

      /* Convert timestamp */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->processed) {
        can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_cr = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->processed;
        Intergration_B.SFunction1_o2_hk = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->timestamp;
        Intergration_B.SFunction1_o3_cm = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->deltatime;
        Intergration_B.SFunction1_o4_ol = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "ESC_Status_Checksum" (0|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1_i0 ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_Status_AliveCounter" (8|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2_ap ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[6] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_HHCActive" (16|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_AVHStatus" (33|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_EPBStatus" (35|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_BrakePedalSwitchInvalid" (38|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_PATAResponse" (40|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_VehicleSpeedInvalid" (42|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 2;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_VehicleSpeed" (43|13, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble4_kv - ( 0 )
          ) / 0.05625 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x00001FFF;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "ESC_ABSActive" (56|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_BrakePedalSwitchStatus" (57|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_TCSActive" (60|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_ESPActive" (61|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 5;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "ESC_ESPFailed" (63|1, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_a ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000001;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 7;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* Switch: '<S230>/Switch' incorporates:
     *  Constant: '<S230>/Constant6'
     */
    if (Intergration_B.Delay_p2 > Intergration_P.Switch_Threshold_jz) {
      Intergration_B.Switch_o = Intergration_P.Constant6_Value_e;
    } else {
      Intergration_B.Switch_o = Intergration_B.Delay_p2;
    }

    /* End of Switch: '<S230>/Switch' */

    /* Sum: '<S230>/Add2' incorporates:
     *  Constant: '<S230>/Constant5'
     */
    Intergration_B.Add2_c = Intergration_P.Constant5_Value_b +
      Intergration_B.Switch_o;

    /* Product: '<S8>/Divide1' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    Intergration_B.Divide1_b = Intergration_B.COM_VehBus_st.x185.VSELatAcc /
      Intergration_P.Constant1_Value_io;

    /* Sum: '<S250>/Add' incorporates:
     *  Constant: '<S250>/Constant1'
     */
    Intergration_B.Add_du = Intergration_B.Divide1_b +
      Intergration_P.Constant1_Value_e;

    /* Product: '<S250>/Divide1' incorporates:
     *  Constant: '<S250>/Constant2'
     */
    Intergration_B.Divide1_c = Intergration_B.Add_du /
      Intergration_P.Constant2_Value_l;

    /* DataTypeConversion: '<S250>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide1_c);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_kk = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S250>/Data Type Conversion1' */

    /* Product: '<S250>/Multiply' incorporates:
     *  Constant: '<S250>/Constant3'
     */
    Intergration_B.Multiply_hs = (real_T)Intergration_B.DataTypeConversion1_kk *
      Intergration_P.Constant3_Value_a;

    /* Sum: '<S250>/Add1' incorporates:
     *  Constant: '<S250>/Constant4'
     */
    Intergration_B.Add1_h = Intergration_B.Multiply_hs -
      Intergration_P.Constant4_Value_j;

    /* DataTypeConversion: '<S204>/Cast To Double1' */
    Intergration_B.CastToDouble1_dh = Intergration_B.Add1_h;

    /* Sum: '<S251>/Add' incorporates:
     *  Constant: '<S251>/Constant1'
     */
    Intergration_B.Add_o = Intergration_B.COM_VehBus_st.x1E9.VehDynYawRate +
      Intergration_P.Constant1_Value_p;

    /* Product: '<S251>/Divide1' incorporates:
     *  Constant: '<S251>/Constant2'
     */
    Intergration_B.Divide1_n = Intergration_B.Add_o /
      Intergration_P.Constant2_Value_d;

    /* DataTypeConversion: '<S251>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide1_n);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_kr = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S251>/Data Type Conversion1' */
    /* ArithShift: '<S250>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_n = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_kk >> 8);

    /* S-Function (sfix_bitop): '<S250>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_e = (uint16_T)
      (Intergration_B.ShiftArithmetic1_n &
       Intergration_P.BitwiseOperator1_BitMask_f);

    /* S-Function (sfix_bitop): '<S250>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_e = (uint16_T)
      (Intergration_B.DataTypeConversion1_kk &
       Intergration_P.BitwiseOperator2_BitMask_n);

    /* ArithShift: '<S251>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_m = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_kr >> 8);

    /* S-Function (sfix_bitop): '<S251>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_g = (uint16_T)
      (Intergration_B.ShiftArithmetic1_m &
       Intergration_P.BitwiseOperator1_BitMask_h);

    /* S-Function (sfix_bitop): '<S251>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_i = (uint16_T)
      (Intergration_B.DataTypeConversion1_kr &
       Intergration_P.BitwiseOperator2_BitMask_j);

    /* Delay: '<S249>/Delay' */
    Intergration_B.Delay_hd = Intergration_DW.Delay_DSTATE_e;

    /* DataTypeConversion: '<S252>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay_hd);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_ii = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S252>/Data Type Conversion1' */

    /* S-Function (sfix_bitop): '<S252>/Bitwise Operator2' */
    Intergration_B.VectorConcatenate1_k[4] = (uint8_T)
      (Intergration_B.DataTypeConversion1_ii &
       Intergration_P.BitwiseOperator2_BitMask_e);

    /* DataTypeConversion: '<S250>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_k[0] = (uint8_T)
      Intergration_B.BitwiseOperator1_e;

    /* DataTypeConversion: '<S250>/Data Type Conversion3' */
    Intergration_B.VectorConcatenate1_k[1] = (uint8_T)
      Intergration_B.BitwiseOperator2_e;

    /* DataTypeConversion: '<S251>/Data Type Conversion3' */
    Intergration_B.VectorConcatenate1_k[2] = (uint8_T)
      Intergration_B.BitwiseOperator1_g;

    /* DataTypeConversion: '<S251>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_k[3] = (uint8_T)
      Intergration_B.BitwiseOperator2_i;

    /* SignalConversion: '<S204>/ConcatBufferAtVector Concatenate1In6' incorporates:
     *  Constant: '<S204>/Constant'
     */
    Intergration_B.VectorConcatenate1_k[5] = Intergration_P.Constant_Value_d;

    /* SignalConversion: '<S204>/ConcatBufferAtVector Concatenate1In7' incorporates:
     *  Constant: '<S204>/Constant'
     */
    Intergration_B.VectorConcatenate1_k[6] = Intergration_P.Constant_Value_d;

    /* S-Function (CheckSum_Tx_Radar410): '<S204>/S-Function Builder1' incorporates:
     *  Constant: '<S204>/Constant6'
     */
    CheckSum_Tx_Radar410_Outputs_wrapper(&Intergration_B.VectorConcatenate1_k[0],
      &Intergration_P.Constant6_Value_l, &Intergration_B.SFunctionBuilder1_e);

    /* DataTypeConversion: '<S204>/Cast To Double2' */
    Intergration_B.CastToDouble2_l = Intergration_B.SFunctionBuilder1_e;

    /* Product: '<S251>/Multiply' incorporates:
     *  Constant: '<S251>/Constant3'
     */
    Intergration_B.Multiply_e = (real_T)Intergration_B.DataTypeConversion1_kr *
      Intergration_P.Constant3_Value_o;

    /* Sum: '<S251>/Add1' incorporates:
     *  Constant: '<S251>/Constant4'
     */
    Intergration_B.Add1_g = Intergration_B.Multiply_e -
      Intergration_P.Constant4_Value_h;

    /* DataTypeConversion: '<S204>/Cast To Double3' */
    Intergration_B.CastToDouble3_n = Intergration_B.Add1_g;

    /* DataTypeConversion: '<S204>/Cast To Double4' */
    Intergration_B.CastToDouble4_f = Intergration_B.Delay_hd;

    /* S-Function (rti_commonblock): '<S253>/S-Function1' incorporates:
     *  Constant: '<S204>/Constant2'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "YRS1" Id:305 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]);

      /* Convert timestamp */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->processed) {
        can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_jb = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->processed;
        Intergration_B.SFunction1_o2_ny = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->timestamp;
        Intergration_B.SFunction1_o3_pe = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->deltatime;
        Intergration_B.SFunction1_o4_b4 = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "YRS1_AliveCounter" (0|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble4_f ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "YRS_YawRate" (16|16, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble3_n -
          ( -180 ) ) / 0.01 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
        CAN_Msg[5] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "YRS_LateralAcce" (32|16, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1_dh - ( -2
          ) ) / 0.001 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "YRS_YawRateSensorState" (49|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant2_Value_e ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 1;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "YRS_LateralSensorState" (51|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant2_Value_e ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 3;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "YRS1_Checksum" (56|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2_l ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S249>/Constant6'
     */
    if (Intergration_B.Delay_hd > Intergration_P.Switch_Threshold_m) {
      Intergration_B.Switch_i = Intergration_P.Constant6_Value_bi;
    } else {
      Intergration_B.Switch_i = Intergration_B.Delay_hd;
    }

    /* End of Switch: '<S249>/Switch' */

    /* Sum: '<S249>/Add2' incorporates:
     *  Constant: '<S249>/Constant5'
     */
    Intergration_B.Add2_bl = Intergration_P.Constant5_Value_a +
      Intergration_B.Switch_i;

    /* Delay: '<S254>/Delay' */
    Intergration_B.Delay_f = Intergration_DW.Delay_DSTATE_g;

    /* DataTypeConversion: '<S256>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Delay_f);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 256.0);
    }

    Intergration_B.DataTypeConversion1_kv = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

    /* End of DataTypeConversion: '<S256>/Data Type Conversion1' */

    /* Product: '<S8>/Divide' incorporates:
     *  Constant: '<S8>/Constant'
     */
    Intergration_B.Divide_b = Intergration_B.COM_VehBus_st.x185.VSELongtAcc /
      Intergration_P.Constant_Value_f;

    /* Sum: '<S255>/Add' incorporates:
     *  Constant: '<S255>/Constant1'
     */
    Intergration_B.Add_k = Intergration_B.Divide_b +
      Intergration_P.Constant1_Value_m;

    /* Product: '<S255>/Divide1' incorporates:
     *  Constant: '<S255>/Constant2'
     */
    Intergration_B.Divide1_ct = Intergration_B.Add_k /
      Intergration_P.Constant2_Value_m;

    /* DataTypeConversion: '<S255>/Data Type Conversion1' */
    tmp_0 = floor(Intergration_B.Divide1_ct);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 65536.0);
    }

    Intergration_B.DataTypeConversion1_bv = (uint16_T)(tmp_0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

    /* End of DataTypeConversion: '<S255>/Data Type Conversion1' */
    /* ArithShift: '<S255>/Shift Arithmetic1' */
    Intergration_B.ShiftArithmetic1_e = (uint16_T)((uint32_T)
      Intergration_B.DataTypeConversion1_bv >> 8);

    /* S-Function (sfix_bitop): '<S255>/Bitwise Operator1' */
    Intergration_B.BitwiseOperator1_b = (uint16_T)
      (Intergration_B.ShiftArithmetic1_e &
       Intergration_P.BitwiseOperator1_BitMask_n);

    /* S-Function (sfix_bitop): '<S255>/Bitwise Operator2' */
    Intergration_B.BitwiseOperator2_ik = (uint16_T)
      (Intergration_B.DataTypeConversion1_bv &
       Intergration_P.BitwiseOperator2_BitMask_i1);

    /* S-Function (sfix_bitop): '<S256>/Bitwise Operator2' */
    Intergration_B.VectorConcatenate1_d[2] = (uint8_T)
      (Intergration_B.DataTypeConversion1_kv &
       Intergration_P.BitwiseOperator2_BitMask_em);

    /* DataTypeConversion: '<S255>/Data Type Conversion2' */
    Intergration_B.VectorConcatenate1_d[0] = (uint8_T)
      Intergration_B.BitwiseOperator1_b;

    /* DataTypeConversion: '<S255>/Data Type Conversion3' */
    Intergration_B.VectorConcatenate1_d[1] = (uint8_T)
      Intergration_B.BitwiseOperator2_ik;

    /* SignalConversion: '<S205>/ConcatBufferAtVector Concatenate1In4' incorporates:
     *  Constant: '<S205>/Constant'
     */
    Intergration_B.VectorConcatenate1_d[3] = Intergration_P.Constant_Value_im;

    /* SignalConversion: '<S205>/ConcatBufferAtVector Concatenate1In5' incorporates:
     *  Constant: '<S205>/Constant'
     */
    Intergration_B.VectorConcatenate1_d[4] = Intergration_P.Constant_Value_im;

    /* SignalConversion: '<S205>/ConcatBufferAtVector Concatenate1In6' incorporates:
     *  Constant: '<S205>/Constant'
     */
    Intergration_B.VectorConcatenate1_d[5] = Intergration_P.Constant_Value_im;

    /* SignalConversion: '<S205>/ConcatBufferAtVector Concatenate1In7' incorporates:
     *  Constant: '<S205>/Constant'
     */
    Intergration_B.VectorConcatenate1_d[6] = Intergration_P.Constant_Value_im;

    /* S-Function (CheckSum_Tx_Radar410): '<S205>/S-Function Builder1' incorporates:
     *  Constant: '<S205>/Constant6'
     */
    CheckSum_Tx_Radar410_Outputs_wrapper(&Intergration_B.VectorConcatenate1_d[0],
      &Intergration_P.Constant6_Value_ea, &Intergration_B.SFunctionBuilder1_mh);

    /* DataTypeConversion: '<S205>/Cast To Double3' */
    Intergration_B.CastToDouble3_b = Intergration_B.SFunctionBuilder1_mh;

    /* DataTypeConversion: '<S205>/Cast To Double1' */
    Intergration_B.CastToDouble1_g = Intergration_B.Delay_f;

    /* Product: '<S255>/Multiply' incorporates:
     *  Constant: '<S255>/Constant3'
     */
    Intergration_B.Multiply_hy = (real_T)Intergration_B.DataTypeConversion1_bv *
      Intergration_P.Constant3_Value_l;

    /* Sum: '<S255>/Add1' incorporates:
     *  Constant: '<S255>/Constant4'
     */
    Intergration_B.Add1_l = Intergration_B.Multiply_hy -
      Intergration_P.Constant4_Value_je;

    /* DataTypeConversion: '<S205>/Cast To Double2' */
    Intergration_B.CastToDouble2_h = Intergration_B.Add1_l;

    /* S-Function (rti_commonblock): '<S257>/S-Function1' incorporates:
     *  Constant: '<S205>/Constant1'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "YRS2" Id:306 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]);

      /* Convert timestamp */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->processed) {
        can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->timestamp > 0.0) {
        Intergration_B.SFunction1_o1_pw = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->processed;
        Intergration_B.SFunction1_o2_b32 = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->timestamp;
        Intergration_B.SFunction1_o3_hh = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->deltatime;
        Intergration_B.SFunction1_o4_cr = (real_T)
          can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132]->delaytime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "YRS_AliveCounter" (0|4, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble1_g ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000000F;
        CAN_Msg[7] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "YRS_LongitAcce" (32|16, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble2_h - ( -2 )
          ) / 0.001 + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
        CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;

        /* ...... "YRS_LongitSensorState" (54|2, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_P.Constant1_Value_l5 ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x00000003;
        CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

        /* ...... "YRS2_Checksum" (56|8, standard signal, unsigned int, motorola back.) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( Intergration_B.CastToDouble3_b ) + 0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132], 8,
                       &(CAN_Msg[0]), delayTime);
    }

    /* Switch: '<S254>/Switch' incorporates:
     *  Constant: '<S254>/Constant6'
     */
    if (Intergration_B.Delay_f > Intergration_P.Switch_Threshold_mk) {
      Intergration_B.Switch_ie = Intergration_P.Constant6_Value_k;
    } else {
      Intergration_B.Switch_ie = Intergration_B.Delay_f;
    }

    /* End of Switch: '<S254>/Switch' */

    /* Sum: '<S254>/Add2' incorporates:
     *  Constant: '<S254>/Constant5'
     */
    Intergration_B.Add2_n = Intergration_P.Constant5_Value_c +
      Intergration_B.Switch_ie;

    /* BusCreator: '<S209>/Bus Creator' incorporates:
     *  Constant: '<S209>/ACC_Error'
     *  Constant: '<S209>/ACC_Passive_Res'
     *  Constant: '<S209>/ACC_Tip'
     *  Constant: '<S209>/TimeGapRes'
     *  Outport: '<Root>/ACC_LgtCtrl_st'
     *  Outport: '<Root>/VLC_LgtCmd_st'
     */
    Intergration_B.BusCreator_hr.Vehicle_Front_dy = Intergration_B.ATS_Po_st.dy;
    Intergration_B.BusCreator_hr.Vehicle_Front_dx = Intergration_B.ATS_Po_st.dx;
    Intergration_B.BusCreator_hr.Vehicle_Front_Type =
      Intergration_B.ATS_Po_st.Type;
    Intergration_B.BusCreator_hr.ACC_Tip = Intergration_P.ACC_Tip_Value;
    Intergration_B.BusCreator_hr.ACC_Status =
      Intergration_Y.VLC_LgtCmd_st.ACCState;
    Intergration_B.BusCreator_hr.ACC_Passive_Rea =
      Intergration_P.ACC_Passive_Res_Value;
    Intergration_B.BusCreator_hr.ACC_Error = Intergration_P.ACC_Error_Value;
    Intergration_B.BusCreator_hr.TimeGapRes = Intergration_P.TimeGapRes_Value;
    Intergration_B.BusCreator_hr.vSetDis = Intergration_Y.ACC_LgtCtrl_st.ACCvSet;

    /* Update for Delay: '<S203>/Delay' */
    Intergration_DW.Delay_DSTATE_m = Intergration_B.Add2_d;

    /* Update for Delay: '<S211>/Delay' */
    Intergration_DW.Delay_DSTATE_d = Intergration_B.Add2_b;

    /* Update for Delay: '<S216>/Delay' */
    Intergration_DW.Delay_DSTATE_p = Intergration_B.Add2_p;

    /* Update for Delay: '<S223>/Delay' */
    Intergration_DW.Delay_DSTATE_p0 = Intergration_B.Add2_pl;

    /* Update for Delay: '<S230>/Delay' */
    Intergration_DW.Delay_DSTATE_mo = Intergration_B.Add2_c;

    /* Update for Delay: '<S249>/Delay' */
    Intergration_DW.Delay_DSTATE_e = Intergration_B.Add2_bl;

    /* Update for Delay: '<S254>/Delay' */
    Intergration_DW.Delay_DSTATE_g = Intergration_B.Add2_n;

    /* End of Outputs for SubSystem: '<Root>/TX' */
  }

  if (Intergration_DW.i >= 200) {
    Intergration_DW.i = 0;
  }

  /* End of Chart: '<Root>/OutputSignal_OS' */
  /* S-Function (rti_commonblock): '<S1>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S2>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S3>/S-Function1' */
  /* This comment workarounds a code generation problem */
}

/* Model update function */
void Intergration_update(void)
{
  /* Update for ModelReference: '<Root>/VSI' */
  VSI_Update();

  /* Update for Memory: '<Root>/Memory' incorporates:
   *  Outport: '<Root>/VLC_LgtCmd_st'
   */
  Intergration_DW.Memory_PreviousInput = Intergration_Y.VLC_LgtCmd_st;

  /* Update for ModelReference: '<Root>/ACC' incorporates:
   *  Inport: '<Root>/DrvAct'
   *  Inport: '<Root>/ObjList'
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   */
  AccTarSel_Update(&Intergration_B.ATS_Po_st);

  /* Update for ModelReference: '<Root>/VLC' incorporates:
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   *  Outport: '<Root>/VLC_LgtCmd_st'
   */
  VLC_Update();

  /* Update for Chart: '<Root>/OutputSignal_OS' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Intergration_M->Timing.clockTick0)) {
    ++Intergration_M->Timing.clockTickH0;
  }

  Intergration_M->Timing.taskTime0 = Intergration_M->Timing.clockTick0 *
    Intergration_M->Timing.stepSize0 + Intergration_M->Timing.clockTickH0 *
    Intergration_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Intergration_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Intergration_M, 0,
                sizeof(RT_MODEL_Intergration_T));
  Intergration_M->Timing.stepSize0 = 0.005;

  /* block I/O */
  (void) memset(((void *) &Intergration_B), 0,
                sizeof(B_Intergration_T));

  /* states (dwork) */
  (void) memset((void *)&Intergration_DW, 0,
                sizeof(DW_Intergration_T));

  /* external inputs */
  (void)memset(&Intergration_U, 0, sizeof(ExtU_Intergration_T));

  /* external outputs */
  (void) memset((void *)&Intergration_Y, 0,
                sizeof(ExtY_Intergration_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    Intergration_rti_init_trc_pointers();
  }

  /* Model Initialize function for ModelReference Block: '<Root>/ACC' */
  AccTarSel_initialize(rtmGetErrorStatusPointer(Intergration_M));

  /* Model Initialize function for ModelReference Block: '<Root>/VLC' */
  VLC_initialize(rtmGetErrorStatusPointer(Intergration_M));

  /* Model Initialize function for ModelReference Block: '<Root>/FUS' */
  fusionAlg_initialize(rtmGetErrorStatusPointer(Intergration_M));

  /* Model Initialize function for ModelReference Block: '<Root>/VSI' */
  VSI_initialize(rtmGetErrorStatusPointer(Intergration_M));

  /* Start for ModelReference: '<Root>/FUS' */
  fusionAlg_Start();

  /* Start for ModelReference: '<Root>/ACC' incorporates:
   *  Inport: '<Root>/DrvAct'
   *  Inport: '<Root>/ObjList'
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   */
  AccTarSel_Start();

  /* Start for ModelReference: '<Root>/VLC' incorporates:
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   *  Outport: '<Root>/VLC_LgtCmd_st'
   */
  VLC_Start();

  /* InitializeConditions for Memory: '<Root>/Memory' */
  Intergration_DW.Memory_PreviousInput = Intergration_P.Memory_InitialCondition;

  /* SystemInitialize for ModelReference: '<Root>/VSI' */
  VSI_Init();

  /* SystemInitialize for ModelReference: '<Root>/ACC' incorporates:
   *  Inport: '<Root>/DrvAct'
   *  Inport: '<Root>/ObjList'
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   */
  AccTarSel_Init();

  /* SystemInitialize for ModelReference: '<Root>/VLC' incorporates:
   *  Outport: '<Root>/ACC_LgtCtrl_st'
   *  Outport: '<Root>/VLC_LgtCmd_st'
   */
  VLC_Init();
  Intergration_DW.i = 0;

  /* SystemInitialize for Chart: '<Root>/OutputSignal_OS' incorporates:
   *  SubSystem: '<Root>/TX'
   */
  /* InitializeConditions for Delay: '<S203>/Delay' */
  Intergration_DW.Delay_DSTATE_m = Intergration_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S211>/Delay' */
  Intergration_DW.Delay_DSTATE_d = Intergration_P.Delay_InitialCondition_m;

  /* InitializeConditions for Delay: '<S216>/Delay' */
  Intergration_DW.Delay_DSTATE_p = Intergration_P.Delay_InitialCondition_j;

  /* InitializeConditions for Delay: '<S223>/Delay' */
  Intergration_DW.Delay_DSTATE_p0 = Intergration_P.Delay_InitialCondition_b;

  /* InitializeConditions for Delay: '<S230>/Delay' */
  Intergration_DW.Delay_DSTATE_mo = Intergration_P.Delay_InitialCondition_h;

  /* InitializeConditions for Delay: '<S249>/Delay' */
  Intergration_DW.Delay_DSTATE_e = Intergration_P.Delay_InitialCondition_e;

  /* InitializeConditions for Delay: '<S254>/Delay' */
  Intergration_DW.Delay_DSTATE_g = Intergration_P.Delay_InitialCondition_c;

  /* SystemInitialize for Chart: '<Root>/OutputSignal_OS' incorporates:
   *  SubSystem: '<Root>/Tx_410_10ms'
   */
  /* InitializeConditions for Delay: '<S258>/Delay' */
  Intergration_DW.Delay_DSTATE = Intergration_P.Delay_InitialCondition_p;
}

/* Model terminate function */
void Intergration_terminate(void)
{
  /* Terminate for S-Function (rti_commonblock): '<S16>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP04" Id:404 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X194])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S17>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_ECM_FrP27" Id:251 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XFB])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S19>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FrP04" Id:481 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E1])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S23>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SAS_HSC2_FrP00" Id:485 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E5])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S24>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP02" Id:389 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X185])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S25>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP05" Id:489 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1E9])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S26>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP19" Id:572 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X23C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S27>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP22" Id:588 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S28>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP23" Id:590 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X24E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S20>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP00" Id:175 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAF])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S21>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP08" Id:172 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0XAC])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S13>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "EHBS_HSC2_FrP00" Id:438 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1B6])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S15>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_BCM_FrP04" Id:1130 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X46A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S18>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_FICM_FrP02" Id:886 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X376])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S14>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "EPS_HSC2_FrP03" Id:492 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X1EC])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S29>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "SCS_HSC2_FrP24" Id:593 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X251])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S22>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GW_HSC2_HCU_FrP13" Id:412 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X19C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S113>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part1of2" Id:80 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X50])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S114>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_00_Part2of2" Id:32 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X20])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S115>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part1of2" Id:81 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X51])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S116>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_01_Part2of2" Id:33 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X21])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S117>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part1of2" Id:82 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X52])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S118>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_02_Part2of2" Id:34 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X22])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S119>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part1of2" Id:83 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X53])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S120>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_03_Part2of2" Id:35 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X23])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S121>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part1of2" Id:84 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X54])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S122>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_04_Part2of2" Id:36 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X24])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S123>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part1of2" Id:85 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X55])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S124>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_05_Part2of2" Id:37 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X25])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S125>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part1of2" Id:86 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X56])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S126>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_06_Part2of2" Id:38 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X26])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S127>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part1of2" Id:87 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X57])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S128>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_07_Part2of2" Id:39 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X27])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S129>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part1of2" Id:88 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X58])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S130>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_08_Part2of2" Id:40 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X28])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S131>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part1of2" Id:89 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X59])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S132>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_09_Part2of2" Id:41 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X29])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S133>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part1of2" Id:90 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S134>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_10_Part2of2" Id:42 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S135>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part1of2" Id:91 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S136>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_11_Part2of2" Id:43 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S137>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part1of2" Id:92 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S138>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_12_Part2of2" Id:44 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S139>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part1of2" Id:93 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S140>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_13_Part2of2" Id:45 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S141>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part1of2" Id:94 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S142>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_14_Part2of2" Id:46 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S143>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part1of2" Id:95 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X5F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S144>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_15_Part2of2" Id:47 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X2F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S145>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part1of2" Id:96 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X60])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S146>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_16_Part2of2" Id:48 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X30])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S147>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part1of2" Id:97 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X61])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S148>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_17_Part2of2" Id:49 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X31])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S149>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part1of2" Id:98 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X62])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S150>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_18_Part2of2" Id:50 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X32])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S151>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part1of2" Id:99 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X63])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S152>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_19_Part2of2" Id:51 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X33])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S153>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part1of2" Id:100 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X64])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S154>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_20_Part2of2" Id:52 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X34])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S155>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part1of2" Id:101 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X65])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S156>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_21_Part2of2" Id:53 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X35])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S157>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part1of2" Id:102 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X66])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S158>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_22_Part2of2" Id:54 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X36])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S159>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part1of2" Id:103 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X67])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S160>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_23_Part2of2" Id:55 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X37])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S161>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part1of2" Id:104 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X68])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S162>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_24_Part2of2" Id:56 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X38])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S163>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part1of2" Id:105 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X69])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S164>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_25_Part2of2" Id:57 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X39])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S165>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part1of2" Id:106 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S166>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_26_Part2of2" Id:58 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S167>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part1of2" Id:107 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S168>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_27_Part2of2" Id:59 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S169>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part1of2" Id:108 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S170>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_28_Part2of2" Id:60 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S171>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part1of2" Id:109 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S172>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_29_Part2of2" Id:61 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S173>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part1of2" Id:110 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S174>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_30_Part2of2" Id:62 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S175>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part1of2" Id:111 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X6F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S176>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_31_Part2of2" Id:63 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X3F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S177>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part1of2" Id:112 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X70])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S178>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_32_Part2of2" Id:64 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X40])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S179>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part1of2" Id:113 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X71])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S180>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_33_Part2of2" Id:65 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X41])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S181>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part1of2" Id:114 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X72])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S182>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_34_Part2of2" Id:66 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X42])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S183>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part1of2" Id:115 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X73])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S184>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_35_Part2of2" Id:67 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X43])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S185>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part1of2" Id:116 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X74])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S186>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_36_Part2of2" Id:68 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X44])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S187>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part1of2" Id:117 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X75])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S188>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_37_Part2of2" Id:69 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X45])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S189>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part1of2" Id:118 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X76])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S190>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_38_Part2of2" Id:70 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X46])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S191>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part1of2" Id:119 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X77])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S192>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Obj_39_Part2of2" Id:71 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X47])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S193>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "FRS_Status" Id:128 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C2_RX_STD_0X80])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for ModelReference: '<Root>/FUS' */
  fusionAlg_Term();

  /* Terminate for Chart: '<Root>/OutputSignal_OS' incorporates:
   *  SubSystem: '<Root>/TX'
   */
  /* Terminate for S-Function (rti_commonblock): '<S234>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FVCM_FrP00" Id:357 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X165])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S236>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP00" Id:578 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X242])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S241>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP01" Id:580 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X244])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S248>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "RADAR_HSC2_FrP02" Id:582 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X246])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S210>/S-Function1' incorporates:
   *  Constant: '<S195>/Constant7'
   */

  /* dSPACE RTICAN TX Message Block: "ESC_DA_MESSAGE" Id:295 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][3] = can_tp1_msg_sleep
            (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X127])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S215>/S-Function1' incorporates:
   *  Constant: '<S196>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "ESC_FrontWheelSpeedKPH" Id:291 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][0] = can_tp1_msg_sleep
            (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X123])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S222>/S-Function1' incorporates:
   *  Constant: '<S197>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "ESC_RearWheelSpeedKPH" Id:292 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][1] = can_tp1_msg_sleep
            (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X124])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S229>/S-Function1' incorporates:
   *  Constant: '<S198>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "ESC_Status" Id:294 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][2] = can_tp1_msg_sleep
            (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X126])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S253>/S-Function1' incorporates:
   *  Constant: '<S204>/Constant2'
   */

  /* dSPACE RTICAN TX Message Block: "YRS1" Id:305 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][4] = can_tp1_msg_sleep
            (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X131])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S257>/S-Function1' incorporates:
   *  Constant: '<S205>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "YRS2" Id:306 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][5] = can_tp1_msg_sleep
            (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0X132])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Chart: '<Root>/OutputSignal_OS' incorporates:
   *  SubSystem: '<Root>/Tx_410_10ms'
   */
  /* Terminate for S-Function (rti_commonblock): '<S259>/S-Function1' incorporates:
   *  Constant: '<S9>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "SAS_Status" Id:225 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][0] = can_tp1_msg_sleep
            (can_type1_msg_M3[CANTP1_M3_C2_TX_STD_0XE1])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S1>/S-Function1' */

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (CANTP1_RX_SPMSG_M1_C1_STD)) == DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S2>/S-Function1' */

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (CANTP1_RX_SPMSG_M2_C2_STD)) == DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S3>/S-Function1' */

  /* dSPACE RTICAN STD Srvc-Message Block */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[2][0] = can_tp1_msg_sleep
            (CANTP1_RX_SPMSG_M3_C2_STD)) == DSMCOM_BUFFER_OVERFLOW) ;
  }
}
