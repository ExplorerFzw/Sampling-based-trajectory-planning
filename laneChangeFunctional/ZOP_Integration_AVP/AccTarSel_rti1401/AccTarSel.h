/*
 * AccTarSel.h
 *
 * Code generation for model "AccTarSel".
 *
 * Model version              : 1.222
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Dec  2 15:41:53 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AccTarSel_h_
#define RTW_HEADER_AccTarSel_h_
#include <math.h>
#include <string.h>
#ifndef AccTarSel_COMMON_INCLUDES_
# define AccTarSel_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* AccTarSel_COMMON_INCLUDES_ */

#include "AccTarSel_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

/* Block signals for system '<S6>/For Each Subsystem' */
typedef struct {
  OBJDATA_ST BusCreator;               /* '<S117>/Bus Creator' */
  real32_T Add;                        /* '<S118>/Add' */
  real32_T dx;                         /* '<S118>/Max' */
  real32_T dy;                         /* '<S117>/Data Type Conversion2' */
  real32_T vx;                         /* '<S117>/Data Type Conversion1' */
  real32_T vy;                         /* '<S117>/Data Type Conversion3' */
  real32_T ax;                         /* '<S117>/Data Type Conversion4' */
  real32_T uDLookupTable;              /* '<S119>/1-D Lookup Table' */
  real32_T MotionSts;                  /* '<S117>/Data Type Conversion6' */
  real32_T uDLookupTable_o;            /* '<S120>/1-D Lookup Table' */
  real32_T Type;                       /* '<S117>/Data Type Conversion7' */
  real32_T ID;                         /* '<S117>/Data Type Conversion8' */
  boolean_T DataTypeConversion9;       /* '<S117>/Data Type Conversion9' */
  boolean_T Valid;                     /* '<S117>/Data Type Conversion' */
} B_CoreSubsys_AccTarSel_T;

/* Block signals (default storage) */
typedef struct {
  FUS_OBJDATA_ST BusCreator;           /* '<S6>/Bus Creator' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st;/* '<Root>/Memory' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st_f;/* '<Root>/Bus Creator' */
  Obj_Data VectorConcatenate[40];      /* '<S6>/Vector Concatenate' */
  OBJDATA_ST Selector;                 /* '<S3>/Selector' */
  ATS_OBJINFO_ST Selector_k;           /* '<Root>/Selector' */
  ATS_OBJINFO_ST Selector1;            /* '<S3>/Selector1' */
  ATS_OBJINFO_ST Assignment1[40];      /* '<S3>/Assignment1' */
  ATS_OBJINFO_ST BusCreator_p;         /* '<S84>/Bus Creator' */
  ATS_PO_ST Memory1;                   /* '<Root>/Memory1' */
  ATS_PO_ST BusCreator_o;              /* '<S83>/Bus Creator' */
  NET_DRVACTION_ST BusCreator_oy;      /* '<S10>/Bus Creator' */
  AST_INFO_ST AST_Info_st;             /* '<Root>/ACC_State_Machine' */
  real32_T Abs;                        /* '<S111>/Abs' */
  real32_T uDLookupTable;              /* '<S111>/1-D Lookup Table' */
  real32_T Merge;                      /* '<S111>/Merge' */
  real32_T Divide;                     /* '<S111>/Divide' */
  real32_T Multiply;                   /* '<S111>/Multiply' */
  real32_T Add;                        /* '<S111>/Add' */
  real32_T Memory;                     /* '<S111>/Memory' */
  real32_T Multiply1;                  /* '<S111>/Multiply1' */
  real32_T Add1;                       /* '<S111>/Add1' */
  real32_T b;                          /* '<S4>/Multiply' */
  real32_T vx;
  real32_T ax;
  real32_T vx_m;                       /* '<S11>/Merge' */
  real32_T ax_p;                       /* '<S11>/Merge1' */
  real32_T axAbs;                      /* '<S11>/Merge2' */
  real32_T vAbsObj;                    /* '<S9>/Add' */
  real32_T vDiff;                      /* '<S16>/Add' */
  real32_T tSSC;                       /* '<S16>/Merge' */
  real32_T aSSC;                       /* '<S16>/Divide' */
  real32_T Memory_a;                   /* '<S1>/Memory' */
  real32_T Merge_j;                    /* '<S15>/Merge' */
  real32_T Min;                        /* '<S13>/Min' */
  real32_T Max;                        /* '<S12>/Max' */
  real32_T Max1;                       /* '<S12>/Max1' */
  real32_T vSet;                       /* '<S16>/vSet' */
  real32_T ax_n;                       /* '<S126>/ax' */
  real32_T Max_e;                      /* '<S129>/Max' */
  real32_T filtFactor;                 /* '<S129>/Divide' */
  real32_T Multiply_p;                 /* '<S129>/Multiply' */
  real32_T Add_l;                      /* '<S129>/Add' */
  real32_T Multiply1_k;                /* '<S129>/Multiply1' */
  real32_T Add1_g;                     /* '<S129>/Add1' */
  real32_T Add_h;                      /* '<S127>/Add' */
  real32_T Max_f;                      /* '<S128>/Max' */
  real32_T filtFactor_f;               /* '<S128>/Divide' */
  real32_T Add_p;                      /* '<S128>/Add' */
  real32_T Multiply_k;                 /* '<S128>/Multiply' */
  real32_T Multiply1_j;                /* '<S128>/Multiply1' */
  real32_T Max_d;                      /* '<S130>/Max' */
  real32_T filtFactor_c;               /* '<S130>/Divide' */
  real32_T Add_k;                      /* '<S130>/Add' */
  real32_T Multiply_ps;                /* '<S130>/Multiply' */
  real32_T Multiply1_n;                /* '<S130>/Multiply1' */
  real32_T Delay;                      /* '<S83>/Delay' */
  real32_T DataTypeConversion;         /* '<S83>/Data Type Conversion' */
  real32_T Index;                      /* '<S83>/Merge5' */
  real32_T dx;                         /* '<S83>/Merge' */
  real32_T dy;                         /* '<S83>/Merge1' */
  real32_T vx_o;                       /* '<S83>/Merge2' */
  real32_T vy;                         /* '<S83>/Merge3' */
  real32_T ax_a;                       /* '<S83>/Merge4' */
  real32_T axAbs_j;                    /* '<S83>/axAbsInit' */
  real32_T Type;                       /* '<S83>/Merge7' */
  real32_T dyToTraj;                   /* '<S86>/Merge' */
  real32_T dyCutInPred;                /* '<S85>/Merge1' */
  real32_T Merge2;                     /* '<S85>/Merge2' */
  real32_T Merge_n;                    /* '<S85>/Merge' */
  real32_T Merge_ns;                   /* '<S88>/Merge' */
  real32_T Multiply_o;                 /* '<S87>/Multiply' */
  real32_T Switch;                     /* '<S87>/Switch' */
  real32_T Add_a;                      /* '<S87>/Add' */
  real32_T Min_c;                      /* '<S87>/Min' */
  real32_T Min1;                       /* '<S87>/Min1' */
  real32_T Switch1;                    /* '<S87>/Switch1' */
  real32_T Max_g;                      /* '<S87>/Max' */
  real32_T Merge_k;                    /* '<S87>/Merge' */
  real32_T uDLookupTable_d;            /* '<S106>/1-D Lookup Table' */
  real32_T dyWidthTraj;                /* '<S102>/1-D Lookup Table' */
  real32_T dyToTrajAbs;                /* '<S102>/Abs' */
  real32_T Add_ko;                     /* '<S102>/Add' */
  real32_T Divide_n;                   /* '<S102>/Divide' */
  real32_T Square;                     /* '<S97>/Square' */
  real32_T Multiply_p3;                /* '<S97>/Multiply' */
  real32_T Square1;                    /* '<S97>/Square1' */
  real32_T Multiply1_d;                /* '<S97>/Multiply1' */
  real32_T Multiply2;                  /* '<S97>/Multiply2' */
  real32_T Add_c;                      /* '<S97>/Add' */
  real32_T Abs_b;                      /* '<S93>/Abs' */
  real32_T Abs1;                       /* '<S93>/Abs1' */
  real32_T Multiply_c;                 /* '<S93>/Multiply' */
  real32_T Max_c;                      /* '<S96>/Max' */
  real32_T filtFactor_b;               /* '<S96>/Divide' */
  real32_T Add_n;                      /* '<S96>/Add' */
  real32_T probCutIn;                  /* '<S93>/Merge' */
  real32_T Multiply_m;                 /* '<S96>/Multiply' */
  real32_T Multiply1_i;                /* '<S96>/Multiply1' */
  real32_T Abs1_c;                     /* '<S94>/Abs1' */
  real32_T tPred;                      /* '<S94>/1-D Lookup Table' */
  real32_T Multiply_n;                 /* '<S94>/Multiply' */
  real32_T Add_kt;                     /* '<S94>/Add' */
  real32_T Max_gs;                     /* '<S94>/Max' */
  real32_T Max1_m;                     /* '<S94>/Max1' */
  real32_T dyPred;                     /* '<S94>/Switch' */
  real32_T Abs_i;                      /* '<S94>/Abs' */
  real32_T vAbsObj_e;                  /* '<S21>/Add' */
  real32_T axAbs_h;
  real32_T Min1_l;                     /* '<S35>/Min1' */
  real32_T Divide_p;                   /* '<S35>/Divide' */
  real32_T Abs_f;                      /* '<S35>/Abs' */
  real32_T Min_p;                      /* '<S35>/Min' */
  real32_T Switch_p;                   /* '<S35>/Switch' */
  real32_T Abs_fz;                     /* '<S33>/Abs' */
  real32_T uDLookupTable_n;            /* '<S32>/1-D Lookup Table' */
  real32_T Multiply_h;                 /* '<S23>/Multiply' */
  real32_T Max_h;                      /* '<S23>/Max' */
  real32_T Gain;                       /* '<S32>/Gain' */
  real32_T Min_d;                      /* '<S32>/Min' */
  real32_T dSlowDown;                  /* '<S32>/Add1' */
  real32_T Merge_h;                    /* '<S33>/Merge' */
  real32_T Square1_o;                  /* '<S34>/Square1' */
  real32_T Square_a;                   /* '<S34>/Square' */
  real32_T Abs_o;                      /* '<S34>/Abs' */
  real32_T Multiply_on;                /* '<S34>/Multiply' */
  real32_T Divide_o;                   /* '<S34>/Divide' */
  real32_T Add_g;                      /* '<S34>/Add' */
  real32_T Multiply1_e;                /* '<S34>/Multiply1' */
  real32_T Divide1;                    /* '<S34>/Divide1' */
  real32_T Gain_m;                     /* '<S34>/Gain' */
  real32_T Merge1;                     /* '<S33>/Merge1' */
  real32_T aApproach;                  /* '<S21>/Merge' */
  real32_T case_b;                     /* '<S21>/Merge1' */
  real32_T vAbsObj_b;                  /* '<S40>/Add' */
  real32_T axAbs_h3;
  real32_T tToStop;                    /* '<S52>/Merge' */
  real32_T Memory_i;                   /* '<S22>/Memory' */
  real32_T Switch_e;                   /* '<S57>/Switch' */
  real32_T dObjToStop;                 /* '<S52>/Merge1' */
  real32_T dx_l;
  real32_T Square_b;                   /* '<S53>/Square' */
  real32_T Min_m;                      /* '<S53>/Min' */
  real32_T Multiply_cv;                /* '<S53>/Multiply' */
  real32_T dEgoToStop;                 /* '<S53>/Divide2' */
  real32_T Abs_j;                      /* '<S53>/Abs' */
  real32_T dRes;                       /* '<S53>/Add2' */
  real32_T Memory2;                    /* '<S22>/Memory2' */
  real32_T T30;                        /* '<S22>/Memory1' */
  real32_T aMax;                       /* '<S22>/Memory1' */
  real32_T T;                          /* '<S22>/Memory1' */
  real32_T adt1;                       /* '<S22>/Memory1' */
  real32_T adt2;                       /* '<S22>/Memory1' */
  real32_T a0;                         /* '<S22>/Memory1' */
  real32_T a0Raw;                      /* '<S22>/Memory1' */
  real32_T Memory_e;                   /* '<S41>/Memory' */
  real32_T a0Raw_o;                    /* '<S41>/Memory1' */
  real32_T a0_d;                       /* '<S41>/Memory1' */
  real32_T adt2_c;                     /* '<S41>/Memory1' */
  real32_T adt1_m;                     /* '<S41>/Memory1' */
  real32_T T30_p;                      /* '<S41>/Memory1' */
  real32_T T_b;                        /* '<S41>/Memory1' */
  real32_T aMax_i;                     /* '<S41>/Memory1' */
  real32_T aMax_o;                     /* '<S41>/Merge' */
  real32_T T_h;                        /* '<S41>/Merge' */
  real32_T T30_o;                      /* '<S41>/Merge' */
  real32_T adt1_h;                     /* '<S41>/Merge' */
  real32_T adt2_b;                     /* '<S41>/Merge' */
  real32_T a0_j;                       /* '<S41>/Merge' */
  real32_T a0Raw_h;                    /* '<S41>/Merge' */
  real32_T Merge_d;                    /* '<S39>/Merge' */
  real32_T axAbs_h3v;
  real32_T Divide_b;                   /* '<S72>/Divide' */
  real32_T dThresNeg;                  /* '<S72>/Min' */
  real32_T dBreakPointNeg;             /* '<S72>/Add1' */
  real32_T Divide1_o;                  /* '<S72>/Divide1' */
  real32_T dBreakPointPos;             /* '<S72>/Add2' */
  real32_T Merge1_l;                   /* '<S72>/Merge1' */
  real32_T Merge2_i;                   /* '<S72>/Merge2' */
  real32_T Merge_de;                   /* '<S27>/Merge' */
  real32_T vDeltaRaw;                  /* '<S27>/Gain' */
  real32_T Divide2;                    /* '<S27>/Divide2' */
  real32_T Add3;                       /* '<S27>/Add3' */
  real32_T aStat;                      /* '<S27>/Switch' */
  real32_T aFocMix;                    /* '<S24>/Merge' */
  real32_T vAbsObj_c;                  /* '<S28>/Add' */
  real32_T aConstNegPhase;             /* '<S76>/Multiply' */
  real32_T Add_b;                      /* '<S76>/Add' */
  real32_T Multiply1_dc;               /* '<S76>/Multiply1' */
  real32_T Abs_oh;                     /* '<S76>/Abs' */
  real32_T Square_h;                   /* '<S76>/Square' */
  real32_T Multiply2_g;                /* '<S76>/Multiply2' */
  real32_T Add1_k;                     /* '<S76>/Add1' */
  real32_T vUpper;                     /* '<S76>/Sqrt' */
  real32_T Add_gh;                     /* '<S75>/Add' */
  real32_T Multiply_a;                 /* '<S75>/Multiply' */
  real32_T Add_as;                     /* '<S74>/Add' */
  real32_T Multiply_k4;                /* '<S74>/Multiply' */
  real32_T aConstNegPhase_i;           /* '<S73>/Multiply' */
  real32_T Add_bb;                     /* '<S73>/Add' */
  real32_T Multiply1_f;                /* '<S73>/Multiply1' */
  real32_T Abs_fo;                     /* '<S73>/Abs' */
  real32_T Square_o;                   /* '<S73>/Square' */
  real32_T Multiply2_l;                /* '<S73>/Multiply2' */
  real32_T Add1_i;                     /* '<S73>/Add1' */
  real32_T TmpSignalConversionAtLookupTabl[2];
  real32_T TmpSignalConversionAtLookupTa_g[2];
  real32_T LookupTableDynamic;         /* '<S68>/Lookup Table Dynamic' */
  real32_T Gain1;                      /* '<S62>/Gain1' */
  real32_T Gain2;                      /* '<S62>/Gain2' */
  real32_T Add1_e;                     /* '<S62>/Add1' */
  real32_T Min_j;                      /* '<S62>/Min' */
  real32_T vRef;
  real32_T Square_g;                   /* '<S62>/Square' */
  real32_T Add_hf;                     /* '<S62>/Add' */
  real32_T dAimBDC;                    /* '<S62>/Max' */
  real32_T Divide_m;                   /* '<S62>/Divide' */
  real32_T Gain_g;                     /* '<S62>/Gain' */
  real32_T a0_o;                       /* '<S59>/Switch' */
  real32_T Multiply_ky;                /* '<S62>/Multiply' */
  real32_T Multiply1_g;                /* '<S62>/Multiply1' */
  real32_T Add_i;                      /* '<S61>/Add' */
  real32_T adt1_j;                     /* '<S61>/Divide' */
  real32_T Gain_p;                     /* '<S61>/Gain' */
  real32_T Add1_d;                     /* '<S61>/Add1' */
  real32_T adt2_p;                     /* '<S61>/Divide1' */
  real32_T Memory2_f;                  /* '<S63>/Memory2' */
  real32_T Multiply_hg;                /* '<S64>/Multiply' */
  real32_T Add_p1;                     /* '<S64>/Add' */
  real32_T Memory_eb;                  /* '<S63>/Memory' */
  real32_T Multiply1_k2;               /* '<S64>/Multiply1' */
  real32_T Add1_k4;                    /* '<S64>/Add1' */
  real32_T Switch_h;                   /* '<S64>/Switch' */
  real32_T Add_d;                      /* '<S63>/Add' */
  real32_T Memory3;                    /* '<S63>/Memory3' */
  real32_T Multiply_i;                 /* '<S65>/Multiply' */
  real32_T Add_gt;                     /* '<S65>/Add' */
  real32_T Memory1_l;                  /* '<S63>/Memory1' */
  real32_T Multiply1_k3;               /* '<S65>/Multiply1' */
  real32_T Add1_n;                     /* '<S65>/Add1' */
  real32_T Switch_e1;                  /* '<S65>/Switch' */
  real32_T Gain3;                      /* '<S63>/Gain3' */
  real32_T Gain_i;                     /* '<S63>/Gain' */
  real32_T Divide_np;                  /* '<S63>/Divide' */
  real32_T T_hw;                       /* '<S63>/Gain1' */
  real32_T u7T;                        /* '<S63>/Gain2' */
  real32_T aMax_f;                     /* '<S63>/Divide1' */
  real32_T Add2;                       /* '<S63>/Add2' */
  real32_T u3T;                        /* '<S63>/Gain4' */
  real32_T Multiply_l;                 /* '<S63>/Multiply' */
  real32_T Gain5;                      /* '<S63>/Gain5' */
  real32_T v30new;                     /* '<S63>/Add1' */
  real32_T Square_k;                   /* '<S63>/Square' */
  real32_T Multiply2_a;                /* '<S63>/Multiply2' */
  real32_T Gain6;                      /* '<S63>/Gain6' */
  real32_T Multiply3;                  /* '<S63>/Multiply3' */
  real32_T Gain7;                      /* '<S63>/Gain7' */
  real32_T Multiply1_do;               /* '<S63>/Multiply1' */
  real32_T d30new;                     /* '<S63>/Add3' */
  real32_T T30_k;                      /* '<S63>/Gain8' */
  real32_T Min_cs;                     /* '<S56>/Min' */
  real32_T Divide1_p;                  /* '<S56>/Divide1' */
  real32_T Square_bq;                  /* '<S56>/Square' */
  real32_T Multiply_f;                 /* '<S56>/Multiply' */
  real32_T Divide2_f;                  /* '<S56>/Divide2' */
  real32_T Memory_c;                   /* '<S42>/Memory' */
  real32_T Memory1_n;                  /* '<S42>/Memory1' */
  real32_T aCharact;                   /* '<S42>/Merge' */
  real32_T aBDC;                       /* '<S42>/Merge1' */
  real32_T Max_n;                      /* '<S51>/Max' */
  real32_T filtFactor_cf;              /* '<S51>/Divide' */
  real32_T Add_pi;                     /* '<S51>/Add' */
  real32_T Multiply_e;                 /* '<S51>/Multiply' */
  real32_T Multiply1_ie;               /* '<S51>/Multiply1' */
  real32_T Add1_h;                     /* '<S51>/Add1' */
  real32_T P_adtMaxBDC;                /* '<S48>/P_adtMaxBDC' */
  real32_T Add1_hp;                    /* '<S45>/Add1' */
  real32_T Multiply_nu;                /* '<S45>/Multiply' */
  real32_T Add_m;                      /* '<S45>/Add' */
  real32_T Max_j;                      /* '<S49>/Max' */
  real32_T filtFactor_h;               /* '<S49>/Divide' */
  real32_T Add_cl;                     /* '<S49>/Add' */
  real32_T Multiply_h5;                /* '<S49>/Multiply' */
  real32_T Multiply1_p;                /* '<S49>/Multiply1' */
  real32_T Add1_a;                     /* '<S49>/Add1' */
  real32_T Max_c3;                     /* '<S50>/Max' */
  real32_T filtFactor_m;               /* '<S50>/Divide' */
  real32_T Add_kk;                     /* '<S50>/Add' */
  real32_T Multiply_a3;                /* '<S50>/Multiply' */
  real32_T Multiply1_b;                /* '<S50>/Multiply1' */
  real32_T Add1_l;                     /* '<S50>/Add1' */
  real32_T Multiply_mn;                /* '<S44>/Multiply' */
  real32_T BDC_State;                  /* '<S22>/BDC_State_Machine' */
  real32_T tElapse;                    /* '<S22>/BDC_State_Machine' */
  real32_T Square1_p;                  /* '<S36>/Square1' */
  real32_T Add1_f;                     /* '<S36>/Add1' */
  real32_T Multiply_lj;                /* '<S36>/Multiply' */
  real32_T Divide_g;                   /* '<S36>/Divide' */
  real32_T Divide1_a;                  /* '<S36>/Divide1' */
  real32_T Abs_p;                      /* '<S36>/Abs' */
  int32_T ForIterator;                 /* '<S3>/For Iterator' */
  int32_T ForIterator_b;               /* '<S63>/For Iterator' */
  boolean_T ACC_SpdIncSw;              /* '<S10>/Data Type Conversion6' */
  boolean_T ACC_SpdIncSwK1;            /* '<S10>/Memory' */
  boolean_T ACC_SpdDecSw;              /* '<S10>/Data Type Conversion7' */
  boolean_T ACC_SpdDecSwK1;            /* '<S10>/Memory1' */
  boolean_T RelationalOperator;        /* '<S111>/Relational Operator' */
  boolean_T RelationalOperator_a;      /* '<S11>/Relational Operator' */
  boolean_T AND;                       /* '<S11>/AND' */
  boolean_T RelationalOperator6;       /* '<S9>/Relational Operator6' */
  boolean_T RelationalOperator7;       /* '<S9>/Relational Operator7' */
  boolean_T RelationalOperator8;       /* '<S9>/Relational Operator8' */
  boolean_T AND2;                      /* '<S9>/AND2' */
  boolean_T AND3;                      /* '<S9>/AND3' */
  boolean_T DrvOffEnable;              /* '<S9>/Merge' */
  boolean_T RelationalOperator_k;      /* '<S16>/Relational Operator' */
  boolean_T Memory_p;                  /* '<S15>/Memory' */
  boolean_T Merge1_b;                  /* '<S15>/Merge1' */
  boolean_T Assignment[40];            /* '<S3>/Assignment' */
  boolean_T RelationalOperator1;       /* '<S83>/Relational Operator1' */
  boolean_T RelationalOperator_d;      /* '<S83>/Relational Operator' */
  boolean_T AND_h;                     /* '<S83>/AND' */
  boolean_T Valid;                     /* '<S83>/Merge6' */
  boolean_T isCutIn;                   /* '<S85>/Relational Operator2' */
  boolean_T RelationalOperator_o;      /* '<S87>/Relational Operator' */
  boolean_T Merge_o;                   /* '<S89>/Merge' */
  boolean_T RelationalOperator_p;      /* '<S105>/Relational Operator' */
  boolean_T RelationalOperator1_p;     /* '<S105>/Relational Operator1' */
  boolean_T LogicalOperator;           /* '<S105>/Logical Operator' */
  boolean_T RelationalOperator1_k;     /* '<S106>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S106>/Relational Operator' */
  boolean_T LogicalOperator_n;         /* '<S106>/Logical Operator' */
  boolean_T RelationalOperator2;       /* '<S107>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S107>/Relational Operator3' */
  boolean_T LogicalOperator_m;         /* '<S107>/Logical Operator' */
  boolean_T RelationalOperator_i;      /* '<S107>/Relational Operator' */
  boolean_T RelationalOperator1_l;     /* '<S107>/Relational Operator1' */
  boolean_T LogicalOperator1;          /* '<S107>/Logical Operator1' */
  boolean_T RelationalOperator1_j;     /* '<S108>/Relational Operator1' */
  boolean_T RelationalOperator3_d;     /* '<S91>/Relational Operator3' */
  boolean_T RelationalOperator_g;      /* '<S93>/Relational Operator' */
  boolean_T RelationalOperator1_jr;    /* '<S93>/Relational Operator1' */
  boolean_T RelationalOperator2_m;     /* '<S93>/Relational Operator2' */
  boolean_T LogicalOperator_g;         /* '<S93>/Logical Operator' */
  boolean_T RelationalOperator2_f;     /* '<S21>/Relational Operator2' */
  boolean_T RelationalOperator1_m;     /* '<S21>/Relational Operator1' */
  boolean_T RelationalOperator_pq;     /* '<S33>/Relational Operator' */
  boolean_T RelationalOperator_l;      /* '<S21>/Relational Operator' */
  boolean_T OR;                        /* '<S21>/OR' */
  boolean_T RelationalOperator4;       /* '<S52>/Relational Operator4' */
  boolean_T RelationalOperator5;       /* '<S52>/Relational Operator5' */
  boolean_T AND_hk;                    /* '<S52>/AND' */
  boolean_T RelationalOperator2_j;     /* '<S52>/Relational Operator2' */
  boolean_T RelationalOperator_b;      /* '<S57>/Relational Operator' */
  boolean_T RelationalOperator1_n;     /* '<S57>/Relational Operator1' */
  boolean_T OR_m;                      /* '<S57>/OR' */
  boolean_T RelationalOperator1_a;     /* '<S52>/Relational Operator1' */
  boolean_T RelationalOperator3_dy;    /* '<S52>/Relational Operator3' */
  boolean_T RelationalOperator2_n;     /* '<S40>/Relational Operator2' */
  boolean_T RelationalOperator4_k;     /* '<S53>/Relational Operator4' */
  boolean_T RelationalOperator5_g;     /* '<S53>/Relational Operator5' */
  boolean_T RelationalOperator2_nk;    /* '<S53>/Relational Operator2' */
  boolean_T OR_g;                      /* '<S53>/OR' */
  boolean_T RelationalOperator_ij;     /* '<S53>/Relational Operator' */
  boolean_T RelationalOperator1_b;     /* '<S53>/Relational Operator1' */
  boolean_T AND_l;                     /* '<S53>/AND' */
  boolean_T SmoothStopCond;            /* '<S22>/Memory1' */
  boolean_T RelationalOperator_h;      /* '<S39>/Relational Operator' */
  boolean_T RelationalOperator1_d;     /* '<S39>/Relational Operator1' */
  boolean_T OR_d;                      /* '<S39>/OR' */
  boolean_T RelationalOperator_ps;     /* '<S41>/Relational Operator' */
  boolean_T RelationalOperator1_o;     /* '<S41>/Relational Operator1' */
  boolean_T RelationalOperator2_d;     /* '<S41>/Relational Operator2' */
  boolean_T OR1;                       /* '<S41>/OR1' */
  boolean_T RelationalOperator3_h;     /* '<S41>/Relational Operator3' */
  boolean_T OR_b;                      /* '<S41>/OR' */
  boolean_T SmoothStopCond_c;          /* '<S41>/Memory1' */
  boolean_T SmoothStopCond_p;          /* '<S41>/Merge' */
  boolean_T RelationalOperator_ob;     /* '<S72>/Relational Operator' */
  boolean_T RelationalOperator1_kx;    /* '<S72>/Relational Operator1' */
  boolean_T RelationalOperator2_h;     /* '<S72>/Relational Operator2' */
  boolean_T phase1;                    /* '<S27>/Relational Operator' */
  boolean_T phase2;                    /* '<S27>/Relational Operator1' */
  boolean_T RelationalOperator3_j;     /* '<S27>/Relational Operator3' */
  boolean_T RelationalOperator_dk;     /* '<S24>/Relational Operator' */
  boolean_T RelationalOperator1_bu;    /* '<S24>/Relational Operator1' */
  boolean_T LogicalOperator_g3;        /* '<S24>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S24>/Relational Operator2' */
  boolean_T RelationalOperator1_kd;    /* '<S28>/Relational Operator1' */
  boolean_T RelationalOperator_aa;     /* '<S28>/Relational Operator' */
  boolean_T RelationalOperator2_hl;    /* '<S28>/Relational Operator2' */
  boolean_T AND_d;                     /* '<S28>/AND' */
  boolean_T RelationalOperator3_c;     /* '<S28>/Relational Operator3' */
  boolean_T RelationalOperator4_n;     /* '<S28>/Relational Operator4' */
  boolean_T AND1;                      /* '<S28>/AND1' */
  boolean_T SmoothStopCond_l;          /* '<S59>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S63>/Relational Operator' */
  boolean_T RelationalOperator_n;      /* '<S42>/Relational Operator' */
  boolean_T RelationalOperator1_e;     /* '<S42>/Relational Operator1' */
  boolean_T RelationalOperator_i2;     /* '<S48>/Relational Operator' */
  boolean_T RelationalOperator_op;     /* '<S45>/Relational Operator' */
  B_CoreSubsys_AccTarSel_T CoreSubsys[40];/* '<S6>/For Each Subsystem' */
} B_AccTarSel_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  ATS_INTERNAL_OBJINFO_ST Memory_PreviousInput;/* '<Root>/Memory' */
  ATS_PO_ST Memory1_PreviousInput;     /* '<Root>/Memory1' */
  real32_T Delay_DSTATE;               /* '<S83>/Delay' */
  real32_T Memory_PreviousInput_g;     /* '<S111>/Memory' */
  real32_T Memory_PreviousInput_a;     /* '<S1>/Memory' */
  real32_T Memory_PreviousInput_k;     /* '<S22>/Memory' */
  real32_T Memory2_PreviousInput;      /* '<S22>/Memory2' */
  real32_T Memory1_4_PreviousInput;    /* '<S22>/Memory1' */
  real32_T Memory1_2_PreviousInput;    /* '<S22>/Memory1' */
  real32_T Memory1_3_PreviousInput;    /* '<S22>/Memory1' */
  real32_T Memory1_5_PreviousInput;    /* '<S22>/Memory1' */
  real32_T Memory1_6_PreviousInput;    /* '<S22>/Memory1' */
  real32_T Memory1_7_PreviousInput;    /* '<S22>/Memory1' */
  real32_T Memory1_8_PreviousInput;    /* '<S22>/Memory1' */
  real32_T Memory_PreviousInput_n;     /* '<S41>/Memory' */
  real32_T Memory1_8_PreviousInput_h;  /* '<S41>/Memory1' */
  real32_T Memory1_7_PreviousInput_b;  /* '<S41>/Memory1' */
  real32_T Memory1_6_PreviousInput_c;  /* '<S41>/Memory1' */
  real32_T Memory1_5_PreviousInput_a;  /* '<S41>/Memory1' */
  real32_T Memory1_4_PreviousInput_k;  /* '<S41>/Memory1' */
  real32_T Memory1_3_PreviousInput_d;  /* '<S41>/Memory1' */
  real32_T Memory1_2_PreviousInput_p;  /* '<S41>/Memory1' */
  real32_T Memory2_PreviousInput_i;    /* '<S63>/Memory2' */
  real32_T Memory_PreviousInput_j;     /* '<S63>/Memory' */
  real32_T Memory3_PreviousInput;      /* '<S63>/Memory3' */
  real32_T Memory1_PreviousInput_m;    /* '<S63>/Memory1' */
  real32_T Memory_PreviousInput_g0;    /* '<S42>/Memory' */
  real32_T Memory1_PreviousInput_a;    /* '<S42>/Memory1' */
  int8_T If_ActiveSubsystem;           /* '<S15>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S41>/If' */
  int8_T If_ActiveSubsystem_j;         /* '<S39>/If' */
  uint8_T is_active_c3_AccTarSel;      /* '<Root>/ACC_State_Machine' */
  uint8_T is_c3_AccTarSel;             /* '<Root>/ACC_State_Machine' */
  uint8_T is_ACTIVE;                   /* '<Root>/ACC_State_Machine' */
  uint8_T is_active_c1_AccTarSel;      /* '<S22>/BDC_State_Machine' */
  uint8_T is_c1_AccTarSel;             /* '<S22>/BDC_State_Machine' */
  boolean_T Memory_PreviousInput_o;    /* '<S10>/Memory' */
  boolean_T Memory1_PreviousInput_f;   /* '<S10>/Memory1' */
  boolean_T Memory_PreviousInput_j1;   /* '<S15>/Memory' */
  boolean_T Memory1_1_PreviousInput;   /* '<S22>/Memory1' */
  boolean_T Memory1_1_PreviousInput_h; /* '<S41>/Memory1' */
} DW_AccTarSel_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  COM_VEHBUS_ST CANInput;              /* '<Root>/CANInput' */
  FUS_OBJ_OUTPUT_ST ObjList;           /* '<Root>/ObjList' */
  VSI_VEHSTATE_ST VSI_VehState_st;     /* '<Root>/VSI_VehState_st' */
  SYS_INFO_ST SYS_Info_st;             /* '<Root>/SYS_Info_st' */
  FUS_OBJDATA_ST FUS_ObjData_st;       /* '<Root>/ObjListSimu' */
  NET_DRVACTION_ST DrvActSimu;         /* '<Root>/DrvActSimu' */
  Radar410_Info_ST ObjRadarList;       /* '<Root>/ObjRadarList' */
} ExtU_AccTarSel_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  ACC_LGTCTRL_ST ACC_LgtCtrl_st;       /* '<Root>/ACC_LgtCtrl_st' */
  ATS_PO_ST ATS_Po_st;                 /* '<Root>/ATS_Po_st' */
} ExtY_AccTarSel_T;

/* Parameters for system: '<S21>/If Action Subsystem' */
struct P_IfActionSubsystem_AccTarSel_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S29>/Constant2'
                                        */
};

/* Parameters for system: '<S42>/If Action Subsystem2' */
struct P_IfActionSubsystem2_AccTarSe_T_ {
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S46>/Constant'
                                        */
};

/* Parameters for system: '<S52>/ObjNoStop' */
struct P_ObjNoStop_AccTarSel_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S54>/Constant2'
                                        */
};

/* Parameters for system: '<S6>/For Each Subsystem' */
struct P_CoreSubsys_AccTarSel_T_ {
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S118>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S118>/Constant3'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S117>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S117>/Constant2'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S117>/Constant4'
                                        */
  real32_T uDLookupTable_tableData[6]; /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S119>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_bp01Data[6];  /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S119>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_tableData_p[4];/* Computed Parameter: uDLookupTable_tableData_p
                                         * Referenced by: '<S120>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_l[4];/* Computed Parameter: uDLookupTable_bp01Data_l
                                        * Referenced by: '<S120>/1-D Lookup Table'
                                        */
  real32_T Constant3_Value_f;          /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S117>/Constant3'
                                        */
};

/* Parameters (default storage) */
struct P_AccTarSel_T_ {
  real_T P_vyCutInThres;               /* Variable: P_vyCutInThres
                                        * Referenced by: '<S93>/P_vyCutInThres'
                                        */
  real32_T P_aFOCApproachIntpAcitve;   /* Variable: P_aFOCApproachIntpAcitve
                                        * Referenced by: '<S24>/P_aFOCApproachIntpAcitve'
                                        */
  real32_T P_aFOCApproachIntpEnsure;   /* Variable: P_aFOCApproachIntpEnsure
                                        * Referenced by: '<S24>/P_aFOCApproachIntpEnsure'
                                        */
  real32_T P_adtMaxBDC;                /* Variable: P_adtMaxBDC
                                        * Referenced by: '<S48>/P_adtMaxBDC'
                                        */
  real32_T P_dAimMin;                  /* Variable: P_dAimMin
                                        * Referenced by: '<S23>/P_dAimMin'
                                        */
  real32_T P_dObjDrvOffMax;            /* Variable: P_dObjDrvOffMax
                                        * Referenced by: '<S9>/P_dObjDrvOffMax'
                                        */
  real32_T P_dObjDrvOffMin;            /* Variable: P_dObjDrvOffMin
                                        * Referenced by: '<S9>/P_dObjDrvOffMin'
                                        */
  real32_T P_dObjLowHystDecToStop;     /* Variable: P_dObjLowHystDecToStop
                                        * Referenced by: '<S28>/P_dObjLowHystDecToStop'
                                        */
  real32_T P_dObjUpperHystDecToStop;   /* Variable: P_dObjUpperHystDecToStop
                                        * Referenced by: '<S28>/P_dObjUpperHystDecToStop'
                                        */
  real32_T P_dResMax;                  /* Variable: P_dResMax
                                        * Referenced by: '<S53>/P_dResMax'
                                        */
  real32_T P_dStandStill;              /* Variable: P_dStandStill
                                        * Referenced by:
                                        *   '<S53>/P_dStandStill'
                                        *   '<S62>/P_dStandStill'
                                        */
  real32_T P_dStandStillMin;           /* Variable: P_dStandStillMin
                                        * Referenced by: '<S62>/P_dStandStillMin'
                                        */
  real32_T P_dvarYMax4PO;              /* Variable: P_dvarYMax4PO
                                        * Referenced by: '<S105>/P_dvarYMax4PO'
                                        */
  real32_T P_dyCutInThres;             /* Variable: P_dyCutInThres
                                        * Referenced by: '<S93>/P_dyCutInThres'
                                        */
  real32_T P_facBDCInit;               /* Variable: P_facBDCInit
                                        * Referenced by: '<S62>/P_facBDCInit'
                                        */
  real32_T P_facBDCIterCalc;           /* Variable: P_facBDCIterCalc
                                        * Referenced by:
                                        *   '<S64>/P_facBDCIterCalc'
                                        *   '<S65>/P_facBDCIterCalc'
                                        */
  real32_T P_facFOCNegDiff;            /* Variable: P_facFOCNegDiff
                                        * Referenced by:
                                        *   '<S72>/P_facFOCNegDiff'
                                        *   '<S73>/P_facFOCNegDiff'
                                        *   '<S74>/P_facFOCNegDiff'
                                        */
  real32_T P_facFOCPosDiff;            /* Variable: P_facFOCPosDiff
                                        * Referenced by:
                                        *   '<S72>/P_facFOCPosDiff'
                                        *   '<S75>/P_facFOCPosDiff'
                                        *   '<S76>/P_facFOCPosDiff'
                                        */
  real32_T P_kapHystThres;             /* Variable: P_kapHystThres
                                        * Referenced by: '<S111>/P_kapHystThres'
                                        */
  real32_T P_plausMin4PO;              /* Variable: P_plausMin4PO
                                        * Referenced by: '<S108>/P_plausMin4PO'
                                        */
  real32_T P_probExistMin4PO;          /* Variable: P_probExistMin4PO
                                        * Referenced by: '<S105>/P_probExistMin4PO'
                                        */
  real32_T P_tBDCStartFilt;            /* Variable: P_tBDCStartFilt
                                        * Referenced by: '<S48>/P_tBDCStartFilt'
                                        */
  real32_T P_tCurvFilt;                /* Variable: P_tCurvFilt
                                        * Referenced by: '<S111>/P_tCurvFilt'
                                        */
  real32_T P_tCutInFilt;               /* Variable: P_tCutInFilt
                                        * Referenced by: '<S93>/P_tCutInFilt'
                                        */
  real32_T P_tFOCStationary;           /* Variable: P_tFOCStationary
                                        * Referenced by: '<S27>/P_tFOCStationary'
                                        */
  real32_T P_tFiltAxAbsPO;             /* Variable: P_tFiltAxAbsPO
                                        * Referenced by: '<S127>/Constant1'
                                        */
  real32_T P_tFiltVxAxPO;              /* Variable: P_tFiltVxAxPO
                                        * Referenced by: '<S127>/Constant'
                                        */
  real32_T P_tMinDrvPhase;             /* Variable: P_tMinDrvPhase
                                        * Referenced by: '<Root>/P_tMinDrvPhase'
                                        */
  real32_T P_tRollingFilt;             /* Variable: P_tRollingFilt
                                        * Referenced by: '<S45>/P_tRollingFilt'
                                        */
  real32_T P_tRollingFinFilt;          /* Variable: P_tRollingFinFilt
                                        * Referenced by: '<S45>/P_tRollingFinFilt'
                                        */
  real32_T P_tSSCNeg;                  /* Variable: P_tSSCNeg
                                        * Referenced by: '<S16>/P_tSSCNeg'
                                        */
  real32_T P_tSSCPos;                  /* Variable: P_tSSCPos
                                        * Referenced by: '<S16>/P_tSSCPos'
                                        */
  real32_T P_tTimeGapSet;              /* Variable: P_tTimeGapSet
                                        * Referenced by: '<S23>/P_tTimeGapSet'
                                        */
  real32_T P_tToStop;                  /* Variable: P_tToStop
                                        * Referenced by: '<S57>/P_tToStop'
                                        */
  real32_T P_tToStopInBDC;             /* Variable: P_tToStopInBDC
                                        * Referenced by: '<S57>/P_tToStopInBDC'
                                        */
  real32_T P_tToStopTrig;              /* Variable: P_tToStopTrig
                                        * Referenced by: '<S52>/P_tToStop'
                                        */
  real32_T P_vEgoDecToStop;            /* Variable: P_vEgoDecToStop
                                        * Referenced by: '<S28>/P_vEgoDecToStop'
                                        */
  real32_T P_vEgoLowBDC;               /* Variable: P_vEgoLowBDC
                                        * Referenced by: '<S40>/P_vEgoLowBDC'
                                        */
  real32_T P_vFOCNegDiff;              /* Variable: P_vFOCNegDiff
                                        * Referenced by:
                                        *   '<S72>/P_vFOCNegDiff'
                                        *   '<S73>/P_vFOCNegDiff'
                                        */
  real32_T P_vFOCPosDiff;              /* Variable: P_vFOCPosDiff
                                        * Referenced by:
                                        *   '<S72>/P_vFOCPosDiff'
                                        *   '<S76>/P_vFOCPosDiff'
                                        */
  real32_T P_vObjDrvOff;               /* Variable: P_vObjDrvOff
                                        * Referenced by: '<S9>/P_vObjDrvOff'
                                        */
  real32_T P_vObjLowHystDecToStop;     /* Variable: P_vObjLowHystDecToStop
                                        * Referenced by: '<S28>/P_vObjLowHystDecToStop'
                                        */
  real32_T P_vObjNoStop;               /* Variable: P_vObjNoStop
                                        * Referenced by: '<S52>/P_vObjNoStop'
                                        */
  real32_T P_vObjReCalc;               /* Variable: P_vObjReCalc
                                        * Referenced by: '<S53>/P_vObjReCalc'
                                        */
  real32_T P_vObjStop;                 /* Variable: P_vObjStop
                                        * Referenced by: '<S52>/P_vObjStop'
                                        */
  real32_T P_vObjUpperHystDecToStop;   /* Variable: P_vObjUpperHystDecToStop
                                        * Referenced by: '<S28>/P_vObjUpperHystDecToStop'
                                        */
  real32_T P_vStandStill;              /* Variable: P_vStandStill
                                        * Referenced by: '<Root>/P_vStandStill'
                                        */
  boolean_T P_CutInEnable;             /* Variable: P_CutInEnable
                                        * Referenced by: '<S93>/P_CutInEnable'
                                        */
  boolean_T P_PlausIntegDisable;       /* Variable: P_PlausIntegDisable
                                        * Referenced by: '<S87>/Constant4'
                                        */
  boolean_T P_StandObjEnable;          /* Variable: P_StandObjEnable
                                        * Referenced by: '<S107>/P_StandObjEnable'
                                        */
  ATS_INTERNAL_OBJINFO_ST Memory_InitialCondition;/* Computed Parameter: Memory_InitialCondition
                                                   * Referenced by: '<Root>/Memory'
                                                   */
  ATS_OBJINFO_ST ObjInfo_Y0;           /* Computed Parameter: ObjInfo_Y0
                                        * Referenced by: '<S3>/ObjInfo'
                                        */
  ATS_OBJINFO_ST Zero1_Value[40];      /* Computed Parameter: Zero1_Value
                                        * Referenced by: '<S3>/Zero1'
                                        */
  ATS_PO_ST Memory1_InitialCondition;  /* Computed Parameter: Memory1_InitialCondition
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S93>/Constant2'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  int32_T ForIterator_IterationLimit;  /* Computed Parameter: ForIterator_IterationLimit
                                        * Referenced by: '<S63>/For Iterator'
                                        */
  int32_T Constant_Value_n;            /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S63>/Constant'
                                        */
  int32_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S83>/Constant'
                                        */
  int32_T Constant2_Value_i;           /* Computed Parameter: Constant2_Value_i
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real32_T Constant1_Value_f;          /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S30>/Constant1'
                                        */
  real32_T Constant2_Value_is;         /* Computed Parameter: Constant2_Value_is
                                        * Referenced by: '<S30>/Constant2'
                                        */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S37>/Constant'
                                        */
  real32_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S36>/Constant'
                                        */
  real32_T Constant2_Value_p;          /* Computed Parameter: Constant2_Value_p
                                        * Referenced by: '<S36>/Constant2'
                                        */
  real32_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S45>/Constant2'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S49>/Constant'
                                        */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S50>/Constant'
                                        */
  real32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S51>/Constant'
                                        */
  real32_T Memory_InitialCondition_l;  /* Computed Parameter: Memory_InitialCondition_l
                                        * Referenced by: '<S42>/Memory'
                                        */
  real32_T Memory1_InitialCondition_p; /* Computed Parameter: Memory1_InitialCondition_p
                                        * Referenced by: '<S42>/Memory1'
                                        */
  real32_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                        * Referenced by: '<S42>/Merge1'
                                        */
  real32_T Constant1_Value_b;          /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S56>/Constant1'
                                        */
  real32_T Constant2_Value_b;          /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S56>/Constant2'
                                        */
  real32_T aMax_Y0;                    /* Computed Parameter: aMax_Y0
                                        * Referenced by: '<S63>/aMax'
                                        */
  real32_T T_Y0;                       /* Computed Parameter: T_Y0
                                        * Referenced by: '<S63>/T'
                                        */
  real32_T T30_Y0;                     /* Computed Parameter: T30_Y0
                                        * Referenced by: '<S63>/T30'
                                        */
  real32_T Memory2_InitialCondition;   /* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<S63>/Memory2'
                                        */
  real32_T Constant1_Value_a;          /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S64>/Constant1'
                                        */
  real32_T Memory_InitialCondition_m;  /* Computed Parameter: Memory_InitialCondition_m
                                        * Referenced by: '<S63>/Memory'
                                        */
  real32_T Memory3_InitialCondition;   /* Computed Parameter: Memory3_InitialCondition
                                        * Referenced by: '<S63>/Memory3'
                                        */
  real32_T Constant1_Value_a5;         /* Computed Parameter: Constant1_Value_a5
                                        * Referenced by: '<S65>/Constant1'
                                        */
  real32_T Memory1_InitialCondition_n; /* Computed Parameter: Memory1_InitialCondition_n
                                        * Referenced by: '<S63>/Memory1'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S63>/Gain3'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S63>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S63>/Gain1'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S63>/Gain2'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S63>/Gain4'
                                        */
  real32_T Gain5_Gain;                 /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<S63>/Gain5'
                                        */
  real32_T Gain6_Gain;                 /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<S63>/Gain6'
                                        */
  real32_T Gain7_Gain;                 /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<S63>/Gain7'
                                        */
  real32_T Gain8_Gain;                 /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<S63>/Gain8'
                                        */
  real32_T Constant_Value_da;          /* Computed Parameter: Constant_Value_da
                                        * Referenced by: '<S62>/Constant'
                                        */
  real32_T Gain1_Gain_f;               /* Computed Parameter: Gain1_Gain_f
                                        * Referenced by: '<S62>/Gain1'
                                        */
  real32_T Gain2_Gain_g;               /* Computed Parameter: Gain2_Gain_g
                                        * Referenced by: '<S62>/Gain2'
                                        */
  real32_T Gain_Gain_p;                /* Computed Parameter: Gain_Gain_p
                                        * Referenced by: '<S62>/Gain'
                                        */
  real32_T Gain_Gain_m;                /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S61>/Gain'
                                        */
  real32_T Constant_Value_pc;          /* Computed Parameter: Constant_Value_pc
                                        * Referenced by: '<S60>/Constant'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S60>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S60>/Constant3'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S60>/Constant4'
                                        */
  real32_T Constant5_Value_j;          /* Computed Parameter: Constant5_Value_j
                                        * Referenced by: '<S60>/Constant5'
                                        */
  real32_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S60>/Constant6'
                                        */
  real32_T Constant7_Value;            /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S60>/Constant7'
                                        */
  real32_T Constant2_Value_c;          /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S73>/Constant2'
                                        */
  real32_T Constant2_Value_j;          /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S76>/Constant2'
                                        */
  real32_T Constant_Value_oa;          /* Computed Parameter: Constant_Value_oa
                                        * Referenced by: '<S76>/Constant'
                                        */
  real32_T Constant_Value_ha;          /* Computed Parameter: Constant_Value_ha
                                        * Referenced by: '<S21>/Constant'
                                        */
  real32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S35>/Constant'
                                        */
  real32_T Constant1_Value_fq;         /* Computed Parameter: Constant1_Value_fq
                                        * Referenced by: '<S35>/Constant1'
                                        */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S35>/Switch'
                                        */
  real32_T Constant2_Value_cl;         /* Computed Parameter: Constant2_Value_cl
                                        * Referenced by: '<S33>/Constant2'
                                        */
  real32_T uDLookupTable_tableData[2]; /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S32>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_bp01Data[2];  /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S32>/1-D Lookup Table'
                                        */
  real32_T Gain_Gain_f;                /* Computed Parameter: Gain_Gain_f
                                        * Referenced by: '<S32>/Gain'
                                        */
  real32_T Constant_Value_nv;          /* Computed Parameter: Constant_Value_nv
                                        * Referenced by: '<S34>/Constant'
                                        */
  real32_T Constant1_Value_h;          /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S34>/Constant1'
                                        */
  real32_T Gain_Gain_k;                /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S34>/Gain'
                                        */
  real32_T Constant6_Value_e;          /* Computed Parameter: Constant6_Value_e
                                        * Referenced by: '<S52>/Constant6'
                                        */
  real32_T Memory_InitialCondition_lb; /* Computed Parameter: Memory_InitialCondition_lb
                                        * Referenced by: '<S22>/Memory'
                                        */
  real32_T Constant3_Value_n;          /* Computed Parameter: Constant3_Value_n
                                        * Referenced by: '<S57>/Constant3'
                                        */
  real32_T Constant2_Value_m;          /* Computed Parameter: Constant2_Value_m
                                        * Referenced by: '<S57>/Constant2'
                                        */
  real32_T Constant7_Value_n;          /* Computed Parameter: Constant7_Value_n
                                        * Referenced by: '<S53>/Constant7'
                                        */
  real32_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S53>/Constant8'
                                        */
  real32_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S53>/Constant'
                                        */
  real32_T Constant1_Value_fi;         /* Computed Parameter: Constant1_Value_fi
                                        * Referenced by: '<S53>/Constant1'
                                        */
  real32_T Memory2_InitialCondition_k; /* Computed Parameter: Memory2_InitialCondition_k
                                        * Referenced by: '<S22>/Memory2'
                                        */
  real32_T Memory1_4_InitialCondition; /* Computed Parameter: Memory1_4_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Memory1_2_InitialCondition; /* Computed Parameter: Memory1_2_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Memory1_3_InitialCondition; /* Computed Parameter: Memory1_3_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Memory1_5_InitialCondition; /* Computed Parameter: Memory1_5_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Memory1_6_InitialCondition; /* Computed Parameter: Memory1_6_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Memory1_7_InitialCondition; /* Computed Parameter: Memory1_7_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Memory1_8_InitialCondition; /* Computed Parameter: Memory1_8_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real32_T Constant1_Value_fr;         /* Computed Parameter: Constant1_Value_fr
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real32_T Constant3_Value_g;          /* Computed Parameter: Constant3_Value_g
                                        * Referenced by: '<S39>/Constant3'
                                        */
  real32_T Constant2_Value_g;          /* Computed Parameter: Constant2_Value_g
                                        * Referenced by: '<S41>/Constant2'
                                        */
  real32_T Constant3_Value_m;          /* Computed Parameter: Constant3_Value_m
                                        * Referenced by: '<S41>/Constant3'
                                        */
  real32_T Memory_InitialCondition_g;  /* Computed Parameter: Memory_InitialCondition_g
                                        * Referenced by: '<S41>/Memory'
                                        */
  real32_T Constant4_Value_n;          /* Computed Parameter: Constant4_Value_n
                                        * Referenced by: '<S41>/Constant4'
                                        */
  real32_T Constant1_Value_be;         /* Computed Parameter: Constant1_Value_be
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real32_T Memory1_8_InitialCondition_n;/* Computed Parameter: Memory1_8_InitialCondition_n
                                         * Referenced by: '<S41>/Memory1'
                                         */
  real32_T Memory1_7_InitialCondition_n;/* Computed Parameter: Memory1_7_InitialCondition_n
                                         * Referenced by: '<S41>/Memory1'
                                         */
  real32_T Memory1_6_InitialCondition_n;/* Computed Parameter: Memory1_6_InitialCondition_n
                                         * Referenced by: '<S41>/Memory1'
                                         */
  real32_T Memory1_5_InitialCondition_n;/* Computed Parameter: Memory1_5_InitialCondition_n
                                         * Referenced by: '<S41>/Memory1'
                                         */
  real32_T Memory1_4_InitialCondition_n;/* Computed Parameter: Memory1_4_InitialCondition_n
                                         * Referenced by: '<S41>/Memory1'
                                         */
  real32_T Memory1_3_InitialCondition_n;/* Computed Parameter: Memory1_3_InitialCondition_n
                                         * Referenced by: '<S41>/Memory1'
                                         */
  real32_T Memory1_2_InitialCondition_n;/* Computed Parameter: Memory1_2_InitialCondition_n
                                         * Referenced by: '<S41>/Memory1'
                                         */
  real32_T Merge_2_InitialOutput;      /* Computed Parameter: Merge_2_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  real32_T Merge_3_InitialOutput;      /* Computed Parameter: Merge_3_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  real32_T Merge_4_InitialOutput;      /* Computed Parameter: Merge_4_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  real32_T Merge_5_InitialOutput;      /* Computed Parameter: Merge_5_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  real32_T Merge_6_InitialOutput;      /* Computed Parameter: Merge_6_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  real32_T Merge_7_InitialOutput;      /* Computed Parameter: Merge_7_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  real32_T Merge_8_InitialOutput;      /* Computed Parameter: Merge_8_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  real32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S27>/Gain'
                                        */
  real32_T Constant5_Value_k;          /* Computed Parameter: Constant5_Value_k
                                        * Referenced by: '<S27>/Constant5'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S19>/Constant'
                                        */
  real32_T uDLookupTable_tableData_j[2];/* Computed Parameter: uDLookupTable_tableData_j
                                         * Referenced by: '<S94>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_c[2];/* Computed Parameter: uDLookupTable_bp01Data_c
                                        * Referenced by: '<S94>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S94>/Constant'
                                        */
  real32_T Switch_Threshold_i;         /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S94>/Switch'
                                        */
  real32_T uDLookupTable1_tableData[2];/* Computed Parameter: uDLookupTable1_tableData
                                        * Referenced by: '<S94>/1-D Lookup Table1'
                                        */
  real32_T uDLookupTable1_bp01Data[2]; /* Computed Parameter: uDLookupTable1_bp01Data
                                        * Referenced by: '<S94>/1-D Lookup Table1'
                                        */
  real32_T Constant_Value_ga;          /* Computed Parameter: Constant_Value_ga
                                        * Referenced by: '<S95>/Constant'
                                        */
  real32_T Constant_Value_no;          /* Computed Parameter: Constant_Value_no
                                        * Referenced by: '<S96>/Constant'
                                        */
  real32_T Merge_InitialOutput;        /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S93>/Merge'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S92>/Constant'
                                        */
  real32_T Constant_Value_pu;          /* Computed Parameter: Constant_Value_pu
                                        * Referenced by: '<S90>/Constant'
                                        */
  real32_T Constant_Value_hd;          /* Computed Parameter: Constant_Value_hd
                                        * Referenced by: '<S97>/Constant'
                                        */
  real32_T uDLookupTable_tableData_n[3];/* Computed Parameter: uDLookupTable_tableData_n
                                         * Referenced by: '<S102>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_m[3];/* Computed Parameter: uDLookupTable_bp01Data_m
                                        * Referenced by: '<S102>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable1_tableData_d[2];/* Computed Parameter: uDLookupTable1_tableData_d
                                          * Referenced by: '<S102>/1-D Lookup Table1'
                                          */
  real32_T uDLookupTable1_bp01Data_b[2];/* Computed Parameter: uDLookupTable1_bp01Data_b
                                         * Referenced by: '<S102>/1-D Lookup Table1'
                                         */
  real32_T uDLookupTable_tableData_jd[2];/* Computed Parameter: uDLookupTable_tableData_jd
                                          * Referenced by: '<S106>/1-D Lookup Table'
                                          */
  real32_T uDLookupTable_bp01Data_n[2];/* Computed Parameter: uDLookupTable_bp01Data_n
                                        * Referenced by: '<S106>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S106>/Constant'
                                        */
  real32_T Constant_Value_ar;          /* Computed Parameter: Constant_Value_ar
                                        * Referenced by: '<S107>/Constant'
                                        */
  real32_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S107>/Constant1'
                                        */
  real32_T Constant2_Value_f;          /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S107>/Constant2'
                                        */
  real32_T Constant3_Value_md;         /* Computed Parameter: Constant3_Value_md
                                        * Referenced by: '<S107>/Constant3'
                                        */
  real32_T Constant_Value_gd;          /* Computed Parameter: Constant_Value_gd
                                        * Referenced by: '<S86>/Constant'
                                        */
  real32_T Constant_Value_pb;          /* Computed Parameter: Constant_Value_pb
                                        * Referenced by: '<S88>/Constant'
                                        */
  real32_T Constant1_Value_l;          /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S85>/Constant1'
                                        */
  real32_T Constant3_Value_c;          /* Computed Parameter: Constant3_Value_c
                                        * Referenced by: '<S87>/Constant3'
                                        */
  real32_T Constant1_Value_bc;         /* Computed Parameter: Constant1_Value_bc
                                        * Referenced by: '<S87>/Constant1'
                                        */
  real32_T Constant2_Value_jk;         /* Computed Parameter: Constant2_Value_jk
                                        * Referenced by: '<S87>/Constant2'
                                        */
  real32_T Constant_Value_b0;          /* Computed Parameter: Constant_Value_b0
                                        * Referenced by: '<S87>/Constant'
                                        */
  real32_T Constant5_Value_e;          /* Computed Parameter: Constant5_Value_e
                                        * Referenced by: '<S110>/Constant5'
                                        */
  real32_T Constant_Value_b4;          /* Computed Parameter: Constant_Value_b4
                                        * Referenced by: '<S110>/Constant'
                                        */
  real32_T Constant1_Value_fqq;        /* Computed Parameter: Constant1_Value_fqq
                                        * Referenced by: '<S110>/Constant1'
                                        */
  real32_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S110>/Constant2'
                                        */
  real32_T Constant3_Value_nq;         /* Computed Parameter: Constant3_Value_nq
                                        * Referenced by: '<S110>/Constant3'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S110>/Constant4'
                                        */
  real32_T Constant7_Value_c;          /* Computed Parameter: Constant7_Value_c
                                        * Referenced by: '<S110>/Constant7'
                                        */
  real32_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S83>/Delay'
                                        */
  real32_T Merge5_InitialOutput;       /* Computed Parameter: Merge5_InitialOutput
                                        * Referenced by: '<S83>/Merge5'
                                        */
  real32_T Merge_InitialOutput_b;      /* Computed Parameter: Merge_InitialOutput_b
                                        * Referenced by: '<S83>/Merge'
                                        */
  real32_T Merge1_InitialOutput_k;     /* Computed Parameter: Merge1_InitialOutput_k
                                        * Referenced by: '<S83>/Merge1'
                                        */
  real32_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                        * Referenced by: '<S83>/Merge2'
                                        */
  real32_T Merge3_InitialOutput;       /* Computed Parameter: Merge3_InitialOutput
                                        * Referenced by: '<S83>/Merge3'
                                        */
  real32_T Merge4_InitialOutput;       /* Computed Parameter: Merge4_InitialOutput
                                        * Referenced by: '<S83>/Merge4'
                                        */
  real32_T axAbsInit_Value;            /* Computed Parameter: axAbsInit_Value
                                        * Referenced by: '<S83>/axAbsInit'
                                        */
  real32_T Merge7_InitialOutput;       /* Computed Parameter: Merge7_InitialOutput
                                        * Referenced by: '<S83>/Merge7'
                                        */
  real32_T Constant_Value_dd;          /* Computed Parameter: Constant_Value_dd
                                        * Referenced by: '<S129>/Constant'
                                        */
  real32_T Constant_Value_ag;          /* Computed Parameter: Constant_Value_ag
                                        * Referenced by: '<S128>/Constant'
                                        */
  real32_T Constant_Value_o3;          /* Computed Parameter: Constant_Value_o3
                                        * Referenced by: '<S130>/Constant'
                                        */
  real32_T Constant3_Value_b;          /* Computed Parameter: Constant3_Value_b
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real32_T uDLookupTable_tableData_b[6];/* Computed Parameter: uDLookupTable_tableData_b
                                         * Referenced by: '<S111>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_d[6];/* Computed Parameter: uDLookupTable_bp01Data_d
                                        * Referenced by: '<S111>/1-D Lookup Table'
                                        */
  real32_T Constant1_Value_e1;         /* Computed Parameter: Constant1_Value_e1
                                        * Referenced by: '<S111>/Constant1'
                                        */
  real32_T Constant3_Value_k;          /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S111>/Constant3'
                                        */
  real32_T Memory_InitialCondition_go; /* Computed Parameter: Memory_InitialCondition_go
                                        * Referenced by: '<S111>/Memory'
                                        */
  real32_T Constant2_Value_fp;         /* Computed Parameter: Constant2_Value_fp
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real32_T Constant4_Value_n5;         /* Computed Parameter: Constant4_Value_n5
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real32_T Constant5_Value_b;          /* Computed Parameter: Constant5_Value_b
                                        * Referenced by: '<S4>/Constant5'
                                        */
  real32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S16>/Constant'
                                        */
  real32_T Memory_InitialCondition_a;  /* Computed Parameter: Memory_InitialCondition_a
                                        * Referenced by: '<S1>/Memory'
                                        */
  real32_T Constant_Value_f3;          /* Computed Parameter: Constant_Value_f3
                                        * Referenced by: '<S14>/Constant'
                                        */
  real32_T Constant_Value_m4;          /* Computed Parameter: Constant_Value_m4
                                        * Referenced by: '<S17>/Constant'
                                        */
  real32_T Constant_Value_dn;          /* Computed Parameter: Constant_Value_dn
                                        * Referenced by: '<S18>/Constant'
                                        */
  real32_T Gain_Gain_ki;               /* Computed Parameter: Gain_Gain_ki
                                        * Referenced by: '<Root>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real32_T vSet_Value;                 /* Computed Parameter: vSet_Value
                                        * Referenced by: '<S16>/vSet'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S83>/Delay'
                                        */
  boolean_T Constant2_Value_e;         /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S60>/Constant2'
                                        */
  boolean_T Constant_Value_fj;         /* Computed Parameter: Constant_Value_fj
                                        * Referenced by: '<S22>/Constant'
                                        */
  boolean_T Memory1_1_InitialCondition;/* Computed Parameter: Memory1_1_InitialCondition
                                        * Referenced by: '<S22>/Memory1'
                                        */
  boolean_T Memory1_1_InitialCondition_n;/* Computed Parameter: Memory1_1_InitialCondition_n
                                          * Referenced by: '<S41>/Memory1'
                                          */
  boolean_T Merge_1_InitialOutput;     /* Computed Parameter: Merge_1_InitialOutput
                                        * Referenced by: '<S41>/Merge'
                                        */
  boolean_T Constant5_Value_n;         /* Computed Parameter: Constant5_Value_n
                                        * Referenced by: '<S28>/Constant5'
                                        */
  boolean_T Constant6_Value_m;         /* Computed Parameter: Constant6_Value_m
                                        * Referenced by: '<S28>/Constant6'
                                        */
  boolean_T Constant1_Value_i;         /* Computed Parameter: Constant1_Value_i
                                        * Referenced by: '<S19>/Constant1'
                                        */
  boolean_T Constant_Value_ao;         /* Computed Parameter: Constant_Value_ao
                                        * Referenced by: '<S89>/Constant'
                                        */
  boolean_T Constant_Value_n5;         /* Computed Parameter: Constant_Value_n5
                                        * Referenced by: '<S109>/Constant'
                                        */
  boolean_T Constant6_Value_l;         /* Computed Parameter: Constant6_Value_l
                                        * Referenced by: '<S110>/Constant6'
                                        */
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S3>/Out1'
                                        */
  boolean_T Zero_Value[40];            /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S3>/Zero'
                                        */
  boolean_T Merge6_InitialOutput;      /* Computed Parameter: Merge6_InitialOutput
                                        * Referenced by: '<S83>/Merge6'
                                        */
  boolean_T Memory_InitialCondition_h; /* Computed Parameter: Memory_InitialCondition_h
                                        * Referenced by: '<S10>/Memory'
                                        */
  boolean_T Memory1_InitialCondition_h;/* Computed Parameter: Memory1_InitialCondition_h
                                        * Referenced by: '<S10>/Memory1'
                                        */
  boolean_T Constant_Value_kx;         /* Computed Parameter: Constant_Value_kx
                                        * Referenced by: '<S9>/Constant'
                                        */
  boolean_T Memory_InitialCondition_o; /* Computed Parameter: Memory_InitialCondition_o
                                        * Referenced by: '<S15>/Memory'
                                        */
  boolean_T Constant_Value_dc;         /* Computed Parameter: Constant_Value_dc
                                        * Referenced by: '<Root>/Constant'
                                        */
  P_CoreSubsys_AccTarSel_T CoreSubsys; /* '<S6>/For Each Subsystem' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem2_f;/* '<S27>/If Action Subsystem2' */
  P_ObjNoStop_AccTarSel_T ObjStopped;  /* '<S52>/ObjStopped' */
  P_ObjNoStop_AccTarSel_T ObjNoStop;   /* '<S52>/ObjNoStop' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem1_h;/* '<S39>/If Action Subsystem1' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem2_l;/* '<S42>/If Action Subsystem2' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem3;/* '<S21>/If Action Subsystem3' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem_m;/* '<S21>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AccTarSel_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_AccTarSel_T AccTarSel_P;

/* Block signals (default storage) */
extern B_AccTarSel_T AccTarSel_B;

/* Block states (default storage) */
extern DW_AccTarSel_T AccTarSel_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_AccTarSel_T AccTarSel_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_AccTarSel_T AccTarSel_Y;

/* Model entry point functions */
extern void AccTarSel_initialize(void);
extern void AccTarSel_output(void);
extern void AccTarSel_update(void);
extern void AccTarSel_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AccTarSel_T *const AccTarSel_M;

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
 * '<Root>' : 'AccTarSel'
 * '<S1>'   : 'AccTarSel/ACC_Control'
 * '<S2>'   : 'AccTarSel/ACC_State_Machine'
 * '<S3>'   : 'AccTarSel/ACC_Target_Selection'
 * '<S4>'   : 'AccTarSel/EgoCourseFusion'
 * '<S5>'   : 'AccTarSel/ObjAdapter'
 * '<S6>'   : 'AccTarSel/ObjRadarAdapter'
 * '<S7>'   : 'AccTarSel/RTI Data'
 * '<S8>'   : 'AccTarSel/Subsystem'
 * '<S9>'   : 'AccTarSel/Subsystem1'
 * '<S10>'  : 'AccTarSel/Subsystem2'
 * '<S11>'  : 'AccTarSel/Target_PreProcess'
 * '<S12>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl'
 * '<S13>'  : 'AccTarSel/ACC_Control/ArbitraryMix'
 * '<S14>'  : 'AccTarSel/ACC_Control/CurvSpdCtrl'
 * '<S15>'  : 'AccTarSel/ACC_Control/FollowObjCtrl'
 * '<S16>'  : 'AccTarSel/ACC_Control/SetSpdCtrl'
 * '<S17>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl/LowerLimitation'
 * '<S18>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl/UpperLimitation'
 * '<S19>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjInvalid'
 * '<S20>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid'
 * '<S21>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl'
 * '<S22>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl'
 * '<S23>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/CalcDAim'
 * '<S24>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX'
 * '<S25>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/If Action Subsystem'
 * '<S26>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/If Action Subsystem1'
 * '<S27>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl'
 * '<S28>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl'
 * '<S29>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem'
 * '<S30>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem2'
 * '<S31>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem3'
 * '<S32>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/calcDSlowDown'
 * '<S33>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1'
 * '<S34>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case2'
 * '<S35>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/tStopObj'
 * '<S36>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1/Subsystem'
 * '<S37>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1/Subsystem1'
 * '<S38>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/BDC_State_Machine'
 * '<S39>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA'
 * '<S40>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria'
 * '<S41>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile'
 * '<S42>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem'
 * '<S43>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem1'
 * '<S44>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem'
 * '<S45>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1'
 * '<S46>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem2'
 * '<S47>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem3'
 * '<S48>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/Subsystem'
 * '<S49>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1/LPFilter'
 * '<S50>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1/LPFilter1'
 * '<S51>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/Subsystem/LPFilter'
 * '<S52>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop'
 * '<S53>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcProfileReCalc'
 * '<S54>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjNoStop'
 * '<S55>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjStopped'
 * '<S56>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjStopping'
 * '<S57>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/Subsystem'
 * '<S58>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/If Action Subsystem'
 * '<S59>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc'
 * '<S60>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/default'
 * '<S61>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem'
 * '<S62>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/calcInitCondition'
 * '<S63>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration'
 * '<S64>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration/calcD30'
 * '<S65>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration/calcV30'
 * '<S66>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/If Action Subsystem'
 * '<S67>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/If Action Subsystem1'
 * '<S68>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/If Action Subsystem2'
 * '<S69>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem1'
 * '<S70>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem2'
 * '<S71>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem4'
 * '<S72>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal'
 * '<S73>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem'
 * '<S74>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem4'
 * '<S75>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem5'
 * '<S76>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem6'
 * '<S77>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem'
 * '<S78>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem1'
 * '<S79>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem2'
 * '<S80>'  : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem'
 * '<S81>'  : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem1'
 * '<S82>'  : 'AccTarSel/ACC_Target_Selection/Subsystem'
 * '<S83>'  : 'AccTarSel/ACC_Target_Selection/TargetSel'
 * '<S84>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc'
 * '<S85>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc'
 * '<S86>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation'
 * '<S87>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc'
 * '<S88>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc'
 * '<S89>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck'
 * '<S90>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/If Action Subsystem'
 * '<S91>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem'
 * '<S92>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/If Action Subsystem'
 * '<S93>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem'
 * '<S94>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem'
 * '<S95>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem1'
 * '<S96>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/LPFilter'
 * '<S97>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/DistanceToTraj'
 * '<S98>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/If Action Subsystem'
 * '<S99>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem'
 * '<S100>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem1'
 * '<S101>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/If Action Subsystem'
 * '<S102>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/Subsystem'
 * '<S103>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/If Action Subsystem'
 * '<S104>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem'
 * '<S105>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckExistence'
 * '<S106>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckFOV'
 * '<S107>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckMotSts'
 * '<S108>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckPlaus'
 * '<S109>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem'
 * '<S110>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem1'
 * '<S111>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt'
 * '<S112>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem'
 * '<S113>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem1'
 * '<S114>' : 'AccTarSel/ObjAdapter/For Each Subsystem'
 * '<S115>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcDx'
 * '<S116>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcHist'
 * '<S117>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem'
 * '<S118>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcDx'
 * '<S119>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcMotionSts'
 * '<S120>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcType'
 * '<S121>' : 'AccTarSel/RTI Data/RTI Data Store'
 * '<S122>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store'
 * '<S123>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S124>' : 'AccTarSel/Subsystem1/If Action Subsystem'
 * '<S125>' : 'AccTarSel/Subsystem1/If Action Subsystem1'
 * '<S126>' : 'AccTarSel/Target_PreProcess/If Action Subsystem'
 * '<S127>' : 'AccTarSel/Target_PreProcess/preFilt'
 * '<S128>' : 'AccTarSel/Target_PreProcess/preFilt/axAbsFilt'
 * '<S129>' : 'AccTarSel/Target_PreProcess/preFilt/axFilt'
 * '<S130>' : 'AccTarSel/Target_PreProcess/preFilt/vxFilt'
 */
#endif                                 /* RTW_HEADER_AccTarSel_h_ */
