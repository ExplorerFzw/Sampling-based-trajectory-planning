/*
 * Code generation for system model 'LM_TOS_0103'
 * For more details, see corresponding source file LM_TOS_0103.c
 *
 */

#ifndef RTW_HEADER_LM_TOS_0103_h_
#define RTW_HEADER_LM_TOS_0103_h_
#include <string.h>
#ifndef LM_TOS_0103_COMMON_INCLUDES_
# define LM_TOS_0103_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* LM_TOS_0103_COMMON_INCLUDES_ */

#include "LM_TOS_0103_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for model 'LM_TOS_0103' */
#ifndef LM_TOS_0103_MDLREF_HIDE_CHILD_

typedef struct {
  FUS_OUTOBJ_LIST_ST BusConversion_InsertedFor_LM_TO;
  TARGETOBJECTS_ST_adp LM_TOS_ALGORISM_o3;/* '<Root>/LM_TOS_ALGORISM' */
  SEGMENTS_ST_adp LM_TOS_ALGORISM_o4;  /* '<Root>/LM_TOS_ALGORISM' */
  LM_LANE_ST BusCreator;               /* '<S4>/Bus Creator' */
  LM_LANE_ST BusCreator_h;             /* '<S5>/Bus Creator' */
  LM_LANE_ST BusCreator_i;             /* '<S6>/Bus Creator' */
  LM_LANE_ST BusCreator_a;             /* '<S7>/Bus Creator' */
  LM_LANE_ST BusCreator_o;             /* '<S8>/Bus Creator' */
  HMI_OUTPUT_ST_APT LM_TOS_ALGORISM_o7;/* '<Root>/LM_TOS_ALGORISM' */
  FUS_OBJ_DATA_ST Selector18;          /* '<S3>/Selector18' */
  FUS_OBJ_DATA_ST Selector19;          /* '<S3>/Selector19' */
  FUS_OBJ_DATA_ST Selector28;          /* '<S3>/Selector28' */
  FUS_OBJ_DATA_ST Selector29;          /* '<S3>/Selector29' */
  FUS_OBJ_DATA_ST Selector30;          /* '<S3>/Selector30' */
  FUS_OBJ_DATA_ST Selector31;          /* '<S3>/Selector31' */
  FUS_OBJ_DATA_ST Selector32;          /* '<S3>/Selector32' */
  FUS_OBJ_DATA_ST Selector33;          /* '<S3>/Selector33' */
  FUS_OBJ_DATA_ST Selector34;          /* '<S3>/Selector34' */
  FUS_OBJ_DATA_ST Selector35;          /* '<S3>/Selector35' */
  FUS_OBJ_DATA_ST Selector20;          /* '<S3>/Selector20' */
  FUS_OBJ_DATA_ST Selector21;          /* '<S3>/Selector21' */
  FUS_OBJ_DATA_ST Selector24;          /* '<S3>/Selector24' */
  FUS_OBJ_DATA_ST Selector25;          /* '<S3>/Selector25' */
  FUS_OBJ_DATA_ST Selector26;          /* '<S3>/Selector26' */
  FUS_OBJ_DATA_ST Selector27;          /* '<S3>/Selector27' */
  FUS_OBJ_DATA_ST Selector22;          /* '<S3>/Selector22' */
  FUS_OBJ_DATA_ST Selector23;          /* '<S3>/Selector23' */
  FUS_OBJ_DATA_ST Selector;            /* '<S3>/Selector' */
  FUS_OBJ_DATA_ST Selector1;           /* '<S3>/Selector1' */
  FUS_OBJ_DATA_ST Selector2;           /* '<S3>/Selector2' */
  FUS_OBJ_DATA_ST Selector3;           /* '<S3>/Selector3' */
  FUS_OBJ_DATA_ST Selector4;           /* '<S3>/Selector4' */
  FUS_OBJ_DATA_ST Selector5;           /* '<S3>/Selector5' */
  FUS_OBJ_DATA_ST Selector6;           /* '<S3>/Selector6' */
  FUS_OBJ_DATA_ST Selector7;           /* '<S3>/Selector7' */
  FUS_OBJ_DATA_ST Selector8;           /* '<S3>/Selector8' */
  FUS_OBJ_DATA_ST Selector9;           /* '<S3>/Selector9' */
  FUS_OBJ_DATA_ST Selector10;          /* '<S3>/Selector10' */
  FUS_OBJ_DATA_ST Selector11;          /* '<S3>/Selector11' */
  FUS_OBJ_DATA_ST Selector14;          /* '<S3>/Selector14' */
  FUS_OBJ_DATA_ST Selector15;          /* '<S3>/Selector15' */
  FUS_OBJ_DATA_ST Selector16;          /* '<S3>/Selector16' */
  FUS_OBJ_DATA_ST Selector17;          /* '<S3>/Selector17' */
  FUS_OBJ_DATA_ST Selector12;          /* '<S3>/Selector12' */
  FUS_OBJ_DATA_ST Selector13;          /* '<S3>/Selector13' */
  FUS_OBJ_DATA_ST Selector38;          /* '<S3>/Selector38' */
  FUS_OBJ_DATA_ST Selector39;          /* '<S3>/Selector39' */
  FUS_OBJ_DATA_ST Selector36;          /* '<S3>/Selector36' */
  FUS_OBJ_DATA_ST Selector37;          /* '<S3>/Selector37' */
  LANES_BAS_INFO_ST_adt LM_TOS_ALGORISM_o2;/* '<Root>/LM_TOS_ALGORISM' */
  TARGETOBJECT BusCreator1;            /* '<S10>/Bus Creator1' */
  TARGETOBJECT BusCreator1_l;          /* '<S11>/Bus Creator1' */
  TARGETOBJECT BusCreator1_a;          /* '<S18>/Bus Creator1' */
  TARGETOBJECT BusCreator1_i;          /* '<S19>/Bus Creator1' */
  TARGETOBJECT BusCreator1_p;          /* '<S20>/Bus Creator1' */
  TARGETOBJECT BusCreator1_g;          /* '<S21>/Bus Creator1' */
  TARGETOBJECT BusCreator1_h;          /* '<S22>/Bus Creator1' */
  TARGETOBJECT BusCreator1_k;          /* '<S23>/Bus Creator1' */
  TARGETOBJECT BusCreator1_o;          /* '<S24>/Bus Creator1' */
  TARGETOBJECT BusCreator1_kb;         /* '<S25>/Bus Creator1' */
  TARGETOBJECT BusCreator1_f;          /* '<S26>/Bus Creator1' */
  TARGETOBJECT BusCreator1_i5;         /* '<S27>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m;          /* '<S34>/Bus Creator1' */
  TARGETOBJECT BusCreator1_hq;         /* '<S35>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ku;         /* '<S36>/Bus Creator1' */
  TARGETOBJECT BusCreator1_j;          /* '<S37>/Bus Creator1' */
  TARGETOBJECT BusCreator1_g4;         /* '<S38>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mh;         /* '<S39>/Bus Creator1' */
  TARGETOBJECT BusCreator1_am;         /* '<S40>/Bus Creator1' */
  TARGETOBJECT BusCreator1_p5;         /* '<S41>/Bus Creator1' */
  TARGETOBJECT BusCreator1_oo;         /* '<S42>/Bus Creator1' */
  TARGETOBJECT BusCreator1_b;          /* '<S43>/Bus Creator1' */
  TARGETOBJECT BusCreator1_fx;         /* '<S50>/Bus Creator1' */
  TARGETOBJECT BusCreator1_d;          /* '<S51>/Bus Creator1' */
  TARGETOBJECT BusCreator1_k5;         /* '<S52>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c;          /* '<S53>/Bus Creator1' */
  TARGETOBJECT BusCreator1_aj;         /* '<S54>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mn;         /* '<S55>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ic;         /* '<S56>/Bus Creator1' */
  TARGETOBJECT BusCreator1_h4;         /* '<S57>/Bus Creator1' */
  TARGETOBJECT BusCreator1_hm;         /* '<S58>/Bus Creator1' */
  TARGETOBJECT BusCreator1_cr;         /* '<S59>/Bus Creator1' */
  TARGETOBJECT BusCreator1_j2;         /* '<S66>/Bus Creator1' */
  TARGETOBJECT BusCreator1_gy;         /* '<S67>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ko;         /* '<S68>/Bus Creator1' */
  TARGETOBJECT BusCreator1_hk;         /* '<S69>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c1;         /* '<S70>/Bus Creator1' */
  TARGETOBJECT BusCreator1_j4;         /* '<S71>/Bus Creator1' */
  TARGETOBJECT BusCreator1_g2;         /* '<S72>/Bus Creator1' */
  TARGETOBJECT BusCreator1_dg;         /* '<S73>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m3;         /* '<S74>/Bus Creator1' */
  TARGETOBJECT BusCreator1_k0;         /* '<S75>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ps;         /* '<S82>/Bus Creator1' */
  TARGETOBJECT BusCreator1_dg5;        /* '<S83>/Bus Creator1' */
  TARGETOBJECT BusCreator1_kt;         /* '<S84>/Bus Creator1' */
  TARGETOBJECT BusCreator1_hv;         /* '<S85>/Bus Creator1' */
  TARGETOBJECT BusCreator1_gm;         /* '<S86>/Bus Creator1' */
  TARGETOBJECT BusCreator1_cq;         /* '<S87>/Bus Creator1' */
  TARGETOBJECT BusCreator1_jw;         /* '<S88>/Bus Creator1' */
  TARGETOBJECT BusCreator1_e;          /* '<S89>/Bus Creator1' */
  SEGMENT BusCreator1_n;               /* '<S12>/Bus Creator1' */
  SEGMENT BusCreator1_br;              /* '<S13>/Bus Creator1' */
  SEGMENT BusCreator1_gb;              /* '<S14>/Bus Creator1' */
  SEGMENT BusCreator1_j3;              /* '<S15>/Bus Creator1' */
  SEGMENT BusCreator1_ad;              /* '<S16>/Bus Creator1' */
  SEGMENT BusCreator1_iv;              /* '<S17>/Bus Creator1' */
  SEGMENT BusCreator1_koa;             /* '<S28>/Bus Creator1' */
  SEGMENT BusCreator1_ch;              /* '<S29>/Bus Creator1' */
  SEGMENT BusCreator1_bd;              /* '<S30>/Bus Creator1' */
  SEGMENT BusCreator1_i2;              /* '<S31>/Bus Creator1' */
  SEGMENT BusCreator1_j4d;             /* '<S32>/Bus Creator1' */
  SEGMENT BusCreator1_jw0;             /* '<S33>/Bus Creator1' */
  SEGMENT BusCreator1_b4;              /* '<S44>/Bus Creator1' */
  SEGMENT BusCreator1_fb;              /* '<S45>/Bus Creator1' */
  SEGMENT BusCreator1_fv;              /* '<S46>/Bus Creator1' */
  SEGMENT BusCreator1_pn;              /* '<S47>/Bus Creator1' */
  SEGMENT BusCreator1_av;              /* '<S48>/Bus Creator1' */
  SEGMENT BusCreator1_i5t;             /* '<S49>/Bus Creator1' */
  SEGMENT BusCreator1_fa;              /* '<S60>/Bus Creator1' */
  SEGMENT BusCreator1_cl;              /* '<S61>/Bus Creator1' */
  SEGMENT BusCreator1_dj;              /* '<S62>/Bus Creator1' */
  SEGMENT BusCreator1_mu;              /* '<S63>/Bus Creator1' */
  SEGMENT BusCreator1_dd;              /* '<S64>/Bus Creator1' */
  SEGMENT BusCreator1_f3;              /* '<S65>/Bus Creator1' */
  SEGMENT BusCreator1_au;              /* '<S76>/Bus Creator1' */
  SEGMENT BusCreator1_mb;              /* '<S77>/Bus Creator1' */
  SEGMENT BusCreator1_hb;              /* '<S78>/Bus Creator1' */
  SEGMENT BusCreator1_fo;              /* '<S79>/Bus Creator1' */
  SEGMENT BusCreator1_bj;              /* '<S80>/Bus Creator1' */
  SEGMENT BusCreator1_cf;              /* '<S81>/Bus Creator1' */
  real32_T VectorConcatenate_j0[5];    /* '<S10>/Vector Concatenate' */
  real32_T VectorConcatenate_hz[5];    /* '<S11>/Vector Concatenate' */
  real32_T VectorConcatenate_ha[5];    /* '<S18>/Vector Concatenate' */
  real32_T VectorConcatenate_p0[5];    /* '<S19>/Vector Concatenate' */
  real32_T VectorConcatenate_g[5];     /* '<S20>/Vector Concatenate' */
  real32_T VectorConcatenate_kd[5];    /* '<S21>/Vector Concatenate' */
  real32_T VectorConcatenate_c[5];     /* '<S22>/Vector Concatenate' */
  real32_T VectorConcatenate_a[5];     /* '<S23>/Vector Concatenate' */
  real32_T VectorConcatenate_jj[5];    /* '<S24>/Vector Concatenate' */
  real32_T VectorConcatenate_kk[5];    /* '<S25>/Vector Concatenate' */
  real32_T VectorConcatenate_pa[5];    /* '<S26>/Vector Concatenate' */
  real32_T VectorConcatenate_e[5];     /* '<S27>/Vector Concatenate' */
  real32_T VectorConcatenate_i[5];     /* '<S34>/Vector Concatenate' */
  real32_T VectorConcatenate_mi[5];    /* '<S35>/Vector Concatenate' */
  real32_T VectorConcatenate_es[5];    /* '<S36>/Vector Concatenate' */
  real32_T VectorConcatenate_b[5];     /* '<S37>/Vector Concatenate' */
  real32_T VectorConcatenate_ei[5];    /* '<S38>/Vector Concatenate' */
  real32_T VectorConcatenate_ag[5];    /* '<S39>/Vector Concatenate' */
  real32_T VectorConcatenate_cw[5];    /* '<S40>/Vector Concatenate' */
  real32_T VectorConcatenate_hzv[5];   /* '<S41>/Vector Concatenate' */
  real32_T VectorConcatenate_my[5];    /* '<S42>/Vector Concatenate' */
  real32_T VectorConcatenate_bm[5];    /* '<S43>/Vector Concatenate' */
  real32_T VectorConcatenate_iq[5];    /* '<S50>/Vector Concatenate' */
  real32_T VectorConcatenate_m2[5];    /* '<S51>/Vector Concatenate' */
  real32_T VectorConcatenate_eg[5];    /* '<S52>/Vector Concatenate' */
  real32_T VectorConcatenate_bw[5];    /* '<S53>/Vector Concatenate' */
  real32_T VectorConcatenate_f[5];     /* '<S54>/Vector Concatenate' */
  real32_T VectorConcatenate_fs[5];    /* '<S55>/Vector Concatenate' */
  real32_T VectorConcatenate_gu[5];    /* '<S56>/Vector Concatenate' */
  real32_T VectorConcatenate_fi[5];    /* '<S57>/Vector Concatenate' */
  real32_T VectorConcatenate_de[5];    /* '<S58>/Vector Concatenate' */
  real32_T VectorConcatenate_fw[5];    /* '<S59>/Vector Concatenate' */
  real32_T VectorConcatenate_eii[5];   /* '<S66>/Vector Concatenate' */
  real32_T VectorConcatenate_fo[5];    /* '<S67>/Vector Concatenate' */
  real32_T VectorConcatenate_pi[5];    /* '<S68>/Vector Concatenate' */
  real32_T VectorConcatenate_fv[5];    /* '<S69>/Vector Concatenate' */
  real32_T VectorConcatenate_i2[5];    /* '<S70>/Vector Concatenate' */
  real32_T VectorConcatenate_ea[5];    /* '<S71>/Vector Concatenate' */
  real32_T VectorConcatenate_ky[5];    /* '<S72>/Vector Concatenate' */
  real32_T VectorConcatenate_e4[5];    /* '<S73>/Vector Concatenate' */
  real32_T VectorConcatenate_j0q[5];   /* '<S74>/Vector Concatenate' */
  real32_T VectorConcatenate_cr[5];    /* '<S75>/Vector Concatenate' */
  real32_T VectorConcatenate_e5[5];    /* '<S82>/Vector Concatenate' */
  real32_T VectorConcatenate_iu[5];    /* '<S83>/Vector Concatenate' */
  real32_T VectorConcatenate_mb[5];    /* '<S84>/Vector Concatenate' */
  real32_T VectorConcatenate_o[5];     /* '<S85>/Vector Concatenate' */
  real32_T VectorConcatenate_cc[5];    /* '<S86>/Vector Concatenate' */
  real32_T VectorConcatenate_n[5];     /* '<S87>/Vector Concatenate' */
  real32_T VectorConcatenate_hr[5];    /* '<S88>/Vector Concatenate' */
  real32_T VectorConcatenate_gx[5];    /* '<S89>/Vector Concatenate' */
  real32_T VectorConcatenate_ow[4];    /* '<S12>/Vector Concatenate' */
  real32_T VectorConcatenate_po[4];    /* '<S13>/Vector Concatenate' */
  real32_T VectorConcatenate_e1[4];    /* '<S14>/Vector Concatenate' */
  real32_T VectorConcatenate_gf[4];    /* '<S15>/Vector Concatenate' */
  real32_T VectorConcatenate_cu[4];    /* '<S16>/Vector Concatenate' */
  real32_T VectorConcatenate_bi[4];    /* '<S17>/Vector Concatenate' */
  real32_T VectorConcatenate_l[4];     /* '<S28>/Vector Concatenate' */
  real32_T VectorConcatenate_ff[4];    /* '<S29>/Vector Concatenate' */
  real32_T VectorConcatenate_d2[4];    /* '<S30>/Vector Concatenate' */
  real32_T VectorConcatenate_ip[4];    /* '<S31>/Vector Concatenate' */
  real32_T VectorConcatenate_pd[4];    /* '<S32>/Vector Concatenate' */
  real32_T VectorConcatenate_lk[4];    /* '<S33>/Vector Concatenate' */
  real32_T VectorConcatenate_ev[4];    /* '<S44>/Vector Concatenate' */
  real32_T VectorConcatenate_i4[4];    /* '<S45>/Vector Concatenate' */
  real32_T VectorConcatenate_mm[4];    /* '<S46>/Vector Concatenate' */
  real32_T VectorConcatenate_lb[4];    /* '<S47>/Vector Concatenate' */
  real32_T VectorConcatenate_ef[4];    /* '<S48>/Vector Concatenate' */
  real32_T VectorConcatenate_m4[4];    /* '<S49>/Vector Concatenate' */
  real32_T VectorConcatenate_pu[4];    /* '<S60>/Vector Concatenate' */
  real32_T VectorConcatenate_lq[4];    /* '<S61>/Vector Concatenate' */
  real32_T VectorConcatenate_ee[4];    /* '<S62>/Vector Concatenate' */
  real32_T VectorConcatenate_dy[4];    /* '<S63>/Vector Concatenate' */
  real32_T VectorConcatenate_op[4];    /* '<S64>/Vector Concatenate' */
  real32_T VectorConcatenate_cd[4];    /* '<S65>/Vector Concatenate' */
  real32_T VectorConcatenate_ck[4];    /* '<S76>/Vector Concatenate' */
  real32_T VectorConcatenate_m1[4];    /* '<S77>/Vector Concatenate' */
  real32_T VectorConcatenate_ce[4];    /* '<S78>/Vector Concatenate' */
  real32_T VectorConcatenate_l5[4];    /* '<S79>/Vector Concatenate' */
  real32_T VectorConcatenate_jw[4];    /* '<S80>/Vector Concatenate' */
  real32_T VectorConcatenate_hl[4];    /* '<S81>/Vector Concatenate' */
  uint8_T LM_TOS_ALGORISM_o1;          /* '<Root>/LM_TOS_ALGORISM' */
  uint8_T LM_TOS_ALGORISM_o6;          /* '<Root>/LM_TOS_ALGORISM' */
} B_LM_TOS_0103_c_T;

#endif                                 /*LM_TOS_0103_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_0103_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_LM_TOS_0103_T_ {
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S3>/Constant18'
                                        */
  real_T Constant19_Value;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant19'
                                        */
  real_T Constant28_Value;             /* Expression: 2
                                        * Referenced by: '<S3>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 3
                                        * Referenced by: '<S3>/Constant29'
                                        */
  real_T Constant30_Value;             /* Expression: 4
                                        * Referenced by: '<S3>/Constant30'
                                        */
  real_T Constant31_Value;             /* Expression: 5
                                        * Referenced by: '<S3>/Constant31'
                                        */
  real_T Constant32_Value;             /* Expression: 6
                                        * Referenced by: '<S3>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 7
                                        * Referenced by: '<S3>/Constant33'
                                        */
  real_T Constant34_Value;             /* Expression: 8
                                        * Referenced by: '<S3>/Constant34'
                                        */
  real_T Constant35_Value;             /* Expression: 9
                                        * Referenced by: '<S3>/Constant35'
                                        */
  real_T Constant20_Value;             /* Expression: 10
                                        * Referenced by: '<S3>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 11
                                        * Referenced by: '<S3>/Constant21'
                                        */
  real_T Constant24_Value;             /* Expression: 12
                                        * Referenced by: '<S3>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 13
                                        * Referenced by: '<S3>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 14
                                        * Referenced by: '<S3>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: 15
                                        * Referenced by: '<S3>/Constant27'
                                        */
  real_T Constant22_Value;             /* Expression: 16
                                        * Referenced by: '<S3>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 17
                                        * Referenced by: '<S3>/Constant23'
                                        */
  real_T Constant_Value;               /* Expression: 18
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 19
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 20
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 21
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 22
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 23
                                        * Referenced by: '<S3>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 24
                                        * Referenced by: '<S3>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 25
                                        * Referenced by: '<S3>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 26
                                        * Referenced by: '<S3>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 27
                                        * Referenced by: '<S3>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 28
                                        * Referenced by: '<S3>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 29
                                        * Referenced by: '<S3>/Constant11'
                                        */
  real_T Constant14_Value;             /* Expression: 30
                                        * Referenced by: '<S3>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 31
                                        * Referenced by: '<S3>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 32
                                        * Referenced by: '<S3>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 33
                                        * Referenced by: '<S3>/Constant17'
                                        */
  real_T Constant12_Value;             /* Expression: 34
                                        * Referenced by: '<S3>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 35
                                        * Referenced by: '<S3>/Constant13'
                                        */
  real_T Constant38_Value;             /* Expression: 36
                                        * Referenced by: '<S3>/Constant38'
                                        */
  real_T Constant39_Value;             /* Expression: 37
                                        * Referenced by: '<S3>/Constant39'
                                        */
  real_T Constant36_Value;             /* Expression: 38
                                        * Referenced by: '<S3>/Constant36'
                                        */
  real_T Constant37_Value;             /* Expression: 39
                                        * Referenced by: '<S3>/Constant37'
                                        */
};

#endif                                 /*LM_TOS_0103_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_0103_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_LM_TOS_0103_T {
  const char_T **errorStatus;
};

#endif                                 /*LM_TOS_0103_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_0103_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_LM_TOS_0103_T rtm;
} MdlrefDW_LM_TOS_0103_T;

#endif                                 /*LM_TOS_0103_MDLREF_HIDE_CHILD_*/

extern void LM_TOS_0103_Start(void);
extern void LM_TOS_0103(const FUS_OBJ_OUTPUT_ST *rtu_FUS_OBJ_OUTPUT_ST, const
  VSI_VEHSTATE_ST *rtu_VEH_STATE_ST, const FUS_LANE_OUTPUT_ST
  *rtu_FUS_LANE_OUTPUT_ST, const FUS_ROAD_EDGE_OUTPUT_ST
  *rtu_FUS_ROADEDGE_OUTPUT_ST1, const ATS_PO_ST *rtu_ACC_PO_OUTPUT_ST,
  LANEMODEL_OUTPUT_ST *rty_LANE_MODEL_OUTPUT_ST, HWA_TARGETOBJECT_OUTPUT_ST
  *rty_HWA_TAR_OBJ_OUTPUT_ST, HMI_OUTPUT_ST *rty_hmi_display_info_st,
  NARROW_LANE_SUPPORT_OUTPUT_ST *rty_nls_info_st, uint16_T *rty_rolling_count);

/* Model reference registration function */
extern void LM_TOS_0103_initialize(const char_T **rt_errorStatus);

#ifndef LM_TOS_0103_MDLREF_HIDE_CHILD_

extern MdlrefDW_LM_TOS_0103_T LM_TOS_0103_MdlrefDW;

#endif                                 /*LM_TOS_0103_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_0103_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_LM_TOS_0103_c_T LM_TOS_0103_B;

#endif                                 /*LM_TOS_0103_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'LM_TOS_0103'
 * '<S1>'   : 'LM_TOS_0103/adapter1'
 * '<S2>'   : 'LM_TOS_0103/adapter2'
 * '<S3>'   : 'LM_TOS_0103/adapter1/Subsystem'
 * '<S4>'   : 'LM_TOS_0103/adapter2/Lane_0'
 * '<S5>'   : 'LM_TOS_0103/adapter2/Lane_1'
 * '<S6>'   : 'LM_TOS_0103/adapter2/Lane_2'
 * '<S7>'   : 'LM_TOS_0103/adapter2/Lane_3'
 * '<S8>'   : 'LM_TOS_0103/adapter2/Lane_4'
 * '<S9>'   : 'LM_TOS_0103/adapter2/hmi_output_adapter'
 * '<S10>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem'
 * '<S11>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem1'
 * '<S12>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem10'
 * '<S13>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem11'
 * '<S14>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem12'
 * '<S15>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem13'
 * '<S16>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem14'
 * '<S17>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem15'
 * '<S18>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem2'
 * '<S19>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem3'
 * '<S20>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem4'
 * '<S21>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem5'
 * '<S22>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem6'
 * '<S23>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem7'
 * '<S24>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem8'
 * '<S25>'  : 'LM_TOS_0103/adapter2/Lane_0/Subsystem9'
 * '<S26>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem'
 * '<S27>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem1'
 * '<S28>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem10'
 * '<S29>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem11'
 * '<S30>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem12'
 * '<S31>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem13'
 * '<S32>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem14'
 * '<S33>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem15'
 * '<S34>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem2'
 * '<S35>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem3'
 * '<S36>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem4'
 * '<S37>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem5'
 * '<S38>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem6'
 * '<S39>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem7'
 * '<S40>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem8'
 * '<S41>'  : 'LM_TOS_0103/adapter2/Lane_1/Subsystem9'
 * '<S42>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem'
 * '<S43>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem1'
 * '<S44>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem10'
 * '<S45>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem11'
 * '<S46>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem12'
 * '<S47>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem13'
 * '<S48>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem14'
 * '<S49>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem15'
 * '<S50>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem2'
 * '<S51>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem3'
 * '<S52>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem4'
 * '<S53>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem5'
 * '<S54>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem6'
 * '<S55>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem7'
 * '<S56>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem8'
 * '<S57>'  : 'LM_TOS_0103/adapter2/Lane_2/Subsystem9'
 * '<S58>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem'
 * '<S59>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem1'
 * '<S60>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem10'
 * '<S61>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem11'
 * '<S62>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem12'
 * '<S63>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem13'
 * '<S64>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem14'
 * '<S65>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem15'
 * '<S66>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem2'
 * '<S67>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem3'
 * '<S68>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem4'
 * '<S69>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem5'
 * '<S70>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem6'
 * '<S71>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem7'
 * '<S72>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem8'
 * '<S73>'  : 'LM_TOS_0103/adapter2/Lane_3/Subsystem9'
 * '<S74>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem'
 * '<S75>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem1'
 * '<S76>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem10'
 * '<S77>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem11'
 * '<S78>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem12'
 * '<S79>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem13'
 * '<S80>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem14'
 * '<S81>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem15'
 * '<S82>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem2'
 * '<S83>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem3'
 * '<S84>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem4'
 * '<S85>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem5'
 * '<S86>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem6'
 * '<S87>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem7'
 * '<S88>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem8'
 * '<S89>'  : 'LM_TOS_0103/adapter2/Lane_4/Subsystem9'
 */
#endif                                 /* RTW_HEADER_LM_TOS_0103_h_ */
