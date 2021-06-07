/*
 * LM_TOS.h
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

#ifndef RTW_HEADER_LM_TOS_h_
#define RTW_HEADER_LM_TOS_h_
#include <string.h>
#ifndef LM_TOS_COMMON_INCLUDES_
# define LM_TOS_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <rtican_ds1401.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* LM_TOS_COMMON_INCLUDES_ */

#include "LM_TOS_types.h"

/* Shared type includes */
#include "multiword_types.h"

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

/* Block signals (default storage) */
typedef struct {
  FUS_OUTOBJ_LIST_ST BusConversion_InsertedFor_LM_TO;
  TARGETOBJECTS_ST_adp LM_TOS_ALGORISM_o3;/* '<S2>/LM_TOS_ALGORISM' */
  SEGMENTS_ST_adp LM_TOS_ALGORISM_o4;  /* '<S2>/LM_TOS_ALGORISM' */
  LM_LANE_ST BusCreator;               /* '<S10>/Bus Creator' */
  LM_LANE_ST BusCreator_d;             /* '<S11>/Bus Creator' */
  LM_LANE_ST BusCreator_n;             /* '<S12>/Bus Creator' */
  LM_LANE_ST BusCreator_m;             /* '<S13>/Bus Creator' */
  LM_LANE_ST BusCreator_dn;            /* '<S14>/Bus Creator' */
  LM_LANE_ST VectorConcatenate[5];     /* '<S7>/Vector Concatenate' */
  HWA_TARGETOBJECT_OUTPUT_ST BusCreator_n3;/* '<S9>/Bus Creator' */
  HWA_TARGETOBJECT_OUTPUT_ADAPTER_ST LM_TOS_ALGORISM_o5;/* '<S2>/LM_TOS_ALGORISM' */
  HMI_OUTPUT_ST_APT LM_TOS_ALGORISM_o7;/* '<S2>/LM_TOS_ALGORISM' */
  HMI_DISPLAY_ARRAY_ST BusCreator_j;   /* '<S15>/Bus Creator' */
  FUS_OBJ_DATA_ST TmpSignalConversionAtSelectorIn[40];
  FUS_OBJ_DATA_ST Selector18;          /* '<S8>/Selector18' */
  FUS_OBJ_DATA_ST Selector19;          /* '<S8>/Selector19' */
  FUS_OBJ_DATA_ST Selector28;          /* '<S8>/Selector28' */
  FUS_OBJ_DATA_ST Selector29;          /* '<S8>/Selector29' */
  FUS_OBJ_DATA_ST Selector30;          /* '<S8>/Selector30' */
  FUS_OBJ_DATA_ST Selector31;          /* '<S8>/Selector31' */
  FUS_OBJ_DATA_ST Selector32;          /* '<S8>/Selector32' */
  FUS_OBJ_DATA_ST Selector33;          /* '<S8>/Selector33' */
  FUS_OBJ_DATA_ST Selector34;          /* '<S8>/Selector34' */
  FUS_OBJ_DATA_ST Selector35;          /* '<S8>/Selector35' */
  FUS_OBJ_DATA_ST Selector20;          /* '<S8>/Selector20' */
  FUS_OBJ_DATA_ST Selector21;          /* '<S8>/Selector21' */
  FUS_OBJ_DATA_ST Selector24;          /* '<S8>/Selector24' */
  FUS_OBJ_DATA_ST Selector25;          /* '<S8>/Selector25' */
  FUS_OBJ_DATA_ST Selector26;          /* '<S8>/Selector26' */
  FUS_OBJ_DATA_ST Selector27;          /* '<S8>/Selector27' */
  FUS_OBJ_DATA_ST Selector22;          /* '<S8>/Selector22' */
  FUS_OBJ_DATA_ST Selector23;          /* '<S8>/Selector23' */
  FUS_OBJ_DATA_ST Selector;            /* '<S8>/Selector' */
  FUS_OBJ_DATA_ST Selector1;           /* '<S8>/Selector1' */
  FUS_OBJ_DATA_ST Selector2;           /* '<S8>/Selector2' */
  FUS_OBJ_DATA_ST Selector3;           /* '<S8>/Selector3' */
  FUS_OBJ_DATA_ST Selector4;           /* '<S8>/Selector4' */
  FUS_OBJ_DATA_ST Selector5;           /* '<S8>/Selector5' */
  FUS_OBJ_DATA_ST Selector6;           /* '<S8>/Selector6' */
  FUS_OBJ_DATA_ST Selector7;           /* '<S8>/Selector7' */
  FUS_OBJ_DATA_ST Selector8;           /* '<S8>/Selector8' */
  FUS_OBJ_DATA_ST Selector9;           /* '<S8>/Selector9' */
  FUS_OBJ_DATA_ST Selector10;          /* '<S8>/Selector10' */
  FUS_OBJ_DATA_ST Selector11;          /* '<S8>/Selector11' */
  FUS_OBJ_DATA_ST Selector14;          /* '<S8>/Selector14' */
  FUS_OBJ_DATA_ST Selector15;          /* '<S8>/Selector15' */
  FUS_OBJ_DATA_ST Selector16;          /* '<S8>/Selector16' */
  FUS_OBJ_DATA_ST Selector17;          /* '<S8>/Selector17' */
  FUS_OBJ_DATA_ST Selector12;          /* '<S8>/Selector12' */
  FUS_OBJ_DATA_ST Selector13;          /* '<S8>/Selector13' */
  FUS_OBJ_DATA_ST Selector38;          /* '<S8>/Selector38' */
  FUS_OBJ_DATA_ST Selector39;          /* '<S8>/Selector39' */
  FUS_OBJ_DATA_ST Selector36;          /* '<S8>/Selector36' */
  FUS_OBJ_DATA_ST Selector37;          /* '<S8>/Selector37' */
  LANES_BAS_INFO_ST_adt LM_TOS_ALGORISM_o2;/* '<S2>/LM_TOS_ALGORISM' */
  NARROW_LANE_SUPPORT_OUTPUT_ST LM_TOS_ALGORISM_o8;/* '<S2>/LM_TOS_ALGORISM' */
  TARGETOBJECT BusCreator1;            /* '<S28>/Bus Creator1' */
  TARGETOBJECT BusCreator1_l;          /* '<S29>/Bus Creator1' */
  TARGETOBJECT BusCreator1_f;          /* '<S36>/Bus Creator1' */
  TARGETOBJECT BusCreator1_h;          /* '<S37>/Bus Creator1' */
  TARGETOBJECT BusCreator1_j;          /* '<S38>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ji;         /* '<S39>/Bus Creator1' */
  TARGETOBJECT BusCreator1_k;          /* '<S40>/Bus Creator1' */
  TARGETOBJECT BusCreator1_e;          /* '<S41>/Bus Creator1' */
  TARGETOBJECT BusCreator1_d;          /* '<S42>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c;          /* '<S43>/Bus Creator1' */
  TARGETOBJECT BusCreator1_kg;         /* '<S44>/Bus Creator1' */
  TARGETOBJECT BusCreator1_i;          /* '<S45>/Bus Creator1' */
  TARGETOBJECT BusCreator1_lw;         /* '<S52>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c3;         /* '<S53>/Bus Creator1' */
  TARGETOBJECT BusCreator1_p;          /* '<S54>/Bus Creator1' */
  TARGETOBJECT BusCreator1_b;          /* '<S55>/Bus Creator1' */
  TARGETOBJECT BusCreator1_jm;         /* '<S56>/Bus Creator1' */
  TARGETOBJECT BusCreator1_o;          /* '<S57>/Bus Creator1' */
  TARGETOBJECT BusCreator1_lu;         /* '<S58>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ct;         /* '<S59>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ks;         /* '<S60>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ll;         /* '<S61>/Bus Creator1' */
  TARGETOBJECT BusCreator1_a;          /* '<S68>/Bus Creator1' */
  TARGETOBJECT BusCreator1_bo;         /* '<S69>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ot;         /* '<S70>/Bus Creator1' */
  TARGETOBJECT BusCreator1_fw;         /* '<S71>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c4;         /* '<S72>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ff;         /* '<S73>/Bus Creator1' */
  TARGETOBJECT BusCreator1_bm;         /* '<S74>/Bus Creator1' */
  TARGETOBJECT BusCreator1_il;         /* '<S75>/Bus Creator1' */
  TARGETOBJECT BusCreator1_op;         /* '<S76>/Bus Creator1' */
  TARGETOBJECT BusCreator1_n;          /* '<S77>/Bus Creator1' */
  TARGETOBJECT BusCreator1_g;          /* '<S84>/Bus Creator1' */
  TARGETOBJECT BusCreator1_pf;         /* '<S85>/Bus Creator1' */
  TARGETOBJECT BusCreator1_fl;         /* '<S86>/Bus Creator1' */
  TARGETOBJECT BusCreator1_aw;         /* '<S87>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c5;         /* '<S88>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ef;         /* '<S89>/Bus Creator1' */
  TARGETOBJECT BusCreator1_oc;         /* '<S90>/Bus Creator1' */
  TARGETOBJECT BusCreator1_cb;         /* '<S91>/Bus Creator1' */
  TARGETOBJECT BusCreator1_de;         /* '<S92>/Bus Creator1' */
  TARGETOBJECT BusCreator1_bv;         /* '<S93>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m;          /* '<S100>/Bus Creator1' */
  TARGETOBJECT BusCreator1_g3;         /* '<S101>/Bus Creator1' */
  TARGETOBJECT BusCreator1_aa;         /* '<S102>/Bus Creator1' */
  TARGETOBJECT BusCreator1_nh;         /* '<S103>/Bus Creator1' */
  TARGETOBJECT BusCreator1_en;         /* '<S104>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ec;         /* '<S105>/Bus Creator1' */
  TARGETOBJECT BusCreator1_in;         /* '<S106>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ml;         /* '<S107>/Bus Creator1' */
  SEGMENT BusCreator1_pv;              /* '<S30>/Bus Creator1' */
  SEGMENT BusCreator1_bi;              /* '<S31>/Bus Creator1' */
  SEGMENT BusCreator1_iz;              /* '<S32>/Bus Creator1' */
  SEGMENT BusCreator1_ctt;             /* '<S33>/Bus Creator1' */
  SEGMENT BusCreator1_fy;              /* '<S34>/Bus Creator1' */
  SEGMENT BusCreator1_bz;              /* '<S35>/Bus Creator1' */
  SEGMENT BusCreator1_ib;              /* '<S46>/Bus Creator1' */
  SEGMENT BusCreator1_ene;             /* '<S47>/Bus Creator1' */
  SEGMENT BusCreator1_d1;              /* '<S48>/Bus Creator1' */
  SEGMENT BusCreator1_jic;             /* '<S49>/Bus Creator1' */
  SEGMENT BusCreator1_ne;              /* '<S50>/Bus Creator1' */
  SEGMENT BusCreator1_fr;              /* '<S51>/Bus Creator1' */
  SEGMENT BusCreator1_ae;              /* '<S62>/Bus Creator1' */
  SEGMENT BusCreator1_hw;              /* '<S63>/Bus Creator1' */
  SEGMENT BusCreator1_k0;              /* '<S64>/Bus Creator1' */
  SEGMENT BusCreator1_ei;              /* '<S65>/Bus Creator1' */
  SEGMENT BusCreator1_ni;              /* '<S66>/Bus Creator1' */
  SEGMENT BusCreator1_hx;              /* '<S67>/Bus Creator1' */
  SEGMENT BusCreator1_lud;             /* '<S78>/Bus Creator1' */
  SEGMENT BusCreator1_dq;              /* '<S79>/Bus Creator1' */
  SEGMENT BusCreator1_c0;              /* '<S80>/Bus Creator1' */
  SEGMENT BusCreator1_pvz;             /* '<S81>/Bus Creator1' */
  SEGMENT BusCreator1_ls;              /* '<S82>/Bus Creator1' */
  SEGMENT BusCreator1_ly;              /* '<S83>/Bus Creator1' */
  SEGMENT BusCreator1_fz;              /* '<S94>/Bus Creator1' */
  SEGMENT BusCreator1_dg;              /* '<S95>/Bus Creator1' */
  SEGMENT BusCreator1_gb;              /* '<S96>/Bus Creator1' */
  SEGMENT BusCreator1_kz;              /* '<S97>/Bus Creator1' */
  SEGMENT BusCreator1_p1;              /* '<S98>/Bus Creator1' */
  SEGMENT BusCreator1_nb;              /* '<S99>/Bus Creator1' */
  HMI_DISPLAY_ST Selector_a;           /* '<S111>/Selector' */
  HMI_DISPLAY_ST Selector_b;           /* '<S112>/Selector' */
  HMI_DISPLAY_ST Selector_i;           /* '<S113>/Selector' */
  HMI_DISPLAY_ST Selector_f;           /* '<S114>/Selector' */
  HMI_DISPLAY_ST Selector_p;           /* '<S115>/Selector' */
  HMI_DISPLAY_ST Selector_o;           /* '<S116>/Selector' */
  HMI_DISPLAY_ST Selector_e;           /* '<S117>/Selector' */
  HMI_DISPLAY_ST Selector_iq;          /* '<S118>/Selector' */
  HMI_DISPLAY_ST Selector_py;          /* '<S119>/Selector' */
  HMI_DISPLAY_ST Selector_at;          /* '<S120>/Selector' */
  HMI_DISPLAY_ST Selector_ek;          /* '<S121>/Selector' */
  HMI_DISPLAY_ST Selector_c;           /* '<S122>/Selector' */
  HMI_DISPLAY_ST Selector_iqo;         /* '<S123>/Selector' */
  HMI_DISPLAY_ST Selector_m;           /* '<S124>/Selector' */
  HMI_DISPLAY_ST Selector_mg;          /* '<S125>/Selector' */
  HMI_DISPLAY_ST Selector_ci;          /* '<S126>/Selector' */
  HMI_DISPLAY_ST Selector_k;           /* '<S127>/Selector' */
  HMI_DISPLAY_ST Selector_mt;          /* '<S128>/Selector' */
  HMI_DISPLAY_ST Selector_fq;          /* '<S129>/Selector' */
  HMI_DISPLAY_ST Selector_j;           /* '<S130>/Selector' */
  HMI_DISPLAY_ST Selector_f4;          /* '<S131>/Selector' */
  HMI_DISPLAY_ST Selector_je;          /* '<S132>/Selector' */
  HMI_DISPLAY_ST Selector_oe;          /* '<S133>/Selector' */
  HMI_DISPLAY_ST Selector_l;           /* '<S134>/Selector' */
  HMI_DISPLAY_ST Selector_ko;          /* '<S135>/Selector' */
  HMI_DISPLAY_ST Selector_cif;         /* '<S136>/Selector' */
  HMI_DISPLAY_ST Selector_ap;          /* '<S137>/Selector' */
  HMI_DISPLAY_ST Selector_jj;          /* '<S138>/Selector' */
  HMI_DISPLAY_ST Selector_km;          /* '<S139>/Selector' */
  HMI_DISPLAY_ST Selector_eg;          /* '<S140>/Selector' */
  HMI_DISPLAY_ST Selector_au;          /* '<S141>/Selector' */
  HMI_DISPLAY_ST Selector_fg;          /* '<S142>/Selector' */
  real_T DataTypeConversion;           /* '<S111>/Data Type Conversion' */
  real_T DataTypeConversion1;          /* '<S111>/Data Type Conversion1' */
  real_T DataTypeConversion2;          /* '<S111>/Data Type Conversion2' */
  real_T DataTypeConversion3;          /* '<S111>/Data Type Conversion3' */
  real_T DataTypeConversion4;          /* '<S111>/Data Type Conversion4' */
  real_T SFunction1_o1;                /* '<S143>/S-Function1' */
  real_T SFunction1_o2;                /* '<S143>/S-Function1' */
  real_T SFunction1_o3;                /* '<S143>/S-Function1' */
  real_T SFunction1_o4;                /* '<S143>/S-Function1' */
  real_T DataTypeConversion_g;         /* '<S112>/Data Type Conversion' */
  real_T DataTypeConversion1_n;        /* '<S112>/Data Type Conversion1' */
  real_T DataTypeConversion2_k;        /* '<S112>/Data Type Conversion2' */
  real_T DataTypeConversion3_i;        /* '<S112>/Data Type Conversion3' */
  real_T DataTypeConversion4_a;        /* '<S112>/Data Type Conversion4' */
  real_T SFunction1_o1_o;              /* '<S144>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S144>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S144>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S144>/S-Function1' */
  real_T DataTypeConversion_f;         /* '<S113>/Data Type Conversion' */
  real_T DataTypeConversion1_c;        /* '<S113>/Data Type Conversion1' */
  real_T DataTypeConversion2_m;        /* '<S113>/Data Type Conversion2' */
  real_T DataTypeConversion3_m;        /* '<S113>/Data Type Conversion3' */
  real_T DataTypeConversion4_d;        /* '<S113>/Data Type Conversion4' */
  real_T SFunction1_o1_l;              /* '<S145>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S145>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S145>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S145>/S-Function1' */
  real_T DataTypeConversion_e;         /* '<S114>/Data Type Conversion' */
  real_T DataTypeConversion1_k;        /* '<S114>/Data Type Conversion1' */
  real_T DataTypeConversion2_a;        /* '<S114>/Data Type Conversion2' */
  real_T DataTypeConversion3_p;        /* '<S114>/Data Type Conversion3' */
  real_T DataTypeConversion4_aq;       /* '<S114>/Data Type Conversion4' */
  real_T SFunction1_o1_k;              /* '<S146>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S146>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S146>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S146>/S-Function1' */
  real_T DataTypeConversion_o;         /* '<S115>/Data Type Conversion' */
  real_T DataTypeConversion1_d;        /* '<S115>/Data Type Conversion1' */
  real_T DataTypeConversion2_ap;       /* '<S115>/Data Type Conversion2' */
  real_T DataTypeConversion3_l;        /* '<S115>/Data Type Conversion3' */
  real_T DataTypeConversion4_j;        /* '<S115>/Data Type Conversion4' */
  real_T SFunction1_o1_h;              /* '<S147>/S-Function1' */
  real_T SFunction1_o2_if;             /* '<S147>/S-Function1' */
  real_T SFunction1_o3_ko;             /* '<S147>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S147>/S-Function1' */
  real_T DataTypeConversion_i;         /* '<S116>/Data Type Conversion' */
  real_T DataTypeConversion1_i;        /* '<S116>/Data Type Conversion1' */
  real_T DataTypeConversion2_b;        /* '<S116>/Data Type Conversion2' */
  real_T DataTypeConversion3_k;        /* '<S116>/Data Type Conversion3' */
  real_T DataTypeConversion4_dl;       /* '<S116>/Data Type Conversion4' */
  real_T SFunction1_o1_c;              /* '<S148>/S-Function1' */
  real_T SFunction1_o2_ik;             /* '<S148>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S148>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S148>/S-Function1' */
  real_T DataTypeConversion_j;         /* '<S117>/Data Type Conversion' */
  real_T DataTypeConversion1_m;        /* '<S117>/Data Type Conversion1' */
  real_T DataTypeConversion2_g;        /* '<S117>/Data Type Conversion2' */
  real_T DataTypeConversion3_e;        /* '<S117>/Data Type Conversion3' */
  real_T DataTypeConversion4_f;        /* '<S117>/Data Type Conversion4' */
  real_T SFunction1_o1_l1;             /* '<S149>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S149>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S149>/S-Function1' */
  real_T SFunction1_o4_ay;             /* '<S149>/S-Function1' */
  real_T DataTypeConversion_k;         /* '<S118>/Data Type Conversion' */
  real_T DataTypeConversion1_do;       /* '<S118>/Data Type Conversion1' */
  real_T DataTypeConversion2_j;        /* '<S118>/Data Type Conversion2' */
  real_T DataTypeConversion3_ih;       /* '<S118>/Data Type Conversion3' */
  real_T DataTypeConversion4_n;        /* '<S118>/Data Type Conversion4' */
  real_T SFunction1_o1_c3;             /* '<S150>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S150>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S150>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S150>/S-Function1' */
  real_T DataTypeConversion_b;         /* '<S119>/Data Type Conversion' */
  real_T DataTypeConversion1_g;        /* '<S119>/Data Type Conversion1' */
  real_T DataTypeConversion2_i;        /* '<S119>/Data Type Conversion2' */
  real_T DataTypeConversion3_i1;       /* '<S119>/Data Type Conversion3' */
  real_T DataTypeConversion4_j3;       /* '<S119>/Data Type Conversion4' */
  real_T SFunction1_o1_j;              /* '<S151>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S151>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S151>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S151>/S-Function1' */
  real_T DataTypeConversion_m;         /* '<S120>/Data Type Conversion' */
  real_T DataTypeConversion1_a;        /* '<S120>/Data Type Conversion1' */
  real_T DataTypeConversion2_jj;       /* '<S120>/Data Type Conversion2' */
  real_T DataTypeConversion3_lp;       /* '<S120>/Data Type Conversion3' */
  real_T DataTypeConversion4_ae;       /* '<S120>/Data Type Conversion4' */
  real_T SFunction1_o1_a;              /* '<S152>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S152>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S152>/S-Function1' */
  real_T SFunction1_o4_bn;             /* '<S152>/S-Function1' */
  real_T DataTypeConversion_k2;        /* '<S121>/Data Type Conversion' */
  real_T DataTypeConversion1_l;        /* '<S121>/Data Type Conversion1' */
  real_T DataTypeConversion2_d;        /* '<S121>/Data Type Conversion2' */
  real_T DataTypeConversion3_ez;       /* '<S121>/Data Type Conversion3' */
  real_T DataTypeConversion4_k;        /* '<S121>/Data Type Conversion4' */
  real_T SFunction1_o1_a5;             /* '<S153>/S-Function1' */
  real_T SFunction1_o2_dd;             /* '<S153>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S153>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S153>/S-Function1' */
  real_T DataTypeConversion_kt;        /* '<S122>/Data Type Conversion' */
  real_T DataTypeConversion1_o;        /* '<S122>/Data Type Conversion1' */
  real_T DataTypeConversion2_kl;       /* '<S122>/Data Type Conversion2' */
  real_T DataTypeConversion3_l5;       /* '<S122>/Data Type Conversion3' */
  real_T DataTypeConversion4_h;        /* '<S122>/Data Type Conversion4' */
  real_T SFunction1_o1_ld;             /* '<S154>/S-Function1' */
  real_T SFunction1_o2_nk;             /* '<S154>/S-Function1' */
  real_T SFunction1_o3_p0;             /* '<S154>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S154>/S-Function1' */
  real_T DataTypeConversion_d;         /* '<S123>/Data Type Conversion' */
  real_T DataTypeConversion1_b;        /* '<S123>/Data Type Conversion1' */
  real_T DataTypeConversion2_n;        /* '<S123>/Data Type Conversion2' */
  real_T DataTypeConversion3_ee;       /* '<S123>/Data Type Conversion3' */
  real_T DataTypeConversion4_g;        /* '<S123>/Data Type Conversion4' */
  real_T SFunction1_o1_b;              /* '<S155>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S155>/S-Function1' */
  real_T SFunction1_o3_bt;             /* '<S155>/S-Function1' */
  real_T SFunction1_o4_kn;             /* '<S155>/S-Function1' */
  real_T DataTypeConversion_ea;        /* '<S124>/Data Type Conversion' */
  real_T DataTypeConversion1_nh;       /* '<S124>/Data Type Conversion1' */
  real_T DataTypeConversion2_c;        /* '<S124>/Data Type Conversion2' */
  real_T DataTypeConversion3_pi;       /* '<S124>/Data Type Conversion3' */
  real_T DataTypeConversion4_hh;       /* '<S124>/Data Type Conversion4' */
  real_T SFunction1_o1_og;             /* '<S156>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S156>/S-Function1' */
  real_T SFunction1_o3_hs;             /* '<S156>/S-Function1' */
  real_T SFunction1_o4_dv;             /* '<S156>/S-Function1' */
  real_T DataTypeConversion_bm;        /* '<S125>/Data Type Conversion' */
  real_T DataTypeConversion1_bc;       /* '<S125>/Data Type Conversion1' */
  real_T DataTypeConversion2_cv;       /* '<S125>/Data Type Conversion2' */
  real_T DataTypeConversion3_m3;       /* '<S125>/Data Type Conversion3' */
  real_T DataTypeConversion4_l;        /* '<S125>/Data Type Conversion4' */
  real_T SFunction1_o1_f;              /* '<S157>/S-Function1' */
  real_T SFunction1_o2_n2;             /* '<S157>/S-Function1' */
  real_T SFunction1_o3_dw;             /* '<S157>/S-Function1' */
  real_T SFunction1_o4_cd;             /* '<S157>/S-Function1' */
  real_T DataTypeConversion_a;         /* '<S126>/Data Type Conversion' */
  real_T DataTypeConversion1_n4;       /* '<S126>/Data Type Conversion1' */
  real_T DataTypeConversion2_o;        /* '<S126>/Data Type Conversion2' */
  real_T DataTypeConversion3_g;        /* '<S126>/Data Type Conversion3' */
  real_T DataTypeConversion4_hb;       /* '<S126>/Data Type Conversion4' */
  real_T SFunction1_o1_m;              /* '<S158>/S-Function1' */
  real_T SFunction1_o2_nj;             /* '<S158>/S-Function1' */
  real_T SFunction1_o3_cd;             /* '<S158>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S158>/S-Function1' */
  real_T DataTypeConversion_h;         /* '<S127>/Data Type Conversion' */
  real_T DataTypeConversion1_cu;       /* '<S127>/Data Type Conversion1' */
  real_T DataTypeConversion2_f;        /* '<S127>/Data Type Conversion2' */
  real_T DataTypeConversion3_d;        /* '<S127>/Data Type Conversion3' */
  real_T DataTypeConversion4_kg;       /* '<S127>/Data Type Conversion4' */
  real_T SFunction1_o1_d;              /* '<S159>/S-Function1' */
  real_T SFunction1_o2_ba;             /* '<S159>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S159>/S-Function1' */
  real_T SFunction1_o4_lv;             /* '<S159>/S-Function1' */
  real_T DataTypeConversion_hl;        /* '<S128>/Data Type Conversion' */
  real_T DataTypeConversion1_lx;       /* '<S128>/Data Type Conversion1' */
  real_T DataTypeConversion2_k3;       /* '<S128>/Data Type Conversion2' */
  real_T DataTypeConversion3_j;        /* '<S128>/Data Type Conversion3' */
  real_T DataTypeConversion4_e;        /* '<S128>/Data Type Conversion4' */
  real_T SFunction1_o1_g;              /* '<S160>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S160>/S-Function1' */
  real_T SFunction1_o3_by;             /* '<S160>/S-Function1' */
  real_T SFunction1_o4_pw;             /* '<S160>/S-Function1' */
  real_T DataTypeConversion_je;        /* '<S129>/Data Type Conversion' */
  real_T DataTypeConversion1_h;        /* '<S129>/Data Type Conversion1' */
  real_T DataTypeConversion2_c2;       /* '<S129>/Data Type Conversion2' */
  real_T DataTypeConversion3_f;        /* '<S129>/Data Type Conversion3' */
  real_T DataTypeConversion4_l4;       /* '<S129>/Data Type Conversion4' */
  real_T SFunction1_o1_g4;             /* '<S161>/S-Function1' */
  real_T SFunction1_o2_iv;             /* '<S161>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S161>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S161>/S-Function1' */
  real_T DataTypeConversion_js;        /* '<S130>/Data Type Conversion' */
  real_T DataTypeConversion1_b3;       /* '<S130>/Data Type Conversion1' */
  real_T DataTypeConversion2_gz;       /* '<S130>/Data Type Conversion2' */
  real_T DataTypeConversion3_b;        /* '<S130>/Data Type Conversion3' */
  real_T DataTypeConversion4_gv;       /* '<S130>/Data Type Conversion4' */
  real_T SFunction1_o1_j5;             /* '<S162>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S162>/S-Function1' */
  real_T SFunction1_o3_ce;             /* '<S162>/S-Function1' */
  real_T SFunction1_o4_lz;             /* '<S162>/S-Function1' */
  real_T DataTypeConversion_au;        /* '<S131>/Data Type Conversion' */
  real_T DataTypeConversion1_ni;       /* '<S131>/Data Type Conversion1' */
  real_T DataTypeConversion2_md;       /* '<S131>/Data Type Conversion2' */
  real_T DataTypeConversion3_h;        /* '<S131>/Data Type Conversion3' */
  real_T DataTypeConversion4_ej;       /* '<S131>/Data Type Conversion4' */
  real_T SFunction1_o1_jt;             /* '<S163>/S-Function1' */
  real_T SFunction1_o2_i1;             /* '<S163>/S-Function1' */
  real_T SFunction1_o3_je;             /* '<S163>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S163>/S-Function1' */
  real_T DataTypeConversion_jo;        /* '<S132>/Data Type Conversion' */
  real_T DataTypeConversion1_hu;       /* '<S132>/Data Type Conversion1' */
  real_T DataTypeConversion2_da;       /* '<S132>/Data Type Conversion2' */
  real_T DataTypeConversion3_pj;       /* '<S132>/Data Type Conversion3' */
  real_T DataTypeConversion4_ak;       /* '<S132>/Data Type Conversion4' */
  real_T SFunction1_o1_kz;             /* '<S164>/S-Function1' */
  real_T SFunction1_o2_pe;             /* '<S164>/S-Function1' */
  real_T SFunction1_o3_cm;             /* '<S164>/S-Function1' */
  real_T SFunction1_o4_oy;             /* '<S164>/S-Function1' */
  real_T DataTypeConversion_oi;        /* '<S133>/Data Type Conversion' */
  real_T DataTypeConversion1_ks;       /* '<S133>/Data Type Conversion1' */
  real_T DataTypeConversion2_fy;       /* '<S133>/Data Type Conversion2' */
  real_T DataTypeConversion3_lv;       /* '<S133>/Data Type Conversion3' */
  real_T DataTypeConversion4_am;       /* '<S133>/Data Type Conversion4' */
  real_T SFunction1_o1_j3;             /* '<S165>/S-Function1' */
  real_T SFunction1_o2_bz;             /* '<S165>/S-Function1' */
  real_T SFunction1_o3_hq;             /* '<S165>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S165>/S-Function1' */
  real_T DataTypeConversion_p;         /* '<S134>/Data Type Conversion' */
  real_T DataTypeConversion1_ap;       /* '<S134>/Data Type Conversion1' */
  real_T DataTypeConversion2_h;        /* '<S134>/Data Type Conversion2' */
  real_T DataTypeConversion3_n;        /* '<S134>/Data Type Conversion3' */
  real_T DataTypeConversion4_g3;       /* '<S134>/Data Type Conversion4' */
  real_T SFunction1_o1_fs;             /* '<S166>/S-Function1' */
  real_T SFunction1_o2_hk;             /* '<S166>/S-Function1' */
  real_T SFunction1_o3_kg;             /* '<S166>/S-Function1' */
  real_T SFunction1_o4_o3;             /* '<S166>/S-Function1' */
  real_T DataTypeConversion_et;        /* '<S135>/Data Type Conversion' */
  real_T DataTypeConversion1_da;       /* '<S135>/Data Type Conversion1' */
  real_T DataTypeConversion2_e;        /* '<S135>/Data Type Conversion2' */
  real_T DataTypeConversion3_a;        /* '<S135>/Data Type Conversion3' */
  real_T DataTypeConversion4_k4;       /* '<S135>/Data Type Conversion4' */
  real_T SFunction1_o1_ae;             /* '<S167>/S-Function1' */
  real_T SFunction1_o2_ah;             /* '<S167>/S-Function1' */
  real_T SFunction1_o3_jw;             /* '<S167>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S167>/S-Function1' */
  real_T DataTypeConversion_gy;        /* '<S136>/Data Type Conversion' */
  real_T DataTypeConversion1_f;        /* '<S136>/Data Type Conversion1' */
  real_T DataTypeConversion2_ir;       /* '<S136>/Data Type Conversion2' */
  real_T DataTypeConversion3_it;       /* '<S136>/Data Type Conversion3' */
  real_T DataTypeConversion4_d4;       /* '<S136>/Data Type Conversion4' */
  real_T SFunction1_o1_n;              /* '<S168>/S-Function1' */
  real_T SFunction1_o2_o2;             /* '<S168>/S-Function1' */
  real_T SFunction1_o3_el;             /* '<S168>/S-Function1' */
  real_T SFunction1_o4_oa;             /* '<S168>/S-Function1' */
  real_T DataTypeConversion_j0;        /* '<S137>/Data Type Conversion' */
  real_T DataTypeConversion1_mt;       /* '<S137>/Data Type Conversion1' */
  real_T DataTypeConversion2_oq;       /* '<S137>/Data Type Conversion2' */
  real_T DataTypeConversion3_ft;       /* '<S137>/Data Type Conversion3' */
  real_T DataTypeConversion4_ki;       /* '<S137>/Data Type Conversion4' */
  real_T SFunction1_o1_p;              /* '<S169>/S-Function1' */
  real_T SFunction1_o2_c0;             /* '<S169>/S-Function1' */
  real_T SFunction1_o3_jt;             /* '<S169>/S-Function1' */
  real_T SFunction1_o4_bs;             /* '<S169>/S-Function1' */
  real_T DataTypeConversion_oa;        /* '<S138>/Data Type Conversion' */
  real_T DataTypeConversion1_oo;       /* '<S138>/Data Type Conversion1' */
  real_T DataTypeConversion2_fm;       /* '<S138>/Data Type Conversion2' */
  real_T DataTypeConversion3_jm;       /* '<S138>/Data Type Conversion3' */
  real_T DataTypeConversion4_ga;       /* '<S138>/Data Type Conversion4' */
  real_T SFunction1_o1_mq;             /* '<S170>/S-Function1' */
  real_T SFunction1_o2_as;             /* '<S170>/S-Function1' */
  real_T SFunction1_o3_j3;             /* '<S170>/S-Function1' */
  real_T SFunction1_o4_lo;             /* '<S170>/S-Function1' */
  real_T DataTypeConversion_jp;        /* '<S139>/Data Type Conversion' */
  real_T DataTypeConversion1_ol;       /* '<S139>/Data Type Conversion1' */
  real_T DataTypeConversion2_eg;       /* '<S139>/Data Type Conversion2' */
  real_T DataTypeConversion3_f3;       /* '<S139>/Data Type Conversion3' */
  real_T DataTypeConversion4_kr;       /* '<S139>/Data Type Conversion4' */
  real_T SFunction1_o1_js;             /* '<S171>/S-Function1' */
  real_T SFunction1_o2_an;             /* '<S171>/S-Function1' */
  real_T SFunction1_o3_ek;             /* '<S171>/S-Function1' */
  real_T SFunction1_o4_oz;             /* '<S171>/S-Function1' */
  real_T DataTypeConversion_hh;        /* '<S140>/Data Type Conversion' */
  real_T DataTypeConversion1_hf;       /* '<S140>/Data Type Conversion1' */
  real_T DataTypeConversion2_p;        /* '<S140>/Data Type Conversion2' */
  real_T DataTypeConversion3_jj;       /* '<S140>/Data Type Conversion3' */
  real_T DataTypeConversion4_er;       /* '<S140>/Data Type Conversion4' */
  real_T SFunction1_o1_ks;             /* '<S172>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S172>/S-Function1' */
  real_T SFunction1_o3_ei;             /* '<S172>/S-Function1' */
  real_T SFunction1_o4_ka;             /* '<S172>/S-Function1' */
  real_T DataTypeConversion_j4;        /* '<S141>/Data Type Conversion' */
  real_T DataTypeConversion1_ko;       /* '<S141>/Data Type Conversion1' */
  real_T DataTypeConversion2_hf;       /* '<S141>/Data Type Conversion2' */
  real_T DataTypeConversion3_bb;       /* '<S141>/Data Type Conversion3' */
  real_T DataTypeConversion4_i;        /* '<S141>/Data Type Conversion4' */
  real_T SFunction1_o1_l4;             /* '<S173>/S-Function1' */
  real_T SFunction1_o2_iz;             /* '<S173>/S-Function1' */
  real_T SFunction1_o3_nw;             /* '<S173>/S-Function1' */
  real_T SFunction1_o4_dp;             /* '<S173>/S-Function1' */
  real_T DataTypeConversion_hb;        /* '<S142>/Data Type Conversion' */
  real_T DataTypeConversion1_at;       /* '<S142>/Data Type Conversion1' */
  real_T DataTypeConversion2_et;       /* '<S142>/Data Type Conversion2' */
  real_T DataTypeConversion3_n2;       /* '<S142>/Data Type Conversion3' */
  real_T DataTypeConversion4_o;        /* '<S142>/Data Type Conversion4' */
  real_T SFunction1_o1_fp;             /* '<S174>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S174>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S174>/S-Function1' */
  real_T SFunction1_o4_ef;             /* '<S174>/S-Function1' */
  real_T DataTypeConversion_jj;        /* '<S5>/Data Type Conversion' */
  real_T DataTypeConversion1_ok;       /* '<S5>/Data Type Conversion1' */
  real_T DataTypeConversion2_db;       /* '<S5>/Data Type Conversion2' */
  real_T DataTypeConversion3_jf;       /* '<S5>/Data Type Conversion3' */
  real_T DataTypeConversion4_erz;      /* '<S5>/Data Type Conversion4' */
  real_T DataTypeConversion5;          /* '<S5>/Data Type Conversion5' */
  real_T SFunction1_o1_i;              /* '<S175>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S175>/S-Function1' */
  real_T SFunction1_o3_b4;             /* '<S175>/S-Function1' */
  real_T SFunction1_o4_jp;             /* '<S175>/S-Function1' */
  real_T DataTypeConversion10;         /* '<S5>/Data Type Conversion10' */
  real_T DataTypeConversion11;         /* '<S5>/Data Type Conversion11' */
  real_T DataTypeConversion6;          /* '<S5>/Data Type Conversion6' */
  real_T DataTypeConversion7;          /* '<S5>/Data Type Conversion7' */
  real_T DataTypeConversion8;          /* '<S5>/Data Type Conversion8' */
  real_T DataTypeConversion9;          /* '<S5>/Data Type Conversion9' */
  real_T SFunction1_o1_df;             /* '<S176>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S176>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S176>/S-Function1' */
  real_T SFunction1_o4_kaj;            /* '<S176>/S-Function1' */
  real32_T VectorConcatenate_d[5];     /* '<S28>/Vector Concatenate' */
  real32_T VectorConcatenate_lr[5];    /* '<S29>/Vector Concatenate' */
  real32_T VectorConcatenate_gp[5];    /* '<S36>/Vector Concatenate' */
  real32_T VectorConcatenate_p[5];     /* '<S37>/Vector Concatenate' */
  real32_T VectorConcatenate_i[5];     /* '<S38>/Vector Concatenate' */
  real32_T VectorConcatenate_cd[5];    /* '<S39>/Vector Concatenate' */
  real32_T VectorConcatenate_o[5];     /* '<S40>/Vector Concatenate' */
  real32_T VectorConcatenate_nk[5];    /* '<S41>/Vector Concatenate' */
  real32_T VectorConcatenate_lrr[5];   /* '<S42>/Vector Concatenate' */
  real32_T VectorConcatenate_ob[5];    /* '<S43>/Vector Concatenate' */
  real32_T VectorConcatenate_ny[5];    /* '<S44>/Vector Concatenate' */
  real32_T VectorConcatenate_pu[5];    /* '<S45>/Vector Concatenate' */
  real32_T VectorConcatenate_m[5];     /* '<S52>/Vector Concatenate' */
  real32_T VectorConcatenate_e[5];     /* '<S53>/Vector Concatenate' */
  real32_T VectorConcatenate_a[5];     /* '<S54>/Vector Concatenate' */
  real32_T VectorConcatenate_g0[5];    /* '<S55>/Vector Concatenate' */
  real32_T VectorConcatenate_cp[5];    /* '<S56>/Vector Concatenate' */
  real32_T VectorConcatenate_ik[5];    /* '<S57>/Vector Concatenate' */
  real32_T VectorConcatenate_f[5];     /* '<S58>/Vector Concatenate' */
  real32_T VectorConcatenate_iz[5];    /* '<S59>/Vector Concatenate' */
  real32_T VectorConcatenate_nb[5];    /* '<S60>/Vector Concatenate' */
  real32_T VectorConcatenate_l5[5];    /* '<S61>/Vector Concatenate' */
  real32_T VectorConcatenate_j0[5];    /* '<S68>/Vector Concatenate' */
  real32_T VectorConcatenate_os[5];    /* '<S69>/Vector Concatenate' */
  real32_T VectorConcatenate_a2[5];    /* '<S70>/Vector Concatenate' */
  real32_T VectorConcatenate_if[5];    /* '<S71>/Vector Concatenate' */
  real32_T VectorConcatenate_fr[5];    /* '<S72>/Vector Concatenate' */
  real32_T VectorConcatenate_h[5];     /* '<S73>/Vector Concatenate' */
  real32_T VectorConcatenate_d2[5];    /* '<S74>/Vector Concatenate' */
  real32_T VectorConcatenate_p1[5];    /* '<S75>/Vector Concatenate' */
  real32_T VectorConcatenate_osj[5];   /* '<S76>/Vector Concatenate' */
  real32_T VectorConcatenate_gg[5];    /* '<S77>/Vector Concatenate' */
  real32_T VectorConcatenate_me[5];    /* '<S84>/Vector Concatenate' */
  real32_T VectorConcatenate_fm[5];    /* '<S85>/Vector Concatenate' */
  real32_T VectorConcatenate_pc[5];    /* '<S86>/Vector Concatenate' */
  real32_T VectorConcatenate_nn[5];    /* '<S87>/Vector Concatenate' */
  real32_T VectorConcatenate_pl[5];    /* '<S88>/Vector Concatenate' */
  real32_T VectorConcatenate_b[5];     /* '<S89>/Vector Concatenate' */
  real32_T VectorConcatenate_o3[5];    /* '<S90>/Vector Concatenate' */
  real32_T VectorConcatenate_k[5];     /* '<S91>/Vector Concatenate' */
  real32_T VectorConcatenate_bi[5];    /* '<S92>/Vector Concatenate' */
  real32_T VectorConcatenate_ht[5];    /* '<S93>/Vector Concatenate' */
  real32_T VectorConcatenate_aw[5];    /* '<S100>/Vector Concatenate' */
  real32_T VectorConcatenate_h1[5];    /* '<S101>/Vector Concatenate' */
  real32_T VectorConcatenate_lo[5];    /* '<S102>/Vector Concatenate' */
  real32_T VectorConcatenate_lc[5];    /* '<S103>/Vector Concatenate' */
  real32_T VectorConcatenate_f4[5];    /* '<S104>/Vector Concatenate' */
  real32_T VectorConcatenate_gc[5];    /* '<S105>/Vector Concatenate' */
  real32_T VectorConcatenate_hm[5];    /* '<S106>/Vector Concatenate' */
  real32_T VectorConcatenate_br[5];    /* '<S107>/Vector Concatenate' */
  real32_T VectorConcatenate_mg[4];    /* '<S30>/Vector Concatenate' */
  real32_T VectorConcatenate_on[4];    /* '<S31>/Vector Concatenate' */
  real32_T VectorConcatenate_lq[4];    /* '<S32>/Vector Concatenate' */
  real32_T VectorConcatenate_d3[4];    /* '<S33>/Vector Concatenate' */
  real32_T VectorConcatenate_pg[4];    /* '<S34>/Vector Concatenate' */
  real32_T VectorConcatenate_io[4];    /* '<S35>/Vector Concatenate' */
  real32_T VectorConcatenate_kq[4];    /* '<S46>/Vector Concatenate' */
  real32_T VectorConcatenate_gd[4];    /* '<S47>/Vector Concatenate' */
  real32_T VectorConcatenate_av[4];    /* '<S48>/Vector Concatenate' */
  real32_T VectorConcatenate_js[4];    /* '<S49>/Vector Concatenate' */
  real32_T VectorConcatenate_b5[4];    /* '<S50>/Vector Concatenate' */
  real32_T VectorConcatenate_es[4];    /* '<S51>/Vector Concatenate' */
  real32_T VectorConcatenate_fk[4];    /* '<S62>/Vector Concatenate' */
  real32_T VectorConcatenate_ps[4];    /* '<S63>/Vector Concatenate' */
  real32_T VectorConcatenate_nky[4];   /* '<S64>/Vector Concatenate' */
  real32_T VectorConcatenate_dc[4];    /* '<S65>/Vector Concatenate' */
  real32_T VectorConcatenate_mq[4];    /* '<S66>/Vector Concatenate' */
  real32_T VectorConcatenate_ax[4];    /* '<S67>/Vector Concatenate' */
  real32_T VectorConcatenate_la[4];    /* '<S78>/Vector Concatenate' */
  real32_T VectorConcatenate_kl[4];    /* '<S79>/Vector Concatenate' */
  real32_T VectorConcatenate_d0[4];    /* '<S80>/Vector Concatenate' */
  real32_T VectorConcatenate_gn[4];    /* '<S81>/Vector Concatenate' */
  real32_T VectorConcatenate_fa[4];    /* '<S82>/Vector Concatenate' */
  real32_T VectorConcatenate_kl4[4];   /* '<S83>/Vector Concatenate' */
  real32_T VectorConcatenate_m1[4];    /* '<S94>/Vector Concatenate' */
  real32_T VectorConcatenate_fs[4];    /* '<S95>/Vector Concatenate' */
  real32_T VectorConcatenate_i5[4];    /* '<S96>/Vector Concatenate' */
  real32_T VectorConcatenate_mh[4];    /* '<S97>/Vector Concatenate' */
  real32_T VectorConcatenate_or[4];    /* '<S98>/Vector Concatenate' */
  real32_T VectorConcatenate_kp[4];    /* '<S99>/Vector Concatenate' */
  real32_T VectorConcatenate_ln[5];    /* '<S16>/Vector Concatenate' */
  real32_T VectorConcatenate_gl[5];    /* '<S17>/Vector Concatenate' */
  real32_T VectorConcatenate_c3[5];    /* '<S20>/Vector Concatenate' */
  real32_T VectorConcatenate_ha[5];    /* '<S21>/Vector Concatenate' */
  real32_T VectorConcatenate_n5[5];    /* '<S22>/Vector Concatenate' */
  real32_T VectorConcatenate_mo[5];    /* '<S23>/Vector Concatenate' */
  real32_T VectorConcatenate_iq[5];    /* '<S24>/Vector Concatenate' */
  real32_T VectorConcatenate_ij[5];    /* '<S25>/Vector Concatenate' */
  real32_T VectorConcatenate_gh[5];    /* '<S26>/Vector Concatenate' */
  real32_T VectorConcatenate_p1q[5];   /* '<S27>/Vector Concatenate' */
  real32_T VectorConcatenate_iv[5];    /* '<S18>/Vector Concatenate' */
  real32_T VectorConcatenate_pe[5];    /* '<S19>/Vector Concatenate' */
  uint16_T LM_TOS_ALGORISM_o9;         /* '<S2>/LM_TOS_ALGORISM' */
  uint8_T LM_TOS_ALGORISM_o1;          /* '<S2>/LM_TOS_ALGORISM' */
  uint8_T LM_TOS_ALGORISM_o6;          /* '<S2>/LM_TOS_ALGORISM' */
  uint8_T LM_TOS_ALGORISM_o10;         /* '<S2>/LM_TOS_ALGORISM' */
} B_LM_TOS_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T SFunction1_IWORK[2];           /* '<S1>/S-Function1' */
} DW_LM_TOS_T;

/* Parameters (default storage) */
struct P_LM_TOS_T_ {
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S8>/Constant18'
                                        */
  real_T Constant19_Value;             /* Expression: 1
                                        * Referenced by: '<S8>/Constant19'
                                        */
  real_T Constant28_Value;             /* Expression: 2
                                        * Referenced by: '<S8>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 3
                                        * Referenced by: '<S8>/Constant29'
                                        */
  real_T Constant30_Value;             /* Expression: 4
                                        * Referenced by: '<S8>/Constant30'
                                        */
  real_T Constant31_Value;             /* Expression: 5
                                        * Referenced by: '<S8>/Constant31'
                                        */
  real_T Constant32_Value;             /* Expression: 6
                                        * Referenced by: '<S8>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 7
                                        * Referenced by: '<S8>/Constant33'
                                        */
  real_T Constant34_Value;             /* Expression: 8
                                        * Referenced by: '<S8>/Constant34'
                                        */
  real_T Constant35_Value;             /* Expression: 9
                                        * Referenced by: '<S8>/Constant35'
                                        */
  real_T Constant20_Value;             /* Expression: 10
                                        * Referenced by: '<S8>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 11
                                        * Referenced by: '<S8>/Constant21'
                                        */
  real_T Constant24_Value;             /* Expression: 12
                                        * Referenced by: '<S8>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 13
                                        * Referenced by: '<S8>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 14
                                        * Referenced by: '<S8>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: 15
                                        * Referenced by: '<S8>/Constant27'
                                        */
  real_T Constant22_Value;             /* Expression: 16
                                        * Referenced by: '<S8>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 17
                                        * Referenced by: '<S8>/Constant23'
                                        */
  real_T Constant_Value;               /* Expression: 18
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 19
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 20
                                        * Referenced by: '<S8>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 21
                                        * Referenced by: '<S8>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 22
                                        * Referenced by: '<S8>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 23
                                        * Referenced by: '<S8>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 24
                                        * Referenced by: '<S8>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 25
                                        * Referenced by: '<S8>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 26
                                        * Referenced by: '<S8>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 27
                                        * Referenced by: '<S8>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 28
                                        * Referenced by: '<S8>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 29
                                        * Referenced by: '<S8>/Constant11'
                                        */
  real_T Constant14_Value;             /* Expression: 30
                                        * Referenced by: '<S8>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 31
                                        * Referenced by: '<S8>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 32
                                        * Referenced by: '<S8>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 33
                                        * Referenced by: '<S8>/Constant17'
                                        */
  real_T Constant12_Value;             /* Expression: 34
                                        * Referenced by: '<S8>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 35
                                        * Referenced by: '<S8>/Constant13'
                                        */
  real_T Constant38_Value;             /* Expression: 36
                                        * Referenced by: '<S8>/Constant38'
                                        */
  real_T Constant39_Value;             /* Expression: 37
                                        * Referenced by: '<S8>/Constant39'
                                        */
  real_T Constant36_Value;             /* Expression: 38
                                        * Referenced by: '<S8>/Constant36'
                                        */
  real_T Constant37_Value;             /* Expression: 39
                                        * Referenced by: '<S8>/Constant37'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S111>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S111>/Constant1'
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S112>/Constant'
                                        */
  real_T Constant1_Value_o;            /* Expression: 0
                                        * Referenced by: '<S112>/Constant1'
                                        */
  real_T Constant_Value_j;             /* Expression: 10
                                        * Referenced by: '<S113>/Constant'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S113>/Constant1'
                                        */
  real_T Constant_Value_f;             /* Expression: 11
                                        * Referenced by: '<S114>/Constant'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S114>/Constant1'
                                        */
  real_T Constant_Value_mj;            /* Expression: 12
                                        * Referenced by: '<S115>/Constant'
                                        */
  real_T Constant1_Value_no;           /* Expression: 0
                                        * Referenced by: '<S115>/Constant1'
                                        */
  real_T Constant_Value_b;             /* Expression: 13
                                        * Referenced by: '<S116>/Constant'
                                        */
  real_T Constant1_Value_b;            /* Expression: 0
                                        * Referenced by: '<S116>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 14
                                        * Referenced by: '<S117>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S117>/Constant1'
                                        */
  real_T Constant_Value_e;             /* Expression: 15
                                        * Referenced by: '<S118>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0
                                        * Referenced by: '<S118>/Constant1'
                                        */
  real_T Constant_Value_k;             /* Expression: 16
                                        * Referenced by: '<S119>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S119>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: 17
                                        * Referenced by: '<S120>/Constant'
                                        */
  real_T Constant1_Value_mu;           /* Expression: 0
                                        * Referenced by: '<S120>/Constant1'
                                        */
  real_T Constant_Value_cx;            /* Expression: 18
                                        * Referenced by: '<S121>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: 0
                                        * Referenced by: '<S121>/Constant1'
                                        */
  real_T Constant_Value_ea;            /* Expression: 19
                                        * Referenced by: '<S122>/Constant'
                                        */
  real_T Constant1_Value_mc;           /* Expression: 0
                                        * Referenced by: '<S122>/Constant1'
                                        */
  real_T Constant_Value_i;             /* Expression: 2
                                        * Referenced by: '<S123>/Constant'
                                        */
  real_T Constant1_Value_m2;           /* Expression: 0
                                        * Referenced by: '<S123>/Constant1'
                                        */
  real_T Constant_Value_mb;            /* Expression: 20
                                        * Referenced by: '<S124>/Constant'
                                        */
  real_T Constant1_Value_pq;           /* Expression: 0
                                        * Referenced by: '<S124>/Constant1'
                                        */
  real_T Constant_Value_hp;            /* Expression: 21
                                        * Referenced by: '<S125>/Constant'
                                        */
  real_T Constant1_Value_ei;           /* Expression: 0
                                        * Referenced by: '<S125>/Constant1'
                                        */
  real_T Constant_Value_hd;            /* Expression: 22
                                        * Referenced by: '<S126>/Constant'
                                        */
  real_T Constant1_Value_po;           /* Expression: 0
                                        * Referenced by: '<S126>/Constant1'
                                        */
  real_T Constant_Value_hq;            /* Expression: 23
                                        * Referenced by: '<S127>/Constant'
                                        */
  real_T Constant1_Value_ol;           /* Expression: 0
                                        * Referenced by: '<S127>/Constant1'
                                        */
  real_T Constant_Value_ko;            /* Expression: 24
                                        * Referenced by: '<S128>/Constant'
                                        */
  real_T Constant1_Value_j;            /* Expression: 0
                                        * Referenced by: '<S128>/Constant1'
                                        */
  real_T Constant_Value_l;             /* Expression: 25
                                        * Referenced by: '<S129>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S129>/Constant1'
                                        */
  real_T Constant_Value_ih;            /* Expression: 26
                                        * Referenced by: '<S130>/Constant'
                                        */
  real_T Constant1_Value_cq;           /* Expression: 0
                                        * Referenced by: '<S130>/Constant1'
                                        */
  real_T Constant_Value_n;             /* Expression: 27
                                        * Referenced by: '<S131>/Constant'
                                        */
  real_T Constant1_Value_cg;           /* Expression: 0
                                        * Referenced by: '<S131>/Constant1'
                                        */
  real_T Constant_Value_iv;            /* Expression: 28
                                        * Referenced by: '<S132>/Constant'
                                        */
  real_T Constant1_Value_dv;           /* Expression: 0
                                        * Referenced by: '<S132>/Constant1'
                                        */
  real_T Constant_Value_b3;            /* Expression: 29
                                        * Referenced by: '<S133>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S133>/Constant1'
                                        */
  real_T Constant_Value_p;             /* Expression: 3
                                        * Referenced by: '<S134>/Constant'
                                        */
  real_T Constant1_Value_c3;           /* Expression: 0
                                        * Referenced by: '<S134>/Constant1'
                                        */
  real_T Constant_Value_g;             /* Expression: 30
                                        * Referenced by: '<S135>/Constant'
                                        */
  real_T Constant1_Value_da;           /* Expression: 0
                                        * Referenced by: '<S135>/Constant1'
                                        */
  real_T Constant_Value_lb;            /* Expression: 31
                                        * Referenced by: '<S136>/Constant'
                                        */
  real_T Constant1_Value_dax;          /* Expression: 0
                                        * Referenced by: '<S136>/Constant1'
                                        */
  real_T Constant_Value_ib;            /* Expression: 4
                                        * Referenced by: '<S137>/Constant'
                                        */
  real_T Constant1_Value_id;           /* Expression: 0
                                        * Referenced by: '<S137>/Constant1'
                                        */
  real_T Constant_Value_jy;            /* Expression: 5
                                        * Referenced by: '<S138>/Constant'
                                        */
  real_T Constant1_Value_pa;           /* Expression: 0
                                        * Referenced by: '<S138>/Constant1'
                                        */
  real_T Constant_Value_cs;            /* Expression: 6
                                        * Referenced by: '<S139>/Constant'
                                        */
  real_T Constant1_Value_ft;           /* Expression: 0
                                        * Referenced by: '<S139>/Constant1'
                                        */
  real_T Constant_Value_j3;            /* Expression: 7
                                        * Referenced by: '<S140>/Constant'
                                        */
  real_T Constant1_Value_e3;           /* Expression: 0
                                        * Referenced by: '<S140>/Constant1'
                                        */
  real_T Constant_Value_ij;            /* Expression: 8
                                        * Referenced by: '<S141>/Constant'
                                        */
  real_T Constant1_Value_ny;           /* Expression: 0
                                        * Referenced by: '<S141>/Constant1'
                                        */
  real_T Constant_Value_cs0;           /* Expression: 9
                                        * Referenced by: '<S142>/Constant'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S142>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LM_TOS_T {
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
extern P_LM_TOS_T LM_TOS_P;

/* Block signals (default storage) */
extern B_LM_TOS_T LM_TOS_B;

/* Block states (default storage) */
extern DW_LM_TOS_T LM_TOS_DW;

/* External data declarations for dependent source files */
extern const real_T LM_TOS_RGND;       /* real_T ground */
extern const uint32_T LM_TOS_U32GND;   /* uint32_T ground */
extern const FUS_OBJ_OUTPUT_ST LM_TOS_rtZFUS_OBJ_OUTPUT_ST;/* FUS_OBJ_OUTPUT_ST ground */
extern const VSI_VEHSTATE_ST LM_TOS_rtZVSI_VEHSTATE_ST;/* VSI_VEHSTATE_ST ground */
extern const FUS_LANE_OUTPUT_ST LM_TOS_rtZFUS_LANE_OUTPUT_ST;/* FUS_LANE_OUTPUT_ST ground */
extern const FUS_ROAD_EDGE_OUTPUT_ST LM_TOS_rtZFUS_ROAD_EDGE_OUTPUT_ST;/* FUS_ROAD_EDGE_OUTPUT_ST ground */
extern const ATS_PO_ST LM_TOS_rtZATS_PO_ST;/* ATS_PO_ST ground */

/* Model entry point functions */
extern void LM_TOS_initialize(void);
extern void LM_TOS_output(void);
extern void LM_TOS_update(void);
extern void LM_TOS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LM_TOS_T *const LM_TOS_M;

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
 * '<Root>' : 'LM_TOS'
 * '<S1>'   : 'LM_TOS/CAN_TYPE1_SETUP_M1_C2'
 * '<S2>'   : 'LM_TOS/LM_TOS_MODEL'
 * '<S3>'   : 'LM_TOS/RTI Data'
 * '<S4>'   : 'LM_TOS/Subsystem'
 * '<S5>'   : 'LM_TOS/Subsystem1'
 * '<S6>'   : 'LM_TOS/LM_TOS_MODEL/adapter1'
 * '<S7>'   : 'LM_TOS/LM_TOS_MODEL/adapter2'
 * '<S8>'   : 'LM_TOS/LM_TOS_MODEL/adapter1/Subsystem'
 * '<S9>'   : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP'
 * '<S10>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0'
 * '<S11>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1'
 * '<S12>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2'
 * '<S13>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3'
 * '<S14>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4'
 * '<S15>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/hmi_output_adapter'
 * '<S16>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem0'
 * '<S17>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem1'
 * '<S18>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem10'
 * '<S19>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem11'
 * '<S20>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem2'
 * '<S21>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem3'
 * '<S22>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem4'
 * '<S23>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem5'
 * '<S24>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem6'
 * '<S25>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem7'
 * '<S26>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem8'
 * '<S27>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/HWA_TAR_OBJ_ADP/Subsystem9'
 * '<S28>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem'
 * '<S29>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem1'
 * '<S30>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem10'
 * '<S31>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem11'
 * '<S32>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem12'
 * '<S33>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem13'
 * '<S34>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem14'
 * '<S35>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem15'
 * '<S36>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem2'
 * '<S37>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem3'
 * '<S38>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem4'
 * '<S39>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem5'
 * '<S40>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem6'
 * '<S41>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem7'
 * '<S42>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem8'
 * '<S43>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_0/Subsystem9'
 * '<S44>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem'
 * '<S45>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem1'
 * '<S46>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem10'
 * '<S47>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem11'
 * '<S48>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem12'
 * '<S49>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem13'
 * '<S50>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem14'
 * '<S51>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem15'
 * '<S52>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem2'
 * '<S53>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem3'
 * '<S54>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem4'
 * '<S55>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem5'
 * '<S56>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem6'
 * '<S57>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem7'
 * '<S58>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem8'
 * '<S59>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_1/Subsystem9'
 * '<S60>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem'
 * '<S61>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem1'
 * '<S62>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem10'
 * '<S63>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem11'
 * '<S64>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem12'
 * '<S65>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem13'
 * '<S66>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem14'
 * '<S67>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem15'
 * '<S68>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem2'
 * '<S69>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem3'
 * '<S70>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem4'
 * '<S71>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem5'
 * '<S72>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem6'
 * '<S73>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem7'
 * '<S74>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem8'
 * '<S75>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_2/Subsystem9'
 * '<S76>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem'
 * '<S77>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem1'
 * '<S78>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem10'
 * '<S79>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem11'
 * '<S80>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem12'
 * '<S81>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem13'
 * '<S82>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem14'
 * '<S83>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem15'
 * '<S84>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem2'
 * '<S85>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem3'
 * '<S86>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem4'
 * '<S87>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem5'
 * '<S88>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem6'
 * '<S89>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem7'
 * '<S90>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem8'
 * '<S91>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_3/Subsystem9'
 * '<S92>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem'
 * '<S93>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem1'
 * '<S94>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem10'
 * '<S95>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem11'
 * '<S96>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem12'
 * '<S97>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem13'
 * '<S98>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem14'
 * '<S99>'  : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem15'
 * '<S100>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem2'
 * '<S101>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem3'
 * '<S102>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem4'
 * '<S103>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem5'
 * '<S104>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem6'
 * '<S105>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem7'
 * '<S106>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem8'
 * '<S107>' : 'LM_TOS/LM_TOS_MODEL/adapter2/Lane_4/Subsystem9'
 * '<S108>' : 'LM_TOS/RTI Data/RTI Data Store'
 * '<S109>' : 'LM_TOS/RTI Data/RTI Data Store/RTI Data Store'
 * '<S110>' : 'LM_TOS/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S111>' : 'LM_TOS/Subsystem/obj_0'
 * '<S112>' : 'LM_TOS/Subsystem/obj_1'
 * '<S113>' : 'LM_TOS/Subsystem/obj_10'
 * '<S114>' : 'LM_TOS/Subsystem/obj_11'
 * '<S115>' : 'LM_TOS/Subsystem/obj_12'
 * '<S116>' : 'LM_TOS/Subsystem/obj_13'
 * '<S117>' : 'LM_TOS/Subsystem/obj_14'
 * '<S118>' : 'LM_TOS/Subsystem/obj_15'
 * '<S119>' : 'LM_TOS/Subsystem/obj_16'
 * '<S120>' : 'LM_TOS/Subsystem/obj_17'
 * '<S121>' : 'LM_TOS/Subsystem/obj_18'
 * '<S122>' : 'LM_TOS/Subsystem/obj_19'
 * '<S123>' : 'LM_TOS/Subsystem/obj_2'
 * '<S124>' : 'LM_TOS/Subsystem/obj_20'
 * '<S125>' : 'LM_TOS/Subsystem/obj_21'
 * '<S126>' : 'LM_TOS/Subsystem/obj_22'
 * '<S127>' : 'LM_TOS/Subsystem/obj_23'
 * '<S128>' : 'LM_TOS/Subsystem/obj_24'
 * '<S129>' : 'LM_TOS/Subsystem/obj_25'
 * '<S130>' : 'LM_TOS/Subsystem/obj_26'
 * '<S131>' : 'LM_TOS/Subsystem/obj_27'
 * '<S132>' : 'LM_TOS/Subsystem/obj_28'
 * '<S133>' : 'LM_TOS/Subsystem/obj_29'
 * '<S134>' : 'LM_TOS/Subsystem/obj_3'
 * '<S135>' : 'LM_TOS/Subsystem/obj_30'
 * '<S136>' : 'LM_TOS/Subsystem/obj_31'
 * '<S137>' : 'LM_TOS/Subsystem/obj_4'
 * '<S138>' : 'LM_TOS/Subsystem/obj_5'
 * '<S139>' : 'LM_TOS/Subsystem/obj_6'
 * '<S140>' : 'LM_TOS/Subsystem/obj_7'
 * '<S141>' : 'LM_TOS/Subsystem/obj_8'
 * '<S142>' : 'LM_TOS/Subsystem/obj_9'
 * '<S143>' : 'LM_TOS/Subsystem/obj_0/Obj_Msg_00'
 * '<S144>' : 'LM_TOS/Subsystem/obj_1/Obj_Msg_01'
 * '<S145>' : 'LM_TOS/Subsystem/obj_10/Obj_Msg_10'
 * '<S146>' : 'LM_TOS/Subsystem/obj_11/Obj_Msg_11'
 * '<S147>' : 'LM_TOS/Subsystem/obj_12/Obj_Msg_12'
 * '<S148>' : 'LM_TOS/Subsystem/obj_13/Obj_Msg_13'
 * '<S149>' : 'LM_TOS/Subsystem/obj_14/Obj_Msg_14'
 * '<S150>' : 'LM_TOS/Subsystem/obj_15/Obj_Msg_15'
 * '<S151>' : 'LM_TOS/Subsystem/obj_16/Obj_Msg_16'
 * '<S152>' : 'LM_TOS/Subsystem/obj_17/Obj_Msg_17'
 * '<S153>' : 'LM_TOS/Subsystem/obj_18/Obj_Msg_18'
 * '<S154>' : 'LM_TOS/Subsystem/obj_19/Obj_Msg_19'
 * '<S155>' : 'LM_TOS/Subsystem/obj_2/Obj_Msg_02'
 * '<S156>' : 'LM_TOS/Subsystem/obj_20/Obj_Msg_20'
 * '<S157>' : 'LM_TOS/Subsystem/obj_21/Obj_Msg_21'
 * '<S158>' : 'LM_TOS/Subsystem/obj_22/Obj_Msg_22'
 * '<S159>' : 'LM_TOS/Subsystem/obj_23/Obj_Msg_23'
 * '<S160>' : 'LM_TOS/Subsystem/obj_24/Obj_Msg_24'
 * '<S161>' : 'LM_TOS/Subsystem/obj_25/Obj_Msg_25'
 * '<S162>' : 'LM_TOS/Subsystem/obj_26/Obj_Msg_26'
 * '<S163>' : 'LM_TOS/Subsystem/obj_27/Obj_Msg_27'
 * '<S164>' : 'LM_TOS/Subsystem/obj_28/Obj_Msg_28'
 * '<S165>' : 'LM_TOS/Subsystem/obj_29/Obj_Msg_29'
 * '<S166>' : 'LM_TOS/Subsystem/obj_3/Obj_Msg_03'
 * '<S167>' : 'LM_TOS/Subsystem/obj_30/Obj_Msg_30'
 * '<S168>' : 'LM_TOS/Subsystem/obj_31/Obj_Msg_31'
 * '<S169>' : 'LM_TOS/Subsystem/obj_4/Obj_Msg_04'
 * '<S170>' : 'LM_TOS/Subsystem/obj_5/Obj_Msg_05'
 * '<S171>' : 'LM_TOS/Subsystem/obj_6/Obj_Msg_06'
 * '<S172>' : 'LM_TOS/Subsystem/obj_7/Obj_Msg_07'
 * '<S173>' : 'LM_TOS/Subsystem/obj_8/Obj_Msg_08'
 * '<S174>' : 'LM_TOS/Subsystem/obj_9/Obj_Msg_09'
 * '<S175>' : 'LM_TOS/Subsystem1/ZOP_NarrowLine_1'
 * '<S176>' : 'LM_TOS/Subsystem1/ZOP_NarrowLine_2'
 */
#endif                                 /* RTW_HEADER_LM_TOS_h_ */
