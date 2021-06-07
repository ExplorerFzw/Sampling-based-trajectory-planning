/*
 * Code generation for system model 'LM_TOS_1229'
 * For more details, see corresponding source file LM_TOS_1229.c
 *
 */

#ifndef RTW_HEADER_LM_TOS_1229_h_
#define RTW_HEADER_LM_TOS_1229_h_
#include <string.h>
#ifndef LM_TOS_1229_COMMON_INCLUDES_
# define LM_TOS_1229_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* LM_TOS_1229_COMMON_INCLUDES_ */

#include "LM_TOS_1229_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for model 'LM_TOS_1229' */
#ifndef LM_TOS_1229_MDLREF_HIDE_CHILD_

typedef struct {
  FUS_OUTOBJ_LIST_ST BusConversion_InsertedFor_LM_TO;
  TARGETOBJECTS_ST_adp LM_TOS_ALGORISM_o3;/* '<S1>/LM_TOS_ALGORISM' */
  SEGMENTS_ST_adp LM_TOS_ALGORISM_o4;  /* '<S1>/LM_TOS_ALGORISM' */
  LM_LANE_ST BusCreator;               /* '<S6>/Bus Creator' */
  LM_LANE_ST BusCreator_c;             /* '<S7>/Bus Creator' */
  LM_LANE_ST BusCreator_p;             /* '<S8>/Bus Creator' */
  LM_LANE_ST BusCreator_g;             /* '<S9>/Bus Creator' */
  LM_LANE_ST BusCreator_gb;            /* '<S10>/Bus Creator' */
  HMI_OUTPUT_ST_APT LM_TOS_ALGORISM_o7;/* '<S1>/LM_TOS_ALGORISM' */
  FUS_OBJ_DATA_ST Selector18;          /* '<S5>/Selector18' */
  FUS_OBJ_DATA_ST Selector19;          /* '<S5>/Selector19' */
  FUS_OBJ_DATA_ST Selector28;          /* '<S5>/Selector28' */
  FUS_OBJ_DATA_ST Selector29;          /* '<S5>/Selector29' */
  FUS_OBJ_DATA_ST Selector30;          /* '<S5>/Selector30' */
  FUS_OBJ_DATA_ST Selector31;          /* '<S5>/Selector31' */
  FUS_OBJ_DATA_ST Selector32;          /* '<S5>/Selector32' */
  FUS_OBJ_DATA_ST Selector33;          /* '<S5>/Selector33' */
  FUS_OBJ_DATA_ST Selector34;          /* '<S5>/Selector34' */
  FUS_OBJ_DATA_ST Selector35;          /* '<S5>/Selector35' */
  FUS_OBJ_DATA_ST Selector20;          /* '<S5>/Selector20' */
  FUS_OBJ_DATA_ST Selector21;          /* '<S5>/Selector21' */
  FUS_OBJ_DATA_ST Selector24;          /* '<S5>/Selector24' */
  FUS_OBJ_DATA_ST Selector25;          /* '<S5>/Selector25' */
  FUS_OBJ_DATA_ST Selector26;          /* '<S5>/Selector26' */
  FUS_OBJ_DATA_ST Selector27;          /* '<S5>/Selector27' */
  FUS_OBJ_DATA_ST Selector22;          /* '<S5>/Selector22' */
  FUS_OBJ_DATA_ST Selector23;          /* '<S5>/Selector23' */
  FUS_OBJ_DATA_ST Selector;            /* '<S5>/Selector' */
  FUS_OBJ_DATA_ST Selector1;           /* '<S5>/Selector1' */
  FUS_OBJ_DATA_ST Selector2;           /* '<S5>/Selector2' */
  FUS_OBJ_DATA_ST Selector3;           /* '<S5>/Selector3' */
  FUS_OBJ_DATA_ST Selector4;           /* '<S5>/Selector4' */
  FUS_OBJ_DATA_ST Selector5;           /* '<S5>/Selector5' */
  FUS_OBJ_DATA_ST Selector6;           /* '<S5>/Selector6' */
  FUS_OBJ_DATA_ST Selector7;           /* '<S5>/Selector7' */
  FUS_OBJ_DATA_ST Selector8;           /* '<S5>/Selector8' */
  FUS_OBJ_DATA_ST Selector9;           /* '<S5>/Selector9' */
  FUS_OBJ_DATA_ST Selector10;          /* '<S5>/Selector10' */
  FUS_OBJ_DATA_ST Selector11;          /* '<S5>/Selector11' */
  FUS_OBJ_DATA_ST Selector14;          /* '<S5>/Selector14' */
  FUS_OBJ_DATA_ST Selector15;          /* '<S5>/Selector15' */
  FUS_OBJ_DATA_ST Selector16;          /* '<S5>/Selector16' */
  FUS_OBJ_DATA_ST Selector17;          /* '<S5>/Selector17' */
  FUS_OBJ_DATA_ST Selector12;          /* '<S5>/Selector12' */
  FUS_OBJ_DATA_ST Selector13;          /* '<S5>/Selector13' */
  FUS_OBJ_DATA_ST Selector38;          /* '<S5>/Selector38' */
  FUS_OBJ_DATA_ST Selector39;          /* '<S5>/Selector39' */
  FUS_OBJ_DATA_ST Selector36;          /* '<S5>/Selector36' */
  FUS_OBJ_DATA_ST Selector37;          /* '<S5>/Selector37' */
  LANES_BAS_INFO_ST_adt LM_TOS_ALGORISM_o2;/* '<S1>/LM_TOS_ALGORISM' */
  TARGETOBJECT BusCreator1;            /* '<S12>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c;          /* '<S13>/Bus Creator1' */
  TARGETOBJECT BusCreator1_i;          /* '<S20>/Bus Creator1' */
  TARGETOBJECT BusCreator1_n;          /* '<S21>/Bus Creator1' */
  TARGETOBJECT BusCreator1_o;          /* '<S22>/Bus Creator1' */
  TARGETOBJECT BusCreator1_or;         /* '<S23>/Bus Creator1' */
  TARGETOBJECT BusCreator1_p;          /* '<S24>/Bus Creator1' */
  TARGETOBJECT BusCreator1_j;          /* '<S25>/Bus Creator1' */
  TARGETOBJECT BusCreator1_a;          /* '<S26>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ox;         /* '<S27>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m;          /* '<S28>/Bus Creator1' */
  TARGETOBJECT BusCreator1_il;         /* '<S29>/Bus Creator1' */
  TARGETOBJECT BusCreator1_oa;         /* '<S36>/Bus Creator1' */
  TARGETOBJECT BusCreator1_j1;         /* '<S37>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mc;         /* '<S38>/Bus Creator1' */
  TARGETOBJECT BusCreator1_k;          /* '<S39>/Bus Creator1' */
  TARGETOBJECT BusCreator1_os;         /* '<S40>/Bus Creator1' */
  TARGETOBJECT BusCreator1_am;         /* '<S41>/Bus Creator1' */
  TARGETOBJECT BusCreator1_nw;         /* '<S42>/Bus Creator1' */
  TARGETOBJECT BusCreator1_d;          /* '<S43>/Bus Creator1' */
  TARGETOBJECT BusCreator1_l;          /* '<S44>/Bus Creator1' */
  TARGETOBJECT BusCreator1_f;          /* '<S45>/Bus Creator1' */
  TARGETOBJECT BusCreator1_kd;         /* '<S52>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ck;         /* '<S53>/Bus Creator1' */
  TARGETOBJECT BusCreator1_jf;         /* '<S54>/Bus Creator1' */
  TARGETOBJECT BusCreator1_g;          /* '<S55>/Bus Creator1' */
  TARGETOBJECT BusCreator1_fu;         /* '<S56>/Bus Creator1' */
  TARGETOBJECT BusCreator1_jt;         /* '<S57>/Bus Creator1' */
  TARGETOBJECT BusCreator1_o1;         /* '<S58>/Bus Creator1' */
  TARGETOBJECT BusCreator1_cw;         /* '<S59>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ka;         /* '<S60>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mn;         /* '<S61>/Bus Creator1' */
  TARGETOBJECT BusCreator1_nq;         /* '<S68>/Bus Creator1' */
  TARGETOBJECT BusCreator1_e;          /* '<S69>/Bus Creator1' */
  TARGETOBJECT BusCreator1_cg;         /* '<S70>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m5;         /* '<S71>/Bus Creator1' */
  TARGETOBJECT BusCreator1_jc;         /* '<S72>/Bus Creator1' */
  TARGETOBJECT BusCreator1_df;         /* '<S73>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ps;         /* '<S74>/Bus Creator1' */
  TARGETOBJECT BusCreator1_nqp;        /* '<S75>/Bus Creator1' */
  TARGETOBJECT BusCreator1_n0;         /* '<S76>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mnp;        /* '<S77>/Bus Creator1' */
  TARGETOBJECT BusCreator1_cc;         /* '<S84>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ji;         /* '<S85>/Bus Creator1' */
  TARGETOBJECT BusCreator1_h;          /* '<S86>/Bus Creator1' */
  TARGETOBJECT BusCreator1_et;         /* '<S87>/Bus Creator1' */
  TARGETOBJECT BusCreator1_eo;         /* '<S88>/Bus Creator1' */
  TARGETOBJECT BusCreator1_lb;         /* '<S89>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ge;         /* '<S90>/Bus Creator1' */
  TARGETOBJECT BusCreator1_gv;         /* '<S91>/Bus Creator1' */
  SEGMENT BusCreator1_fk;              /* '<S14>/Bus Creator1' */
  SEGMENT BusCreator1_fz;              /* '<S15>/Bus Creator1' */
  SEGMENT BusCreator1_lm;              /* '<S16>/Bus Creator1' */
  SEGMENT BusCreator1_dn;              /* '<S17>/Bus Creator1' */
  SEGMENT BusCreator1_jk;              /* '<S18>/Bus Creator1' */
  SEGMENT BusCreator1_fr;              /* '<S19>/Bus Creator1' */
  SEGMENT BusCreator1_ey;              /* '<S30>/Bus Creator1' */
  SEGMENT BusCreator1_psx;             /* '<S31>/Bus Creator1' */
  SEGMENT BusCreator1_l1;              /* '<S32>/Bus Creator1' */
  SEGMENT BusCreator1_nv;              /* '<S33>/Bus Creator1' */
  SEGMENT BusCreator1_eh;              /* '<S34>/Bus Creator1' */
  SEGMENT BusCreator1_js;              /* '<S35>/Bus Creator1' */
  SEGMENT BusCreator1_mc0;             /* '<S46>/Bus Creator1' */
  SEGMENT BusCreator1_cb;              /* '<S47>/Bus Creator1' */
  SEGMENT BusCreator1_dq;              /* '<S48>/Bus Creator1' */
  SEGMENT BusCreator1_lq;              /* '<S49>/Bus Creator1' */
  SEGMENT BusCreator1_ef;              /* '<S50>/Bus Creator1' */
  SEGMENT BusCreator1_ng;              /* '<S51>/Bus Creator1' */
  SEGMENT BusCreator1_o0;              /* '<S62>/Bus Creator1' */
  SEGMENT BusCreator1_jb;              /* '<S63>/Bus Creator1' */
  SEGMENT BusCreator1_eb;              /* '<S64>/Bus Creator1' */
  SEGMENT BusCreator1_c5;              /* '<S65>/Bus Creator1' */
  SEGMENT BusCreator1_e2;              /* '<S66>/Bus Creator1' */
  SEGMENT BusCreator1_o2;              /* '<S67>/Bus Creator1' */
  SEGMENT BusCreator1_kat;             /* '<S78>/Bus Creator1' */
  SEGMENT BusCreator1_l2;              /* '<S79>/Bus Creator1' */
  SEGMENT BusCreator1_cq;              /* '<S80>/Bus Creator1' */
  SEGMENT BusCreator1_n5;              /* '<S81>/Bus Creator1' */
  SEGMENT BusCreator1_nb;              /* '<S82>/Bus Creator1' */
  SEGMENT BusCreator1_gj;              /* '<S83>/Bus Creator1' */
  real32_T VectorConcatenate_m[5];     /* '<S12>/Vector Concatenate' */
  real32_T VectorConcatenate_ct[5];    /* '<S13>/Vector Concatenate' */
  real32_T VectorConcatenate_h[5];     /* '<S20>/Vector Concatenate' */
  real32_T VectorConcatenate_lb[5];    /* '<S21>/Vector Concatenate' */
  real32_T VectorConcatenate_k[5];     /* '<S22>/Vector Concatenate' */
  real32_T VectorConcatenate_ef[5];    /* '<S23>/Vector Concatenate' */
  real32_T VectorConcatenate_j[5];     /* '<S24>/Vector Concatenate' */
  real32_T VectorConcatenate_b[5];     /* '<S25>/Vector Concatenate' */
  real32_T VectorConcatenate_eq[5];    /* '<S26>/Vector Concatenate' */
  real32_T VectorConcatenate_i[5];     /* '<S27>/Vector Concatenate' */
  real32_T VectorConcatenate_bz[5];    /* '<S28>/Vector Concatenate' */
  real32_T VectorConcatenate_kr[5];    /* '<S29>/Vector Concatenate' */
  real32_T VectorConcatenate_ew[5];    /* '<S36>/Vector Concatenate' */
  real32_T VectorConcatenate_f[5];     /* '<S37>/Vector Concatenate' */
  real32_T VectorConcatenate_ch[5];    /* '<S38>/Vector Concatenate' */
  real32_T VectorConcatenate_p[5];     /* '<S39>/Vector Concatenate' */
  real32_T VectorConcatenate_fc[5];    /* '<S40>/Vector Concatenate' */
  real32_T VectorConcatenate_hk[5];    /* '<S41>/Vector Concatenate' */
  real32_T VectorConcatenate_b1[5];    /* '<S42>/Vector Concatenate' */
  real32_T VectorConcatenate_ml[5];    /* '<S43>/Vector Concatenate' */
  real32_T VectorConcatenate_mu[5];    /* '<S44>/Vector Concatenate' */
  real32_T VectorConcatenate_g[5];     /* '<S45>/Vector Concatenate' */
  real32_T VectorConcatenate_hu[5];    /* '<S52>/Vector Concatenate' */
  real32_T VectorConcatenate_f5[5];    /* '<S53>/Vector Concatenate' */
  real32_T VectorConcatenate_ct0[5];   /* '<S54>/Vector Concatenate' */
  real32_T VectorConcatenate_pk[5];    /* '<S55>/Vector Concatenate' */
  real32_T VectorConcatenate_d[5];     /* '<S56>/Vector Concatenate' */
  real32_T VectorConcatenate_km[5];    /* '<S57>/Vector Concatenate' */
  real32_T VectorConcatenate_bv[5];    /* '<S58>/Vector Concatenate' */
  real32_T VectorConcatenate_hp[5];    /* '<S59>/Vector Concatenate' */
  real32_T VectorConcatenate_g4[5];    /* '<S60>/Vector Concatenate' */
  real32_T VectorConcatenate_gu[5];    /* '<S61>/Vector Concatenate' */
  real32_T VectorConcatenate_iv[5];    /* '<S68>/Vector Concatenate' */
  real32_T VectorConcatenate_n[5];     /* '<S69>/Vector Concatenate' */
  real32_T VectorConcatenate_mu1[5];   /* '<S70>/Vector Concatenate' */
  real32_T VectorConcatenate_kmc[5];   /* '<S71>/Vector Concatenate' */
  real32_T VectorConcatenate_ij[5];    /* '<S72>/Vector Concatenate' */
  real32_T VectorConcatenate_o[5];     /* '<S73>/Vector Concatenate' */
  real32_T VectorConcatenate_o5[5];    /* '<S74>/Vector Concatenate' */
  real32_T VectorConcatenate_cz[5];    /* '<S75>/Vector Concatenate' */
  real32_T VectorConcatenate_jy[5];    /* '<S76>/Vector Concatenate' */
  real32_T VectorConcatenate_m2[5];    /* '<S77>/Vector Concatenate' */
  real32_T VectorConcatenate_pj[5];    /* '<S84>/Vector Concatenate' */
  real32_T VectorConcatenate_pjv[5];   /* '<S85>/Vector Concatenate' */
  real32_T VectorConcatenate_mt[5];    /* '<S86>/Vector Concatenate' */
  real32_T VectorConcatenate_at[5];    /* '<S87>/Vector Concatenate' */
  real32_T VectorConcatenate_jr[5];    /* '<S88>/Vector Concatenate' */
  real32_T VectorConcatenate_jx[5];    /* '<S89>/Vector Concatenate' */
  real32_T VectorConcatenate_c2[5];    /* '<S90>/Vector Concatenate' */
  real32_T VectorConcatenate_po[5];    /* '<S91>/Vector Concatenate' */
  real32_T VectorConcatenate_fb[4];    /* '<S14>/Vector Concatenate' */
  real32_T VectorConcatenate_h5[4];    /* '<S15>/Vector Concatenate' */
  real32_T VectorConcatenate_jf[4];    /* '<S16>/Vector Concatenate' */
  real32_T VectorConcatenate_my[4];    /* '<S17>/Vector Concatenate' */
  real32_T VectorConcatenate_im[4];    /* '<S18>/Vector Concatenate' */
  real32_T VectorConcatenate_bg[4];    /* '<S19>/Vector Concatenate' */
  real32_T VectorConcatenate_g3[4];    /* '<S30>/Vector Concatenate' */
  real32_T VectorConcatenate_mr[4];    /* '<S31>/Vector Concatenate' */
  real32_T VectorConcatenate_g0[4];    /* '<S32>/Vector Concatenate' */
  real32_T VectorConcatenate_p3[4];    /* '<S33>/Vector Concatenate' */
  real32_T VectorConcatenate_nd[4];    /* '<S34>/Vector Concatenate' */
  real32_T VectorConcatenate_ej[4];    /* '<S35>/Vector Concatenate' */
  real32_T VectorConcatenate_n4[4];    /* '<S46>/Vector Concatenate' */
  real32_T VectorConcatenate_cj[4];    /* '<S47>/Vector Concatenate' */
  real32_T VectorConcatenate_cs[4];    /* '<S48>/Vector Concatenate' */
  real32_T VectorConcatenate_lc[4];    /* '<S49>/Vector Concatenate' */
  real32_T VectorConcatenate_gg[4];    /* '<S50>/Vector Concatenate' */
  real32_T VectorConcatenate_ip[4];    /* '<S51>/Vector Concatenate' */
  real32_T VectorConcatenate_fs[4];    /* '<S62>/Vector Concatenate' */
  real32_T VectorConcatenate_pm[4];    /* '<S63>/Vector Concatenate' */
  real32_T VectorConcatenate_nl[4];    /* '<S64>/Vector Concatenate' */
  real32_T VectorConcatenate_ka[4];    /* '<S65>/Vector Concatenate' */
  real32_T VectorConcatenate_p3a[4];   /* '<S66>/Vector Concatenate' */
  real32_T VectorConcatenate_b3[4];    /* '<S67>/Vector Concatenate' */
  real32_T VectorConcatenate_fz[4];    /* '<S78>/Vector Concatenate' */
  real32_T VectorConcatenate_jxc[4];   /* '<S79>/Vector Concatenate' */
  real32_T VectorConcatenate_lx[4];    /* '<S80>/Vector Concatenate' */
  real32_T VectorConcatenate_j0[4];    /* '<S81>/Vector Concatenate' */
  real32_T VectorConcatenate_a1[4];    /* '<S82>/Vector Concatenate' */
  real32_T VectorConcatenate_ewy[4];   /* '<S83>/Vector Concatenate' */
  uint8_T LM_TOS_ALGORISM_o1;          /* '<S1>/LM_TOS_ALGORISM' */
  uint8_T LM_TOS_ALGORISM_o6;          /* '<S1>/LM_TOS_ALGORISM' */
} B_LM_TOS_1229_c_T;

#endif                                 /*LM_TOS_1229_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'LM_TOS_1229' */
#ifndef LM_TOS_1229_MDLREF_HIDE_CHILD_

typedef struct {
  int32_T i;                           /* '<Root>/RM_OS' */
} DW_LM_TOS_1229_f_T;

#endif                                 /*LM_TOS_1229_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_1229_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_LM_TOS_1229_T_ {
  struct_eln0t1jxxLshCuJyjHYAu Out1_Y0;/* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S1>/Out1'
                                        */
  HWA_TARGETOBJECT_OUTPUT_ST Out2_Y0;  /* Computed Parameter: Out2_Y0
                                        * Referenced by: '<S1>/Out2'
                                        */
  struct_1oMhPRdySKj2NQxq9SQXLD Out3_Y0;/* Computed Parameter: Out3_Y0
                                         * Referenced by: '<S1>/Out3'
                                         */
  NARROW_LANE_SUPPORT_OUTPUT_ST Out4_Y0;/* Computed Parameter: Out4_Y0
                                         * Referenced by: '<S1>/Out4'
                                         */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant18'
                                        */
  real_T Constant19_Value;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant19'
                                        */
  real_T Constant28_Value;             /* Expression: 2
                                        * Referenced by: '<S5>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 3
                                        * Referenced by: '<S5>/Constant29'
                                        */
  real_T Constant30_Value;             /* Expression: 4
                                        * Referenced by: '<S5>/Constant30'
                                        */
  real_T Constant31_Value;             /* Expression: 5
                                        * Referenced by: '<S5>/Constant31'
                                        */
  real_T Constant32_Value;             /* Expression: 6
                                        * Referenced by: '<S5>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 7
                                        * Referenced by: '<S5>/Constant33'
                                        */
  real_T Constant34_Value;             /* Expression: 8
                                        * Referenced by: '<S5>/Constant34'
                                        */
  real_T Constant35_Value;             /* Expression: 9
                                        * Referenced by: '<S5>/Constant35'
                                        */
  real_T Constant20_Value;             /* Expression: 10
                                        * Referenced by: '<S5>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 11
                                        * Referenced by: '<S5>/Constant21'
                                        */
  real_T Constant24_Value;             /* Expression: 12
                                        * Referenced by: '<S5>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 13
                                        * Referenced by: '<S5>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 14
                                        * Referenced by: '<S5>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: 15
                                        * Referenced by: '<S5>/Constant27'
                                        */
  real_T Constant22_Value;             /* Expression: 16
                                        * Referenced by: '<S5>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 17
                                        * Referenced by: '<S5>/Constant23'
                                        */
  real_T Constant_Value;               /* Expression: 18
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 19
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 20
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 21
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 22
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 23
                                        * Referenced by: '<S5>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 24
                                        * Referenced by: '<S5>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 25
                                        * Referenced by: '<S5>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 26
                                        * Referenced by: '<S5>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 27
                                        * Referenced by: '<S5>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 28
                                        * Referenced by: '<S5>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 29
                                        * Referenced by: '<S5>/Constant11'
                                        */
  real_T Constant14_Value;             /* Expression: 30
                                        * Referenced by: '<S5>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 31
                                        * Referenced by: '<S5>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 32
                                        * Referenced by: '<S5>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 33
                                        * Referenced by: '<S5>/Constant17'
                                        */
  real_T Constant12_Value;             /* Expression: 34
                                        * Referenced by: '<S5>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 35
                                        * Referenced by: '<S5>/Constant13'
                                        */
  real_T Constant38_Value;             /* Expression: 36
                                        * Referenced by: '<S5>/Constant38'
                                        */
  real_T Constant39_Value;             /* Expression: 37
                                        * Referenced by: '<S5>/Constant39'
                                        */
  real_T Constant36_Value;             /* Expression: 38
                                        * Referenced by: '<S5>/Constant36'
                                        */
  real_T Constant37_Value;             /* Expression: 39
                                        * Referenced by: '<S5>/Constant37'
                                        */
};

#endif                                 /*LM_TOS_1229_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_1229_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_LM_TOS_1229_T {
  const char_T **errorStatus;
};

#endif                                 /*LM_TOS_1229_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_1229_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_LM_TOS_1229_T rtm;
} MdlrefDW_LM_TOS_1229_T;

#endif                                 /*LM_TOS_1229_MDLREF_HIDE_CHILD_*/

extern void LM_TOS_1229_Init(LANEMODEL_OUTPUT_ST *rty_LANE_MODEL_OUTPUT_ST,
  HWA_TARGETOBJECT_OUTPUT_ST *rty_HWA_TAR_OBJ_OUTPUT_ST, HMI_OUTPUT_ST
  *rty_hmi_display_info_st, NARROW_LANE_SUPPORT_OUTPUT_ST *rty_nls_info_st);
extern void LM_TOS_1229_Reset(void);
extern void LM_TOS_1229_Start(void);
extern void LM_TOS_1229(const FUS_OBJ_OUTPUT_ST *rtu_FUS_OBJ_OUTPUT_ST, const
  VSI_VEHSTATE_ST *rtu_VEH_STATE_ST, const FUS_LANE_OUTPUT_ST
  *rtu_FUS_LANE_OUTPUT_ST, const FUS_ROAD_EDGE_OUTPUT_ST
  *rtu_FUS_ROADEDGE_OUTPUT_ST1, const ATS_PO_ST *rtu_ACC_PO_OUTPUT_ST,
  LANEMODEL_OUTPUT_ST *rty_LANE_MODEL_OUTPUT_ST, HWA_TARGETOBJECT_OUTPUT_ST
  *rty_HWA_TAR_OBJ_OUTPUT_ST, HMI_OUTPUT_ST *rty_hmi_display_info_st,
  NARROW_LANE_SUPPORT_OUTPUT_ST *rty_nls_info_st);

/* Model reference registration function */
extern void LM_TOS_1229_initialize(const char_T **rt_errorStatus);

#ifndef LM_TOS_1229_MDLREF_HIDE_CHILD_

extern MdlrefDW_LM_TOS_1229_T LM_TOS_1229_MdlrefDW;

#endif                                 /*LM_TOS_1229_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_1229_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_LM_TOS_1229_c_T LM_TOS_1229_B;

/* Block states (default storage) */
extern DW_LM_TOS_1229_f_T LM_TOS_1229_DW;

#endif                                 /*LM_TOS_1229_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'LM_TOS_1229'
 * '<S1>'   : 'LM_TOS_1229/RM_Main'
 * '<S2>'   : 'LM_TOS_1229/RM_OS'
 * '<S3>'   : 'LM_TOS_1229/RM_Main/adapter1'
 * '<S4>'   : 'LM_TOS_1229/RM_Main/adapter2'
 * '<S5>'   : 'LM_TOS_1229/RM_Main/adapter1/Subsystem'
 * '<S6>'   : 'LM_TOS_1229/RM_Main/adapter2/Lane_0'
 * '<S7>'   : 'LM_TOS_1229/RM_Main/adapter2/Lane_1'
 * '<S8>'   : 'LM_TOS_1229/RM_Main/adapter2/Lane_2'
 * '<S9>'   : 'LM_TOS_1229/RM_Main/adapter2/Lane_3'
 * '<S10>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4'
 * '<S11>'  : 'LM_TOS_1229/RM_Main/adapter2/hmi_output_adapter'
 * '<S12>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem'
 * '<S13>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem1'
 * '<S14>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem10'
 * '<S15>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem11'
 * '<S16>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem12'
 * '<S17>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem13'
 * '<S18>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem14'
 * '<S19>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem15'
 * '<S20>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem2'
 * '<S21>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem3'
 * '<S22>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem4'
 * '<S23>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem5'
 * '<S24>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem6'
 * '<S25>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem7'
 * '<S26>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem8'
 * '<S27>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_0/Subsystem9'
 * '<S28>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem'
 * '<S29>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem1'
 * '<S30>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem10'
 * '<S31>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem11'
 * '<S32>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem12'
 * '<S33>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem13'
 * '<S34>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem14'
 * '<S35>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem15'
 * '<S36>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem2'
 * '<S37>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem3'
 * '<S38>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem4'
 * '<S39>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem5'
 * '<S40>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem6'
 * '<S41>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem7'
 * '<S42>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem8'
 * '<S43>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_1/Subsystem9'
 * '<S44>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem'
 * '<S45>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem1'
 * '<S46>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem10'
 * '<S47>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem11'
 * '<S48>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem12'
 * '<S49>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem13'
 * '<S50>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem14'
 * '<S51>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem15'
 * '<S52>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem2'
 * '<S53>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem3'
 * '<S54>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem4'
 * '<S55>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem5'
 * '<S56>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem6'
 * '<S57>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem7'
 * '<S58>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem8'
 * '<S59>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_2/Subsystem9'
 * '<S60>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem'
 * '<S61>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem1'
 * '<S62>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem10'
 * '<S63>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem11'
 * '<S64>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem12'
 * '<S65>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem13'
 * '<S66>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem14'
 * '<S67>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem15'
 * '<S68>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem2'
 * '<S69>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem3'
 * '<S70>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem4'
 * '<S71>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem5'
 * '<S72>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem6'
 * '<S73>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem7'
 * '<S74>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem8'
 * '<S75>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_3/Subsystem9'
 * '<S76>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem'
 * '<S77>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem1'
 * '<S78>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem10'
 * '<S79>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem11'
 * '<S80>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem12'
 * '<S81>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem13'
 * '<S82>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem14'
 * '<S83>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem15'
 * '<S84>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem2'
 * '<S85>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem3'
 * '<S86>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem4'
 * '<S87>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem5'
 * '<S88>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem6'
 * '<S89>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem7'
 * '<S90>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem8'
 * '<S91>'  : 'LM_TOS_1229/RM_Main/adapter2/Lane_4/Subsystem9'
 */
#endif                                 /* RTW_HEADER_LM_TOS_1229_h_ */
