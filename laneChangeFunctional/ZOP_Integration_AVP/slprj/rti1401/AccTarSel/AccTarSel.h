/*
 * Code generation for system model 'AccTarSel'
 * For more details, see corresponding source file AccTarSel.c
 *
 */

#ifndef RTW_HEADER_AccTarSel_h_
#define RTW_HEADER_AccTarSel_h_
#include <math.h>
#include <string.h>
#ifndef AccTarSel_COMMON_INCLUDES_
# define AccTarSel_COMMON_INCLUDES_
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

/* Block signals for system '<S21>/If Action Subsystem' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  OBJDATA_ST ObjData;                  /* '<S98>/Selector1' */
  real32_T Add;                        /* '<S98>/Add' */
  boolean_T RelationalOperator1;       /* '<S98>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S98>/Relational Operator' */
  boolean_T RelationalOperator2;       /* '<S98>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S98>/Relational Operator3' */
  boolean_T OR;                        /* '<S98>/OR' */
  boolean_T AND;                       /* '<S98>/AND' */
} B_IfActionSubsystem_AccTarS_a_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S7>/For Each Subsystem' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  OBJDATA_ST BusCreator;               /* '<S147>/Bus Creator' */
  real32_T vx;                         /* '<S147>/Add' */
  real32_T ax;                         /* '<S147>/Add1' */
  real32_T Gain;                       /* '<S148>/Gain' */
  real32_T dx;                         /* '<S148>/Add' */
  real32_T dy;                         /* '<S147>/Data Type Conversion2' */
  real32_T vy;                         /* '<S147>/Data Type Conversion3' */
  real32_T ay;                         /* '<S147>/Data Type Conversion5' */
  real32_T MotionSts;                  /* '<S147>/Data Type Conversion6' */
  real32_T Type;                       /* '<S147>/Data Type Conversion7' */
  real32_T ID;                         /* '<S147>/Data Type Conversion8' */
  boolean_T Hist;                      /* '<S149>/Relational Operator' */
  boolean_T Valid;                     /* '<S147>/Data Type Conversion' */
} B_CoreSubsys_AccTarSel_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S8>/For Each Subsystem' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  OBJDATA_ST BusCreator;               /* '<S150>/Bus Creator' */
  real32_T Add;                        /* '<S151>/Add' */
  real32_T dy;                         /* '<S150>/Data Type Conversion2' */
  real32_T vx;                         /* '<S150>/Data Type Conversion1' */
  real32_T vy;                         /* '<S150>/Data Type Conversion3' */
  real32_T ax;                         /* '<S150>/Data Type Conversion4' */
  real32_T uDLookupTable;              /* '<S152>/1-D Lookup Table' */
  real32_T MotionSts;                  /* '<S150>/Data Type Conversion6' */
  real32_T uDLookupTable_o;            /* '<S153>/1-D Lookup Table' */
  real32_T Type;                       /* '<S150>/Data Type Conversion7' */
  real32_T ID;                         /* '<S150>/Data Type Conversion8' */
  boolean_T DataTypeConversion9;       /* '<S150>/Data Type Conversion9' */
  boolean_T Valid;                     /* '<S150>/Data Type Conversion' */
} B_CoreSubsys_AccTarSel_c_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'AccTarSel' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  FUS_OBJDATA_ST BusCreator;           /* '<S8>/Bus Creator' */
  FUS_OBJDATA_ST BusCreator_n;         /* '<S7>/Bus Creator' */
  FUS_OBJDATA_ST Switch;               /* '<Root>/Switch' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st;/* '<Root>/Memory' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st_f;/* '<Root>/Bus Creator' */
  Obj_Data VectorConcatenate[40];      /* '<S8>/Vector Concatenate' */
  OBJDATA_ST Selector;                 /* '<S3>/Selector' */
  ATS_PO_ST Memory1[6];                /* '<Root>/Memory1' */
  ATS_PO_ST Selector1;                 /* '<S13>/Selector1' */
  ATS_PO_ST ACC_PO;                    /* '<S13>/Bus Creator' */
  ATS_PO_ST Assignment1[6];            /* '<S13>/Assignment1' */
  ATS_PO_ST Merge;                     /* '<S160>/Merge' */
  ATS_PO_ST Assignment2[6];            /* '<S13>/Assignment2' */
  ATS_PO_ST Selector1_a;               /* '<S11>/Selector1' */
  ATS_PO_ST BusCreator_o;              /* '<S106>/Bus Creator' */
  ATS_PO_ST ATS_Po_st;                 /* '<S20>/Selector1' */
  ATS_OBJINFO_ST Selector1_c;          /* '<S3>/Selector1' */
  ATS_OBJINFO_ST Assignment1_a[40];    /* '<S3>/Assignment1' */
  ATS_OBJINFO_ST BusCreator_p;         /* '<S107>/Bus Creator' */
  ACC_FOC_INFO_ST Memory1_h[6];        /* '<S1>/Memory1' */
  ACC_FOC_INFO_ST Selector2;           /* '<S1>/Selector2' */
  ACC_FOC_INFO_ST Selector2_f;         /* '<S20>/Selector2' */
  ACC_FOC_INFO_ST BusCreator_c;        /* '<S20>/Bus Creator' */
  ACC_FOC_INFO_ST Assignment1_i[6];    /* '<S20>/Assignment1' */
  ACC_FOC_INFO_ST Selector2_l;         /* '<S27>/Selector2' */
  AVP_OUTPUT_ST BusCreator_i;          /* '<S141>/Bus Creator' */
  AVP_OUTPUT_ST BusCreator_j;          /* '<S142>/Bus Creator' */
  AVP_OUTPUT_ST Switch_l;              /* '<S5>/Switch' */
  NET_DRVACTION_ST BusCreator_m;       /* '<S12>/Bus Creator' */
  AST_INFO_ST AST_Info_st;             /* '<Root>/ACC_State_Machine1' */
  ACC_HMI_REQ BusConversion_InsertedFor_ACC_S;
  real32_T Merge_m;                    /* '<S21>/Merge' */
  real32_T Merge1;                     /* '<S21>/Merge1' */
  real32_T Min;                        /* '<S21>/Min' */
  real32_T Gain;                       /* '<S21>/Gain' */
  real32_T Add;                        /* '<S21>/Add' */
  real32_T DataTypeConversion11;       /* '<S12>/Data Type Conversion11' */
  real32_T Memory;                     /* '<S5>/Memory' */
  real32_T Merge_c;                    /* '<S5>/Merge' */
  real32_T Abs;                        /* '<S144>/Abs' */
  real32_T uDLookupTable;              /* '<S144>/1-D Lookup Table' */
  real32_T Merge_k;                    /* '<S144>/Merge' */
  real32_T Divide;                     /* '<S144>/Divide' */
  real32_T Multiply;                   /* '<S144>/Multiply' */
  real32_T Add_n;                      /* '<S144>/Add' */
  real32_T Memory_e;                   /* '<S144>/Memory' */
  real32_T Multiply1;                  /* '<S144>/Multiply1' */
  real32_T Add1;                       /* '<S144>/Add1' */
  real32_T b;                          /* '<S6>/Multiply' */
  real32_T dx;
  real32_T vx;
  real32_T ax;
  real32_T PosTime;                    /* '<S13>/Memory' */
  real32_T NegTime;                    /* '<S13>/Memory' */
  real32_T dx_a;                       /* '<S13>/Merge3' */
  real32_T vx_m;                       /* '<S13>/Merge' */
  real32_T ax_p;                       /* '<S13>/Merge1' */
  real32_T vxAbs;                      /* '<S13>/Add' */
  real32_T axAbs;                      /* '<S13>/Merge2' */
  real32_T Memory_o;                   /* '<S143>/Memory' */
  real32_T Memory1_b;                  /* '<S143>/Memory1' */
  real32_T Multiply_o;                 /* '<S143>/Multiply' */
  real32_T Square;                     /* '<S143>/Square' */
  real32_T Multiply1_h;                /* '<S143>/Multiply1' */
  real32_T Add_p;                      /* '<S143>/Add' */
  real32_T Add1_h;                     /* '<S143>/Add1' */
  real32_T Switch1;                    /* '<S143>/Switch1' */
  real32_T Max;                        /* '<S143>/Max' */
  real32_T vAbsObj;                    /* '<S11>/Add' */
  real32_T Add1_c;                     /* '<S21>/Add1' */
  real32_T Max_g;                      /* '<S21>/Max' */
  real32_T Switch1_j;                  /* '<S22>/Switch1' */
  real32_T Gain_n;                     /* '<S22>/Gain' */
  real32_T Switch_o;                   /* '<S22>/Switch' */
  real32_T Max_gf;                     /* '<S104>/Max' */
  real32_T filtFactor;                 /* '<S104>/Divide' */
  real32_T Multiply_d;                 /* '<S104>/Multiply' */
  real32_T Add_ni;                     /* '<S104>/Add' */
  real32_T Memory_h;                   /* '<S22>/Memory' */
  real32_T Multiply1_g;                /* '<S104>/Multiply1' */
  real32_T Add1_a;                     /* '<S104>/Add1' */
  real32_T Min_d;                      /* '<S22>/Min' */
  real32_T vDiff;                      /* '<S22>/Add' */
  real32_T tSSC;                       /* '<S22>/Merge' */
  real32_T aSSC;                       /* '<S22>/Divide' */
  real32_T Memory_a;                   /* '<S1>/Memory' */
  real32_T Memory1_l;                  /* '<S4>/Memory1' */
  real32_T Merge_o;                    /* '<S4>/Merge' */
  real32_T Switch_e;                   /* '<S4>/Switch' */
  real32_T uDLookupTable_i;            /* '<S4>/1-D Lookup Table' */
  real32_T Min_j;                      /* '<S26>/Min' */
  real32_T uDLookupTable_p;            /* '<S19>/1-D Lookup Table' */
  real32_T Abs1;                       /* '<S19>/Abs1' */
  real32_T Abs_j;                      /* '<S19>/Abs' */
  real32_T Max_b;                      /* '<S19>/Max' */
  real32_T Divide_d;                   /* '<S19>/Divide' */
  real32_T Sqrt;                       /* '<S19>/Sqrt' */
  real32_T Add_b;                      /* '<S19>/Add' */
  real32_T Divide1;                    /* '<S19>/Divide1' */
  real32_T Square_a;                   /* '<S18>/Square' */
  real32_T Square1;                    /* '<S18>/Square1' */
  real32_T Add_pp;                     /* '<S18>/Add' */
  real32_T Add2;                       /* '<S18>/Add2' */
  real32_T Max_m;                      /* '<S18>/Max' */
  real32_T Gain_a;                     /* '<S18>/Gain' */
  real32_T Add1_m;                     /* '<S18>/Add1' */
  real32_T Divide_m;                   /* '<S18>/Divide' */
  real32_T Switch_j;                   /* '<S18>/Switch' */
  real32_T Max_f;                      /* '<S16>/Max' */
  real32_T Max1;                       /* '<S16>/Max1' */
  real32_T Constant3;                  /* '<S22>/Constant3' */
  real32_T Memory_j;                   /* '<S15>/Memory' */
  real32_T Memory1_k;                  /* '<S15>/Memory1' */
  real32_T NegTime_e;                  /* '<S13>/NegTime' */
  real32_T PosTime_p;                  /* '<S13>/PosTime' */
  real32_T Merge1_b;                   /* '<S15>/Merge1' */
  real32_T Add_o;                      /* '<S173>/Add' */
  real32_T ax_n;                       /* '<S161>/ax' */
  real32_T Abs_i;                      /* '<S162>/Abs' */
  real32_T axAbsRaw;                   /* '<S162>/axAbsRaw' */
  real32_T TmpSignalConversionAtLookupTabl[2];
  real32_T TmpSignalConversionAtLookupTa_l[2];
  real32_T LookupTableDynamic1;        /* '<S162>/Lookup Table Dynamic1' */
  real32_T Max_e;                      /* '<S169>/Max' */
  real32_T filtFactor_k;               /* '<S169>/Divide' */
  real32_T Multiply_p;                 /* '<S169>/Multiply' */
  real32_T Add_l;                      /* '<S169>/Add' */
  real32_T Multiply1_k;                /* '<S169>/Multiply1' */
  real32_T Add1_g;                     /* '<S169>/Add1' */
  real32_T axAbsFilt1st;               /* '<S162>/axAbsFilt1st' */
  real32_T axAbsDelta;                 /* '<S162>/axAbsDelta' */
  real32_T Merge_f;                    /* '<S162>/Merge' */
  real32_T TmpSignalConversionAtLookupTa_j[2];
  real32_T TmpSignalConversionAtLookupTa_g[2];
  real32_T LookupTableDynamic;         /* '<S162>/Lookup Table Dynamic' */
  real32_T Merge1_f;                   /* '<S162>/Merge1' */
  real32_T TmpSignalConversionAtLookupTa_k[2];
  real32_T TmpSignalConversionAtLookupTa_i[2];
  real32_T LookupTableDynamic2;        /* '<S162>/Lookup Table Dynamic2' */
  real32_T Max1_f;                     /* '<S162>/Max1' */
  real32_T Switch_la;                  /* '<S162>/Switch' */
  real32_T Switch2;                    /* '<S162>/Switch2' */
  real32_T Switch1_i;                  /* '<S162>/Switch1' */
  real32_T Max_fb;                     /* '<S168>/Max' */
  real32_T filtFactor_f;               /* '<S168>/Divide' */
  real32_T Add_p5;                     /* '<S168>/Add' */
  real32_T Multiply_k;                 /* '<S168>/Multiply' */
  real32_T Multiply1_j;                /* '<S168>/Multiply1' */
  real32_T Max_bm;                     /* '<S170>/Max' */
  real32_T filtFactor_p;               /* '<S170>/Divide' */
  real32_T Add_j;                      /* '<S170>/Add' */
  real32_T Multiply_g;                 /* '<S170>/Multiply' */
  real32_T Multiply1_gf;               /* '<S170>/Multiply1' */
  real32_T Max_d;                      /* '<S171>/Max' */
  real32_T filtFactor_c;               /* '<S171>/Divide' */
  real32_T Add_k;                      /* '<S171>/Add' */
  real32_T Multiply_ps;                /* '<S171>/Multiply' */
  real32_T Multiply1_n;                /* '<S171>/Multiply1' */
  real32_T axTrackTime[2];             /* '<S165>/axTrackTime' */
  real32_T Add_c;                      /* '<S167>/Add' */
  real32_T Add_kb;                     /* '<S166>/Add' */
  real32_T vx_b;                       /* '<S163>/Gain' */
  real32_T ax_d;                       /* '<S163>/Gain1' */
  real32_T Add_g;                      /* '<S135>/Add' */
  real32_T Add_i;                      /* '<S134>/Add' */
  real32_T Delay;                      /* '<S106>/Delay' */
  real32_T DataTypeConversion;         /* '<S106>/Data Type Conversion' */
  real32_T vx_o;                       /* '<S106>/Merge2' */
  real32_T vxAbs_c;                    /* '<S106>/Add' */
  real32_T ax_a;                       /* '<S106>/Merge4' */
  real32_T axAbs_e;                    /* '<S106>/Add1' */
  real32_T Index;                      /* '<S106>/Merge5' */
  real32_T dx_i;                       /* '<S106>/Merge' */
  real32_T dy;                         /* '<S106>/Merge1' */
  real32_T vy;                         /* '<S106>/Merge3' */
  real32_T Type;                       /* '<S106>/Merge7' */
  real32_T MotionSts;                  /* '<S106>/Merge8' */
  real32_T dyToTraj;                   /* '<S109>/Merge' */
  real32_T dyCutInPred;                /* '<S108>/Merge1' */
  real32_T Merge2;                     /* '<S108>/Merge2' */
  real32_T Merge_n;                    /* '<S108>/Merge' */
  real32_T Merge_ns;                   /* '<S111>/Merge' */
  real32_T Multiply_og;                /* '<S110>/Multiply' */
  real32_T Switch_ls;                  /* '<S110>/Switch' */
  real32_T Add_a;                      /* '<S110>/Add' */
  real32_T Min_c;                      /* '<S110>/Min' */
  real32_T Min1;                       /* '<S110>/Min1' */
  real32_T Switch1_h;                  /* '<S110>/Switch1' */
  real32_T Max_gl;                     /* '<S110>/Max' */
  real32_T Merge_ke;                   /* '<S110>/Merge' */
  real32_T uDLookupTable_d;            /* '<S129>/1-D Lookup Table' */
  real32_T uDLookupTable_f;            /* '<S125>/1-D Lookup Table' */
  real32_T Switch_i;                   /* '<S125>/Switch' */
  real32_T dyWidthTraj;                /* '<S125>/Add1' */
  real32_T dyToTrajAbs;                /* '<S125>/Abs' */
  real32_T Add_ko;                     /* '<S125>/Add' */
  real32_T Divide_n;                   /* '<S125>/Divide' */
  real32_T Square_n;                   /* '<S120>/Square' */
  real32_T Multiply_p3;                /* '<S120>/Multiply' */
  real32_T Square1_d;                  /* '<S120>/Square1' */
  real32_T Multiply1_d;                /* '<S120>/Multiply1' */
  real32_T Multiply2;                  /* '<S120>/Multiply2' */
  real32_T Add_ca;                     /* '<S120>/Add' */
  real32_T Abs_b;                      /* '<S116>/Abs' */
  real32_T Abs1_p;                     /* '<S116>/Abs1' */
  real32_T Multiply_c;                 /* '<S116>/Multiply' */
  real32_T Max_c;                      /* '<S119>/Max' */
  real32_T filtFactor_b;               /* '<S119>/Divide' */
  real32_T Add_nv;                     /* '<S119>/Add' */
  real32_T probCutIn;                  /* '<S116>/Merge' */
  real32_T Multiply_m;                 /* '<S119>/Multiply' */
  real32_T Multiply1_i;                /* '<S119>/Multiply1' */
  real32_T Abs1_c;                     /* '<S117>/Abs1' */
  real32_T tPred;                      /* '<S117>/1-D Lookup Table' */
  real32_T Multiply_n;                 /* '<S117>/Multiply' */
  real32_T Add_kt;                     /* '<S117>/Add' */
  real32_T Max_gs;                     /* '<S117>/Max' */
  real32_T Max1_m;                     /* '<S117>/Max1' */
  real32_T dyPred;                     /* '<S117>/Switch' */
  real32_T Abs_iz;                     /* '<S117>/Abs' */
  real32_T aFOC;                       /* '<S20>/Merge' */
  real32_T dAim;                       /* '<S20>/Merge3' */
  real32_T aStat;                      /* '<S20>/Merge4' */
  real32_T aApproach;                  /* '<S20>/Merge5' */
  real32_T ApproachCase;               /* '<S20>/Merge6' */
  real32_T tObjStop;                   /* '<S20>/Merge7' */
  real32_T dSlowDown;                  /* '<S20>/Merge8' */
  real32_T dImmerseAdj;                /* '<S20>/Merge10' */
  real32_T vAbsObj_e;                  /* '<S30>/Add' */
  real32_T Multiply_j;                 /* '<S44>/Multiply' */
  real32_T Add_m;                      /* '<S44>/Add' */
  real32_T axAbs_h;
  real32_T Min1_l;                     /* '<S45>/Min1' */
  real32_T Divide_p;                   /* '<S45>/Divide' */
  real32_T Abs_f;                      /* '<S45>/Abs' */
  real32_T Min_p;                      /* '<S45>/Min' */
  real32_T Switch_p;                   /* '<S45>/Switch' */
  real32_T Switch1_d;                  /* '<S45>/Switch1' */
  real32_T Gain_i;                     /* '<S41>/Gain' */
  real32_T TmpSignalConversionAtdAimLwSpdO[2];
  real32_T TmpSignalConversionAtInport2[2];
  real32_T TmpSignalConversionAtInport3[2];
  real32_T u;                          /* '<S32>/ ' */
  real32_T TmpSignalConversionAtdAimLwSp_c[2];
  real32_T dAimLwSpdObj;               /* '<S32>/dAimLwSpdObj' */
  real32_T TmpSignalConversionAtGainTimeGa[2];
  real32_T uDLookupTable_o;            /* '<S81>/1-D Lookup Table' */
  real32_T TmpSignalConversionAtGainTime_o[2];
  real32_T GainTimeGap;                /* '<S81>/GainTimeGap ' */
  real32_T tTimeGapAct;                /* '<S81>/tTimeGapAct' */
  real32_T Multiply_f;                 /* '<S81>/Multiply' */
  real32_T Add3;                       /* '<S32>/Add3' */
  real32_T Switch2_b;                  /* '<S32>/Switch2' */
  real32_T Max_h;                      /* '<S32>/Max' */
  real32_T Gain3;                      /* '<S32>/Gain3' */
  real32_T Add2_o;                     /* '<S32>/Add2' */
  real32_T Min1_j;                     /* '<S32>/Min1' */
  real32_T Min_g;                      /* '<S32>/Min' */
  real32_T Gain_in;                    /* '<S32>/Gain' */
  real32_T Abs_p;                      /* '<S32>/Abs' */
  real32_T Add_of;                     /* '<S32>/Add' */
  real32_T Gain2;                      /* '<S32>/Gain2' */
  real32_T Gain1;                      /* '<S32>/Gain1' */
  real32_T Add1_o;                     /* '<S32>/Add1' */
  real32_T Switch_pn;                  /* '<S32>/Switch' */
  real32_T Max1_o;                     /* '<S32>/Max1' */
  real32_T Max_d4;                     /* '<S80>/Max' */
  real32_T filtFactor_pj;              /* '<S80>/Divide' */
  real32_T Multiply_mk;                /* '<S80>/Multiply' */
  real32_T Add_pz;                     /* '<S80>/Add' */
  real32_T Multiply1_ge;               /* '<S80>/Multiply1' */
  real32_T Add1_cv;                    /* '<S80>/Add1' */
  real32_T Switch1_p;                  /* '<S32>/Switch1' */
  real32_T TmpSignalConversionAtdImmerseIn[2];
  real32_T kImsLowSpd;                 /* '<S41>/kImsLowSpd' */
  real32_T Min1_d;                     /* '<S41>/Min1' */
  real32_T kImsHighSpd;                /* '<S41>/kImsHighSpd' */
  real32_T TmpSignalConversionAtdImmerse_e[2];
  real32_T dImmerse;                   /* '<S41>/dImmerse' */
  real32_T TmpSignalConversionAtkVxRefInpo[2];
  real32_T TmpSignalConversionAtkVxRelInpo[3];
  real32_T TmpSignalConversionAtkVxRelIn_h[3];
  real32_T kVxRel;                     /* '<S41>/kVxRel' */
  real32_T TmpSignalConversionAtkVxRefIn_j[2];
  real32_T kVxRef;                     /* '<S41>/kVxRef' */
  real32_T u_h;                        /* '<S41>/ ' */
  real32_T Min_dy;                     /* '<S41>/Min' */
  real32_T Add1_j;                     /* '<S41>/Add1' */
  real32_T Max_a;                      /* '<S46>/Max' */
  real32_T filtFactor_o;               /* '<S46>/Divide' */
  real32_T Multiply_e;                 /* '<S46>/Multiply' */
  real32_T Add_l0;                     /* '<S46>/Add' */
  real32_T Multiply1_ho;               /* '<S46>/Multiply1' */
  real32_T Add1_oc;                    /* '<S46>/Add1' */
  real32_T dSlowDown_a;                /* '<S41>/Switch' */
  real32_T Merge_h;                    /* '<S42>/Merge' */
  real32_T Square1_o;                  /* '<S43>/Square1' */
  real32_T Square_aj;                  /* '<S43>/Square' */
  real32_T Min_o;                      /* '<S43>/Min' */
  real32_T Abs_o;                      /* '<S43>/Abs' */
  real32_T Multiply_on;                /* '<S43>/Multiply' */
  real32_T Divide_o;                   /* '<S43>/Divide' */
  real32_T Add_gg;                     /* '<S43>/Add' */
  real32_T Multiply1_e;                /* '<S43>/Multiply1' */
  real32_T Divide1_m;                  /* '<S43>/Divide1' */
  real32_T Gain_m;                     /* '<S43>/Gain' */
  real32_T Merge1_j;                   /* '<S42>/Merge1' */
  real32_T aApproach_g;                /* '<S30>/Merge' */
  real32_T TmpSignalConversionAtLookupTa_h[2];
  real32_T TmpSignalConversionAtLookupT_ly[2];
  real32_T LookupTableDynamic1_j;      /* '<S33>/Lookup Table Dynamic1' */
  real32_T Max_co;                     /* '<S82>/Max' */
  real32_T filtFactor_j;               /* '<S82>/Divide' */
  real32_T Add_nk;                     /* '<S82>/Add' */
  real32_T TmpSignalConversionAtLookupT_j3[2];
  real32_T TmpSignalConversionAtLookupTa_f[2];
  real32_T Multiply3[2];               /* '<S36>/Multiply3' */
  real32_T LookupTableDynamic7;        /* '<S36>/Lookup Table Dynamic7' */
  real32_T TmpSignalConversionAtLookupTa_c[2];
  real32_T LookupTableDynamic6;        /* '<S36>/Lookup Table Dynamic6' */
  real32_T Gain2_m;                    /* '<S36>/Gain2' */
  real32_T TmpSignalConversionAtLookupT_ky[2];
  real32_T TmpSignalConversionAtLookupT_ka[2];
  real32_T LookupTableDynamic4;        /* '<S36>/Lookup Table Dynamic4' */
  real32_T Multiply2_k;                /* '<S36>/Multiply2' */
  real32_T TmpSignalConversionAtLookupT_ip[2];
  real32_T LookupTableDynamic2_f;      /* '<S36>/Lookup Table Dynamic2' */
  real32_T Multiply1_gr;               /* '<S36>/Multiply1' */
  real32_T TmpSignalConversionAtLookupT_jd[4];
  real32_T TmpSignalConversionAtLookupT_jf[2];
  real32_T LookupTableDynamic3;        /* '<S36>/Lookup Table Dynamic3' */
  real32_T Multiply_h;                 /* '<S36>/Multiply' */
  real32_T TmpSignalConversionAtLookupTa_o[2];
  real32_T LookupTableDynamic5;        /* '<S36>/Lookup Table Dynamic5' */
  real32_T Multiply4;                  /* '<S36>/Multiply4' */
  real32_T TmpSignalConversionAtLookupT_gn[4];
  real32_T LookupTableDynamic_p;       /* '<S36>/Lookup Table Dynamic' */
  real32_T Switch_h;                   /* '<S36>/Switch' */
  real32_T Divide_b;                   /* '<S90>/Divide' */
  real32_T dThresNeg;                  /* '<S90>/Min' */
  real32_T dBreakPointNeg;             /* '<S90>/Add1' */
  real32_T Divide1_o;                  /* '<S90>/Divide1' */
  real32_T dBreakPointPos;             /* '<S90>/Add2' */
  real32_T Merge1_l;                   /* '<S90>/Merge1' */
  real32_T Merge2_i;                   /* '<S90>/Merge2' */
  real32_T Merge_d;                    /* '<S36>/Merge' */
  real32_T vDeltaRaw;                  /* '<S36>/Gain' */
  real32_T TmpSignalConversionAtLookupT_hg[2];
  real32_T TmpSignalConversionAtLookupT_he[2];
  real32_T LookupTableDynamic8;        /* '<S36>/Lookup Table Dynamic8' */
  real32_T TmpSignalConversionAtLookup_lyc[2];
  real32_T LookupTableDynamic1_n;      /* '<S36>/Lookup Table Dynamic1' */
  real32_T Switch1_c;                  /* '<S36>/Switch1' */
  real32_T Divide_h;                   /* '<S36>/Divide' */
  real32_T aStat_p;                    /* '<S36>/Add' */
  real32_T Min_oe;                     /* '<S33>/Min' */
  real32_T TmpSignalConversionAtLookup_jdp[2];
  real32_T TmpSignalConversionAtLookup_gn2[2];
  real32_T LookupTableDynamic_k;       /* '<S33>/Lookup Table Dynamic' */
  real32_T Multiply_cj;                /* '<S82>/Multiply' */
  real32_T Multiply1_hs;               /* '<S82>/Multiply1' */
  real32_T Add1_m3;                    /* '<S82>/Add1' */
  real32_T aFocMix;                    /* '<S83>/Merge' */
  real32_T Switch_m;                   /* '<S33>/Switch' */
  real32_T Switch_mh;                  /* '<S37>/Switch' */
  real32_T vAbsObj_c;                  /* '<S37>/Add' */
  real32_T aConstNegPhase;             /* '<S94>/Multiply' */
  real32_T Add_by;                     /* '<S94>/Add' */
  real32_T Multiply1_dc;               /* '<S94>/Multiply1' */
  real32_T Abs_oh;                     /* '<S94>/Abs' */
  real32_T Square_h;                   /* '<S94>/Square' */
  real32_T Multiply2_g;                /* '<S94>/Multiply2' */
  real32_T Add1_k;                     /* '<S94>/Add1' */
  real32_T vUpper;                     /* '<S94>/Sqrt' */
  real32_T Add_gh;                     /* '<S93>/Add' */
  real32_T Multiply_a;                 /* '<S93>/Multiply' */
  real32_T Add_as;                     /* '<S92>/Add' */
  real32_T Multiply_k4;                /* '<S92>/Multiply' */
  real32_T aConstNegPhase_i;           /* '<S91>/Multiply' */
  real32_T Add_bb;                     /* '<S91>/Add' */
  real32_T Multiply1_f;                /* '<S91>/Multiply1' */
  real32_T Abs_fo;                     /* '<S91>/Abs' */
  real32_T Square_o;                   /* '<S91>/Square' */
  real32_T Multiply2_l;                /* '<S91>/Multiply2' */
  real32_T Add1_i;                     /* '<S91>/Add1' */
  real32_T TmpSignalConversionAtLooku_jdp5[2];
  real32_T TmpSignalConversionAtLooku_gn2p[2];
  real32_T LookupTableDynamic_l;       /* '<S86>/Lookup Table Dynamic' */
  real32_T Square1_p;                  /* '<S47>/Square1' */
  real32_T Add1_f;                     /* '<S47>/Add1' */
  real32_T Multiply_l;                 /* '<S47>/Multiply' */
  real32_T Divide_g;                   /* '<S47>/Divide' */
  real32_T Divide1_a;                  /* '<S47>/Divide1' */
  real32_T Abs_pu;                     /* '<S47>/Abs' */
  real32_T Assignment1_a3[6];          /* '<S27>/Assignment1' */
  real32_T Memory_ao;                  /* '<S25>/Memory' */
  real32_T TmpSignalConversionAtSelectorIn[4];
  real32_T Selector_f;                 /* '<S25>/Selector' */
  real32_T Switch_pm;                  /* '<S25>/Switch' */
  real32_T Switch1_e;                  /* '<S25>/Switch1' */
  int32_T uDLookupTable_n;             /* '<S17>/1-D Lookup Table' */
  int32_T ForIterator;                 /* '<S3>/For Iterator' */
  int32_T ForIterator_j;               /* '<S20>/For Iterator' */
  int32_T ForIterator_jq;              /* '<S27>/For Iterator' */
  int32_T ForIterator_o;               /* '<S25>/For Iterator' */
  int32_T Add_f;                       /* '<S25>/Add' */
  int32_T Memory1_e;                   /* '<S25>/Memory1' */
  int32_T Switch2_j;                   /* '<S25>/Switch2' */
  uint16_T Gain_p;                     /* '<S12>/Gain' */
  uint16_T Gain1_g;                    /* '<S12>/Gain1' */
  uint16_T Gain2_f;                    /* '<S12>/Gain2' */
  uint16_T Gain3_l;                    /* '<S12>/Gain3' */
  uint16_T Add_d;                      /* '<S12>/Add' */
  uint8_T Memory3;                     /* '<S5>/Memory3' */
  uint8_T DataTypeConversion12;        /* '<S12>/Data Type Conversion12' */
  uint8_T DataTypeConversion13;        /* '<S12>/Data Type Conversion13' */
  uint8_T DataTypeConversion14;        /* '<S12>/Data Type Conversion14' */
  uint8_T DataTypeConversion15;        /* '<S12>/Data Type Conversion15' */
  boolean_T RelationalOperator;        /* '<S1>/Relational Operator' */
  boolean_T RelationalOperator1;       /* '<S1>/Relational Operator1' */
  boolean_T RelationalOperator2;       /* '<S1>/Relational Operator2' */
  boolean_T AND;                       /* '<S1>/AND' */
  boolean_T DataTypeConversion1_l;     /* '<S12>/Data Type Conversion1' */
  boolean_T AND4;                      /* '<S159>/AND4' */
  boolean_T RelationalOperator_k;      /* '<S159>/Relational Operator' */
  boolean_T AND_j;                     /* '<S159>/AND' */
  boolean_T RelationalOperator1_p;     /* '<S159>/Relational Operator1' */
  boolean_T Memory_f;                  /* '<S159>/Memory' */
  boolean_T AND2;                      /* '<S159>/AND2' */
  boolean_T AND3;                      /* '<S159>/AND3' */
  boolean_T ACC_SetSw;                 /* '<S12>/Data Type Conversion4' */
  boolean_T DataTypeConversion16;      /* '<S12>/Data Type Conversion16' */
  boolean_T RelationalOperator1_i;     /* '<S5>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S5>/Relational Operator' */
  boolean_T OR;                        /* '<S12>/OR' */
  boolean_T ACC_SetSwK1;               /* '<S12>/Memory2' */
  boolean_T ACC_SpdIncSw;              /* '<S12>/Data Type Conversion6' */
  boolean_T ACC_SpdIncSwK1;            /* '<S12>/Memory' */
  boolean_T ACC_SpdDecSw;              /* '<S12>/Data Type Conversion7' */
  boolean_T ACC_SpdDecSwK1;            /* '<S12>/Memory1' */
  boolean_T RelationalOperator_l;      /* '<S144>/Relational Operator' */
  boolean_T RelationalOperator_a;      /* '<S13>/Relational Operator' */
  boolean_T AND_b;                     /* '<S13>/AND' */
  boolean_T RelationalOperator_ke;     /* '<S143>/Relational Operator' */
  boolean_T RelationalOperator_g;      /* '<S160>/Relational Operator' */
  boolean_T RelationalOperator6;       /* '<S11>/Relational Operator6' */
  boolean_T RelationalOperator7;       /* '<S11>/Relational Operator7' */
  boolean_T RelationalOperator8;       /* '<S11>/Relational Operator8' */
  boolean_T AND2_n;                    /* '<S11>/AND2' */
  boolean_T AND3_o;                    /* '<S11>/AND3' */
  boolean_T DrvOffEnable;              /* '<S11>/Merge' */
  boolean_T DataTypeConversion16_o;    /* '<S14>/Data Type Conversion16' */
  boolean_T RelationalOperator_kf;     /* '<S22>/Relational Operator' */
  boolean_T Equal1;                    /* '<S137>/Equal1' */
  boolean_T AND2_k;                    /* '<S4>/AND2' */
  boolean_T AND1_o[2];                 /* '<S4>/AND1' */
  boolean_T Memory_g[2];               /* '<S4>/Memory' */
  boolean_T Equal[2];                  /* '<S4>/Equal' */
  boolean_T AND_a[2];                  /* '<S4>/AND' */
  boolean_T RelationalOperator_e;      /* '<S18>/Relational Operator' */
  boolean_T OR_f;                      /* '<S26>/OR' */
  boolean_T RelationalOperator_m;      /* '<S17>/Relational Operator' */
  boolean_T OR_fk;                     /* '<S17>/OR' */
  boolean_T NOT;                       /* '<S12>/NOT' */
  boolean_T RelationalOperator_mf;     /* '<S12>/Relational Operator' */
  boolean_T RelationalOperator_p;      /* '<Root>/Relational Operator' */
  boolean_T RelationalOperator2_h;     /* '<Root>/Relational Operator2' */
  boolean_T RelationalOperator1_g;     /* '<Root>/Relational Operator1' */
  boolean_T RelationalOperator_jx;     /* '<S15>/Relational Operator' */
  boolean_T RelationalOperator1_e;     /* '<S15>/Relational Operator1' */
  boolean_T AND_jh;                    /* '<S15>/AND' */
  boolean_T RelationalOperator2_f;     /* '<S15>/Relational Operator2' */
  boolean_T Merge_g;                   /* '<S15>/Merge' */
  boolean_T RelationalOperator_ko;     /* '<S162>/Relational Operator' */
  boolean_T Assignment[40];            /* '<S3>/Assignment' */
  boolean_T RelationalOperator1_l;     /* '<S106>/Relational Operator1' */
  boolean_T Delay1;                    /* '<S106>/Delay1' */
  boolean_T RelationalOperator2_d;     /* '<S106>/Relational Operator2' */
  boolean_T AND1_g;                    /* '<S106>/AND1' */
  boolean_T RelationalOperator_d;      /* '<S106>/Relational Operator' */
  boolean_T AND_h;                     /* '<S106>/AND' */
  boolean_T Valid;                     /* '<S106>/Merge6' */
  boolean_T isCutIn;                   /* '<S108>/Relational Operator2' */
  boolean_T RelationalOperator_o;      /* '<S110>/Relational Operator' */
  boolean_T Merge_oz;                  /* '<S112>/Merge' */
  boolean_T RelationalOperator_pc;     /* '<S128>/Relational Operator' */
  boolean_T RelationalOperator1_pu;    /* '<S128>/Relational Operator1' */
  boolean_T RelationalOperator2_f5;    /* '<S128>/Relational Operator2' */
  boolean_T LogicalOperator;           /* '<S128>/Logical Operator' */
  boolean_T RelationalOperator1_k;     /* '<S129>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S129>/Relational Operator' */
  boolean_T LogicalOperator_n;         /* '<S129>/Logical Operator' */
  boolean_T RelationalOperator_i;      /* '<S130>/Relational Operator' */
  boolean_T RelationalOperator1_lm;    /* '<S130>/Relational Operator1' */
  boolean_T RelationalOperator2_g;     /* '<S130>/Relational Operator2' */
  boolean_T LogicalOperator1;          /* '<S130>/Logical Operator1' */
  boolean_T RelationalOperator3;       /* '<S130>/Relational Operator3' */
  boolean_T LogicalOperator2;          /* '<S130>/Logical Operator2' */
  boolean_T P_StandObjEnable;          /* '<S130>/P_StandObjEnable' */
  boolean_T RelationalOperator1_j;     /* '<S131>/Relational Operator1' */
  boolean_T RelationalOperator_lx;     /* '<S125>/Relational Operator' */
  boolean_T AND_hu;                    /* '<S125>/AND' */
  boolean_T RelationalOperator3_d;     /* '<S114>/Relational Operator3' */
  boolean_T RelationalOperator3_o;     /* '<S116>/Relational Operator3' */
  boolean_T RelationalOperator_gs;     /* '<S116>/Relational Operator' */
  boolean_T RelationalOperator1_jr;    /* '<S116>/Relational Operator1' */
  boolean_T RelationalOperator2_m;     /* '<S116>/Relational Operator2' */
  boolean_T LogicalOperator_d;         /* '<S116>/Logical Operator' */
  boolean_T DecToStop;                 /* '<S20>/Merge1' */
  boolean_T FirstCyc;                  /* '<S20>/Merge2' */
  boolean_T ObjLeaving;                /* '<S20>/Merge9' */
  boolean_T RelationalOperator_df;     /* '<S44>/Relational Operator' */
  boolean_T RelationalOperator2_i;     /* '<S44>/Relational Operator2' */
  boolean_T RelationalOperator1_g1;    /* '<S44>/Relational Operator1' */
  boolean_T AND_ak;                    /* '<S44>/AND' */
  boolean_T ObjLeaving_h;
  boolean_T Merge_l;                   /* '<S44>/Merge' */
  boolean_T Switch_h1;                 /* '<S44>/Switch' */
  boolean_T RelationalOperator_mi;     /* '<S45>/Relational Operator' */
  boolean_T RelationalOperator1_j3;    /* '<S45>/Relational Operator1' */
  boolean_T OR_i;                      /* '<S45>/OR' */
  boolean_T RelationalOperator3_m;     /* '<S30>/Relational Operator3' */
  boolean_T RelationalOperator1_m;     /* '<S30>/Relational Operator1' */
  boolean_T RelationalOperator_pq;     /* '<S42>/Relational Operator' */
  boolean_T RelationalOperator1_o;     /* '<S32>/Relational Operator1' */
  boolean_T RelationalOperator2_gz;    /* '<S32>/Relational Operator2' */
  boolean_T AND_i;                     /* '<S32>/AND' */
  boolean_T RelationalOperator_go;     /* '<S32>/Relational Operator' */
  boolean_T RelationalOperator_lk;     /* '<S30>/Relational Operator' */
  boolean_T OR_j;                      /* '<S30>/OR' */
  boolean_T OR1;                       /* '<S30>/OR1' */
  boolean_T RelationalOperator_ob;     /* '<S90>/Relational Operator' */
  boolean_T RelationalOperator1_kx;    /* '<S90>/Relational Operator1' */
  boolean_T RelationalOperator2_h3;    /* '<S90>/Relational Operator2' */
  boolean_T phase1;                    /* '<S36>/Relational Operator' */
  boolean_T phase2;                    /* '<S36>/Relational Operator1' */
  boolean_T RelationalOperator2_hc;    /* '<S36>/Relational Operator2' */
  boolean_T RelationalOperator_dk;     /* '<S83>/Relational Operator' */
  boolean_T RelationalOperator1_b;     /* '<S83>/Relational Operator1' */
  boolean_T LogicalOperator_g;         /* '<S83>/Logical Operator' */
  boolean_T RelationalOperator2_gq;    /* '<S83>/Relational Operator2' */
  boolean_T DecToStop_m;
  boolean_T RelationalOperator6_b;     /* '<S37>/Relational Operator6' */
  boolean_T RelationalOperator7_b;     /* '<S37>/Relational Operator7' */
  boolean_T AND2_e;                    /* '<S37>/AND2' */
  boolean_T RelationalOperator1_kd;    /* '<S37>/Relational Operator1' */
  boolean_T RelationalOperator_aa;     /* '<S37>/Relational Operator' */
  boolean_T RelationalOperator2_hl;    /* '<S37>/Relational Operator2' */
  boolean_T AND_d;                     /* '<S37>/AND' */
  boolean_T RelationalOperator3_c;     /* '<S37>/Relational Operator3' */
  boolean_T RelationalOperator4;       /* '<S37>/Relational Operator4' */
  boolean_T RelationalOperator5;       /* '<S37>/Relational Operator5' */
  boolean_T AND1_j;                    /* '<S37>/AND1' */
  boolean_T Assignment2_n[6];          /* '<S27>/Assignment2' */
  boolean_T RelationalOperator_ly;     /* '<S25>/Relational Operator' */
  boolean_T RelationalOperator1_pk;    /* '<S25>/Relational Operator1' */
  B_CoreSubsys_AccTarSel_c_T CoreSubsys_p[40];/* '<S8>/For Each Subsystem' */
  B_CoreSubsys_AccTarSel_T CoreSubsys[40];/* '<S7>/For Each Subsystem' */
  B_IfActionSubsystem_AccTarS_a_T IfActionSubsystem2;/* '<S21>/If Action Subsystem2' */
  B_IfActionSubsystem_AccTarS_a_T IfActionSubsystem;/* '<S21>/If Action Subsystem' */
} B_AccTarSel_c_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'AccTarSel' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  ATS_INTERNAL_OBJINFO_ST Memory_PreviousInput;/* '<Root>/Memory' */
  ACC_FOC_INFO_ST Memory1_PreviousInput[6];/* '<S1>/Memory1' */
  ATS_PO_ST Memory1_PreviousInput_b[6];/* '<Root>/Memory1' */
  real32_T Delay_DSTATE;               /* '<S106>/Delay' */
  real32_T Memory_PreviousInput_b;     /* '<S5>/Memory' */
  real32_T Memory_PreviousInput_g;     /* '<S144>/Memory' */
  real32_T Memory_2_PreviousInput;     /* '<S13>/Memory' */
  real32_T Memory_1_PreviousInput;     /* '<S13>/Memory' */
  real32_T Memory_PreviousInput_e;     /* '<S143>/Memory' */
  real32_T Memory1_PreviousInput_f;    /* '<S143>/Memory1' */
  real32_T Memory_PreviousInput_i;     /* '<S22>/Memory' */
  real32_T Memory_PreviousInput_a;     /* '<S1>/Memory' */
  real32_T Memory1_PreviousInput_j;    /* '<S4>/Memory1' */
  real32_T Memory_PreviousInput_h;     /* '<S15>/Memory' */
  real32_T Memory1_PreviousInput_k;    /* '<S15>/Memory1' */
  real32_T Memory_PreviousInput_gs;    /* '<S25>/Memory' */
  int32_T Memory1_PreviousInput_h;     /* '<S25>/Memory1' */
  boolean_T Delay1_DSTATE;             /* '<S106>/Delay1' */
  uint8_T Memory3_PreviousInput;       /* '<S5>/Memory3' */
  uint8_T is_active_c2_AccTarSel;      /* '<Root>/ACC_State_Machine1' */
  uint8_T is_c2_AccTarSel;             /* '<Root>/ACC_State_Machine1' */
  uint8_T is_ACTIVE;                   /* '<Root>/ACC_State_Machine1' */
  boolean_T Memory_PreviousInput_l;    /* '<S159>/Memory' */
  boolean_T Memory2_PreviousInput;     /* '<S12>/Memory2' */
  boolean_T Memory_PreviousInput_f;    /* '<S12>/Memory' */
  boolean_T Memory1_PreviousInput_bw;  /* '<S12>/Memory1' */
  boolean_T Memory_PreviousInput_lc[2];/* '<S4>/Memory' */
} DW_AccTarSel_f_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S30>/If Action Subsystem' */
struct P_IfActionSubsystem_AccTarSel_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S38>/Constant2'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S44>/Approaching' */
struct P_Approaching_AccTarSel_T_ {
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S49>/Constant'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S36>/If Action Subsystem2' */
struct P_IfActionSubsystem2_AccTarSe_T_ {
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S88>/Constant'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S21>/If Action Subsystem' */
struct P_IfActionSubsystem_AccTarS_k_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S98>/Constant2'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S98>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S98>/Constant3'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S98>/Constant4'
                                        */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S98>/Constant'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S7>/For Each Subsystem' */
struct P_CoreSubsys_AccTarSel_T_ {
  real32_T Constant11_Value;           /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S149>/Constant11'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S148>/Gain'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S148>/Constant1'
                                        */
  real32_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S147>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S147>/Constant2'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S147>/Constant3'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S8>/For Each Subsystem' */
struct P_CoreSubsys_AccTarSel_g_T_ {
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S151>/Constant1'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S150>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S150>/Constant2'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S150>/Constant4'
                                        */
  real32_T uDLookupTable_tableData[6]; /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S152>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_bp01Data[6];  /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S152>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_tableData_p[4];/* Computed Parameter: uDLookupTable_tableData_p
                                         * Referenced by: '<S153>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_l[4];/* Computed Parameter: uDLookupTable_bp01Data_l
                                        * Referenced by: '<S153>/1-D Lookup Table'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S150>/Constant3'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S15>/If Action Subsystem' */
struct P_IfActionSubsystem_AccTarS_g_T_ {
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S172>/Constant1'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S172>/Constant'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_AccTarSel_T_ {
  ATS_INTERNAL_OBJINFO_ST Memory_InitialCondition;/* Computed Parameter: Memory_InitialCondition
                                                   * Referenced by: '<Root>/Memory'
                                                   */
  ACC_FOC_INFO_ST FOCInfo_Y0;          /* Computed Parameter: FOCInfo_Y0
                                        * Referenced by: '<S20>/FOCInfo'
                                        */
  ACC_FOC_INFO_ST Zero1_Value[6];      /* Computed Parameter: Zero1_Value
                                        * Referenced by: '<S20>/Zero1'
                                        */
  ACC_FOC_INFO_ST Memory1_InitialCondition;/* Computed Parameter: Memory1_InitialCondition
                                            * Referenced by: '<S1>/Memory1'
                                            */
  ATS_OBJINFO_ST ObjInfo_Y0;           /* Computed Parameter: ObjInfo_Y0
                                        * Referenced by: '<S3>/ObjInfo'
                                        */
  ATS_OBJINFO_ST Zero1_Value_k[40];    /* Computed Parameter: Zero1_Value_k
                                        * Referenced by: '<S3>/Zero1'
                                        */
  ATS_PO_ST POInfo_Y0;                 /* Computed Parameter: POInfo_Y0
                                        * Referenced by: '<S3>/POInfo'
                                        */
  ATS_PO_ST Zero1_Value_g[6];          /* Computed Parameter: Zero1_Value_g
                                        * Referenced by: '<S13>/Zero1'
                                        */
  ATS_PO_ST Memory1_InitialCondition_e;/* Computed Parameter: Memory1_InitialCondition_e
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Constant1_Value;              /* Expression: -0.2
                                        * Referenced by: '<S44>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0.2
                                        * Referenced by: '<S44>/Constant2'
                                        */
  real_T Constant2_Value_f;            /* Expression: 0
                                        * Referenced by: '<S116>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 15
                                        * Referenced by: '<S159>/Constant'
                                        */
  real_T Constant1_Value_a;            /* Expression: 10
                                        * Referenced by: '<S159>/Constant1'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  int32_T CMDType_Y0;                  /* Computed Parameter: CMDType_Y0
                                        * Referenced by: '<S25>/CMDType'
                                        */
  int32_T Constant2_Value_n;           /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S25>/Constant2'
                                        */
  int32_T Constant_Value_m;            /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S25>/Constant'
                                        */
  int32_T Memory1_InitialCondition_d;  /* Computed Parameter: Memory1_InitialCondition_d
                                        * Referenced by: '<S25>/Memory1'
                                        */
  int32_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S106>/Constant'
                                        */
  int32_T Constant2_Value_i;           /* Computed Parameter: Constant2_Value_i
                                        * Referenced by: '<Root>/Constant2'
                                        */
  int32_T Constant1_Value_f;           /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S13>/Constant1'
                                        */
  int32_T Constant_Value_g;            /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S13>/Constant'
                                        */
  int32_T Constant2_Value_c;           /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S13>/Constant2'
                                        */
  int32_T Constant1_Value_i;           /* Computed Parameter: Constant1_Value_i
                                        * Referenced by: '<S11>/Constant1'
                                        */
  int32_T Constant2_Value_cv;          /* Computed Parameter: Constant2_Value_cv
                                        * Referenced by: '<S26>/Constant2'
                                        */
  int32_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S1>/Constant3'
                                        */
  int32_T Constant_Value_c;            /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S17>/Constant'
                                        */
  int32_T uDLookupTable_tableData[6];  /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S17>/1-D Lookup Table'
                                        */
  int32_T uDLookupTable_bp01Data[6];   /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S17>/1-D Lookup Table'
                                        */
  int32_T Constant9_Value;             /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S1>/Constant9'
                                        */
  int32_T Constant9_Value_d;           /* Computed Parameter: Constant9_Value_d
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real32_T aMin_Y0;                    /* Computed Parameter: aMin_Y0
                                        * Referenced by: '<S25>/aMin'
                                        */
  real32_T Constant1_Value_l;          /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S25>/Constant1'
                                        */
  real32_T Memory_InitialCondition_h;  /* Computed Parameter: Memory_InitialCondition_h
                                        * Referenced by: '<S25>/Memory'
                                        */
  real32_T aFOCArray_Y0;               /* Computed Parameter: aFOCArray_Y0
                                        * Referenced by: '<S27>/aFOCArray'
                                        */
  real32_T Zero1_Value_l[6];           /* Computed Parameter: Zero1_Value_l
                                        * Referenced by: '<S27>/Zero1'
                                        */
  real32_T Constant1_Value_fy;         /* Computed Parameter: Constant1_Value_fy
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real32_T Constant2_Value_is;         /* Computed Parameter: Constant2_Value_is
                                        * Referenced by: '<S39>/Constant2'
                                        */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S48>/Constant'
                                        */
  real32_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S47>/Constant1'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S47>/Constant'
                                        */
  real32_T Constant2_Value_p;          /* Computed Parameter: Constant2_Value_p
                                        * Referenced by: '<S47>/Constant2'
                                        */
  real32_T Constant2_Value_cj;         /* Computed Parameter: Constant2_Value_cj
                                        * Referenced by: '<S91>/Constant2'
                                        */
  real32_T Constant2_Value_j;          /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S94>/Constant2'
                                        */
  real32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S94>/Constant'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S30>/Constant'
                                        */
  real32_T Constant1_Value_dk;         /* Computed Parameter: Constant1_Value_dk
                                        * Referenced by: '<S30>/Constant1'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S45>/Constant4'
                                        */
  real32_T Constant2_Value_ju;         /* Computed Parameter: Constant2_Value_ju
                                        * Referenced by: '<S45>/Constant2'
                                        */
  real32_T Constant3_Value_a;          /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S45>/Constant3'
                                        */
  real32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S45>/Constant'
                                        */
  real32_T Constant1_Value_fq;         /* Computed Parameter: Constant1_Value_fq
                                        * Referenced by: '<S45>/Constant1'
                                        */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S45>/Switch'
                                        */
  real32_T Constant2_Value_cl;         /* Computed Parameter: Constant2_Value_cl
                                        * Referenced by: '<S42>/Constant2'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S41>/Gain'
                                        */
  real32_T Constant10_Value;           /* Computed Parameter: Constant10_Value
                                        * Referenced by: '<S32>/Constant10'
                                        */
  real32_T Constant1_Value_dh;         /* Computed Parameter: Constant1_Value_dh
                                        * Referenced by: '<S32>/Constant1'
                                        */
  real32_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S32>/Constant2'
                                        */
  real32_T Constant5_Value_j;          /* Computed Parameter: Constant5_Value_j
                                        * Referenced by: '<S32>/Constant5'
                                        */
  real32_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S32>/Constant6'
                                        */
  real32_T Constant7_Value;            /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S32>/Constant7'
                                        */
  real32_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S32>/Constant8'
                                        */
  real32_T Constant4_Value_k;          /* Computed Parameter: Constant4_Value_k
                                        * Referenced by: '<S32>/Constant4'
                                        */
  real32_T Constant5_Value_k;          /* Computed Parameter: Constant5_Value_k
                                        * Referenced by: '<S81>/Constant5'
                                        */
  real32_T Constant6_Value_f;          /* Computed Parameter: Constant6_Value_f
                                        * Referenced by: '<S81>/Constant6'
                                        */
  real32_T Constant1_Value_ft;         /* Computed Parameter: Constant1_Value_ft
                                        * Referenced by: '<S81>/Constant1'
                                        */
  real32_T uDLookupTable_tableData_c[3];/* Computed Parameter: uDLookupTable_tableData_c
                                         * Referenced by: '<S81>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_n[3];/* Computed Parameter: uDLookupTable_bp01Data_n
                                        * Referenced by: '<S81>/1-D Lookup Table'
                                        */
  real32_T Constant3_Value_ab;         /* Computed Parameter: Constant3_Value_ab
                                        * Referenced by: '<S32>/Constant3'
                                        */
  real32_T Constant9_Value_g;          /* Computed Parameter: Constant9_Value_g
                                        * Referenced by: '<S32>/Constant9'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S32>/Gain3'
                                        */
  real32_T Constant_Value_ff;          /* Computed Parameter: Constant_Value_ff
                                        * Referenced by: '<S32>/Constant'
                                        */
  real32_T Gain_Gain_m;                /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S32>/Gain'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S32>/Gain2'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S32>/Gain1'
                                        */
  real32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S80>/Constant'
                                        */
  real32_T Constant_Value_l2;          /* Computed Parameter: Constant_Value_l2
                                        * Referenced by: '<S41>/Constant'
                                        */
  real32_T Constant2_Value_b;          /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S41>/Constant2'
                                        */
  real32_T Constant3_Value_l;          /* Computed Parameter: Constant3_Value_l
                                        * Referenced by: '<S41>/Constant3'
                                        */
  real32_T kImsLowSpd_Gain;            /* Computed Parameter: kImsLowSpd_Gain
                                        * Referenced by: '<S41>/kImsLowSpd'
                                        */
  real32_T kImsHighSpd_Gain;           /* Computed Parameter: kImsHighSpd_Gain
                                        * Referenced by: '<S41>/kImsHighSpd'
                                        */
  real32_T Constant9_Value_i;          /* Computed Parameter: Constant9_Value_i
                                        * Referenced by: '<S41>/Constant9'
                                        */
  real32_T Constant10_Value_i;         /* Computed Parameter: Constant10_Value_i
                                        * Referenced by: '<S41>/Constant10'
                                        */
  real32_T Constant12_Value;           /* Computed Parameter: Constant12_Value
                                        * Referenced by: '<S41>/Constant12'
                                        */
  real32_T Constant1_Value_ls;         /* Computed Parameter: Constant1_Value_ls
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real32_T Constant4_Value_kp;         /* Computed Parameter: Constant4_Value_kp
                                        * Referenced by: '<S41>/Constant4'
                                        */
  real32_T Constant5_Value_ja;         /* Computed Parameter: Constant5_Value_ja
                                        * Referenced by: '<S41>/Constant5'
                                        */
  real32_T Constant6_Value_n;          /* Computed Parameter: Constant6_Value_n
                                        * Referenced by: '<S41>/Constant6'
                                        */
  real32_T Constant7_Value_d;          /* Computed Parameter: Constant7_Value_d
                                        * Referenced by: '<S41>/Constant7'
                                        */
  real32_T Constant8_Value_k;          /* Computed Parameter: Constant8_Value_k
                                        * Referenced by: '<S41>/Constant8'
                                        */
  real32_T Constant_Value_cf;          /* Computed Parameter: Constant_Value_cf
                                        * Referenced by: '<S46>/Constant'
                                        */
  real32_T Constant2_Value_ct;         /* Computed Parameter: Constant2_Value_ct
                                        * Referenced by: '<S43>/Constant2'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S43>/Constant'
                                        */
  real32_T Constant1_Value_h;          /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real32_T Gain_Gain_k;                /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S43>/Gain'
                                        */
  real32_T Constant2_Value_k;          /* Computed Parameter: Constant2_Value_k
                                        * Referenced by: '<S29>/Constant2'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S33>/Constant'
                                        */
  real32_T Constant1_Value_b;          /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S33>/Constant1'
                                        */
  real32_T Constant2_Value_b1;         /* Computed Parameter: Constant2_Value_b1
                                        * Referenced by: '<S33>/Constant2'
                                        */
  real32_T Constant4_Value_p;          /* Computed Parameter: Constant4_Value_p
                                        * Referenced by: '<S33>/Constant4'
                                        */
  real32_T Constant_Value_hz;          /* Computed Parameter: Constant_Value_hz
                                        * Referenced by: '<S82>/Constant'
                                        */
  real32_T Constant12_Value_d;         /* Computed Parameter: Constant12_Value_d
                                        * Referenced by: '<S36>/Constant12'
                                        */
  real32_T Constant13_Value;           /* Computed Parameter: Constant13_Value
                                        * Referenced by: '<S36>/Constant13'
                                        */
  real32_T Constant14_Value;           /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<S36>/Constant14'
                                        */
  real32_T Constant15_Value;           /* Computed Parameter: Constant15_Value
                                        * Referenced by: '<S36>/Constant15'
                                        */
  real32_T Constant16_Value;           /* Computed Parameter: Constant16_Value
                                        * Referenced by: '<S36>/Constant16'
                                        */
  real32_T Constant17_Value;           /* Computed Parameter: Constant17_Value
                                        * Referenced by: '<S36>/Constant17'
                                        */
  real32_T Constant18_Value;           /* Computed Parameter: Constant18_Value
                                        * Referenced by: '<S36>/Constant18'
                                        */
  real32_T Gain2_Gain_f;               /* Computed Parameter: Gain2_Gain_f
                                        * Referenced by: '<S36>/Gain2'
                                        */
  real32_T Constant2_Value_bz;         /* Computed Parameter: Constant2_Value_bz
                                        * Referenced by: '<S36>/Constant2'
                                        */
  real32_T Constant3_Value_i;          /* Computed Parameter: Constant3_Value_i
                                        * Referenced by: '<S36>/Constant3'
                                        */
  real32_T Constant8_Value_h;          /* Computed Parameter: Constant8_Value_h
                                        * Referenced by: '<S36>/Constant8'
                                        */
  real32_T Constant9_Value_k;          /* Computed Parameter: Constant9_Value_k
                                        * Referenced by: '<S36>/Constant9'
                                        */
  real32_T Constant4_Value_g;          /* Computed Parameter: Constant4_Value_g
                                        * Referenced by: '<S36>/Constant4'
                                        */
  real32_T Constant5_Value_c;          /* Computed Parameter: Constant5_Value_c
                                        * Referenced by: '<S36>/Constant5'
                                        */
  real32_T Constant6_Value_j;          /* Computed Parameter: Constant6_Value_j
                                        * Referenced by: '<S36>/Constant6'
                                        */
  real32_T Constant7_Value_p;          /* Computed Parameter: Constant7_Value_p
                                        * Referenced by: '<S36>/Constant7'
                                        */
  real32_T Constant10_Value_ic;        /* Computed Parameter: Constant10_Value_ic
                                        * Referenced by: '<S36>/Constant10'
                                        */
  real32_T Constant11_Value;           /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S36>/Constant11'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real32_T Switch_Threshold_f;         /* Computed Parameter: Switch_Threshold_f
                                        * Referenced by: '<S36>/Switch'
                                        */
  real32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S36>/Gain'
                                        */
  real32_T Constant19_Value;           /* Computed Parameter: Constant19_Value
                                        * Referenced by: '<S36>/Constant19'
                                        */
  real32_T Constant3_Value_e;          /* Computed Parameter: Constant3_Value_e
                                        * Referenced by: '<S37>/Constant3'
                                        */
  real32_T Constant9_Value_e;          /* Computed Parameter: Constant9_Value_e
                                        * Referenced by: '<S37>/Constant9'
                                        */
  real32_T Constant_Value_c1;          /* Computed Parameter: Constant_Value_c1
                                        * Referenced by: '<S28>/Constant'
                                        */
  real32_T Constant3_Value_p;          /* Computed Parameter: Constant3_Value_p
                                        * Referenced by: '<S28>/Constant3'
                                        */
  real32_T Constant4_Value_go;         /* Computed Parameter: Constant4_Value_go
                                        * Referenced by: '<S28>/Constant4'
                                        */
  real32_T Constant5_Value_g;          /* Computed Parameter: Constant5_Value_g
                                        * Referenced by: '<S28>/Constant5'
                                        */
  real32_T Constant6_Value_p;          /* Computed Parameter: Constant6_Value_p
                                        * Referenced by: '<S28>/Constant6'
                                        */
  real32_T Constant7_Value_p5;         /* Computed Parameter: Constant7_Value_p5
                                        * Referenced by: '<S28>/Constant7'
                                        */
  real32_T Constant8_Value_g;          /* Computed Parameter: Constant8_Value_g
                                        * Referenced by: '<S28>/Constant8'
                                        */
  real32_T Constant10_Value_iq;        /* Computed Parameter: Constant10_Value_iq
                                        * Referenced by: '<S28>/Constant10'
                                        */
  real32_T uDLookupTable_tableData_j[2];/* Computed Parameter: uDLookupTable_tableData_j
                                         * Referenced by: '<S117>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_c[2];/* Computed Parameter: uDLookupTable_bp01Data_c
                                        * Referenced by: '<S117>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S117>/Constant'
                                        */
  real32_T Switch_Threshold_i;         /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S117>/Switch'
                                        */
  real32_T uDLookupTable1_tableData[2];/* Computed Parameter: uDLookupTable1_tableData
                                        * Referenced by: '<S117>/1-D Lookup Table1'
                                        */
  real32_T uDLookupTable1_bp01Data[2]; /* Computed Parameter: uDLookupTable1_bp01Data
                                        * Referenced by: '<S117>/1-D Lookup Table1'
                                        */
  real32_T Constant_Value_ga;          /* Computed Parameter: Constant_Value_ga
                                        * Referenced by: '<S118>/Constant'
                                        */
  real32_T Constant1_Value_c;          /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S116>/Constant1'
                                        */
  real32_T Constant_Value_no;          /* Computed Parameter: Constant_Value_no
                                        * Referenced by: '<S119>/Constant'
                                        */
  real32_T Merge_InitialOutput;        /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S116>/Merge'
                                        */
  real32_T Constant_Value_ae;          /* Computed Parameter: Constant_Value_ae
                                        * Referenced by: '<S115>/Constant'
                                        */
  real32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S113>/Constant'
                                        */
  real32_T Constant_Value_hd;          /* Computed Parameter: Constant_Value_hd
                                        * Referenced by: '<S120>/Constant'
                                        */
  real32_T uDLookupTable_tableData_n[3];/* Computed Parameter: uDLookupTable_tableData_n
                                         * Referenced by: '<S125>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_m[3];/* Computed Parameter: uDLookupTable_bp01Data_m
                                        * Referenced by: '<S125>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_ed;          /* Computed Parameter: Constant_Value_ed
                                        * Referenced by: '<S125>/Constant'
                                        */
  real32_T Constant1_Value_a0;         /* Computed Parameter: Constant1_Value_a0
                                        * Referenced by: '<S125>/Constant1'
                                        */
  real32_T uDLookupTable1_tableData_d[2];/* Computed Parameter: uDLookupTable1_tableData_d
                                          * Referenced by: '<S125>/1-D Lookup Table1'
                                          */
  real32_T uDLookupTable1_bp01Data_b[2];/* Computed Parameter: uDLookupTable1_bp01Data_b
                                         * Referenced by: '<S125>/1-D Lookup Table1'
                                         */
  real32_T Constant_Value_lp;          /* Computed Parameter: Constant_Value_lp
                                        * Referenced by: '<S128>/Constant'
                                        */
  real32_T uDLookupTable_tableData_jd[2];/* Computed Parameter: uDLookupTable_tableData_jd
                                          * Referenced by: '<S129>/1-D Lookup Table'
                                          */
  real32_T uDLookupTable_bp01Data_nr[2];/* Computed Parameter: uDLookupTable_bp01Data_nr
                                         * Referenced by: '<S129>/1-D Lookup Table'
                                         */
  real32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S129>/Constant'
                                        */
  real32_T Constant_Value_ar;          /* Computed Parameter: Constant_Value_ar
                                        * Referenced by: '<S130>/Constant'
                                        */
  real32_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S130>/Constant1'
                                        */
  real32_T Constant2_Value_fh;         /* Computed Parameter: Constant2_Value_fh
                                        * Referenced by: '<S130>/Constant2'
                                        */
  real32_T Constant3_Value_m;          /* Computed Parameter: Constant3_Value_m
                                        * Referenced by: '<S130>/Constant3'
                                        */
  real32_T Constant_Value_gd;          /* Computed Parameter: Constant_Value_gd
                                        * Referenced by: '<S109>/Constant'
                                        */
  real32_T Constant_Value_pb;          /* Computed Parameter: Constant_Value_pb
                                        * Referenced by: '<S111>/Constant'
                                        */
  real32_T Constant1_Value_lw;         /* Computed Parameter: Constant1_Value_lw
                                        * Referenced by: '<S108>/Constant1'
                                        */
  real32_T Constant3_Value_c;          /* Computed Parameter: Constant3_Value_c
                                        * Referenced by: '<S110>/Constant3'
                                        */
  real32_T Constant1_Value_bc;         /* Computed Parameter: Constant1_Value_bc
                                        * Referenced by: '<S110>/Constant1'
                                        */
  real32_T Constant2_Value_jk;         /* Computed Parameter: Constant2_Value_jk
                                        * Referenced by: '<S110>/Constant2'
                                        */
  real32_T Constant_Value_b0;          /* Computed Parameter: Constant_Value_b0
                                        * Referenced by: '<S110>/Constant'
                                        */
  real32_T Constant5_Value_e;          /* Computed Parameter: Constant5_Value_e
                                        * Referenced by: '<S133>/Constant5'
                                        */
  real32_T Constant_Value_b4;          /* Computed Parameter: Constant_Value_b4
                                        * Referenced by: '<S133>/Constant'
                                        */
  real32_T Constant1_Value_fqq;        /* Computed Parameter: Constant1_Value_fqq
                                        * Referenced by: '<S133>/Constant1'
                                        */
  real32_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S133>/Constant2'
                                        */
  real32_T Constant3_Value_n;          /* Computed Parameter: Constant3_Value_n
                                        * Referenced by: '<S133>/Constant3'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S133>/Constant4'
                                        */
  real32_T Constant7_Value_c;          /* Computed Parameter: Constant7_Value_c
                                        * Referenced by: '<S133>/Constant7'
                                        */
  real32_T Constant8_Value_p;          /* Computed Parameter: Constant8_Value_p
                                        * Referenced by: '<S133>/Constant8'
                                        */
  real32_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S106>/Delay'
                                        */
  real32_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                        * Referenced by: '<S106>/Merge2'
                                        */
  real32_T Merge4_InitialOutput;       /* Computed Parameter: Merge4_InitialOutput
                                        * Referenced by: '<S106>/Merge4'
                                        */
  real32_T Merge5_InitialOutput;       /* Computed Parameter: Merge5_InitialOutput
                                        * Referenced by: '<S106>/Merge5'
                                        */
  real32_T Merge_InitialOutput_b;      /* Computed Parameter: Merge_InitialOutput_b
                                        * Referenced by: '<S106>/Merge'
                                        */
  real32_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                        * Referenced by: '<S106>/Merge1'
                                        */
  real32_T Merge3_InitialOutput;       /* Computed Parameter: Merge3_InitialOutput
                                        * Referenced by: '<S106>/Merge3'
                                        */
  real32_T Merge7_InitialOutput;       /* Computed Parameter: Merge7_InitialOutput
                                        * Referenced by: '<S106>/Merge7'
                                        */
  real32_T Merge8_InitialOutput;       /* Computed Parameter: Merge8_InitialOutput
                                        * Referenced by: '<S106>/Merge8'
                                        */
  real32_T Constant_Value_ji;          /* Computed Parameter: Constant_Value_ji
                                        * Referenced by: '<S134>/Constant'
                                        */
  real32_T Constant1_Value_o;          /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S134>/Constant1'
                                        */
  real32_T Constant_Value_on;          /* Computed Parameter: Constant_Value_on
                                        * Referenced by: '<S135>/Constant'
                                        */
  real32_T Constant1_Value_jv;         /* Computed Parameter: Constant1_Value_jv
                                        * Referenced by: '<S135>/Constant1'
                                        */
  real32_T Constant1_Value_n;          /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S163>/Constant1'
                                        */
  real32_T Constant3_Value_nb;         /* Computed Parameter: Constant3_Value_nb
                                        * Referenced by: '<S163>/Constant3'
                                        */
  real32_T Gain_Gain_h;                /* Computed Parameter: Gain_Gain_h
                                        * Referenced by: '<S163>/Gain'
                                        */
  real32_T Constant5_Value_n;          /* Computed Parameter: Constant5_Value_n
                                        * Referenced by: '<S163>/Constant5'
                                        */
  real32_T Gain1_Gain_g;               /* Computed Parameter: Gain1_Gain_g
                                        * Referenced by: '<S163>/Gain1'
                                        */
  real32_T Constant7_Value_co;         /* Computed Parameter: Constant7_Value_co
                                        * Referenced by: '<S163>/Constant7'
                                        */
  real32_T Constant8_Value_j;          /* Computed Parameter: Constant8_Value_j
                                        * Referenced by: '<S163>/Constant8'
                                        */
  real32_T Constant9_Value_ge;         /* Computed Parameter: Constant9_Value_ge
                                        * Referenced by: '<S163>/Constant9'
                                        */
  real32_T Constant10_Value_h;         /* Computed Parameter: Constant10_Value_h
                                        * Referenced by: '<S163>/Constant10'
                                        */
  real32_T Constant1_Value_cf;         /* Computed Parameter: Constant1_Value_cf
                                        * Referenced by: '<S164>/Constant1'
                                        */
  real32_T Constant2_Value_a2;         /* Computed Parameter: Constant2_Value_a2
                                        * Referenced by: '<S164>/Constant2'
                                        */
  real32_T Constant3_Value_f;          /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S164>/Constant3'
                                        */
  real32_T Constant4_Value_pj;         /* Computed Parameter: Constant4_Value_pj
                                        * Referenced by: '<S164>/Constant4'
                                        */
  real32_T Constant5_Value_e1;         /* Computed Parameter: Constant5_Value_e1
                                        * Referenced by: '<S164>/Constant5'
                                        */
  real32_T Constant6_Value_i;          /* Computed Parameter: Constant6_Value_i
                                        * Referenced by: '<S164>/Constant6'
                                        */
  real32_T Constant7_Value_e;          /* Computed Parameter: Constant7_Value_e
                                        * Referenced by: '<S164>/Constant7'
                                        */
  real32_T Constant8_Value_b;          /* Computed Parameter: Constant8_Value_b
                                        * Referenced by: '<S164>/Constant8'
                                        */
  real32_T Constant9_Value_h;          /* Computed Parameter: Constant9_Value_h
                                        * Referenced by: '<S164>/Constant9'
                                        */
  real32_T Constant10_Value_hj;        /* Computed Parameter: Constant10_Value_hj
                                        * Referenced by: '<S164>/Constant10'
                                        */
  real32_T Constant_Value_mc;          /* Computed Parameter: Constant_Value_mc
                                        * Referenced by: '<S166>/Constant'
                                        */
  real32_T Constant1_Value_n2;         /* Computed Parameter: Constant1_Value_n2
                                        * Referenced by: '<S166>/Constant1'
                                        */
  real32_T Constant1_Value_as;         /* Computed Parameter: Constant1_Value_as
                                        * Referenced by: '<S167>/Constant1'
                                        */
  real32_T Constant_Value_d0;          /* Computed Parameter: Constant_Value_d0
                                        * Referenced by: '<S167>/Constant'
                                        */
  real32_T Constant_Value_oc;          /* Computed Parameter: Constant_Value_oc
                                        * Referenced by: '<S162>/Constant'
                                        */
  real32_T Constant5_Value_l;          /* Computed Parameter: Constant5_Value_l
                                        * Referenced by: '<S162>/Constant5'
                                        */
  real32_T Constant6_Value_a;          /* Computed Parameter: Constant6_Value_a
                                        * Referenced by: '<S162>/Constant6'
                                        */
  real32_T Constant7_Value_f;          /* Computed Parameter: Constant7_Value_f
                                        * Referenced by: '<S162>/Constant7'
                                        */
  real32_T Constant_Value_dd;          /* Computed Parameter: Constant_Value_dd
                                        * Referenced by: '<S169>/Constant'
                                        */
  real32_T Merge_InitialOutput_i;      /* Computed Parameter: Merge_InitialOutput_i
                                        * Referenced by: '<S162>/Merge'
                                        */
  real32_T Merge1_InitialOutput_h;     /* Computed Parameter: Merge1_InitialOutput_h
                                        * Referenced by: '<S162>/Merge1'
                                        */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S162>/Switch2'
                                        */
  real32_T Constant_Value_ag;          /* Computed Parameter: Constant_Value_ag
                                        * Referenced by: '<S168>/Constant'
                                        */
  real32_T Constant_Value_js;          /* Computed Parameter: Constant_Value_js
                                        * Referenced by: '<S170>/Constant'
                                        */
  real32_T Constant_Value_o3;          /* Computed Parameter: Constant_Value_o3
                                        * Referenced by: '<S171>/Constant'
                                        */
  real32_T Constant_Value_le;          /* Computed Parameter: Constant_Value_le
                                        * Referenced by: '<S161>/Constant'
                                        */
  real32_T Constant1_Value_jg;         /* Computed Parameter: Constant1_Value_jg
                                        * Referenced by: '<S173>/Constant1'
                                        */
  real32_T Constant_Value_m4;          /* Computed Parameter: Constant_Value_m4
                                        * Referenced by: '<S23>/Constant'
                                        */
  real32_T ObjSource_Value;            /* Computed Parameter: ObjSource_Value
                                        * Referenced by: '<Root>/ObjSource'
                                        */
  real32_T Switch_Threshold_l;         /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<Root>/Switch'
                                        */
  real32_T Constant_Value_cx;          /* Computed Parameter: Constant_Value_cx
                                        * Referenced by: '<S21>/Constant'
                                        */
  real32_T Gain_Gain_o;                /* Computed Parameter: Gain_Gain_o
                                        * Referenced by: '<S21>/Gain'
                                        */
  real32_T Constant_Value_eo;          /* Computed Parameter: Constant_Value_eo
                                        * Referenced by: '<S5>/Constant'
                                        */
  real32_T Memory_InitialCondition_o;  /* Computed Parameter: Memory_InitialCondition_o
                                        * Referenced by: '<S5>/Memory'
                                        */
  real32_T Constant3_Value_b;          /* Computed Parameter: Constant3_Value_b
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real32_T uDLookupTable_tableData_b[6];/* Computed Parameter: uDLookupTable_tableData_b
                                         * Referenced by: '<S144>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_d[6];/* Computed Parameter: uDLookupTable_bp01Data_d
                                        * Referenced by: '<S144>/1-D Lookup Table'
                                        */
  real32_T Constant1_Value_e1;         /* Computed Parameter: Constant1_Value_e1
                                        * Referenced by: '<S144>/Constant1'
                                        */
  real32_T Constant3_Value_k;          /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S144>/Constant3'
                                        */
  real32_T Memory_InitialCondition_g;  /* Computed Parameter: Memory_InitialCondition_g
                                        * Referenced by: '<S144>/Memory'
                                        */
  real32_T Constant2_Value_fp;         /* Computed Parameter: Constant2_Value_fp
                                        * Referenced by: '<S6>/Constant2'
                                        */
  real32_T Constant4_Value_n;          /* Computed Parameter: Constant4_Value_n
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real32_T Constant5_Value_b;          /* Computed Parameter: Constant5_Value_b
                                        * Referenced by: '<S6>/Constant5'
                                        */
  real32_T Memory_2_InitialCondition;  /* Computed Parameter: Memory_2_InitialCondition
                                        * Referenced by: '<S13>/Memory'
                                        */
  real32_T Memory_1_InitialCondition;  /* Computed Parameter: Memory_1_InitialCondition
                                        * Referenced by: '<S13>/Memory'
                                        */
  real32_T Traj_C0_Value;              /* Computed Parameter: Traj_C0_Value
                                        * Referenced by: '<S141>/Traj_C0'
                                        */
  real32_T Traj_C1_Value;              /* Computed Parameter: Traj_C1_Value
                                        * Referenced by: '<S141>/Traj_C1'
                                        */
  real32_T Traj_C2_Value;              /* Computed Parameter: Traj_C2_Value
                                        * Referenced by: '<S141>/Traj_C2'
                                        */
  real32_T Traj_C3_Value;              /* Computed Parameter: Traj_C3_Value
                                        * Referenced by: '<S141>/Traj_C3'
                                        */
  real32_T Constant_Value_nk;          /* Computed Parameter: Constant_Value_nk
                                        * Referenced by: '<S143>/Constant'
                                        */
  real32_T Memory_InitialCondition_i;  /* Computed Parameter: Memory_InitialCondition_i
                                        * Referenced by: '<S143>/Memory'
                                        */
  real32_T Memory1_InitialCondition_l; /* Computed Parameter: Memory1_InitialCondition_l
                                        * Referenced by: '<S143>/Memory1'
                                        */
  real32_T dy_Value;                   /* Computed Parameter: dy_Value
                                        * Referenced by: '<S141>/dy'
                                        */
  real32_T Traj_C0_Value_a;            /* Computed Parameter: Traj_C0_Value_a
                                        * Referenced by: '<S142>/Traj_C0'
                                        */
  real32_T Traj_C1_Value_o;            /* Computed Parameter: Traj_C1_Value_o
                                        * Referenced by: '<S142>/Traj_C1'
                                        */
  real32_T Traj_C2_Value_g;            /* Computed Parameter: Traj_C2_Value_g
                                        * Referenced by: '<S142>/Traj_C2'
                                        */
  real32_T Traj_C3_Value_j;            /* Computed Parameter: Traj_C3_Value_j
                                        * Referenced by: '<S142>/Traj_C3'
                                        */
  real32_T dx_Value;                   /* Computed Parameter: dx_Value
                                        * Referenced by: '<S142>/dx'
                                        */
  real32_T dy_Value_i;                 /* Computed Parameter: dy_Value_i
                                        * Referenced by: '<S142>/dy'
                                        */
  real32_T Switch_Threshold_b;         /* Computed Parameter: Switch_Threshold_b
                                        * Referenced by: '<S5>/Switch'
                                        */
  real32_T vSetAVP_Value;              /* Computed Parameter: vSetAVP_Value
                                        * Referenced by: '<S22>/vSetAVP'
                                        */
  real32_T Constant5_Value_h;          /* Computed Parameter: Constant5_Value_h
                                        * Referenced by: '<S22>/Constant5'
                                        */
  real32_T Gain_Gain_kl;               /* Computed Parameter: Gain_Gain_kl
                                        * Referenced by: '<S22>/Gain'
                                        */
  real32_T Constant2_Value_ah;         /* Computed Parameter: Constant2_Value_ah
                                        * Referenced by: '<S22>/Constant2'
                                        */
  real32_T Switch_Threshold_n;         /* Computed Parameter: Switch_Threshold_n
                                        * Referenced by: '<S22>/Switch'
                                        */
  real32_T Constant_Value_lt;          /* Computed Parameter: Constant_Value_lt
                                        * Referenced by: '<S104>/Constant'
                                        */
  real32_T Memory_InitialCondition_he; /* Computed Parameter: Memory_InitialCondition_he
                                        * Referenced by: '<S22>/Memory'
                                        */
  real32_T Constant_Value_m3;          /* Computed Parameter: Constant_Value_m3
                                        * Referenced by: '<S22>/Constant'
                                        */
  real32_T Memory_InitialCondition_a;  /* Computed Parameter: Memory_InitialCondition_a
                                        * Referenced by: '<S1>/Memory'
                                        */
  real32_T Constant_Value_os;          /* Computed Parameter: Constant_Value_os
                                        * Referenced by: '<S137>/Constant'
                                        */
  real32_T Memory1_InitialCondition_p; /* Computed Parameter: Memory1_InitialCondition_p
                                        * Referenced by: '<S4>/Memory1'
                                        */
  real32_T Merge_InitialOutput_d;      /* Computed Parameter: Merge_InitialOutput_d
                                        * Referenced by: '<S4>/Merge'
                                        */
  real32_T uDLookupTable_tableData_p[3];/* Computed Parameter: uDLookupTable_tableData_p
                                         * Referenced by: '<S4>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_h[3];/* Computed Parameter: uDLookupTable_bp01Data_h
                                        * Referenced by: '<S4>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_tableData_f[4];/* Computed Parameter: uDLookupTable_tableData_f
                                         * Referenced by: '<S19>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_d3[4];/* Computed Parameter: uDLookupTable_bp01Data_d3
                                         * Referenced by: '<S19>/1-D Lookup Table'
                                         */
  real32_T Constant1_Value_ea;         /* Computed Parameter: Constant1_Value_ea
                                        * Referenced by: '<S19>/Constant1'
                                        */
  real32_T Constant1_Value_iu;         /* Computed Parameter: Constant1_Value_iu
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real32_T Constant4_Value_i;          /* Computed Parameter: Constant4_Value_i
                                        * Referenced by: '<S18>/Constant4'
                                        */
  real32_T Constant3_Value_is;         /* Computed Parameter: Constant3_Value_is
                                        * Referenced by: '<S18>/Constant3'
                                        */
  real32_T Gain_Gain_mz;               /* Computed Parameter: Gain_Gain_mz
                                        * Referenced by: '<S18>/Gain'
                                        */
  real32_T Constant2_Value_cvv;        /* Computed Parameter: Constant2_Value_cvv
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real32_T Constant_Value_dn;          /* Computed Parameter: Constant_Value_dn
                                        * Referenced by: '<S24>/Constant'
                                        */
  real32_T Constant3_Value_j;          /* Computed Parameter: Constant3_Value_j
                                        * Referenced by: '<S22>/Constant3'
                                        */
  real32_T Gain_Gain_ki;               /* Computed Parameter: Gain_Gain_ki
                                        * Referenced by: '<Root>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real32_T Constant_Value_he;          /* Computed Parameter: Constant_Value_he
                                        * Referenced by: '<S12>/Constant'
                                        */
  real32_T Constant8_Value_d;          /* Computed Parameter: Constant8_Value_d
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real32_T Constant6_Value_d;          /* Computed Parameter: Constant6_Value_d
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real32_T Memory_InitialCondition_m;  /* Computed Parameter: Memory_InitialCondition_m
                                        * Referenced by: '<S15>/Memory'
                                        */
  real32_T Constant_Value_gu;          /* Computed Parameter: Constant_Value_gu
                                        * Referenced by: '<S15>/Constant'
                                        */
  real32_T Constant1_Value_ic;         /* Computed Parameter: Constant1_Value_ic
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real32_T Memory1_InitialCondition_o; /* Computed Parameter: Memory1_InitialCondition_o
                                        * Referenced by: '<S15>/Memory1'
                                        */
  real32_T Constant2_Value_jp;         /* Computed Parameter: Constant2_Value_jp
                                        * Referenced by: '<S15>/Constant2'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S106>/Delay1'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S106>/Delay'
                                        */
  uint16_T Constant4_Value_ig;         /* Computed Parameter: Constant4_Value_ig
                                        * Referenced by: '<Root>/Constant4'
                                        */
  boolean_T DecToStopArray_Y0;         /* Computed Parameter: DecToStopArray_Y0
                                        * Referenced by: '<S27>/DecToStopArray'
                                        */
  boolean_T Zero2_Value[6];            /* Computed Parameter: Zero2_Value
                                        * Referenced by: '<S27>/Zero2'
                                        */
  boolean_T Constant_Value_fj;         /* Computed Parameter: Constant_Value_fj
                                        * Referenced by: '<S29>/Constant'
                                        */
  boolean_T Constant1_Value_nw;        /* Computed Parameter: Constant1_Value_nw
                                        * Referenced by: '<S37>/Constant1'
                                        */
  boolean_T Constant5_Value_no;        /* Computed Parameter: Constant5_Value_no
                                        * Referenced by: '<S37>/Constant5'
                                        */
  boolean_T Constant6_Value_m;         /* Computed Parameter: Constant6_Value_m
                                        * Referenced by: '<S37>/Constant6'
                                        */
  boolean_T Constant1_Value_m;         /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S29>/Constant1'
                                        */
  boolean_T Constant1_Value_iy;        /* Computed Parameter: Constant1_Value_iy
                                        * Referenced by: '<S28>/Constant1'
                                        */
  boolean_T Constant2_Value_d;         /* Computed Parameter: Constant2_Value_d
                                        * Referenced by: '<S28>/Constant2'
                                        */
  boolean_T Constant9_Value_p;         /* Computed Parameter: Constant9_Value_p
                                        * Referenced by: '<S28>/Constant9'
                                        */
  boolean_T Constant_Value_ao;         /* Computed Parameter: Constant_Value_ao
                                        * Referenced by: '<S112>/Constant'
                                        */
  boolean_T Constant_Value_n5;         /* Computed Parameter: Constant_Value_n5
                                        * Referenced by: '<S132>/Constant'
                                        */
  boolean_T Constant6_Value_l;         /* Computed Parameter: Constant6_Value_l
                                        * Referenced by: '<S133>/Constant6'
                                        */
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S3>/Out1'
                                        */
  boolean_T Zero_Value[40];            /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S3>/Zero'
                                        */
  boolean_T Delay1_InitialCondition;   /* Computed Parameter: Delay1_InitialCondition
                                        * Referenced by: '<S106>/Delay1'
                                        */
  boolean_T Constant1_Value_hx;        /* Computed Parameter: Constant1_Value_hx
                                        * Referenced by: '<S106>/Constant1'
                                        */
  boolean_T Merge6_InitialOutput;      /* Computed Parameter: Merge6_InitialOutput
                                        * Referenced by: '<S106>/Merge6'
                                        */
  boolean_T Constant_Value_ek;         /* Computed Parameter: Constant_Value_ek
                                        * Referenced by: '<S163>/Constant'
                                        */
  boolean_T Constant_Value_j0;         /* Computed Parameter: Constant_Value_j0
                                        * Referenced by: '<S164>/Constant'
                                        */
  boolean_T Constant_Value_aen;        /* Computed Parameter: Constant_Value_aen
                                        * Referenced by: '<S173>/Constant'
                                        */
  boolean_T Memory_InitialCondition_f; /* Computed Parameter: Memory_InitialCondition_f
                                        * Referenced by: '<S159>/Memory'
                                        */
  boolean_T Memory2_InitialCondition;  /* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<S12>/Memory2'
                                        */
  boolean_T Constant1_Value_mj;        /* Computed Parameter: Constant1_Value_mj
                                        * Referenced by: '<S12>/Constant1'
                                        */
  boolean_T Memory_InitialCondition_o3;/* Computed Parameter: Memory_InitialCondition_o3
                                        * Referenced by: '<S12>/Memory'
                                        */
  boolean_T Memory1_InitialCondition_f;/* Computed Parameter: Memory1_InitialCondition_f
                                        * Referenced by: '<S12>/Memory1'
                                        */
  boolean_T Constant_Value_kx;         /* Computed Parameter: Constant_Value_kx
                                        * Referenced by: '<S11>/Constant'
                                        */
  boolean_T Memory_InitialCondition_a3;/* Computed Parameter: Memory_InitialCondition_a3
                                        * Referenced by: '<S4>/Memory'
                                        */
  boolean_T Constant_Value_dc;         /* Computed Parameter: Constant_Value_dc
                                        * Referenced by: '<Root>/Constant'
                                        */
  int8_T Constant_Value_ok;            /* Computed Parameter: Constant_Value_ok
                                        * Referenced by: '<S1>/Constant'
                                        */
  int8_T Constant1_Value_l1;           /* Computed Parameter: Constant1_Value_l1
                                        * Referenced by: '<S1>/Constant1'
                                        */
  int8_T Constant2_Value_m;            /* Computed Parameter: Constant2_Value_m
                                        * Referenced by: '<S1>/Constant2'
                                        */
  int8_T Constant_Value_dv;            /* Computed Parameter: Constant_Value_dv
                                        * Referenced by: '<S18>/Constant'
                                        */
  uint8_T Gain3_Gain_a;                /* Computed Parameter: Gain3_Gain_a
                                        * Referenced by: '<S12>/Gain3'
                                        */
  uint8_T Gain2_Gain_fo;               /* Computed Parameter: Gain2_Gain_fo
                                        * Referenced by: '<S12>/Gain2'
                                        */
  uint8_T Gain1_Gain_n;                /* Computed Parameter: Gain1_Gain_n
                                        * Referenced by: '<S12>/Gain1'
                                        */
  uint8_T Gain_Gain_d;                 /* Computed Parameter: Gain_Gain_d
                                        * Referenced by: '<S12>/Gain'
                                        */
  uint8_T Memory3_InitialCondition;    /* Computed Parameter: Memory3_InitialCondition
                                        * Referenced by: '<S5>/Memory3'
                                        */
  uint8_T AVP_State_Value;             /* Computed Parameter: AVP_State_Value
                                        * Referenced by: '<S142>/AVP_State'
                                        */
  uint8_T Constant_Value_jc;           /* Computed Parameter: Constant_Value_jc
                                        * Referenced by: '<S160>/Constant'
                                        */
  uint8_T Constant1_Value_bv;          /* Computed Parameter: Constant1_Value_bv
                                        * Referenced by: '<S17>/Constant1'
                                        */
  uint8_T Constant7_Value_o;           /* Computed Parameter: Constant7_Value_o
                                        * Referenced by: '<Root>/Constant7'
                                        */
  P_IfActionSubsystem_AccTarS_g_T IfActionSubsystem2_a;/* '<S15>/If Action Subsystem2' */
  P_IfActionSubsystem_AccTarS_g_T IfActionSubsystem_av;/* '<S15>/If Action Subsystem' */
  P_CoreSubsys_AccTarSel_g_T CoreSubsys_p;/* '<S8>/For Each Subsystem' */
  P_CoreSubsys_AccTarSel_T CoreSubsys; /* '<S7>/For Each Subsystem' */
  P_IfActionSubsystem2_AccTarSe_T AVP_Deactivate;/* '<S5>/AVP_Deactivate' */
  P_IfActionSubsystem2_AccTarSe_T AVP_Activate;/* '<S5>/AVP_Activate' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem3;/* '<S21>/If Action Subsystem3' */
  P_IfActionSubsystem_AccTarS_k_T IfActionSubsystem2;/* '<S21>/If Action Subsystem2' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem1;/* '<S21>/If Action Subsystem1' */
  P_IfActionSubsystem_AccTarS_k_T IfActionSubsystem;/* '<S21>/If Action Subsystem' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem2_f;/* '<S36>/If Action Subsystem2' */
  P_Approaching_AccTarSel_T Leaving;   /* '<S44>/Leaving' */
  P_Approaching_AccTarSel_T Approaching;/* '<S44>/Approaching' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem3_i;/* '<S30>/If Action Subsystem3' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem_mf;/* '<S30>/If Action Subsystem' */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_AccTarSel_T {
  const char_T **errorStatus;
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_AccTarSel_T rtm;
} MdlrefDW_AccTarSel_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real_T rtP_P_vyCutInThres;      /* Variable: P_vyCutInThres
                                        * Referenced by: '<S116>/P_vyCutInThres'
                                        */
extern real32_T rtP_P_aFOCApproachIntpAcitve;/* Variable: P_aFOCApproachIntpAcitve
                                              * Referenced by:
                                              *   '<S33>/P_aFOCApproachIntpAcitve'
                                              *   '<S83>/P_aFOCApproachIntpAcitve'
                                              */
extern real32_T rtP_P_aFOCApproachIntpEnsure;/* Variable: P_aFOCApproachIntpEnsure
                                              * Referenced by:
                                              *   '<S33>/P_aFOCApproachIntpEnsure'
                                              *   '<S83>/P_aFOCApproachIntpEnsure'
                                              */
extern real32_T rtP_P_dAimMin;         /* Variable: P_dAimMin
                                        * Referenced by: '<S32>/P_dAimMin'
                                        */
extern real32_T rtP_P_dAimMinAVP;      /* Variable: P_dAimMinAVP
                                        * Referenced by: '<S32>/P_dAimMinAVP'
                                        */
extern real32_T rtP_P_dObjDrvOffMax;   /* Variable: P_dObjDrvOffMax
                                        * Referenced by: '<S11>/P_dObjDrvOffMax'
                                        */
extern real32_T rtP_P_dObjDrvOffMin;   /* Variable: P_dObjDrvOffMin
                                        * Referenced by: '<S11>/P_dObjDrvOffMin'
                                        */
extern real32_T rtP_P_dObjLowHystDecToStop;/* Variable: P_dObjLowHystDecToStop
                                            * Referenced by: '<S37>/P_dObjLowHystDecToStop'
                                            */
extern real32_T rtP_P_dObjLowHystDecToStopAVP;/* Variable: P_dObjLowHystDecToStopAVP
                                               * Referenced by: '<S37>/P_dObjLowHystDecToStopAVP'
                                               */
extern real32_T rtP_P_dObjUpperHystDecToStop;/* Variable: P_dObjUpperHystDecToStop
                                              * Referenced by: '<S37>/P_dObjUpperHystDecToStop'
                                              */
extern real32_T rtP_P_dvarYMax4PO;     /* Variable: P_dvarYMax4PO
                                        * Referenced by: '<S128>/P_dvarYMax4PO'
                                        */
extern real32_T rtP_P_dyCutInThres;    /* Variable: P_dyCutInThres
                                        * Referenced by: '<S116>/P_dyCutInThres'
                                        */
extern real32_T rtP_P_facFOCNegDiff;   /* Variable: P_facFOCNegDiff
                                        * Referenced by:
                                        *   '<S90>/P_facFOCNegDiff'
                                        *   '<S91>/P_facFOCNegDiff'
                                        *   '<S92>/P_facFOCNegDiff'
                                        */
extern real32_T rtP_P_facFOCPosDiff;   /* Variable: P_facFOCPosDiff
                                        * Referenced by:
                                        *   '<S90>/P_facFOCPosDiff'
                                        *   '<S93>/P_facFOCPosDiff'
                                        *   '<S94>/P_facFOCPosDiff'
                                        */
extern real32_T rtP_P_kapHystThres;    /* Variable: P_kapHystThres
                                        * Referenced by: '<S144>/P_kapHystThres'
                                        */
extern real32_T rtP_P_plausMin4PO;     /* Variable: P_plausMin4PO
                                        * Referenced by: '<S131>/P_plausMin4PO'
                                        */
extern real32_T rtP_P_probExistMin4PO; /* Variable: P_probExistMin4PO
                                        * Referenced by: '<S128>/P_probExistMin4PO'
                                        */
extern real32_T rtP_P_tAxTrackNegLower;/* Variable: P_tAxTrackNegLower
                                        * Referenced by: '<S162>/Constant2'
                                        */
extern real32_T rtP_P_tAxTrackNegUpper;/* Variable: P_tAxTrackNegUpper
                                        * Referenced by: '<S162>/Constant3'
                                        */
extern real32_T rtP_P_tAxTrackPosLower;/* Variable: P_tAxTrackPosLower
                                        * Referenced by: '<S162>/Constant10'
                                        */
extern real32_T rtP_P_tAxTrackPosUpper;/* Variable: P_tAxTrackPosUpper
                                        * Referenced by: '<S162>/Constant11'
                                        */
extern real32_T rtP_P_tCSC;            /* Variable: P_tCSC
                                        * Referenced by: '<S19>/P_tSSCPos'
                                        */
extern real32_T rtP_P_tCurvFilt;       /* Variable: P_tCurvFilt
                                        * Referenced by: '<S144>/P_tCurvFilt'
                                        */
extern real32_T rtP_P_tCutInFilt;      /* Variable: P_tCutInFilt
                                        * Referenced by: '<S116>/P_tCutInFilt'
                                        */
extern real32_T rtP_P_tFOCStatAccelFast;/* Variable: P_tFOCStatAccelFast
                                         * Referenced by: '<S36>/P_tFOCStatAccelFast'
                                         */
extern real32_T rtP_P_tFOCStatAccelSlow;/* Variable: P_tFOCStatAccelSlow
                                         * Referenced by: '<S36>/P_tFOCStatAccelSlow'
                                         */
extern real32_T rtP_P_tFOCStatDecelFast;/* Variable: P_tFOCStatDecelFast
                                         * Referenced by: '<S36>/P_tFOCStatDecelFast'
                                         */
extern real32_T rtP_P_tFOCStatDecelSlow;/* Variable: P_tFOCStatDecelSlow
                                         * Referenced by: '<S36>/P_tFOCStatDecelSlow'
                                         */
extern real32_T rtP_P_tFiltAxAbsPONegFast;/* Variable: P_tFiltAxAbsPONegFast
                                           * Referenced by: '<S162>/Constant1'
                                           */
extern real32_T rtP_P_tFiltAxAbsPONegSlow;/* Variable: P_tFiltAxAbsPONegSlow
                                           * Referenced by: '<S162>/Constant4'
                                           */
extern real32_T rtP_P_tFiltAxAbsPOPosFast;/* Variable: P_tFiltAxAbsPOPosFast
                                           * Referenced by: '<S162>/Constant9'
                                           */
extern real32_T rtP_P_tFiltAxAbsPOPosSlow;/* Variable: P_tFiltAxAbsPOPosSlow
                                           * Referenced by: '<S162>/Constant12'
                                           */
extern real32_T rtP_P_tFiltAxAbsPOStand;/* Variable: P_tFiltAxAbsPOStand
                                         * Referenced by: '<S162>/Constant8'
                                         */
extern real32_T rtP_P_tFiltDAim;       /* Variable: P_tFiltDAim
                                        * Referenced by: '<S32>/P_tFiltDAim'
                                        */
extern real32_T rtP_P_tFiltDsd;        /* Variable: P_tFiltDsd
                                        * Referenced by: '<S41>/P_tFiltDsd'
                                        */
extern real32_T rtP_P_tFiltSpdLim;     /* Variable: P_tFiltSpdLim
                                        * Referenced by: '<S22>/Constant1'
                                        */
extern real32_T rtP_P_tFiltVxAxPOFast; /* Variable: P_tFiltVxAxPOFast
                                        * Referenced by: '<S162>/P_tFiltVxAxPOFast'
                                        */
extern real32_T rtP_P_tFiltVxAxPOSlow; /* Variable: P_tFiltVxAxPOSlow
                                        * Referenced by: '<S162>/P_tFiltVxAxPOSlow'
                                        */
extern real32_T rtP_P_tMinDrvPhase;    /* Variable: P_tMinDrvPhase
                                        * Referenced by: '<Root>/P_tMinDrvPhase'
                                        */
extern real32_T rtP_P_tPredObjLeav;    /* Variable: P_tPredObjLeav
                                        * Referenced by: '<S44>/Constant'
                                        */
extern real32_T rtP_P_tSSCNeg;         /* Variable: P_tSSCNeg
                                        * Referenced by: '<S22>/P_tSSCNeg'
                                        */
extern real32_T rtP_P_tSSCPos;         /* Variable: P_tSSCPos
                                        * Referenced by: '<S22>/P_tSSCPos'
                                        */
extern real32_T rtP_P_vEgoDecToStop;   /* Variable: P_vEgoDecToStop
                                        * Referenced by: '<S37>/P_vEgoDecToStop'
                                        */
extern real32_T rtP_P_vFOCNegDiff;     /* Variable: P_vFOCNegDiff
                                        * Referenced by:
                                        *   '<S90>/P_vFOCNegDiff'
                                        *   '<S91>/P_vFOCNegDiff'
                                        */
extern real32_T rtP_P_vFOCPosDiff;     /* Variable: P_vFOCPosDiff
                                        * Referenced by:
                                        *   '<S90>/P_vFOCPosDiff'
                                        *   '<S94>/P_vFOCPosDiff'
                                        */
extern real32_T rtP_P_vFOCStationaryFast;/* Variable: P_vFOCStationaryFast
                                          * Referenced by: '<S36>/P_vFOCStationaryFast'
                                          */
extern real32_T rtP_P_vFOCStationarySlow;/* Variable: P_vFOCStationarySlow
                                          * Referenced by: '<S36>/P_vFOCStationarySlow'
                                          */
extern real32_T rtP_P_vObjDrvOff;      /* Variable: P_vObjDrvOff
                                        * Referenced by: '<S11>/P_vObjDrvOff'
                                        */
extern real32_T rtP_P_vObjLowHystDecToStop;/* Variable: P_vObjLowHystDecToStop
                                            * Referenced by: '<S37>/P_vObjLowHystDecToStop'
                                            */
extern real32_T rtP_P_vObjUpperHystDecToStop;/* Variable: P_vObjUpperHystDecToStop
                                              * Referenced by: '<S37>/P_vObjUpperHystDecToStop'
                                              */
extern real32_T rtP_P_vStandStill;     /* Variable: P_vStandStill
                                        * Referenced by: '<Root>/P_vStandStill'
                                        */
extern real32_T rtP_P_vStandStillHyst; /* Variable: P_vStandStillHyst
                                        * Referenced by: '<Root>/P_vStandStillHyst'
                                        */
extern boolean_T rtP_P_CutInEnable;    /* Variable: P_CutInEnable
                                        * Referenced by: '<S116>/P_CutInEnable'
                                        */
extern boolean_T rtP_P_PlausIntegDisable;/* Variable: P_PlausIntegDisable
                                          * Referenced by: '<S110>/Constant4'
                                          */
extern boolean_T rtP_P_StandObjEnable; /* Variable: P_StandObjEnable
                                        * Referenced by: '<S130>/P_StandObjEnable'
                                        */
extern void AccTarSel_Init(void);
extern void AccTarSel_Reset(void);
extern void AccTarSel_Start(void);
extern void AccTarSel_Update(const AVP_OUTPUT_ST *rtu_AVP_Info);
extern void AccTarSel(const COM_VEHBUS_ST *rtu_CANInput, const FUS_OBJ_OUTPUT_ST
                      *rtu_ObjList, const VSI_VEHSTATE_ST *rtu_VSI_VehState_st,
                      const SYS_INFO_ST *rtu_SYS_Info_st, const Radar410_Info_ST
                      *rtu_ObjRadarList, const VLC_LGTCMD_ST *rtu_VLC_Cmd_K1,
                      const real32_T *rtu_TJA_Active, const ZOP2ACC *rtu_ZOP2ACC,
                      const uint8_T *rtu_ACC_HMI_Req_TimeGapSet, const uint8_T
                      *rtu_ACC_HMI_Req_ACC_Enable, const real32_T
                      *rtu_ACC_HMI_Req_vSetAccSpd, const AVP_OUTPUT_ST
                      *rtu_AVP_Info, const HWA_TARGETOBJECT_OUTPUT_ST
                      *rtu_AdjacentLaneObjInfo, ACC_LGTCTRL_ST
                      *rty_ACC_LgtCtrl_st, ATS_PO_ST *rty_ATS_Po_st,
                      ACC_Status_ST *rty_ACC2ZOP);

/* Model reference registration function */
extern void AccTarSel_initialize(const char_T **rt_errorStatus);

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

extern void AccTarSel_IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1,
  real32_T *rty_Out2, P_IfActionSubsystem_AccTarSel_T *localP);
extern void AccTarSel_Approaching(boolean_T *rty_Out1, P_Approaching_AccTarSel_T
  *localP);
extern void AccTarSel_Hold(boolean_T rtu_In1, boolean_T *rty_Out1);
extern void AccTarSel_IfActionSubsystem_b(real32_T rtu_In1, real32_T *rty_Out1);
extern void AccTarSel_IfActionSubsystem1(real32_T rtu_vRelAim, real32_T rtu_vRel,
  real32_T *rty_Out1);
extern void AccTarSel_IfActionSubsystem2(real32_T *rty_Out1,
  P_IfActionSubsystem2_AccTarSe_T *localP);
extern void AccTarSel_IfActionSubsystem_c(const uint8_T *rtu_index, const
  FUS_OBJDATA_ST *rtu_TargetInfo, const VSI_VEHSTATE_ST *rtu_egoInfo, real32_T
  *rty_Out1, B_IfActionSubsystem_AccTarS_a_T *localB,
  P_IfActionSubsystem_AccTarS_k_T *localP);
extern void AccTarSel_IfActionSubsystem_a(boolean_T *rty_CancelFlag, real32_T
  *rty_HoldTime, P_IfActionSubsystem_AccTarS_g_T *localP);

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

extern MdlrefDW_AccTarSel_T AccTarSel_MdlrefDW;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_AccTarSel_c_T AccTarSel_B;

/* Block states (default storage) */
extern DW_AccTarSel_f_T AccTarSel_DW;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

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
 * '<S2>'   : 'AccTarSel/ACC_State_Machine1'
 * '<S3>'   : 'AccTarSel/ACC_Target_Selection'
 * '<S4>'   : 'AccTarSel/ACC_dTarSet1'
 * '<S5>'   : 'AccTarSel/AVP_Simu'
 * '<S6>'   : 'AccTarSel/EgoCourseFusion'
 * '<S7>'   : 'AccTarSel/ObjAdapter'
 * '<S8>'   : 'AccTarSel/ObjRadarAdapter'
 * '<S9>'   : 'AccTarSel/RTI Data'
 * '<S10>'  : 'AccTarSel/Subsystem'
 * '<S11>'  : 'AccTarSel/Subsystem1'
 * '<S12>'  : 'AccTarSel/Subsystem3'
 * '<S13>'  : 'AccTarSel/Target_PreProcess'
 * '<S14>'  : 'AccTarSel/ZOP_ENABLE'
 * '<S15>'  : 'AccTarSel/calcCancelFlag'
 * '<S16>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl'
 * '<S17>'  : 'AccTarSel/ACC_Control/ArbitraryMix'
 * '<S18>'  : 'AccTarSel/ACC_Control/CrossRoad'
 * '<S19>'  : 'AccTarSel/ACC_Control/CurvSpdCtrl'
 * '<S20>'  : 'AccTarSel/ACC_Control/FollowObjCtrl'
 * '<S21>'  : 'AccTarSel/ACC_Control/OvertakeSuppression'
 * '<S22>'  : 'AccTarSel/ACC_Control/SetSpdCtrl'
 * '<S23>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl/LowerLimitation'
 * '<S24>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl/UpperLimitation'
 * '<S25>'  : 'AccTarSel/ACC_Control/ArbitraryMix/Subsystem'
 * '<S26>'  : 'AccTarSel/ACC_Control/ArbitraryMix/calcAFOC'
 * '<S27>'  : 'AccTarSel/ACC_Control/ArbitraryMix/calcAFOC/For Iterator Subsystem'
 * '<S28>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjInvalid'
 * '<S29>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid'
 * '<S30>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl'
 * '<S31>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl'
 * '<S32>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/CalcDAim'
 * '<S33>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX'
 * '<S34>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/If Action Subsystem'
 * '<S35>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/If Action Subsystem1'
 * '<S36>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl'
 * '<S37>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl'
 * '<S38>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem'
 * '<S39>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem2'
 * '<S40>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem3'
 * '<S41>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/calcDSlowDown'
 * '<S42>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1'
 * '<S43>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case2'
 * '<S44>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving'
 * '<S45>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/tStopObj'
 * '<S46>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/calcDSlowDown/LPFilter'
 * '<S47>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1/Subsystem'
 * '<S48>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1/Subsystem1'
 * '<S49>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving/Approaching'
 * '<S50>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving/Hold'
 * '<S51>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving/Leaving'
 * '<S52>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/BDC_State_Machine'
 * '<S53>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA'
 * '<S54>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria'
 * '<S55>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile'
 * '<S56>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem'
 * '<S57>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem1'
 * '<S58>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem'
 * '<S59>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1'
 * '<S60>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem2'
 * '<S61>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem3'
 * '<S62>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/Subsystem'
 * '<S63>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1/LPFilter'
 * '<S64>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1/LPFilter1'
 * '<S65>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/Subsystem/LPFilter'
 * '<S66>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop'
 * '<S67>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcProfileReCalc'
 * '<S68>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjNoStop'
 * '<S69>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjStopped'
 * '<S70>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjStopping'
 * '<S71>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/Subsystem'
 * '<S72>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/If Action Subsystem'
 * '<S73>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc'
 * '<S74>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/default'
 * '<S75>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem'
 * '<S76>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/calcInitCondition'
 * '<S77>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration'
 * '<S78>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration/calcD30'
 * '<S79>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration/calcV30'
 * '<S80>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/CalcDAim/LPFilter'
 * '<S81>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/CalcDAim/calcTimeGapToDAim'
 * '<S82>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/LPFilter'
 * '<S83>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem'
 * '<S84>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem'
 * '<S85>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem1'
 * '<S86>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem2'
 * '<S87>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem1'
 * '<S88>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem2'
 * '<S89>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem4'
 * '<S90>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal'
 * '<S91>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem'
 * '<S92>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem4'
 * '<S93>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem5'
 * '<S94>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem6'
 * '<S95>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem'
 * '<S96>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem1'
 * '<S97>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem2'
 * '<S98>'  : 'AccTarSel/ACC_Control/OvertakeSuppression/If Action Subsystem'
 * '<S99>'  : 'AccTarSel/ACC_Control/OvertakeSuppression/If Action Subsystem1'
 * '<S100>' : 'AccTarSel/ACC_Control/OvertakeSuppression/If Action Subsystem2'
 * '<S101>' : 'AccTarSel/ACC_Control/OvertakeSuppression/If Action Subsystem3'
 * '<S102>' : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem'
 * '<S103>' : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem1'
 * '<S104>' : 'AccTarSel/ACC_Control/SetSpdCtrl/LPFilter'
 * '<S105>' : 'AccTarSel/ACC_Target_Selection/Subsystem'
 * '<S106>' : 'AccTarSel/ACC_Target_Selection/TargetSel'
 * '<S107>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc'
 * '<S108>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc'
 * '<S109>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation'
 * '<S110>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc'
 * '<S111>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc'
 * '<S112>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck'
 * '<S113>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/If Action Subsystem'
 * '<S114>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem'
 * '<S115>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/If Action Subsystem'
 * '<S116>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem'
 * '<S117>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem'
 * '<S118>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem1'
 * '<S119>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/LPFilter'
 * '<S120>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/DistanceToTraj'
 * '<S121>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/If Action Subsystem'
 * '<S122>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem'
 * '<S123>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem1'
 * '<S124>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/If Action Subsystem'
 * '<S125>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/Subsystem'
 * '<S126>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/If Action Subsystem'
 * '<S127>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem'
 * '<S128>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckExistence'
 * '<S129>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckFOV'
 * '<S130>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckMotSts'
 * '<S131>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckPlaus'
 * '<S132>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem'
 * '<S133>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem1'
 * '<S134>' : 'AccTarSel/ACC_dTarSet1/If Action Subsystem'
 * '<S135>' : 'AccTarSel/ACC_dTarSet1/If Action Subsystem1'
 * '<S136>' : 'AccTarSel/ACC_dTarSet1/If Action Subsystem2'
 * '<S137>' : 'AccTarSel/ACC_dTarSet1/Subsystem'
 * '<S138>' : 'AccTarSel/AVP_Simu/AVP_Activate'
 * '<S139>' : 'AccTarSel/AVP_Simu/AVP_Deactivate'
 * '<S140>' : 'AccTarSel/AVP_Simu/Hold'
 * '<S141>' : 'AccTarSel/AVP_Simu/calcAVPInfo'
 * '<S142>' : 'AccTarSel/AVP_Simu/default'
 * '<S143>' : 'AccTarSel/AVP_Simu/calcAVPInfo/dxPredict'
 * '<S144>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt'
 * '<S145>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem'
 * '<S146>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem1'
 * '<S147>' : 'AccTarSel/ObjAdapter/For Each Subsystem'
 * '<S148>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcDx'
 * '<S149>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcHist'
 * '<S150>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem'
 * '<S151>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcDx'
 * '<S152>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcMotionSts'
 * '<S153>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcType'
 * '<S154>' : 'AccTarSel/RTI Data/RTI Data Store'
 * '<S155>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store'
 * '<S156>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S157>' : 'AccTarSel/Subsystem1/If Action Subsystem'
 * '<S158>' : 'AccTarSel/Subsystem1/If Action Subsystem1'
 * '<S159>' : 'AccTarSel/Subsystem3/calcOverride'
 * '<S160>' : 'AccTarSel/Target_PreProcess/AVP_Target'
 * '<S161>' : 'AccTarSel/Target_PreProcess/If Action Subsystem'
 * '<S162>' : 'AccTarSel/Target_PreProcess/preFilt'
 * '<S163>' : 'AccTarSel/Target_PreProcess/AVP_Target/If Action Subsystem'
 * '<S164>' : 'AccTarSel/Target_PreProcess/AVP_Target/If Action Subsystem1'
 * '<S165>' : 'AccTarSel/Target_PreProcess/preFilt/Hold'
 * '<S166>' : 'AccTarSel/Target_PreProcess/preFilt/NegTimeInc'
 * '<S167>' : 'AccTarSel/Target_PreProcess/preFilt/PosTimeInc'
 * '<S168>' : 'AccTarSel/Target_PreProcess/preFilt/axAbsFilt'
 * '<S169>' : 'AccTarSel/Target_PreProcess/preFilt/axFilt'
 * '<S170>' : 'AccTarSel/Target_PreProcess/preFilt/dxFilt'
 * '<S171>' : 'AccTarSel/Target_PreProcess/preFilt/vxFilt'
 * '<S172>' : 'AccTarSel/calcCancelFlag/If Action Subsystem'
 * '<S173>' : 'AccTarSel/calcCancelFlag/If Action Subsystem1'
 * '<S174>' : 'AccTarSel/calcCancelFlag/If Action Subsystem2'
 */
#endif                                 /* RTW_HEADER_AccTarSel_h_ */
