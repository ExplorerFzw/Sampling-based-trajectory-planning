/*
 * Code generation for system model 'ZOP_Main'
 * For more details, see corresponding source file ZOP_Main.c
 *
 */

#ifndef RTW_HEADER_ZOP_Main_h_
#define RTW_HEADER_ZOP_Main_h_
#include <math.h>
#include <string.h>
#ifndef ZOP_Main_COMMON_INCLUDES_
# define ZOP_Main_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* ZOP_Main_COMMON_INCLUDES_ */

#include "ZOP_Main_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'ZOP_Main' */
#ifndef ZOP_Main_MDLREF_HIDE_CHILD_

typedef struct {
  ZOP_Var_ST ZOP_Vars;                 /* '<S4>/ZOP_State_Machine' */
  MapInfo_ST_Post BusCreator1;         /* '<S4>/Bus Creator1' */
  ZOP_Object_ST BusCreator3;           /* '<S4>/Bus Creator3' */
  ZOP_Object_ST ObjTarget[8];          /* '<S4>/TargetCheck' */
  ZOP_Object_ST Object;                /* '<S4>/TargetCheck' */
  ZOP_Object_ST Object_k;              /* '<S4>/TargetCheck' */
  VSI_VEHSTATE_ST VehStatus;           /* '<S4>/TargetCheck' */
  VSI_VEHSTATE_ST VehStatus_e;         /* '<S4>/TargetCheck' */
  ZOP2ACC BusCreator2;                 /* '<Root>/Bus Creator2' */
  Light_Info_ST BusCreator4;           /* '<Root>/Bus Creator4' */
  LKS_Status_ST LKS_Output;            /* '<S1>/LKS_Input_Proc' */
  real_T Switch4;                      /* '<Root>/Switch4' */
  real_T Switch2;                      /* '<Root>/Switch2' */
  real_T Switch5;                      /* '<Root>/Switch5' */
  real_T Switch3;                      /* '<Root>/Switch3' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T DataTypeConversion24;         /* '<Root>/Data Type Conversion24' */
  real_T Switch7;                      /* '<Root>/Switch7' */
  real_T Switch6;                      /* '<Root>/Switch6' */
  real_T Switch;                       /* '<S4>/Switch' */
  real_T Switch2_d;                    /* '<S4>/Switch2' */
  real_T Switch1;                      /* '<S4>/Switch1' */
  real_T ObjNum;                       /* '<S4>/TargetCheck' */
  real_T LC_Time;                      /* '<S4>/TargetCheck' */
  real_T LC_Time_n;                    /* '<S4>/TargetCheck' */
  real_T MinMax;                       /* '<S15>/MinMax' */
  real_T Divide2;                      /* '<S15>/Divide2' */
  real_T Add7;                         /* '<S15>/Add7' */
  real_T Abs5;                         /* '<S15>/Abs5' */
  real_T Gain3;                        /* '<S15>/Gain3' */
  real_T Add6;                         /* '<S15>/Add6' */
  real_T Switch3_b;                    /* '<S15>/Switch3' */
  real_T Switch1_k;                    /* '<S15>/Switch1' */
  real_T Divide;                       /* '<S15>/Divide' */
  real_T Switch2_h;                    /* '<S15>/Switch2' */
  real_T Gain_c;                       /* '<S15>/Gain' */
  real_T Product;                      /* '<S15>/Product' */
  real_T Switch4_n;                    /* '<S15>/Switch4' */
  real_T Gain1;                        /* '<S15>/Gain1' */
  real_T Product1;                     /* '<S15>/Product1' */
  real_T Add3;                         /* '<S15>/Add3' */
  real_T Divide1;                      /* '<S15>/Divide1' */
  real_T Abs;                          /* '<S15>/Abs' */
  real_T Abs1;                         /* '<S15>/Abs1' */
  real_T MinMax_n;                     /* '<S16>/MinMax' */
  real_T Divide2_j;                    /* '<S16>/Divide2' */
  real_T Add7_g;                       /* '<S16>/Add7' */
  real_T Abs5_j;                       /* '<S16>/Abs5' */
  real_T Gain3_o;                      /* '<S16>/Gain3' */
  real_T Add6_c;                       /* '<S16>/Add6' */
  real_T Switch3_j;                    /* '<S16>/Switch3' */
  real_T Switch1_ko;                   /* '<S16>/Switch1' */
  real_T Divide_j;                     /* '<S16>/Divide' */
  real_T Switch2_b;                    /* '<S16>/Switch2' */
  real_T Gain_j;                       /* '<S16>/Gain' */
  real_T Product_b;                    /* '<S16>/Product' */
  real_T Switch4_h;                    /* '<S16>/Switch4' */
  real_T Gain1_o;                      /* '<S16>/Gain1' */
  real_T Product1_h;                   /* '<S16>/Product1' */
  real_T Add3_e;                       /* '<S16>/Add3' */
  real_T Divide1_o;                    /* '<S16>/Divide1' */
  real_T Abs_f;                        /* '<S16>/Abs' */
  real_T Abs1_e;                       /* '<S16>/Abs1' */
  real_T DataTypeConversion2;          /* '<S2>/Data Type Conversion2' */
  real_T DataTypeConversion5;          /* '<S2>/Data Type Conversion5' */
  real_T DataTypeConversion1;          /* '<S2>/Data Type Conversion1' */
  real_T Switch1_a;                    /* '<S2>/Switch1' */
  real_T DataTypeConversion6;          /* '<S2>/Data Type Conversion6' */
  real_T v_des;                        /* '<S2>/Data Type Conversion7' */
  real_T a_des;                        /* '<S2>/Data Type Conversion8' */
  real_T DataTypeConversion4;          /* '<S2>/Data Type Conversion4' */
  real_T v_des_l;                      /* '<S2>/LightLogic' */
  real_T a_des_k;                      /* '<S2>/LightLogic' */
  real_T dist;                         /* '<S2>/LightLogic' */
  real_T case_num;                     /* '<S2>/LightLogic' */
  real_T Flag;                         /* '<S2>/Chart' */
  ZOP2TJA BusCreator3_m;               /* '<Root>/Bus Creator3' */
  ZOP2LCK BusCreator1_p;               /* '<Root>/Bus Creator1' */
  ZOP2HMI BusCreator2_n;               /* '<S4>/Bus Creator2' */
  SystemCmd_ST BusCreator5;            /* '<Root>/Bus Creator5' */
  real32_T DataTypeConversion17;       /* '<Root>/Data Type Conversion17' */
  real32_T DataTypeConversion15;       /* '<Root>/Data Type Conversion15' */
  real32_T DataTypeConversion16;       /* '<Root>/Data Type Conversion16' */
  real32_T DataTypeConversion12;       /* '<Root>/Data Type Conversion12' */
  real32_T DataTypeConversion14;       /* '<Root>/Data Type Conversion14' */
  real32_T DataTypeConversion18;       /* '<Root>/Data Type Conversion18' */
  real32_T Switch1_d;                  /* '<Root>/Switch1' */
  real32_T UnitDelay4;                 /* '<S1>/Unit Delay4' */
  real32_T UnitDelay4_i;               /* '<S4>/Unit Delay4' */
  real32_T DataTypeConversion3_f;      /* '<S4>/Data Type Conversion3' */
  real32_T Abs4;                       /* '<S15>/Abs4' */
  real32_T Saturation;                 /* '<S15>/Saturation' */
  real32_T Saturation1;                /* '<S15>/Saturation1' */
  real32_T Abs2;                       /* '<S16>/Abs2' */
  real32_T Abs4_d;                     /* '<S16>/Abs4' */
  real32_T Saturation_e;               /* '<S16>/Saturation' */
  real32_T Gain2;                      /* '<S16>/Gain2' */
  real32_T Gain4;                      /* '<S16>/Gain4' */
  real32_T Saturation1_k;              /* '<S16>/Saturation1' */
  real32_T LaneCurPost;                /* '<S4>/LaneStateProcess' */
  real32_T LaneStable;                 /* '<S4>/LaneStateProcess' */
  real32_T DataTypeConversion15_a;     /* '<S2>/Data Type Conversion15' */
  real32_T DataTypeConversion9_c;      /* '<S2>/Data Type Conversion9' */
  real32_T Switch_m;                   /* '<S2>/Switch' */
  int16_T Gain_c0;                     /* '<S4>/Gain' */
  uint8_T DataTypeConversion26;        /* '<Root>/Data Type Conversion26' */
  uint8_T DataTypeConversion21;        /* '<Root>/Data Type Conversion21' */
  uint8_T MinMax_p;                    /* '<Root>/MinMax' */
  uint8_T DataTypeConversion20;        /* '<Root>/Data Type Conversion20' */
  uint8_T DataTypeConversion22;        /* '<Root>/Data Type Conversion22' */
  uint8_T MinMax1;                     /* '<Root>/MinMax1' */
  int8_T UnitDelay3;                   /* '<Root>/Unit Delay3' */
  int8_T UnitDelay1;                   /* '<S4>/Unit Delay1' */
  int8_T UnitDelay3_h;                 /* '<S4>/Unit Delay3' */
  int8_T UnitDelay5;                   /* '<S4>/Unit Delay5' */
  int8_T DataTypeConversion18_c;       /* '<S4>/Data Type Conversion18' */
  int8_T VectorConcatenate[2];         /* '<S4>/Vector Concatenate' */
  int8_T DataTypeConversion16_b;       /* '<S4>/Data Type Conversion16' */
  int8_T DataTypeConversion17_n;       /* '<S4>/Data Type Conversion17' */
  int8_T DataTypeConversion7_i;        /* '<S4>/Data Type Conversion7' */
  int8_T DataTypeConversion6_pu;       /* '<S4>/Data Type Conversion6' */
  int8_T DataTypeConversion5_o;        /* '<S4>/Data Type Conversion5' */
  int8_T DataTypeConversion4_h;        /* '<S4>/Data Type Conversion4' */
  int8_T DataTypeConversion12_o;       /* '<S4>/Data Type Conversion12' */
  int8_T LaneChangeCmd;                /* '<S4>/ZOP_State_Machine' */
  int8_T LaneChangeDir;                /* '<S4>/ZOP_State_Machine' */
  boolean_T RelationalOperator2;       /* '<Root>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<Root>/Relational Operator3' */
  boolean_T RelationalOperator1;       /* '<Root>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<Root>/Relational Operator' */
  boolean_T RelationalOperator4;       /* '<Root>/Relational Operator4' */
  boolean_T UnitDelay2;                /* '<Root>/Unit Delay2' */
  boolean_T RelationalOperator5;       /* '<Root>/Relational Operator5' */
  boolean_T RelationalOperator6;       /* '<Root>/Relational Operator6' */
  boolean_T LogicalOperator2;          /* '<Root>/Logical Operator2' */
  boolean_T LogicalOperator1;          /* '<Root>/Logical Operator1' */
  boolean_T UnitDelay2_g;              /* '<S4>/Unit Delay2' */
  boolean_T RelationalOperator4_c;     /* '<S4>/Relational Operator4' */
  boolean_T RelationalOperator2_m;     /* '<S4>/Relational Operator2' */
  boolean_T RelationalOperator1_d;     /* '<S4>/Relational Operator1' */
  boolean_T RelationalOperator_e;      /* '<S4>/Relational Operator' */
  boolean_T RelationalOperator8;       /* '<S15>/Relational Operator8' */
  boolean_T RelationalOperator5_j;     /* '<S15>/Relational Operator5' */
  boolean_T LogicalOperator6;          /* '<S15>/Logical Operator6' */
  boolean_T RelationalOperator3_n;     /* '<S15>/Relational Operator3' */
  boolean_T RelationalOperator4_f;     /* '<S15>/Relational Operator4' */
  boolean_T LogicalOperator2_d;        /* '<S15>/Logical Operator2' */
  boolean_T RelationalOperator9;       /* '<S15>/Relational Operator9' */
  boolean_T RelationalOperator10;      /* '<S15>/Relational Operator10' */
  boolean_T LogicalOperator3;          /* '<S15>/Logical Operator3' */
  boolean_T UnitDelay1_f;              /* '<S15>/Unit Delay1' */
  boolean_T Switch7_k;                 /* '<S15>/Switch7' */
  boolean_T RelationalOperator2_g;     /* '<S15>/Relational Operator2' */
  boolean_T LogicalOperator5;          /* '<S15>/Logical Operator5' */
  boolean_T RelationalOperator11;      /* '<S15>/Relational Operator11' */
  boolean_T RelationalOperator12;      /* '<S15>/Relational Operator12' */
  boolean_T RelationalOperator1_f;     /* '<S15>/Relational Operator1' */
  boolean_T LogicalOperator4;          /* '<S15>/Logical Operator4' */
  boolean_T RelationalOperator8_m;     /* '<S16>/Relational Operator8' */
  boolean_T RelationalOperator5_m;     /* '<S16>/Relational Operator5' */
  boolean_T LogicalOperator6_o;        /* '<S16>/Logical Operator6' */
  boolean_T RelationalOperator3_d;     /* '<S16>/Relational Operator3' */
  boolean_T RelationalOperator4_l;     /* '<S16>/Relational Operator4' */
  boolean_T LogicalOperator2_m;        /* '<S16>/Logical Operator2' */
  boolean_T RelationalOperator9_l;     /* '<S16>/Relational Operator9' */
  boolean_T RelationalOperator10_a;    /* '<S16>/Relational Operator10' */
  boolean_T LogicalOperator3_n;        /* '<S16>/Logical Operator3' */
  boolean_T UnitDelay1_g;              /* '<S16>/Unit Delay1' */
  boolean_T Switch7_a;                 /* '<S16>/Switch7' */
  boolean_T RelationalOperator2_f;     /* '<S16>/Relational Operator2' */
  boolean_T LogicalOperator5_m;        /* '<S16>/Logical Operator5' */
  boolean_T RelationalOperator11_p;    /* '<S16>/Relational Operator11' */
  boolean_T RelationalOperator12_n;    /* '<S16>/Relational Operator12' */
  boolean_T RelationalOperator1_p;     /* '<S16>/Relational Operator1' */
  boolean_T LogicalOperator4_j;        /* '<S16>/Logical Operator4' */
  boolean_T RelationalOperator1_h;     /* '<S2>/Relational Operator1' */
} B_ZOP_Main_c_T;

#endif                                 /*ZOP_Main_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'ZOP_Main' */
#ifndef ZOP_Main_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Add7_DWORK1;                  /* '<S15>/Add7' */
  real32_T UnitDelay4_DSTATE;          /* '<S1>/Unit Delay4' */
  real32_T UnitDelay4_DSTATE_l;        /* '<S4>/Unit Delay4' */
  int32_T i;                           /* '<Root>/ZOP_OS' */
  int32_T changingCnt;                 /* '<S4>/LaneStateProcess' */
  int8_T UnitDelay3_DSTATE;            /* '<Root>/Unit Delay3' */
  int8_T UnitDelay1_DSTATE;            /* '<S4>/Unit Delay1' */
  int8_T UnitDelay3_DSTATE_c;          /* '<S4>/Unit Delay3' */
  int8_T UnitDelay5_DSTATE;            /* '<S4>/Unit Delay5' */
  boolean_T UnitDelay2_DSTATE;         /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_n;       /* '<S4>/Unit Delay2' */
  boolean_T UnitDelay1_DSTATE_g;       /* '<S15>/Unit Delay1' */
  boolean_T UnitDelay1_DSTATE_o;       /* '<S16>/Unit Delay1' */
  int8_T ZOP_Ready;                    /* '<S4>/ZOP_State_Machine' */
  int8_T finishTimeCnt;                /* '<S4>/ZOP_State_Machine' */
  int8_T LaneChangeQuit;               /* '<S4>/ZOP_State_Machine' */
  uint8_T is_active_c2_ZOP_Main;       /* '<S4>/ZOP_State_Machine' */
  uint8_T is_c2_ZOP_Main;              /* '<S4>/ZOP_State_Machine' */
  uint8_T is_ENABLE;                   /* '<S4>/ZOP_State_Machine' */
  uint8_T is_active_c5_ZOP_Main;       /* '<S4>/TargetCheck' */
  uint8_T is_c5_ZOP_Main;              /* '<S4>/TargetCheck' */
  uint8_T is_active_c4_ZOP_Main;       /* '<S4>/LaneStateProcess' */
  uint8_T is_c4_ZOP_Main;              /* '<S4>/LaneStateProcess' */
  uint8_T is_active_c1_ZOP_Main;       /* '<S2>/Chart' */
  uint8_T is_c1_ZOP_Main;              /* '<S2>/Chart' */
} DW_ZOP_Main_f_T;

#endif                                 /*ZOP_Main_MDLREF_HIDE_CHILD_*/

#ifndef ZOP_Main_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_ZOP_Main_T_ {
  LKS_Status_ST Out1_Y0;               /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S1>/Out1'
                                        */
  ZOP2HMI ZOP2HMI_Y0;                  /* Computed Parameter: ZOP2HMI_Y0
                                        * Referenced by: '<S4>/ZOP2HMI'
                                        */
  real_T v_des_Y0;                     /* Computed Parameter: v_des_Y0
                                        * Referenced by: '<S2>/v_des'
                                        */
  real_T a_des_Y0;                     /* Computed Parameter: a_des_Y0
                                        * Referenced by: '<S2>/a_des'
                                        */
  real_T C_Tmp1_Value;                 /* Expression: 0
                                        * Referenced by: '<S2>/C_Tmp1'
                                        */
  real_T C_Tmp3_Value;                 /* Expression: 15
                                        * Referenced by: '<S2>/C_Tmp3'
                                        */
  real_T C_Tmp2_Value;                 /* Expression: 0.5
                                        * Referenced by: '<S2>/C_Tmp2'
                                        */
  real_T C_Value;                      /* Expression: 0
                                        * Referenced by: '<S16>/C'
                                        */
  real_T Constant9_Value;              /* Expression: 3
                                        * Referenced by: '<S16>/Constant9'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S16>/Gain3'
                                        */
  real_T Constant10_Value;             /* Expression: 1.5
                                        * Referenced by: '<S16>/Constant10'
                                        */
  real_T Constant1_Value;              /* Expression: 200
                                        * Referenced by: '<S16>/Constant1'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch1'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S16>/Constant7'
                                        */
  real_T CK1_Value;                    /* Expression: 0.9
                                        * Referenced by: '<S16>/CK1'
                                        */
  real_T CK2_Value;                    /* Expression: 0.8
                                        * Referenced by: '<S16>/CK2'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S16>/Constant2'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch2'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S16>/Gain'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<S16>/Constant36'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch4'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S16>/Gain1'
                                        */
  real_T CK3_Value;                    /* Expression: 0.8
                                        * Referenced by: '<S16>/CK3'
                                        */
  real_T CK4_Value;                    /* Expression: 0.7
                                        * Referenced by: '<S16>/CK4'
                                        */
  real_T C2_Value;                     /* Expression: 4
                                        * Referenced by: '<S16>/C2'
                                        */
  real_T CK5_Value;                    /* Expression: 0.6
                                        * Referenced by: '<S16>/CK5'
                                        */
  real_T C1_Value;                     /* Expression: 7
                                        * Referenced by: '<S16>/C1'
                                        */
  real_T C_Value_d;                    /* Expression: 0
                                        * Referenced by: '<S15>/C'
                                        */
  real_T Constant9_Value_i;            /* Expression: 3
                                        * Referenced by: '<S15>/Constant9'
                                        */
  real_T Gain3_Gain_o;                 /* Expression: 0.5
                                        * Referenced by: '<S15>/Gain3'
                                        */
  real_T Constant10_Value_e;           /* Expression: 1.5
                                        * Referenced by: '<S15>/Constant10'
                                        */
  real_T Constant1_Value_e;            /* Expression: 200
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real_T Switch1_Threshold_o;          /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch1'
                                        */
  real_T Constant7_Value_h;            /* Expression: 1
                                        * Referenced by: '<S15>/Constant7'
                                        */
  real_T CF1_Value;                    /* Expression: 0.9
                                        * Referenced by: '<S15>/CF1'
                                        */
  real_T CF2_Value;                    /* Expression: 0.8
                                        * Referenced by: '<S15>/CF2'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S15>/Constant2'
                                        */
  real_T Switch2_Threshold_a;          /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch2'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1
                                        * Referenced by: '<S15>/Gain'
                                        */
  real_T Constant36_Value_j;           /* Expression: 0
                                        * Referenced by: '<S15>/Constant36'
                                        */
  real_T Switch4_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch4'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 0.5
                                        * Referenced by: '<S15>/Gain1'
                                        */
  real_T CF3_Value;                    /* Expression: 0.8
                                        * Referenced by: '<S15>/CF3'
                                        */
  real_T CF4_Value;                    /* Expression: 0.7
                                        * Referenced by: '<S15>/CF4'
                                        */
  real_T C2_Value_c;                   /* Expression: 4
                                        * Referenced by: '<S15>/C2'
                                        */
  real_T CF5_Value;                    /* Expression: 0.6
                                        * Referenced by: '<S15>/CF5'
                                        */
  real_T C1_Value_i;                   /* Expression: 7
                                        * Referenced by: '<S15>/C1'
                                        */
  real_T C_Tmp7_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/C_Tmp7'
                                        */
  real_T C_Tmp2_Value_f;               /* Expression: 1
                                        * Referenced by: '<S4>/C_Tmp2'
                                        */
  real_T C_Tmp3_Value_p;               /* Expression: 0
                                        * Referenced by: '<S4>/C_Tmp3'
                                        */
  real_T C_Tmp4_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/C_Tmp4'
                                        */
  real_T C_Tmp5_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/C_Tmp5'
                                        */
  real_T C_Tmp6_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/C_Tmp6'
                                        */
  real_T C_Tmp9_Value;                 /* Expression: -1
                                        * Referenced by: '<S4>/C_Tmp9'
                                        */
  real_T C_Tmp10_Value;                /* Expression: 1
                                        * Referenced by: '<S4>/C_Tmp10'
                                        */
  real_T C_Tmp12_Value;                /* Expression: 2
                                        * Referenced by: '<S4>/C_Tmp12'
                                        */
  real_T C_Tmp11_Value;                /* Expression: 1
                                        * Referenced by: '<S4>/C_Tmp11'
                                        */
  real_T C_Tmp8_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/C_Tmp8'
                                        */
  real_T C_Tmp1_Value_j;               /* Expression: 0
                                        * Referenced by: '<S4>/C_Tmp1'
                                        */
  real_T ZOPACT3_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/ZOPACT3'
                                        */
  real_T ZOPACT1_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/ZOPACT1'
                                        */
  real_T ZOPACT_Value;                 /* Expression: 2
                                        * Referenced by: '<Root>/ZOPACT'
                                        */
  real_T ZOPACT2_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/ZOPACT2'
                                        */
  real_T ZOPACT7_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/ZOPACT7'
                                        */
  real_T ZOPACT6_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/ZOPACT6'
                                        */
  real_T ZOPNACT1_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/ZOPNACT1'
                                        */
  real_T ZOPACT4_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/ZOPACT4'
                                        */
  real_T ZOPACT8_Value;                /* Expression: 100
                                        * Referenced by: '<Root>/ZOPACT8'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 1/3.6
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T C_Tmp2_Value_h;               /* Expression: 1000
                                        * Referenced by: '<Root>/C_Tmp2'
                                        */
  real_T C_Tmp1_Value_f;               /* Expression: -100
                                        * Referenced by: '<Root>/C_Tmp1'
                                        */
  real_T LCDist_Value;                 /* Expression: 3.5
                                        * Referenced by: '<Root>/LCDist'
                                        */
  real_T ZOPACT9_Value;                /* Expression: 0.5
                                        * Referenced by: '<Root>/ZOPACT9'
                                        */
  real_T ZOPACT5_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/ZOPACT5'
                                        */
  real32_T case_num_Y0;                /* Computed Parameter: case_num_Y0
                                        * Referenced by: '<S2>/case_num'
                                        */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S2>/Switch'
                                        */
  real32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S16>/Gain2'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S16>/Gain4'
                                        */
  real32_T Saturation1_UpperSat;       /* Computed Parameter: Saturation1_UpperSat
                                        * Referenced by: '<S16>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat;       /* Computed Parameter: Saturation1_LowerSat
                                        * Referenced by: '<S16>/Saturation1'
                                        */
  real32_T Saturation_UpperSat_n;      /* Computed Parameter: Saturation_UpperSat_n
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real32_T Saturation_LowerSat_i;      /* Computed Parameter: Saturation_LowerSat_i
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real32_T Saturation1_UpperSat_o;     /* Computed Parameter: Saturation1_UpperSat_o
                                        * Referenced by: '<S15>/Saturation1'
                                        */
  real32_T Saturation1_LowerSat_j;     /* Computed Parameter: Saturation1_LowerSat_j
                                        * Referenced by: '<S15>/Saturation1'
                                        */
  real32_T UnitDelay4_InitialCondition;/* Computed Parameter: UnitDelay4_InitialCondition
                                        * Referenced by: '<S4>/Unit Delay4'
                                        */
  real32_T UnitDelay4_InitialCondition_m;/* Computed Parameter: UnitDelay4_InitialCondition_m
                                          * Referenced by: '<S1>/Unit Delay4'
                                          */
  real32_T Switch4_Threshold_m;        /* Computed Parameter: Switch4_Threshold_m
                                        * Referenced by: '<Root>/Switch4'
                                        */
  real32_T Switch5_Threshold;          /* Computed Parameter: Switch5_Threshold
                                        * Referenced by: '<Root>/Switch5'
                                        */
  real32_T Switch7_Threshold;          /* Computed Parameter: Switch7_Threshold
                                        * Referenced by: '<Root>/Switch7'
                                        */
  real32_T Switch6_Threshold;          /* Computed Parameter: Switch6_Threshold
                                        * Referenced by: '<Root>/Switch6'
                                        */
  int16_T LC_Cmd_Y0;                   /* Computed Parameter: LC_Cmd_Y0
                                        * Referenced by: '<S4>/LC_Cmd'
                                        */
  boolean_T TargetExist_Y0;            /* Computed Parameter: TargetExist_Y0
                                        * Referenced by: '<S16>/TargetExist'
                                        */
  boolean_T TargetExist2_Y0;           /* Computed Parameter: TargetExist2_Y0
                                        * Referenced by: '<S16>/TargetExist2'
                                        */
  boolean_T UnitDelay1_InitialCondition;/* Computed Parameter: UnitDelay1_InitialCondition
                                         * Referenced by: '<S16>/Unit Delay1'
                                         */
  boolean_T TargetExist_Y0_m;          /* Computed Parameter: TargetExist_Y0_m
                                        * Referenced by: '<S15>/TargetExist'
                                        */
  boolean_T TargetExist2_Y0_c;         /* Computed Parameter: TargetExist2_Y0_c
                                        * Referenced by: '<S15>/TargetExist2'
                                        */
  boolean_T UnitDelay1_InitialCondition_j;/* Computed Parameter: UnitDelay1_InitialCondition_j
                                           * Referenced by: '<S15>/Unit Delay1'
                                           */
  boolean_T ZOP_Enable_Y0;             /* Computed Parameter: ZOP_Enable_Y0
                                        * Referenced by: '<S4>/ZOP_Enable'
                                        */
  boolean_T UnitDelay2_InitialCondition;/* Computed Parameter: UnitDelay2_InitialCondition
                                         * Referenced by: '<S4>/Unit Delay2'
                                         */
  boolean_T UnitDelay2_InitialCondition_j;/* Computed Parameter: UnitDelay2_InitialCondition_j
                                           * Referenced by: '<Root>/Unit Delay2'
                                           */
  int8_T UnitDelay1_InitialCondition_b;/* Computed Parameter: UnitDelay1_InitialCondition_b
                                        * Referenced by: '<S4>/Unit Delay1'
                                        */
  int8_T UnitDelay3_InitialCondition;  /* Computed Parameter: UnitDelay3_InitialCondition
                                        * Referenced by: '<S4>/Unit Delay3'
                                        */
  int8_T UnitDelay5_InitialCondition;  /* Computed Parameter: UnitDelay5_InitialCondition
                                        * Referenced by: '<S4>/Unit Delay5'
                                        */
  int8_T UnitDelay3_InitialCondition_m;/* Computed Parameter: UnitDelay3_InitialCondition_m
                                        * Referenced by: '<Root>/Unit Delay3'
                                        */
  int8_T Gain_Gain_k;                  /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S4>/Gain'
                                        */
};

#endif                                 /*ZOP_Main_MDLREF_HIDE_CHILD_*/

#ifndef ZOP_Main_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_ZOP_Main_T {
  const char_T **errorStatus;
};

#endif                                 /*ZOP_Main_MDLREF_HIDE_CHILD_*/

#ifndef ZOP_Main_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_ZOP_Main_T rtm;
} MdlrefDW_ZOP_Main_T;

#endif                                 /*ZOP_Main_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real32_T rtP_k_ZOP_ALC_D10;     /* Variable: k_ZOP_ALC_D10
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_ALC_Enable;  /* Variable: k_ZOP_ALC_Enable
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_ALC_Ramp;    /* Variable: k_ZOP_ALC_Ramp
                                        * Referenced by:
                                        *   '<Root>/k_ZOP_ALC_Ramp'
                                        *   '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_HoldCnt;     /* Variable: k_ZOP_HoldCnt
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_LCProCnt;    /* Variable: k_ZOP_LCProCnt
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_LCTimeMax;   /* Variable: k_ZOP_LCTimeMax
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_LS_ChangingDist;/* Variable: k_ZOP_LS_ChangingDist
                                           * Referenced by: '<S4>/k_LS_ChangingDist'
                                           */
extern real32_T rtP_k_ZOP_LS_ChangingTime;/* Variable: k_ZOP_LS_ChangingTime
                                           * Referenced by: '<S4>/k_LS_ChangingTime'
                                           */
extern real32_T rtP_k_ZOP_MapFlag_Enable;/* Variable: k_ZOP_MapFlag_Enable
                                          * Referenced by: '<S4>/ZOP_State_Machine'
                                          */
extern real32_T rtP_k_ZOP_ObjSpd_cf;   /* Variable: k_ZOP_ObjSpd_cf
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_SpdCkDstThr; /* Variable: k_ZOP_SpdCkDstThr
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_SpdLmt_Enable;/* Variable: k_ZOP_SpdLmt_Enable
                                         * Referenced by: '<Root>/k_ZOP_SpdLmt_Enable'
                                         */
extern real32_T rtP_k_ZOP_SpdLoThr;    /* Variable: k_ZOP_SpdLoThr
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern real32_T rtP_k_ZOP_V2X_Enable;  /* Variable: k_ZOP_V2X_Enable
                                        * Referenced by: '<S2>/k_ZOP_V2X_Enable'
                                        */
extern real32_T rtP_k_ZOP_VcTJA_Enable;/* Variable: k_ZOP_VcTJA_Enable
                                        * Referenced by: '<Root>/k_ZOP_VcTJA_Enable'
                                        */
extern real32_T rtP_k_ZOP_VoiceAct_Enable;/* Variable: k_ZOP_VoiceAct_Enable
                                           * Referenced by:
                                           *   '<Root>/k_ZOP_VoiceAct_Enable'
                                           *   '<Root>/k_ZOP_VoiceAct_Enable1'
                                           */
extern int8_T rtP_k_ZOP_ALC_SCnt;      /* Variable: k_ZOP_ALC_SCnt
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern int8_T rtP_k_ZOP_ALC_SCnt_LC;   /* Variable: k_ZOP_ALC_SCnt_LC
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern int8_T rtP_k_ZOP_ALC_SCnt_Thr;  /* Variable: k_ZOP_ALC_SCnt_Thr
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern int8_T rtP_k_ZOP_ALC_SCnt_Thr_LC;/* Variable: k_ZOP_ALC_SCnt_Thr_LC
                                         * Referenced by: '<S4>/ZOP_State_Machine'
                                         */
extern int8_T rtP_k_ZOP_ALC_SNCnt;     /* Variable: k_ZOP_ALC_SNCnt
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern int8_T rtP_k_ZOP_ALC_SNCnt_LC;  /* Variable: k_ZOP_ALC_SNCnt_LC
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern int8_T rtP_k_ZOP_ALC_SpdEnable; /* Variable: k_ZOP_ALC_SpdEnable
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern int8_T rtP_k_ZOP_SpdLoTimeThr;  /* Variable: k_ZOP_SpdLoTimeThr
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern uint8_T rtP_MODE_ZOP_ACTIVE;    /* Variable: MODE_ZOP_ACTIVE
                                        * Referenced by: '<S4>/MODE_ZOP_ACTIVE'
                                        */
extern uint8_T rtP_MODE_ZOP_ERROR;     /* Variable: MODE_ZOP_ERROR
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern uint8_T rtP_MODE_ZOP_FINISH;    /* Variable: MODE_ZOP_FINISH
                                        * Referenced by:
                                        *   '<Root>/MODE_ZOP_FINISH'
                                        *   '<S4>/ZOP_State_Machine'
                                        *   '<S4>/MODE_ZOP_FINISH'
                                        */
extern uint8_T rtP_MODE_ZOP_HOLD;      /* Variable: MODE_ZOP_HOLD
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern uint8_T rtP_MODE_ZOP_LC;        /* Variable: MODE_ZOP_LC
                                        * Referenced by:
                                        *   '<Root>/MODE_ZOP_LC'
                                        *   '<S4>/LaneStateProcess'
                                        *   '<S4>/ZOP_State_Machine'
                                        */
extern uint8_T rtP_MODE_ZOP_OFF;       /* Variable: MODE_ZOP_OFF
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern uint8_T rtP_MODE_ZOP_OVERIDE;   /* Variable: MODE_ZOP_OVERIDE
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern uint8_T rtP_MODE_ZOP_PASSIVE;   /* Variable: MODE_ZOP_PASSIVE
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern uint8_T rtP_MODE_ZOP_READY;     /* Variable: MODE_ZOP_READY
                                        * Referenced by: '<S4>/ZOP_State_Machine'
                                        */
extern void ZOP_Main_Init(int8_T *rty_ZOP_Takeover, int8_T *rty_ZOP_Mode,
  boolean_T *rty_ZOP_Enable, int8_T *rty_ZOP2HMI_LCDir, int8_T
  *rty_ZOP2HMI_LCRes, int8_T *rty_ZOP2HMI_LCTip, int8_T *rty_ZOP2HMI_LCFailTip,
  int8_T *rty_ZOP2HMI_LCReqTip, int8_T *rty_ZOP2HMI_LCProp, int8_T
  *rty_ZOP2HMI_LCPropRes);
extern void ZOP_Main_Reset(void);
extern void ZOP_Main_Update(int8_T *rty_ZOP_Mode);
extern void ZOP_Main(const SystemCmd_ST *rtu_SystemCmd_Input, const
                     VSI_VEHSTATE_ST *rtu_VehStatus_Input, const
                     FUS_OBJ_OUTPUT_ST *rtu_FusionObj_Input, const
                     FUS_LANE_OUTPUT_ST *rtu_FusionLane_Input, const
                     HWA_TARGETOBJECT_OUTPUT_ST *rtu_RoadModel_TS_Input, const
                     ACC_Status_ST *rtu_ACC_Output, const real32_T *rtu_LKS_Mode,
                     const ATS_PO_ST *rtu_ACC_PO, const real32_T *rtu_LC_dx,
                     const MapInfo_ST *rtu_MapInfo, const Light_Info_ST
                     *rtu_LightInfo, const real_T *rtu_SpdLmt, const ZOP_HMI_REQ
                     *rtu_ZOP_HMI_Req, uint8_T *rty_ZOP2ACC_state, uint8_T
                     *rty_ZOP2ACC_activate_acc, real32_T *rty_ZOP2ACC_spd_lmt,
                     real32_T *rty_ZOP2ACC_light_des_spd, real32_T
                     *rty_ZOP2ACC_light_a_des, int8_T *rty_ZOP2ACC_case_num,
                     real32_T *rty_ZOP2ACC_light_dist, uint8_T
                     *rty_ZOP2LKS_state, uint8_T *rty_ZOP2LKS_activate_lck,
                     int8_T *rty_ZOP2LKS_lc_cmd, uint8_T
                     *rty_ZOP2TJA_activate_tja, uint8_T
                     *rty_ZOP2TJA_is_zop_active, int8_T *rty_ZOP_Takeover,
                     int8_T *rty_ZOP_Mode, boolean_T *rty_ZOP_Enable, int8_T
                     *rty_ZOP2HMI_LCDir, int8_T *rty_ZOP2HMI_LCRes, int8_T
                     *rty_ZOP2HMI_LCTip, int8_T *rty_ZOP2HMI_LCFailTip, int8_T
                     *rty_ZOP2HMI_LCReqTip, int8_T *rty_ZOP2HMI_LCProp, int8_T
                     *rty_ZOP2HMI_LCPropRes);

/* Model reference registration function */
extern void ZOP_Main_initialize(const char_T **rt_errorStatus);

#ifndef ZOP_Main_MDLREF_HIDE_CHILD_

extern MdlrefDW_ZOP_Main_T ZOP_Main_MdlrefDW;

#endif                                 /*ZOP_Main_MDLREF_HIDE_CHILD_*/

#ifndef ZOP_Main_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_ZOP_Main_c_T ZOP_Main_B;

/* Block states (default storage) */
extern DW_ZOP_Main_f_T ZOP_Main_DW;

#endif                                 /*ZOP_Main_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ZOP_Main'
 * '<S1>'   : 'ZOP_Main/LKS_Mode_Conv'
 * '<S2>'   : 'ZOP_Main/Light_Process'
 * '<S3>'   : 'ZOP_Main/RTI Data'
 * '<S4>'   : 'ZOP_Main/ZOP_Main_OS'
 * '<S5>'   : 'ZOP_Main/ZOP_OS'
 * '<S6>'   : 'ZOP_Main/LKS_Mode_Conv/LKS_Input_Proc'
 * '<S7>'   : 'ZOP_Main/Light_Process/Chart'
 * '<S8>'   : 'ZOP_Main/Light_Process/LightLogic'
 * '<S9>'   : 'ZOP_Main/RTI Data/RTI Data Store'
 * '<S10>'  : 'ZOP_Main/RTI Data/RTI Data Store/RTI Data Store'
 * '<S11>'  : 'ZOP_Main/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S12>'  : 'ZOP_Main/ZOP_Main_OS/LaneStateProcess'
 * '<S13>'  : 'ZOP_Main/ZOP_Main_OS/TargetCheck'
 * '<S14>'  : 'ZOP_Main/ZOP_Main_OS/ZOP_State_Machine'
 * '<S15>'  : 'ZOP_Main/ZOP_Main_OS/TargetCheck/DEFAULT.CheckTargetF'
 * '<S16>'  : 'ZOP_Main/ZOP_Main_OS/TargetCheck/DEFAULT.CheckTargetR'
 */
#endif                                 /* RTW_HEADER_ZOP_Main_h_ */
