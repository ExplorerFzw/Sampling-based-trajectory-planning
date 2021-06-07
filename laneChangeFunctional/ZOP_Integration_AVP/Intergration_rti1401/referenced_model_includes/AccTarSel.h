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

/* Block signals for system '<S5>/For Each Subsystem' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  OBJDATA_ST BusCreator;               /* '<S115>/Bus Creator' */
  real32_T Gain;                       /* '<S116>/Gain' */
  real32_T Add;                        /* '<S116>/Add' */
  real32_T dx;                         /* '<S116>/Max' */
  real32_T dy;                         /* '<S115>/Data Type Conversion2' */
  real32_T vx;                         /* '<S115>/Data Type Conversion1' */
  real32_T vy;                         /* '<S115>/Data Type Conversion3' */
  real32_T ax;                         /* '<S115>/Data Type Conversion4' */
  real32_T ay;                         /* '<S115>/Data Type Conversion5' */
  real32_T MotionSts;                  /* '<S115>/Data Type Conversion6' */
  real32_T Type;                       /* '<S115>/Data Type Conversion7' */
  real32_T ID;                         /* '<S115>/Data Type Conversion8' */
  boolean_T Hist;                      /* '<S117>/Relational Operator' */
  boolean_T Valid;                     /* '<S115>/Data Type Conversion' */
} B_CoreSubsys_AccTarSel_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S6>/For Each Subsystem' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  OBJDATA_ST BusCreator;               /* '<S118>/Bus Creator' */
  real32_T Add;                        /* '<S119>/Add' */
  real32_T dx;                         /* '<S119>/Max' */
  real32_T dy;                         /* '<S118>/Data Type Conversion2' */
  real32_T vx;                         /* '<S118>/Data Type Conversion1' */
  real32_T vy;                         /* '<S118>/Data Type Conversion3' */
  real32_T ax;                         /* '<S118>/Data Type Conversion4' */
  real32_T uDLookupTable;              /* '<S120>/1-D Lookup Table' */
  real32_T MotionSts;                  /* '<S118>/Data Type Conversion6' */
  real32_T uDLookupTable_o;            /* '<S121>/1-D Lookup Table' */
  real32_T Type;                       /* '<S118>/Data Type Conversion7' */
  real32_T ID;                         /* '<S118>/Data Type Conversion8' */
  boolean_T DataTypeConversion9;       /* '<S118>/Data Type Conversion9' */
  boolean_T Valid;                     /* '<S118>/Data Type Conversion' */
} B_CoreSubsys_AccTarSel_c_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'AccTarSel' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  FUS_OBJDATA_ST BusCreator;           /* '<S6>/Bus Creator' */
  FUS_OBJDATA_ST BusCreator_n;         /* '<S5>/Bus Creator' */
  FUS_OBJDATA_ST Switch;               /* '<Root>/Switch' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st;/* '<Root>/Memory' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st_f;/* '<Root>/Bus Creator' */
  Obj_Data VectorConcatenate[40];      /* '<S6>/Vector Concatenate' */
  OBJDATA_ST Selector;                 /* '<S3>/Selector' */
  ATS_PO_ST Memory1;                   /* '<Root>/Memory1' */
  ATS_PO_ST BusCreator_o;              /* '<S84>/Bus Creator' */
  ATS_OBJINFO_ST Selector_k;           /* '<Root>/Selector' */
  ATS_OBJINFO_ST Selector1;            /* '<S3>/Selector1' */
  ATS_OBJINFO_ST Assignment1[40];      /* '<S3>/Assignment1' */
  ATS_OBJINFO_ST BusCreator_p;         /* '<S85>/Bus Creator' */
  NET_DRVACTION_ST BusCreator_oy;      /* '<S10>/Bus Creator' */
  AST_INFO_ST AST_Info_st;             /* '<Root>/ACC_State_Machine' */
  real32_T DataTypeConversion11;       /* '<S10>/Data Type Conversion11' */
  real32_T Abs;                        /* '<S112>/Abs' */
  real32_T uDLookupTable;              /* '<S112>/1-D Lookup Table' */
  real32_T Merge;                      /* '<S112>/Merge' */
  real32_T Divide;                     /* '<S112>/Divide' */
  real32_T Multiply;                   /* '<S112>/Multiply' */
  real32_T Add;                        /* '<S112>/Add' */
  real32_T Memory;                     /* '<S112>/Memory' */
  real32_T Multiply1;                  /* '<S112>/Multiply1' */
  real32_T Add1;                       /* '<S112>/Add1' */
  real32_T b;                          /* '<S4>/Multiply' */
  real32_T dx;
  real32_T vx;
  real32_T ax;
  real32_T dx_a;                       /* '<S11>/Merge3' */
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
  real32_T ax_n;                       /* '<S128>/ax' */
  real32_T Abs_i;                      /* '<S129>/Abs' */
  real32_T Switch_h;                   /* '<S129>/Switch' */
  real32_T Max_e;                      /* '<S131>/Max' */
  real32_T filtFactor;                 /* '<S131>/Divide' */
  real32_T Multiply_p;                 /* '<S131>/Multiply' */
  real32_T Add_l;                      /* '<S131>/Add' */
  real32_T Multiply1_k;                /* '<S131>/Multiply1' */
  real32_T Add1_g;                     /* '<S131>/Add1' */
  real32_T Add_h;                      /* '<S129>/Add' */
  real32_T Max_f;                      /* '<S130>/Max' */
  real32_T filtFactor_f;               /* '<S130>/Divide' */
  real32_T Add_p;                      /* '<S130>/Add' */
  real32_T Multiply_k;                 /* '<S130>/Multiply' */
  real32_T Multiply1_j;                /* '<S130>/Multiply1' */
  real32_T Max_b;                      /* '<S132>/Max' */
  real32_T filtFactor_p;               /* '<S132>/Divide' */
  real32_T Add_j;                      /* '<S132>/Add' */
  real32_T Multiply_g;                 /* '<S132>/Multiply' */
  real32_T Multiply1_g;                /* '<S132>/Multiply1' */
  real32_T Max_d;                      /* '<S133>/Max' */
  real32_T filtFactor_c;               /* '<S133>/Divide' */
  real32_T Add_k;                      /* '<S133>/Add' */
  real32_T Multiply_ps;                /* '<S133>/Multiply' */
  real32_T Multiply1_n;                /* '<S133>/Multiply1' */
  real32_T Delay;                      /* '<S84>/Delay' */
  real32_T DataTypeConversion;         /* '<S84>/Data Type Conversion' */
  real32_T vx_o;                       /* '<S84>/Merge2' */
  real32_T vxAbs_c;                    /* '<S84>/Add' */
  real32_T ax_a;                       /* '<S84>/Merge4' */
  real32_T axAbs_e;                    /* '<S84>/Add1' */
  real32_T Index;                      /* '<S84>/Merge5' */
  real32_T dx_i;                       /* '<S84>/Merge' */
  real32_T dy;                         /* '<S84>/Merge1' */
  real32_T vy;                         /* '<S84>/Merge3' */
  real32_T Type;                       /* '<S84>/Merge7' */
  real32_T MotionSts;                  /* '<S84>/Merge8' */
  real32_T dyToTraj;                   /* '<S87>/Merge' */
  real32_T dyCutInPred;                /* '<S86>/Merge1' */
  real32_T Merge2;                     /* '<S86>/Merge2' */
  real32_T Merge_n;                    /* '<S86>/Merge' */
  real32_T Merge_ns;                   /* '<S89>/Merge' */
  real32_T Multiply_o;                 /* '<S88>/Multiply' */
  real32_T Switch_l;                   /* '<S88>/Switch' */
  real32_T Add_a;                      /* '<S88>/Add' */
  real32_T Min_c;                      /* '<S88>/Min' */
  real32_T Min1;                       /* '<S88>/Min1' */
  real32_T Switch1;                    /* '<S88>/Switch1' */
  real32_T Max_g;                      /* '<S88>/Max' */
  real32_T Merge_k;                    /* '<S88>/Merge' */
  real32_T uDLookupTable_d;            /* '<S107>/1-D Lookup Table' */
  real32_T dyWidthTraj;                /* '<S103>/1-D Lookup Table' */
  real32_T dyToTrajAbs;                /* '<S103>/Abs' */
  real32_T Add_ko;                     /* '<S103>/Add' */
  real32_T Divide_n;                   /* '<S103>/Divide' */
  real32_T Square;                     /* '<S98>/Square' */
  real32_T Multiply_p3;                /* '<S98>/Multiply' */
  real32_T Square1;                    /* '<S98>/Square1' */
  real32_T Multiply1_d;                /* '<S98>/Multiply1' */
  real32_T Multiply2;                  /* '<S98>/Multiply2' */
  real32_T Add_c;                      /* '<S98>/Add' */
  real32_T Abs_b;                      /* '<S94>/Abs' */
  real32_T Abs1;                       /* '<S94>/Abs1' */
  real32_T Multiply_c;                 /* '<S94>/Multiply' */
  real32_T Max_c;                      /* '<S97>/Max' */
  real32_T filtFactor_b;               /* '<S97>/Divide' */
  real32_T Add_n;                      /* '<S97>/Add' */
  real32_T probCutIn;                  /* '<S94>/Merge' */
  real32_T Multiply_m;                 /* '<S97>/Multiply' */
  real32_T Multiply1_i;                /* '<S97>/Multiply1' */
  real32_T Abs1_c;                     /* '<S95>/Abs1' */
  real32_T tPred;                      /* '<S95>/1-D Lookup Table' */
  real32_T Multiply_n;                 /* '<S95>/Multiply' */
  real32_T Add_kt;                     /* '<S95>/Add' */
  real32_T Max_gs;                     /* '<S95>/Max' */
  real32_T Max1_m;                     /* '<S95>/Max1' */
  real32_T dyPred;                     /* '<S95>/Switch' */
  real32_T Abs_iz;                     /* '<S95>/Abs' */
  real32_T vAbsObj_e;                  /* '<S21>/Add' */
  real32_T axAbs_h;
  real32_T Min1_l;                     /* '<S35>/Min1' */
  real32_T Divide_p;                   /* '<S35>/Divide' */
  real32_T Abs_f;                      /* '<S35>/Abs' */
  real32_T Min_p;                      /* '<S35>/Min' */
  real32_T Switch_p;                   /* '<S35>/Switch' */
  real32_T Switch1_d;                  /* '<S35>/Switch1' */
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
  real32_T Min_o;                      /* '<S34>/Min' */
  real32_T Abs_o;                      /* '<S34>/Abs' */
  real32_T Multiply_on;                /* '<S34>/Multiply' */
  real32_T Divide_o;                   /* '<S34>/Divide' */
  real32_T Switch_pt;                  /* '<S34>/Switch' */
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
  real32_T Multiply_kt;                /* '<S27>/Multiply' */
  real32_T Max_fh;                     /* '<S27>/Max' */
  real32_T Gain2;                      /* '<S27>/Gain2' */
  real32_T Gain1;                      /* '<S27>/Gain1' */
  real32_T TmpSignalConversionAtLookupTabl[2];
  real32_T axAbs_h3v;
  real32_T TmpSignalConversionAtLookupTa_g[2];
  real32_T LookupTableDynamic;         /* '<S27>/Lookup Table Dynamic' */
  real32_T Divide_b;                   /* '<S73>/Divide' */
  real32_T dThresNeg;                  /* '<S73>/Min' */
  real32_T dBreakPointNeg;             /* '<S73>/Add1' */
  real32_T Divide1_o;                  /* '<S73>/Divide1' */
  real32_T dBreakPointPos;             /* '<S73>/Add2' */
  real32_T Merge1_l;                   /* '<S73>/Merge1' */
  real32_T Merge2_i;                   /* '<S73>/Merge2' */
  real32_T Merge_de;                   /* '<S27>/Merge' */
  real32_T vDeltaRaw;                  /* '<S27>/Gain' */
  real32_T TmpSignalConversionAtLookupTa_h[2];
  real32_T TmpSignalConversionAtLookupTa_l[2];
  real32_T LookupTableDynamic1;        /* '<S27>/Lookup Table Dynamic1' */
  real32_T Divide_h;                   /* '<S27>/Divide' */
  real32_T Add3;                       /* '<S27>/Add3' */
  real32_T aStat;                      /* '<S27>/Switch' */
  real32_T Min_oe;                     /* '<S24>/Min' */
  real32_T TmpSignalConversionAtLookupTa_j[2];
  real32_T TmpSignalConversionAtLookupT_gn[2];
  real32_T LookupTableDynamic_k;       /* '<S24>/Lookup Table Dynamic' */
  real32_T aFocMix;                    /* '<S66>/Merge' */
  real32_T vAbsObj_c;                  /* '<S28>/Add' */
  real32_T aConstNegPhase;             /* '<S77>/Multiply' */
  real32_T Add_b;                      /* '<S77>/Add' */
  real32_T Multiply1_dc;               /* '<S77>/Multiply1' */
  real32_T Abs_oh;                     /* '<S77>/Abs' */
  real32_T Square_h;                   /* '<S77>/Square' */
  real32_T Multiply2_g;                /* '<S77>/Multiply2' */
  real32_T Add1_k;                     /* '<S77>/Add1' */
  real32_T vUpper;                     /* '<S77>/Sqrt' */
  real32_T Add_gh;                     /* '<S76>/Add' */
  real32_T Multiply_a;                 /* '<S76>/Multiply' */
  real32_T Add_as;                     /* '<S75>/Add' */
  real32_T Multiply_k4;                /* '<S75>/Multiply' */
  real32_T aConstNegPhase_i;           /* '<S74>/Multiply' */
  real32_T Add_bb;                     /* '<S74>/Add' */
  real32_T Multiply1_f;                /* '<S74>/Multiply1' */
  real32_T Abs_fo;                     /* '<S74>/Abs' */
  real32_T Square_o;                   /* '<S74>/Square' */
  real32_T Multiply2_l;                /* '<S74>/Multiply2' */
  real32_T Add1_i;                     /* '<S74>/Add1' */
  real32_T TmpSignalConversionAtLookupT_jd[2];
  real32_T TmpSignalConversionAtLookup_gn2[2];
  real32_T LookupTableDynamic_l;       /* '<S69>/Lookup Table Dynamic' */
  real32_T Gain1_f;                    /* '<S62>/Gain1' */
  real32_T Gain2_p;                    /* '<S62>/Gain2' */
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
  real32_T Multiply1_gw;               /* '<S62>/Multiply1' */
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
  real32_T Switch_hx;                  /* '<S64>/Switch' */
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
  real32_T Divide2;                    /* '<S56>/Divide2' */
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
  boolean_T DataTypeConversion1;       /* '<S10>/Data Type Conversion1' */
  boolean_T AND4;                      /* '<S127>/AND4' */
  boolean_T RelationalOperator;        /* '<S127>/Relational Operator' */
  boolean_T AND;                       /* '<S127>/AND' */
  boolean_T RelationalOperator1;       /* '<S127>/Relational Operator1' */
  boolean_T Memory_ac;                 /* '<S127>/Memory' */
  boolean_T AND2;                      /* '<S127>/AND2' */
  boolean_T AND3;                      /* '<S127>/AND3' */
  boolean_T ACC_SpdIncSw;              /* '<S10>/Data Type Conversion6' */
  boolean_T ACC_SpdIncSwK1;            /* '<S10>/Memory' */
  boolean_T ACC_SpdDecSw;              /* '<S10>/Data Type Conversion7' */
  boolean_T ACC_SpdDecSwK1;            /* '<S10>/Memory1' */
  boolean_T RelationalOperator_l;      /* '<S112>/Relational Operator' */
  boolean_T RelationalOperator_a;      /* '<S11>/Relational Operator' */
  boolean_T AND_b;                     /* '<S11>/AND' */
  boolean_T RelationalOperator6;       /* '<S9>/Relational Operator6' */
  boolean_T RelationalOperator7;       /* '<S9>/Relational Operator7' */
  boolean_T RelationalOperator8;       /* '<S9>/Relational Operator8' */
  boolean_T AND2_n;                    /* '<S9>/AND2' */
  boolean_T AND3_o;                    /* '<S9>/AND3' */
  boolean_T DrvOffEnable;              /* '<S9>/Merge' */
  boolean_T RelationalOperator_k;      /* '<S16>/Relational Operator' */
  boolean_T Memory_p;                  /* '<S15>/Memory' */
  boolean_T Merge1_b;                  /* '<S15>/Merge1' */
  boolean_T Assignment[40];            /* '<S3>/Assignment' */
  boolean_T RelationalOperator1_l;     /* '<S84>/Relational Operator1' */
  boolean_T Delay1;                    /* '<S84>/Delay1' */
  boolean_T RelationalOperator2;       /* '<S84>/Relational Operator2' */
  boolean_T AND1_g;                    /* '<S84>/AND1' */
  boolean_T RelationalOperator_d;      /* '<S84>/Relational Operator' */
  boolean_T AND_h;                     /* '<S84>/AND' */
  boolean_T Valid;                     /* '<S84>/Merge6' */
  boolean_T isCutIn;                   /* '<S86>/Relational Operator2' */
  boolean_T RelationalOperator_o;      /* '<S88>/Relational Operator' */
  boolean_T Merge_o;                   /* '<S90>/Merge' */
  boolean_T RelationalOperator_p;      /* '<S106>/Relational Operator' */
  boolean_T RelationalOperator1_p;     /* '<S106>/Relational Operator1' */
  boolean_T LogicalOperator;           /* '<S106>/Logical Operator' */
  boolean_T RelationalOperator1_k;     /* '<S107>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S107>/Relational Operator' */
  boolean_T LogicalOperator_n;         /* '<S107>/Logical Operator' */
  boolean_T RelationalOperator2_g;     /* '<S108>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S108>/Relational Operator3' */
  boolean_T LogicalOperator_m;         /* '<S108>/Logical Operator' */
  boolean_T RelationalOperator_i;      /* '<S108>/Relational Operator' */
  boolean_T RelationalOperator1_lm;    /* '<S108>/Relational Operator1' */
  boolean_T LogicalOperator1;          /* '<S108>/Logical Operator1' */
  boolean_T RelationalOperator1_j;     /* '<S109>/Relational Operator1' */
  boolean_T RelationalOperator3_d;     /* '<S92>/Relational Operator3' */
  boolean_T RelationalOperator_g;      /* '<S94>/Relational Operator' */
  boolean_T RelationalOperator1_jr;    /* '<S94>/Relational Operator1' */
  boolean_T RelationalOperator2_m;     /* '<S94>/Relational Operator2' */
  boolean_T LogicalOperator_g;         /* '<S94>/Logical Operator' */
  boolean_T RelationalOperator2_f;     /* '<S21>/Relational Operator2' */
  boolean_T RelationalOperator1_m;     /* '<S21>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S35>/Relational Operator' */
  boolean_T RelationalOperator1_j3;    /* '<S35>/Relational Operator1' */
  boolean_T OR;                        /* '<S35>/OR' */
  boolean_T RelationalOperator_pq;     /* '<S33>/Relational Operator' */
  boolean_T RelationalOperator_lk;     /* '<S21>/Relational Operator' */
  boolean_T OR_j;                      /* '<S21>/OR' */
  boolean_T RelationalOperator_pg;     /* '<S34>/Relational Operator' */
  boolean_T RelationalOperator1_o;     /* '<S34>/Relational Operator1' */
  boolean_T OR_jw;                     /* '<S34>/OR' */
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
  boolean_T RelationalOperator1_or;    /* '<S41>/Relational Operator1' */
  boolean_T RelationalOperator2_d;     /* '<S41>/Relational Operator2' */
  boolean_T OR1;                       /* '<S41>/OR1' */
  boolean_T RelationalOperator3_h;     /* '<S41>/Relational Operator3' */
  boolean_T OR_b;                      /* '<S41>/OR' */
  boolean_T SmoothStopCond_c;          /* '<S41>/Memory1' */
  boolean_T SmoothStopCond_p;          /* '<S41>/Merge' */
  boolean_T RelationalOperator_ob;     /* '<S73>/Relational Operator' */
  boolean_T RelationalOperator1_kx;    /* '<S73>/Relational Operator1' */
  boolean_T RelationalOperator2_h;     /* '<S73>/Relational Operator2' */
  boolean_T phase1;                    /* '<S27>/Relational Operator' */
  boolean_T phase2;                    /* '<S27>/Relational Operator1' */
  boolean_T RelationalOperator3_j;     /* '<S27>/Relational Operator3' */
  boolean_T RelationalOperator_dk;     /* '<S66>/Relational Operator' */
  boolean_T RelationalOperator1_bu;    /* '<S66>/Relational Operator1' */
  boolean_T LogicalOperator_g3;        /* '<S66>/Logical Operator' */
  boolean_T RelationalOperator2_gq;    /* '<S66>/Relational Operator2' */
  boolean_T RelationalOperator1_kd;    /* '<S28>/Relational Operator1' */
  boolean_T RelationalOperator_aa;     /* '<S28>/Relational Operator' */
  boolean_T RelationalOperator2_hl;    /* '<S28>/Relational Operator2' */
  boolean_T AND_d;                     /* '<S28>/AND' */
  boolean_T RelationalOperator3_c;     /* '<S28>/Relational Operator3' */
  boolean_T RelationalOperator4_n;     /* '<S28>/Relational Operator4' */
  boolean_T AND1_j;                    /* '<S28>/AND1' */
  boolean_T SmoothStopCond_l;          /* '<S59>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S63>/Relational Operator' */
  boolean_T RelationalOperator_n;      /* '<S42>/Relational Operator' */
  boolean_T RelationalOperator1_e;     /* '<S42>/Relational Operator1' */
  boolean_T RelationalOperator_i2;     /* '<S48>/Relational Operator' */
  boolean_T RelationalOperator_op;     /* '<S45>/Relational Operator' */
  B_CoreSubsys_AccTarSel_c_T CoreSubsys_p[40];/* '<S6>/For Each Subsystem' */
  B_CoreSubsys_AccTarSel_T CoreSubsys[40];/* '<S5>/For Each Subsystem' */
} B_AccTarSel_c_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'AccTarSel' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  ATS_INTERNAL_OBJINFO_ST Memory_PreviousInput;/* '<Root>/Memory' */
  ATS_PO_ST Memory1_PreviousInput;     /* '<Root>/Memory1' */
  real32_T Delay_DSTATE;               /* '<S84>/Delay' */
  real32_T Memory_PreviousInput_g;     /* '<S112>/Memory' */
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
  boolean_T Delay1_DSTATE;             /* '<S84>/Delay1' */
  int8_T If_ActiveSubsystem;           /* '<S15>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S41>/If' */
  int8_T If_ActiveSubsystem_j;         /* '<S39>/If' */
  uint8_T is_active_c3_AccTarSel;      /* '<Root>/ACC_State_Machine' */
  uint8_T is_c3_AccTarSel;             /* '<Root>/ACC_State_Machine' */
  uint8_T is_ACTIVE;                   /* '<Root>/ACC_State_Machine' */
  uint8_T is_active_c1_AccTarSel;      /* '<S22>/BDC_State_Machine' */
  uint8_T is_c1_AccTarSel;             /* '<S22>/BDC_State_Machine' */
  boolean_T Memory_PreviousInput_h;    /* '<S127>/Memory' */
  boolean_T Memory_PreviousInput_o;    /* '<S10>/Memory' */
  boolean_T Memory1_PreviousInput_f;   /* '<S10>/Memory1' */
  boolean_T Memory_PreviousInput_j1;   /* '<S15>/Memory' */
  boolean_T Memory1_1_PreviousInput;   /* '<S22>/Memory1' */
  boolean_T Memory1_1_PreviousInput_h; /* '<S41>/Memory1' */
} DW_AccTarSel_f_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S21>/If Action Subsystem' */
struct P_IfActionSubsystem_AccTarSel_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S29>/Constant2'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S42>/If Action Subsystem2' */
struct P_IfActionSubsystem2_AccTarSe_T_ {
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S46>/Constant'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S52>/ObjNoStop' */
struct P_ObjNoStop_AccTarSel_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S54>/Constant2'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S5>/For Each Subsystem' */
struct P_CoreSubsys_AccTarSel_T_ {
  real32_T Constant11_Value;           /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S117>/Constant11'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S116>/Gain'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S116>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S116>/Constant3'
                                        */
  real32_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S115>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S115>/Constant2'
                                        */
  real32_T Constant3_Value_p;          /* Computed Parameter: Constant3_Value_p
                                        * Referenced by: '<S115>/Constant3'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S6>/For Each Subsystem' */
struct P_CoreSubsys_AccTarSel_g_T_ {
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S119>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S119>/Constant3'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S118>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S118>/Constant2'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S118>/Constant4'
                                        */
  real32_T uDLookupTable_tableData[6]; /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S120>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_bp01Data[6];  /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S120>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_tableData_p[4];/* Computed Parameter: uDLookupTable_tableData_p
                                         * Referenced by: '<S121>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_l[4];/* Computed Parameter: uDLookupTable_bp01Data_l
                                        * Referenced by: '<S121>/1-D Lookup Table'
                                        */
  real32_T Constant3_Value_f;          /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S118>/Constant3'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_AccTarSel_T_ {
  ATS_INTERNAL_OBJINFO_ST Memory_InitialCondition;/* Computed Parameter: Memory_InitialCondition
                                                   * Referenced by: '<Root>/Memory'
                                                   */
  ATS_OBJINFO_ST ObjInfo_Y0;           /* Computed Parameter: ObjInfo_Y0
                                        * Referenced by: '<S3>/ObjInfo'
                                        */
  ATS_OBJINFO_ST Zero1_Value[40];      /* Computed Parameter: Zero1_Value
                                        * Referenced by: '<S3>/Zero1'
                                        */
  ATS_PO_ST POInfo_Y0;                 /* Computed Parameter: POInfo_Y0
                                        * Referenced by: '<S3>/POInfo'
                                        */
  ATS_PO_ST Memory1_InitialCondition;  /* Computed Parameter: Memory1_InitialCondition
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S94>/Constant2'
                                        */
  real_T Constant_Value_c;             /* Expression: 15
                                        * Referenced by: '<S127>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 10
                                        * Referenced by: '<S127>/Constant1'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant1_Value_b;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  int32_T ForIterator_IterationLimit;  /* Computed Parameter: ForIterator_IterationLimit
                                        * Referenced by: '<S63>/For Iterator'
                                        */
  int32_T Constant_Value_n;            /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S63>/Constant'
                                        */
  int32_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S84>/Constant'
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
  real32_T Constant1_Value_bh;         /* Computed Parameter: Constant1_Value_bh
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
                                        * Referenced by: '<S74>/Constant2'
                                        */
  real32_T Constant2_Value_j;          /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S77>/Constant2'
                                        */
  real32_T Constant_Value_oa;          /* Computed Parameter: Constant_Value_oa
                                        * Referenced by: '<S77>/Constant'
                                        */
  real32_T Constant_Value_ha;          /* Computed Parameter: Constant_Value_ha
                                        * Referenced by: '<S21>/Constant'
                                        */
  real32_T Constant4_Value_i;          /* Computed Parameter: Constant4_Value_i
                                        * Referenced by: '<S35>/Constant4'
                                        */
  real32_T Constant2_Value_ju;         /* Computed Parameter: Constant2_Value_ju
                                        * Referenced by: '<S35>/Constant2'
                                        */
  real32_T Constant3_Value_a;          /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S35>/Constant3'
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
  real32_T Constant5_Value_m;          /* Computed Parameter: Constant5_Value_m
                                        * Referenced by: '<S34>/Constant5'
                                        */
  real32_T Constant3_Value_h;          /* Computed Parameter: Constant3_Value_h
                                        * Referenced by: '<S34>/Constant3'
                                        */
  real32_T Constant4_Value_e;          /* Computed Parameter: Constant4_Value_e
                                        * Referenced by: '<S34>/Constant4'
                                        */
  real32_T Constant2_Value_ct;         /* Computed Parameter: Constant2_Value_ct
                                        * Referenced by: '<S34>/Constant2'
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
  real32_T Constant_Value_o2;          /* Computed Parameter: Constant_Value_o2
                                        * Referenced by: '<S27>/Constant'
                                        */
  real32_T Gain2_Gain_f;               /* Computed Parameter: Gain2_Gain_f
                                        * Referenced by: '<S27>/Gain2'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S27>/Gain1'
                                        */
  real32_T Constant1_Value_eq;         /* Computed Parameter: Constant1_Value_eq
                                        * Referenced by: '<S27>/Constant1'
                                        */
  real32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S27>/Gain'
                                        */
  real32_T Constant5_Value_k;          /* Computed Parameter: Constant5_Value_k
                                        * Referenced by: '<S27>/Constant5'
                                        */
  real32_T Constant_Value_c1;          /* Computed Parameter: Constant_Value_c1
                                        * Referenced by: '<S19>/Constant'
                                        */
  real32_T uDLookupTable_tableData_j[2];/* Computed Parameter: uDLookupTable_tableData_j
                                         * Referenced by: '<S95>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_c[2];/* Computed Parameter: uDLookupTable_bp01Data_c
                                        * Referenced by: '<S95>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S95>/Constant'
                                        */
  real32_T Switch_Threshold_i;         /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S95>/Switch'
                                        */
  real32_T uDLookupTable1_tableData[2];/* Computed Parameter: uDLookupTable1_tableData
                                        * Referenced by: '<S95>/1-D Lookup Table1'
                                        */
  real32_T uDLookupTable1_bp01Data[2]; /* Computed Parameter: uDLookupTable1_bp01Data
                                        * Referenced by: '<S95>/1-D Lookup Table1'
                                        */
  real32_T Constant_Value_ga;          /* Computed Parameter: Constant_Value_ga
                                        * Referenced by: '<S96>/Constant'
                                        */
  real32_T Constant_Value_no;          /* Computed Parameter: Constant_Value_no
                                        * Referenced by: '<S97>/Constant'
                                        */
  real32_T Merge_InitialOutput;        /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S94>/Merge'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S93>/Constant'
                                        */
  real32_T Constant_Value_pu;          /* Computed Parameter: Constant_Value_pu
                                        * Referenced by: '<S91>/Constant'
                                        */
  real32_T Constant_Value_hd;          /* Computed Parameter: Constant_Value_hd
                                        * Referenced by: '<S98>/Constant'
                                        */
  real32_T uDLookupTable_tableData_n[3];/* Computed Parameter: uDLookupTable_tableData_n
                                         * Referenced by: '<S103>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_m[3];/* Computed Parameter: uDLookupTable_bp01Data_m
                                        * Referenced by: '<S103>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable1_tableData_d[2];/* Computed Parameter: uDLookupTable1_tableData_d
                                          * Referenced by: '<S103>/1-D Lookup Table1'
                                          */
  real32_T uDLookupTable1_bp01Data_b[2];/* Computed Parameter: uDLookupTable1_bp01Data_b
                                         * Referenced by: '<S103>/1-D Lookup Table1'
                                         */
  real32_T uDLookupTable_tableData_jd[2];/* Computed Parameter: uDLookupTable_tableData_jd
                                          * Referenced by: '<S107>/1-D Lookup Table'
                                          */
  real32_T uDLookupTable_bp01Data_n[2];/* Computed Parameter: uDLookupTable_bp01Data_n
                                        * Referenced by: '<S107>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S107>/Constant'
                                        */
  real32_T Constant_Value_ar;          /* Computed Parameter: Constant_Value_ar
                                        * Referenced by: '<S108>/Constant'
                                        */
  real32_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S108>/Constant1'
                                        */
  real32_T Constant2_Value_f;          /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S108>/Constant2'
                                        */
  real32_T Constant3_Value_md;         /* Computed Parameter: Constant3_Value_md
                                        * Referenced by: '<S108>/Constant3'
                                        */
  real32_T Constant_Value_gd;          /* Computed Parameter: Constant_Value_gd
                                        * Referenced by: '<S87>/Constant'
                                        */
  real32_T Constant_Value_pb;          /* Computed Parameter: Constant_Value_pb
                                        * Referenced by: '<S89>/Constant'
                                        */
  real32_T Constant1_Value_l;          /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S86>/Constant1'
                                        */
  real32_T Constant3_Value_c;          /* Computed Parameter: Constant3_Value_c
                                        * Referenced by: '<S88>/Constant3'
                                        */
  real32_T Constant1_Value_bc;         /* Computed Parameter: Constant1_Value_bc
                                        * Referenced by: '<S88>/Constant1'
                                        */
  real32_T Constant2_Value_jk;         /* Computed Parameter: Constant2_Value_jk
                                        * Referenced by: '<S88>/Constant2'
                                        */
  real32_T Constant_Value_b0;          /* Computed Parameter: Constant_Value_b0
                                        * Referenced by: '<S88>/Constant'
                                        */
  real32_T Constant5_Value_e;          /* Computed Parameter: Constant5_Value_e
                                        * Referenced by: '<S111>/Constant5'
                                        */
  real32_T Constant_Value_b4;          /* Computed Parameter: Constant_Value_b4
                                        * Referenced by: '<S111>/Constant'
                                        */
  real32_T Constant1_Value_fqq;        /* Computed Parameter: Constant1_Value_fqq
                                        * Referenced by: '<S111>/Constant1'
                                        */
  real32_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S111>/Constant2'
                                        */
  real32_T Constant3_Value_nq;         /* Computed Parameter: Constant3_Value_nq
                                        * Referenced by: '<S111>/Constant3'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S111>/Constant4'
                                        */
  real32_T Constant7_Value_c;          /* Computed Parameter: Constant7_Value_c
                                        * Referenced by: '<S111>/Constant7'
                                        */
  real32_T Constant8_Value_p;          /* Computed Parameter: Constant8_Value_p
                                        * Referenced by: '<S111>/Constant8'
                                        */
  real32_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S84>/Delay'
                                        */
  real32_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                        * Referenced by: '<S84>/Merge2'
                                        */
  real32_T Merge4_InitialOutput;       /* Computed Parameter: Merge4_InitialOutput
                                        * Referenced by: '<S84>/Merge4'
                                        */
  real32_T Merge5_InitialOutput;       /* Computed Parameter: Merge5_InitialOutput
                                        * Referenced by: '<S84>/Merge5'
                                        */
  real32_T Merge_InitialOutput_b;      /* Computed Parameter: Merge_InitialOutput_b
                                        * Referenced by: '<S84>/Merge'
                                        */
  real32_T Merge1_InitialOutput_k;     /* Computed Parameter: Merge1_InitialOutput_k
                                        * Referenced by: '<S84>/Merge1'
                                        */
  real32_T Merge3_InitialOutput;       /* Computed Parameter: Merge3_InitialOutput
                                        * Referenced by: '<S84>/Merge3'
                                        */
  real32_T Merge7_InitialOutput;       /* Computed Parameter: Merge7_InitialOutput
                                        * Referenced by: '<S84>/Merge7'
                                        */
  real32_T Merge8_InitialOutput;       /* Computed Parameter: Merge8_InitialOutput
                                        * Referenced by: '<S84>/Merge8'
                                        */
  real32_T Switch_Threshold_j;         /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S129>/Switch'
                                        */
  real32_T Constant_Value_dd;          /* Computed Parameter: Constant_Value_dd
                                        * Referenced by: '<S131>/Constant'
                                        */
  real32_T Constant_Value_ag;          /* Computed Parameter: Constant_Value_ag
                                        * Referenced by: '<S130>/Constant'
                                        */
  real32_T Constant_Value_js;          /* Computed Parameter: Constant_Value_js
                                        * Referenced by: '<S132>/Constant'
                                        */
  real32_T Constant_Value_o3;          /* Computed Parameter: Constant_Value_o3
                                        * Referenced by: '<S133>/Constant'
                                        */
  real32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S17>/Constant'
                                        */
  real32_T ObjSource_Value;            /* Computed Parameter: ObjSource_Value
                                        * Referenced by: '<Root>/ObjSource'
                                        */
  real32_T Switch_Threshold_l;         /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<Root>/Switch'
                                        */
  real32_T Constant3_Value_b;          /* Computed Parameter: Constant3_Value_b
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real32_T uDLookupTable_tableData_b[6];/* Computed Parameter: uDLookupTable_tableData_b
                                         * Referenced by: '<S112>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_d[6];/* Computed Parameter: uDLookupTable_bp01Data_d
                                        * Referenced by: '<S112>/1-D Lookup Table'
                                        */
  real32_T Constant1_Value_e1;         /* Computed Parameter: Constant1_Value_e1
                                        * Referenced by: '<S112>/Constant1'
                                        */
  real32_T Constant3_Value_k;          /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S112>/Constant3'
                                        */
  real32_T Memory_InitialCondition_go; /* Computed Parameter: Memory_InitialCondition_go
                                        * Referenced by: '<S112>/Memory'
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
  real32_T Merge3_InitialOutput_m;     /* Computed Parameter: Merge3_InitialOutput_m
                                        * Referenced by: '<S11>/Merge3'
                                        */
  real32_T Merge_InitialOutput_m;      /* Computed Parameter: Merge_InitialOutput_m
                                        * Referenced by: '<S11>/Merge'
                                        */
  real32_T Merge1_InitialOutput_f;     /* Computed Parameter: Merge1_InitialOutput_f
                                        * Referenced by: '<S11>/Merge1'
                                        */
  real32_T Constant_Value_m3;          /* Computed Parameter: Constant_Value_m3
                                        * Referenced by: '<S16>/Constant'
                                        */
  real32_T Memory_InitialCondition_a;  /* Computed Parameter: Memory_InitialCondition_a
                                        * Referenced by: '<S1>/Memory'
                                        */
  real32_T Constant_Value_f3;          /* Computed Parameter: Constant_Value_f3
                                        * Referenced by: '<S14>/Constant'
                                        */
  real32_T Constant_Value_dn;          /* Computed Parameter: Constant_Value_dn
                                        * Referenced by: '<S18>/Constant'
                                        */
  real32_T vSet_Value;                 /* Computed Parameter: vSet_Value
                                        * Referenced by: '<S16>/vSet'
                                        */
  real32_T Gain_Gain_ki;               /* Computed Parameter: Gain_Gain_ki
                                        * Referenced by: '<Root>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<Root>/Gain1'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S84>/Delay1'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S84>/Delay'
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
                                        * Referenced by: '<S90>/Constant'
                                        */
  boolean_T Constant_Value_n5;         /* Computed Parameter: Constant_Value_n5
                                        * Referenced by: '<S110>/Constant'
                                        */
  boolean_T Constant6_Value_l;         /* Computed Parameter: Constant6_Value_l
                                        * Referenced by: '<S111>/Constant6'
                                        */
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S3>/Out1'
                                        */
  boolean_T Zero_Value[40];            /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S3>/Zero'
                                        */
  boolean_T Delay1_InitialCondition;   /* Computed Parameter: Delay1_InitialCondition
                                        * Referenced by: '<S84>/Delay1'
                                        */
  boolean_T Constant1_Value_hx;        /* Computed Parameter: Constant1_Value_hx
                                        * Referenced by: '<S84>/Constant1'
                                        */
  boolean_T Merge6_InitialOutput;      /* Computed Parameter: Merge6_InitialOutput
                                        * Referenced by: '<S84>/Merge6'
                                        */
  boolean_T Memory_InitialCondition_aw;/* Computed Parameter: Memory_InitialCondition_aw
                                        * Referenced by: '<S127>/Memory'
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
  P_CoreSubsys_AccTarSel_g_T CoreSubsys_p;/* '<S6>/For Each Subsystem' */
  P_CoreSubsys_AccTarSel_T CoreSubsys; /* '<S5>/For Each Subsystem' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem2_f;/* '<S27>/If Action Subsystem2' */
  P_ObjNoStop_AccTarSel_T ObjStopped;  /* '<S52>/ObjStopped' */
  P_ObjNoStop_AccTarSel_T ObjNoStop;   /* '<S52>/ObjNoStop' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem1_h;/* '<S39>/If Action Subsystem1' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem2_l;/* '<S42>/If Action Subsystem2' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem3;/* '<S21>/If Action Subsystem3' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem_m;/* '<S21>/If Action Subsystem' */
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
                                        * Referenced by: '<S94>/P_vyCutInThres'
                                        */
extern real32_T rtP_P_aFOCApproachIntpAcitve;/* Variable: P_aFOCApproachIntpAcitve
                                              * Referenced by:
                                              *   '<S24>/P_aFOCApproachIntpAcitve'
                                              *   '<S66>/P_aFOCApproachIntpAcitve'
                                              */
extern real32_T rtP_P_aFOCApproachIntpEnsure;/* Variable: P_aFOCApproachIntpEnsure
                                              * Referenced by:
                                              *   '<S24>/P_aFOCApproachIntpEnsure'
                                              *   '<S66>/P_aFOCApproachIntpEnsure'
                                              */
extern real32_T rtP_P_adtMaxBDC;       /* Variable: P_adtMaxBDC
                                        * Referenced by: '<S48>/P_adtMaxBDC'
                                        */
extern real32_T rtP_P_dAimMin;         /* Variable: P_dAimMin
                                        * Referenced by:
                                        *   '<S23>/P_dAimMin'
                                        *   '<S27>/P_dAimMin'
                                        */
extern real32_T rtP_P_dObjDrvOffMax;   /* Variable: P_dObjDrvOffMax
                                        * Referenced by: '<S9>/P_dObjDrvOffMax'
                                        */
extern real32_T rtP_P_dObjDrvOffMin;   /* Variable: P_dObjDrvOffMin
                                        * Referenced by: '<S9>/P_dObjDrvOffMin'
                                        */
extern real32_T rtP_P_dObjLowHystDecToStop;/* Variable: P_dObjLowHystDecToStop
                                            * Referenced by: '<S28>/P_dObjLowHystDecToStop'
                                            */
extern real32_T rtP_P_dObjUpperHystDecToStop;/* Variable: P_dObjUpperHystDecToStop
                                              * Referenced by: '<S28>/P_dObjUpperHystDecToStop'
                                              */
extern real32_T rtP_P_dResMax;         /* Variable: P_dResMax
                                        * Referenced by: '<S53>/P_dResMax'
                                        */
extern real32_T rtP_P_dStandStill;     /* Variable: P_dStandStill
                                        * Referenced by:
                                        *   '<S53>/P_dStandStill'
                                        *   '<S62>/P_dStandStill'
                                        */
extern real32_T rtP_P_dStandStillMin;  /* Variable: P_dStandStillMin
                                        * Referenced by: '<S62>/P_dStandStillMin'
                                        */
extern real32_T rtP_P_dvarYMax4PO;     /* Variable: P_dvarYMax4PO
                                        * Referenced by: '<S106>/P_dvarYMax4PO'
                                        */
extern real32_T rtP_P_dyCutInThres;    /* Variable: P_dyCutInThres
                                        * Referenced by: '<S94>/P_dyCutInThres'
                                        */
extern real32_T rtP_P_facBDCInit;      /* Variable: P_facBDCInit
                                        * Referenced by: '<S62>/P_facBDCInit'
                                        */
extern real32_T rtP_P_facBDCIterCalc;  /* Variable: P_facBDCIterCalc
                                        * Referenced by:
                                        *   '<S64>/P_facBDCIterCalc'
                                        *   '<S65>/P_facBDCIterCalc'
                                        */
extern real32_T rtP_P_facFOCNegDiff;   /* Variable: P_facFOCNegDiff
                                        * Referenced by:
                                        *   '<S73>/P_facFOCNegDiff'
                                        *   '<S74>/P_facFOCNegDiff'
                                        *   '<S75>/P_facFOCNegDiff'
                                        */
extern real32_T rtP_P_facFOCPosDiff;   /* Variable: P_facFOCPosDiff
                                        * Referenced by:
                                        *   '<S73>/P_facFOCPosDiff'
                                        *   '<S76>/P_facFOCPosDiff'
                                        *   '<S77>/P_facFOCPosDiff'
                                        */
extern real32_T rtP_P_kapHystThres;    /* Variable: P_kapHystThres
                                        * Referenced by: '<S112>/P_kapHystThres'
                                        */
extern real32_T rtP_P_plausMin4PO;     /* Variable: P_plausMin4PO
                                        * Referenced by: '<S109>/P_plausMin4PO'
                                        */
extern real32_T rtP_P_probExistMin4PO; /* Variable: P_probExistMin4PO
                                        * Referenced by: '<S106>/P_probExistMin4PO'
                                        */
extern real32_T rtP_P_tBDCStartFilt;   /* Variable: P_tBDCStartFilt
                                        * Referenced by: '<S48>/P_tBDCStartFilt'
                                        */
extern real32_T rtP_P_tCurvFilt;       /* Variable: P_tCurvFilt
                                        * Referenced by: '<S112>/P_tCurvFilt'
                                        */
extern real32_T rtP_P_tCutInFilt;      /* Variable: P_tCutInFilt
                                        * Referenced by: '<S94>/P_tCutInFilt'
                                        */
extern real32_T rtP_P_tFOCStationaryFast;/* Variable: P_tFOCStationaryFast
                                          * Referenced by: '<S27>/P_tFOCStationaryFast'
                                          */
extern real32_T rtP_P_tFOCStationarySlow;/* Variable: P_tFOCStationarySlow
                                          * Referenced by: '<S27>/P_tFOCStationarySlow'
                                          */
extern real32_T rtP_P_tFiltAxAbsPO;    /* Variable: P_tFiltAxAbsPO
                                        * Referenced by: '<S129>/Constant1'
                                        */
extern real32_T rtP_P_tFiltVxAxPOFast; /* Variable: P_tFiltVxAxPOFast
                                        * Referenced by: '<S129>/P_tFiltVxAxPOFast'
                                        */
extern real32_T rtP_P_tFiltVxAxPOSlow; /* Variable: P_tFiltVxAxPOSlow
                                        * Referenced by: '<S129>/P_tFiltVxAxPOSlow'
                                        */
extern real32_T rtP_P_tMinDrvPhase;    /* Variable: P_tMinDrvPhase
                                        * Referenced by: '<Root>/P_tMinDrvPhase'
                                        */
extern real32_T rtP_P_tRollingFilt;    /* Variable: P_tRollingFilt
                                        * Referenced by: '<S45>/P_tRollingFilt'
                                        */
extern real32_T rtP_P_tRollingFinFilt; /* Variable: P_tRollingFinFilt
                                        * Referenced by: '<S45>/P_tRollingFinFilt'
                                        */
extern real32_T rtP_P_tSSCNeg;         /* Variable: P_tSSCNeg
                                        * Referenced by: '<S16>/P_tSSCNeg'
                                        */
extern real32_T rtP_P_tSSCPos;         /* Variable: P_tSSCPos
                                        * Referenced by: '<S16>/P_tSSCPos'
                                        */
extern real32_T rtP_P_tTimeGapSet;     /* Variable: P_tTimeGapSet
                                        * Referenced by: '<S23>/P_tTimeGapSet'
                                        */
extern real32_T rtP_P_tToStop;         /* Variable: P_tToStop
                                        * Referenced by: '<S57>/P_tToStop'
                                        */
extern real32_T rtP_P_tToStopInBDC;    /* Variable: P_tToStopInBDC
                                        * Referenced by: '<S57>/P_tToStopInBDC'
                                        */
extern real32_T rtP_P_tToStopTrig;     /* Variable: P_tToStopTrig
                                        * Referenced by: '<S52>/P_tToStop'
                                        */
extern real32_T rtP_P_vEgoDecToStop;   /* Variable: P_vEgoDecToStop
                                        * Referenced by: '<S28>/P_vEgoDecToStop'
                                        */
extern real32_T rtP_P_vEgoLowBDC;      /* Variable: P_vEgoLowBDC
                                        * Referenced by: '<S40>/P_vEgoLowBDC'
                                        */
extern real32_T rtP_P_vFOCNegDiff;     /* Variable: P_vFOCNegDiff
                                        * Referenced by:
                                        *   '<S73>/P_vFOCNegDiff'
                                        *   '<S74>/P_vFOCNegDiff'
                                        */
extern real32_T rtP_P_vFOCPosDiff;     /* Variable: P_vFOCPosDiff
                                        * Referenced by:
                                        *   '<S73>/P_vFOCPosDiff'
                                        *   '<S77>/P_vFOCPosDiff'
                                        */
extern real32_T rtP_P_vFOCStationaryFast;/* Variable: P_vFOCStationaryFast
                                          * Referenced by: '<S27>/P_vFOCStationaryFast'
                                          */
extern real32_T rtP_P_vFOCStationarySlow;/* Variable: P_vFOCStationarySlow
                                          * Referenced by: '<S27>/P_vFOCStationarySlow'
                                          */
extern real32_T rtP_P_vObjDrvOff;      /* Variable: P_vObjDrvOff
                                        * Referenced by: '<S9>/P_vObjDrvOff'
                                        */
extern real32_T rtP_P_vObjLowHystDecToStop;/* Variable: P_vObjLowHystDecToStop
                                            * Referenced by: '<S28>/P_vObjLowHystDecToStop'
                                            */
extern real32_T rtP_P_vObjNoStop;      /* Variable: P_vObjNoStop
                                        * Referenced by: '<S52>/P_vObjNoStop'
                                        */
extern real32_T rtP_P_vObjReCalc;      /* Variable: P_vObjReCalc
                                        * Referenced by: '<S53>/P_vObjReCalc'
                                        */
extern real32_T rtP_P_vObjStop;        /* Variable: P_vObjStop
                                        * Referenced by: '<S52>/P_vObjStop'
                                        */
extern real32_T rtP_P_vObjUpperHystDecToStop;/* Variable: P_vObjUpperHystDecToStop
                                              * Referenced by: '<S28>/P_vObjUpperHystDecToStop'
                                              */
extern real32_T rtP_P_vStandStill;     /* Variable: P_vStandStill
                                        * Referenced by: '<Root>/P_vStandStill'
                                        */
extern real32_T rtP_P_vStandStillHyst; /* Variable: P_vStandStillHyst
                                        * Referenced by: '<Root>/P_vStandStillHyst'
                                        */
extern boolean_T rtP_P_CutInEnable;    /* Variable: P_CutInEnable
                                        * Referenced by: '<S94>/P_CutInEnable'
                                        */
extern boolean_T rtP_P_PlausIntegDisable;/* Variable: P_PlausIntegDisable
                                          * Referenced by: '<S88>/Constant4'
                                          */
extern boolean_T rtP_P_StandObjEnable; /* Variable: P_StandObjEnable
                                        * Referenced by: '<S108>/P_StandObjEnable'
                                        */
extern void AccTarSel_Init(void);
extern void AccTarSel_Reset(void);
extern void AccTarSel_Start(void);
extern void AccTarSel_Update(ATS_PO_ST *rty_ATS_Po_st);
extern void AccTarSel(const COM_VEHBUS_ST *rtu_CANInput, const FUS_OBJ_OUTPUT_ST
                      *rtu_ObjList, const VSI_VEHSTATE_ST *rtu_VSI_VehState_st,
                      const SYS_INFO_ST *rtu_SYS_Info_st, const Radar410_Info_ST
                      *rtu_ObjRadarList, const VLC_LGTCMD_ST *rtu_VLC_Cmd_K1,
                      ACC_LGTCTRL_ST *rty_ACC_LgtCtrl_st, ATS_PO_ST
                      *rty_ATS_Po_st);

/* Model reference registration function */
extern void AccTarSel_initialize(const char_T **rt_errorStatus);

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

extern void AccTarSel_IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1,
  real32_T *rty_Out2, P_IfActionSubsystem_AccTarSel_T *localP);
extern void AccTarSel_IfActionSubsystem2(real32_T *rty_Out1,
  P_IfActionSubsystem2_AccTarSe_T *localP);
extern void AccTarSel_IfActionSubsystem3(real32_T rtu_In1, real32_T *rty_Out1);
extern void AccTarSel_ObjNoStop(real32_T *rty_tToStop, real32_T *rty_dToStop,
  P_ObjNoStop_AccTarSel_T *localP);
extern void AccTarSel_IfActionSubsystem1(real32_T rtu_vRelAim, real32_T rtu_vRel,
  real32_T *rty_Out1);
extern void AccTarSel_IfActionSubsystem_d(boolean_T rtu_In1, boolean_T *rty_Out1);

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
 * '<S66>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem'
 * '<S67>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem'
 * '<S68>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem1'
 * '<S69>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem2'
 * '<S70>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem1'
 * '<S71>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem2'
 * '<S72>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem4'
 * '<S73>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal'
 * '<S74>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem'
 * '<S75>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem4'
 * '<S76>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem5'
 * '<S77>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem6'
 * '<S78>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem'
 * '<S79>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem1'
 * '<S80>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem2'
 * '<S81>'  : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem'
 * '<S82>'  : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem1'
 * '<S83>'  : 'AccTarSel/ACC_Target_Selection/Subsystem'
 * '<S84>'  : 'AccTarSel/ACC_Target_Selection/TargetSel'
 * '<S85>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc'
 * '<S86>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc'
 * '<S87>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation'
 * '<S88>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc'
 * '<S89>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc'
 * '<S90>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck'
 * '<S91>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/If Action Subsystem'
 * '<S92>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem'
 * '<S93>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/If Action Subsystem'
 * '<S94>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem'
 * '<S95>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem'
 * '<S96>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem1'
 * '<S97>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/LPFilter'
 * '<S98>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/DistanceToTraj'
 * '<S99>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/If Action Subsystem'
 * '<S100>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem'
 * '<S101>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem1'
 * '<S102>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/If Action Subsystem'
 * '<S103>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/Subsystem'
 * '<S104>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/If Action Subsystem'
 * '<S105>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem'
 * '<S106>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckExistence'
 * '<S107>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckFOV'
 * '<S108>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckMotSts'
 * '<S109>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckPlaus'
 * '<S110>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem'
 * '<S111>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem1'
 * '<S112>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt'
 * '<S113>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem'
 * '<S114>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem1'
 * '<S115>' : 'AccTarSel/ObjAdapter/For Each Subsystem'
 * '<S116>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcDx'
 * '<S117>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcHist'
 * '<S118>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem'
 * '<S119>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcDx'
 * '<S120>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcMotionSts'
 * '<S121>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcType'
 * '<S122>' : 'AccTarSel/RTI Data/RTI Data Store'
 * '<S123>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store'
 * '<S124>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S125>' : 'AccTarSel/Subsystem1/If Action Subsystem'
 * '<S126>' : 'AccTarSel/Subsystem1/If Action Subsystem1'
 * '<S127>' : 'AccTarSel/Subsystem2/calcOverride'
 * '<S128>' : 'AccTarSel/Target_PreProcess/If Action Subsystem'
 * '<S129>' : 'AccTarSel/Target_PreProcess/preFilt'
 * '<S130>' : 'AccTarSel/Target_PreProcess/preFilt/axAbsFilt'
 * '<S131>' : 'AccTarSel/Target_PreProcess/preFilt/axFilt'
 * '<S132>' : 'AccTarSel/Target_PreProcess/preFilt/dxFilt'
 * '<S133>' : 'AccTarSel/Target_PreProcess/preFilt/vxFilt'
 */
#endif                                 /* RTW_HEADER_AccTarSel_h_ */
