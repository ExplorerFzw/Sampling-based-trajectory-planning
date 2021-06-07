/*
 * Code generation for system model 'ZOP_Main'
 *
 * Model                      : ZOP_Main
 * Model version              : 1.349
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Mar 10 09:27:21 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "ZOP_Main_trc_ptr.h"
#include "rti_initref_cpp.h"
#include "ZOP_Main.h"
#include "ZOP_Main_private.h"
#include "rt_roundd_snf.h"
#include "rt_roundf_snf.h"

/* Named constants for Chart: '<S2>/Chart' */
#define ZOP_Main_IN_NO_ACTIVE_CHILD    ((uint8_T)0U)
#define ZOP_Main_IN_Off                ((uint8_T)1U)
#define ZOP_Main_IN_On                 ((uint8_T)2U)
#define ZOP_Main_IN_init               ((uint8_T)3U)

/* Named constants for Chart: '<S4>/LaneStateProcess' */
#define ZOP_Main_IN_CHANGING           ((uint8_T)1U)
#define ZOP_Main_IN_INIT               ((uint8_T)2U)
#define ZOP_Main_IN_STABLE             ((uint8_T)3U)

/* Named constants for Chart: '<S4>/TargetCheck' */
#define ZOP_Main_IN_DEFAULT            ((uint8_T)1U)

/* Named constants for Chart: '<S4>/ZOP_State_Machine' */
#define ZOP_Main_IN_ENABLE             ((uint8_T)1U)
#define ZOP_Main_IN_ERROR              ((uint8_T)2U)
#define ZOP_Main_IN_FINISH             ((uint8_T)3U)
#define ZOP_Main_IN_HOLD               ((uint8_T)1U)
#define ZOP_Main_IN_LANE_CHANGE        ((uint8_T)2U)
#define ZOP_Main_IN_OFF                ((uint8_T)4U)
#define ZOP_Main_IN_OVERIDE            ((uint8_T)3U)
#define ZOP_Main_IN_PASSIVE            ((uint8_T)5U)
#define ZOP_Main_IN_READY              ((uint8_T)6U)

P_ZOP_Main_T ZOP_Main_P_g = {
  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S1>/Out1'
   */
  {
    0U,                                /* state */
    0U,                                /* ready */
    0U,                                /* active */
    0U,                                /* overide */
    0U,                                /* cancle */
    0U,                                /* error */
    0U,                                /* lc_finish */
    0U,                                /* lc_fail */
    0.0F                               /* lc_dist */
  },

  /* Computed Parameter: ZOP2HMI_Y0
   * Referenced by: '<S4>/ZOP2HMI'
   */
  {
    0,                                 /* LCDir */
    0,                                 /* LCRes */
    0,                                 /* LCTip */
    0,                                 /* LCFailTip */
    0,                                 /* LCReqTip */
    0,                                 /* LCProp */
    0                                  /* LCPropRes */
  },

  /* Computed Parameter: v_des_Y0
   * Referenced by: '<S2>/v_des'
   */
  0.0,

  /* Computed Parameter: a_des_Y0
   * Referenced by: '<S2>/a_des'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/C_Tmp1'
   */
  0.0,

  /* Expression: 15
   * Referenced by: '<S2>/C_Tmp3'
   */
  15.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/C_Tmp2'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S16>/C'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S16>/Constant9'
   */
  3.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Gain3'
   */
  0.5,

  /* Expression: 1.5
   * Referenced by: '<S16>/Constant10'
   */
  1.5,

  /* Expression: 200
   * Referenced by: '<S16>/Constant1'
   */
  200.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Switch1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S16>/Constant7'
   */
  1.0,

  /* Expression: 0.9
   * Referenced by: '<S16>/CK1'
   */
  0.9,

  /* Expression: 0.8
   * Referenced by: '<S16>/CK2'
   */
  0.8,

  /* Expression: 0
   * Referenced by: '<S16>/Constant2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Switch2'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S16>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S16>/Constant36'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S16>/Switch4'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S16>/Gain1'
   */
  0.5,

  /* Expression: 0.8
   * Referenced by: '<S16>/CK3'
   */
  0.8,

  /* Expression: 0.7
   * Referenced by: '<S16>/CK4'
   */
  0.7,

  /* Expression: 4
   * Referenced by: '<S16>/C2'
   */
  4.0,

  /* Expression: 0.6
   * Referenced by: '<S16>/CK5'
   */
  0.6,

  /* Expression: 7
   * Referenced by: '<S16>/C1'
   */
  7.0,

  /* Expression: 0
   * Referenced by: '<S15>/C'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S15>/Constant9'
   */
  3.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Gain3'
   */
  0.5,

  /* Expression: 1.5
   * Referenced by: '<S15>/Constant10'
   */
  1.5,

  /* Expression: 200
   * Referenced by: '<S15>/Constant1'
   */
  200.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Switch1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S15>/Constant7'
   */
  1.0,

  /* Expression: 0.9
   * Referenced by: '<S15>/CF1'
   */
  0.9,

  /* Expression: 0.8
   * Referenced by: '<S15>/CF2'
   */
  0.8,

  /* Expression: 0
   * Referenced by: '<S15>/Constant2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Switch2'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S15>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant36'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S15>/Switch4'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/Gain1'
   */
  0.5,

  /* Expression: 0.8
   * Referenced by: '<S15>/CF3'
   */
  0.8,

  /* Expression: 0.7
   * Referenced by: '<S15>/CF4'
   */
  0.7,

  /* Expression: 4
   * Referenced by: '<S15>/C2'
   */
  4.0,

  /* Expression: 0.6
   * Referenced by: '<S15>/CF5'
   */
  0.6,

  /* Expression: 7
   * Referenced by: '<S15>/C1'
   */
  7.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp7'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/C_Tmp2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp6'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S4>/C_Tmp9'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S4>/C_Tmp10'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S4>/C_Tmp12'
   */
  2.0,

  /* Expression: 1
   * Referenced by: '<S4>/C_Tmp11'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/C_Tmp1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/ZOPACT3'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT1'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<Root>/ZOPACT'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/ZOPACT7'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT6'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/ZOPNACT1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT4'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<Root>/ZOPACT8'
   */
  100.0,

  /* Expression: 1/3.6
   * Referenced by: '<Root>/Gain'
   */
  0.27777777777777779,

  /* Expression: 1000
   * Referenced by: '<Root>/C_Tmp2'
   */
  1000.0,

  /* Expression: -100
   * Referenced by: '<Root>/C_Tmp1'
   */
  -100.0,

  /* Expression: 3.5
   * Referenced by: '<Root>/LCDist'
   */
  3.5,

  /* Expression: 0.5
   * Referenced by: '<Root>/ZOPACT9'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/ZOPACT5'
   */
  0.0,

  /* Computed Parameter: case_num_Y0
   * Referenced by: '<S2>/case_num'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S2>/Switch'
   */
  0.5F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S16>/Saturation'
   */
  100.0F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S16>/Saturation'
   */
  0.1F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S16>/Gain2'
   */
  -1.0F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S16>/Gain4'
   */
  -1.0F,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S16>/Saturation1'
   */
  100.0F,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S16>/Saturation1'
   */
  0.1F,

  /* Computed Parameter: Saturation_UpperSat_n
   * Referenced by: '<S15>/Saturation'
   */
  100.0F,

  /* Computed Parameter: Saturation_LowerSat_i
   * Referenced by: '<S15>/Saturation'
   */
  0.1F,

  /* Computed Parameter: Saturation1_UpperSat_o
   * Referenced by: '<S15>/Saturation1'
   */
  100.0F,

  /* Computed Parameter: Saturation1_LowerSat_j
   * Referenced by: '<S15>/Saturation1'
   */
  0.1F,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S4>/Unit Delay4'
   */
  0.0F,

  /* Computed Parameter: UnitDelay4_InitialCondition_m
   * Referenced by: '<S1>/Unit Delay4'
   */
  0.0F,

  /* Computed Parameter: Switch4_Threshold_m
   * Referenced by: '<Root>/Switch4'
   */
  0.5F,

  /* Computed Parameter: Switch5_Threshold
   * Referenced by: '<Root>/Switch5'
   */
  0.5F,

  /* Computed Parameter: Switch7_Threshold
   * Referenced by: '<Root>/Switch7'
   */
  0.5F,

  /* Computed Parameter: Switch6_Threshold
   * Referenced by: '<Root>/Switch6'
   */
  0.5F,

  /* Computed Parameter: LC_Cmd_Y0
   * Referenced by: '<S4>/LC_Cmd'
   */
  0,

  /* Computed Parameter: TargetExist_Y0
   * Referenced by: '<S16>/TargetExist'
   */
  0,

  /* Computed Parameter: TargetExist2_Y0
   * Referenced by: '<S16>/TargetExist2'
   */
  0,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S16>/Unit Delay1'
   */
  0,

  /* Computed Parameter: TargetExist_Y0_m
   * Referenced by: '<S15>/TargetExist'
   */
  0,

  /* Computed Parameter: TargetExist2_Y0_c
   * Referenced by: '<S15>/TargetExist2'
   */
  0,

  /* Computed Parameter: UnitDelay1_InitialCondition_j
   * Referenced by: '<S15>/Unit Delay1'
   */
  0,

  /* Computed Parameter: ZOP_Enable_Y0
   * Referenced by: '<S4>/ZOP_Enable'
   */
  0,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<S4>/Unit Delay2'
   */
  0,

  /* Computed Parameter: UnitDelay2_InitialCondition_j
   * Referenced by: '<Root>/Unit Delay2'
   */
  0,

  /* Computed Parameter: UnitDelay1_InitialCondition_b
   * Referenced by: '<S4>/Unit Delay1'
   */
  0,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S4>/Unit Delay3'
   */
  0,

  /* Computed Parameter: UnitDelay5_InitialCondition
   * Referenced by: '<S4>/Unit Delay5'
   */
  0,

  /* Computed Parameter: UnitDelay3_InitialCondition_m
   * Referenced by: '<Root>/Unit Delay3'
   */
  0,

  /* Computed Parameter: Gain_Gain_k
   * Referenced by: '<S4>/Gain'
   */
  -128
};

MdlrefDW_ZOP_Main_T ZOP_Main_MdlrefDW;

/* Block signals (default storage) */
B_ZOP_Main_c_T ZOP_Main_B;

/* Block states (default storage) */
DW_ZOP_Main_f_T ZOP_Main_DW;

/* Forward declaration for local functions */
static int8_T ZOP_Main_GetTarget(const VSI_VEHSTATE_ST VehStatus, const
  FUS_OBJ_DATA_ST FusionObj_objects[40], uint8_T RoadModel_TS_L_NEIGHBORLANE_TAR,
  uint8_T RoadModel_TS_L_NEIGHBORLANE_T_0, uint8_T
  RoadModel_TS_L_NEIGHBORLANE_T_1, uint8_T RoadModel_TS_L_NEIGHBORLANE_T_2,
  uint8_T RoadModel_TS_R_NEIGHBORLANE_TAR, uint8_T
  RoadModel_TS_R_NEIGHBORLANE_T_0, uint8_T RoadModel_TS_R_NEIGHBORLANE_T_1,
  uint8_T RoadModel_TS_R_NEIGHBORLANE_T_2, real_T LC_Time, ZOP_Object_ST
  Objects_in[8]);
static real_T ZOP_Main_CheckZopPreCondition(int8_T MapInfo_isInZopZone, uint8_T
  ACC_Status_ready, uint8_T ACC_Status_active, uint8_T LKS_Status_ready, uint8_T
  LKS_Status_active);
static void ZOP_Main_CheckZopLC(int8_T LCCmd, uint8_T LKS_Status_lc_finish,
  uint8_T LKS_Status_lc_fail, real32_T LKS_Status_lc_dist, const ZOP_Object_ST
  TgtObj[8], const ZOP_Var_ST *ZOPVars_in, int8_T *LC_Quit, ZOP_Var_ST *ZOPVars);
static void ZOP_Main_InitHoldState(ZOP_Var_ST *ZOPVars_in);
static void ZOP_Main_CheckZopLCCondition(real32_T VehStatus_vRef, uint32_T
  FusionLane_leftHostLane_type, uint32_T FusionLane_rightHostLane_type, int8_T
  MapInfo_LaneNum, uint16_T MapInfo_MapFlag, int8_T MapInfo_LaneIndex, int8_T
  MapInfo_LocIndex, real32_T MapInfo_Dist2Dest, int8_T MapInfo_LaneStable, const
  ZOP_Object_ST TgtObj[8], uint8_T FObj_id, real32_T FObj_x, real32_T FObj_vx,
  ZOP_Var_ST *ZOPVars_in, int8_T *lc_cmd, int8_T *lc_pro, int8_T *ZOP_Finish);
static void ZOP_Main_InitLCState(ZOP_Var_ST *ZOPVars_in);

/* Function for Chart: '<S4>/TargetCheck' */
static int8_T ZOP_Main_GetTarget(const VSI_VEHSTATE_ST VehStatus, const
  FUS_OBJ_DATA_ST FusionObj_objects[40], uint8_T RoadModel_TS_L_NEIGHBORLANE_TAR,
  uint8_T RoadModel_TS_L_NEIGHBORLANE_T_0, uint8_T
  RoadModel_TS_L_NEIGHBORLANE_T_1, uint8_T RoadModel_TS_L_NEIGHBORLANE_T_2,
  uint8_T RoadModel_TS_R_NEIGHBORLANE_TAR, uint8_T
  RoadModel_TS_R_NEIGHBORLANE_T_0, uint8_T RoadModel_TS_R_NEIGHBORLANE_T_1,
  uint8_T RoadModel_TS_R_NEIGHBORLANE_T_2, real_T LC_Time, ZOP_Object_ST
  Objects_in[8])
{
  int8_T ObjNum;
  uint8_T ids[8];
  int32_T i;
  int32_T j;
  int32_T tmp;
  boolean_T exitg1;
  ObjNum = 0;
  ids[0] = RoadModel_TS_L_NEIGHBORLANE_TAR;
  ids[1] = RoadModel_TS_L_NEIGHBORLANE_T_0;
  ids[2] = RoadModel_TS_L_NEIGHBORLANE_T_1;
  ids[3] = RoadModel_TS_L_NEIGHBORLANE_T_2;
  ids[4] = RoadModel_TS_R_NEIGHBORLANE_TAR;
  ids[5] = RoadModel_TS_R_NEIGHBORLANE_T_0;
  ids[6] = RoadModel_TS_R_NEIGHBORLANE_T_1;
  ids[7] = RoadModel_TS_R_NEIGHBORLANE_T_2;
  for (i = 0; i < 8; i++) {
    Objects_in[i].id = 0U;
    Objects_in[i].exist[0] = 0;
    Objects_in[i].exist[1] = 0;
    Objects_in[i].x = 0.0F;
    Objects_in[i].y = 0.0F;
    Objects_in[i].vx = 0.0F;
    Objects_in[i].vy = 0.0F;
    Objects_in[i].ax = 0.0F;
    Objects_in[i].ay = 0.0F;
    Objects_in[i].dir = 0;
    Objects_in[i].dir_f = 0;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j < 40)) {
      if (FusionObj_objects[j].obj_property.id == ids[i]) {
        if (FusionObj_objects[j].obj_information.valid != 1) {
          exitg1 = true;
        } else {
          Objects_in[i].id = FusionObj_objects[j].obj_property.id;
          Objects_in[i].x = FusionObj_objects[j].obj_estimate.longPosition;
          Objects_in[i].y = FusionObj_objects[j].obj_estimate.latPosition;
          Objects_in[i].vx = FusionObj_objects[j].
            obj_estimate.longRelativeVelocity;
          Objects_in[i].vy = FusionObj_objects[j].
            obj_estimate.latRelativeVelocity;
          Objects_in[i].ax = FusionObj_objects[j].
            obj_estimate.longRelativeAcceleration;
          Objects_in[i].ay = FusionObj_objects[j].
            obj_estimate.latRelativeAcceleration;
          if (Objects_in[i].y < 0.0F) {
            Objects_in[i].dir = 1;
          } else {
            Objects_in[i].dir = -1;
          }

          if (Objects_in[i].x >= 0.0F) {
            Objects_in[i].dir_f = 1;
            ZOP_Main_B.LC_Time_n = LC_Time;
            ZOP_Main_B.VehStatus_e = VehStatus;
            ZOP_Main_B.Object_k = Objects_in[i];
            if ((ZOP_Main_P_g.Constant9_Value_i < ZOP_Main_B.LC_Time_n) ||
                rtIsNaN(ZOP_Main_B.LC_Time_n)) {
              ZOP_Main_B.MinMax = ZOP_Main_P_g.Constant9_Value_i;
            } else {
              ZOP_Main_B.MinMax = ZOP_Main_B.LC_Time_n;
            }

            ZOP_Main_B.Divide2 = ZOP_Main_B.Object_k.vy * ZOP_Main_B.MinMax;
            ZOP_Main_B.Add7 = ZOP_Main_B.Object_k.y + ZOP_Main_B.Divide2;
            ZOP_Main_B.Abs5 = fabs(ZOP_Main_B.Add7);
            ZOP_Main_B.Gain3 = ZOP_Main_P_g.Gain3_Gain_o * ZOP_Main_B.LC_Time_n;
            ZOP_Main_B.Add6 = ZOP_Main_B.Gain3 + ZOP_Main_P_g.Constant10_Value_e;
            ZOP_Main_B.RelationalOperator8 = (ZOP_Main_B.Abs5 > ZOP_Main_B.Add6);
            ZOP_Main_B.Abs4 = (real32_T)fabs(ZOP_Main_B.Object_k.y);
            ZOP_Main_B.RelationalOperator5_j = (ZOP_Main_B.Add6 <
              ZOP_Main_B.Abs4);
            ZOP_Main_B.LogicalOperator6 = (ZOP_Main_B.RelationalOperator8 &&
              ZOP_Main_B.RelationalOperator5_j);
            if (ZOP_Main_B.LogicalOperator6) {
              ZOP_Main_B.Switch3_b = ZOP_Main_P_g.C_Value_d;
            } else {
              ZOP_Main_B.Switch3_b = ZOP_Main_B.Object_k.id;
            }

            if (ZOP_Main_B.Switch3_b > ZOP_Main_P_g.Switch1_Threshold_o) {
              ZOP_Main_B.Switch1_k = ZOP_Main_B.Object_k.x;
            } else {
              ZOP_Main_B.Switch1_k = ZOP_Main_P_g.Constant1_Value_e;
            }

            ZOP_Main_B.Saturation = ZOP_Main_B.VehStatus_e.vRef;
            if (ZOP_Main_B.Saturation > ZOP_Main_P_g.Saturation_UpperSat_n) {
              ZOP_Main_B.Saturation = ZOP_Main_P_g.Saturation_UpperSat_n;
            } else {
              if (ZOP_Main_B.Saturation < ZOP_Main_P_g.Saturation_LowerSat_i) {
                ZOP_Main_B.Saturation = ZOP_Main_P_g.Saturation_LowerSat_i;
              }
            }

            ZOP_Main_B.Divide = ZOP_Main_B.Switch1_k / ZOP_Main_B.Saturation *
              ZOP_Main_P_g.Constant7_Value_h;
            ZOP_Main_B.RelationalOperator3_n = (ZOP_Main_B.Divide <
              ZOP_Main_P_g.CF1_Value);
            if (ZOP_Main_B.Switch3_b > ZOP_Main_P_g.Switch2_Threshold_a) {
              ZOP_Main_B.Switch2_h = ZOP_Main_B.Object_k.vx;
            } else {
              ZOP_Main_B.Switch2_h = ZOP_Main_P_g.Constant2_Value_a;
            }

            ZOP_Main_B.Gain_c = ZOP_Main_P_g.Gain_Gain_f * ZOP_Main_B.LC_Time_n;
            ZOP_Main_B.Product = ZOP_Main_B.Switch2_h * ZOP_Main_B.Gain_c;
            if (ZOP_Main_B.Switch3_b > ZOP_Main_P_g.Switch4_Threshold_f) {
              ZOP_Main_B.Switch4_n = ZOP_Main_B.Object_k.ax;
            } else {
              ZOP_Main_B.Switch4_n = ZOP_Main_P_g.Constant36_Value_j;
            }

            ZOP_Main_B.Gain1 = ZOP_Main_P_g.Gain1_Gain_h * ZOP_Main_B.Switch4_n;
            ZOP_Main_B.Product1 = ZOP_Main_B.Gain_c * ZOP_Main_B.Gain_c *
              ZOP_Main_B.Gain1;
            ZOP_Main_B.Add3 = (ZOP_Main_B.Switch1_k + ZOP_Main_B.Product) +
              ZOP_Main_B.Product1;
            ZOP_Main_B.Saturation1 = ZOP_Main_B.VehStatus_e.vRef;
            if (ZOP_Main_B.Saturation1 > ZOP_Main_P_g.Saturation1_UpperSat_o) {
              ZOP_Main_B.Saturation1 = ZOP_Main_P_g.Saturation1_UpperSat_o;
            } else {
              if (ZOP_Main_B.Saturation1 < ZOP_Main_P_g.Saturation1_LowerSat_j)
              {
                ZOP_Main_B.Saturation1 = ZOP_Main_P_g.Saturation1_LowerSat_j;
              }
            }

            ZOP_Main_B.Divide1 = ZOP_Main_P_g.Constant7_Value_h *
              ZOP_Main_B.Add3 / ZOP_Main_B.Saturation1;
            ZOP_Main_B.RelationalOperator4_f = (ZOP_Main_P_g.CF2_Value >
              ZOP_Main_B.Divide1);
            ZOP_Main_B.LogicalOperator2_d = (ZOP_Main_B.RelationalOperator3_n ||
              ZOP_Main_B.RelationalOperator4_f);
            ZOP_Main_B.RelationalOperator9 = (ZOP_Main_B.Divide <
              ZOP_Main_P_g.CF3_Value);
            ZOP_Main_B.RelationalOperator10 = (ZOP_Main_P_g.CF4_Value >
              ZOP_Main_B.Divide1);
            ZOP_Main_B.LogicalOperator3 = (ZOP_Main_B.RelationalOperator9 ||
              ZOP_Main_B.RelationalOperator10);
            ZOP_Main_B.UnitDelay1_f = ZOP_Main_DW.UnitDelay1_DSTATE_g;
            if (ZOP_Main_B.UnitDelay1_f) {
              ZOP_Main_B.Switch7_k = ZOP_Main_B.LogicalOperator2_d;
            } else {
              ZOP_Main_B.Switch7_k = ZOP_Main_B.LogicalOperator3;
            }

            ZOP_Main_B.Abs = fabs(ZOP_Main_B.Switch1_k);
            ZOP_Main_B.RelationalOperator2_g = (ZOP_Main_B.Abs <
              ZOP_Main_P_g.C2_Value_c);
            ZOP_Main_B.LogicalOperator5 = (ZOP_Main_B.RelationalOperator2_g ||
              ZOP_Main_B.Switch7_k);
            ZOP_Main_B.RelationalOperator11 = (ZOP_Main_P_g.CF5_Value >
              ZOP_Main_B.Divide1);
            ZOP_Main_B.RelationalOperator12 = (ZOP_Main_B.Divide <
              ZOP_Main_P_g.CF5_Value);
            ZOP_Main_B.Abs1 = fabs(ZOP_Main_B.Switch1_k);
            ZOP_Main_B.RelationalOperator1_f = (ZOP_Main_B.Abs1 <
              ZOP_Main_P_g.C1_Value_i);
            ZOP_Main_B.LogicalOperator4 = (ZOP_Main_B.RelationalOperator12 ||
              ZOP_Main_B.RelationalOperator11 ||
              ZOP_Main_B.RelationalOperator1_f);
            ZOP_Main_DW.UnitDelay1_DSTATE_g = ZOP_Main_B.LogicalOperator5;
            Objects_in[i].exist[0] = (int8_T)ZOP_Main_B.LogicalOperator5;
            Objects_in[i].exist[1] = (int8_T)ZOP_Main_B.LogicalOperator4;
          } else {
            Objects_in[i].dir_f = -1;
            ZOP_Main_B.LC_Time = LC_Time;
            ZOP_Main_B.VehStatus = VehStatus;
            ZOP_Main_B.Object = Objects_in[i];
            ZOP_Main_B.Abs2 = (real32_T)fabs(ZOP_Main_B.Object.x);
            if ((ZOP_Main_P_g.Constant9_Value < ZOP_Main_B.LC_Time) || rtIsNaN
                (ZOP_Main_B.LC_Time)) {
              ZOP_Main_B.MinMax_n = ZOP_Main_P_g.Constant9_Value;
            } else {
              ZOP_Main_B.MinMax_n = ZOP_Main_B.LC_Time;
            }

            ZOP_Main_B.Divide2_j = ZOP_Main_B.Object.vy * ZOP_Main_B.MinMax_n;
            ZOP_Main_B.Add7_g = ZOP_Main_B.Object.y + ZOP_Main_B.Divide2_j;
            ZOP_Main_B.Abs5_j = fabs(ZOP_Main_B.Add7_g);
            ZOP_Main_B.Gain3_o = ZOP_Main_P_g.Gain3_Gain * ZOP_Main_B.LC_Time;
            ZOP_Main_B.Add6_c = ZOP_Main_B.Gain3_o +
              ZOP_Main_P_g.Constant10_Value;
            ZOP_Main_B.RelationalOperator8_m = (ZOP_Main_B.Abs5_j >
              ZOP_Main_B.Add6_c);
            ZOP_Main_B.Abs4_d = (real32_T)fabs(ZOP_Main_B.Object.y);
            ZOP_Main_B.RelationalOperator5_m = (ZOP_Main_B.Add6_c <
              ZOP_Main_B.Abs4_d);
            ZOP_Main_B.LogicalOperator6_o = (ZOP_Main_B.RelationalOperator8_m &&
              ZOP_Main_B.RelationalOperator5_m);
            if (ZOP_Main_B.LogicalOperator6_o) {
              ZOP_Main_B.Switch3_j = ZOP_Main_P_g.C_Value;
            } else {
              ZOP_Main_B.Switch3_j = ZOP_Main_B.Object.id;
            }

            if (ZOP_Main_B.Switch3_j > ZOP_Main_P_g.Switch1_Threshold) {
              ZOP_Main_B.Switch1_ko = ZOP_Main_B.Abs2;
            } else {
              ZOP_Main_B.Switch1_ko = ZOP_Main_P_g.Constant1_Value;
            }

            ZOP_Main_B.Saturation_e = ZOP_Main_B.VehStatus.vRef;
            if (ZOP_Main_B.Saturation_e > ZOP_Main_P_g.Saturation_UpperSat) {
              ZOP_Main_B.Saturation_e = ZOP_Main_P_g.Saturation_UpperSat;
            } else {
              if (ZOP_Main_B.Saturation_e < ZOP_Main_P_g.Saturation_LowerSat) {
                ZOP_Main_B.Saturation_e = ZOP_Main_P_g.Saturation_LowerSat;
              }
            }

            ZOP_Main_B.Divide_j = ZOP_Main_B.Switch1_ko /
              ZOP_Main_B.Saturation_e * ZOP_Main_P_g.Constant7_Value;
            ZOP_Main_B.RelationalOperator3_d = (ZOP_Main_B.Divide_j <
              ZOP_Main_P_g.CK1_Value);
            ZOP_Main_B.Gain2 = ZOP_Main_P_g.Gain2_Gain * ZOP_Main_B.Object.vx;
            if (ZOP_Main_B.Switch3_j > ZOP_Main_P_g.Switch2_Threshold) {
              ZOP_Main_B.Switch2_b = ZOP_Main_B.Gain2;
            } else {
              ZOP_Main_B.Switch2_b = ZOP_Main_P_g.Constant2_Value;
            }

            ZOP_Main_B.Gain_j = ZOP_Main_P_g.Gain_Gain * ZOP_Main_B.LC_Time;
            ZOP_Main_B.Product_b = ZOP_Main_B.Switch2_b * ZOP_Main_B.Gain_j;
            ZOP_Main_B.Gain4 = ZOP_Main_P_g.Gain4_Gain * ZOP_Main_B.Object.ax;
            if (ZOP_Main_B.Switch3_j > ZOP_Main_P_g.Switch4_Threshold) {
              ZOP_Main_B.Switch4_h = ZOP_Main_B.Gain4;
            } else {
              ZOP_Main_B.Switch4_h = ZOP_Main_P_g.Constant36_Value;
            }

            ZOP_Main_B.Gain1_o = ZOP_Main_P_g.Gain1_Gain * ZOP_Main_B.Switch4_h;
            ZOP_Main_B.Product1_h = ZOP_Main_B.Gain_j * ZOP_Main_B.Gain_j *
              ZOP_Main_B.Gain1_o;
            ZOP_Main_B.Add3_e = (ZOP_Main_B.Switch1_ko + ZOP_Main_B.Product_b) +
              ZOP_Main_B.Product1_h;
            ZOP_Main_B.Saturation1_k = ZOP_Main_B.VehStatus.vRef;
            if (ZOP_Main_B.Saturation1_k > ZOP_Main_P_g.Saturation1_UpperSat) {
              ZOP_Main_B.Saturation1_k = ZOP_Main_P_g.Saturation1_UpperSat;
            } else {
              if (ZOP_Main_B.Saturation1_k < ZOP_Main_P_g.Saturation1_LowerSat)
              {
                ZOP_Main_B.Saturation1_k = ZOP_Main_P_g.Saturation1_LowerSat;
              }
            }

            ZOP_Main_B.Divide1_o = ZOP_Main_P_g.Constant7_Value *
              ZOP_Main_B.Add3_e / ZOP_Main_B.Saturation1_k;
            ZOP_Main_B.RelationalOperator4_l = (ZOP_Main_P_g.CK2_Value >
              ZOP_Main_B.Divide1_o);
            ZOP_Main_B.LogicalOperator2_m = (ZOP_Main_B.RelationalOperator3_d ||
              ZOP_Main_B.RelationalOperator4_l);
            ZOP_Main_B.RelationalOperator9_l = (ZOP_Main_B.Divide_j <
              ZOP_Main_P_g.CK3_Value);
            ZOP_Main_B.RelationalOperator10_a = (ZOP_Main_P_g.CK4_Value >
              ZOP_Main_B.Divide1_o);
            ZOP_Main_B.LogicalOperator3_n = (ZOP_Main_B.RelationalOperator9_l ||
              ZOP_Main_B.RelationalOperator10_a);
            ZOP_Main_B.UnitDelay1_g = ZOP_Main_DW.UnitDelay1_DSTATE_o;
            if (ZOP_Main_B.UnitDelay1_g) {
              ZOP_Main_B.Switch7_a = ZOP_Main_B.LogicalOperator2_m;
            } else {
              ZOP_Main_B.Switch7_a = ZOP_Main_B.LogicalOperator3_n;
            }

            ZOP_Main_B.Abs_f = fabs(ZOP_Main_B.Switch1_ko);
            ZOP_Main_B.RelationalOperator2_f = (ZOP_Main_B.Abs_f <
              ZOP_Main_P_g.C2_Value);
            ZOP_Main_B.LogicalOperator5_m = (ZOP_Main_B.RelationalOperator2_f ||
              ZOP_Main_B.Switch7_a);
            ZOP_Main_B.RelationalOperator11_p = (ZOP_Main_P_g.CK5_Value >
              ZOP_Main_B.Divide1_o);
            ZOP_Main_B.RelationalOperator12_n = (ZOP_Main_B.Divide_j <
              ZOP_Main_P_g.CK5_Value);
            ZOP_Main_B.Abs1_e = fabs(ZOP_Main_B.Switch1_ko);
            ZOP_Main_B.RelationalOperator1_p = (ZOP_Main_B.Abs1_e <
              ZOP_Main_P_g.C1_Value);
            ZOP_Main_B.LogicalOperator4_j = (ZOP_Main_B.RelationalOperator12_n ||
              ZOP_Main_B.RelationalOperator11_p ||
              ZOP_Main_B.RelationalOperator1_p);
            ZOP_Main_DW.UnitDelay1_DSTATE_o = ZOP_Main_B.LogicalOperator5_m;
            Objects_in[i].exist[0] = (int8_T)ZOP_Main_B.LogicalOperator5_m;
            Objects_in[i].exist[1] = (int8_T)ZOP_Main_B.LogicalOperator4_j;
          }

          tmp = ObjNum + 1;
          if (tmp > 127) {
            tmp = 127;
          }

          ObjNum = (int8_T)tmp;
          j++;
        }
      } else {
        j++;
      }
    }
  }

  return ObjNum;
}

/* Function for Chart: '<S4>/ZOP_State_Machine' */
static real_T ZOP_Main_CheckZopPreCondition(int8_T MapInfo_isInZopZone, uint8_T
  ACC_Status_ready, uint8_T ACC_Status_active, uint8_T LKS_Status_ready, uint8_T
  LKS_Status_active)
{
  real_T zop_ready;
  zop_ready = 0.0;
  if ((MapInfo_isInZopZone == 1) && ((ACC_Status_ready != 0) ||
       (ACC_Status_active != 0)) && ((LKS_Status_ready != 0) ||
       (LKS_Status_active != 0))) {
    zop_ready = 1.0;
  }

  return zop_ready;
}

/* Function for Chart: '<S4>/ZOP_State_Machine' */
static void ZOP_Main_CheckZopLC(int8_T LCCmd, uint8_T LKS_Status_lc_finish,
  uint8_T LKS_Status_lc_fail, real32_T LKS_Status_lc_dist, const ZOP_Object_ST
  TgtObj[8], const ZOP_Var_ST *ZOPVars_in, int8_T *LC_Quit, ZOP_Var_ST *ZOPVars)
{
  int32_T i;
  int8_T varargin_1;
  ZOP_Object_ST TgtObj_0;
  uint32_T q0;
  uint32_T qY;
  *ZOPVars = *ZOPVars_in;
  ZOPVars->LCResult = 0;
  ZOPVars->LSafeRaw = 1;
  ZOPVars->RSafeRaw = 1;
  for (i = 0; i < 8; i++) {
    TgtObj_0 = TgtObj[i];
    if ((TgtObj_0.dir == -1) && ((TgtObj_0.exist[0] == 1) || (TgtObj_0.exist[1] ==
          1))) {
      ZOPVars->LSafeRaw = 0;
    } else {
      if ((TgtObj_0.dir == 1) && ((TgtObj_0.exist[0] == 1) || (TgtObj_0.exist[1]
            == 1))) {
        ZOPVars->RSafeRaw = 0;
      }
    }
  }

  if (ZOPVars->LSafeRaw == 1) {
    i = ZOPVars_in->LSafeCnt + 1;
    if (i > 127) {
      i = 127;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 >= rtP_k_ZOP_ALC_SCnt_LC) {
      varargin_1 = rtP_k_ZOP_ALC_SCnt_LC;
    }

    ZOPVars->LSafeCnt = varargin_1;
    i = ZOPVars_in->LSafeNCnt - 1;
    if (i < -128) {
      i = -128;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 < 0) {
      varargin_1 = 0;
    }

    ZOPVars->LSafeNCnt = varargin_1;
  } else {
    i = ZOPVars_in->LSafeCnt - 1;
    if (i < -128) {
      i = -128;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 < 0) {
      varargin_1 = 0;
    }

    ZOPVars->LSafeCnt = varargin_1;
    i = ZOPVars_in->LSafeNCnt + 1;
    if (i > 127) {
      i = 127;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 >= rtP_k_ZOP_ALC_SNCnt_LC) {
      varargin_1 = rtP_k_ZOP_ALC_SNCnt_LC;
    }

    ZOPVars->LSafeNCnt = varargin_1;
  }

  if (ZOPVars->RSafeRaw == 1) {
    i = ZOPVars_in->RSafeCnt + 1;
    if (i > 127) {
      i = 127;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 >= rtP_k_ZOP_ALC_SCnt_LC) {
      varargin_1 = rtP_k_ZOP_ALC_SCnt_LC;
    }

    ZOPVars->RSafeCnt = varargin_1;
    i = ZOPVars_in->RSafeNCnt - 1;
    if (i < -128) {
      i = -128;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 < 0) {
      varargin_1 = 0;
    }

    ZOPVars->RSafeNCnt = varargin_1;
  } else {
    i = ZOPVars_in->RSafeCnt - 1;
    if (i < -128) {
      i = -128;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 < 0) {
      varargin_1 = 0;
    }

    ZOPVars->RSafeCnt = varargin_1;
    i = ZOPVars_in->RSafeNCnt + 1;
    if (i > 127) {
      i = 127;
    }

    varargin_1 = (int8_T)i;
    if (varargin_1 >= rtP_k_ZOP_ALC_SNCnt_LC) {
      varargin_1 = rtP_k_ZOP_ALC_SNCnt_LC;
    }

    ZOPVars->RSafeNCnt = varargin_1;
  }

  if (LKS_Status_lc_fail != 0) {
    ZOPVars->LCResult = -1;
    ZOPVars->LCFailTip = 4;
  } else if (LKS_Status_lc_finish != 0) {
    ZOPVars->LCResult = 1;
  } else if (rt_roundd_snf((real_T)ZOPVars_in->lcTimeCnt * 0.1) >
             rtP_k_ZOP_LCTimeMax) {
    ZOPVars->LCResult = -1;
  } else if (LCCmd == -1) {
    if ((ZOPVars->LSafeNCnt >= rtP_k_ZOP_ALC_SCnt_Thr_LC) && (ZOPVars->LSafeCnt <=
         5) && (ZOPVars->LSafeRaw == 0)) {
      ZOPVars->LCResult = -1;
      ZOPVars->LCFailTip = 1;
    }
  } else {
    if ((LCCmd == 1) && (ZOPVars->RSafeNCnt >= rtP_k_ZOP_ALC_SCnt_Thr_LC) &&
        (ZOPVars->RSafeCnt <= 5) && (ZOPVars->RSafeRaw == 0)) {
      ZOPVars->LCResult = -1;
      ZOPVars->LCFailTip = 1;
    }
  }

  q0 = ZOPVars_in->lcTimeCnt;
  qY = q0 + 1U;
  if (qY < q0) {
    qY = MAX_uint32_T;
  }

  ZOPVars->lcTimeCnt = qY;
  ZOPVars->LCDist = LKS_Status_lc_dist;
  if ((LKS_Status_lc_dist > 0.0F) && (LKS_Status_lc_dist < 3.5F)) {
    ZOPVars->LCTime = 8.0F * LKS_Status_lc_dist / 3.5F;
  } else {
    ZOPVars->LCTime = 8.0F;
  }

  if (ZOPVars->LCResult != 0) {
    if (ZOPVars->LCResult < 0) {
      ZOPVars->LCTip = 7U;
    }

    *LC_Quit = 1;
  } else {
    *LC_Quit = 0;
  }
}

/* Function for Chart: '<S4>/ZOP_State_Machine' */
static void ZOP_Main_InitHoldState(ZOP_Var_ST *ZOPVars_in)
{
  ZOPVars_in->LCRes = 0U;
  ZOPVars_in->LCTip = 0U;
  ZOPVars_in->LCNRes = 0U;
  ZOPVars_in->DesLane = 0;
  ZOPVars_in->LCDir = 0;
  ZOPVars_in->holdTimeCnt = 0U;
  ZOPVars_in->lcTimeCnt = 0U;
  ZOPVars_in->lcProTimeCnt = 0U;
  ZOPVars_in->lcDirCnt = 0U;
  ZOPVars_in->Safe = 0;
  ZOPVars_in->LSafeRaw = 0;
  ZOPVars_in->LSafeCnt = 0;
  ZOPVars_in->LSafeNCnt = 0;
  ZOPVars_in->RSafeRaw = 0;
  ZOPVars_in->RSafeCnt = 0;
  ZOPVars_in->RSafeNCnt = 0;
  ZOPVars_in->FinishState = 0;
  ZOPVars_in->LCFailTip = 0;
  ZOPVars_in->SpdTimeCnt[0] = 0U;
  ZOPVars_in->SpdTmp[0] = 27.7777786F;
  ZOPVars_in->Spd[0] = 0.0F;
  ZOPVars_in->SpdTimeCnt[1] = 0U;
  ZOPVars_in->SpdTmp[1] = 27.7777786F;
  ZOPVars_in->Spd[1] = 0.0F;
  ZOPVars_in->SpdTimeCnt[2] = 0U;
  ZOPVars_in->SpdTmp[2] = 27.7777786F;
  ZOPVars_in->Spd[2] = 0.0F;
  ZOPVars_in->MapFlagDir = 0;
}

/* Function for Chart: '<S4>/ZOP_State_Machine' */
static void ZOP_Main_CheckZopLCCondition(real32_T VehStatus_vRef, uint32_T
  FusionLane_leftHostLane_type, uint32_T FusionLane_rightHostLane_type, int8_T
  MapInfo_LaneNum, uint16_T MapInfo_MapFlag, int8_T MapInfo_LaneIndex, int8_T
  MapInfo_LocIndex, real32_T MapInfo_Dist2Dest, int8_T MapInfo_LaneStable, const
  ZOP_Object_ST TgtObj[8], uint8_T FObj_id, real32_T FObj_x, real32_T FObj_vx,
  ZOP_Var_ST *ZOPVars_in, int8_T *lc_cmd, int8_T *lc_pro, int8_T *ZOP_Finish)
{
  real32_T ZOP_HoldCnt;
  int32_T i;
  int8_T minval;
  ZOP_Object_ST TgtObj_0;
  uint32_T q0;
  uint32_T qY;
  real32_T u1;
  ZOPVars_in->LCRes = 0U;
  ZOPVars_in->LCNRes = 0U;
  ZOPVars_in->DesLane = 0;
  ZOPVars_in->LCDir = 0;
  ZOPVars_in->LCTime = 8.0F;
  ZOPVars_in->LCCmd = 0;
  *lc_cmd = 0;
  *lc_pro = 0;
  ZOPVars_in->MapFlagDir = 0;
  ZOPVars_in->LnHi = MapInfo_LaneNum;
  ZOPVars_in->LnLo = 1;
  if (MapInfo_Dist2Dest > 3000.0F) {
    minval = (int8_T)((int32_T)rt_roundd_snf((real_T)MapInfo_LaneNum / 2.0) + 1);
    if (2 <= minval) {
      minval = 2;
    }

    if (MapInfo_LaneNum < minval) {
      minval = MapInfo_LaneNum;
    }

    ZOPVars_in->LnLo = minval;
    if (MapInfo_Dist2Dest > 4000.0F) {
      minval = (int8_T)((int32_T)rt_roundd_snf((real_T)MapInfo_LaneNum / 2.0) +
                        1);
      if (MapInfo_LaneNum < minval) {
        minval = MapInfo_LaneNum;
      }

      ZOPVars_in->LnLo = minval;
    }
  } else if (MapInfo_Dist2Dest > 2500.0F) {
    minval = (int8_T)((int32_T)rt_roundd_snf((real_T)MapInfo_LaneNum / 2.0) + 1);
    if (MapInfo_LaneNum < minval) {
      minval = MapInfo_LaneNum;
    }

    ZOPVars_in->LnHi = minval;
  } else {
    if (2 > MapInfo_LaneNum) {
      minval = MapInfo_LaneNum;
    } else {
      minval = 2;
    }

    ZOPVars_in->LnHi = minval;
    if (MapInfo_Dist2Dest < rtP_k_ZOP_ALC_D10) {
      ZOPVars_in->LnHi = 1;
    }
  }

  if (MapInfo_Dist2Dest < 65534.0F) {
    if (MapInfo_LaneIndex < ZOPVars_in->LnLo) {
      ZOPVars_in->LCDir = -1;
      ZOPVars_in->LCRes = 4U;
      ZOPVars_in->LCTip = 5U;
    } else {
      if (MapInfo_LaneIndex > ZOPVars_in->LnHi) {
        ZOPVars_in->LCDir = 1;
        ZOPVars_in->LCRes = 2U;
        ZOPVars_in->LCTip = 3U;
      }
    }
  }

  ZOPVars_in->SpdTmp[0] = 27.7777786F;
  ZOPVars_in->SpdTmp[1] = 27.7777786F;
  ZOPVars_in->SpdTmp[2] = 27.7777786F;
  if ((FObj_id > 0.5) && (FObj_x < rtP_k_ZOP_SpdCkDstThr)) {
    ZOPVars_in->SpdTmp[0] = FObj_vx + VehStatus_vRef;
  }

  for (i = 0; i < 8; i++) {
    TgtObj_0 = TgtObj[i];
    if (TgtObj_0.dir_f > 0) {
      if ((TgtObj_0.dir < 0) && (TgtObj_0.x < rtP_k_ZOP_SpdCkDstThr)) {
        ZOP_HoldCnt = ZOPVars_in->SpdTmp[1];
        u1 = TgtObj_0.vx + VehStatus_vRef;
        if ((ZOP_HoldCnt < u1) || rtIsNaNF(u1)) {
          u1 = ZOP_HoldCnt;
        }

        ZOPVars_in->SpdTmp[1] = u1;
      }

      if ((TgtObj_0.dir > 0) && (TgtObj_0.x < rtP_k_ZOP_SpdCkDstThr)) {
        ZOP_HoldCnt = ZOPVars_in->SpdTmp[2];
        u1 = TgtObj_0.vx + VehStatus_vRef;
        if ((ZOP_HoldCnt < u1) || rtIsNaNF(u1)) {
          u1 = ZOP_HoldCnt;
        }

        ZOPVars_in->SpdTmp[2] = u1;
      }
    }
  }

  ZOPVars_in->Spd[0] = (1.0F - rtP_k_ZOP_ObjSpd_cf) * ZOPVars_in->Spd[0] +
    ZOPVars_in->SpdTmp[0] * rtP_k_ZOP_ObjSpd_cf;
  ZOPVars_in->Spd[1] = (1.0F - rtP_k_ZOP_ObjSpd_cf) * ZOPVars_in->Spd[1] +
    ZOPVars_in->SpdTmp[1] * rtP_k_ZOP_ObjSpd_cf;
  ZOPVars_in->Spd[2] = (1.0F - rtP_k_ZOP_ObjSpd_cf) * ZOPVars_in->Spd[2] +
    ZOPVars_in->SpdTmp[2] * rtP_k_ZOP_ObjSpd_cf;
  if ((rtP_k_ZOP_ALC_SpdEnable > 0.5) && (ZOPVars_in->LCDir == 0)) {
    if (ZOPVars_in->Spd[0] + rtP_k_ZOP_SpdLoThr < ZOPVars_in->Spd[1]) {
      q0 = ZOPVars_in->SpdTimeCnt[0];
      qY = q0 + 1U;
      if (qY < q0) {
        qY = MAX_uint32_T;
      }

      ZOPVars_in->SpdTimeCnt[0] = qY;
    } else {
      ZOPVars_in->SpdTimeCnt[0] = 0U;
    }

    if (ZOPVars_in->Spd[0] + rtP_k_ZOP_SpdLoThr < ZOPVars_in->Spd[2]) {
      q0 = ZOPVars_in->SpdTimeCnt[1];
      qY = q0 + 1U;
      if (qY < q0) {
        qY = MAX_uint32_T;
      }

      ZOPVars_in->SpdTimeCnt[1] = qY;
    } else {
      ZOPVars_in->SpdTimeCnt[1] = 0U;
    }

    if ((real_T)ZOPVars_in->SpdTimeCnt[0] > rtP_k_ZOP_SpdLoTimeThr) {
      i = MapInfo_LaneIndex + 1;
      if (i > 127) {
        i = 127;
      }

      if (i <= ZOPVars_in->LnHi) {
        ZOPVars_in->LCDir = -1;
        ZOPVars_in->LCRes = 1U;
        ZOPVars_in->LCTip = 1U;
      }
    }
  }

  if (rtP_k_ZOP_ALC_Ramp > 0.5F) {
    if (MapInfo_MapFlag == 1) {
      ZOPVars_in->MapFlagDir = -1;
    } else {
      if (MapInfo_MapFlag == 2) {
        ZOPVars_in->MapFlagDir = 1;
      }
    }

    if ((ZOPVars_in->MapFlagDir == -1) || (ZOPVars_in->MapFlagDir == 1)) {
      ZOPVars_in->LCDir = ZOPVars_in->MapFlagDir;
      ZOPVars_in->LCRes = 2U;
      ZOPVars_in->LCTip = 3U;
    }

    ZOPVars_in->MapFlag = MapInfo_MapFlag;
  } else {
    ZOPVars_in->MapFlag = 0U;
  }

  if (((rtP_k_ZOP_ALC_Ramp < 0.5F) || (ZOPVars_in->MapFlagDir == 0)) &&
      (MapInfo_LaneStable != 1)) {
    ZOPVars_in->LCDir = 0;
    ZOPVars_in->LCNRes = 1U;
  }

  if ((ZOPVars_in->LCDir == -1) && (FusionLane_leftHostLane_type != 2U) &&
      (FusionLane_leftHostLane_type != 6U) && (FusionLane_leftHostLane_type !=
       7U)) {
    ZOPVars_in->LCDir = 0;
    q0 = ZOPVars_in->LCNRes + 2U;
    if (q0 > 65535U) {
      q0 = 65535U;
    }

    ZOPVars_in->LCNRes = (uint16_T)q0;
  } else {
    if ((ZOPVars_in->LCDir == 1) && (FusionLane_rightHostLane_type != 2U) &&
        (FusionLane_rightHostLane_type != 5U) && (FusionLane_rightHostLane_type
         != 7U)) {
      ZOPVars_in->LCDir = 0;
      q0 = ZOPVars_in->LCNRes + 2U;
      if (q0 > 65535U) {
        q0 = 65535U;
      }

      ZOPVars_in->LCNRes = (uint16_T)q0;
    }
  }

  ZOPVars_in->Safe = 0;
  ZOPVars_in->LSafeRaw = 1;
  ZOPVars_in->RSafeRaw = 1;
  for (i = 0; i < 8; i++) {
    TgtObj_0 = TgtObj[i];
    if ((TgtObj_0.dir == -1) && ((TgtObj_0.exist[0] == 1) || (TgtObj_0.exist[1] ==
          1))) {
      ZOPVars_in->LSafeRaw = 0;
    } else {
      if ((TgtObj_0.dir == 1) && ((TgtObj_0.exist[0] == 1) || (TgtObj_0.exist[1]
            == 1))) {
        ZOPVars_in->RSafeRaw = 0;
      }
    }
  }

  if (ZOPVars_in->LSafeRaw == 1) {
    i = ZOPVars_in->LSafeCnt + 1;
    if (i > 127) {
      i = 127;
    }

    minval = (int8_T)i;
    if (minval >= rtP_k_ZOP_ALC_SCnt) {
      minval = rtP_k_ZOP_ALC_SCnt;
    }

    ZOPVars_in->LSafeCnt = minval;
    i = ZOPVars_in->LSafeNCnt - 1;
    if (i < -128) {
      i = -128;
    }

    minval = (int8_T)i;
    if (minval < 0) {
      minval = 0;
    }

    ZOPVars_in->LSafeNCnt = minval;
  } else {
    i = ZOPVars_in->LSafeCnt - 1;
    if (i < -128) {
      i = -128;
    }

    minval = (int8_T)i;
    if (minval < 0) {
      minval = 0;
    }

    ZOPVars_in->LSafeCnt = minval;
    i = ZOPVars_in->LSafeNCnt + 1;
    if (i > 127) {
      i = 127;
    }

    minval = (int8_T)i;
    if (minval >= rtP_k_ZOP_ALC_SNCnt) {
      minval = rtP_k_ZOP_ALC_SNCnt;
    }

    ZOPVars_in->LSafeNCnt = minval;
  }

  if (ZOPVars_in->RSafeRaw == 1) {
    i = ZOPVars_in->RSafeCnt + 1;
    if (i > 127) {
      i = 127;
    }

    minval = (int8_T)i;
    if (minval >= rtP_k_ZOP_ALC_SCnt) {
      minval = rtP_k_ZOP_ALC_SCnt;
    }

    ZOPVars_in->RSafeCnt = minval;
    i = ZOPVars_in->RSafeNCnt - 1;
    if (i < -128) {
      i = -128;
    }

    minval = (int8_T)i;
    if (minval < 0) {
      minval = 0;
    }

    ZOPVars_in->RSafeNCnt = minval;
  } else {
    i = ZOPVars_in->RSafeCnt - 1;
    if (i < -128) {
      i = -128;
    }

    minval = (int8_T)i;
    if (minval < 0) {
      minval = 0;
    }

    ZOPVars_in->RSafeCnt = minval;
    i = ZOPVars_in->RSafeNCnt + 1;
    if (i > 127) {
      i = 127;
    }

    minval = (int8_T)i;
    if (minval >= rtP_k_ZOP_ALC_SNCnt) {
      minval = rtP_k_ZOP_ALC_SNCnt;
    }

    ZOPVars_in->RSafeNCnt = minval;
  }

  if (ZOPVars_in->LCDir == -1) {
    if ((ZOPVars_in->LSafeCnt <= rtP_k_ZOP_ALC_SCnt_Thr) ||
        (ZOPVars_in->LSafeNCnt > 3) || (ZOPVars_in->LSafeRaw != 1)) {
      ZOPVars_in->LCDir = 0;
      q0 = ZOPVars_in->LCNRes + 4U;
      if (q0 > 65535U) {
        q0 = 65535U;
      }

      ZOPVars_in->LCNRes = (uint16_T)q0;
    }
  } else {
    if ((ZOPVars_in->LCDir == 1) && ((ZOPVars_in->RSafeCnt <=
          rtP_k_ZOP_ALC_SCnt_Thr) || (ZOPVars_in->RSafeNCnt > 3) ||
         (ZOPVars_in->RSafeRaw != 1))) {
      ZOPVars_in->LCDir = 0;
      q0 = ZOPVars_in->LCNRes + 4U;
      if (q0 > 65535U) {
        q0 = 65535U;
      }

      ZOPVars_in->LCNRes = (uint16_T)q0;
    }
  }

  ZOP_HoldCnt = rtP_k_ZOP_HoldCnt;
  if (rtP_k_ZOP_ALC_Ramp > 0.5F) {
    if (MapInfo_MapFlag != 0) {
      ZOP_HoldCnt = 10.0F;
    } else {
      ZOP_HoldCnt = 30.0F;
    }
  }

  if ((ZOPVars_in->LCDir == 1) || (ZOPVars_in->LCDir == -1)) {
    if ((real_T)ZOPVars_in->holdTimeCnt > ZOP_HoldCnt) {
      ZOPVars_in->LCCmd = ZOPVars_in->LCDir;
      q0 = ZOPVars_in->lcDirCnt;
      qY = q0 + 1U;
      if (qY < q0) {
        qY = MAX_uint32_T;
      }

      ZOPVars_in->lcDirCnt = qY;
    } else {
      ZOPVars_in->LCCmd = 0;
      q0 = ZOPVars_in->LCNRes + 8U;
      if (q0 > 65535U) {
        q0 = 65535U;
      }

      ZOPVars_in->LCNRes = (uint16_T)q0;
    }
  }

  if ((MapInfo_MapFlag != 0) && (rtP_k_ZOP_MapFlag_Enable > 0.5F)) {
    ZOPVars_in->LCCmd = 0;
    q0 = ZOPVars_in->LCNRes + 256U;
    if (q0 > 65535U) {
      q0 = 65535U;
    }

    ZOPVars_in->LCNRes = (uint16_T)q0;
  }

  if ((ZOPVars_in->LCCmd == -1) || (ZOPVars_in->LCCmd == 1)) {
    *lc_pro = ZOPVars_in->LCCmd;
    q0 = ZOPVars_in->lcProTimeCnt;
    qY = q0 + 1U;
    if (qY < q0) {
      qY = MAX_uint32_T;
    }

    ZOPVars_in->lcProTimeCnt = qY;
  } else {
    ZOPVars_in->lcProTimeCnt = 0U;
    ZOPVars_in->LCRes = 0U;
    ZOPVars_in->LCTip = 0U;
  }

  if (((real_T)ZOPVars_in->lcProTimeCnt > rtP_k_ZOP_LCProCnt) ||
      ((rtP_k_ZOP_ALC_Ramp > 0.5F) && (ZOPVars_in->MapFlagDir != 0) && ((real_T)
        ZOPVars_in->lcProTimeCnt > rtP_k_ZOP_LCProCnt / 3.0F))) {
    *lc_cmd = ZOPVars_in->LCCmd;
  }

  if (rtP_k_ZOP_ALC_Enable < 0.5F) {
    *lc_cmd = 0;
    *lc_pro = 0;
    ZOPVars_in->LCRes = 0U;
    ZOPVars_in->LCTip = 0U;
  }

  if (rtP_k_ZOP_ALC_Ramp > 0.5F) {
    if (MapInfo_MapFlag == 128) {
      ZOPVars_in->FinishState = 1;
    }
  } else if (((MapInfo_LocIndex == 1) || (MapInfo_LocIndex == 3)) &&
             (MapInfo_Dist2Dest < 400.0F) && (MapInfo_LaneIndex > 1)) {
    ZOPVars_in->FinishState = 2;
  } else {
    if (((MapInfo_LocIndex == 1) || (MapInfo_LocIndex == 3)) &&
        (MapInfo_Dist2Dest < 300.0F) && (MapInfo_LaneIndex == 1)) {
      ZOPVars_in->FinishState = 1;
    }
  }

  *ZOP_Finish = ZOPVars_in->FinishState;
  q0 = ZOPVars_in->holdTimeCnt;
  qY = q0 + 1U;
  if (qY < q0) {
    qY = MAX_uint32_T;
  }

  ZOPVars_in->holdTimeCnt = qY;
}

/* Function for Chart: '<S4>/ZOP_State_Machine' */
static void ZOP_Main_InitLCState(ZOP_Var_ST *ZOPVars_in)
{
  ZOPVars_in->lcTimeCnt = 0U;
  ZOPVars_in->Safe = 0;
  ZOPVars_in->LSafeRaw = 0;
  ZOPVars_in->LSafeCnt = 0;
  ZOPVars_in->LSafeNCnt = 0;
  ZOPVars_in->RSafeRaw = 0;
  ZOPVars_in->RSafeCnt = 0;
  ZOPVars_in->RSafeNCnt = 0;
  ZOPVars_in->LCFailTip = 0;
}

/* System initialize for referenced model: 'ZOP_Main' */
void ZOP_Main_Init(int8_T *rty_ZOP_Takeover, int8_T *rty_ZOP_Mode, boolean_T
                   *rty_ZOP_Enable, int8_T *rty_ZOP2HMI_LCDir, int8_T
                   *rty_ZOP2HMI_LCRes, int8_T *rty_ZOP2HMI_LCTip, int8_T
                   *rty_ZOP2HMI_LCFailTip, int8_T *rty_ZOP2HMI_LCReqTip, int8_T *
                   rty_ZOP2HMI_LCProp, int8_T *rty_ZOP2HMI_LCPropRes)
{
  ZOP_Object_ST struct_temp;
  int32_T i;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay3' */
  ZOP_Main_DW.UnitDelay3_DSTATE = ZOP_Main_P_g.UnitDelay3_InitialCondition_m;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
  ZOP_Main_DW.UnitDelay2_DSTATE = ZOP_Main_P_g.UnitDelay2_InitialCondition_j;
  ZOP_Main_DW.i = 0;

  /* SystemInitialize for Chart: '<Root>/ZOP_OS' incorporates:
   *  SubSystem: '<Root>/Light_Process'
   */
  /* SystemInitialize for Chart: '<S2>/Chart' */
  ZOP_Main_DW.is_active_c1_ZOP_Main = 0U;
  ZOP_Main_DW.is_c1_ZOP_Main = ZOP_Main_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Outport: '<S2>/v_des' */
  ZOP_Main_B.v_des = ZOP_Main_P_g.v_des_Y0;

  /* SystemInitialize for Outport: '<S2>/a_des' */
  ZOP_Main_B.a_des = ZOP_Main_P_g.a_des_Y0;

  /* SystemInitialize for Outport: '<S2>/case_num' */
  ZOP_Main_B.Switch_m = ZOP_Main_P_g.case_num_Y0;

  /* SystemInitialize for Chart: '<Root>/ZOP_OS' incorporates:
   *  SubSystem: '<Root>/ZOP_Main_OS'
   */
  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
  ZOP_Main_DW.UnitDelay2_DSTATE_n = ZOP_Main_P_g.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
  ZOP_Main_DW.UnitDelay1_DSTATE = ZOP_Main_P_g.UnitDelay1_InitialCondition_b;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay3' */
  ZOP_Main_DW.UnitDelay3_DSTATE_c = ZOP_Main_P_g.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay5' */
  ZOP_Main_DW.UnitDelay5_DSTATE = ZOP_Main_P_g.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay4' */
  ZOP_Main_DW.UnitDelay4_DSTATE_l = ZOP_Main_P_g.UnitDelay4_InitialCondition;

  /* SystemInitialize for Chart: '<S4>/LaneStateProcess' */
  ZOP_Main_DW.is_active_c4_ZOP_Main = 0U;
  ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_NO_ACTIVE_CHILD;
  ZOP_Main_DW.changingCnt = 0;
  ZOP_Main_B.LaneCurPost = 0.0F;
  ZOP_Main_B.LaneStable = 0.0F;
  ZOP_Main_DW.is_active_c5_ZOP_Main = 0U;
  ZOP_Main_DW.is_c5_ZOP_Main = ZOP_Main_IN_NO_ACTIVE_CHILD;
  struct_temp.id = 0U;
  struct_temp.x = 0.0F;
  struct_temp.y = 0.0F;
  struct_temp.vx = 0.0F;
  struct_temp.vy = 0.0F;
  struct_temp.ax = 0.0F;
  struct_temp.ay = 0.0F;
  struct_temp.dir = 0;
  struct_temp.dir_f = 0;
  struct_temp.exist[0] = 0;
  struct_temp.exist[1] = 0;
  for (i = 0; i < 8; i++) {
    ZOP_Main_B.ObjTarget[i] = struct_temp;
  }

  ZOP_Main_B.ObjNum = 0.0;

  /* SystemInitialize for Chart: '<S4>/TargetCheck' incorporates:
   *  SubSystem: '<S13>/DEFAULT.CheckTargetR'
   */
  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay1' */
  ZOP_Main_DW.UnitDelay1_DSTATE_o = ZOP_Main_P_g.UnitDelay1_InitialCondition;

  /* SystemInitialize for Outport: '<S16>/TargetExist' */
  ZOP_Main_B.LogicalOperator5_m = ZOP_Main_P_g.TargetExist_Y0;

  /* SystemInitialize for Outport: '<S16>/TargetExist2' */
  ZOP_Main_B.LogicalOperator4_j = ZOP_Main_P_g.TargetExist2_Y0;

  /* SystemInitialize for Chart: '<S4>/TargetCheck' incorporates:
   *  SubSystem: '<S13>/DEFAULT.CheckTargetF'
   */
  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay1' */
  ZOP_Main_DW.UnitDelay1_DSTATE_g = ZOP_Main_P_g.UnitDelay1_InitialCondition_j;

  /* SystemInitialize for Outport: '<S15>/TargetExist' */
  ZOP_Main_B.LogicalOperator5 = ZOP_Main_P_g.TargetExist_Y0_m;

  /* SystemInitialize for Outport: '<S15>/TargetExist2' */
  ZOP_Main_B.LogicalOperator4 = ZOP_Main_P_g.TargetExist2_Y0_c;

  /* SystemInitialize for Chart: '<S4>/ZOP_State_Machine' */
  ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_NO_ACTIVE_CHILD;
  ZOP_Main_DW.is_active_c2_ZOP_Main = 0U;
  ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_NO_ACTIVE_CHILD;
  ZOP_Main_DW.ZOP_Ready = 0;
  ZOP_Main_DW.finishTimeCnt = 0;
  ZOP_Main_DW.LaneChangeQuit = 0;
  *rty_ZOP_Mode = 0;
  *rty_ZOP_Takeover = 0;
  ZOP_Main_B.ZOP_Vars.LnLo = 0;
  ZOP_Main_B.ZOP_Vars.LnHi = 0;
  ZOP_Main_B.ZOP_Vars.LSafeNCnt = 0;
  ZOP_Main_B.ZOP_Vars.RSafeNCnt = 0;
  ZOP_Main_B.ZOP_Vars.LSafeCnt = 0;
  ZOP_Main_B.ZOP_Vars.RSafeCnt = 0;
  ZOP_Main_B.ZOP_Vars.LSafeRaw = 0;
  ZOP_Main_B.ZOP_Vars.RSafeRaw = 0;
  ZOP_Main_B.ZOP_Vars.Safe = 0;
  ZOP_Main_B.ZOP_Vars.holdTimeCnt = 0U;
  ZOP_Main_B.ZOP_Vars.lcTimeCnt = 0U;
  ZOP_Main_B.ZOP_Vars.lcProTimeCnt = 0U;
  ZOP_Main_B.ZOP_Vars.lcDirCnt = 0U;
  ZOP_Main_B.ZOP_Vars.LCResult = 0;
  ZOP_Main_B.ZOP_Vars.DesLane = 0;
  ZOP_Main_B.ZOP_Vars.CmdLane = 0;
  ZOP_Main_B.ZOP_Vars.LCDir = 0;
  ZOP_Main_B.ZOP_Vars.LCCmd = 0;
  ZOP_Main_B.ZOP_Vars.LCRes = 0U;
  ZOP_Main_B.ZOP_Vars.LCTip = 0U;
  ZOP_Main_B.ZOP_Vars.LCNRes = 0U;
  ZOP_Main_B.ZOP_Vars.LCTime = 0.0F;
  ZOP_Main_B.ZOP_Vars.LCDist = 0.0F;
  ZOP_Main_B.ZOP_Vars.FinishState = 0;
  ZOP_Main_B.ZOP_Vars.LCFailTip = 0;
  ZOP_Main_B.ZOP_Vars.Spd[0] = 0.0F;
  ZOP_Main_B.ZOP_Vars.SpdTmp[0] = 0.0F;
  ZOP_Main_B.ZOP_Vars.SpdTimeCnt[0] = 0U;
  ZOP_Main_B.ZOP_Vars.Spd[1] = 0.0F;
  ZOP_Main_B.ZOP_Vars.SpdTmp[1] = 0.0F;
  ZOP_Main_B.ZOP_Vars.SpdTimeCnt[1] = 0U;
  ZOP_Main_B.ZOP_Vars.Spd[2] = 0.0F;
  ZOP_Main_B.ZOP_Vars.SpdTmp[2] = 0.0F;
  ZOP_Main_B.ZOP_Vars.SpdTimeCnt[2] = 0U;
  ZOP_Main_B.ZOP_Vars.MapFlag = 0U;
  ZOP_Main_B.ZOP_Vars.MapFlagDir = 0;
  ZOP_Main_B.LaneChangeCmd = 0;
  ZOP_Main_B.LaneChangeDir = 0;

  /* SystemInitialize for Outport: '<S4>/ZOP_Enable' */
  *rty_ZOP_Enable = ZOP_Main_P_g.ZOP_Enable_Y0;

  /* SystemInitialize for Outport: '<S4>/LC_Cmd' */
  ZOP_Main_B.Gain_c0 = ZOP_Main_P_g.LC_Cmd_Y0;

  /* SystemInitialize for Outport: '<S4>/ZOP2HMI' */
  ZOP_Main_B.BusCreator2_n = ZOP_Main_P_g.ZOP2HMI_Y0;

  /* SystemInitialize for Chart: '<Root>/ZOP_OS' incorporates:
   *  SubSystem: '<Root>/LKS_Mode_Conv'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay4' */
  ZOP_Main_DW.UnitDelay4_DSTATE = ZOP_Main_P_g.UnitDelay4_InitialCondition_m;

  /* SystemInitialize for Outport: '<S1>/Out1' */
  ZOP_Main_B.LKS_Output = ZOP_Main_P_g.Out1_Y0;

  /* SystemInitialize for SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCDir = ZOP_Main_B.BusCreator2_n.LCDir;

  /* SystemInitialize for SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCRes = ZOP_Main_B.BusCreator2_n.LCRes;

  /* SystemInitialize for SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCTip = ZOP_Main_B.BusCreator2_n.LCTip;

  /* SystemInitialize for SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCFailTip = ZOP_Main_B.BusCreator2_n.LCFailTip;

  /* SystemInitialize for SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCReqTip = ZOP_Main_B.BusCreator2_n.LCReqTip;

  /* SystemInitialize for SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCProp = ZOP_Main_B.BusCreator2_n.LCProp;

  /* SystemInitialize for SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCPropRes = ZOP_Main_B.BusCreator2_n.LCPropRes;
}

/* System reset for referenced model: 'ZOP_Main' */
void ZOP_Main_Reset(void)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay3' */
  ZOP_Main_DW.UnitDelay3_DSTATE = ZOP_Main_P_g.UnitDelay3_InitialCondition_m;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
  ZOP_Main_DW.UnitDelay2_DSTATE = ZOP_Main_P_g.UnitDelay2_InitialCondition_j;

  /* SystemReset for Chart: '<Root>/ZOP_OS' */
  ZOP_Main_DW.i = 0;
}

/* Outputs for referenced model: 'ZOP_Main' */
void ZOP_Main(const SystemCmd_ST *rtu_SystemCmd_Input, const VSI_VEHSTATE_ST
              *rtu_VehStatus_Input, const FUS_OBJ_OUTPUT_ST *rtu_FusionObj_Input,
              const FUS_LANE_OUTPUT_ST *rtu_FusionLane_Input, const
              HWA_TARGETOBJECT_OUTPUT_ST *rtu_RoadModel_TS_Input, const
              ACC_Status_ST *rtu_ACC_Output, const real32_T *rtu_LKS_Mode, const
              ATS_PO_ST *rtu_ACC_PO, const real32_T *rtu_LC_dx, const MapInfo_ST
              *rtu_MapInfo, const Light_Info_ST *rtu_LightInfo, const real_T
              *rtu_SpdLmt, const ZOP_HMI_REQ *rtu_ZOP_HMI_Req, uint8_T
              *rty_ZOP2ACC_state, uint8_T *rty_ZOP2ACC_activate_acc, real32_T
              *rty_ZOP2ACC_spd_lmt, real32_T *rty_ZOP2ACC_light_des_spd,
              real32_T *rty_ZOP2ACC_light_a_des, int8_T *rty_ZOP2ACC_case_num,
              real32_T *rty_ZOP2ACC_light_dist, uint8_T *rty_ZOP2LKS_state,
              uint8_T *rty_ZOP2LKS_activate_lck, int8_T *rty_ZOP2LKS_lc_cmd,
              uint8_T *rty_ZOP2TJA_activate_tja, uint8_T
              *rty_ZOP2TJA_is_zop_active, int8_T *rty_ZOP_Takeover, int8_T
              *rty_ZOP_Mode, boolean_T *rty_ZOP_Enable, int8_T
              *rty_ZOP2HMI_LCDir, int8_T *rty_ZOP2HMI_LCRes, int8_T
              *rty_ZOP2HMI_LCTip, int8_T *rty_ZOP2HMI_LCFailTip, int8_T
              *rty_ZOP2HMI_LCReqTip, int8_T *rty_ZOP2HMI_LCProp, int8_T
              *rty_ZOP2HMI_LCPropRes)
{
  boolean_T b_sf_internal_predicateOutput;
  real_T traf_sign;
  real_T dist;
  real_T time;
  int8_T ObjNum;
  ZOP_Var_ST ZOPVars;
  int32_T tmp;
  uint8_T tmp_0;
  real32_T tmp_1;

  /* Switch: '<Root>/Switch4' incorporates:
   *  Constant: '<Root>/ZOPACT1'
   *  Constant: '<Root>/ZOPACT3'
   *  Constant: '<Root>/k_ZOP_VoiceAct_Enable'
   */
  if (rtP_k_ZOP_VoiceAct_Enable > ZOP_Main_P_g.Switch4_Threshold_m) {
    ZOP_Main_B.Switch4 = ZOP_Main_P_g.ZOPACT3_Value;
  } else {
    ZOP_Main_B.Switch4 = ZOP_Main_P_g.ZOPACT1_Value;
  }

  /* End of Switch: '<Root>/Switch4' */

  /* DataTypeConversion: '<Root>/Data Type Conversion26' incorporates:
   *  Constant: '<Root>/ZOPACT'
   */
  dist = floor(ZOP_Main_P_g.ZOPACT_Value);
  if (rtIsNaN(dist) || rtIsInf(dist)) {
    dist = 0.0;
  } else {
    dist = fmod(dist, 256.0);
  }

  ZOP_Main_B.DataTypeConversion26 = (uint8_T)(dist < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-dist : (int32_T)(uint8_T)dist);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion26' */

  /* RelationalOperator: '<Root>/Relational Operator2' */
  ZOP_Main_B.RelationalOperator2 = (rtu_ZOP_HMI_Req->Function_Activation ==
    ZOP_Main_B.DataTypeConversion26);

  /* Switch: '<Root>/Switch2' incorporates:
   *  Constant: '<Root>/ZOPACT2'
   */
  if (ZOP_Main_B.RelationalOperator2) {
    ZOP_Main_B.Switch2 = ZOP_Main_B.Switch4;
  } else {
    ZOP_Main_B.Switch2 = ZOP_Main_P_g.ZOPACT2_Value;
  }

  /* End of Switch: '<Root>/Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion21' */
  dist = floor(ZOP_Main_B.Switch2);
  if (rtIsNaN(dist) || rtIsInf(dist)) {
    dist = 0.0;
  } else {
    dist = fmod(dist, 256.0);
  }

  /* MinMax: '<Root>/MinMax' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion21'
   */
  ZOP_Main_B.DataTypeConversion21 = (uint8_T)(dist < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-dist : (int32_T)(uint8_T)dist);
  ZOP_Main_B.MinMax_p = rtu_SystemCmd_Input->SystemEnable;
  if (ZOP_Main_B.DataTypeConversion21 > ZOP_Main_B.MinMax_p) {
    ZOP_Main_B.MinMax_p = ZOP_Main_B.DataTypeConversion21;
  }

  /* End of MinMax: '<Root>/MinMax' */

  /* DataTypeConversion: '<Root>/Data Type Conversion19' */
  ZOP_Main_B.BusCreator5.SystemEnable = ZOP_Main_B.MinMax_p;

  /* Switch: '<Root>/Switch5' incorporates:
   *  Constant: '<Root>/ZOPACT6'
   *  Constant: '<Root>/ZOPACT7'
   *  Constant: '<Root>/k_ZOP_VoiceAct_Enable1'
   */
  if (rtP_k_ZOP_VoiceAct_Enable > ZOP_Main_P_g.Switch5_Threshold) {
    ZOP_Main_B.Switch5 = ZOP_Main_P_g.ZOPACT7_Value;
  } else {
    ZOP_Main_B.Switch5 = ZOP_Main_P_g.ZOPACT6_Value;
  }

  /* End of Switch: '<Root>/Switch5' */

  /* DataTypeConversion: '<Root>/Data Type Conversion20' incorporates:
   *  Constant: '<Root>/ZOPNACT1'
   */
  dist = floor(ZOP_Main_P_g.ZOPNACT1_Value);
  if (rtIsNaN(dist) || rtIsInf(dist)) {
    dist = 0.0;
  } else {
    dist = fmod(dist, 256.0);
  }

  ZOP_Main_B.DataTypeConversion20 = (uint8_T)(dist < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-dist : (int32_T)(uint8_T)dist);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion20' */

  /* RelationalOperator: '<Root>/Relational Operator3' */
  ZOP_Main_B.RelationalOperator3 = (rtu_ZOP_HMI_Req->Function_Activation ==
    ZOP_Main_B.DataTypeConversion20);

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/ZOPACT4'
   */
  if (ZOP_Main_B.RelationalOperator3) {
    ZOP_Main_B.Switch3 = ZOP_Main_B.Switch5;
  } else {
    ZOP_Main_B.Switch3 = ZOP_Main_P_g.ZOPACT4_Value;
  }

  /* End of Switch: '<Root>/Switch3' */

  /* DataTypeConversion: '<Root>/Data Type Conversion22' */
  dist = floor(ZOP_Main_B.Switch3);
  if (rtIsNaN(dist) || rtIsInf(dist)) {
    dist = 0.0;
  } else {
    dist = fmod(dist, 256.0);
  }

  /* MinMax: '<Root>/MinMax1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion22'
   */
  ZOP_Main_B.DataTypeConversion22 = (uint8_T)(dist < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-dist : (int32_T)(uint8_T)dist);
  ZOP_Main_B.MinMax1 = rtu_SystemCmd_Input->SystemCancel;
  if (ZOP_Main_B.MinMax1 <= ZOP_Main_B.DataTypeConversion22) {
    ZOP_Main_B.MinMax1 = ZOP_Main_B.DataTypeConversion22;
  }

  /* End of MinMax: '<Root>/MinMax1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion23' */
  ZOP_Main_B.BusCreator5.SystemCancel = ZOP_Main_B.MinMax1;

  /* BusCreator: '<Root>/Bus Creator5' */
  ZOP_Main_B.BusCreator5.SystemOn = rtu_SystemCmd_Input->SystemOn;

  /* Gain: '<Root>/Gain' incorporates:
   *  Constant: '<Root>/ZOPACT8'
   */
  ZOP_Main_B.Gain = ZOP_Main_P_g.Gain_Gain_l * ZOP_Main_P_g.ZOPACT8_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion24' */
  ZOP_Main_B.DataTypeConversion24 = ZOP_Main_B.Gain;

  /* Switch: '<Root>/Switch7' incorporates:
   *  Constant: '<Root>/k_ZOP_SpdLmt_Enable'
   */
  if (rtP_k_ZOP_SpdLmt_Enable > ZOP_Main_P_g.Switch7_Threshold) {
    ZOP_Main_B.Switch7 = *rtu_SpdLmt;
  } else {
    ZOP_Main_B.Switch7 = ZOP_Main_B.DataTypeConversion24;
  }

  /* End of Switch: '<Root>/Switch7' */

  /* DataTypeConversion: '<Root>/Data Type Conversion17' */
  ZOP_Main_B.DataTypeConversion17 = rtu_MapInfo->Dist2StopLine;

  /* DataTypeConversion: '<Root>/Data Type Conversion15' incorporates:
   *  Constant: '<Root>/C_Tmp2'
   */
  ZOP_Main_B.DataTypeConversion15 = (real32_T)ZOP_Main_P_g.C_Tmp2_Value_h;

  /* RelationalOperator: '<Root>/Relational Operator1' */
  ZOP_Main_B.RelationalOperator1 = (ZOP_Main_B.DataTypeConversion17 <=
    ZOP_Main_B.DataTypeConversion15);

  /* DataTypeConversion: '<Root>/Data Type Conversion16' incorporates:
   *  Constant: '<Root>/C_Tmp1'
   */
  ZOP_Main_B.DataTypeConversion16 = (real32_T)ZOP_Main_P_g.C_Tmp1_Value_f;

  /* Switch: '<Root>/Switch' */
  if (ZOP_Main_B.RelationalOperator1) {
    ZOP_Main_B.BusCreator4.dist = ZOP_Main_B.DataTypeConversion17;
  } else {
    ZOP_Main_B.BusCreator4.dist = ZOP_Main_B.DataTypeConversion16;
  }

  /* End of Switch: '<Root>/Switch' */

  /* BusCreator: '<Root>/Bus Creator4' */
  ZOP_Main_B.BusCreator4.color = rtu_LightInfo->color;
  ZOP_Main_B.BusCreator4.time = rtu_LightInfo->time;

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  ZOP_Main_B.DataTypeConversion12 = *rtu_LKS_Mode;

  /* UnitDelay: '<Root>/Unit Delay3' */
  ZOP_Main_B.UnitDelay3 = ZOP_Main_DW.UnitDelay3_DSTATE;

  /* DataTypeConversion: '<Root>/Data Type Conversion14' */
  ZOP_Main_B.DataTypeConversion14 = *rtu_LC_dx;

  /* RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/MODE_ZOP_LC'
   */
  ZOP_Main_B.RelationalOperator = (ZOP_Main_B.UnitDelay3 == rtP_MODE_ZOP_LC);

  /* DataTypeConversion: '<Root>/Data Type Conversion18' incorporates:
   *  Constant: '<Root>/LCDist'
   */
  ZOP_Main_B.DataTypeConversion18 = (real32_T)ZOP_Main_P_g.LCDist_Value;

  /* Switch: '<Root>/Switch1' */
  if (ZOP_Main_B.RelationalOperator) {
    ZOP_Main_B.Switch1_d = ZOP_Main_B.DataTypeConversion14;
  } else {
    ZOP_Main_B.Switch1_d = ZOP_Main_B.DataTypeConversion18;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Chart: '<Root>/ZOP_OS' */
  if (ZOP_Main_DW.i > 2147483646) {
    ZOP_Main_DW.i = MAX_int32_T;
  } else {
    ZOP_Main_DW.i++;
  }

  if (ZOP_Main_DW.i % 2 == 0) {
    /* Outputs for Function Call SubSystem: '<Root>/Light_Process' */
    /* DataTypeConversion: '<S2>/Data Type Conversion15' incorporates:
     *  Constant: '<S2>/C_Tmp1'
     */
    ZOP_Main_B.DataTypeConversion15_a = (real32_T)ZOP_Main_P_g.C_Tmp1_Value;

    /* DataTypeConversion: '<S2>/Data Type Conversion3' */
    ZOP_Main_B.dist = ZOP_Main_B.BusCreator4.dist;

    /* DataTypeConversion: '<S2>/Data Type Conversion2' */
    ZOP_Main_B.DataTypeConversion2 = rtu_VehStatus_Input->vRef;

    /* DataTypeConversion: '<S2>/Data Type Conversion5' */
    ZOP_Main_B.DataTypeConversion5 = ZOP_Main_B.BusCreator4.time;

    /* DataTypeConversion: '<S2>/Data Type Conversion1' */
    ZOP_Main_B.DataTypeConversion1 = ZOP_Main_B.BusCreator4.color;

    /* Chart: '<S2>/Chart' */
    if (ZOP_Main_DW.is_active_c1_ZOP_Main == 0U) {
      ZOP_Main_DW.is_active_c1_ZOP_Main = 1U;
      ZOP_Main_DW.is_c1_ZOP_Main = ZOP_Main_IN_Off;
      ZOP_Main_B.Flag = 0.0;
    } else {
      switch (ZOP_Main_DW.is_c1_ZOP_Main) {
       case ZOP_Main_IN_Off:
        b_sf_internal_predicateOutput = ((ZOP_Main_B.DataTypeConversion5 > 0.0) &&
          (ZOP_Main_B.dist > 0.0));
        if (b_sf_internal_predicateOutput) {
          ZOP_Main_DW.is_c1_ZOP_Main = ZOP_Main_IN_init;
          ZOP_Main_B.Flag = 0.0;
        }
        break;

       case ZOP_Main_IN_On:
        b_sf_internal_predicateOutput = ((ZOP_Main_B.dist < -5.0) ||
          (ZOP_Main_B.DataTypeConversion5 < 0.0) ||
          ((ZOP_Main_B.DataTypeConversion1 == 1.0) && (ZOP_Main_B.dist <= 1.0)));
        if (b_sf_internal_predicateOutput) {
          ZOP_Main_DW.is_c1_ZOP_Main = ZOP_Main_IN_Off;
          ZOP_Main_B.Flag = 0.0;
        } else {
          ZOP_Main_B.Flag = 1.0;
        }
        break;

       default:
        if ((ZOP_Main_B.DataTypeConversion5 > 0.0) && (ZOP_Main_B.dist > 0.0) &&
            (ZOP_Main_B.dist / (ZOP_Main_B.DataTypeConversion2 + 0.0001) <= 5.0))
        {
          ZOP_Main_DW.is_c1_ZOP_Main = ZOP_Main_IN_On;
        }
        break;
      }
    }

    /* End of Chart: '<S2>/Chart' */

    /* RelationalOperator: '<S2>/Relational Operator1' incorporates:
     *  Constant: '<S2>/C_Tmp2'
     */
    ZOP_Main_B.RelationalOperator1_h = (ZOP_Main_B.Switch7 >=
      ZOP_Main_P_g.C_Tmp2_Value);

    /* Switch: '<S2>/Switch1' incorporates:
     *  Constant: '<S2>/C_Tmp3'
     */
    if (ZOP_Main_B.RelationalOperator1_h) {
      ZOP_Main_B.Switch1_a = ZOP_Main_B.Switch7;
    } else {
      ZOP_Main_B.Switch1_a = ZOP_Main_P_g.C_Tmp3_Value;
    }

    /* End of Switch: '<S2>/Switch1' */

    /* DataTypeConversion: '<S2>/Data Type Conversion6' */
    ZOP_Main_B.DataTypeConversion6 = ZOP_Main_B.Switch1_a;

    /* MATLAB Function: '<S2>/LightLogic' */
    traf_sign = ZOP_Main_B.DataTypeConversion1;
    dist = ZOP_Main_B.dist;
    time = ZOP_Main_B.DataTypeConversion5;
    if (ZOP_Main_B.Flag == 0.0) {
      ZOP_Main_B.v_des_l = ZOP_Main_B.DataTypeConversion2;
      ZOP_Main_B.a_des_k = 0.5;
      ZOP_Main_B.case_num = 0.0;
    } else {
      if (ZOP_Main_B.dist < 0.0) {
        dist = 0.0;
      }

      if (ZOP_Main_B.DataTypeConversion1 == 1.0) {
        time = ZOP_Main_B.DataTypeConversion5 + 3.0;
      } else {
        if (ZOP_Main_B.DataTypeConversion1 == 2.0) {
          traf_sign = 1.0;
        }
      }

      switch ((int32_T)traf_sign) {
       case 1:
        ZOP_Main_B.a_des_k = (dist - ZOP_Main_B.DataTypeConversion2 * time) *
          2.0 / (time * time + 0.0001);
        if (dist == 200.0) {
          ZOP_Main_B.v_des_l = 15.0;
          ZOP_Main_B.a_des_k = 1.0;
          ZOP_Main_B.case_num = 0.0;
        } else if (((dist - 5.0) / (ZOP_Main_B.DataTypeConversion2 + 0.0001) >
                    8.0) && (ZOP_Main_B.DataTypeConversion2 < 2.5)) {
          ZOP_Main_B.v_des_l = 15.0;
          ZOP_Main_B.a_des_k = 1.0;
          ZOP_Main_B.case_num = 0.0;
        } else {
          if ((0.0 > dist) || rtIsNaN(dist)) {
            traf_sign = 0.0;
          } else {
            traf_sign = dist;
          }

          if ((traf_sign + 0.1) / (ZOP_Main_B.DataTypeConversion2 + 0.0001) <
              time) {
            if (ZOP_Main_B.DataTypeConversion2 > ZOP_Main_B.DataTypeConversion6)
            {
              ZOP_Main_B.a_des_k = (ZOP_Main_B.DataTypeConversion6 *
                                    ZOP_Main_B.DataTypeConversion6 -
                                    ZOP_Main_B.DataTypeConversion2 *
                                    ZOP_Main_B.DataTypeConversion2) / (2.0 *
                dist + 0.001);
              if (!(ZOP_Main_B.a_des_k > -1.0)) {
                ZOP_Main_B.a_des_k = -1.0;
              }

              traf_sign = 2.0 * ZOP_Main_B.a_des_k * dist +
                ZOP_Main_B.DataTypeConversion2 * ZOP_Main_B.DataTypeConversion2;
              if ((0.0 > traf_sign) || rtIsNaN(traf_sign)) {
                traf_sign = 0.0;
              }

              ZOP_Main_B.v_des_l = sqrt(traf_sign);
              if ((ZOP_Main_B.v_des_l - ZOP_Main_B.DataTypeConversion2) /
                  ZOP_Main_B.a_des_k <= time) {
                ZOP_Main_B.case_num = 1.0;
              } else {
                ZOP_Main_B.v_des_l = time * ZOP_Main_B.a_des_k +
                  ZOP_Main_B.DataTypeConversion2;
                ZOP_Main_B.case_num = 2.0;
              }
            } else {
              ZOP_Main_B.v_des_l = ZOP_Main_B.DataTypeConversion6;
              ZOP_Main_B.a_des_k = (ZOP_Main_B.DataTypeConversion6 -
                                    ZOP_Main_B.DataTypeConversion2) / time;
              ZOP_Main_B.case_num = 3.0;
            }
          } else if ((ZOP_Main_B.a_des_k >= 0.0) && (ZOP_Main_B.a_des_k < 1.0) &&
                     (ZOP_Main_B.a_des_k * time + ZOP_Main_B.DataTypeConversion2
                      <= ZOP_Main_B.DataTypeConversion6)) {
            ZOP_Main_B.v_des_l = ZOP_Main_B.DataTypeConversion6;
            ZOP_Main_B.case_num = 4.0;
          } else {
            ZOP_Main_B.v_des_l = 0.0;
            ZOP_Main_B.a_des_k = -(ZOP_Main_B.DataTypeConversion2 *
              ZOP_Main_B.DataTypeConversion2) / (2.0 * dist);
            ZOP_Main_B.case_num = 5.0;
          }
        }
        break;

       case 3:
        if (((dist - 5.0) / (ZOP_Main_B.DataTypeConversion2 + 0.0001) > 10.0) &&
            (dist >= 5.0)) {
          ZOP_Main_B.v_des_l = 15.0;
          ZOP_Main_B.a_des_k = 1.0;
          ZOP_Main_B.case_num = 0.0;
        } else if ((dist < 4.0) && (ZOP_Main_B.DataTypeConversion2 < 1.0)) {
          ZOP_Main_B.a_des_k = 0.25 * dist - 1.0;
          ZOP_Main_B.v_des_l = 0.0;
          ZOP_Main_B.case_num = 12.0;
        } else {
          ZOP_Main_B.a_des_k = (dist - ZOP_Main_B.DataTypeConversion2 * time) *
            2.0 / ((time + 0.001) * (time + 0.001));
          ZOP_Main_B.v_des_l = ZOP_Main_B.a_des_k * time +
            ZOP_Main_B.DataTypeConversion2;
          if (dist / (ZOP_Main_B.DataTypeConversion2 + 0.0001) < time) {
            if (-ZOP_Main_B.DataTypeConversion2 /
                (-(ZOP_Main_B.DataTypeConversion2 *
                   ZOP_Main_B.DataTypeConversion2) / (2.0 * dist)) < time) {
              ZOP_Main_B.v_des_l = 0.0;
              ZOP_Main_B.a_des_k = -(ZOP_Main_B.DataTypeConversion2 *
                ZOP_Main_B.DataTypeConversion2) / (2.0 * dist + 0.01);
              if ((-1.0 > ZOP_Main_B.a_des_k) || rtIsNaN(ZOP_Main_B.a_des_k)) {
                ZOP_Main_B.a_des_k = -1.0;
              }

              ZOP_Main_B.case_num = 7.0;
            } else {
              ZOP_Main_B.case_num = 8.0;
            }
          } else if (ZOP_Main_B.v_des_l < ZOP_Main_B.DataTypeConversion6) {
            if ((-1.0 > ZOP_Main_B.a_des_k) || rtIsNaN(ZOP_Main_B.a_des_k)) {
              ZOP_Main_B.a_des_k = -1.0;
            }

            ZOP_Main_B.case_num = 9.0;
          } else {
            ZOP_Main_B.v_des_l = ZOP_Main_B.DataTypeConversion6;
            ZOP_Main_B.a_des_k = (ZOP_Main_B.DataTypeConversion6 -
                                  ZOP_Main_B.DataTypeConversion2) / time;
            ZOP_Main_B.case_num = 10.0;
          }
        }
        break;

       default:
        ZOP_Main_B.v_des_l = ZOP_Main_B.DataTypeConversion6;
        ZOP_Main_B.a_des_k = 0.0;
        ZOP_Main_B.case_num = 11.0;
        break;
      }
    }

    ZOP_Main_B.dist = dist;

    /* End of MATLAB Function: '<S2>/LightLogic' */

    /* DataTypeConversion: '<S2>/Data Type Conversion9' */
    ZOP_Main_B.DataTypeConversion9_c = (real32_T)ZOP_Main_B.case_num;

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/k_ZOP_V2X_Enable'
     */
    if (rtP_k_ZOP_V2X_Enable > ZOP_Main_P_g.Switch_Threshold) {
      ZOP_Main_B.Switch_m = ZOP_Main_B.DataTypeConversion9_c;
    } else {
      ZOP_Main_B.Switch_m = ZOP_Main_B.DataTypeConversion15_a;
    }

    /* End of Switch: '<S2>/Switch' */

    /* DataTypeConversion: '<S2>/Data Type Conversion7' */
    ZOP_Main_B.v_des = ZOP_Main_B.v_des_l;

    /* DataTypeConversion: '<S2>/Data Type Conversion8' */
    ZOP_Main_B.a_des = ZOP_Main_B.a_des_k;

    /* DataTypeConversion: '<S2>/Data Type Conversion4' */
    ZOP_Main_B.DataTypeConversion4 = rtu_ACC_PO->Valid;

    /* End of Outputs for SubSystem: '<Root>/Light_Process' */
  }

  if (ZOP_Main_DW.i >= 10) {
    /* Outputs for Function Call SubSystem: '<Root>/LKS_Mode_Conv' */
    /* UnitDelay: '<S1>/Unit Delay4' */
    ZOP_Main_B.UnitDelay4 = ZOP_Main_DW.UnitDelay4_DSTATE;

    /* MATLAB Function: '<S1>/LKS_Input_Proc' */
    tmp_1 = rt_roundf_snf(ZOP_Main_B.DataTypeConversion12);
    if (tmp_1 < 256.0F) {
      if (tmp_1 >= 0.0F) {
        tmp_0 = (uint8_T)tmp_1;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    ZOP_Main_B.LKS_Output.state = tmp_0;
    ZOP_Main_B.LKS_Output.ready = 0U;
    ZOP_Main_B.LKS_Output.active = 0U;
    ZOP_Main_B.LKS_Output.overide = 0U;
    ZOP_Main_B.LKS_Output.cancle = 0U;
    ZOP_Main_B.LKS_Output.error = 0U;
    ZOP_Main_B.LKS_Output.lc_finish = 0U;
    ZOP_Main_B.LKS_Output.lc_fail = 0U;
    switch (ZOP_Main_B.LKS_Output.state) {
     case 0:
      ZOP_Main_B.LKS_Output.error = 1U;
      break;

     case 3:
      ZOP_Main_B.LKS_Output.ready = 1U;
      break;

     case 4:
      ZOP_Main_B.LKS_Output.active = 1U;
      break;

     case 5:
      ZOP_Main_B.LKS_Output.active = 1U;
      break;

     case 6:
      ZOP_Main_B.LKS_Output.active = 1U;
      break;
    }

    if (((ZOP_Main_B.UnitDelay4 == 4.0F) || (ZOP_Main_B.UnitDelay4 == 5.0F) ||
         (ZOP_Main_B.UnitDelay4 == 6.0F)) && (ZOP_Main_B.DataTypeConversion12 !=
         4.0F) && (ZOP_Main_B.DataTypeConversion12 != 5.0F) &&
        (ZOP_Main_B.DataTypeConversion12 != 6.0F)) {
      ZOP_Main_B.LKS_Output.cancle = 1U;
    }

    if ((ZOP_Main_B.UnitDelay4 == 5.0F) || (ZOP_Main_B.UnitDelay4 == 6.0F)) {
      if (ZOP_Main_B.DataTypeConversion12 == 4.0F) {
        ZOP_Main_B.LKS_Output.lc_finish = 1U;
      } else {
        if ((ZOP_Main_B.DataTypeConversion12 != 5.0F) &&
            (ZOP_Main_B.DataTypeConversion12 != 6.0F)) {
          ZOP_Main_B.LKS_Output.lc_fail = 1U;
        }
      }
    }

    ZOP_Main_B.LKS_Output.lc_dist = (real32_T)fabs(ZOP_Main_B.Switch1_d);

    /* End of MATLAB Function: '<S1>/LKS_Input_Proc' */

    /* Update for UnitDelay: '<S1>/Unit Delay4' */
    ZOP_Main_DW.UnitDelay4_DSTATE = ZOP_Main_B.DataTypeConversion12;

    /* End of Outputs for SubSystem: '<Root>/LKS_Mode_Conv' */

    /* Outputs for Function Call SubSystem: '<Root>/ZOP_Main_OS' */
    /* UnitDelay: '<S4>/Unit Delay2' */
    ZOP_Main_B.UnitDelay2_g = ZOP_Main_DW.UnitDelay2_DSTATE_n;

    /* UnitDelay: '<S4>/Unit Delay1' */
    ZOP_Main_B.UnitDelay1 = ZOP_Main_DW.UnitDelay1_DSTATE;

    /* UnitDelay: '<S4>/Unit Delay3' */
    ZOP_Main_B.UnitDelay3_h = ZOP_Main_DW.UnitDelay3_DSTATE_c;

    /* UnitDelay: '<S4>/Unit Delay5' */
    ZOP_Main_B.UnitDelay5 = ZOP_Main_DW.UnitDelay5_DSTATE;

    /* Chart: '<S4>/LaneStateProcess' incorporates:
     *  Constant: '<S4>/k_LS_ChangingDist'
     *  Constant: '<S4>/k_LS_ChangingTime'
     */
    if (ZOP_Main_DW.is_active_c4_ZOP_Main == 0U) {
      ZOP_Main_DW.is_active_c4_ZOP_Main = 1U;
      ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_INIT;
      ZOP_Main_B.LaneStable = 0.0F;
      ZOP_Main_B.LaneCurPost = rtu_MapInfo->LaneIndex;
    } else {
      switch (ZOP_Main_DW.is_c4_ZOP_Main) {
       case ZOP_Main_IN_CHANGING:
        if ((ZOP_Main_B.UnitDelay1 != rtu_MapInfo->LaneIndex) ||
            (ZOP_Main_B.UnitDelay5 != rtu_MapInfo->LaneNum) ||
            (ZOP_Main_B.UnitDelay3_h == rtP_MODE_ZOP_LC)) {
          ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_CHANGING;
          ZOP_Main_B.LaneStable = 0.0F;
          ZOP_Main_DW.changingCnt = 0;
        } else if (((real_T)ZOP_Main_DW.changingCnt * 0.1 >
                    rtP_k_ZOP_LS_ChangingTime) && (rtu_VehStatus_Input->vRef *
                    (real32_T)ZOP_Main_DW.changingCnt * 0.1 >
                    rtP_k_ZOP_LS_ChangingDist)) {
          ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_STABLE;
          ZOP_Main_B.LaneStable = (real32_T)(rtu_MapInfo->LaneIndex != 0);
          ZOP_Main_B.LaneCurPost = rtu_MapInfo->LaneIndex;
        } else if (!ZOP_Main_B.UnitDelay2_g) {
          ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_INIT;
          ZOP_Main_B.LaneStable = 0.0F;
          ZOP_Main_B.LaneCurPost = rtu_MapInfo->LaneIndex;
        } else {
          ZOP_Main_DW.changingCnt++;
        }
        break;

       case ZOP_Main_IN_INIT:
        if (ZOP_Main_B.UnitDelay2_g) {
          ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_CHANGING;
          ZOP_Main_B.LaneStable = 0.0F;
          ZOP_Main_DW.changingCnt = 0;
        }
        break;

       default:
        if (!ZOP_Main_B.UnitDelay2_g) {
          ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_INIT;
          ZOP_Main_B.LaneStable = 0.0F;
          ZOP_Main_B.LaneCurPost = rtu_MapInfo->LaneIndex;
        } else if ((ZOP_Main_B.UnitDelay5 != rtu_MapInfo->LaneNum) ||
                   (ZOP_Main_B.UnitDelay1 != rtu_MapInfo->LaneIndex) ||
                   (ZOP_Main_B.UnitDelay3_h == rtP_MODE_ZOP_LC)) {
          ZOP_Main_DW.is_c4_ZOP_Main = ZOP_Main_IN_CHANGING;
          ZOP_Main_B.LaneStable = 0.0F;
          ZOP_Main_DW.changingCnt = 0;
        } else {
          ZOP_Main_B.LaneStable = (real32_T)(rtu_MapInfo->LaneIndex != 0);
        }
        break;
      }
    }

    /* End of Chart: '<S4>/LaneStateProcess' */

    /* UnitDelay: '<S4>/Unit Delay4' */
    ZOP_Main_B.UnitDelay4_i = ZOP_Main_DW.UnitDelay4_DSTATE_l;

    /* DataTypeConversion: '<S4>/Data Type Conversion3' */
    ZOP_Main_B.DataTypeConversion3_f = ZOP_Main_B.UnitDelay4_i;

    /* Chart: '<S4>/TargetCheck' */
    if (ZOP_Main_DW.is_active_c5_ZOP_Main == 0U) {
      ZOP_Main_DW.is_active_c5_ZOP_Main = 1U;
      ZOP_Main_DW.is_c5_ZOP_Main = ZOP_Main_IN_DEFAULT;
    } else {
      /*   */
      ObjNum = ZOP_Main_GetTarget(*rtu_VehStatus_Input,
        rtu_FusionObj_Input->objects,
        rtu_RoadModel_TS_Input->L_NEIGHBORLANE_TAROBJ_0_ST.ID_un8,
        rtu_RoadModel_TS_Input->L_NEIGHBORLANE_TAROBJ_1_ST.ID_un8,
        rtu_RoadModel_TS_Input->L_NEIGHBORLANE_TAROBJ_2_ST.ID_un8,
        rtu_RoadModel_TS_Input->L_NEIGHBORLANE_TAROBJ_3_ST.ID_un8,
        rtu_RoadModel_TS_Input->R_NEIGHBORLANE_TAROBJ_0_ST.ID_un8,
        rtu_RoadModel_TS_Input->R_NEIGHBORLANE_TAROBJ_1_ST.ID_un8,
        rtu_RoadModel_TS_Input->R_NEIGHBORLANE_TAROBJ_2_ST.ID_un8,
        rtu_RoadModel_TS_Input->R_NEIGHBORLANE_TAROBJ_3_ST.ID_un8, (real_T)
        ZOP_Main_B.DataTypeConversion3_f, ZOP_Main_B.ObjTarget);
      ZOP_Main_B.ObjNum = ObjNum;
    }

    /* End of Chart: '<S4>/TargetCheck' */

    /* DataTypeConversion: '<S4>/Data Type Conversion2' */
    tmp_1 = (real32_T)floor(ZOP_Main_B.LaneCurPost);
    if (rtIsNaNF(tmp_1) || rtIsInfF(tmp_1)) {
      tmp_1 = 0.0F;
    } else {
      tmp_1 = (real32_T)fmod(tmp_1, 256.0);
    }

    ZOP_Main_B.BusCreator1.LaneIndex = (int8_T)(tmp_1 < 0.0F ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-tmp_1 : (int32_T)(int8_T)(uint8_T)tmp_1);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion2' */

    /* DataTypeConversion: '<S4>/Data Type Conversion1' */
    tmp_1 = (real32_T)floor(ZOP_Main_B.LaneStable);
    if (rtIsNaNF(tmp_1) || rtIsInfF(tmp_1)) {
      tmp_1 = 0.0F;
    } else {
      tmp_1 = (real32_T)fmod(tmp_1, 256.0);
    }

    ZOP_Main_B.BusCreator1.LaneStable = (int8_T)(tmp_1 < 0.0F ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-tmp_1 : (int32_T)(int8_T)(uint8_T)tmp_1);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion1' */

    /* BusCreator: '<S4>/Bus Creator1' */
    ZOP_Main_B.BusCreator1.LaneNum = rtu_MapInfo->LaneNum;
    ZOP_Main_B.BusCreator1.MapFlag = rtu_MapInfo->MapFlag;
    ZOP_Main_B.BusCreator1.TgtSpd = rtu_MapInfo->TgtSpd;
    ZOP_Main_B.BusCreator1.isInZopZone = rtu_MapInfo->isInZopZone;
    ZOP_Main_B.BusCreator1.LocIndex = rtu_MapInfo->LocIndex;
    ZOP_Main_B.BusCreator1.Dist2Dest = rtu_MapInfo->Dist2Dest;
    ZOP_Main_B.BusCreator1.Dist2Start = rtu_MapInfo->Dist2Start;
    ZOP_Main_B.BusCreator1.Dist2StopLine = rtu_MapInfo->Dist2StopLine;
    ZOP_Main_B.BusCreator1.Dist2Merge = rtu_MapInfo->Dist2Merge;
    ZOP_Main_B.BusCreator1.LocLat = rtu_MapInfo->LocLat;
    ZOP_Main_B.BusCreator1.LocLon = rtu_MapInfo->LocLon;
    ZOP_Main_B.BusCreator1.SpeedLimit[0] = rtu_MapInfo->SpeedLimit[0];
    ZOP_Main_B.BusCreator1.SpeedLimit[1] = rtu_MapInfo->SpeedLimit[1];
    ZOP_Main_B.BusCreator1.SpeedLimit[2] = rtu_MapInfo->SpeedLimit[2];

    /* DataTypeConversion: '<S4>/Data Type Conversion18' incorporates:
     *  Constant: '<S4>/C_Tmp7'
     */
    dist = floor(ZOP_Main_P_g.C_Tmp7_Value);
    if (rtIsNaN(dist) || rtIsInf(dist)) {
      dist = 0.0;
    } else {
      dist = fmod(dist, 256.0);
    }

    ZOP_Main_B.DataTypeConversion18_c = (int8_T)(dist < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-dist : (int32_T)(int8_T)(uint8_T)dist);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion18' */

    /* SignalConversion: '<S4>/ConcatBufferAtVector ConcatenateIn1' */
    ZOP_Main_B.VectorConcatenate[0] = ZOP_Main_B.DataTypeConversion18_c;

    /* SignalConversion: '<S4>/ConcatBufferAtVector ConcatenateIn2' */
    ZOP_Main_B.VectorConcatenate[1] = ZOP_Main_B.DataTypeConversion18_c;

    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/C_Tmp2'
     *  Constant: '<S4>/C_Tmp3'
     */
    if (rtu_ACC_PO->Valid) {
      ZOP_Main_B.Switch = ZOP_Main_P_g.C_Tmp2_Value_f;
    } else {
      ZOP_Main_B.Switch = ZOP_Main_P_g.C_Tmp3_Value_p;
    }

    /* End of Switch: '<S4>/Switch' */

    /* DataTypeConversion: '<S4>/Data Type Conversion8' */
    dist = floor(ZOP_Main_B.Switch);
    if (rtIsNaN(dist) || rtIsInf(dist)) {
      dist = 0.0;
    } else {
      dist = fmod(dist, 256.0);
    }

    ZOP_Main_B.BusCreator3.id = (uint8_T)(dist < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-dist : (int32_T)(uint8_T)dist);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion8' */

    /* DataTypeConversion: '<S4>/Data Type Conversion9' */
    ZOP_Main_B.BusCreator3.x = rtu_ACC_PO->dx;

    /* DataTypeConversion: '<S4>/Data Type Conversion10' */
    ZOP_Main_B.BusCreator3.y = rtu_ACC_PO->dy;

    /* DataTypeConversion: '<S4>/Data Type Conversion11' */
    ZOP_Main_B.BusCreator3.vx = rtu_ACC_PO->vx;

    /* DataTypeConversion: '<S4>/Data Type Conversion13' */
    ZOP_Main_B.BusCreator3.vy = rtu_ACC_PO->vy;

    /* DataTypeConversion: '<S4>/Data Type Conversion14' */
    ZOP_Main_B.BusCreator3.ax = rtu_ACC_PO->ax;

    /* DataTypeConversion: '<S4>/Data Type Conversion15' incorporates:
     *  Constant: '<S4>/C_Tmp4'
     */
    ZOP_Main_B.BusCreator3.ay = (real32_T)ZOP_Main_P_g.C_Tmp4_Value;

    /* DataTypeConversion: '<S4>/Data Type Conversion16' incorporates:
     *  Constant: '<S4>/C_Tmp5'
     */
    dist = floor(ZOP_Main_P_g.C_Tmp5_Value);
    if (rtIsNaN(dist) || rtIsInf(dist)) {
      dist = 0.0;
    } else {
      dist = fmod(dist, 256.0);
    }

    ZOP_Main_B.DataTypeConversion16_b = (int8_T)(dist < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-dist : (int32_T)(int8_T)(uint8_T)dist);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion16' */

    /* DataTypeConversion: '<S4>/Data Type Conversion17' incorporates:
     *  Constant: '<S4>/C_Tmp6'
     */
    dist = floor(ZOP_Main_P_g.C_Tmp6_Value);
    if (rtIsNaN(dist) || rtIsInf(dist)) {
      dist = 0.0;
    } else {
      dist = fmod(dist, 256.0);
    }

    ZOP_Main_B.DataTypeConversion17_n = (int8_T)(dist < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-dist : (int32_T)(int8_T)(uint8_T)dist);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion17' */

    /* BusCreator: '<S4>/Bus Creator3' */
    ZOP_Main_B.BusCreator3.dir = ZOP_Main_B.DataTypeConversion16_b;
    ZOP_Main_B.BusCreator3.dir_f = ZOP_Main_B.DataTypeConversion17_n;
    ZOP_Main_B.BusCreator3.exist[0] = ZOP_Main_B.VectorConcatenate[0];
    ZOP_Main_B.BusCreator3.exist[1] = ZOP_Main_B.VectorConcatenate[1];

    /* Chart: '<S4>/ZOP_State_Machine' */
    if (ZOP_Main_DW.is_active_c2_ZOP_Main == 0U) {
      ZOP_Main_DW.is_active_c2_ZOP_Main = 1U;
      ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_OFF;
      tmp_0 = rtP_MODE_ZOP_OFF;
      if (tmp_0 > 127) {
        tmp_0 = 127U;
      }

      *rty_ZOP_Mode = (int8_T)tmp_0;
    } else {
      switch (ZOP_Main_DW.is_c2_ZOP_Main) {
       case ZOP_Main_IN_ENABLE:
        if ((rtu_ACC_Output->error == 1) || (ZOP_Main_B.LKS_Output.error == 1))
        {
          ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_NO_ACTIVE_CHILD;
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_ERROR;
          tmp_0 = rtP_MODE_ZOP_ERROR;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
        } else if ((ZOP_Main_DW.ZOP_Ready != 1) ||
                   (ZOP_Main_B.BusCreator5.SystemCancel == 1)) {
          ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_NO_ACTIVE_CHILD;
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_READY;
          tmp_0 = rtP_MODE_ZOP_READY;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_B.LaneChangeCmd = 0;
          *rty_ZOP_Takeover = 0;
        } else if (*rty_ZOP_Takeover != 0) {
          ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_NO_ACTIVE_CHILD;
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_FINISH;
          tmp_0 = rtP_MODE_ZOP_FINISH;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_DW.finishTimeCnt = 0;
        } else if (ZOP_Main_B.BusCreator5.SystemOn != 1) {
          ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_NO_ACTIVE_CHILD;
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_OFF;
          tmp_0 = rtP_MODE_ZOP_OFF;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
        } else {
          switch (ZOP_Main_DW.is_ENABLE) {
           case ZOP_Main_IN_HOLD:
            tmp_0 = rtP_MODE_ZOP_HOLD;
            if (tmp_0 > 127) {
              tmp_0 = 127U;
            }

            *rty_ZOP_Mode = (int8_T)tmp_0;
            if ((rtu_ACC_Output->overide == 1) || (ZOP_Main_B.LKS_Output.overide
                 == 1)) {
              ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_OVERIDE;
              tmp_0 = rtP_MODE_ZOP_OVERIDE;
              if (tmp_0 > 127) {
                tmp_0 = 127U;
              }

              *rty_ZOP_Mode = (int8_T)tmp_0;
            } else if ((ZOP_Main_B.LaneChangeCmd == -1) ||
                       (ZOP_Main_B.LaneChangeCmd == 1)) {
              ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_LANE_CHANGE;
              tmp_0 = rtP_MODE_ZOP_LC;
              if (tmp_0 > 127) {
                tmp_0 = 127U;
              }

              *rty_ZOP_Mode = (int8_T)tmp_0;
              ZOP_Main_DW.LaneChangeQuit = 0;
              ZOP_Main_InitLCState(&ZOP_Main_B.ZOP_Vars);
            } else {
              /*  CheckLCResult(); */
              dist = ZOP_Main_CheckZopPreCondition
                (ZOP_Main_B.BusCreator1.isInZopZone, rtu_ACC_Output->ready,
                 rtu_ACC_Output->active, ZOP_Main_B.LKS_Output.ready,
                 ZOP_Main_B.LKS_Output.active);
              if (dist < 128.0) {
                if (dist >= -128.0) {
                  ZOP_Main_DW.ZOP_Ready = (int8_T)dist;
                } else {
                  ZOP_Main_DW.ZOP_Ready = MIN_int8_T;
                }
              } else {
                ZOP_Main_DW.ZOP_Ready = MAX_int8_T;
              }

              ZOP_Main_CheckZopLCCondition(rtu_VehStatus_Input->vRef,
                rtu_FusionLane_Input->leftHostLane.type,
                rtu_FusionLane_Input->rightHostLane.type,
                ZOP_Main_B.BusCreator1.LaneNum, ZOP_Main_B.BusCreator1.MapFlag,
                ZOP_Main_B.BusCreator1.LaneIndex,
                ZOP_Main_B.BusCreator1.LocIndex,
                ZOP_Main_B.BusCreator1.Dist2Dest,
                ZOP_Main_B.BusCreator1.LaneStable, ZOP_Main_B.ObjTarget,
                ZOP_Main_B.BusCreator3.id, ZOP_Main_B.BusCreator3.x,
                ZOP_Main_B.BusCreator3.vx, &ZOP_Main_B.ZOP_Vars,
                &ZOP_Main_B.LaneChangeCmd, &ZOP_Main_B.LaneChangeDir,
                rty_ZOP_Takeover);
            }
            break;

           case ZOP_Main_IN_LANE_CHANGE:
            tmp_0 = rtP_MODE_ZOP_LC;
            if (tmp_0 > 127) {
              tmp_0 = 127U;
            }

            *rty_ZOP_Mode = (int8_T)tmp_0;
            if (ZOP_Main_DW.LaneChangeQuit != 0) {
              ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_HOLD;
              tmp_0 = rtP_MODE_ZOP_HOLD;
              if (tmp_0 > 127) {
                tmp_0 = 127U;
              }

              *rty_ZOP_Mode = (int8_T)tmp_0;
              ZOP_Main_B.LaneChangeCmd = 0;
              *rty_ZOP_Takeover = 0;
              ZOP_Main_InitHoldState(&ZOP_Main_B.ZOP_Vars);
            } else {
              ZOP_Main_CheckZopLC(ZOP_Main_B.LaneChangeCmd,
                                  ZOP_Main_B.LKS_Output.lc_finish,
                                  ZOP_Main_B.LKS_Output.lc_fail,
                                  ZOP_Main_B.LKS_Output.lc_dist,
                                  ZOP_Main_B.ObjTarget, &ZOP_Main_B.ZOP_Vars,
                                  &ZOP_Main_DW.LaneChangeQuit, &ZOPVars);
              ZOP_Main_B.ZOP_Vars = ZOPVars;
            }
            break;

           default:
            tmp_0 = rtP_MODE_ZOP_OVERIDE;
            if (tmp_0 > 127) {
              tmp_0 = 127U;
            }

            *rty_ZOP_Mode = (int8_T)tmp_0;
            if ((rtu_ACC_Output->overide == 0) && (ZOP_Main_B.LKS_Output.overide
                 == 0)) {
              ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_HOLD;
              tmp_0 = rtP_MODE_ZOP_HOLD;
              if (tmp_0 > 127) {
                tmp_0 = 127U;
              }

              *rty_ZOP_Mode = (int8_T)tmp_0;
              ZOP_Main_B.LaneChangeCmd = 0;
              *rty_ZOP_Takeover = 0;
              ZOP_Main_InitHoldState(&ZOP_Main_B.ZOP_Vars);
            }
            break;
          }
        }
        break;

       case ZOP_Main_IN_ERROR:
        tmp_0 = rtP_MODE_ZOP_ERROR;
        if (tmp_0 > 127) {
          tmp_0 = 127U;
        }

        *rty_ZOP_Mode = (int8_T)tmp_0;
        if ((rtu_ACC_Output->error == 0) && (ZOP_Main_B.LKS_Output.error == 0))
        {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_READY;
          tmp_0 = rtP_MODE_ZOP_READY;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_B.LaneChangeCmd = 0;
          *rty_ZOP_Takeover = 0;
        } else {
          if (ZOP_Main_B.BusCreator5.SystemOn != 1) {
            ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_OFF;
            tmp_0 = rtP_MODE_ZOP_OFF;
            if (tmp_0 > 127) {
              tmp_0 = 127U;
            }

            *rty_ZOP_Mode = (int8_T)tmp_0;
          }
        }
        break;

       case ZOP_Main_IN_FINISH:
        tmp_0 = rtP_MODE_ZOP_FINISH;
        if (tmp_0 > 127) {
          tmp_0 = 127U;
        }

        *rty_ZOP_Mode = (int8_T)tmp_0;
        if (ZOP_Main_B.BusCreator5.SystemOn != 1) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_OFF;
          tmp_0 = rtP_MODE_ZOP_OFF;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
        } else if (ZOP_Main_DW.finishTimeCnt >= 50) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_PASSIVE;
          tmp_0 = rtP_MODE_ZOP_PASSIVE;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_InitHoldState(&ZOP_Main_B.ZOP_Vars);
        } else {
          tmp = ZOP_Main_DW.finishTimeCnt + 1;
          if (tmp > 127) {
            tmp = 127;
          }

          ZOP_Main_DW.finishTimeCnt = (int8_T)tmp;
        }
        break;

       case ZOP_Main_IN_OFF:
        tmp_0 = rtP_MODE_ZOP_OFF;
        if (tmp_0 > 127) {
          tmp_0 = 127U;
        }

        *rty_ZOP_Mode = (int8_T)tmp_0;
        if (ZOP_Main_B.BusCreator5.SystemOn == 1) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_PASSIVE;
          tmp_0 = rtP_MODE_ZOP_PASSIVE;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_InitHoldState(&ZOP_Main_B.ZOP_Vars);
        }
        break;

       case ZOP_Main_IN_PASSIVE:
        tmp_0 = rtP_MODE_ZOP_PASSIVE;
        if (tmp_0 > 127) {
          tmp_0 = 127U;
        }

        *rty_ZOP_Mode = (int8_T)tmp_0;
        if (ZOP_Main_B.BusCreator5.SystemOn != 1) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_OFF;
          tmp_0 = rtP_MODE_ZOP_OFF;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
        } else if (ZOP_Main_DW.ZOP_Ready == 1) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_READY;
          tmp_0 = rtP_MODE_ZOP_READY;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_B.LaneChangeCmd = 0;
          *rty_ZOP_Takeover = 0;
        } else {
          dist = ZOP_Main_CheckZopPreCondition
            (ZOP_Main_B.BusCreator1.isInZopZone, rtu_ACC_Output->ready,
             rtu_ACC_Output->active, ZOP_Main_B.LKS_Output.ready,
             ZOP_Main_B.LKS_Output.active);
          if (dist < 128.0) {
            if (dist >= -128.0) {
              ZOP_Main_DW.ZOP_Ready = (int8_T)dist;
            } else {
              ZOP_Main_DW.ZOP_Ready = MIN_int8_T;
            }
          } else {
            ZOP_Main_DW.ZOP_Ready = MAX_int8_T;
          }
        }
        break;

       default:
        tmp_0 = rtP_MODE_ZOP_READY;
        if (tmp_0 > 127) {
          tmp_0 = 127U;
        }

        *rty_ZOP_Mode = (int8_T)tmp_0;
        if (ZOP_Main_B.BusCreator5.SystemOn != 1) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_OFF;
          tmp_0 = rtP_MODE_ZOP_OFF;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
        } else if (ZOP_Main_DW.ZOP_Ready != 1) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_PASSIVE;
          tmp_0 = rtP_MODE_ZOP_PASSIVE;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_InitHoldState(&ZOP_Main_B.ZOP_Vars);
        } else if ((rtu_ACC_Output->error == 1) || (ZOP_Main_B.LKS_Output.error ==
                    1)) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_ERROR;
          tmp_0 = rtP_MODE_ZOP_ERROR;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
        } else if ((ZOP_Main_DW.ZOP_Ready == 1) &&
                   (ZOP_Main_B.BusCreator5.SystemEnable == 1) &&
                   (ZOP_Main_B.BusCreator5.SystemCancel != 1)) {
          ZOP_Main_DW.is_c2_ZOP_Main = ZOP_Main_IN_ENABLE;
          ZOP_Main_DW.is_ENABLE = ZOP_Main_IN_HOLD;
          tmp_0 = rtP_MODE_ZOP_HOLD;
          if (tmp_0 > 127) {
            tmp_0 = 127U;
          }

          *rty_ZOP_Mode = (int8_T)tmp_0;
          ZOP_Main_B.LaneChangeCmd = 0;
          *rty_ZOP_Takeover = 0;
          ZOP_Main_InitHoldState(&ZOP_Main_B.ZOP_Vars);
        } else {
          dist = ZOP_Main_CheckZopPreCondition
            (ZOP_Main_B.BusCreator1.isInZopZone, rtu_ACC_Output->ready,
             rtu_ACC_Output->active, ZOP_Main_B.LKS_Output.ready,
             ZOP_Main_B.LKS_Output.active);
          if (dist < 128.0) {
            if (dist >= -128.0) {
              ZOP_Main_DW.ZOP_Ready = (int8_T)dist;
            } else {
              ZOP_Main_DW.ZOP_Ready = MIN_int8_T;
            }
          } else {
            ZOP_Main_DW.ZOP_Ready = MAX_int8_T;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S4>/ZOP_State_Machine' */

    /* RelationalOperator: '<S4>/Relational Operator4' incorporates:
     *  Constant: '<S4>/C_Tmp9'
     */
    ZOP_Main_B.RelationalOperator4_c = (ZOP_Main_B.LaneChangeDir ==
      ZOP_Main_P_g.C_Tmp9_Value);

    /* RelationalOperator: '<S4>/Relational Operator2' incorporates:
     *  Constant: '<S4>/C_Tmp11'
     */
    ZOP_Main_B.RelationalOperator2_m = (ZOP_Main_B.LaneChangeDir ==
      ZOP_Main_P_g.C_Tmp11_Value);

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S4>/C_Tmp12'
     *  Constant: '<S4>/C_Tmp8'
     */
    if (ZOP_Main_B.RelationalOperator2_m) {
      ZOP_Main_B.Switch2_d = ZOP_Main_P_g.C_Tmp12_Value;
    } else {
      ZOP_Main_B.Switch2_d = ZOP_Main_P_g.C_Tmp8_Value;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/C_Tmp10'
     */
    if (ZOP_Main_B.RelationalOperator4_c) {
      ZOP_Main_B.Switch1 = ZOP_Main_P_g.C_Tmp10_Value;
    } else {
      ZOP_Main_B.Switch1 = ZOP_Main_B.Switch2_d;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* DataTypeConversion: '<S4>/Data Type Conversion7' */
    dist = floor(ZOP_Main_B.Switch1);
    if (rtIsNaN(dist) || rtIsInf(dist)) {
      dist = 0.0;
    } else {
      dist = fmod(dist, 256.0);
    }

    ZOP_Main_B.DataTypeConversion7_i = (int8_T)(dist < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-dist : (int32_T)(int8_T)(uint8_T)dist);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion7' */

    /* DataTypeConversion: '<S4>/Data Type Conversion6' */
    ZOP_Main_B.DataTypeConversion6_pu = (int8_T)ZOP_Main_B.ZOP_Vars.LCRes;

    /* DataTypeConversion: '<S4>/Data Type Conversion5' */
    ZOP_Main_B.DataTypeConversion5_o = (int8_T)ZOP_Main_B.ZOP_Vars.LCTip;

    /* DataTypeConversion: '<S4>/Data Type Conversion4' */
    ZOP_Main_B.DataTypeConversion4_h = ZOP_Main_B.ZOP_Vars.LCFailTip;

    /* DataTypeConversion: '<S4>/Data Type Conversion12' incorporates:
     *  Constant: '<S4>/C_Tmp1'
     */
    dist = floor(ZOP_Main_P_g.C_Tmp1_Value_j);
    if (rtIsNaN(dist) || rtIsInf(dist)) {
      dist = 0.0;
    } else {
      dist = fmod(dist, 256.0);
    }

    ZOP_Main_B.DataTypeConversion12_o = (int8_T)(dist < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-dist : (int32_T)(int8_T)(uint8_T)dist);

    /* End of DataTypeConversion: '<S4>/Data Type Conversion12' */

    /* BusCreator: '<S4>/Bus Creator2' */
    ZOP_Main_B.BusCreator2_n.LCDir = ZOP_Main_B.DataTypeConversion7_i;
    ZOP_Main_B.BusCreator2_n.LCRes = ZOP_Main_B.DataTypeConversion6_pu;
    ZOP_Main_B.BusCreator2_n.LCTip = ZOP_Main_B.DataTypeConversion5_o;
    ZOP_Main_B.BusCreator2_n.LCFailTip = ZOP_Main_B.DataTypeConversion4_h;
    ZOP_Main_B.BusCreator2_n.LCReqTip = ZOP_Main_B.DataTypeConversion12_o;
    ZOP_Main_B.BusCreator2_n.LCProp = ZOP_Main_B.DataTypeConversion12_o;
    ZOP_Main_B.BusCreator2_n.LCPropRes = ZOP_Main_B.DataTypeConversion12_o;

    /* Gain: '<S4>/Gain' */
    ZOP_Main_B.Gain_c0 = (int16_T)(ZOP_Main_P_g.Gain_Gain_k *
      ZOP_Main_B.LaneChangeCmd);

    /* RelationalOperator: '<S4>/Relational Operator1' incorporates:
     *  Constant: '<S4>/MODE_ZOP_ACTIVE'
     */
    ZOP_Main_B.RelationalOperator1_d = (rtP_MODE_ZOP_ACTIVE <= *rty_ZOP_Mode);

    /* RelationalOperator: '<S4>/Relational Operator' incorporates:
     *  Constant: '<S4>/MODE_ZOP_FINISH'
     */
    ZOP_Main_B.RelationalOperator_e = (*rty_ZOP_Mode <= rtP_MODE_ZOP_FINISH);

    /* Logic: '<S4>/Logical Operator' */
    *rty_ZOP_Enable = (ZOP_Main_B.RelationalOperator1_d &&
                       ZOP_Main_B.RelationalOperator_e);

    /* Update for UnitDelay: '<S4>/Unit Delay2' */
    ZOP_Main_DW.UnitDelay2_DSTATE_n = *rty_ZOP_Enable;

    /* Update for UnitDelay: '<S4>/Unit Delay1' */
    ZOP_Main_DW.UnitDelay1_DSTATE = rtu_MapInfo->LaneIndex;

    /* Update for UnitDelay: '<S4>/Unit Delay3' */
    ZOP_Main_DW.UnitDelay3_DSTATE_c = *rty_ZOP_Mode;

    /* Update for UnitDelay: '<S4>/Unit Delay5' */
    ZOP_Main_DW.UnitDelay5_DSTATE = rtu_MapInfo->LaneNum;

    /* Update for UnitDelay: '<S4>/Unit Delay4' */
    ZOP_Main_DW.UnitDelay4_DSTATE_l = ZOP_Main_B.ZOP_Vars.LCTime;

    /* End of Outputs for SubSystem: '<Root>/ZOP_Main_OS' */
    ZOP_Main_DW.i = 0;
  }

  /* End of Chart: '<Root>/ZOP_OS' */

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  ZOP_Main_B.BusCreator1_p.state = (uint8_T)*rty_ZOP_Mode;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  ZOP_Main_B.BusCreator1_p.activate_lck = *rty_ZOP_Enable;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  ZOP_Main_B.BusCreator1_p.lc_cmd = (int8_T)(ZOP_Main_B.Gain_c0 >> 7);

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2LKS_at_inport_0' */
  *rty_ZOP2LKS_state = ZOP_Main_B.BusCreator1_p.state;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2LKS_at_inport_0' */
  *rty_ZOP2LKS_activate_lck = ZOP_Main_B.BusCreator1_p.activate_lck;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2LKS_at_inport_0' */
  *rty_ZOP2LKS_lc_cmd = ZOP_Main_B.BusCreator1_p.lc_cmd;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  ZOP_Main_B.BusCreator2.state = (uint8_T)*rty_ZOP_Mode;

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  ZOP_Main_B.BusCreator2.activate_acc = *rty_ZOP_Enable;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  ZOP_Main_B.BusCreator2.spd_lmt = (real32_T)ZOP_Main_B.Switch7;

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  ZOP_Main_B.BusCreator2.light_des_spd = (real32_T)ZOP_Main_B.v_des;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  ZOP_Main_B.BusCreator2.light_a_des = (real32_T)ZOP_Main_B.a_des;

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  tmp_1 = (real32_T)floor(ZOP_Main_B.Switch_m);
  if (rtIsNaNF(tmp_1) || rtIsInfF(tmp_1)) {
    tmp_1 = 0.0F;
  } else {
    tmp_1 = (real32_T)fmod(tmp_1, 256.0);
  }

  ZOP_Main_B.BusCreator2.case_num = (int8_T)(tmp_1 < 0.0F ? (int32_T)(int8_T)
    -(int8_T)(uint8_T)-tmp_1 : (int32_T)(int8_T)(uint8_T)tmp_1);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion6' */

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  ZOP_Main_B.BusCreator2.light_dist = ZOP_Main_B.BusCreator4.dist;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2ACC_at_inport_0' */
  *rty_ZOP2ACC_state = ZOP_Main_B.BusCreator2.state;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2ACC_at_inport_0' */
  *rty_ZOP2ACC_activate_acc = ZOP_Main_B.BusCreator2.activate_acc;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2ACC_at_inport_0' */
  *rty_ZOP2ACC_spd_lmt = ZOP_Main_B.BusCreator2.spd_lmt;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2ACC_at_inport_0' */
  *rty_ZOP2ACC_light_des_spd = ZOP_Main_B.BusCreator2.light_des_spd;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2ACC_at_inport_0' */
  *rty_ZOP2ACC_light_a_des = ZOP_Main_B.BusCreator2.light_a_des;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2ACC_at_inport_0' */
  *rty_ZOP2ACC_case_num = ZOP_Main_B.BusCreator2.case_num;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2ACC_at_inport_0' */
  *rty_ZOP2ACC_light_dist = ZOP_Main_B.BusCreator2.light_dist;

  /* RelationalOperator: '<Root>/Relational Operator4' incorporates:
   *  Constant: '<Root>/MODE_ZOP_FINISH'
   */
  ZOP_Main_B.RelationalOperator4 = (*rty_ZOP_Mode == rtP_MODE_ZOP_FINISH);

  /* UnitDelay: '<Root>/Unit Delay2' */
  ZOP_Main_B.UnitDelay2 = ZOP_Main_DW.UnitDelay2_DSTATE;

  /* RelationalOperator: '<Root>/Relational Operator5' */
  ZOP_Main_B.RelationalOperator5 = ((int32_T)ZOP_Main_B.RelationalOperator4 <
    (int32_T)ZOP_Main_B.UnitDelay2);

  /* RelationalOperator: '<Root>/Relational Operator6' incorporates:
   *  Constant: '<Root>/ZOPACT9'
   *  Constant: '<Root>/k_ZOP_ALC_Ramp'
   */
  ZOP_Main_B.RelationalOperator6 = (rtP_k_ZOP_ALC_Ramp <
    ZOP_Main_P_g.ZOPACT9_Value);

  /* Logic: '<Root>/Logical Operator2' */
  ZOP_Main_B.LogicalOperator2 = (ZOP_Main_B.RelationalOperator6 &&
    ZOP_Main_B.RelationalOperator5);

  /* Switch: '<Root>/Switch6' incorporates:
   *  Constant: '<Root>/ZOPACT5'
   *  Constant: '<Root>/k_ZOP_VcTJA_Enable'
   */
  if (rtP_k_ZOP_VcTJA_Enable > ZOP_Main_P_g.Switch6_Threshold) {
    ZOP_Main_B.Switch6 = ZOP_Main_B.Switch2;
  } else {
    ZOP_Main_B.Switch6 = ZOP_Main_P_g.ZOPACT5_Value;
  }

  /* End of Switch: '<Root>/Switch6' */

  /* Logic: '<Root>/Logical Operator1' */
  ZOP_Main_B.LogicalOperator1 = (ZOP_Main_B.LogicalOperator2 ||
    (ZOP_Main_B.Switch6 != 0.0));

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  ZOP_Main_B.BusCreator3_m.activate_tja = ZOP_Main_B.LogicalOperator1;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  ZOP_Main_B.BusCreator3_m.is_zop_active = *rty_ZOP_Enable;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2TJA_at_inport_0' */
  *rty_ZOP2TJA_activate_tja = ZOP_Main_B.BusCreator3_m.activate_tja;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2TJA_at_inport_0' */
  *rty_ZOP2TJA_is_zop_active = ZOP_Main_B.BusCreator3_m.is_zop_active;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCDir = ZOP_Main_B.BusCreator2_n.LCDir;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCRes = ZOP_Main_B.BusCreator2_n.LCRes;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCTip = ZOP_Main_B.BusCreator2_n.LCTip;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCFailTip = ZOP_Main_B.BusCreator2_n.LCFailTip;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCReqTip = ZOP_Main_B.BusCreator2_n.LCReqTip;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCProp = ZOP_Main_B.BusCreator2_n.LCProp;

  /* SignalConversion: '<Root>/BusConversion_InsertedFor_ZOP2HMI_at_inport_0' */
  *rty_ZOP2HMI_LCPropRes = ZOP_Main_B.BusCreator2_n.LCPropRes;
}

/* Update for referenced model: 'ZOP_Main' */
void ZOP_Main_Update(int8_T *rty_ZOP_Mode)
{
  /* Update for UnitDelay: '<Root>/Unit Delay3' */
  ZOP_Main_DW.UnitDelay3_DSTATE = *rty_ZOP_Mode;

  /* Update for UnitDelay: '<Root>/Unit Delay2' */
  ZOP_Main_DW.UnitDelay2_DSTATE = ZOP_Main_B.RelationalOperator4;
}

/* Model initialize function */
void ZOP_Main_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_ZOP_Main_T *const ZOP_Main_M = &(ZOP_Main_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(ZOP_Main_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &ZOP_Main_B), 0,
                sizeof(B_ZOP_Main_c_T));

  /* states (dwork) */
  (void) memset((void *)&ZOP_Main_DW, 0,
                sizeof(DW_ZOP_Main_f_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    ZOP_Main_rti_init_trc_pointers();
    RTI_INIT_CODE_ENV();
  }
}
