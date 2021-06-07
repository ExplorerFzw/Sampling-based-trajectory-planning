/*
 * Code generation for system model 'LM_TOS'
 *
 * Model                      : LM_TOS
 * Model version              : 1.345
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Jan 20 15:10:36 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "LM_TOS_trc_ptr.h"
#include "rti_initref_cpp.h"
#include "LM_TOS.h"
#include "LM_TOS_private.h"

P_LM_TOS_T LM_TOS_P_g = {
  /* Expression: 0
   * Referenced by: '<S7>/Constant18'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S7>/Constant19'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S7>/Constant28'
   */
  2.0,

  /* Expression: 3
   * Referenced by: '<S7>/Constant29'
   */
  3.0,

  /* Expression: 4
   * Referenced by: '<S7>/Constant30'
   */
  4.0,

  /* Expression: 5
   * Referenced by: '<S7>/Constant31'
   */
  5.0,

  /* Expression: 6
   * Referenced by: '<S7>/Constant32'
   */
  6.0,

  /* Expression: 7
   * Referenced by: '<S7>/Constant33'
   */
  7.0,

  /* Expression: 8
   * Referenced by: '<S7>/Constant34'
   */
  8.0,

  /* Expression: 9
   * Referenced by: '<S7>/Constant35'
   */
  9.0,

  /* Expression: 10
   * Referenced by: '<S7>/Constant20'
   */
  10.0,

  /* Expression: 11
   * Referenced by: '<S7>/Constant21'
   */
  11.0,

  /* Expression: 12
   * Referenced by: '<S7>/Constant24'
   */
  12.0,

  /* Expression: 13
   * Referenced by: '<S7>/Constant25'
   */
  13.0,

  /* Expression: 14
   * Referenced by: '<S7>/Constant26'
   */
  14.0,

  /* Expression: 15
   * Referenced by: '<S7>/Constant27'
   */
  15.0,

  /* Expression: 16
   * Referenced by: '<S7>/Constant22'
   */
  16.0,

  /* Expression: 17
   * Referenced by: '<S7>/Constant23'
   */
  17.0,

  /* Expression: 18
   * Referenced by: '<S7>/Constant'
   */
  18.0,

  /* Expression: 19
   * Referenced by: '<S7>/Constant1'
   */
  19.0,

  /* Expression: 20
   * Referenced by: '<S7>/Constant2'
   */
  20.0,

  /* Expression: 21
   * Referenced by: '<S7>/Constant3'
   */
  21.0,

  /* Expression: 22
   * Referenced by: '<S7>/Constant4'
   */
  22.0,

  /* Expression: 23
   * Referenced by: '<S7>/Constant5'
   */
  23.0,

  /* Expression: 24
   * Referenced by: '<S7>/Constant6'
   */
  24.0,

  /* Expression: 25
   * Referenced by: '<S7>/Constant7'
   */
  25.0,

  /* Expression: 26
   * Referenced by: '<S7>/Constant8'
   */
  26.0,

  /* Expression: 27
   * Referenced by: '<S7>/Constant9'
   */
  27.0,

  /* Expression: 28
   * Referenced by: '<S7>/Constant10'
   */
  28.0,

  /* Expression: 29
   * Referenced by: '<S7>/Constant11'
   */
  29.0,

  /* Expression: 30
   * Referenced by: '<S7>/Constant14'
   */
  30.0,

  /* Expression: 31
   * Referenced by: '<S7>/Constant15'
   */
  31.0,

  /* Expression: 32
   * Referenced by: '<S7>/Constant16'
   */
  32.0,

  /* Expression: 33
   * Referenced by: '<S7>/Constant17'
   */
  33.0,

  /* Expression: 34
   * Referenced by: '<S7>/Constant12'
   */
  34.0,

  /* Expression: 35
   * Referenced by: '<S7>/Constant13'
   */
  35.0,

  /* Expression: 36
   * Referenced by: '<S7>/Constant38'
   */
  36.0,

  /* Expression: 37
   * Referenced by: '<S7>/Constant39'
   */
  37.0,

  /* Expression: 38
   * Referenced by: '<S7>/Constant36'
   */
  38.0,

  /* Expression: 39
   * Referenced by: '<S7>/Constant37'
   */
  39.0
};

MdlrefDW_LM_TOS_T LM_TOS_MdlrefDW;

/* Block signals (default storage) */
B_LM_TOS_c_T LM_TOS_B;

/* Start for referenced model: 'LM_TOS' */
void LM_TOS_Start(void)
{
  /* Start for S-Function (LM_TOS_MODULE): '<Root>/LM_TOS_ALGORISM' */

  /* S-Function Block: <Root>/LM_TOS_ALGORISM */
  LM_TOS_MODULE_Start_wrapper();
}

/* Output and update for referenced model: 'LM_TOS' */
void LM_TOS(const FUS_OBJ_OUTPUT_ST *rtu_FUS_OBJ_OUTPUT_ST, const
            VSI_VEHSTATE_ST *rtu_VEH_STATE_ST, const FUS_LANE_OUTPUT_ST
            *rtu_FUS_LANE_OUTPUT_ST, const FUS_ROAD_EDGE_OUTPUT_ST
            *rtu_FUS_ROADEDGE_OUTPUT_ST1, const ATS_PO_ST *rtu_ACC_PO_OUTPUT_ST,
            LANEMODEL_OUTPUT_ST *rty_LANE_MODEL_OUTPUT_ST,
            HWA_TARGETOBJECT_OUTPUT_ST *rty_HWA_TAR_OBJ_OUTPUT_ST, HMI_OUTPUT_ST
            *rty_hmi_display_info_st, NARROW_LANE_SUPPORT_OUTPUT_ST
            *rty_nls_info_st, uint16_T *rty_rolling_count, uint8_T
            *rty_truckEvasionFlag)
{
  int32_T i;

  /* Selector: '<S7>/Selector18' incorporates:
   *  Constant: '<S7>/Constant18'
   */
  LM_TOS_B.Selector18 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant18_Value];

  /* Selector: '<S7>/Selector19' incorporates:
   *  Constant: '<S7>/Constant19'
   */
  LM_TOS_B.Selector19 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant19_Value];

  /* Selector: '<S7>/Selector28' incorporates:
   *  Constant: '<S7>/Constant28'
   */
  LM_TOS_B.Selector28 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant28_Value];

  /* Selector: '<S7>/Selector29' incorporates:
   *  Constant: '<S7>/Constant29'
   */
  LM_TOS_B.Selector29 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant29_Value];

  /* Selector: '<S7>/Selector30' incorporates:
   *  Constant: '<S7>/Constant30'
   */
  LM_TOS_B.Selector30 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant30_Value];

  /* Selector: '<S7>/Selector31' incorporates:
   *  Constant: '<S7>/Constant31'
   */
  LM_TOS_B.Selector31 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant31_Value];

  /* Selector: '<S7>/Selector32' incorporates:
   *  Constant: '<S7>/Constant32'
   */
  LM_TOS_B.Selector32 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant32_Value];

  /* Selector: '<S7>/Selector33' incorporates:
   *  Constant: '<S7>/Constant33'
   */
  LM_TOS_B.Selector33 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant33_Value];

  /* Selector: '<S7>/Selector34' incorporates:
   *  Constant: '<S7>/Constant34'
   */
  LM_TOS_B.Selector34 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant34_Value];

  /* Selector: '<S7>/Selector35' incorporates:
   *  Constant: '<S7>/Constant35'
   */
  LM_TOS_B.Selector35 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant35_Value];

  /* Selector: '<S7>/Selector20' incorporates:
   *  Constant: '<S7>/Constant20'
   */
  LM_TOS_B.Selector20 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant20_Value];

  /* Selector: '<S7>/Selector21' incorporates:
   *  Constant: '<S7>/Constant21'
   */
  LM_TOS_B.Selector21 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant21_Value];

  /* Selector: '<S7>/Selector24' incorporates:
   *  Constant: '<S7>/Constant24'
   */
  LM_TOS_B.Selector24 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant24_Value];

  /* Selector: '<S7>/Selector25' incorporates:
   *  Constant: '<S7>/Constant25'
   */
  LM_TOS_B.Selector25 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant25_Value];

  /* Selector: '<S7>/Selector26' incorporates:
   *  Constant: '<S7>/Constant26'
   */
  LM_TOS_B.Selector26 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant26_Value];

  /* Selector: '<S7>/Selector27' incorporates:
   *  Constant: '<S7>/Constant27'
   */
  LM_TOS_B.Selector27 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant27_Value];

  /* Selector: '<S7>/Selector22' incorporates:
   *  Constant: '<S7>/Constant22'
   */
  LM_TOS_B.Selector22 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant22_Value];

  /* Selector: '<S7>/Selector23' incorporates:
   *  Constant: '<S7>/Constant23'
   */
  LM_TOS_B.Selector23 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant23_Value];

  /* Selector: '<S7>/Selector' incorporates:
   *  Constant: '<S7>/Constant'
   */
  LM_TOS_B.Selector = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant_Value];

  /* Selector: '<S7>/Selector1' incorporates:
   *  Constant: '<S7>/Constant1'
   */
  LM_TOS_B.Selector1 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant1_Value];

  /* Selector: '<S7>/Selector2' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  LM_TOS_B.Selector2 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant2_Value];

  /* Selector: '<S7>/Selector3' incorporates:
   *  Constant: '<S7>/Constant3'
   */
  LM_TOS_B.Selector3 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant3_Value];

  /* Selector: '<S7>/Selector4' incorporates:
   *  Constant: '<S7>/Constant4'
   */
  LM_TOS_B.Selector4 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant4_Value];

  /* Selector: '<S7>/Selector5' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  LM_TOS_B.Selector5 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant5_Value];

  /* Selector: '<S7>/Selector6' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  LM_TOS_B.Selector6 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant6_Value];

  /* Selector: '<S7>/Selector7' incorporates:
   *  Constant: '<S7>/Constant7'
   */
  LM_TOS_B.Selector7 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant7_Value];

  /* Selector: '<S7>/Selector8' incorporates:
   *  Constant: '<S7>/Constant8'
   */
  LM_TOS_B.Selector8 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant8_Value];

  /* Selector: '<S7>/Selector9' incorporates:
   *  Constant: '<S7>/Constant9'
   */
  LM_TOS_B.Selector9 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant9_Value];

  /* Selector: '<S7>/Selector10' incorporates:
   *  Constant: '<S7>/Constant10'
   */
  LM_TOS_B.Selector10 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant10_Value];

  /* Selector: '<S7>/Selector11' incorporates:
   *  Constant: '<S7>/Constant11'
   */
  LM_TOS_B.Selector11 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant11_Value];

  /* Selector: '<S7>/Selector14' incorporates:
   *  Constant: '<S7>/Constant14'
   */
  LM_TOS_B.Selector14 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant14_Value];

  /* Selector: '<S7>/Selector15' incorporates:
   *  Constant: '<S7>/Constant15'
   */
  LM_TOS_B.Selector15 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant15_Value];

  /* Selector: '<S7>/Selector16' incorporates:
   *  Constant: '<S7>/Constant16'
   */
  LM_TOS_B.Selector16 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant16_Value];

  /* Selector: '<S7>/Selector17' incorporates:
   *  Constant: '<S7>/Constant17'
   */
  LM_TOS_B.Selector17 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant17_Value];

  /* Selector: '<S7>/Selector12' incorporates:
   *  Constant: '<S7>/Constant12'
   */
  LM_TOS_B.Selector12 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant12_Value];

  /* Selector: '<S7>/Selector13' incorporates:
   *  Constant: '<S7>/Constant13'
   */
  LM_TOS_B.Selector13 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant13_Value];

  /* Selector: '<S7>/Selector38' incorporates:
   *  Constant: '<S7>/Constant38'
   */
  LM_TOS_B.Selector38 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant38_Value];

  /* Selector: '<S7>/Selector39' incorporates:
   *  Constant: '<S7>/Constant39'
   */
  LM_TOS_B.Selector39 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant39_Value];

  /* Selector: '<S7>/Selector36' incorporates:
   *  Constant: '<S7>/Constant36'
   */
  LM_TOS_B.Selector36 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant36_Value];

  /* Selector: '<S7>/Selector37' incorporates:
   *  Constant: '<S7>/Constant37'
   */
  LM_TOS_B.Selector37 = rtu_FUS_OBJ_OUTPUT_ST->objects[(int32_T)
    LM_TOS_P_g.Constant37_Value];

  /* BusCreator: '<Root>/BusConversion_InsertedFor_LM_TOS_ALGORISM_at_inport_2' */
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_01_obj =
    LM_TOS_B.Selector18;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_02_obj =
    LM_TOS_B.Selector19;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_03_obj =
    LM_TOS_B.Selector28;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_04_obj =
    LM_TOS_B.Selector29;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_05_obj =
    LM_TOS_B.Selector30;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_06_obj =
    LM_TOS_B.Selector31;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_07_obj =
    LM_TOS_B.Selector32;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_08_obj =
    LM_TOS_B.Selector33;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_09_obj =
    LM_TOS_B.Selector34;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_10_obj =
    LM_TOS_B.Selector35;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_11_obj =
    LM_TOS_B.Selector20;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_12_obj =
    LM_TOS_B.Selector21;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_13_obj =
    LM_TOS_B.Selector24;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_14_obj =
    LM_TOS_B.Selector25;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_15_obj =
    LM_TOS_B.Selector26;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_16_obj =
    LM_TOS_B.Selector27;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_17_obj =
    LM_TOS_B.Selector22;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_18_obj =
    LM_TOS_B.Selector23;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_19_obj = LM_TOS_B.Selector;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_20_obj =
    LM_TOS_B.Selector1;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_21_obj =
    LM_TOS_B.Selector2;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_22_obj =
    LM_TOS_B.Selector3;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_23_obj =
    LM_TOS_B.Selector4;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_24_obj =
    LM_TOS_B.Selector5;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_25_obj =
    LM_TOS_B.Selector6;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_26_obj =
    LM_TOS_B.Selector7;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_27_obj =
    LM_TOS_B.Selector8;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_28_obj =
    LM_TOS_B.Selector9;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_29_obj =
    LM_TOS_B.Selector10;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_30_obj =
    LM_TOS_B.Selector11;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_31_obj =
    LM_TOS_B.Selector14;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_32_obj =
    LM_TOS_B.Selector15;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_33_obj =
    LM_TOS_B.Selector16;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_34_obj =
    LM_TOS_B.Selector17;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_35_obj =
    LM_TOS_B.Selector12;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_36_obj =
    LM_TOS_B.Selector13;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_37_obj =
    LM_TOS_B.Selector38;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_38_obj =
    LM_TOS_B.Selector39;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_39_obj =
    LM_TOS_B.Selector36;
  LM_TOS_B.BusConversion_InsertedFor_LM_TO.fus_output_40_obj =
    LM_TOS_B.Selector37;

  /* S-Function (LM_TOS_MODULE): '<Root>/LM_TOS_ALGORISM' */
  LM_TOS_MODULE_Outputs_wrapper(&rtu_FUS_OBJ_OUTPUT_ST->timeStamp,
    &rtu_FUS_OBJ_OUTPUT_ST->frameNum, &LM_TOS_B.BusConversion_InsertedFor_LM_TO,
    rtu_VEH_STATE_ST, rtu_FUS_LANE_OUTPUT_ST, rtu_FUS_ROADEDGE_OUTPUT_ST1,
    rtu_ACC_PO_OUTPUT_ST, &LM_TOS_B.LM_TOS_ALGORISM_o1,
    &LM_TOS_B.LM_TOS_ALGORISM_o2, &LM_TOS_B.LM_TOS_ALGORISM_o3,
    &LM_TOS_B.LM_TOS_ALGORISM_o4, &LM_TOS_B.LM_TOS_ALGORISM_o5,
    &LM_TOS_B.LM_TOS_ALGORISM_o6, &LM_TOS_B.LM_TOS_ALGORISM_o7, rty_nls_info_st,
    rty_rolling_count, rty_truckEvasionFlag);

  /* Concatenate: '<S14>/Vector Concatenate' */
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_0;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_1;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_2;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_3;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_4;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[5] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_5;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[6] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_6;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[7] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_7;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[8] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_8;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[9] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_9;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[10] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_10;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[11] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_11;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[12] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_12;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[13] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_13;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[14] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_14;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[15] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_15;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[16] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_16;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[17] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_17;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[18] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_18;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[19] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_19;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[20] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_20;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[21] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_21;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[22] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_22;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[23] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_23;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[24] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_24;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[25] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_25;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[26] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_26;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[27] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_27;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[28] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_28;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[29] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_29;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[30] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_30;
  rty_hmi_display_info_st->hmi_display_info_st.hmi_display_array_st[31] =
    LM_TOS_B.LM_TOS_ALGORISM_o7.obj_31;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_a[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_a[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_a[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_a[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S27>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_a[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S27>/Bus Creator1' */
  LM_TOS_B.BusCreator1.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_a[i];
  }

  LM_TOS_B.BusCreator1.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S27>/Bus Creator1' */

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_j[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_j[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_j[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_j[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S28>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_j[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S28>/Bus Creator1' */
  LM_TOS_B.BusCreator1_k.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_k.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_k.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_k.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_k.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_j[i];
  }

  LM_TOS_B.BusCreator1_k.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_k.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_k.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_k.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S28>/Bus Creator1' */

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_m[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_m[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_m[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_m[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S35>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_m[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S35>/Bus Creator1' */
  LM_TOS_B.BusCreator1_p.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_p.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_p.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_p.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_p.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_m[i];
  }

  LM_TOS_B.BusCreator1_p.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_p.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_p.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_p.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S35>/Bus Creator1' */

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_o[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_o[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_o[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_o[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S36>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_o[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S36>/Bus Creator1' */
  LM_TOS_B.BusCreator1_f.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_f.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_f.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_f.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_f.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_o[i];
  }

  LM_TOS_B.BusCreator1_f.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_f.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_f.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_f.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S36>/Bus Creator1' */

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_h[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_h[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_h[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_h[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S37>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_h[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S37>/Bus Creator1' */
  LM_TOS_B.BusCreator1_e.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_e.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_e.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_e.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_e.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_h[i];
  }

  LM_TOS_B.BusCreator1_e.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_e.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_e.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_e.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S37>/Bus Creator1' */

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_k[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_k[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_k[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_k[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S38>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_k[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S38>/Bus Creator1' */
  LM_TOS_B.BusCreator1_o.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_o.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_o.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_o.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_o.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_k[i];
  }

  LM_TOS_B.BusCreator1_o.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_o.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_o.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_o.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S38>/Bus Creator1' */

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_n[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_n[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_n[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_n[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S39>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_n[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S39>/Bus Creator1' */
  LM_TOS_B.BusCreator1_b.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_b.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_b.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_b.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_b.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_n[i];
  }

  LM_TOS_B.BusCreator1_b.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_b.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_b.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_b.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S39>/Bus Creator1' */

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_oi[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_oi[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_oi[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_oi[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S40>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_oi[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S40>/Bus Creator1' */
  LM_TOS_B.BusCreator1_g.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_g.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_g.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_g.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_g.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_oi[i];
  }

  LM_TOS_B.BusCreator1_g.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_g.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_g.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_g.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S40>/Bus Creator1' */

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_el[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_el[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_el[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_el[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S41>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_el[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S41>/Bus Creator1' */
  LM_TOS_B.BusCreator1_gx.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_gx.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_gx.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_gx.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_gx.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_el[i];
  }

  LM_TOS_B.BusCreator1_gx.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_gx.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_gx.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_gx.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S41>/Bus Creator1' */

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bl[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bl[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bl[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bl[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_bl[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S42>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fz.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_fz.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_fz.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_fz.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_fz.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_bl[i];
  }

  LM_TOS_B.BusCreator1_fz.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_fz.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_fz.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_fz.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_0_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S42>/Bus Creator1' */

  /* Concatenate: '<S9>/Vector Concatenate' */
  LM_TOS_B.BusCreator.ObjectList_st[0] = LM_TOS_B.BusCreator1;
  LM_TOS_B.BusCreator.ObjectList_st[1] = LM_TOS_B.BusCreator1_k;
  LM_TOS_B.BusCreator.ObjectList_st[2] = LM_TOS_B.BusCreator1_p;
  LM_TOS_B.BusCreator.ObjectList_st[3] = LM_TOS_B.BusCreator1_f;
  LM_TOS_B.BusCreator.ObjectList_st[4] = LM_TOS_B.BusCreator1_e;
  LM_TOS_B.BusCreator.ObjectList_st[5] = LM_TOS_B.BusCreator1_o;
  LM_TOS_B.BusCreator.ObjectList_st[6] = LM_TOS_B.BusCreator1_b;
  LM_TOS_B.BusCreator.ObjectList_st[7] = LM_TOS_B.BusCreator1_g;
  LM_TOS_B.BusCreator.ObjectList_st[8] = LM_TOS_B.BusCreator1_gx;
  LM_TOS_B.BusCreator.ObjectList_st[9] = LM_TOS_B.BusCreator1_fz;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_j5[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_j5[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_j5[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_j5[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S43>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_j5[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S43>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bv.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_bv.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_bv.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_bv.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_bv.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_j5[i];
  }

  LM_TOS_B.BusCreator1_bv.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_bv.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_bv.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_bv.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S43>/Bus Creator1' */

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nw[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nw[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nw[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nw[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S44>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nw[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S44>/Bus Creator1' */
  LM_TOS_B.BusCreator1_c.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_c.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_c.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_c.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_c.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_nw[i];
  }

  LM_TOS_B.BusCreator1_c.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_c.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_c.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_c.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S44>/Bus Creator1' */

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gw[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gw[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gw[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gw[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S51>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gw[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S51>/Bus Creator1' */
  LM_TOS_B.BusCreator1_i.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_i.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_i.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_i.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_i.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gw[i];
  }

  LM_TOS_B.BusCreator1_i.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_i.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_i.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_i.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S51>/Bus Creator1' */

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mh[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mh[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mh[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mh[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S52>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_mh[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S52>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ph.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ph.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_ph.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_ph.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ph.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_mh[i];
  }

  LM_TOS_B.BusCreator1_ph.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ph.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ph.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_ph.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S52>/Bus Creator1' */

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nj[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nj[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nj[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nj[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S53>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nj[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S53>/Bus Creator1' */
  LM_TOS_B.BusCreator1_h.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_h.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_h.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_h.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_h.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_nj[i];
  }

  LM_TOS_B.BusCreator1_h.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_h.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_h.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_h.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S53>/Bus Creator1' */

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_c2[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_c2[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_c2[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_c2[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S54>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_c2[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S54>/Bus Creator1' */
  LM_TOS_B.BusCreator1_m.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_m.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_m.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_m.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_m.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_c2[i];
  }

  LM_TOS_B.BusCreator1_m.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_m.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_m.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_m.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S54>/Bus Creator1' */

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mj[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mj[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mj[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mj[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S55>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_mj[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S55>/Bus Creator1' */
  LM_TOS_B.BusCreator1_m5.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_m5.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_m5.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_m5.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_m5.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_mj[i];
  }

  LM_TOS_B.BusCreator1_m5.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_m5.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_m5.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_m5.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S55>/Bus Creator1' */

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ce[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ce[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ce[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ce[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S56>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ce[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S56>/Bus Creator1' */
  LM_TOS_B.BusCreator1_gb.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_gb.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_gb.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_gb.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_gb.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ce[i];
  }

  LM_TOS_B.BusCreator1_gb.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_gb.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_gb.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_gb.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S56>/Bus Creator1' */

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_i[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_i[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_i[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_i[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S57>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_i[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S57>/Bus Creator1' */
  LM_TOS_B.BusCreator1_a.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_a.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_a.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_a.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_a.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_i[i];
  }

  LM_TOS_B.BusCreator1_a.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_a.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_a.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_a.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S57>/Bus Creator1' */

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_a1[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_a1[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_a1[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_a1[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S58>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_a1[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S58>/Bus Creator1' */
  LM_TOS_B.BusCreator1_b2.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_b2.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_b2.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_b2.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_b2.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_a1[i];
  }

  LM_TOS_B.BusCreator1_b2.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_b2.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_b2.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_b2.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_1_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S58>/Bus Creator1' */

  /* Concatenate: '<S10>/Vector Concatenate' */
  LM_TOS_B.BusCreator_m.ObjectList_st[0] = LM_TOS_B.BusCreator1_bv;
  LM_TOS_B.BusCreator_m.ObjectList_st[1] = LM_TOS_B.BusCreator1_c;
  LM_TOS_B.BusCreator_m.ObjectList_st[2] = LM_TOS_B.BusCreator1_i;
  LM_TOS_B.BusCreator_m.ObjectList_st[3] = LM_TOS_B.BusCreator1_ph;
  LM_TOS_B.BusCreator_m.ObjectList_st[4] = LM_TOS_B.BusCreator1_h;
  LM_TOS_B.BusCreator_m.ObjectList_st[5] = LM_TOS_B.BusCreator1_m;
  LM_TOS_B.BusCreator_m.ObjectList_st[6] = LM_TOS_B.BusCreator1_m5;
  LM_TOS_B.BusCreator_m.ObjectList_st[7] = LM_TOS_B.BusCreator1_gb;
  LM_TOS_B.BusCreator_m.ObjectList_st[8] = LM_TOS_B.BusCreator1_a;
  LM_TOS_B.BusCreator_m.ObjectList_st[9] = LM_TOS_B.BusCreator1_b2;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bp[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bp[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bp[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bp[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S59>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_bp[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S59>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fl.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_fl.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_fl.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_fl.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_fl.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_bp[i];
  }

  LM_TOS_B.BusCreator1_fl.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_fl.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_fl.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_fl.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S59>/Bus Creator1' */

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_kf[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_kf[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_kf[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_kf[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S60>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_kf[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S60>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fh.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_fh.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_fh.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_fh.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_fh.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_kf[i];
  }

  LM_TOS_B.BusCreator1_fh.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_fh.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_fh.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_fh.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S60>/Bus Creator1' */

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_jv[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_jv[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_jv[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_jv[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S67>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_jv[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S67>/Bus Creator1' */
  LM_TOS_B.BusCreator1_oj.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_oj.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_oj.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_oj.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_oj.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_jv[i];
  }

  LM_TOS_B.BusCreator1_oj.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_oj.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_oj.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_oj.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S67>/Bus Creator1' */

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gn[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gn[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gn[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gn[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S68>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gn[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S68>/Bus Creator1' */
  LM_TOS_B.BusCreator1_m0.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_m0.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_m0.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_m0.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_m0.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gn[i];
  }

  LM_TOS_B.BusCreator1_m0.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_m0.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_m0.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_m0.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S68>/Bus Creator1' */

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_pz[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_pz[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_pz[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_pz[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S69>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_pz[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S69>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bw.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_bw.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_bw.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_bw.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_bw.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_pz[i];
  }

  LM_TOS_B.BusCreator1_bw.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_bw.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_bw.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_bw.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S69>/Bus Creator1' */

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_or[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_or[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_or[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_or[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S70>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_or[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S70>/Bus Creator1' */
  LM_TOS_B.BusCreator1_l.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_l.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_l.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_l.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_l.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_or[i];
  }

  LM_TOS_B.BusCreator1_l.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_l.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_l.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_l.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S70>/Bus Creator1' */

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gp[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gp[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gp[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gp[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S71>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_gp[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S71>/Bus Creator1' */
  LM_TOS_B.BusCreator1_n.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_n.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_n.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_n.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_n.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_gp[i];
  }

  LM_TOS_B.BusCreator1_n.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_n.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_n.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_n.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S71>/Bus Creator1' */

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ax[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ax[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ax[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ax[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S72>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ax[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S72>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ip.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ip.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_ip.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_ip.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ip.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ax[i];
  }

  LM_TOS_B.BusCreator1_ip.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ip.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ip.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_ip.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S72>/Bus Creator1' */

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ej[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ej[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ej[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ej[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S73>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ej[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S73>/Bus Creator1' */
  LM_TOS_B.BusCreator1_mh.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_mh.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_mh.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_mh.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_mh.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ej[i];
  }

  LM_TOS_B.BusCreator1_mh.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_mh.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_mh.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_mh.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S73>/Bus Creator1' */

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_om[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_om[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_om[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_om[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S74>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_om[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S74>/Bus Creator1' */
  LM_TOS_B.BusCreator1_l3.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_l3.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_l3.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_l3.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_l3.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_om[i];
  }

  LM_TOS_B.BusCreator1_l3.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_l3.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_l3.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_l3.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_2_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S74>/Bus Creator1' */

  /* Concatenate: '<S11>/Vector Concatenate' */
  LM_TOS_B.BusCreator_p.ObjectList_st[0] = LM_TOS_B.BusCreator1_fl;
  LM_TOS_B.BusCreator_p.ObjectList_st[1] = LM_TOS_B.BusCreator1_fh;
  LM_TOS_B.BusCreator_p.ObjectList_st[2] = LM_TOS_B.BusCreator1_oj;
  LM_TOS_B.BusCreator_p.ObjectList_st[3] = LM_TOS_B.BusCreator1_m0;
  LM_TOS_B.BusCreator_p.ObjectList_st[4] = LM_TOS_B.BusCreator1_bw;
  LM_TOS_B.BusCreator_p.ObjectList_st[5] = LM_TOS_B.BusCreator1_l;
  LM_TOS_B.BusCreator_p.ObjectList_st[6] = LM_TOS_B.BusCreator1_n;
  LM_TOS_B.BusCreator_p.ObjectList_st[7] = LM_TOS_B.BusCreator1_ip;
  LM_TOS_B.BusCreator_p.ObjectList_st[8] = LM_TOS_B.BusCreator1_mh;
  LM_TOS_B.BusCreator_p.ObjectList_st[9] = LM_TOS_B.BusCreator1_l3;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_f[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_f[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_f[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_f[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S75>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_f[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S75>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ny.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ny.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_ny.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_ny.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ny.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_f[i];
  }

  LM_TOS_B.BusCreator1_ny.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ny.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ny.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_ny.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S75>/Bus Creator1' */

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bu[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bu[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bu[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bu[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S76>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_bu[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S76>/Bus Creator1' */
  LM_TOS_B.BusCreator1_el.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_el.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_el.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_el.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_el.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_bu[i];
  }

  LM_TOS_B.BusCreator1_el.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_el.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_el.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_el.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S76>/Bus Creator1' */

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nn[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nn[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nn[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nn[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S83>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nn[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S83>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hk.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_hk.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_hk.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_hk.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_hk.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_nn[i];
  }

  LM_TOS_B.BusCreator1_hk.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_hk.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_hk.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_hk.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S83>/Bus Creator1' */

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_hw[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_hw[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_hw[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_hw[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S84>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_hw[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S84>/Bus Creator1' */
  LM_TOS_B.BusCreator1_d.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_d.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_d.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_d.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_d.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_hw[i];
  }

  LM_TOS_B.BusCreator1_d.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_d.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_d.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_d.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S84>/Bus Creator1' */

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_l[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_l[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_l[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_l[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S85>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_l[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S85>/Bus Creator1' */
  LM_TOS_B.BusCreator1_pu.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_pu.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_pu.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_pu.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_pu.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_l[i];
  }

  LM_TOS_B.BusCreator1_pu.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_pu.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_pu.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_pu.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S85>/Bus Creator1' */

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fs[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fs[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fs[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fs[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_fs[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S86>/Bus Creator1' */
  LM_TOS_B.BusCreator1_lj.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_lj.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_lj.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_lj.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_lj.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_fs[i];
  }

  LM_TOS_B.BusCreator1_lj.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_lj.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_lj.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_lj.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S86>/Bus Creator1' */

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ec[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ec[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ec[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ec[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S87>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ec[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S87>/Bus Creator1' */
  LM_TOS_B.BusCreator1_j.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_j.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_j.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_j.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_j.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ec[i];
  }

  LM_TOS_B.BusCreator1_j.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_j.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_j.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_j.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S87>/Bus Creator1' */

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fj[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fj[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fj[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fj[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_fj[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S88>/Bus Creator1' */
  LM_TOS_B.BusCreator1_pc.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_pc.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_pc.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_pc.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_pc.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_fj[i];
  }

  LM_TOS_B.BusCreator1_pc.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_pc.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_pc.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_pc.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S88>/Bus Creator1' */

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bh[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bh[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bh[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bh[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S89>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_bh[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S89>/Bus Creator1' */
  LM_TOS_B.BusCreator1_dw.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_dw.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_dw.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_dw.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_dw.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_bh[i];
  }

  LM_TOS_B.BusCreator1_dw.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_dw.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_dw.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_dw.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S89>/Bus Creator1' */

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_pa[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_pa[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_pa[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_pa[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S90>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_pa[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S90>/Bus Creator1' */
  LM_TOS_B.BusCreator1_m5l.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_m5l.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_m5l.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_m5l.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_m5l.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_pa[i];
  }

  LM_TOS_B.BusCreator1_m5l.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_m5l.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_m5l.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_m5l.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_3_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S90>/Bus Creator1' */

  /* Concatenate: '<S12>/Vector Concatenate' */
  LM_TOS_B.BusCreator_g.ObjectList_st[0] = LM_TOS_B.BusCreator1_ny;
  LM_TOS_B.BusCreator_g.ObjectList_st[1] = LM_TOS_B.BusCreator1_el;
  LM_TOS_B.BusCreator_g.ObjectList_st[2] = LM_TOS_B.BusCreator1_hk;
  LM_TOS_B.BusCreator_g.ObjectList_st[3] = LM_TOS_B.BusCreator1_d;
  LM_TOS_B.BusCreator_g.ObjectList_st[4] = LM_TOS_B.BusCreator1_pu;
  LM_TOS_B.BusCreator_g.ObjectList_st[5] = LM_TOS_B.BusCreator1_lj;
  LM_TOS_B.BusCreator_g.ObjectList_st[6] = LM_TOS_B.BusCreator1_j;
  LM_TOS_B.BusCreator_g.ObjectList_st[7] = LM_TOS_B.BusCreator1_pc;
  LM_TOS_B.BusCreator_g.ObjectList_st[8] = LM_TOS_B.BusCreator1_dw;
  LM_TOS_B.BusCreator_g.ObjectList_st[9] = LM_TOS_B.BusCreator1_m5l;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_hv[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_hv[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_hv[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_hv[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S91>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_hv[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S91>/Bus Creator1' */
  LM_TOS_B.BusCreator1_mx.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_mx.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.TTC_f;
  LM_TOS_B.BusCreator1_mx.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.ID_un8;
  LM_TOS_B.BusCreator1_mx.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_mx.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_hv[i];
  }

  LM_TOS_B.BusCreator1_mx.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_mx.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_mx.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.overlap_f;
  LM_TOS_B.BusCreator1_mx.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S91>/Bus Creator1' */

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_j3[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_j3[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_j3[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_j3[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_j3[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S92>/Bus Creator1' */
  LM_TOS_B.BusCreator1_mr.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_mr.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.TTC_f;
  LM_TOS_B.BusCreator1_mr.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.ID_un8;
  LM_TOS_B.BusCreator1_mr.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_mr.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_j3[i];
  }

  LM_TOS_B.BusCreator1_mr.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_mr.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_mr.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.overlap_f;
  LM_TOS_B.BusCreator1_mr.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S92>/Bus Creator1' */

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bc[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bc[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bc[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bc[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S99>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_bc[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S99>/Bus Creator1' */
  LM_TOS_B.BusCreator1_b1.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_b1.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.TTC_f;
  LM_TOS_B.BusCreator1_b1.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.ID_un8;
  LM_TOS_B.BusCreator1_b1.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_b1.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_bc[i];
  }

  LM_TOS_B.BusCreator1_b1.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_b1.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_b1.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.overlap_f;
  LM_TOS_B.BusCreator1_b1.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S99>/Bus Creator1' */

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_o1[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_o1[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_o1[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_o1[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S100>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_o1[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S100>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bws.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_bws.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.TTC_f;
  LM_TOS_B.BusCreator1_bws.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.ID_un8;
  LM_TOS_B.BusCreator1_bws.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_bws.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_o1[i];
  }

  LM_TOS_B.BusCreator1_bws.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_bws.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_bws.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.overlap_f;
  LM_TOS_B.BusCreator1_bws.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S100>/Bus Creator1' */

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_e4[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_e4[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_e4[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_e4[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S101>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_e4[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S101>/Bus Creator1' */
  LM_TOS_B.BusCreator1_p0.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_p0.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.TTC_f;
  LM_TOS_B.BusCreator1_p0.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.ID_un8;
  LM_TOS_B.BusCreator1_p0.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_p0.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_e4[i];
  }

  LM_TOS_B.BusCreator1_p0.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_p0.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_p0.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.overlap_f;
  LM_TOS_B.BusCreator1_p0.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_4_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S101>/Bus Creator1' */

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_i2[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_i2[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_i2[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_i2[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S102>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_i2[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S102>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bg.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_bg.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.TTC_f;
  LM_TOS_B.BusCreator1_bg.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.ID_un8;
  LM_TOS_B.BusCreator1_bg.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_bg.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_i2[i];
  }

  LM_TOS_B.BusCreator1_bg.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_bg.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_bg.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.overlap_f;
  LM_TOS_B.BusCreator1_bg.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_5_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S102>/Bus Creator1' */

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bb[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bb[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bb[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bb[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S103>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_bb[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S103>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ji.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ji.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.TTC_f;
  LM_TOS_B.BusCreator1_ji.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.ID_un8;
  LM_TOS_B.BusCreator1_ji.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ji.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_bb[i];
  }

  LM_TOS_B.BusCreator1_ji.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ji.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ji.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.overlap_f;
  LM_TOS_B.BusCreator1_ji.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_6_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S103>/Bus Creator1' */

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_lv[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_lv[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_lv[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_lv[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S104>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_lv[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S104>/Bus Creator1' */
  LM_TOS_B.BusCreator1_js.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_js.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.TTC_f;
  LM_TOS_B.BusCreator1_js.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.ID_un8;
  LM_TOS_B.BusCreator1_js.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_js.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_lv[i];
  }

  LM_TOS_B.BusCreator1_js.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_js.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_js.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.overlap_f;
  LM_TOS_B.BusCreator1_js.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_7_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S104>/Bus Creator1' */

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_oik[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_oik[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_oik[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_oik[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S105>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_oik[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S105>/Bus Creator1' */
  LM_TOS_B.BusCreator1_il.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_il.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.TTC_f;
  LM_TOS_B.BusCreator1_il.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.ID_un8;
  LM_TOS_B.BusCreator1_il.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_il.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_oik[i];
  }

  LM_TOS_B.BusCreator1_il.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_il.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_il.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.overlap_f;
  LM_TOS_B.BusCreator1_il.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_8_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S105>/Bus Creator1' */

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_d[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_d[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_d[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_d[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S106>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_d[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S106>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ot.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.dis2EgoLaneCenter;
  LM_TOS_B.BusCreator1_ot.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.TTC_f;
  LM_TOS_B.BusCreator1_ot.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.ID_un8;
  LM_TOS_B.BusCreator1_ot.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    LM_TOS_B.BusCreator1_ot.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_d[i];
  }

  LM_TOS_B.BusCreator1_ot.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probCutIn_f;
  LM_TOS_B.BusCreator1_ot.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.probCutOut_f;
  LM_TOS_B.BusCreator1_ot.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.overlap_f;
  LM_TOS_B.BusCreator1_ot.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o3.LANE_4_TARGETOBJECT_9_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S106>/Bus Creator1' */

  /* Concatenate: '<S13>/Vector Concatenate' */
  LM_TOS_B.BusCreator_o.ObjectList_st[0] = LM_TOS_B.BusCreator1_mx;
  LM_TOS_B.BusCreator_o.ObjectList_st[1] = LM_TOS_B.BusCreator1_mr;
  LM_TOS_B.BusCreator_o.ObjectList_st[2] = LM_TOS_B.BusCreator1_b1;
  LM_TOS_B.BusCreator_o.ObjectList_st[3] = LM_TOS_B.BusCreator1_bws;
  LM_TOS_B.BusCreator_o.ObjectList_st[4] = LM_TOS_B.BusCreator1_p0;
  LM_TOS_B.BusCreator_o.ObjectList_st[5] = LM_TOS_B.BusCreator1_bg;
  LM_TOS_B.BusCreator_o.ObjectList_st[6] = LM_TOS_B.BusCreator1_ji;
  LM_TOS_B.BusCreator_o.ObjectList_st[7] = LM_TOS_B.BusCreator1_js;
  LM_TOS_B.BusCreator_o.ObjectList_st[8] = LM_TOS_B.BusCreator1_il;
  LM_TOS_B.BusCreator_o.ObjectList_st[9] = LM_TOS_B.BusCreator1_ot;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_cl[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_cl[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_cl[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S29>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_cl[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S29>/Bus Creator1' */
  LM_TOS_B.BusCreator1_phc.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_cl[0];
  LM_TOS_B.BusCreator1_phc.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_cl[1];
  LM_TOS_B.BusCreator1_phc.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_cl[2];
  LM_TOS_B.BusCreator1_phc.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_cl[3];
  LM_TOS_B.BusCreator1_phc.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_phc.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_phc.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_phc.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_phc.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_phc.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_m4[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_m4[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_m4[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S30>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_m4[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S30>/Bus Creator1' */
  LM_TOS_B.BusCreator1_lt.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_m4[0];
  LM_TOS_B.BusCreator1_lt.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_m4[1];
  LM_TOS_B.BusCreator1_lt.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_m4[2];
  LM_TOS_B.BusCreator1_lt.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_m4[3];
  LM_TOS_B.BusCreator1_lt.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_lt.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_lt.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_lt.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_lt.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_lt.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_c4[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_c4[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_c4[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S31>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_c4[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S31>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fb.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_c4[0];
  LM_TOS_B.BusCreator1_fb.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_c4[1];
  LM_TOS_B.BusCreator1_fb.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_c4[2];
  LM_TOS_B.BusCreator1_fb.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_c4[3];
  LM_TOS_B.BusCreator1_fb.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_fb.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_fb.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_fb.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_fb.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_fb.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mp[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mp[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mp[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S32>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mp[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S32>/Bus Creator1' */
  LM_TOS_B.BusCreator1_p03.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_mp[0];
  LM_TOS_B.BusCreator1_p03.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_mp[1];
  LM_TOS_B.BusCreator1_p03.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_mp[2];
  LM_TOS_B.BusCreator1_p03.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_mp[3];
  LM_TOS_B.BusCreator1_p03.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_p03.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_p03.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_p03.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_p03.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_p03.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_a5[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_a5[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_a5[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S33>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_a5[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S33>/Bus Creator1' */
  LM_TOS_B.BusCreator1_pa.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_a5[0];
  LM_TOS_B.BusCreator1_pa.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_a5[1];
  LM_TOS_B.BusCreator1_pa.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_a5[2];
  LM_TOS_B.BusCreator1_pa.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_a5[3];
  LM_TOS_B.BusCreator1_pa.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_pa.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_pa.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_pa.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_pa.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_pa.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mo[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mo[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mo[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S34>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mo[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S34>/Bus Creator1' */
  LM_TOS_B.BusCreator1_c0.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_mo[0];
  LM_TOS_B.BusCreator1_c0.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_mo[1];
  LM_TOS_B.BusCreator1_c0.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_mo[2];
  LM_TOS_B.BusCreator1_c0.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_mo[3];
  LM_TOS_B.BusCreator1_c0.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_c0.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_c0.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_c0.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_c0.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_c0.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_0_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S9>/Vector Concatenate1' */
  LM_TOS_B.BusCreator.SRGMENT[0] = LM_TOS_B.BusCreator1_phc;
  LM_TOS_B.BusCreator.SRGMENT[1] = LM_TOS_B.BusCreator1_lt;
  LM_TOS_B.BusCreator.SRGMENT[2] = LM_TOS_B.BusCreator1_fb;
  LM_TOS_B.BusCreator.SRGMENT[3] = LM_TOS_B.BusCreator1_p03;
  LM_TOS_B.BusCreator.SRGMENT[4] = LM_TOS_B.BusCreator1_pa;
  LM_TOS_B.BusCreator.SRGMENT[5] = LM_TOS_B.BusCreator1_c0;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ns[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ns[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ns[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S45>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ns[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S45>/Bus Creator1' */
  LM_TOS_B.BusCreator1_md.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_ns[0];
  LM_TOS_B.BusCreator1_md.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_ns[1];
  LM_TOS_B.BusCreator1_md.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_ns[2];
  LM_TOS_B.BusCreator1_md.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_ns[3];
  LM_TOS_B.BusCreator1_md.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_md.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_md.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_md.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_md.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_md.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_cb[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_cb[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_cb[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S46>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_cb[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S46>/Bus Creator1' */
  LM_TOS_B.BusCreator1_fv.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_cb[0];
  LM_TOS_B.BusCreator1_fv.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_cb[1];
  LM_TOS_B.BusCreator1_fv.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_cb[2];
  LM_TOS_B.BusCreator1_fv.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_cb[3];
  LM_TOS_B.BusCreator1_fv.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_fv.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_fv.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_fv.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_fv.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_fv.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bf[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bf[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bf[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S47>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bf[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S47>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hs.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_bf[0];
  LM_TOS_B.BusCreator1_hs.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_bf[1];
  LM_TOS_B.BusCreator1_hs.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_bf[2];
  LM_TOS_B.BusCreator1_hs.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_bf[3];
  LM_TOS_B.BusCreator1_hs.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_hs.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_hs.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_hs.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_hs.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_hs.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fr[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fr[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fr[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S48>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fr[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S48>/Bus Creator1' */
  LM_TOS_B.BusCreator1_g4.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_fr[0];
  LM_TOS_B.BusCreator1_g4.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_fr[1];
  LM_TOS_B.BusCreator1_g4.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_fr[2];
  LM_TOS_B.BusCreator1_g4.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_fr[3];
  LM_TOS_B.BusCreator1_g4.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_g4.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_g4.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_g4.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_g4.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_g4.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_dn[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_dn[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_dn[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S49>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_dn[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S49>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hz.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_dn[0];
  LM_TOS_B.BusCreator1_hz.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_dn[1];
  LM_TOS_B.BusCreator1_hz.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_dn[2];
  LM_TOS_B.BusCreator1_hz.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_dn[3];
  LM_TOS_B.BusCreator1_hz.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_hz.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_hz.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_hz.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_hz.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_hz.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_dt[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_dt[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_dt[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S50>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_dt[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S50>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ky.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_dt[0];
  LM_TOS_B.BusCreator1_ky.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_dt[1];
  LM_TOS_B.BusCreator1_ky.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_dt[2];
  LM_TOS_B.BusCreator1_ky.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_dt[3];
  LM_TOS_B.BusCreator1_ky.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ky.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ky.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ky.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ky.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ky.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_1_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S10>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_m.SRGMENT[0] = LM_TOS_B.BusCreator1_md;
  LM_TOS_B.BusCreator_m.SRGMENT[1] = LM_TOS_B.BusCreator1_fv;
  LM_TOS_B.BusCreator_m.SRGMENT[2] = LM_TOS_B.BusCreator1_hs;
  LM_TOS_B.BusCreator_m.SRGMENT[3] = LM_TOS_B.BusCreator1_g4;
  LM_TOS_B.BusCreator_m.SRGMENT[4] = LM_TOS_B.BusCreator1_hz;
  LM_TOS_B.BusCreator_m.SRGMENT[5] = LM_TOS_B.BusCreator1_ky;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_lr[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_lr[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_lr[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S61>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_lr[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S61>/Bus Creator1' */
  LM_TOS_B.BusCreator1_otn.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_lr[0];
  LM_TOS_B.BusCreator1_otn.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_lr[1];
  LM_TOS_B.BusCreator1_otn.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_lr[2];
  LM_TOS_B.BusCreator1_otn.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_lr[3];
  LM_TOS_B.BusCreator1_otn.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_otn.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_otn.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_otn.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_otn.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_otn.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_im[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_im[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_im[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S62>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_im[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S62>/Bus Creator1' */
  LM_TOS_B.BusCreator1_gc.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_im[0];
  LM_TOS_B.BusCreator1_gc.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_im[1];
  LM_TOS_B.BusCreator1_gc.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_im[2];
  LM_TOS_B.BusCreator1_gc.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_im[3];
  LM_TOS_B.BusCreator1_gc.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_gc.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_gc.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_gc.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_gc.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_gc.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_aa[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_aa[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_aa[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S63>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_aa[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S63>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hx.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_aa[0];
  LM_TOS_B.BusCreator1_hx.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_aa[1];
  LM_TOS_B.BusCreator1_hx.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_aa[2];
  LM_TOS_B.BusCreator1_hx.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_aa[3];
  LM_TOS_B.BusCreator1_hx.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_hx.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_hx.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_hx.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_hx.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_hx.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_gm[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_gm[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_gm[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S64>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_gm[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S64>/Bus Creator1' */
  LM_TOS_B.BusCreator1_mc.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_gm[0];
  LM_TOS_B.BusCreator1_mc.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_gm[1];
  LM_TOS_B.BusCreator1_mc.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_gm[2];
  LM_TOS_B.BusCreator1_mc.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_gm[3];
  LM_TOS_B.BusCreator1_mc.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_mc.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_mc.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_mc.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_mc.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_mc.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_mhr[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_mhr[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_mhr[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S65>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_mhr[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S65>/Bus Creator1' */
  LM_TOS_B.BusCreator1_mo.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_mhr[0];
  LM_TOS_B.BusCreator1_mo.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_mhr[1];
  LM_TOS_B.BusCreator1_mo.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_mhr[2];
  LM_TOS_B.BusCreator1_mo.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_mhr[3];
  LM_TOS_B.BusCreator1_mo.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_mo.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_mo.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_mo.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_mo.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_mo.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_bq[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_bq[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_bq[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S66>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_bq[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S66>/Bus Creator1' */
  LM_TOS_B.BusCreator1_bs.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_bq[0];
  LM_TOS_B.BusCreator1_bs.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_bq[1];
  LM_TOS_B.BusCreator1_bs.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_bq[2];
  LM_TOS_B.BusCreator1_bs.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_bq[3];
  LM_TOS_B.BusCreator1_bs.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_bs.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_bs.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_bs.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_bs.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_bs.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_2_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S11>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_p.SRGMENT[0] = LM_TOS_B.BusCreator1_otn;
  LM_TOS_B.BusCreator_p.SRGMENT[1] = LM_TOS_B.BusCreator1_gc;
  LM_TOS_B.BusCreator_p.SRGMENT[2] = LM_TOS_B.BusCreator1_hx;
  LM_TOS_B.BusCreator_p.SRGMENT[3] = LM_TOS_B.BusCreator1_mc;
  LM_TOS_B.BusCreator_p.SRGMENT[4] = LM_TOS_B.BusCreator1_mo;
  LM_TOS_B.BusCreator_p.SRGMENT[5] = LM_TOS_B.BusCreator1_bs;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_kz[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_kz[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_kz[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S77>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_kz[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S77>/Bus Creator1' */
  LM_TOS_B.BusCreator1_pue.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_kz[0];
  LM_TOS_B.BusCreator1_pue.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_kz[1];
  LM_TOS_B.BusCreator1_pue.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_kz[2];
  LM_TOS_B.BusCreator1_pue.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_kz[3];
  LM_TOS_B.BusCreator1_pue.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_pue.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_pue.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_pue.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_pue.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_pue.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_e1[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_e1[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_e1[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S78>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_e1[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S78>/Bus Creator1' */
  LM_TOS_B.BusCreator1_er.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_e1[0];
  LM_TOS_B.BusCreator1_er.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_e1[1];
  LM_TOS_B.BusCreator1_er.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_e1[2];
  LM_TOS_B.BusCreator1_er.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_e1[3];
  LM_TOS_B.BusCreator1_er.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_er.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_er.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_er.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_er.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_er.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_h2[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_h2[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_h2[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_h2[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S79>/Bus Creator1' */
  LM_TOS_B.BusCreator1_i2.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_h2[0];
  LM_TOS_B.BusCreator1_i2.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_h2[1];
  LM_TOS_B.BusCreator1_i2.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_h2[2];
  LM_TOS_B.BusCreator1_i2.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_h2[3];
  LM_TOS_B.BusCreator1_i2.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_i2.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_i2.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_i2.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_i2.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_i2.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_k3[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_k3[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_k3[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S80>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_k3[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S80>/Bus Creator1' */
  LM_TOS_B.BusCreator1_is.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_k3[0];
  LM_TOS_B.BusCreator1_is.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_k3[1];
  LM_TOS_B.BusCreator1_is.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_k3[2];
  LM_TOS_B.BusCreator1_is.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_k3[3];
  LM_TOS_B.BusCreator1_is.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_is.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_is.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_is.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_is.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_is.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_aau[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_aau[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_aau[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S81>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_aau[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S81>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hb.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_aau[0];
  LM_TOS_B.BusCreator1_hb.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_aau[1];
  LM_TOS_B.BusCreator1_hb.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_aau[2];
  LM_TOS_B.BusCreator1_hb.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_aau[3];
  LM_TOS_B.BusCreator1_hb.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_hb.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_hb.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_hb.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_hb.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_hb.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nc[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nc[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nc[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S82>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nc[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S82>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ko.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_nc[0];
  LM_TOS_B.BusCreator1_ko.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_nc[1];
  LM_TOS_B.BusCreator1_ko.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_nc[2];
  LM_TOS_B.BusCreator1_ko.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_nc[3];
  LM_TOS_B.BusCreator1_ko.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ko.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ko.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ko.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ko.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ko.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_3_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S12>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_g.SRGMENT[0] = LM_TOS_B.BusCreator1_pue;
  LM_TOS_B.BusCreator_g.SRGMENT[1] = LM_TOS_B.BusCreator1_er;
  LM_TOS_B.BusCreator_g.SRGMENT[2] = LM_TOS_B.BusCreator1_i2;
  LM_TOS_B.BusCreator_g.SRGMENT[3] = LM_TOS_B.BusCreator1_is;
  LM_TOS_B.BusCreator_g.SRGMENT[4] = LM_TOS_B.BusCreator1_hb;
  LM_TOS_B.BusCreator_g.SRGMENT[5] = LM_TOS_B.BusCreator1_ko;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fk[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fk[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fk[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S93>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fk[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S93>/Bus Creator1' */
  LM_TOS_B.BusCreator1_cn.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_fk[0];
  LM_TOS_B.BusCreator1_cn.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_fk[1];
  LM_TOS_B.BusCreator1_cn.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_fk[2];
  LM_TOS_B.BusCreator1_cn.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_fk[3];
  LM_TOS_B.BusCreator1_cn.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_cn.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_cn.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_cn.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.available_b;
  LM_TOS_B.BusCreator1_cn.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_cn.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_0_ST_adp.quality_f;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_kw[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_kw[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_kw[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S94>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_kw[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S94>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ls.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_kw[0];
  LM_TOS_B.BusCreator1_ls.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_kw[1];
  LM_TOS_B.BusCreator1_ls.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_kw[2];
  LM_TOS_B.BusCreator1_ls.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_kw[3];
  LM_TOS_B.BusCreator1_ls.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ls.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ls.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ls.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ls.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ls.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_1_ST_adp.quality_f;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_fks[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_fks[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_fks[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S95>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_fks[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S95>/Bus Creator1' */
  LM_TOS_B.BusCreator1_ds.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_fks[0];
  LM_TOS_B.BusCreator1_ds.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_fks[1];
  LM_TOS_B.BusCreator1_ds.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_fks[2];
  LM_TOS_B.BusCreator1_ds.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_fks[3];
  LM_TOS_B.BusCreator1_ds.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_ds.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_ds.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_ds.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.available_b;
  LM_TOS_B.BusCreator1_ds.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_ds.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_2_ST_adp.quality_f;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_en[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_en[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_en[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S96>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_en[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S96>/Bus Creator1' */
  LM_TOS_B.BusCreator1_kx.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_en[0];
  LM_TOS_B.BusCreator1_kx.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_en[1];
  LM_TOS_B.BusCreator1_kx.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_en[2];
  LM_TOS_B.BusCreator1_kx.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_en[3];
  LM_TOS_B.BusCreator1_kx.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_kx.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_kx.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_kx.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.available_b;
  LM_TOS_B.BusCreator1_kx.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_kx.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_3_ST_adp.quality_f;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ey[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ey[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ey[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S97>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ey[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S97>/Bus Creator1' */
  LM_TOS_B.BusCreator1_hp.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_ey[0];
  LM_TOS_B.BusCreator1_hp.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_ey[1];
  LM_TOS_B.BusCreator1_hp.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_ey[2];
  LM_TOS_B.BusCreator1_hp.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_ey[3];
  LM_TOS_B.BusCreator1_hp.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_hp.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_hp.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_hp.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.available_b;
  LM_TOS_B.BusCreator1_hp.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_hp.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_4_ST_adp.quality_f;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_k1[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_0;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_k1[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_1;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_k1[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_2;

  /* SignalConversion: '<S98>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_k1[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.coef_arr_f_3;

  /* BusCreator: '<S98>/Bus Creator1' */
  LM_TOS_B.BusCreator1_et.coef_arr_f[0] = LM_TOS_B.VectorConcatenate_k1[0];
  LM_TOS_B.BusCreator1_et.coef_arr_f[1] = LM_TOS_B.VectorConcatenate_k1[1];
  LM_TOS_B.BusCreator1_et.coef_arr_f[2] = LM_TOS_B.VectorConcatenate_k1[2];
  LM_TOS_B.BusCreator1_et.coef_arr_f[3] = LM_TOS_B.VectorConcatenate_k1[3];
  LM_TOS_B.BusCreator1_et.dlowerLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.dlowerLimit_f;
  LM_TOS_B.BusCreator1_et.dupperLimit_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.dupperLimit_f;
  LM_TOS_B.BusCreator1_et.numOfSegment_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.numOfSegment_un8;
  LM_TOS_B.BusCreator1_et.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.available_b;
  LM_TOS_B.BusCreator1_et.detectedByVideo_b =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.detectedByVideo_b;
  LM_TOS_B.BusCreator1_et.quality_f =
    LM_TOS_B.LM_TOS_ALGORISM_o4.LANE_4_SEGMENT_5_ST_adp.quality_f;

  /* Concatenate: '<S13>/Vector Concatenate1' */
  LM_TOS_B.BusCreator_o.SRGMENT[0] = LM_TOS_B.BusCreator1_cn;
  LM_TOS_B.BusCreator_o.SRGMENT[1] = LM_TOS_B.BusCreator1_ls;
  LM_TOS_B.BusCreator_o.SRGMENT[2] = LM_TOS_B.BusCreator1_ds;
  LM_TOS_B.BusCreator_o.SRGMENT[3] = LM_TOS_B.BusCreator1_kx;
  LM_TOS_B.BusCreator_o.SRGMENT[4] = LM_TOS_B.BusCreator1_hp;
  LM_TOS_B.BusCreator_o.SRGMENT[5] = LM_TOS_B.BusCreator1_et;

  /* BusCreator: '<S9>/Bus Creator' */
  LM_TOS_B.BusCreator.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.objectNum_un8;
  LM_TOS_B.BusCreator.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.available_b;
  LM_TOS_B.BusCreator.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.lane_dwidth_f;
  LM_TOS_B.BusCreator.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.front_lane_length_f;
  LM_TOS_B.BusCreator.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_0.rear_lane_length_f;

  /* BusCreator: '<S10>/Bus Creator' */
  LM_TOS_B.BusCreator_m.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.objectNum_un8;
  LM_TOS_B.BusCreator_m.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.available_b;
  LM_TOS_B.BusCreator_m.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.lane_dwidth_f;
  LM_TOS_B.BusCreator_m.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.front_lane_length_f;
  LM_TOS_B.BusCreator_m.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_1.rear_lane_length_f;

  /* BusCreator: '<S11>/Bus Creator' */
  LM_TOS_B.BusCreator_p.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.objectNum_un8;
  LM_TOS_B.BusCreator_p.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.available_b;
  LM_TOS_B.BusCreator_p.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.lane_dwidth_f;
  LM_TOS_B.BusCreator_p.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.front_lane_length_f;
  LM_TOS_B.BusCreator_p.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_2.rear_lane_length_f;

  /* BusCreator: '<S12>/Bus Creator' */
  LM_TOS_B.BusCreator_g.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.objectNum_un8;
  LM_TOS_B.BusCreator_g.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.available_b;
  LM_TOS_B.BusCreator_g.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.lane_dwidth_f;
  LM_TOS_B.BusCreator_g.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.front_lane_length_f;
  LM_TOS_B.BusCreator_g.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_3.rear_lane_length_f;

  /* BusCreator: '<S13>/Bus Creator' */
  LM_TOS_B.BusCreator_o.objectNum_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.objectNum_un8;
  LM_TOS_B.BusCreator_o.available_b =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.available_b;
  LM_TOS_B.BusCreator_o.lane_dwidth_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.lane_dwidth_f;
  LM_TOS_B.BusCreator_o.front_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.front_lane_length_f;
  LM_TOS_B.BusCreator_o.rear_lane_length_f =
    LM_TOS_B.LM_TOS_ALGORISM_o2.lane_4.rear_lane_length_f;

  /* Concatenate: '<S3>/Vector Concatenate' */
  rty_LANE_MODEL_OUTPUT_ST->LANES_ST[0] = LM_TOS_B.BusCreator;
  rty_LANE_MODEL_OUTPUT_ST->LANES_ST[1] = LM_TOS_B.BusCreator_m;
  rty_LANE_MODEL_OUTPUT_ST->LANES_ST[2] = LM_TOS_B.BusCreator_p;
  rty_LANE_MODEL_OUTPUT_ST->LANES_ST[3] = LM_TOS_B.BusCreator_g;
  rty_LANE_MODEL_OUTPUT_ST->LANES_ST[4] = LM_TOS_B.BusCreator_o;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_LANE_MODEL_OUTPUT_ST_at_inport_0' */
  rty_LANE_MODEL_OUTPUT_ST->egoLaneID_un8 = LM_TOS_B.LM_TOS_ALGORISM_o1;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_hmi_display_info_st_at_inport_0' */
  rty_hmi_display_info_st->count_obj = LM_TOS_B.LM_TOS_ALGORISM_o6;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_eyb[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_eyb[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_eyb[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_eyb[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_eyb[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ep[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ep[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ep[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ep[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S16>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ep[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_dtt[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_dtt[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_dtt[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_dtt[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S19>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_dtt[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_l4[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_l4[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_l4[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_l4[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S20>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_l4[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_k1p[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_k1p[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_k1p[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_k1p[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S21>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_k1p[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_il[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_il[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_il[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_il[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S22>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_il[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_jq[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_jq[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_jq[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_jq[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S23>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_jq[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ha[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ha[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ha[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ha[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S24>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ha[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nb[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nb[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nb[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nb[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S25>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nb[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_o0[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_o0[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_o0[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_o0[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S26>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_o0[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_ny[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_ny[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_ny[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_ny[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S17>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_ny[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f_4;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn1' */
  LM_TOS_B.VectorConcatenate_nyx[0] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_0;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn2' */
  LM_TOS_B.VectorConcatenate_nyx[1] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_1;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn3' */
  LM_TOS_B.VectorConcatenate_nyx[2] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_2;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn4' */
  LM_TOS_B.VectorConcatenate_nyx[3] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_3;

  /* SignalConversion: '<S18>/ConcatBufferAtVector ConcatenateIn5' */
  LM_TOS_B.VectorConcatenate_nyx[4] =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f_4;

  /* BusCreator: '<S15>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_eyb[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S15>/Bus Creator1' */

  /* BusCreator: '<S16>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_ep[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S16>/Bus Creator1' */

  /* BusCreator: '<S19>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_dtt[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S19>/Bus Creator1' */

  /* BusCreator: '<S20>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_l4[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->L_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.L_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S20>/Bus Creator1' */

  /* BusCreator: '<S21>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_k1p[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_0_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S21>/Bus Creator1' */

  /* BusCreator: '<S22>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_il[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_1_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S22>/Bus Creator1' */

  /* BusCreator: '<S23>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_jq[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_2_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S23>/Bus Creator1' */

  /* BusCreator: '<S24>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.probWithinLane_arr_f[i] =
      LM_TOS_B.VectorConcatenate_ha[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->EGOLANE_TAROBJ_3_ST.trackingTimeWithinLane_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.EGOLANE_TAROBJ_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S24>/Bus Creator1' */

  /* BusCreator: '<S25>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_nb[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_0_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S25>/Bus Creator1' */

  /* BusCreator: '<S26>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_o0[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_1_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S26>/Bus Creator1' */

  /* BusCreator: '<S17>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_ny[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_2_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S17>/Bus Creator1' */

  /* BusCreator: '<S18>/Bus Creator1' */
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.dis2EgoLaneCenter;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.TTC_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.TTC_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.ID_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.ID_un8;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.Index_un8 =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.Index_un8;
  for (i = 0; i < 5; i++) {
    rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.probWithinLane_arr_f[i]
      = LM_TOS_B.VectorConcatenate_nyx[i];
  }

  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probCutIn_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.probCutOut_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.overlap_f =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.overlap_f;
  rty_HWA_TAR_OBJ_OUTPUT_ST->R_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f
    =
    LM_TOS_B.LM_TOS_ALGORISM_o5.R_NEIGHBORLANE_TAROBJ_3_ST.trackingTimeWithinLane_f;

  /* End of BusCreator: '<S18>/Bus Creator1' */
}

/* Model initialize function */
void LM_TOS_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_LM_TOS_T *const LM_TOS_M = &(LM_TOS_MdlrefDW.rtm);

  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(LM_TOS_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &LM_TOS_B), 0,
                sizeof(B_LM_TOS_c_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    LM_TOS_rti_init_trc_pointers();
    RTI_INIT_CODE_ENV();
  }
}
