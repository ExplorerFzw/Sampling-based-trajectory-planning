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

/* Block signals for system '<S6>/For Each Subsystem' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  OBJDATA_ST BusCreator;               /* '<S127>/Bus Creator' */
  real32_T vx;                         /* '<S127>/Add' */
  real32_T ax;                         /* '<S127>/Add1' */
  real32_T Gain;                       /* '<S128>/Gain' */
  real32_T Add;                        /* '<S128>/Add' */
  real32_T dx;                         /* '<S128>/Max' */
  real32_T dy;                         /* '<S127>/Data Type Conversion2' */
  real32_T vy;                         /* '<S127>/Data Type Conversion3' */
  real32_T ay;                         /* '<S127>/Data Type Conversion5' */
  real32_T MotionSts;                  /* '<S127>/Data Type Conversion6' */
  real32_T Type;                       /* '<S127>/Data Type Conversion7' */
  real32_T ID;                         /* '<S127>/Data Type Conversion8' */
  boolean_T Hist;                      /* '<S129>/Relational Operator' */
  boolean_T Valid;                     /* '<S127>/Data Type Conversion' */
} B_CoreSubsys_AccTarSel_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S7>/For Each Subsystem' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  OBJDATA_ST BusCreator;               /* '<S130>/Bus Creator' */
  real32_T Add;                        /* '<S131>/Add' */
  real32_T dx;                         /* '<S131>/Max' */
  real32_T dy;                         /* '<S130>/Data Type Conversion2' */
  real32_T vx;                         /* '<S130>/Data Type Conversion1' */
  real32_T vy;                         /* '<S130>/Data Type Conversion3' */
  real32_T ax;                         /* '<S130>/Data Type Conversion4' */
  real32_T uDLookupTable;              /* '<S132>/1-D Lookup Table' */
  real32_T MotionSts;                  /* '<S130>/Data Type Conversion6' */
  real32_T uDLookupTable_o;            /* '<S133>/1-D Lookup Table' */
  real32_T Type;                       /* '<S130>/Data Type Conversion7' */
  real32_T ID;                         /* '<S130>/Data Type Conversion8' */
  boolean_T DataTypeConversion9;       /* '<S130>/Data Type Conversion9' */
  boolean_T Valid;                     /* '<S130>/Data Type Conversion' */
} B_CoreSubsys_AccTarSel_c_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'AccTarSel' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  FUS_OBJDATA_ST BusCreator;           /* '<S7>/Bus Creator' */
  FUS_OBJDATA_ST BusCreator_n;         /* '<S6>/Bus Creator' */
  FUS_OBJDATA_ST Switch;               /* '<Root>/Switch' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st;/* '<Root>/Memory' */
  ATS_INTERNAL_OBJINFO_ST ATS_Internal_ObjInfo_st_f;/* '<Root>/Bus Creator' */
  Obj_Data VectorConcatenate[40];      /* '<S7>/Vector Concatenate' */
  OBJDATA_ST Selector;                 /* '<S3>/Selector' */
  ATS_PO_ST Memory1;                   /* '<Root>/Memory1' */
  ATS_PO_ST BusCreator_o;              /* '<S92>/Bus Creator' */
  ATS_OBJINFO_ST Selector_k;           /* '<Root>/Selector' */
  ATS_OBJINFO_ST Selector1;            /* '<Root>/Selector1' */
  ATS_OBJINFO_ST Selector1_c;          /* '<S3>/Selector1' */
  ATS_OBJINFO_ST Assignment1[40];      /* '<S3>/Assignment1' */
  ATS_OBJINFO_ST BusCreator_p;         /* '<S93>/Bus Creator' */
  NET_DRVACTION_ST BusCreator_m;       /* '<S11>/Bus Creator' */
  AST_INFO_ST AST_Info_st;             /* '<Root>/ACC_State_Machine1' */
  real32_T DataTypeConversion11;       /* '<S11>/Data Type Conversion11' */
  real32_T Abs;                        /* '<S124>/Abs' */
  real32_T uDLookupTable;              /* '<S124>/1-D Lookup Table' */
  real32_T Merge;                      /* '<S124>/Merge' */
  real32_T Divide;                     /* '<S124>/Divide' */
  real32_T Multiply;                   /* '<S124>/Multiply' */
  real32_T Add;                        /* '<S124>/Add' */
  real32_T Memory;                     /* '<S124>/Memory' */
  real32_T Multiply1;                  /* '<S124>/Multiply1' */
  real32_T Add1;                       /* '<S124>/Add1' */
  real32_T b;                          /* '<S5>/Multiply' */
  real32_T dx;
  real32_T vx;
  real32_T ax;
  real32_T PosTime;                    /* '<S12>/Memory' */
  real32_T NegTime;                    /* '<S12>/Memory' */
  real32_T dx_a;                       /* '<S12>/Merge3' */
  real32_T vx_m;                       /* '<S12>/Merge' */
  real32_T ax_p;                       /* '<S12>/Merge1' */
  real32_T axAbs;                      /* '<S12>/Merge2' */
  real32_T vAbsObj;                    /* '<S10>/Add' */
  real32_T vDiff;                      /* '<S17>/Add' */
  real32_T tSSC;                       /* '<S17>/Merge' */
  real32_T aSSC;                       /* '<S17>/Divide' */
  real32_T Memory_a;                   /* '<S1>/Memory' */
  real32_T Memory1_g;                  /* '<S4>/Memory1' */
  real32_T Merge_n;                    /* '<S4>/Merge' */
  real32_T uDLookupTable_j;            /* '<S4>/1-D Lookup Table' */
  real32_T Merge_j;                    /* '<S16>/Merge' */
  real32_T Min;                        /* '<S14>/Min' */
  real32_T Max;                        /* '<S13>/Max' */
  real32_T Max1;                       /* '<S13>/Max1' */
  real32_T uDLookupTable_p;            /* '<S15>/1-D Lookup Table' */
  real32_T Abs_j;                      /* '<S15>/Abs' */
  real32_T Abs1;                       /* '<S15>/Abs1' */
  real32_T Max_b;                      /* '<S15>/Max' */
  real32_T Divide_d;                   /* '<S15>/Divide' */
  real32_T Sqrt;                       /* '<S15>/Sqrt' */
  real32_T Divide1;                    /* '<S15>/Divide1' */
  real32_T vSet;                       /* '<S17>/vSet' */
  real32_T NegTime_e;                  /* '<S12>/NegTime' */
  real32_T PosTime_p;                  /* '<S12>/PosTime' */
  real32_T ax_n;                       /* '<S140>/ax' */
  real32_T Abs_i;                      /* '<S141>/Abs' */
  real32_T axAbsRaw;                   /* '<S141>/axAbsRaw' */
  real32_T TmpSignalConversionAtLookupTabl[2];
  real32_T TmpSignalConversionAtLookupTa_l[2];
  real32_T LookupTableDynamic1;        /* '<S141>/Lookup Table Dynamic1' */
  real32_T Max_e;                      /* '<S146>/Max' */
  real32_T filtFactor;                 /* '<S146>/Divide' */
  real32_T Multiply_p;                 /* '<S146>/Multiply' */
  real32_T Add_l;                      /* '<S146>/Add' */
  real32_T Multiply1_k;                /* '<S146>/Multiply1' */
  real32_T Add1_g;                     /* '<S146>/Add1' */
  real32_T axAbsFilt1st;               /* '<S141>/axAbsFilt1st' */
  real32_T axAbsDelta;                 /* '<S141>/axAbsDelta' */
  real32_T Merge_f;                    /* '<S141>/Merge' */
  real32_T TmpSignalConversionAtLookupTa_j[2];
  real32_T TmpSignalConversionAtLookupTa_g[2];
  real32_T LookupTableDynamic;         /* '<S141>/Lookup Table Dynamic' */
  real32_T Merge1;                     /* '<S141>/Merge1' */
  real32_T TmpSignalConversionAtLookupTa_k[2];
  real32_T TmpSignalConversionAtLookupTa_i[2];
  real32_T LookupTableDynamic2;        /* '<S141>/Lookup Table Dynamic2' */
  real32_T Max1_f;                     /* '<S141>/Max1' */
  real32_T Switch_l;                   /* '<S141>/Switch' */
  real32_T Switch2;                    /* '<S141>/Switch2' */
  real32_T Switch1;                    /* '<S141>/Switch1' */
  real32_T Max_f;                      /* '<S145>/Max' */
  real32_T filtFactor_f;               /* '<S145>/Divide' */
  real32_T Add_p;                      /* '<S145>/Add' */
  real32_T Multiply_k;                 /* '<S145>/Multiply' */
  real32_T Multiply1_j;                /* '<S145>/Multiply1' */
  real32_T Max_bm;                     /* '<S147>/Max' */
  real32_T filtFactor_p;               /* '<S147>/Divide' */
  real32_T Add_j;                      /* '<S147>/Add' */
  real32_T Multiply_g;                 /* '<S147>/Multiply' */
  real32_T Multiply1_g;                /* '<S147>/Multiply1' */
  real32_T Max_d;                      /* '<S148>/Max' */
  real32_T filtFactor_c;               /* '<S148>/Divide' */
  real32_T Add_k;                      /* '<S148>/Add' */
  real32_T Multiply_ps;                /* '<S148>/Multiply' */
  real32_T Multiply1_n;                /* '<S148>/Multiply1' */
  real32_T axTrackTime[2];             /* '<S142>/axTrackTime' */
  real32_T Add_c;                      /* '<S144>/Add' */
  real32_T Add_kb;                     /* '<S143>/Add' */
  real32_T Add_pn;                     /* '<S121>/Add' */
  real32_T Add_e;                      /* '<S120>/Add' */
  real32_T Delay;                      /* '<S92>/Delay' */
  real32_T DataTypeConversion;         /* '<S92>/Data Type Conversion' */
  real32_T vx_o;                       /* '<S92>/Merge2' */
  real32_T vxAbs_c;                    /* '<S92>/Add' */
  real32_T ax_a;                       /* '<S92>/Merge4' */
  real32_T axAbs_e;                    /* '<S92>/Add1' */
  real32_T Index;                      /* '<S92>/Merge5' */
  real32_T dx_i;                       /* '<S92>/Merge' */
  real32_T dy;                         /* '<S92>/Merge1' */
  real32_T vy;                         /* '<S92>/Merge3' */
  real32_T Type;                       /* '<S92>/Merge7' */
  real32_T MotionSts;                  /* '<S92>/Merge8' */
  real32_T dyToTraj;                   /* '<S95>/Merge' */
  real32_T dyCutInPred;                /* '<S94>/Merge1' */
  real32_T Merge2;                     /* '<S94>/Merge2' */
  real32_T Merge_n4;                   /* '<S94>/Merge' */
  real32_T Merge_ns;                   /* '<S97>/Merge' */
  real32_T Multiply_o;                 /* '<S96>/Multiply' */
  real32_T Switch_ls;                  /* '<S96>/Switch' */
  real32_T Add_a;                      /* '<S96>/Add' */
  real32_T Min_c;                      /* '<S96>/Min' */
  real32_T Min1;                       /* '<S96>/Min1' */
  real32_T Switch1_h;                  /* '<S96>/Switch1' */
  real32_T Max_g;                      /* '<S96>/Max' */
  real32_T Merge_k;                    /* '<S96>/Merge' */
  real32_T uDLookupTable_d;            /* '<S115>/1-D Lookup Table' */
  real32_T dyWidthTraj;                /* '<S111>/1-D Lookup Table' */
  real32_T dyToTrajAbs;                /* '<S111>/Abs' */
  real32_T Add_ko;                     /* '<S111>/Add' */
  real32_T Divide_n;                   /* '<S111>/Divide' */
  real32_T Square;                     /* '<S106>/Square' */
  real32_T Multiply_p3;                /* '<S106>/Multiply' */
  real32_T Square1;                    /* '<S106>/Square1' */
  real32_T Multiply1_d;                /* '<S106>/Multiply1' */
  real32_T Multiply2;                  /* '<S106>/Multiply2' */
  real32_T Add_ca;                     /* '<S106>/Add' */
  real32_T Abs_b;                      /* '<S102>/Abs' */
  real32_T Abs1_p;                     /* '<S102>/Abs1' */
  real32_T Multiply_c;                 /* '<S102>/Multiply' */
  real32_T Max_c;                      /* '<S105>/Max' */
  real32_T filtFactor_b;               /* '<S105>/Divide' */
  real32_T Add_n;                      /* '<S105>/Add' */
  real32_T probCutIn;                  /* '<S102>/Merge' */
  real32_T Multiply_m;                 /* '<S105>/Multiply' */
  real32_T Multiply1_i;                /* '<S105>/Multiply1' */
  real32_T Abs1_c;                     /* '<S103>/Abs1' */
  real32_T tPred;                      /* '<S103>/1-D Lookup Table' */
  real32_T Multiply_n;                 /* '<S103>/Multiply' */
  real32_T Add_kt;                     /* '<S103>/Add' */
  real32_T Max_gs;                     /* '<S103>/Max' */
  real32_T Max1_m;                     /* '<S103>/Max1' */
  real32_T dyPred;                     /* '<S103>/Switch' */
  real32_T Abs_iz;                     /* '<S103>/Abs' */
  real32_T vAbsObj_e;                  /* '<S22>/Add' */
  real32_T Multiply_j;                 /* '<S36>/Multiply' */
  real32_T Add_m;                      /* '<S36>/Add' */
  real32_T axAbs_h;
  real32_T Min1_l;                     /* '<S37>/Min1' */
  real32_T Divide_p;                   /* '<S37>/Divide' */
  real32_T Abs_f;                      /* '<S37>/Abs' */
  real32_T Min_p;                      /* '<S37>/Min' */
  real32_T Switch_p;                   /* '<S37>/Switch' */
  real32_T Switch1_d;                  /* '<S37>/Switch1' */
  real32_T Gain;                       /* '<S33>/Gain' */
  real32_T Multiply_h;                 /* '<S24>/Multiply' */
  real32_T Max_h;                      /* '<S24>/Max' */
  real32_T Min_g;                      /* '<S24>/Min' */
  real32_T Gain_i;                     /* '<S24>/Gain' */
  real32_T Abs_p;                      /* '<S24>/Abs' */
  real32_T Add_o;                      /* '<S24>/Add' */
  real32_T Gain2;                      /* '<S24>/Gain2' */
  real32_T Gain1;                      /* '<S24>/Gain1' */
  real32_T Add1_o;                     /* '<S24>/Add1' */
  real32_T Switch_pn;                  /* '<S24>/Switch' */
  real32_T Max_d4;                     /* '<S72>/Max' */
  real32_T filtFactor_pj;              /* '<S72>/Divide' */
  real32_T Multiply_mk;                /* '<S72>/Multiply' */
  real32_T Add_pz;                     /* '<S72>/Add' */
  real32_T Memory_p;                   /* '<S21>/Memory' */
  real32_T Multiply1_ge;               /* '<S72>/Multiply1' */
  real32_T Add1_c;                     /* '<S72>/Add1' */
  real32_T Switch1_p;                  /* '<S24>/Switch1' */
  real32_T TmpSignalConversionAtdImmerseIn[2];
  real32_T kImsLowSpd;                 /* '<S33>/kImsLowSpd' */
  real32_T kImsHighSpd;                /* '<S33>/kImsHighSpd' */
  real32_T Min1_d;                     /* '<S33>/Min1' */
  real32_T TmpSignalConversionAtdImmerse_e[2];
  real32_T dImmerse;                   /* '<S33>/dImmerse' */
  real32_T Min_d;                      /* '<S33>/Min' */
  real32_T Add1_j;                     /* '<S33>/Add1' */
  real32_T Max_a;                      /* '<S38>/Max' */
  real32_T filtFactor_o;               /* '<S38>/Divide' */
  real32_T Multiply_e;                 /* '<S38>/Multiply' */
  real32_T Add_l0;                     /* '<S38>/Add' */
  real32_T Memory_d;                   /* '<S22>/Memory' */
  real32_T Multiply1_h;                /* '<S38>/Multiply1' */
  real32_T Add1_oc;                    /* '<S38>/Add1' */
  real32_T dSlowDown;                  /* '<S33>/Switch' */
  real32_T Merge_h;                    /* '<S34>/Merge' */
  real32_T Square1_o;                  /* '<S35>/Square1' */
  real32_T Square_a;                   /* '<S35>/Square' */
  real32_T Min_o;                      /* '<S35>/Min' */
  real32_T Abs_o;                      /* '<S35>/Abs' */
  real32_T Multiply_on;                /* '<S35>/Multiply' */
  real32_T Divide_o;                   /* '<S35>/Divide' */
  real32_T Add_g;                      /* '<S35>/Add' */
  real32_T Multiply1_e;                /* '<S35>/Multiply1' */
  real32_T Divide1_m;                  /* '<S35>/Divide1' */
  real32_T Gain_m;                     /* '<S35>/Gain' */
  real32_T Merge1_j;                   /* '<S34>/Merge1' */
  real32_T aApproach;                  /* '<S22>/Merge' */
  real32_T Case;                       /* '<S22>/Merge1' */
  real32_T vAbsObj_b;                  /* '<S46>/Add' */
  real32_T axAbs_h3;
  real32_T tToStop;                    /* '<S58>/Merge' */
  real32_T Memory_i;                   /* '<S23>/Memory' */
  real32_T Switch_e;                   /* '<S63>/Switch' */
  real32_T dObjToStop;                 /* '<S58>/Merge1' */
  real32_T dx_l;
  real32_T Square_b;                   /* '<S59>/Square' */
  real32_T Min_m;                      /* '<S59>/Min' */
  real32_T Multiply_cv;                /* '<S59>/Multiply' */
  real32_T dEgoToStop;                 /* '<S59>/Divide2' */
  real32_T Abs_jv;                     /* '<S59>/Abs' */
  real32_T dRes;                       /* '<S59>/Add2' */
  real32_T Memory2;                    /* '<S23>/Memory2' */
  real32_T T30;                        /* '<S23>/Memory1' */
  real32_T aMax;                       /* '<S23>/Memory1' */
  real32_T T;                          /* '<S23>/Memory1' */
  real32_T adt1;                       /* '<S23>/Memory1' */
  real32_T adt2;                       /* '<S23>/Memory1' */
  real32_T a0;                         /* '<S23>/Memory1' */
  real32_T a0Raw;                      /* '<S23>/Memory1' */
  real32_T Memory_e;                   /* '<S47>/Memory' */
  real32_T a0Raw_o;                    /* '<S47>/Memory1' */
  real32_T a0_d;                       /* '<S47>/Memory1' */
  real32_T adt2_c;                     /* '<S47>/Memory1' */
  real32_T adt1_m;                     /* '<S47>/Memory1' */
  real32_T T30_p;                      /* '<S47>/Memory1' */
  real32_T T_b;                        /* '<S47>/Memory1' */
  real32_T aMax_i;                     /* '<S47>/Memory1' */
  real32_T aMax_o;                     /* '<S47>/Merge' */
  real32_T T_h;                        /* '<S47>/Merge' */
  real32_T T30_o;                      /* '<S47>/Merge' */
  real32_T adt1_h;                     /* '<S47>/Merge' */
  real32_T adt2_b;                     /* '<S47>/Merge' */
  real32_T a0_j;                       /* '<S47>/Merge' */
  real32_T a0Raw_h;                    /* '<S47>/Merge' */
  real32_T Merge_d;                    /* '<S45>/Merge' */
  real32_T TmpSignalConversionAtLookupTa_h[2];
  real32_T TmpSignalConversionAtLookupT_ly[2];
  real32_T LookupTableDynamic1_j;      /* '<S25>/Lookup Table Dynamic1' */
  real32_T Max_co;                     /* '<S73>/Max' */
  real32_T filtFactor_j;               /* '<S73>/Divide' */
  real32_T Add_nk;                     /* '<S73>/Add' */
  real32_T TmpSignalConversionAtLookupT_j3[2];
  real32_T TmpSignalConversionAtLookupTa_f[2];
  real32_T Multiply3[2];               /* '<S28>/Multiply3' */
  real32_T LookupTableDynamic7;        /* '<S28>/Lookup Table Dynamic7' */
  real32_T TmpSignalConversionAtLookupTa_c[2];
  real32_T LookupTableDynamic6;        /* '<S28>/Lookup Table Dynamic6' */
  real32_T Gain2_m;                    /* '<S28>/Gain2' */
  real32_T TmpSignalConversionAtLookupT_ky[2];
  real32_T TmpSignalConversionAtLookupT_ka[2];
  real32_T LookupTableDynamic4;        /* '<S28>/Lookup Table Dynamic4' */
  real32_T Multiply2_k;                /* '<S28>/Multiply2' */
  real32_T TmpSignalConversionAtLookupT_ip[2];
  real32_T LookupTableDynamic2_f;      /* '<S28>/Lookup Table Dynamic2' */
  real32_T Multiply1_gr;               /* '<S28>/Multiply1' */
  real32_T TmpSignalConversionAtLookupT_jd[4];
  real32_T TmpSignalConversionAtLookupT_jf[2];
  real32_T LookupTableDynamic3;        /* '<S28>/Lookup Table Dynamic3' */
  real32_T Multiply_hn;                /* '<S28>/Multiply' */
  real32_T TmpSignalConversionAtLookupTa_o[2];
  real32_T LookupTableDynamic5;        /* '<S28>/Lookup Table Dynamic5' */
  real32_T Multiply4;                  /* '<S28>/Multiply4' */
  real32_T TmpSignalConversionAtLookupT_gn[4];
  real32_T LookupTableDynamic_p;       /* '<S28>/Lookup Table Dynamic' */
  real32_T Switch_h;                   /* '<S28>/Switch' */
  real32_T Divide_b;                   /* '<S81>/Divide' */
  real32_T dThresNeg;                  /* '<S81>/Min' */
  real32_T dBreakPointNeg;             /* '<S81>/Add1' */
  real32_T Divide1_o;                  /* '<S81>/Divide1' */
  real32_T dBreakPointPos;             /* '<S81>/Add2' */
  real32_T Merge1_l;                   /* '<S81>/Merge1' */
  real32_T Merge2_i;                   /* '<S81>/Merge2' */
  real32_T Merge_de;                   /* '<S28>/Merge' */
  real32_T vDeltaRaw;                  /* '<S28>/Gain' */
  real32_T TmpSignalConversionAtLookupT_hg[2];
  real32_T TmpSignalConversionAtLookup_lyc[2];
  real32_T LookupTableDynamic1_n;      /* '<S28>/Lookup Table Dynamic1' */
  real32_T Divide_h;                   /* '<S28>/Divide' */
  real32_T aStat;                      /* '<S28>/Add' */
  real32_T Min_oe;                     /* '<S25>/Min' */
  real32_T TmpSignalConversionAtLookup_jdp[2];
  real32_T TmpSignalConversionAtLookup_gn2[2];
  real32_T LookupTableDynamic_k;       /* '<S25>/Lookup Table Dynamic' */
  real32_T Multiply_cj;                /* '<S73>/Multiply' */
  real32_T Memory_pe;                  /* '<S25>/Memory' */
  real32_T Multiply1_hs;               /* '<S73>/Multiply1' */
  real32_T Add1_m;                     /* '<S73>/Add1' */
  real32_T aFocMix;                    /* '<S74>/Merge' */
  real32_T Switch_m;                   /* '<S25>/Switch' */
  real32_T vAbsObj_c;                  /* '<S29>/Add' */
  real32_T aConstNegPhase;             /* '<S85>/Multiply' */
  real32_T Add_b;                      /* '<S85>/Add' */
  real32_T Multiply1_dc;               /* '<S85>/Multiply1' */
  real32_T Abs_oh;                     /* '<S85>/Abs' */
  real32_T Square_h;                   /* '<S85>/Square' */
  real32_T Multiply2_g;                /* '<S85>/Multiply2' */
  real32_T Add1_k;                     /* '<S85>/Add1' */
  real32_T vUpper;                     /* '<S85>/Sqrt' */
  real32_T Add_gh;                     /* '<S84>/Add' */
  real32_T Multiply_a;                 /* '<S84>/Multiply' */
  real32_T Add_as;                     /* '<S83>/Add' */
  real32_T Multiply_k4;                /* '<S83>/Multiply' */
  real32_T aConstNegPhase_i;           /* '<S82>/Multiply' */
  real32_T Add_bb;                     /* '<S82>/Add' */
  real32_T Multiply1_f;                /* '<S82>/Multiply1' */
  real32_T Abs_fo;                     /* '<S82>/Abs' */
  real32_T Square_o;                   /* '<S82>/Square' */
  real32_T Multiply2_l;                /* '<S82>/Multiply2' */
  real32_T Add1_i;                     /* '<S82>/Add1' */
  real32_T TmpSignalConversionAtLooku_jdp5[2];
  real32_T TmpSignalConversionAtLooku_gn2p[2];
  real32_T LookupTableDynamic_l;       /* '<S77>/Lookup Table Dynamic' */
  real32_T Gain1_f;                    /* '<S68>/Gain1' */
  real32_T Gain2_p;                    /* '<S68>/Gain2' */
  real32_T Add1_e;                     /* '<S68>/Add1' */
  real32_T Min_j;                      /* '<S68>/Min' */
  real32_T vRef;
  real32_T Square_g;                   /* '<S68>/Square' */
  real32_T Add_h;                      /* '<S68>/Add' */
  real32_T dAimBDC;                    /* '<S68>/Max' */
  real32_T Divide_m;                   /* '<S68>/Divide' */
  real32_T Gain_g;                     /* '<S68>/Gain' */
  real32_T a0_o;                       /* '<S65>/Switch' */
  real32_T Multiply_ky;                /* '<S68>/Multiply' */
  real32_T Multiply1_gw;               /* '<S68>/Multiply1' */
  real32_T Add_i;                      /* '<S67>/Add' */
  real32_T adt1_j;                     /* '<S67>/Divide' */
  real32_T Gain_p;                     /* '<S67>/Gain' */
  real32_T Add1_d;                     /* '<S67>/Add1' */
  real32_T adt2_p;                     /* '<S67>/Divide1' */
  real32_T Memory2_f;                  /* '<S69>/Memory2' */
  real32_T Multiply_hg;                /* '<S70>/Multiply' */
  real32_T Add_p1;                     /* '<S70>/Add' */
  real32_T Memory_eb;                  /* '<S69>/Memory' */
  real32_T Multiply1_k2;               /* '<S70>/Multiply1' */
  real32_T Add1_k4;                    /* '<S70>/Add1' */
  real32_T Switch_hx;                  /* '<S70>/Switch' */
  real32_T Add_d;                      /* '<S69>/Add' */
  real32_T Memory3;                    /* '<S69>/Memory3' */
  real32_T Multiply_i;                 /* '<S71>/Multiply' */
  real32_T Add_gt;                     /* '<S71>/Add' */
  real32_T Memory1_l;                  /* '<S69>/Memory1' */
  real32_T Multiply1_k3;               /* '<S71>/Multiply1' */
  real32_T Add1_n;                     /* '<S71>/Add1' */
  real32_T Switch_e1;                  /* '<S71>/Switch' */
  real32_T Gain3;                      /* '<S69>/Gain3' */
  real32_T Gain_il;                    /* '<S69>/Gain' */
  real32_T Divide_np;                  /* '<S69>/Divide' */
  real32_T T_hw;                       /* '<S69>/Gain1' */
  real32_T u7T;                        /* '<S69>/Gain2' */
  real32_T aMax_f;                     /* '<S69>/Divide1' */
  real32_T Add2;                       /* '<S69>/Add2' */
  real32_T u3T;                        /* '<S69>/Gain4' */
  real32_T Multiply_l;                 /* '<S69>/Multiply' */
  real32_T Gain5;                      /* '<S69>/Gain5' */
  real32_T v30new;                     /* '<S69>/Add1' */
  real32_T Square_k;                   /* '<S69>/Square' */
  real32_T Multiply2_a;                /* '<S69>/Multiply2' */
  real32_T Gain6;                      /* '<S69>/Gain6' */
  real32_T Multiply3_a;                /* '<S69>/Multiply3' */
  real32_T Gain7;                      /* '<S69>/Gain7' */
  real32_T Multiply1_do;               /* '<S69>/Multiply1' */
  real32_T d30new;                     /* '<S69>/Add3' */
  real32_T T30_k;                      /* '<S69>/Gain8' */
  real32_T Min_cs;                     /* '<S62>/Min' */
  real32_T Divide1_p;                  /* '<S62>/Divide1' */
  real32_T Square_bq;                  /* '<S62>/Square' */
  real32_T Multiply_f;                 /* '<S62>/Multiply' */
  real32_T Divide2;                    /* '<S62>/Divide2' */
  real32_T Memory_c;                   /* '<S48>/Memory' */
  real32_T Memory1_n;                  /* '<S48>/Memory1' */
  real32_T aCharact;                   /* '<S48>/Merge' */
  real32_T aBDC;                       /* '<S48>/Merge1' */
  real32_T Max_n;                      /* '<S57>/Max' */
  real32_T filtFactor_cf;              /* '<S57>/Divide' */
  real32_T Add_pi;                     /* '<S57>/Add' */
  real32_T Multiply_eo;                /* '<S57>/Multiply' */
  real32_T Multiply1_ie;               /* '<S57>/Multiply1' */
  real32_T Add1_h;                     /* '<S57>/Add1' */
  real32_T P_adtMaxBDC;                /* '<S54>/P_adtMaxBDC' */
  real32_T Add1_hp;                    /* '<S51>/Add1' */
  real32_T Multiply_nu;                /* '<S51>/Multiply' */
  real32_T Add_m1;                     /* '<S51>/Add' */
  real32_T Max_j;                      /* '<S55>/Max' */
  real32_T filtFactor_h;               /* '<S55>/Divide' */
  real32_T Add_cl;                     /* '<S55>/Add' */
  real32_T Multiply_h5;                /* '<S55>/Multiply' */
  real32_T Multiply1_p;                /* '<S55>/Multiply1' */
  real32_T Add1_a;                     /* '<S55>/Add1' */
  real32_T Max_c3;                     /* '<S56>/Max' */
  real32_T filtFactor_m;               /* '<S56>/Divide' */
  real32_T Add_kk;                     /* '<S56>/Add' */
  real32_T Multiply_a3;                /* '<S56>/Multiply' */
  real32_T Multiply1_b;                /* '<S56>/Multiply1' */
  real32_T Add1_l;                     /* '<S56>/Add1' */
  real32_T Multiply_mn;                /* '<S50>/Multiply' */
  real32_T BDC_State;                  /* '<S23>/BDC_State_Machine' */
  real32_T tElapse;                    /* '<S23>/BDC_State_Machine' */
  real32_T Square1_p;                  /* '<S39>/Square1' */
  real32_T Add1_f;                     /* '<S39>/Add1' */
  real32_T Multiply_lj;                /* '<S39>/Multiply' */
  real32_T Divide_g;                   /* '<S39>/Divide' */
  real32_T Divide1_a;                  /* '<S39>/Divide1' */
  real32_T Abs_pu;                     /* '<S39>/Abs' */
  int32_T ForIterator;                 /* '<S3>/For Iterator' */
  int32_T ForIterator_b;               /* '<S69>/For Iterator' */
  uint16_T Gain_pr;                    /* '<S11>/Gain' */
  uint16_T Gain1_g;                    /* '<S11>/Gain1' */
  uint16_T Gain2_f;                    /* '<S11>/Gain2' */
  uint16_T Gain3_l;                    /* '<S11>/Gain3' */
  uint8_T DataTypeConversion12;        /* '<S11>/Data Type Conversion12' */
  uint8_T DataTypeConversion13;        /* '<S11>/Data Type Conversion13' */
  uint8_T DataTypeConversion14;        /* '<S11>/Data Type Conversion14' */
  uint8_T DataTypeConversion15;        /* '<S11>/Data Type Conversion15' */
  boolean_T DataTypeConversion1;       /* '<S11>/Data Type Conversion1' */
  boolean_T AND4;                      /* '<S139>/AND4' */
  boolean_T RelationalOperator;        /* '<S139>/Relational Operator' */
  boolean_T AND;                       /* '<S139>/AND' */
  boolean_T RelationalOperator1;       /* '<S139>/Relational Operator1' */
  boolean_T Memory_f;                  /* '<S139>/Memory' */
  boolean_T AND2;                      /* '<S139>/AND2' */
  boolean_T AND3;                      /* '<S139>/AND3' */
  boolean_T ACC_SetSw;                 /* '<S11>/Data Type Conversion4' */
  boolean_T OR;                        /* '<S11>/OR' */
  boolean_T ACC_SetSwK1;               /* '<S11>/Memory2' */
  boolean_T ACC_SpdIncSw;              /* '<S11>/Data Type Conversion6' */
  boolean_T ACC_SpdIncSwK1;            /* '<S11>/Memory' */
  boolean_T ACC_SpdDecSw;              /* '<S11>/Data Type Conversion7' */
  boolean_T ACC_SpdDecSwK1;            /* '<S11>/Memory1' */
  boolean_T RelationalOperator_l;      /* '<S124>/Relational Operator' */
  boolean_T RelationalOperator_a;      /* '<S12>/Relational Operator' */
  boolean_T AND_b;                     /* '<S12>/AND' */
  boolean_T RelationalOperator6;       /* '<S10>/Relational Operator6' */
  boolean_T RelationalOperator7;       /* '<S10>/Relational Operator7' */
  boolean_T RelationalOperator8;       /* '<S10>/Relational Operator8' */
  boolean_T AND2_n;                    /* '<S10>/AND2' */
  boolean_T AND3_o;                    /* '<S10>/AND3' */
  boolean_T DrvOffEnable;              /* '<S10>/Merge' */
  boolean_T RelationalOperator_k;      /* '<S17>/Relational Operator' */
  boolean_T Memory_pu;                 /* '<S16>/Memory' */
  boolean_T Memory1_k;                 /* '<S16>/Memory1' */
  boolean_T Equal1;                    /* '<S123>/Equal1' */
  boolean_T AND1_h[2];                 /* '<S4>/AND1' */
  boolean_T Memory_l[2];               /* '<S4>/Memory' */
  boolean_T Equal[2];                  /* '<S4>/Equal' */
  boolean_T AND_g[2];                  /* '<S4>/AND' */
  boolean_T Merge1_b;                  /* '<S16>/Merge1' */
  boolean_T Merge2_b;                  /* '<S16>/Merge2' */
  boolean_T NOT;                       /* '<S11>/NOT' */
  boolean_T RelationalOperator_m;      /* '<S11>/Relational Operator' */
  boolean_T ACC_ResSw;                 /* '<S11>/Data Type Conversion5' */
  boolean_T RelationalOperator_ko;     /* '<S141>/Relational Operator' */
  boolean_T Assignment[40];            /* '<S3>/Assignment' */
  boolean_T RelationalOperator1_l;     /* '<S92>/Relational Operator1' */
  boolean_T Delay1;                    /* '<S92>/Delay1' */
  boolean_T RelationalOperator2;       /* '<S92>/Relational Operator2' */
  boolean_T AND1_g;                    /* '<S92>/AND1' */
  boolean_T RelationalOperator_d;      /* '<S92>/Relational Operator' */
  boolean_T AND_h;                     /* '<S92>/AND' */
  boolean_T Valid;                     /* '<S92>/Merge6' */
  boolean_T isCutIn;                   /* '<S94>/Relational Operator2' */
  boolean_T RelationalOperator_o;      /* '<S96>/Relational Operator' */
  boolean_T Merge_o;                   /* '<S98>/Merge' */
  boolean_T RelationalOperator_p;      /* '<S114>/Relational Operator' */
  boolean_T RelationalOperator1_p;     /* '<S114>/Relational Operator1' */
  boolean_T LogicalOperator;           /* '<S114>/Logical Operator' */
  boolean_T RelationalOperator1_k;     /* '<S115>/Relational Operator1' */
  boolean_T RelationalOperator_c;      /* '<S115>/Relational Operator' */
  boolean_T LogicalOperator_n;         /* '<S115>/Logical Operator' */
  boolean_T RelationalOperator_i;      /* '<S116>/Relational Operator' */
  boolean_T RelationalOperator1_lm;    /* '<S116>/Relational Operator1' */
  boolean_T RelationalOperator2_g;     /* '<S116>/Relational Operator2' */
  boolean_T LogicalOperator1;          /* '<S116>/Logical Operator1' */
  boolean_T RelationalOperator3;       /* '<S116>/Relational Operator3' */
  boolean_T LogicalOperator2;          /* '<S116>/Logical Operator2' */
  boolean_T P_StandObjEnable;          /* '<S116>/P_StandObjEnable' */
  boolean_T RelationalOperator1_j;     /* '<S117>/Relational Operator1' */
  boolean_T RelationalOperator3_d;     /* '<S100>/Relational Operator3' */
  boolean_T RelationalOperator_g;      /* '<S102>/Relational Operator' */
  boolean_T RelationalOperator1_jr;    /* '<S102>/Relational Operator1' */
  boolean_T RelationalOperator2_m;     /* '<S102>/Relational Operator2' */
  boolean_T LogicalOperator_g;         /* '<S102>/Logical Operator' */
  boolean_T RelationalOperator_df;     /* '<S36>/Relational Operator' */
  boolean_T RelationalOperator2_i;     /* '<S36>/Relational Operator2' */
  boolean_T RelationalOperator1_g;     /* '<S36>/Relational Operator1' */
  boolean_T AND_a;                     /* '<S36>/AND' */
  boolean_T Memory1_h;                 /* '<S22>/Memory1' */
  boolean_T Merge_l;                   /* '<S36>/Merge' */
  boolean_T Switch_h1;                 /* '<S36>/Switch' */
  boolean_T RelationalOperator_mi;     /* '<S37>/Relational Operator' */
  boolean_T RelationalOperator1_j3;    /* '<S37>/Relational Operator1' */
  boolean_T OR_i;                      /* '<S37>/OR' */
  boolean_T RelationalOperator3_m;     /* '<S22>/Relational Operator3' */
  boolean_T RelationalOperator1_m;     /* '<S22>/Relational Operator1' */
  boolean_T RelationalOperator_pq;     /* '<S34>/Relational Operator' */
  boolean_T RelationalOperator_go;     /* '<S24>/Relational Operator' */
  boolean_T RelationalOperator_lk;     /* '<S22>/Relational Operator' */
  boolean_T OR_j;                      /* '<S22>/OR' */
  boolean_T OR1;                       /* '<S22>/OR1' */
  boolean_T RelationalOperator4;       /* '<S58>/Relational Operator4' */
  boolean_T RelationalOperator5;       /* '<S58>/Relational Operator5' */
  boolean_T AND_hk;                    /* '<S58>/AND' */
  boolean_T RelationalOperator2_j;     /* '<S58>/Relational Operator2' */
  boolean_T RelationalOperator_b;      /* '<S63>/Relational Operator' */
  boolean_T RelationalOperator1_n;     /* '<S63>/Relational Operator1' */
  boolean_T OR_m;                      /* '<S63>/OR' */
  boolean_T RelationalOperator1_a;     /* '<S58>/Relational Operator1' */
  boolean_T RelationalOperator3_dy;    /* '<S58>/Relational Operator3' */
  boolean_T RelationalOperator2_n;     /* '<S46>/Relational Operator2' */
  boolean_T RelationalOperator4_k;     /* '<S59>/Relational Operator4' */
  boolean_T RelationalOperator5_g;     /* '<S59>/Relational Operator5' */
  boolean_T RelationalOperator2_nk;    /* '<S59>/Relational Operator2' */
  boolean_T OR_g;                      /* '<S59>/OR' */
  boolean_T RelationalOperator_ij;     /* '<S59>/Relational Operator' */
  boolean_T RelationalOperator1_b;     /* '<S59>/Relational Operator1' */
  boolean_T AND_l;                     /* '<S59>/AND' */
  boolean_T SmoothStopCond;            /* '<S23>/Memory1' */
  boolean_T RelationalOperator_h;      /* '<S45>/Relational Operator' */
  boolean_T RelationalOperator1_d;     /* '<S45>/Relational Operator1' */
  boolean_T OR_d;                      /* '<S45>/OR' */
  boolean_T RelationalOperator_ps;     /* '<S47>/Relational Operator' */
  boolean_T RelationalOperator1_o;     /* '<S47>/Relational Operator1' */
  boolean_T RelationalOperator2_d;     /* '<S47>/Relational Operator2' */
  boolean_T OR1_c;                     /* '<S47>/OR1' */
  boolean_T RelationalOperator3_h;     /* '<S47>/Relational Operator3' */
  boolean_T OR_b;                      /* '<S47>/OR' */
  boolean_T SmoothStopCond_c;          /* '<S47>/Memory1' */
  boolean_T SmoothStopCond_p;          /* '<S47>/Merge' */
  boolean_T RelationalOperator_ob;     /* '<S81>/Relational Operator' */
  boolean_T RelationalOperator1_kx;    /* '<S81>/Relational Operator1' */
  boolean_T RelationalOperator2_h;     /* '<S81>/Relational Operator2' */
  boolean_T phase1;                    /* '<S28>/Relational Operator' */
  boolean_T phase2;                    /* '<S28>/Relational Operator1' */
  boolean_T RelationalOperator_dk;     /* '<S74>/Relational Operator' */
  boolean_T RelationalOperator1_bu;    /* '<S74>/Relational Operator1' */
  boolean_T LogicalOperator_g3;        /* '<S74>/Logical Operator' */
  boolean_T RelationalOperator2_gq;    /* '<S74>/Relational Operator2' */
  boolean_T RelationalOperator1_kd;    /* '<S29>/Relational Operator1' */
  boolean_T RelationalOperator_aa;     /* '<S29>/Relational Operator' */
  boolean_T RelationalOperator2_hl;    /* '<S29>/Relational Operator2' */
  boolean_T AND_d;                     /* '<S29>/AND' */
  boolean_T RelationalOperator3_c;     /* '<S29>/Relational Operator3' */
  boolean_T RelationalOperator4_n;     /* '<S29>/Relational Operator4' */
  boolean_T AND1_j;                    /* '<S29>/AND1' */
  boolean_T SmoothStopCond_l;          /* '<S65>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S69>/Relational Operator' */
  boolean_T RelationalOperator_n;      /* '<S48>/Relational Operator' */
  boolean_T RelationalOperator1_e;     /* '<S48>/Relational Operator1' */
  boolean_T RelationalOperator_i2;     /* '<S54>/Relational Operator' */
  boolean_T RelationalOperator_op;     /* '<S51>/Relational Operator' */
  B_CoreSubsys_AccTarSel_c_T CoreSubsys_p[40];/* '<S7>/For Each Subsystem' */
  B_CoreSubsys_AccTarSel_T CoreSubsys[40];/* '<S6>/For Each Subsystem' */
} B_AccTarSel_c_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'AccTarSel' */
#ifndef AccTarSel_MDLREF_HIDE_CHILD_

typedef struct {
  ATS_INTERNAL_OBJINFO_ST Memory_PreviousInput;/* '<Root>/Memory' */
  ATS_PO_ST Memory1_PreviousInput;     /* '<Root>/Memory1' */
  real32_T Delay_DSTATE;               /* '<S92>/Delay' */
  real32_T Memory_PreviousInput_g;     /* '<S124>/Memory' */
  real32_T Memory_2_PreviousInput;     /* '<S12>/Memory' */
  real32_T Memory_1_PreviousInput;     /* '<S12>/Memory' */
  real32_T Memory_PreviousInput_a;     /* '<S1>/Memory' */
  real32_T Memory1_PreviousInput_i;    /* '<S4>/Memory1' */
  real32_T Memory_PreviousInput_j;     /* '<S21>/Memory' */
  real32_T Memory_PreviousInput_l;     /* '<S22>/Memory' */
  real32_T Memory_PreviousInput_k;     /* '<S23>/Memory' */
  real32_T Memory2_PreviousInput;      /* '<S23>/Memory2' */
  real32_T Memory1_4_PreviousInput;    /* '<S23>/Memory1' */
  real32_T Memory1_2_PreviousInput;    /* '<S23>/Memory1' */
  real32_T Memory1_3_PreviousInput;    /* '<S23>/Memory1' */
  real32_T Memory1_5_PreviousInput;    /* '<S23>/Memory1' */
  real32_T Memory1_6_PreviousInput;    /* '<S23>/Memory1' */
  real32_T Memory1_7_PreviousInput;    /* '<S23>/Memory1' */
  real32_T Memory1_8_PreviousInput;    /* '<S23>/Memory1' */
  real32_T Memory_PreviousInput_n;     /* '<S47>/Memory' */
  real32_T Memory1_8_PreviousInput_h;  /* '<S47>/Memory1' */
  real32_T Memory1_7_PreviousInput_b;  /* '<S47>/Memory1' */
  real32_T Memory1_6_PreviousInput_c;  /* '<S47>/Memory1' */
  real32_T Memory1_5_PreviousInput_a;  /* '<S47>/Memory1' */
  real32_T Memory1_4_PreviousInput_k;  /* '<S47>/Memory1' */
  real32_T Memory1_3_PreviousInput_d;  /* '<S47>/Memory1' */
  real32_T Memory1_2_PreviousInput_p;  /* '<S47>/Memory1' */
  real32_T Memory_PreviousInput_b;     /* '<S25>/Memory' */
  real32_T Memory2_PreviousInput_i;    /* '<S69>/Memory2' */
  real32_T Memory_PreviousInput_j0;    /* '<S69>/Memory' */
  real32_T Memory3_PreviousInput;      /* '<S69>/Memory3' */
  real32_T Memory1_PreviousInput_m;    /* '<S69>/Memory1' */
  real32_T Memory_PreviousInput_g0;    /* '<S48>/Memory' */
  real32_T Memory1_PreviousInput_a;    /* '<S48>/Memory1' */
  boolean_T Delay1_DSTATE;             /* '<S92>/Delay1' */
  int8_T If_ActiveSubsystem;           /* '<S16>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S47>/If' */
  int8_T If_ActiveSubsystem_j;         /* '<S45>/If' */
  uint8_T is_active_c3_AccTarSel;      /* '<Root>/ACC_State_Machine1' */
  uint8_T is_c3_AccTarSel;             /* '<Root>/ACC_State_Machine1' */
  uint8_T is_ACTIVE;                   /* '<Root>/ACC_State_Machine1' */
  uint8_T is_active_c1_AccTarSel;      /* '<S23>/BDC_State_Machine' */
  uint8_T is_c1_AccTarSel;             /* '<S23>/BDC_State_Machine' */
  boolean_T Memory_PreviousInput_ld;   /* '<S139>/Memory' */
  boolean_T Memory2_PreviousInput_b;   /* '<S11>/Memory2' */
  boolean_T Memory_PreviousInput_f;    /* '<S11>/Memory' */
  boolean_T Memory1_PreviousInput_b;   /* '<S11>/Memory1' */
  boolean_T Memory_PreviousInput_j1;   /* '<S16>/Memory' */
  boolean_T Memory1_PreviousInput_d;   /* '<S16>/Memory1' */
  boolean_T Memory_PreviousInput_g3[2];/* '<S4>/Memory' */
  boolean_T Memory1_PreviousInput_dk;  /* '<S22>/Memory1' */
  boolean_T Memory1_1_PreviousInput;   /* '<S23>/Memory1' */
  boolean_T Memory1_1_PreviousInput_h; /* '<S47>/Memory1' */
} DW_AccTarSel_f_T;

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S22>/If Action Subsystem' */
struct P_IfActionSubsystem_AccTarSel_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S30>/Constant2'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S36>/Approaching' */
struct P_Approaching_AccTarSel_T_ {
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S41>/Constant'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S48>/If Action Subsystem2' */
struct P_IfActionSubsystem2_AccTarSe_T_ {
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S52>/Constant'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S58>/ObjNoStop' */
struct P_ObjNoStop_AccTarSel_T_ {
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S60>/Constant2'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S6>/For Each Subsystem' */
struct P_CoreSubsys_AccTarSel_T_ {
  real32_T Constant11_Value;           /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S129>/Constant11'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S128>/Gain'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S128>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S128>/Constant3'
                                        */
  real32_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S127>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S127>/Constant2'
                                        */
  real32_T Constant3_Value_p;          /* Computed Parameter: Constant3_Value_p
                                        * Referenced by: '<S127>/Constant3'
                                        */
};

#endif                                 /*AccTarSel_MDLREF_HIDE_CHILD_*/

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S7>/For Each Subsystem' */
struct P_CoreSubsys_AccTarSel_g_T_ {
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S131>/Constant1'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S131>/Constant3'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S130>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S130>/Constant2'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S130>/Constant4'
                                        */
  real32_T uDLookupTable_tableData[6]; /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S132>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_bp01Data[6];  /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S132>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_tableData_p[4];/* Computed Parameter: uDLookupTable_tableData_p
                                         * Referenced by: '<S133>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_l[4];/* Computed Parameter: uDLookupTable_bp01Data_l
                                        * Referenced by: '<S133>/1-D Lookup Table'
                                        */
  real32_T Constant3_Value_f;          /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S130>/Constant3'
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
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: -0.2
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0.2
                                        * Referenced by: '<S36>/Constant2'
                                        */
  real_T Constant2_Value_f;            /* Expression: 0
                                        * Referenced by: '<S102>/Constant2'
                                        */
  real_T Constant_Value_l;             /* Expression: 15
                                        * Referenced by: '<S139>/Constant'
                                        */
  real_T Constant1_Value_a;            /* Expression: 10
                                        * Referenced by: '<S139>/Constant1'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant1_Value_b;            /* Expression: 7
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 11
                                        * Referenced by: '<Root>/Constant3'
                                        */
  int32_T ForIterator_IterationLimit;  /* Computed Parameter: ForIterator_IterationLimit
                                        * Referenced by: '<S69>/For Iterator'
                                        */
  int32_T Constant_Value_n;            /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S69>/Constant'
                                        */
  int32_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S92>/Constant'
                                        */
  int32_T Constant2_Value_i;           /* Computed Parameter: Constant2_Value_i
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real32_T Constant1_Value_f;          /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S31>/Constant1'
                                        */
  real32_T Constant2_Value_is;         /* Computed Parameter: Constant2_Value_is
                                        * Referenced by: '<S31>/Constant2'
                                        */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S40>/Constant'
                                        */
  real32_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S39>/Constant'
                                        */
  real32_T Constant2_Value_p;          /* Computed Parameter: Constant2_Value_p
                                        * Referenced by: '<S39>/Constant2'
                                        */
  real32_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S51>/Constant2'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S55>/Constant'
                                        */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S56>/Constant'
                                        */
  real32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S57>/Constant'
                                        */
  real32_T Memory_InitialCondition_l;  /* Computed Parameter: Memory_InitialCondition_l
                                        * Referenced by: '<S48>/Memory'
                                        */
  real32_T Memory1_InitialCondition_p; /* Computed Parameter: Memory1_InitialCondition_p
                                        * Referenced by: '<S48>/Memory1'
                                        */
  real32_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                        * Referenced by: '<S48>/Merge1'
                                        */
  real32_T Constant1_Value_bh;         /* Computed Parameter: Constant1_Value_bh
                                        * Referenced by: '<S62>/Constant1'
                                        */
  real32_T Constant2_Value_b;          /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S62>/Constant2'
                                        */
  real32_T aMax_Y0;                    /* Computed Parameter: aMax_Y0
                                        * Referenced by: '<S69>/aMax'
                                        */
  real32_T T_Y0;                       /* Computed Parameter: T_Y0
                                        * Referenced by: '<S69>/T'
                                        */
  real32_T T30_Y0;                     /* Computed Parameter: T30_Y0
                                        * Referenced by: '<S69>/T30'
                                        */
  real32_T Memory2_InitialCondition;   /* Computed Parameter: Memory2_InitialCondition
                                        * Referenced by: '<S69>/Memory2'
                                        */
  real32_T Constant1_Value_ag;         /* Computed Parameter: Constant1_Value_ag
                                        * Referenced by: '<S70>/Constant1'
                                        */
  real32_T Memory_InitialCondition_m;  /* Computed Parameter: Memory_InitialCondition_m
                                        * Referenced by: '<S69>/Memory'
                                        */
  real32_T Memory3_InitialCondition;   /* Computed Parameter: Memory3_InitialCondition
                                        * Referenced by: '<S69>/Memory3'
                                        */
  real32_T Constant1_Value_a5;         /* Computed Parameter: Constant1_Value_a5
                                        * Referenced by: '<S71>/Constant1'
                                        */
  real32_T Memory1_InitialCondition_n; /* Computed Parameter: Memory1_InitialCondition_n
                                        * Referenced by: '<S69>/Memory1'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S69>/Gain3'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S69>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S69>/Gain1'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S69>/Gain2'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S69>/Gain4'
                                        */
  real32_T Gain5_Gain;                 /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<S69>/Gain5'
                                        */
  real32_T Gain6_Gain;                 /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<S69>/Gain6'
                                        */
  real32_T Gain7_Gain;                 /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<S69>/Gain7'
                                        */
  real32_T Gain8_Gain;                 /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<S69>/Gain8'
                                        */
  real32_T Constant_Value_da;          /* Computed Parameter: Constant_Value_da
                                        * Referenced by: '<S68>/Constant'
                                        */
  real32_T Gain1_Gain_f;               /* Computed Parameter: Gain1_Gain_f
                                        * Referenced by: '<S68>/Gain1'
                                        */
  real32_T Gain2_Gain_g;               /* Computed Parameter: Gain2_Gain_g
                                        * Referenced by: '<S68>/Gain2'
                                        */
  real32_T Gain_Gain_p;                /* Computed Parameter: Gain_Gain_p
                                        * Referenced by: '<S68>/Gain'
                                        */
  real32_T Gain_Gain_m;                /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S67>/Gain'
                                        */
  real32_T Constant_Value_pc;          /* Computed Parameter: Constant_Value_pc
                                        * Referenced by: '<S66>/Constant'
                                        */
  real32_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S66>/Constant1'
                                        */
  real32_T Constant3_Value_m;          /* Computed Parameter: Constant3_Value_m
                                        * Referenced by: '<S66>/Constant3'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S66>/Constant4'
                                        */
  real32_T Constant5_Value_j;          /* Computed Parameter: Constant5_Value_j
                                        * Referenced by: '<S66>/Constant5'
                                        */
  real32_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S66>/Constant6'
                                        */
  real32_T Constant7_Value;            /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S66>/Constant7'
                                        */
  real32_T Constant2_Value_c;          /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S82>/Constant2'
                                        */
  real32_T Constant2_Value_j;          /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S85>/Constant2'
                                        */
  real32_T Constant_Value_oa;          /* Computed Parameter: Constant_Value_oa
                                        * Referenced by: '<S85>/Constant'
                                        */
  real32_T Constant_Value_ha;          /* Computed Parameter: Constant_Value_ha
                                        * Referenced by: '<S22>/Constant'
                                        */
  real32_T Constant1_Value_dk;         /* Computed Parameter: Constant1_Value_dk
                                        * Referenced by: '<S22>/Constant1'
                                        */
  real32_T Constant4_Value_i;          /* Computed Parameter: Constant4_Value_i
                                        * Referenced by: '<S37>/Constant4'
                                        */
  real32_T Constant2_Value_ju;         /* Computed Parameter: Constant2_Value_ju
                                        * Referenced by: '<S37>/Constant2'
                                        */
  real32_T Constant3_Value_a;          /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S37>/Constant3'
                                        */
  real32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S37>/Constant'
                                        */
  real32_T Constant1_Value_fq;         /* Computed Parameter: Constant1_Value_fq
                                        * Referenced by: '<S37>/Constant1'
                                        */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S37>/Switch'
                                        */
  real32_T Constant2_Value_cl;         /* Computed Parameter: Constant2_Value_cl
                                        * Referenced by: '<S34>/Constant2'
                                        */
  real32_T Gain_Gain_f;                /* Computed Parameter: Gain_Gain_f
                                        * Referenced by: '<S33>/Gain'
                                        */
  real32_T Constant_Value_ff;          /* Computed Parameter: Constant_Value_ff
                                        * Referenced by: '<S24>/Constant'
                                        */
  real32_T Gain_Gain_mv;               /* Computed Parameter: Gain_Gain_mv
                                        * Referenced by: '<S24>/Gain'
                                        */
  real32_T Gain2_Gain_f;               /* Computed Parameter: Gain2_Gain_f
                                        * Referenced by: '<S24>/Gain2'
                                        */
  real32_T Gain1_Gain_a;               /* Computed Parameter: Gain1_Gain_a
                                        * Referenced by: '<S24>/Gain1'
                                        */
  real32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S72>/Constant'
                                        */
  real32_T Memory_InitialCondition_i;  /* Computed Parameter: Memory_InitialCondition_i
                                        * Referenced by: '<S21>/Memory'
                                        */
  real32_T Constant_Value_l2;          /* Computed Parameter: Constant_Value_l2
                                        * Referenced by: '<S33>/Constant'
                                        */
  real32_T Constant2_Value_br;         /* Computed Parameter: Constant2_Value_br
                                        * Referenced by: '<S33>/Constant2'
                                        */
  real32_T kImsLowSpd_Gain;            /* Computed Parameter: kImsLowSpd_Gain
                                        * Referenced by: '<S33>/kImsLowSpd'
                                        */
  real32_T kImsHighSpd_Gain;           /* Computed Parameter: kImsHighSpd_Gain
                                        * Referenced by: '<S33>/kImsHighSpd'
                                        */
  real32_T Constant3_Value_l;          /* Computed Parameter: Constant3_Value_l
                                        * Referenced by: '<S33>/Constant3'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S38>/Constant'
                                        */
  real32_T Memory_InitialCondition_e;  /* Computed Parameter: Memory_InitialCondition_e
                                        * Referenced by: '<S22>/Memory'
                                        */
  real32_T Constant2_Value_ct;         /* Computed Parameter: Constant2_Value_ct
                                        * Referenced by: '<S35>/Constant2'
                                        */
  real32_T Constant_Value_nv;          /* Computed Parameter: Constant_Value_nv
                                        * Referenced by: '<S35>/Constant'
                                        */
  real32_T Constant1_Value_h;          /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S35>/Constant1'
                                        */
  real32_T Gain_Gain_k;                /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S35>/Gain'
                                        */
  real32_T Constant6_Value_e;          /* Computed Parameter: Constant6_Value_e
                                        * Referenced by: '<S58>/Constant6'
                                        */
  real32_T Memory_InitialCondition_lb; /* Computed Parameter: Memory_InitialCondition_lb
                                        * Referenced by: '<S23>/Memory'
                                        */
  real32_T Constant3_Value_n;          /* Computed Parameter: Constant3_Value_n
                                        * Referenced by: '<S63>/Constant3'
                                        */
  real32_T Constant2_Value_m;          /* Computed Parameter: Constant2_Value_m
                                        * Referenced by: '<S63>/Constant2'
                                        */
  real32_T Constant7_Value_n;          /* Computed Parameter: Constant7_Value_n
                                        * Referenced by: '<S59>/Constant7'
                                        */
  real32_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S59>/Constant8'
                                        */
  real32_T Constant_Value_lf;          /* Computed Parameter: Constant_Value_lf
                                        * Referenced by: '<S59>/Constant'
                                        */
  real32_T Constant1_Value_fi;         /* Computed Parameter: Constant1_Value_fi
                                        * Referenced by: '<S59>/Constant1'
                                        */
  real32_T Memory2_InitialCondition_k; /* Computed Parameter: Memory2_InitialCondition_k
                                        * Referenced by: '<S23>/Memory2'
                                        */
  real32_T Memory1_4_InitialCondition; /* Computed Parameter: Memory1_4_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real32_T Memory1_2_InitialCondition; /* Computed Parameter: Memory1_2_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real32_T Memory1_3_InitialCondition; /* Computed Parameter: Memory1_3_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real32_T Memory1_5_InitialCondition; /* Computed Parameter: Memory1_5_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real32_T Memory1_6_InitialCondition; /* Computed Parameter: Memory1_6_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real32_T Memory1_7_InitialCondition; /* Computed Parameter: Memory1_7_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real32_T Memory1_8_InitialCondition; /* Computed Parameter: Memory1_8_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real32_T Constant1_Value_fr;         /* Computed Parameter: Constant1_Value_fr
                                        * Referenced by: '<S45>/Constant1'
                                        */
  real32_T Constant3_Value_g;          /* Computed Parameter: Constant3_Value_g
                                        * Referenced by: '<S45>/Constant3'
                                        */
  real32_T Constant2_Value_g;          /* Computed Parameter: Constant2_Value_g
                                        * Referenced by: '<S47>/Constant2'
                                        */
  real32_T Constant3_Value_mx;         /* Computed Parameter: Constant3_Value_mx
                                        * Referenced by: '<S47>/Constant3'
                                        */
  real32_T Memory_InitialCondition_g;  /* Computed Parameter: Memory_InitialCondition_g
                                        * Referenced by: '<S47>/Memory'
                                        */
  real32_T Constant4_Value_n;          /* Computed Parameter: Constant4_Value_n
                                        * Referenced by: '<S47>/Constant4'
                                        */
  real32_T Constant1_Value_be;         /* Computed Parameter: Constant1_Value_be
                                        * Referenced by: '<S47>/Constant1'
                                        */
  real32_T Memory1_8_InitialCondition_n;/* Computed Parameter: Memory1_8_InitialCondition_n
                                         * Referenced by: '<S47>/Memory1'
                                         */
  real32_T Memory1_7_InitialCondition_n;/* Computed Parameter: Memory1_7_InitialCondition_n
                                         * Referenced by: '<S47>/Memory1'
                                         */
  real32_T Memory1_6_InitialCondition_n;/* Computed Parameter: Memory1_6_InitialCondition_n
                                         * Referenced by: '<S47>/Memory1'
                                         */
  real32_T Memory1_5_InitialCondition_n;/* Computed Parameter: Memory1_5_InitialCondition_n
                                         * Referenced by: '<S47>/Memory1'
                                         */
  real32_T Memory1_4_InitialCondition_n;/* Computed Parameter: Memory1_4_InitialCondition_n
                                         * Referenced by: '<S47>/Memory1'
                                         */
  real32_T Memory1_3_InitialCondition_n;/* Computed Parameter: Memory1_3_InitialCondition_n
                                         * Referenced by: '<S47>/Memory1'
                                         */
  real32_T Memory1_2_InitialCondition_n;/* Computed Parameter: Memory1_2_InitialCondition_n
                                         * Referenced by: '<S47>/Memory1'
                                         */
  real32_T Merge_2_InitialOutput;      /* Computed Parameter: Merge_2_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  real32_T Merge_3_InitialOutput;      /* Computed Parameter: Merge_3_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  real32_T Merge_4_InitialOutput;      /* Computed Parameter: Merge_4_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  real32_T Merge_5_InitialOutput;      /* Computed Parameter: Merge_5_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  real32_T Merge_6_InitialOutput;      /* Computed Parameter: Merge_6_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  real32_T Merge_7_InitialOutput;      /* Computed Parameter: Merge_7_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  real32_T Merge_8_InitialOutput;      /* Computed Parameter: Merge_8_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S25>/Constant'
                                        */
  real32_T Constant2_Value_b1;         /* Computed Parameter: Constant2_Value_b1
                                        * Referenced by: '<S25>/Constant2'
                                        */
  real32_T Constant4_Value_p;          /* Computed Parameter: Constant4_Value_p
                                        * Referenced by: '<S25>/Constant4'
                                        */
  real32_T Constant_Value_hz;          /* Computed Parameter: Constant_Value_hz
                                        * Referenced by: '<S73>/Constant'
                                        */
  real32_T Constant12_Value;           /* Computed Parameter: Constant12_Value
                                        * Referenced by: '<S28>/Constant12'
                                        */
  real32_T Constant13_Value;           /* Computed Parameter: Constant13_Value
                                        * Referenced by: '<S28>/Constant13'
                                        */
  real32_T Constant14_Value;           /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<S28>/Constant14'
                                        */
  real32_T Constant15_Value;           /* Computed Parameter: Constant15_Value
                                        * Referenced by: '<S28>/Constant15'
                                        */
  real32_T Constant16_Value;           /* Computed Parameter: Constant16_Value
                                        * Referenced by: '<S28>/Constant16'
                                        */
  real32_T Constant17_Value;           /* Computed Parameter: Constant17_Value
                                        * Referenced by: '<S28>/Constant17'
                                        */
  real32_T Constant18_Value;           /* Computed Parameter: Constant18_Value
                                        * Referenced by: '<S28>/Constant18'
                                        */
  real32_T Gain2_Gain_fg;              /* Computed Parameter: Gain2_Gain_fg
                                        * Referenced by: '<S28>/Gain2'
                                        */
  real32_T Constant2_Value_bz;         /* Computed Parameter: Constant2_Value_bz
                                        * Referenced by: '<S28>/Constant2'
                                        */
  real32_T Constant3_Value_i;          /* Computed Parameter: Constant3_Value_i
                                        * Referenced by: '<S28>/Constant3'
                                        */
  real32_T Constant8_Value_h;          /* Computed Parameter: Constant8_Value_h
                                        * Referenced by: '<S28>/Constant8'
                                        */
  real32_T Constant9_Value;            /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S28>/Constant9'
                                        */
  real32_T Constant4_Value_g;          /* Computed Parameter: Constant4_Value_g
                                        * Referenced by: '<S28>/Constant4'
                                        */
  real32_T Constant5_Value_c;          /* Computed Parameter: Constant5_Value_c
                                        * Referenced by: '<S28>/Constant5'
                                        */
  real32_T Constant6_Value_j;          /* Computed Parameter: Constant6_Value_j
                                        * Referenced by: '<S28>/Constant6'
                                        */
  real32_T Constant7_Value_p;          /* Computed Parameter: Constant7_Value_p
                                        * Referenced by: '<S28>/Constant7'
                                        */
  real32_T Constant10_Value;           /* Computed Parameter: Constant10_Value
                                        * Referenced by: '<S28>/Constant10'
                                        */
  real32_T Constant11_Value;           /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S28>/Constant11'
                                        */
  real32_T Constant1_Value_eq;         /* Computed Parameter: Constant1_Value_eq
                                        * Referenced by: '<S28>/Constant1'
                                        */
  real32_T Switch_Threshold_f;         /* Computed Parameter: Switch_Threshold_f
                                        * Referenced by: '<S28>/Switch'
                                        */
  real32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S28>/Gain'
                                        */
  real32_T Memory_InitialCondition_m0; /* Computed Parameter: Memory_InitialCondition_m0
                                        * Referenced by: '<S25>/Memory'
                                        */
  real32_T Constant_Value_c1;          /* Computed Parameter: Constant_Value_c1
                                        * Referenced by: '<S20>/Constant'
                                        */
  real32_T uDLookupTable_tableData[2]; /* Computed Parameter: uDLookupTable_tableData
                                        * Referenced by: '<S103>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable_bp01Data[2];  /* Computed Parameter: uDLookupTable_bp01Data
                                        * Referenced by: '<S103>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S103>/Constant'
                                        */
  real32_T Switch_Threshold_i;         /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S103>/Switch'
                                        */
  real32_T uDLookupTable1_tableData[2];/* Computed Parameter: uDLookupTable1_tableData
                                        * Referenced by: '<S103>/1-D Lookup Table1'
                                        */
  real32_T uDLookupTable1_bp01Data[2]; /* Computed Parameter: uDLookupTable1_bp01Data
                                        * Referenced by: '<S103>/1-D Lookup Table1'
                                        */
  real32_T Constant_Value_ga;          /* Computed Parameter: Constant_Value_ga
                                        * Referenced by: '<S104>/Constant'
                                        */
  real32_T Constant_Value_no;          /* Computed Parameter: Constant_Value_no
                                        * Referenced by: '<S105>/Constant'
                                        */
  real32_T Merge_InitialOutput;        /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S102>/Merge'
                                        */
  real32_T Constant_Value_ae;          /* Computed Parameter: Constant_Value_ae
                                        * Referenced by: '<S101>/Constant'
                                        */
  real32_T Constant_Value_pu;          /* Computed Parameter: Constant_Value_pu
                                        * Referenced by: '<S99>/Constant'
                                        */
  real32_T Constant_Value_hd;          /* Computed Parameter: Constant_Value_hd
                                        * Referenced by: '<S106>/Constant'
                                        */
  real32_T uDLookupTable_tableData_n[3];/* Computed Parameter: uDLookupTable_tableData_n
                                         * Referenced by: '<S111>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_m[3];/* Computed Parameter: uDLookupTable_bp01Data_m
                                        * Referenced by: '<S111>/1-D Lookup Table'
                                        */
  real32_T uDLookupTable1_tableData_d[2];/* Computed Parameter: uDLookupTable1_tableData_d
                                          * Referenced by: '<S111>/1-D Lookup Table1'
                                          */
  real32_T uDLookupTable1_bp01Data_b[2];/* Computed Parameter: uDLookupTable1_bp01Data_b
                                         * Referenced by: '<S111>/1-D Lookup Table1'
                                         */
  real32_T uDLookupTable_tableData_j[2];/* Computed Parameter: uDLookupTable_tableData_j
                                         * Referenced by: '<S115>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_n[2];/* Computed Parameter: uDLookupTable_bp01Data_n
                                        * Referenced by: '<S115>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S115>/Constant'
                                        */
  real32_T Constant_Value_ar;          /* Computed Parameter: Constant_Value_ar
                                        * Referenced by: '<S116>/Constant'
                                        */
  real32_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S116>/Constant1'
                                        */
  real32_T Constant2_Value_fh;         /* Computed Parameter: Constant2_Value_fh
                                        * Referenced by: '<S116>/Constant2'
                                        */
  real32_T Constant3_Value_md;         /* Computed Parameter: Constant3_Value_md
                                        * Referenced by: '<S116>/Constant3'
                                        */
  real32_T Constant_Value_gd;          /* Computed Parameter: Constant_Value_gd
                                        * Referenced by: '<S95>/Constant'
                                        */
  real32_T Constant_Value_pb;          /* Computed Parameter: Constant_Value_pb
                                        * Referenced by: '<S97>/Constant'
                                        */
  real32_T Constant1_Value_l;          /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S94>/Constant1'
                                        */
  real32_T Constant3_Value_c;          /* Computed Parameter: Constant3_Value_c
                                        * Referenced by: '<S96>/Constant3'
                                        */
  real32_T Constant1_Value_bc;         /* Computed Parameter: Constant1_Value_bc
                                        * Referenced by: '<S96>/Constant1'
                                        */
  real32_T Constant2_Value_jk;         /* Computed Parameter: Constant2_Value_jk
                                        * Referenced by: '<S96>/Constant2'
                                        */
  real32_T Constant_Value_b0;          /* Computed Parameter: Constant_Value_b0
                                        * Referenced by: '<S96>/Constant'
                                        */
  real32_T Constant5_Value_e;          /* Computed Parameter: Constant5_Value_e
                                        * Referenced by: '<S119>/Constant5'
                                        */
  real32_T Constant_Value_b4;          /* Computed Parameter: Constant_Value_b4
                                        * Referenced by: '<S119>/Constant'
                                        */
  real32_T Constant1_Value_fqq;        /* Computed Parameter: Constant1_Value_fqq
                                        * Referenced by: '<S119>/Constant1'
                                        */
  real32_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S119>/Constant2'
                                        */
  real32_T Constant3_Value_nq;         /* Computed Parameter: Constant3_Value_nq
                                        * Referenced by: '<S119>/Constant3'
                                        */
  real32_T Constant4_Value_f;          /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S119>/Constant4'
                                        */
  real32_T Constant7_Value_c;          /* Computed Parameter: Constant7_Value_c
                                        * Referenced by: '<S119>/Constant7'
                                        */
  real32_T Constant8_Value_p;          /* Computed Parameter: Constant8_Value_p
                                        * Referenced by: '<S119>/Constant8'
                                        */
  real32_T Delay_InitialCondition;     /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S92>/Delay'
                                        */
  real32_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                        * Referenced by: '<S92>/Merge2'
                                        */
  real32_T Merge4_InitialOutput;       /* Computed Parameter: Merge4_InitialOutput
                                        * Referenced by: '<S92>/Merge4'
                                        */
  real32_T Merge5_InitialOutput;       /* Computed Parameter: Merge5_InitialOutput
                                        * Referenced by: '<S92>/Merge5'
                                        */
  real32_T Merge_InitialOutput_b;      /* Computed Parameter: Merge_InitialOutput_b
                                        * Referenced by: '<S92>/Merge'
                                        */
  real32_T Merge1_InitialOutput_k;     /* Computed Parameter: Merge1_InitialOutput_k
                                        * Referenced by: '<S92>/Merge1'
                                        */
  real32_T Merge3_InitialOutput;       /* Computed Parameter: Merge3_InitialOutput
                                        * Referenced by: '<S92>/Merge3'
                                        */
  real32_T Merge7_InitialOutput;       /* Computed Parameter: Merge7_InitialOutput
                                        * Referenced by: '<S92>/Merge7'
                                        */
  real32_T Merge8_InitialOutput;       /* Computed Parameter: Merge8_InitialOutput
                                        * Referenced by: '<S92>/Merge8'
                                        */
  real32_T Constant_Value_p0;          /* Computed Parameter: Constant_Value_p0
                                        * Referenced by: '<S120>/Constant'
                                        */
  real32_T Constant1_Value_p;          /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S120>/Constant1'
                                        */
  real32_T Constant_Value_hr;          /* Computed Parameter: Constant_Value_hr
                                        * Referenced by: '<S121>/Constant'
                                        */
  real32_T Constant1_Value_c;          /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S121>/Constant1'
                                        */
  real32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S143>/Constant'
                                        */
  real32_T Constant1_Value_n;          /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S143>/Constant1'
                                        */
  real32_T Constant1_Value_as;         /* Computed Parameter: Constant1_Value_as
                                        * Referenced by: '<S144>/Constant1'
                                        */
  real32_T Constant_Value_d0;          /* Computed Parameter: Constant_Value_d0
                                        * Referenced by: '<S144>/Constant'
                                        */
  real32_T Constant_Value_oc;          /* Computed Parameter: Constant_Value_oc
                                        * Referenced by: '<S141>/Constant'
                                        */
  real32_T Constant5_Value_l;          /* Computed Parameter: Constant5_Value_l
                                        * Referenced by: '<S141>/Constant5'
                                        */
  real32_T Constant6_Value_a;          /* Computed Parameter: Constant6_Value_a
                                        * Referenced by: '<S141>/Constant6'
                                        */
  real32_T Constant7_Value_f;          /* Computed Parameter: Constant7_Value_f
                                        * Referenced by: '<S141>/Constant7'
                                        */
  real32_T Constant_Value_dd;          /* Computed Parameter: Constant_Value_dd
                                        * Referenced by: '<S146>/Constant'
                                        */
  real32_T Merge_InitialOutput_i;      /* Computed Parameter: Merge_InitialOutput_i
                                        * Referenced by: '<S141>/Merge'
                                        */
  real32_T Merge1_InitialOutput_h;     /* Computed Parameter: Merge1_InitialOutput_h
                                        * Referenced by: '<S141>/Merge1'
                                        */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S141>/Switch2'
                                        */
  real32_T Constant_Value_ag;          /* Computed Parameter: Constant_Value_ag
                                        * Referenced by: '<S145>/Constant'
                                        */
  real32_T Constant_Value_js;          /* Computed Parameter: Constant_Value_js
                                        * Referenced by: '<S147>/Constant'
                                        */
  real32_T Constant_Value_o3;          /* Computed Parameter: Constant_Value_o3
                                        * Referenced by: '<S148>/Constant'
                                        */
  real32_T Constant_Value_le;          /* Computed Parameter: Constant_Value_le
                                        * Referenced by: '<S140>/Constant'
                                        */
  real32_T Constant_Value_m4;          /* Computed Parameter: Constant_Value_m4
                                        * Referenced by: '<S18>/Constant'
                                        */
  real32_T ObjSource_Value;            /* Computed Parameter: ObjSource_Value
                                        * Referenced by: '<Root>/ObjSource'
                                        */
  real32_T Switch_Threshold_l;         /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<Root>/Switch'
                                        */
  real32_T Constant3_Value_b;          /* Computed Parameter: Constant3_Value_b
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real32_T uDLookupTable_tableData_b[6];/* Computed Parameter: uDLookupTable_tableData_b
                                         * Referenced by: '<S124>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_d[6];/* Computed Parameter: uDLookupTable_bp01Data_d
                                        * Referenced by: '<S124>/1-D Lookup Table'
                                        */
  real32_T Constant1_Value_e1;         /* Computed Parameter: Constant1_Value_e1
                                        * Referenced by: '<S124>/Constant1'
                                        */
  real32_T Constant3_Value_k;          /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S124>/Constant3'
                                        */
  real32_T Memory_InitialCondition_go; /* Computed Parameter: Memory_InitialCondition_go
                                        * Referenced by: '<S124>/Memory'
                                        */
  real32_T Constant2_Value_fp;         /* Computed Parameter: Constant2_Value_fp
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real32_T Constant4_Value_n5;         /* Computed Parameter: Constant4_Value_n5
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real32_T Constant5_Value_b;          /* Computed Parameter: Constant5_Value_b
                                        * Referenced by: '<S5>/Constant5'
                                        */
  real32_T Memory_2_InitialCondition;  /* Computed Parameter: Memory_2_InitialCondition
                                        * Referenced by: '<S12>/Memory'
                                        */
  real32_T Memory_1_InitialCondition;  /* Computed Parameter: Memory_1_InitialCondition
                                        * Referenced by: '<S12>/Memory'
                                        */
  real32_T Merge3_InitialOutput_m;     /* Computed Parameter: Merge3_InitialOutput_m
                                        * Referenced by: '<S12>/Merge3'
                                        */
  real32_T Merge_InitialOutput_m;      /* Computed Parameter: Merge_InitialOutput_m
                                        * Referenced by: '<S12>/Merge'
                                        */
  real32_T Merge1_InitialOutput_f;     /* Computed Parameter: Merge1_InitialOutput_f
                                        * Referenced by: '<S12>/Merge1'
                                        */
  real32_T Constant_Value_m3;          /* Computed Parameter: Constant_Value_m3
                                        * Referenced by: '<S17>/Constant'
                                        */
  real32_T Memory_InitialCondition_a;  /* Computed Parameter: Memory_InitialCondition_a
                                        * Referenced by: '<S1>/Memory'
                                        */
  real32_T Constant_Value_bu;          /* Computed Parameter: Constant_Value_bu
                                        * Referenced by: '<S123>/Constant'
                                        */
  real32_T Memory1_InitialCondition_g; /* Computed Parameter: Memory1_InitialCondition_g
                                        * Referenced by: '<S4>/Memory1'
                                        */
  real32_T Merge_InitialOutput_e;      /* Computed Parameter: Merge_InitialOutput_e
                                        * Referenced by: '<S4>/Merge'
                                        */
  real32_T uDLookupTable_tableData_f[3];/* Computed Parameter: uDLookupTable_tableData_f
                                         * Referenced by: '<S4>/1-D Lookup Table'
                                         */
  real32_T uDLookupTable_bp01Data_g[3];/* Computed Parameter: uDLookupTable_bp01Data_g
                                        * Referenced by: '<S4>/1-D Lookup Table'
                                        */
  real32_T Constant_Value_f3;          /* Computed Parameter: Constant_Value_f3
                                        * Referenced by: '<S14>/Constant'
                                        */
  real32_T Constant_Value_dn;          /* Computed Parameter: Constant_Value_dn
                                        * Referenced by: '<S19>/Constant'
                                        */
  real32_T uDLookupTable_tableData_fw[4];/* Computed Parameter: uDLookupTable_tableData_fw
                                          * Referenced by: '<S15>/1-D Lookup Table'
                                          */
  real32_T uDLookupTable_bp01Data_d3[4];/* Computed Parameter: uDLookupTable_bp01Data_d3
                                         * Referenced by: '<S15>/1-D Lookup Table'
                                         */
  real32_T Constant1_Value_ea;         /* Computed Parameter: Constant1_Value_ea
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real32_T vSet_Value;                 /* Computed Parameter: vSet_Value
                                        * Referenced by: '<S17>/vSet'
                                        */
  real32_T Gain_Gain_ki;               /* Computed Parameter: Gain_Gain_ki
                                        * Referenced by: '<Root>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real32_T Constant_Value_he;          /* Computed Parameter: Constant_Value_he
                                        * Referenced by: '<S11>/Constant'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S92>/Delay1'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S92>/Delay'
                                        */
  boolean_T Constant2_Value_e;         /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S66>/Constant2'
                                        */
  boolean_T Memory1_InitialCondition_a;/* Computed Parameter: Memory1_InitialCondition_a
                                        * Referenced by: '<S22>/Memory1'
                                        */
  boolean_T Constant_Value_fj;         /* Computed Parameter: Constant_Value_fj
                                        * Referenced by: '<S23>/Constant'
                                        */
  boolean_T Memory1_1_InitialCondition;/* Computed Parameter: Memory1_1_InitialCondition
                                        * Referenced by: '<S23>/Memory1'
                                        */
  boolean_T Memory1_1_InitialCondition_n;/* Computed Parameter: Memory1_1_InitialCondition_n
                                          * Referenced by: '<S47>/Memory1'
                                          */
  boolean_T Merge_1_InitialOutput;     /* Computed Parameter: Merge_1_InitialOutput
                                        * Referenced by: '<S47>/Merge'
                                        */
  boolean_T Constant5_Value_n;         /* Computed Parameter: Constant5_Value_n
                                        * Referenced by: '<S29>/Constant5'
                                        */
  boolean_T Constant6_Value_m;         /* Computed Parameter: Constant6_Value_m
                                        * Referenced by: '<S29>/Constant6'
                                        */
  boolean_T Constant1_Value_m;         /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S21>/Constant1'
                                        */
  boolean_T Constant1_Value_i;         /* Computed Parameter: Constant1_Value_i
                                        * Referenced by: '<S20>/Constant1'
                                        */
  boolean_T Constant2_Value_d;         /* Computed Parameter: Constant2_Value_d
                                        * Referenced by: '<S20>/Constant2'
                                        */
  boolean_T Constant_Value_ao;         /* Computed Parameter: Constant_Value_ao
                                        * Referenced by: '<S98>/Constant'
                                        */
  boolean_T Constant_Value_n5;         /* Computed Parameter: Constant_Value_n5
                                        * Referenced by: '<S118>/Constant'
                                        */
  boolean_T Constant6_Value_l;         /* Computed Parameter: Constant6_Value_l
                                        * Referenced by: '<S119>/Constant6'
                                        */
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S3>/Out1'
                                        */
  boolean_T Zero_Value[40];            /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S3>/Zero'
                                        */
  boolean_T Delay1_InitialCondition;   /* Computed Parameter: Delay1_InitialCondition
                                        * Referenced by: '<S92>/Delay1'
                                        */
  boolean_T Constant1_Value_hx;        /* Computed Parameter: Constant1_Value_hx
                                        * Referenced by: '<S92>/Constant1'
                                        */
  boolean_T Merge6_InitialOutput;      /* Computed Parameter: Merge6_InitialOutput
                                        * Referenced by: '<S92>/Merge6'
                                        */
  boolean_T Memory_InitialCondition_f; /* Computed Parameter: Memory_InitialCondition_f
                                        * Referenced by: '<S139>/Memory'
                                        */
  boolean_T Memory2_InitialCondition_e;/* Computed Parameter: Memory2_InitialCondition_e
                                        * Referenced by: '<S11>/Memory2'
                                        */
  boolean_T Constant1_Value_mj;        /* Computed Parameter: Constant1_Value_mj
                                        * Referenced by: '<S11>/Constant1'
                                        */
  boolean_T Memory_InitialCondition_o; /* Computed Parameter: Memory_InitialCondition_o
                                        * Referenced by: '<S11>/Memory'
                                        */
  boolean_T Memory1_InitialCondition_f;/* Computed Parameter: Memory1_InitialCondition_f
                                        * Referenced by: '<S11>/Memory1'
                                        */
  boolean_T Constant_Value_kx;         /* Computed Parameter: Constant_Value_kx
                                        * Referenced by: '<S10>/Constant'
                                        */
  boolean_T Memory_InitialCondition_o4;/* Computed Parameter: Memory_InitialCondition_o4
                                        * Referenced by: '<S16>/Memory'
                                        */
  boolean_T Memory1_InitialCondition_ap;/* Computed Parameter: Memory1_InitialCondition_ap
                                         * Referenced by: '<S16>/Memory1'
                                         */
  boolean_T Memory_InitialCondition_gv;/* Computed Parameter: Memory_InitialCondition_gv
                                        * Referenced by: '<S4>/Memory'
                                        */
  boolean_T Constant_Value_dc;         /* Computed Parameter: Constant_Value_dc
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint8_T Gain3_Gain_a;                /* Computed Parameter: Gain3_Gain_a
                                        * Referenced by: '<S11>/Gain3'
                                        */
  uint8_T Gain2_Gain_fo;               /* Computed Parameter: Gain2_Gain_fo
                                        * Referenced by: '<S11>/Gain2'
                                        */
  uint8_T Gain1_Gain_n;                /* Computed Parameter: Gain1_Gain_n
                                        * Referenced by: '<S11>/Gain1'
                                        */
  uint8_T Gain_Gain_d;                 /* Computed Parameter: Gain_Gain_d
                                        * Referenced by: '<S11>/Gain'
                                        */
  P_CoreSubsys_AccTarSel_g_T CoreSubsys_p;/* '<S7>/For Each Subsystem' */
  P_CoreSubsys_AccTarSel_T CoreSubsys; /* '<S6>/For Each Subsystem' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem2_f;/* '<S28>/If Action Subsystem2' */
  P_ObjNoStop_AccTarSel_T ObjStopped;  /* '<S58>/ObjStopped' */
  P_ObjNoStop_AccTarSel_T ObjNoStop;   /* '<S58>/ObjNoStop' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem1_hk;/* '<S45>/If Action Subsystem1' */
  P_IfActionSubsystem2_AccTarSe_T IfActionSubsystem2_l;/* '<S48>/If Action Subsystem2' */
  P_Approaching_AccTarSel_T Leaving;   /* '<S36>/Leaving' */
  P_Approaching_AccTarSel_T Approaching;/* '<S36>/Approaching' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem3;/* '<S22>/If Action Subsystem3' */
  P_IfActionSubsystem_AccTarSel_T IfActionSubsystem_m;/* '<S22>/If Action Subsystem' */
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
                                        * Referenced by: '<S102>/P_vyCutInThres'
                                        */
extern real32_T rtP_P_aFOCApproachIntpAcitve;/* Variable: P_aFOCApproachIntpAcitve
                                              * Referenced by:
                                              *   '<S25>/P_aFOCApproachIntpAcitve'
                                              *   '<S74>/P_aFOCApproachIntpAcitve'
                                              */
extern real32_T rtP_P_aFOCApproachIntpEnsure;/* Variable: P_aFOCApproachIntpEnsure
                                              * Referenced by:
                                              *   '<S25>/P_aFOCApproachIntpEnsure'
                                              *   '<S74>/P_aFOCApproachIntpEnsure'
                                              */
extern real32_T rtP_P_adtMaxBDC;       /* Variable: P_adtMaxBDC
                                        * Referenced by: '<S54>/P_adtMaxBDC'
                                        */
extern real32_T rtP_P_dAimMin;         /* Variable: P_dAimMin
                                        * Referenced by: '<S24>/P_dAimMin'
                                        */
extern real32_T rtP_P_dObjDrvOffMax;   /* Variable: P_dObjDrvOffMax
                                        * Referenced by: '<S10>/P_dObjDrvOffMax'
                                        */
extern real32_T rtP_P_dObjDrvOffMin;   /* Variable: P_dObjDrvOffMin
                                        * Referenced by: '<S10>/P_dObjDrvOffMin'
                                        */
extern real32_T rtP_P_dObjLowHystDecToStop;/* Variable: P_dObjLowHystDecToStop
                                            * Referenced by: '<S29>/P_dObjLowHystDecToStop'
                                            */
extern real32_T rtP_P_dObjUpperHystDecToStop;/* Variable: P_dObjUpperHystDecToStop
                                              * Referenced by: '<S29>/P_dObjUpperHystDecToStop'
                                              */
extern real32_T rtP_P_dResMax;         /* Variable: P_dResMax
                                        * Referenced by: '<S59>/P_dResMax'
                                        */
extern real32_T rtP_P_dStandStill;     /* Variable: P_dStandStill
                                        * Referenced by:
                                        *   '<S59>/P_dStandStill'
                                        *   '<S68>/P_dStandStill'
                                        */
extern real32_T rtP_P_dStandStillMin;  /* Variable: P_dStandStillMin
                                        * Referenced by: '<S68>/P_dStandStillMin'
                                        */
extern real32_T rtP_P_dvarYMax4PO;     /* Variable: P_dvarYMax4PO
                                        * Referenced by: '<S114>/P_dvarYMax4PO'
                                        */
extern real32_T rtP_P_dyCutInThres;    /* Variable: P_dyCutInThres
                                        * Referenced by: '<S102>/P_dyCutInThres'
                                        */
extern real32_T rtP_P_facBDCInit;      /* Variable: P_facBDCInit
                                        * Referenced by: '<S68>/P_facBDCInit'
                                        */
extern real32_T rtP_P_facBDCIterCalc;  /* Variable: P_facBDCIterCalc
                                        * Referenced by:
                                        *   '<S70>/P_facBDCIterCalc'
                                        *   '<S71>/P_facBDCIterCalc'
                                        */
extern real32_T rtP_P_facFOCNegDiff;   /* Variable: P_facFOCNegDiff
                                        * Referenced by:
                                        *   '<S81>/P_facFOCNegDiff'
                                        *   '<S82>/P_facFOCNegDiff'
                                        *   '<S83>/P_facFOCNegDiff'
                                        */
extern real32_T rtP_P_facFOCPosDiff;   /* Variable: P_facFOCPosDiff
                                        * Referenced by:
                                        *   '<S81>/P_facFOCPosDiff'
                                        *   '<S84>/P_facFOCPosDiff'
                                        *   '<S85>/P_facFOCPosDiff'
                                        */
extern real32_T rtP_P_kapHystThres;    /* Variable: P_kapHystThres
                                        * Referenced by: '<S124>/P_kapHystThres'
                                        */
extern real32_T rtP_P_plausMin4PO;     /* Variable: P_plausMin4PO
                                        * Referenced by: '<S117>/P_plausMin4PO'
                                        */
extern real32_T rtP_P_probExistMin4PO; /* Variable: P_probExistMin4PO
                                        * Referenced by: '<S114>/P_probExistMin4PO'
                                        */
extern real32_T rtP_P_tAxTrackNegLower;/* Variable: P_tAxTrackNegLower
                                        * Referenced by: '<S141>/Constant2'
                                        */
extern real32_T rtP_P_tAxTrackNegUpper;/* Variable: P_tAxTrackNegUpper
                                        * Referenced by: '<S141>/Constant3'
                                        */
extern real32_T rtP_P_tAxTrackPosLower;/* Variable: P_tAxTrackPosLower
                                        * Referenced by: '<S141>/Constant10'
                                        */
extern real32_T rtP_P_tAxTrackPosUpper;/* Variable: P_tAxTrackPosUpper
                                        * Referenced by: '<S141>/Constant11'
                                        */
extern real32_T rtP_P_tBDCStartFilt;   /* Variable: P_tBDCStartFilt
                                        * Referenced by: '<S54>/P_tBDCStartFilt'
                                        */
extern real32_T rtP_P_tCSC;            /* Variable: P_tCSC
                                        * Referenced by: '<S15>/P_tSSCPos'
                                        */
extern real32_T rtP_P_tCurvFilt;       /* Variable: P_tCurvFilt
                                        * Referenced by: '<S124>/P_tCurvFilt'
                                        */
extern real32_T rtP_P_tCutInFilt;      /* Variable: P_tCutInFilt
                                        * Referenced by: '<S102>/P_tCutInFilt'
                                        */
extern real32_T rtP_P_tFOCStationaryFast;/* Variable: P_tFOCStationaryFast
                                          * Referenced by: '<S28>/P_tFOCStationaryFast'
                                          */
extern real32_T rtP_P_tFOCStationarySlow;/* Variable: P_tFOCStationarySlow
                                          * Referenced by: '<S28>/P_tFOCStationarySlow'
                                          */
extern real32_T rtP_P_tFiltAxAbsPONegFast;/* Variable: P_tFiltAxAbsPONegFast
                                           * Referenced by: '<S141>/Constant1'
                                           */
extern real32_T rtP_P_tFiltAxAbsPONegSlow;/* Variable: P_tFiltAxAbsPONegSlow
                                           * Referenced by: '<S141>/Constant4'
                                           */
extern real32_T rtP_P_tFiltAxAbsPOPosFast;/* Variable: P_tFiltAxAbsPOPosFast
                                           * Referenced by: '<S141>/Constant9'
                                           */
extern real32_T rtP_P_tFiltAxAbsPOPosSlow;/* Variable: P_tFiltAxAbsPOPosSlow
                                           * Referenced by: '<S141>/Constant12'
                                           */
extern real32_T rtP_P_tFiltAxAbsPOStand;/* Variable: P_tFiltAxAbsPOStand
                                         * Referenced by: '<S141>/Constant8'
                                         */
extern real32_T rtP_P_tFiltDAim;       /* Variable: P_tFiltDAim
                                        * Referenced by: '<S24>/P_tFiltDAim'
                                        */
extern real32_T rtP_P_tFiltDsd;        /* Variable: P_tFiltDsd
                                        * Referenced by: '<S33>/P_tFiltDsd'
                                        */
extern real32_T rtP_P_tFiltVxAxPOFast; /* Variable: P_tFiltVxAxPOFast
                                        * Referenced by: '<S141>/P_tFiltVxAxPOFast'
                                        */
extern real32_T rtP_P_tFiltVxAxPOSlow; /* Variable: P_tFiltVxAxPOSlow
                                        * Referenced by: '<S141>/P_tFiltVxAxPOSlow'
                                        */
extern real32_T rtP_P_tMinDrvPhase;    /* Variable: P_tMinDrvPhase
                                        * Referenced by: '<Root>/P_tMinDrvPhase'
                                        */
extern real32_T rtP_P_tPredObjLeav;    /* Variable: P_tPredObjLeav
                                        * Referenced by: '<S36>/Constant'
                                        */
extern real32_T rtP_P_tRollingFilt;    /* Variable: P_tRollingFilt
                                        * Referenced by: '<S51>/P_tRollingFilt'
                                        */
extern real32_T rtP_P_tRollingFinFilt; /* Variable: P_tRollingFinFilt
                                        * Referenced by: '<S51>/P_tRollingFinFilt'
                                        */
extern real32_T rtP_P_tSSCNeg;         /* Variable: P_tSSCNeg
                                        * Referenced by: '<S17>/P_tSSCNeg'
                                        */
extern real32_T rtP_P_tSSCPos;         /* Variable: P_tSSCPos
                                        * Referenced by: '<S17>/P_tSSCPos'
                                        */
extern real32_T rtP_P_tToStop;         /* Variable: P_tToStop
                                        * Referenced by: '<S63>/P_tToStop'
                                        */
extern real32_T rtP_P_tToStopInBDC;    /* Variable: P_tToStopInBDC
                                        * Referenced by: '<S63>/P_tToStopInBDC'
                                        */
extern real32_T rtP_P_tToStopTrig;     /* Variable: P_tToStopTrig
                                        * Referenced by: '<S58>/P_tToStop'
                                        */
extern real32_T rtP_P_vEgoDecToStop;   /* Variable: P_vEgoDecToStop
                                        * Referenced by: '<S29>/P_vEgoDecToStop'
                                        */
extern real32_T rtP_P_vEgoLowBDC;      /* Variable: P_vEgoLowBDC
                                        * Referenced by: '<S46>/P_vEgoLowBDC'
                                        */
extern real32_T rtP_P_vFOCNegDiff;     /* Variable: P_vFOCNegDiff
                                        * Referenced by:
                                        *   '<S81>/P_vFOCNegDiff'
                                        *   '<S82>/P_vFOCNegDiff'
                                        */
extern real32_T rtP_P_vFOCPosDiff;     /* Variable: P_vFOCPosDiff
                                        * Referenced by:
                                        *   '<S81>/P_vFOCPosDiff'
                                        *   '<S85>/P_vFOCPosDiff'
                                        */
extern real32_T rtP_P_vFOCStationaryFast;/* Variable: P_vFOCStationaryFast
                                          * Referenced by: '<S28>/P_vFOCStationaryFast'
                                          */
extern real32_T rtP_P_vFOCStationarySlow;/* Variable: P_vFOCStationarySlow
                                          * Referenced by: '<S28>/P_vFOCStationarySlow'
                                          */
extern real32_T rtP_P_vObjDrvOff;      /* Variable: P_vObjDrvOff
                                        * Referenced by: '<S10>/P_vObjDrvOff'
                                        */
extern real32_T rtP_P_vObjLowHystDecToStop;/* Variable: P_vObjLowHystDecToStop
                                            * Referenced by: '<S29>/P_vObjLowHystDecToStop'
                                            */
extern real32_T rtP_P_vObjNoStop;      /* Variable: P_vObjNoStop
                                        * Referenced by: '<S58>/P_vObjNoStop'
                                        */
extern real32_T rtP_P_vObjReCalc;      /* Variable: P_vObjReCalc
                                        * Referenced by: '<S59>/P_vObjReCalc'
                                        */
extern real32_T rtP_P_vObjStop;        /* Variable: P_vObjStop
                                        * Referenced by: '<S58>/P_vObjStop'
                                        */
extern real32_T rtP_P_vObjUpperHystDecToStop;/* Variable: P_vObjUpperHystDecToStop
                                              * Referenced by: '<S29>/P_vObjUpperHystDecToStop'
                                              */
extern real32_T rtP_P_vStandStill;     /* Variable: P_vStandStill
                                        * Referenced by: '<Root>/P_vStandStill'
                                        */
extern real32_T rtP_P_vStandStillHyst; /* Variable: P_vStandStillHyst
                                        * Referenced by: '<Root>/P_vStandStillHyst'
                                        */
extern boolean_T rtP_P_CutInEnable;    /* Variable: P_CutInEnable
                                        * Referenced by: '<S102>/P_CutInEnable'
                                        */
extern boolean_T rtP_P_PlausIntegDisable;/* Variable: P_PlausIntegDisable
                                          * Referenced by: '<S96>/Constant4'
                                          */
extern boolean_T rtP_P_StandObjEnable; /* Variable: P_StandObjEnable
                                        * Referenced by: '<S116>/P_StandObjEnable'
                                        */
extern void AccTarSel_Init(void);
extern void AccTarSel_Reset(void);
extern void AccTarSel_Start(void);
extern void AccTarSel_Update(ATS_PO_ST *rty_ATS_Po_st);
extern void AccTarSel(const COM_VEHBUS_ST *rtu_CANInput, const FUS_OBJ_OUTPUT_ST
                      *rtu_ObjList, const VSI_VEHSTATE_ST *rtu_VSI_VehState_st,
                      const SYS_INFO_ST *rtu_SYS_Info_st, const Radar410_Info_ST
                      *rtu_ObjRadarList, const VLC_LGTCMD_ST *rtu_VLC_Cmd_K1,
                      const boolean_T *rtu_TJA_Active, ACC_LGTCTRL_ST
                      *rty_ACC_LgtCtrl_st, ATS_PO_ST *rty_ATS_Po_st);

/* Model reference registration function */
extern void AccTarSel_initialize(const char_T **rt_errorStatus);

#ifndef AccTarSel_MDLREF_HIDE_CHILD_

extern void AccTarSel_IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1,
  real32_T *rty_Out2, P_IfActionSubsystem_AccTarSel_T *localP);
extern void AccTarSel_Approaching(boolean_T *rty_Out1, P_Approaching_AccTarSel_T
  *localP);
extern void AccTarSel_Hold(boolean_T rtu_In1, boolean_T *rty_Out1);
extern void AccTarSel_IfActionSubsystem2(real32_T *rty_Out1,
  P_IfActionSubsystem2_AccTarSe_T *localP);
extern void AccTarSel_IfActionSubsystem3(real32_T rtu_In1, real32_T *rty_Out1);
extern void AccTarSel_ObjNoStop(real32_T *rty_tToStop, real32_T *rty_dToStop,
  P_ObjNoStop_AccTarSel_T *localP);
extern void AccTarSel_IfActionSubsystem1(real32_T rtu_vRelAim, real32_T rtu_vRel,
  real32_T *rty_Out1);

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
 * '<S4>'   : 'AccTarSel/ACC_dTarSet'
 * '<S5>'   : 'AccTarSel/EgoCourseFusion'
 * '<S6>'   : 'AccTarSel/ObjAdapter'
 * '<S7>'   : 'AccTarSel/ObjRadarAdapter'
 * '<S8>'   : 'AccTarSel/RTI Data'
 * '<S9>'   : 'AccTarSel/Subsystem'
 * '<S10>'  : 'AccTarSel/Subsystem1'
 * '<S11>'  : 'AccTarSel/Subsystem3'
 * '<S12>'  : 'AccTarSel/Target_PreProcess'
 * '<S13>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl'
 * '<S14>'  : 'AccTarSel/ACC_Control/ArbitraryMix'
 * '<S15>'  : 'AccTarSel/ACC_Control/CurvSpdCtrl'
 * '<S16>'  : 'AccTarSel/ACC_Control/FollowObjCtrl'
 * '<S17>'  : 'AccTarSel/ACC_Control/SetSpdCtrl'
 * '<S18>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl/LowerLimitation'
 * '<S19>'  : 'AccTarSel/ACC_Control/AccelBoundCtrl/UpperLimitation'
 * '<S20>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjInvalid'
 * '<S21>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid'
 * '<S22>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl'
 * '<S23>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl'
 * '<S24>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/CalcDAim'
 * '<S25>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX'
 * '<S26>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/If Action Subsystem'
 * '<S27>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/If Action Subsystem1'
 * '<S28>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl'
 * '<S29>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl'
 * '<S30>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem'
 * '<S31>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem2'
 * '<S32>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/If Action Subsystem3'
 * '<S33>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/calcDSlowDown'
 * '<S34>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1'
 * '<S35>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case2'
 * '<S36>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving'
 * '<S37>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/tStopObj'
 * '<S38>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/calcDSlowDown/LPFilter'
 * '<S39>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1/Subsystem'
 * '<S40>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/case1/Subsystem1'
 * '<S41>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving/Approaching'
 * '<S42>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving/Hold'
 * '<S43>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/ApproachingCtrl/isObjLeaving/Leaving'
 * '<S44>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/BDC_State_Machine'
 * '<S45>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA'
 * '<S46>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria'
 * '<S47>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile'
 * '<S48>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem'
 * '<S49>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem1'
 * '<S50>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem'
 * '<S51>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1'
 * '<S52>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem2'
 * '<S53>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem3'
 * '<S54>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/Subsystem'
 * '<S55>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1/LPFilter'
 * '<S56>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/If Action Subsystem1/LPFilter1'
 * '<S57>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcA/If Action Subsystem/Subsystem/LPFilter'
 * '<S58>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop'
 * '<S59>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcProfileReCalc'
 * '<S60>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjNoStop'
 * '<S61>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjStopped'
 * '<S62>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/ObjStopping'
 * '<S63>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcCriteria/calcObjStop/Subsystem'
 * '<S64>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/If Action Subsystem'
 * '<S65>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc'
 * '<S66>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/default'
 * '<S67>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem'
 * '<S68>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/calcInitCondition'
 * '<S69>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration'
 * '<S70>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration/calcD30'
 * '<S71>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/BrakeDistCtrl/calcProfile/calc/Subsystem/Iteration/calcV30'
 * '<S72>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/CalcDAim/LPFilter'
 * '<S73>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/LPFilter'
 * '<S74>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem'
 * '<S75>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem'
 * '<S76>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem1'
 * '<S77>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/FOC_MIX/Subsystem/If Action Subsystem2'
 * '<S78>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem1'
 * '<S79>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem2'
 * '<S80>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/If Action Subsystem4'
 * '<S81>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal'
 * '<S82>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem'
 * '<S83>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem4'
 * '<S84>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem5'
 * '<S85>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StationaryCtrl/calcCharactVal/If Action Subsystem6'
 * '<S86>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem'
 * '<S87>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem1'
 * '<S88>'  : 'AccTarSel/ACC_Control/FollowObjCtrl/FollowObjValid/StopGoCtrl/If Action Subsystem2'
 * '<S89>'  : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem'
 * '<S90>'  : 'AccTarSel/ACC_Control/SetSpdCtrl/If Action Subsystem1'
 * '<S91>'  : 'AccTarSel/ACC_Target_Selection/Subsystem'
 * '<S92>'  : 'AccTarSel/ACC_Target_Selection/TargetSel'
 * '<S93>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc'
 * '<S94>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc'
 * '<S95>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation'
 * '<S96>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc'
 * '<S97>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc'
 * '<S98>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck'
 * '<S99>'  : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/If Action Subsystem'
 * '<S100>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem'
 * '<S101>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/If Action Subsystem'
 * '<S102>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem'
 * '<S103>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem'
 * '<S104>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/If Action Subsystem1'
 * '<S105>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/CutInCalc/Subsystem/Subsystem/LPFilter'
 * '<S106>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/DistanceToTraj'
 * '<S107>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/EgoCourseDeviation/If Action Subsystem'
 * '<S108>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem'
 * '<S109>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LanePlausCalc/If Action Subsystem1'
 * '<S110>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/If Action Subsystem'
 * '<S111>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/LaneProbCalc/Subsystem'
 * '<S112>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/If Action Subsystem'
 * '<S113>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem'
 * '<S114>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckExistence'
 * '<S115>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckFOV'
 * '<S116>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckMotSts'
 * '<S117>' : 'AccTarSel/ACC_Target_Selection/Subsystem/ValidObjCalc/TargetPlausCheck/Subsystem/CheckPlaus'
 * '<S118>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem'
 * '<S119>' : 'AccTarSel/ACC_Target_Selection/TargetSel/If Action Subsystem1'
 * '<S120>' : 'AccTarSel/ACC_dTarSet/If Action Subsystem'
 * '<S121>' : 'AccTarSel/ACC_dTarSet/If Action Subsystem1'
 * '<S122>' : 'AccTarSel/ACC_dTarSet/If Action Subsystem2'
 * '<S123>' : 'AccTarSel/ACC_dTarSet/Subsystem'
 * '<S124>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt'
 * '<S125>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem'
 * '<S126>' : 'AccTarSel/EgoCourseFusion/CurvatureFilt/If Action Subsystem1'
 * '<S127>' : 'AccTarSel/ObjAdapter/For Each Subsystem'
 * '<S128>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcDx'
 * '<S129>' : 'AccTarSel/ObjAdapter/For Each Subsystem/calcHist'
 * '<S130>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem'
 * '<S131>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcDx'
 * '<S132>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcMotionSts'
 * '<S133>' : 'AccTarSel/ObjRadarAdapter/For Each Subsystem/calcType'
 * '<S134>' : 'AccTarSel/RTI Data/RTI Data Store'
 * '<S135>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store'
 * '<S136>' : 'AccTarSel/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S137>' : 'AccTarSel/Subsystem1/If Action Subsystem'
 * '<S138>' : 'AccTarSel/Subsystem1/If Action Subsystem1'
 * '<S139>' : 'AccTarSel/Subsystem3/calcOverride'
 * '<S140>' : 'AccTarSel/Target_PreProcess/If Action Subsystem'
 * '<S141>' : 'AccTarSel/Target_PreProcess/preFilt'
 * '<S142>' : 'AccTarSel/Target_PreProcess/preFilt/Hold'
 * '<S143>' : 'AccTarSel/Target_PreProcess/preFilt/NegTimeInc'
 * '<S144>' : 'AccTarSel/Target_PreProcess/preFilt/PosTimeInc'
 * '<S145>' : 'AccTarSel/Target_PreProcess/preFilt/axAbsFilt'
 * '<S146>' : 'AccTarSel/Target_PreProcess/preFilt/axFilt'
 * '<S147>' : 'AccTarSel/Target_PreProcess/preFilt/dxFilt'
 * '<S148>' : 'AccTarSel/Target_PreProcess/preFilt/vxFilt'
 */
#endif                                 /* RTW_HEADER_AccTarSel_h_ */
