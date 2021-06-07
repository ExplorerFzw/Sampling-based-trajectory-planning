/*
 * Code generation for system model 'LM_TOS'
 * For more details, see corresponding source file LM_TOS.c
 *
 */

#ifndef RTW_HEADER_LM_TOS_h_
#define RTW_HEADER_LM_TOS_h_
#include <string.h>
#ifndef LM_TOS_COMMON_INCLUDES_
# define LM_TOS_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* LM_TOS_COMMON_INCLUDES_ */

#include "LM_TOS_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for model 'LM_TOS' */
#ifndef LM_TOS_MDLREF_HIDE_CHILD_

typedef struct {
  FUS_OUTOBJ_LIST_ST BusConversion_InsertedFor_LM_TO;
  TARGETOBJECTS_ST_adp LM_TOS_ALGORISM_o3;/* '<Root>/LM_TOS_ALGORISM' */
  SEGMENTS_ST_adp LM_TOS_ALGORISM_o4;  /* '<Root>/LM_TOS_ALGORISM' */
  LM_LANE_ST BusCreator;               /* '<S9>/Bus Creator' */
  LM_LANE_ST BusCreator_m;             /* '<S10>/Bus Creator' */
  LM_LANE_ST BusCreator_p;             /* '<S11>/Bus Creator' */
  LM_LANE_ST BusCreator_g;             /* '<S12>/Bus Creator' */
  LM_LANE_ST BusCreator_o;             /* '<S13>/Bus Creator' */
  HWA_TARGETOBJECT_OUTPUT_ADAPTER_ST LM_TOS_ALGORISM_o5;/* '<Root>/LM_TOS_ALGORISM' */
  HMI_OUTPUT_ST_APT LM_TOS_ALGORISM_o7;/* '<Root>/LM_TOS_ALGORISM' */
  FUS_OBJ_DATA_ST Selector18;          /* '<S7>/Selector18' */
  FUS_OBJ_DATA_ST Selector19;          /* '<S7>/Selector19' */
  FUS_OBJ_DATA_ST Selector28;          /* '<S7>/Selector28' */
  FUS_OBJ_DATA_ST Selector29;          /* '<S7>/Selector29' */
  FUS_OBJ_DATA_ST Selector30;          /* '<S7>/Selector30' */
  FUS_OBJ_DATA_ST Selector31;          /* '<S7>/Selector31' */
  FUS_OBJ_DATA_ST Selector32;          /* '<S7>/Selector32' */
  FUS_OBJ_DATA_ST Selector33;          /* '<S7>/Selector33' */
  FUS_OBJ_DATA_ST Selector34;          /* '<S7>/Selector34' */
  FUS_OBJ_DATA_ST Selector35;          /* '<S7>/Selector35' */
  FUS_OBJ_DATA_ST Selector20;          /* '<S7>/Selector20' */
  FUS_OBJ_DATA_ST Selector21;          /* '<S7>/Selector21' */
  FUS_OBJ_DATA_ST Selector24;          /* '<S7>/Selector24' */
  FUS_OBJ_DATA_ST Selector25;          /* '<S7>/Selector25' */
  FUS_OBJ_DATA_ST Selector26;          /* '<S7>/Selector26' */
  FUS_OBJ_DATA_ST Selector27;          /* '<S7>/Selector27' */
  FUS_OBJ_DATA_ST Selector22;          /* '<S7>/Selector22' */
  FUS_OBJ_DATA_ST Selector23;          /* '<S7>/Selector23' */
  FUS_OBJ_DATA_ST Selector;            /* '<S7>/Selector' */
  FUS_OBJ_DATA_ST Selector1;           /* '<S7>/Selector1' */
  FUS_OBJ_DATA_ST Selector2;           /* '<S7>/Selector2' */
  FUS_OBJ_DATA_ST Selector3;           /* '<S7>/Selector3' */
  FUS_OBJ_DATA_ST Selector4;           /* '<S7>/Selector4' */
  FUS_OBJ_DATA_ST Selector5;           /* '<S7>/Selector5' */
  FUS_OBJ_DATA_ST Selector6;           /* '<S7>/Selector6' */
  FUS_OBJ_DATA_ST Selector7;           /* '<S7>/Selector7' */
  FUS_OBJ_DATA_ST Selector8;           /* '<S7>/Selector8' */
  FUS_OBJ_DATA_ST Selector9;           /* '<S7>/Selector9' */
  FUS_OBJ_DATA_ST Selector10;          /* '<S7>/Selector10' */
  FUS_OBJ_DATA_ST Selector11;          /* '<S7>/Selector11' */
  FUS_OBJ_DATA_ST Selector14;          /* '<S7>/Selector14' */
  FUS_OBJ_DATA_ST Selector15;          /* '<S7>/Selector15' */
  FUS_OBJ_DATA_ST Selector16;          /* '<S7>/Selector16' */
  FUS_OBJ_DATA_ST Selector17;          /* '<S7>/Selector17' */
  FUS_OBJ_DATA_ST Selector12;          /* '<S7>/Selector12' */
  FUS_OBJ_DATA_ST Selector13;          /* '<S7>/Selector13' */
  FUS_OBJ_DATA_ST Selector38;          /* '<S7>/Selector38' */
  FUS_OBJ_DATA_ST Selector39;          /* '<S7>/Selector39' */
  FUS_OBJ_DATA_ST Selector36;          /* '<S7>/Selector36' */
  FUS_OBJ_DATA_ST Selector37;          /* '<S7>/Selector37' */
  LANES_BAS_INFO_ST_adt LM_TOS_ALGORISM_o2;/* '<Root>/LM_TOS_ALGORISM' */
  TARGETOBJECT BusCreator1;            /* '<S27>/Bus Creator1' */
  TARGETOBJECT BusCreator1_k;          /* '<S28>/Bus Creator1' */
  TARGETOBJECT BusCreator1_p;          /* '<S35>/Bus Creator1' */
  TARGETOBJECT BusCreator1_f;          /* '<S36>/Bus Creator1' */
  TARGETOBJECT BusCreator1_e;          /* '<S37>/Bus Creator1' */
  TARGETOBJECT BusCreator1_o;          /* '<S38>/Bus Creator1' */
  TARGETOBJECT BusCreator1_b;          /* '<S39>/Bus Creator1' */
  TARGETOBJECT BusCreator1_g;          /* '<S40>/Bus Creator1' */
  TARGETOBJECT BusCreator1_gx;         /* '<S41>/Bus Creator1' */
  TARGETOBJECT BusCreator1_fz;         /* '<S42>/Bus Creator1' */
  TARGETOBJECT BusCreator1_bv;         /* '<S43>/Bus Creator1' */
  TARGETOBJECT BusCreator1_c;          /* '<S44>/Bus Creator1' */
  TARGETOBJECT BusCreator1_i;          /* '<S51>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ph;         /* '<S52>/Bus Creator1' */
  TARGETOBJECT BusCreator1_h;          /* '<S53>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m;          /* '<S54>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m5;         /* '<S55>/Bus Creator1' */
  TARGETOBJECT BusCreator1_gb;         /* '<S56>/Bus Creator1' */
  TARGETOBJECT BusCreator1_a;          /* '<S57>/Bus Creator1' */
  TARGETOBJECT BusCreator1_b2;         /* '<S58>/Bus Creator1' */
  TARGETOBJECT BusCreator1_fl;         /* '<S59>/Bus Creator1' */
  TARGETOBJECT BusCreator1_fh;         /* '<S60>/Bus Creator1' */
  TARGETOBJECT BusCreator1_oj;         /* '<S67>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m0;         /* '<S68>/Bus Creator1' */
  TARGETOBJECT BusCreator1_bw;         /* '<S69>/Bus Creator1' */
  TARGETOBJECT BusCreator1_l;          /* '<S70>/Bus Creator1' */
  TARGETOBJECT BusCreator1_n;          /* '<S71>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ip;         /* '<S72>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mh;         /* '<S73>/Bus Creator1' */
  TARGETOBJECT BusCreator1_l3;         /* '<S74>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ny;         /* '<S75>/Bus Creator1' */
  TARGETOBJECT BusCreator1_el;         /* '<S76>/Bus Creator1' */
  TARGETOBJECT BusCreator1_hk;         /* '<S83>/Bus Creator1' */
  TARGETOBJECT BusCreator1_d;          /* '<S84>/Bus Creator1' */
  TARGETOBJECT BusCreator1_pu;         /* '<S85>/Bus Creator1' */
  TARGETOBJECT BusCreator1_lj;         /* '<S86>/Bus Creator1' */
  TARGETOBJECT BusCreator1_j;          /* '<S87>/Bus Creator1' */
  TARGETOBJECT BusCreator1_pc;         /* '<S88>/Bus Creator1' */
  TARGETOBJECT BusCreator1_dw;         /* '<S89>/Bus Creator1' */
  TARGETOBJECT BusCreator1_m5l;        /* '<S90>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mx;         /* '<S91>/Bus Creator1' */
  TARGETOBJECT BusCreator1_mr;         /* '<S92>/Bus Creator1' */
  TARGETOBJECT BusCreator1_b1;         /* '<S99>/Bus Creator1' */
  TARGETOBJECT BusCreator1_bws;        /* '<S100>/Bus Creator1' */
  TARGETOBJECT BusCreator1_p0;         /* '<S101>/Bus Creator1' */
  TARGETOBJECT BusCreator1_bg;         /* '<S102>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ji;         /* '<S103>/Bus Creator1' */
  TARGETOBJECT BusCreator1_js;         /* '<S104>/Bus Creator1' */
  TARGETOBJECT BusCreator1_il;         /* '<S105>/Bus Creator1' */
  TARGETOBJECT BusCreator1_ot;         /* '<S106>/Bus Creator1' */
  SEGMENT BusCreator1_phc;             /* '<S29>/Bus Creator1' */
  SEGMENT BusCreator1_lt;              /* '<S30>/Bus Creator1' */
  SEGMENT BusCreator1_fb;              /* '<S31>/Bus Creator1' */
  SEGMENT BusCreator1_p03;             /* '<S32>/Bus Creator1' */
  SEGMENT BusCreator1_pa;              /* '<S33>/Bus Creator1' */
  SEGMENT BusCreator1_c0;              /* '<S34>/Bus Creator1' */
  SEGMENT BusCreator1_md;              /* '<S45>/Bus Creator1' */
  SEGMENT BusCreator1_fv;              /* '<S46>/Bus Creator1' */
  SEGMENT BusCreator1_hs;              /* '<S47>/Bus Creator1' */
  SEGMENT BusCreator1_g4;              /* '<S48>/Bus Creator1' */
  SEGMENT BusCreator1_hz;              /* '<S49>/Bus Creator1' */
  SEGMENT BusCreator1_ky;              /* '<S50>/Bus Creator1' */
  SEGMENT BusCreator1_otn;             /* '<S61>/Bus Creator1' */
  SEGMENT BusCreator1_gc;              /* '<S62>/Bus Creator1' */
  SEGMENT BusCreator1_hx;              /* '<S63>/Bus Creator1' */
  SEGMENT BusCreator1_mc;              /* '<S64>/Bus Creator1' */
  SEGMENT BusCreator1_mo;              /* '<S65>/Bus Creator1' */
  SEGMENT BusCreator1_bs;              /* '<S66>/Bus Creator1' */
  SEGMENT BusCreator1_pue;             /* '<S77>/Bus Creator1' */
  SEGMENT BusCreator1_er;              /* '<S78>/Bus Creator1' */
  SEGMENT BusCreator1_i2;              /* '<S79>/Bus Creator1' */
  SEGMENT BusCreator1_is;              /* '<S80>/Bus Creator1' */
  SEGMENT BusCreator1_hb;              /* '<S81>/Bus Creator1' */
  SEGMENT BusCreator1_ko;              /* '<S82>/Bus Creator1' */
  SEGMENT BusCreator1_cn;              /* '<S93>/Bus Creator1' */
  SEGMENT BusCreator1_ls;              /* '<S94>/Bus Creator1' */
  SEGMENT BusCreator1_ds;              /* '<S95>/Bus Creator1' */
  SEGMENT BusCreator1_kx;              /* '<S96>/Bus Creator1' */
  SEGMENT BusCreator1_hp;              /* '<S97>/Bus Creator1' */
  SEGMENT BusCreator1_et;              /* '<S98>/Bus Creator1' */
  real32_T VectorConcatenate_a[5];     /* '<S27>/Vector Concatenate' */
  real32_T VectorConcatenate_j[5];     /* '<S28>/Vector Concatenate' */
  real32_T VectorConcatenate_m[5];     /* '<S35>/Vector Concatenate' */
  real32_T VectorConcatenate_o[5];     /* '<S36>/Vector Concatenate' */
  real32_T VectorConcatenate_h[5];     /* '<S37>/Vector Concatenate' */
  real32_T VectorConcatenate_k[5];     /* '<S38>/Vector Concatenate' */
  real32_T VectorConcatenate_n[5];     /* '<S39>/Vector Concatenate' */
  real32_T VectorConcatenate_oi[5];    /* '<S40>/Vector Concatenate' */
  real32_T VectorConcatenate_el[5];    /* '<S41>/Vector Concatenate' */
  real32_T VectorConcatenate_bl[5];    /* '<S42>/Vector Concatenate' */
  real32_T VectorConcatenate_j5[5];    /* '<S43>/Vector Concatenate' */
  real32_T VectorConcatenate_nw[5];    /* '<S44>/Vector Concatenate' */
  real32_T VectorConcatenate_gw[5];    /* '<S51>/Vector Concatenate' */
  real32_T VectorConcatenate_mh[5];    /* '<S52>/Vector Concatenate' */
  real32_T VectorConcatenate_nj[5];    /* '<S53>/Vector Concatenate' */
  real32_T VectorConcatenate_c2[5];    /* '<S54>/Vector Concatenate' */
  real32_T VectorConcatenate_mj[5];    /* '<S55>/Vector Concatenate' */
  real32_T VectorConcatenate_ce[5];    /* '<S56>/Vector Concatenate' */
  real32_T VectorConcatenate_i[5];     /* '<S57>/Vector Concatenate' */
  real32_T VectorConcatenate_a1[5];    /* '<S58>/Vector Concatenate' */
  real32_T VectorConcatenate_bp[5];    /* '<S59>/Vector Concatenate' */
  real32_T VectorConcatenate_kf[5];    /* '<S60>/Vector Concatenate' */
  real32_T VectorConcatenate_jv[5];    /* '<S67>/Vector Concatenate' */
  real32_T VectorConcatenate_gn[5];    /* '<S68>/Vector Concatenate' */
  real32_T VectorConcatenate_pz[5];    /* '<S69>/Vector Concatenate' */
  real32_T VectorConcatenate_or[5];    /* '<S70>/Vector Concatenate' */
  real32_T VectorConcatenate_gp[5];    /* '<S71>/Vector Concatenate' */
  real32_T VectorConcatenate_ax[5];    /* '<S72>/Vector Concatenate' */
  real32_T VectorConcatenate_ej[5];    /* '<S73>/Vector Concatenate' */
  real32_T VectorConcatenate_om[5];    /* '<S74>/Vector Concatenate' */
  real32_T VectorConcatenate_f[5];     /* '<S75>/Vector Concatenate' */
  real32_T VectorConcatenate_bu[5];    /* '<S76>/Vector Concatenate' */
  real32_T VectorConcatenate_nn[5];    /* '<S83>/Vector Concatenate' */
  real32_T VectorConcatenate_hw[5];    /* '<S84>/Vector Concatenate' */
  real32_T VectorConcatenate_l[5];     /* '<S85>/Vector Concatenate' */
  real32_T VectorConcatenate_fs[5];    /* '<S86>/Vector Concatenate' */
  real32_T VectorConcatenate_ec[5];    /* '<S87>/Vector Concatenate' */
  real32_T VectorConcatenate_fj[5];    /* '<S88>/Vector Concatenate' */
  real32_T VectorConcatenate_bh[5];    /* '<S89>/Vector Concatenate' */
  real32_T VectorConcatenate_pa[5];    /* '<S90>/Vector Concatenate' */
  real32_T VectorConcatenate_hv[5];    /* '<S91>/Vector Concatenate' */
  real32_T VectorConcatenate_j3[5];    /* '<S92>/Vector Concatenate' */
  real32_T VectorConcatenate_bc[5];    /* '<S99>/Vector Concatenate' */
  real32_T VectorConcatenate_o1[5];    /* '<S100>/Vector Concatenate' */
  real32_T VectorConcatenate_e4[5];    /* '<S101>/Vector Concatenate' */
  real32_T VectorConcatenate_i2[5];    /* '<S102>/Vector Concatenate' */
  real32_T VectorConcatenate_bb[5];    /* '<S103>/Vector Concatenate' */
  real32_T VectorConcatenate_lv[5];    /* '<S104>/Vector Concatenate' */
  real32_T VectorConcatenate_oik[5];   /* '<S105>/Vector Concatenate' */
  real32_T VectorConcatenate_d[5];     /* '<S106>/Vector Concatenate' */
  real32_T VectorConcatenate_cl[4];    /* '<S29>/Vector Concatenate' */
  real32_T VectorConcatenate_m4[4];    /* '<S30>/Vector Concatenate' */
  real32_T VectorConcatenate_c4[4];    /* '<S31>/Vector Concatenate' */
  real32_T VectorConcatenate_mp[4];    /* '<S32>/Vector Concatenate' */
  real32_T VectorConcatenate_a5[4];    /* '<S33>/Vector Concatenate' */
  real32_T VectorConcatenate_mo[4];    /* '<S34>/Vector Concatenate' */
  real32_T VectorConcatenate_ns[4];    /* '<S45>/Vector Concatenate' */
  real32_T VectorConcatenate_cb[4];    /* '<S46>/Vector Concatenate' */
  real32_T VectorConcatenate_bf[4];    /* '<S47>/Vector Concatenate' */
  real32_T VectorConcatenate_fr[4];    /* '<S48>/Vector Concatenate' */
  real32_T VectorConcatenate_dn[4];    /* '<S49>/Vector Concatenate' */
  real32_T VectorConcatenate_dt[4];    /* '<S50>/Vector Concatenate' */
  real32_T VectorConcatenate_lr[4];    /* '<S61>/Vector Concatenate' */
  real32_T VectorConcatenate_im[4];    /* '<S62>/Vector Concatenate' */
  real32_T VectorConcatenate_aa[4];    /* '<S63>/Vector Concatenate' */
  real32_T VectorConcatenate_gm[4];    /* '<S64>/Vector Concatenate' */
  real32_T VectorConcatenate_mhr[4];   /* '<S65>/Vector Concatenate' */
  real32_T VectorConcatenate_bq[4];    /* '<S66>/Vector Concatenate' */
  real32_T VectorConcatenate_kz[4];    /* '<S77>/Vector Concatenate' */
  real32_T VectorConcatenate_e1[4];    /* '<S78>/Vector Concatenate' */
  real32_T VectorConcatenate_h2[4];    /* '<S79>/Vector Concatenate' */
  real32_T VectorConcatenate_k3[4];    /* '<S80>/Vector Concatenate' */
  real32_T VectorConcatenate_aau[4];   /* '<S81>/Vector Concatenate' */
  real32_T VectorConcatenate_nc[4];    /* '<S82>/Vector Concatenate' */
  real32_T VectorConcatenate_fk[4];    /* '<S93>/Vector Concatenate' */
  real32_T VectorConcatenate_kw[4];    /* '<S94>/Vector Concatenate' */
  real32_T VectorConcatenate_fks[4];   /* '<S95>/Vector Concatenate' */
  real32_T VectorConcatenate_en[4];    /* '<S96>/Vector Concatenate' */
  real32_T VectorConcatenate_ey[4];    /* '<S97>/Vector Concatenate' */
  real32_T VectorConcatenate_k1[4];    /* '<S98>/Vector Concatenate' */
  real32_T VectorConcatenate_eyb[5];   /* '<S15>/Vector Concatenate' */
  real32_T VectorConcatenate_ep[5];    /* '<S16>/Vector Concatenate' */
  real32_T VectorConcatenate_dtt[5];   /* '<S19>/Vector Concatenate' */
  real32_T VectorConcatenate_l4[5];    /* '<S20>/Vector Concatenate' */
  real32_T VectorConcatenate_k1p[5];   /* '<S21>/Vector Concatenate' */
  real32_T VectorConcatenate_il[5];    /* '<S22>/Vector Concatenate' */
  real32_T VectorConcatenate_jq[5];    /* '<S23>/Vector Concatenate' */
  real32_T VectorConcatenate_ha[5];    /* '<S24>/Vector Concatenate' */
  real32_T VectorConcatenate_nb[5];    /* '<S25>/Vector Concatenate' */
  real32_T VectorConcatenate_o0[5];    /* '<S26>/Vector Concatenate' */
  real32_T VectorConcatenate_ny[5];    /* '<S17>/Vector Concatenate' */
  real32_T VectorConcatenate_nyx[5];   /* '<S18>/Vector Concatenate' */
  uint8_T LM_TOS_ALGORISM_o1;          /* '<Root>/LM_TOS_ALGORISM' */
  uint8_T LM_TOS_ALGORISM_o6;          /* '<Root>/LM_TOS_ALGORISM' */
} B_LM_TOS_c_T;

#endif                                 /*LM_TOS_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_LM_TOS_T_ {
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S7>/Constant18'
                                        */
  real_T Constant19_Value;             /* Expression: 1
                                        * Referenced by: '<S7>/Constant19'
                                        */
  real_T Constant28_Value;             /* Expression: 2
                                        * Referenced by: '<S7>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 3
                                        * Referenced by: '<S7>/Constant29'
                                        */
  real_T Constant30_Value;             /* Expression: 4
                                        * Referenced by: '<S7>/Constant30'
                                        */
  real_T Constant31_Value;             /* Expression: 5
                                        * Referenced by: '<S7>/Constant31'
                                        */
  real_T Constant32_Value;             /* Expression: 6
                                        * Referenced by: '<S7>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 7
                                        * Referenced by: '<S7>/Constant33'
                                        */
  real_T Constant34_Value;             /* Expression: 8
                                        * Referenced by: '<S7>/Constant34'
                                        */
  real_T Constant35_Value;             /* Expression: 9
                                        * Referenced by: '<S7>/Constant35'
                                        */
  real_T Constant20_Value;             /* Expression: 10
                                        * Referenced by: '<S7>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 11
                                        * Referenced by: '<S7>/Constant21'
                                        */
  real_T Constant24_Value;             /* Expression: 12
                                        * Referenced by: '<S7>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 13
                                        * Referenced by: '<S7>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 14
                                        * Referenced by: '<S7>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: 15
                                        * Referenced by: '<S7>/Constant27'
                                        */
  real_T Constant22_Value;             /* Expression: 16
                                        * Referenced by: '<S7>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 17
                                        * Referenced by: '<S7>/Constant23'
                                        */
  real_T Constant_Value;               /* Expression: 18
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 19
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 20
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 21
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 22
                                        * Referenced by: '<S7>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 23
                                        * Referenced by: '<S7>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 24
                                        * Referenced by: '<S7>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 25
                                        * Referenced by: '<S7>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 26
                                        * Referenced by: '<S7>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 27
                                        * Referenced by: '<S7>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 28
                                        * Referenced by: '<S7>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 29
                                        * Referenced by: '<S7>/Constant11'
                                        */
  real_T Constant14_Value;             /* Expression: 30
                                        * Referenced by: '<S7>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 31
                                        * Referenced by: '<S7>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 32
                                        * Referenced by: '<S7>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 33
                                        * Referenced by: '<S7>/Constant17'
                                        */
  real_T Constant12_Value;             /* Expression: 34
                                        * Referenced by: '<S7>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 35
                                        * Referenced by: '<S7>/Constant13'
                                        */
  real_T Constant38_Value;             /* Expression: 36
                                        * Referenced by: '<S7>/Constant38'
                                        */
  real_T Constant39_Value;             /* Expression: 37
                                        * Referenced by: '<S7>/Constant39'
                                        */
  real_T Constant36_Value;             /* Expression: 38
                                        * Referenced by: '<S7>/Constant36'
                                        */
  real_T Constant37_Value;             /* Expression: 39
                                        * Referenced by: '<S7>/Constant37'
                                        */
};

#endif                                 /*LM_TOS_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_LM_TOS_T {
  const char_T **errorStatus;
};

#endif                                 /*LM_TOS_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_LM_TOS_T rtm;
} MdlrefDW_LM_TOS_T;

#endif                                 /*LM_TOS_MDLREF_HIDE_CHILD_*/

extern void LM_TOS_Start(void);
extern void LM_TOS(const FUS_OBJ_OUTPUT_ST *rtu_FUS_OBJ_OUTPUT_ST, const
                   VSI_VEHSTATE_ST *rtu_VEH_STATE_ST, const FUS_LANE_OUTPUT_ST
                   *rtu_FUS_LANE_OUTPUT_ST, const FUS_ROAD_EDGE_OUTPUT_ST
                   *rtu_FUS_ROADEDGE_OUTPUT_ST1, const ATS_PO_ST
                   *rtu_ACC_PO_OUTPUT_ST, LANEMODEL_OUTPUT_ST
                   *rty_LANE_MODEL_OUTPUT_ST, HWA_TARGETOBJECT_OUTPUT_ST
                   *rty_HWA_TAR_OBJ_OUTPUT_ST, HMI_OUTPUT_ST
                   *rty_hmi_display_info_st, NARROW_LANE_SUPPORT_OUTPUT_ST
                   *rty_nls_info_st, uint16_T *rty_rolling_count, uint8_T
                   *rty_truckEvasionFlag);

/* Model reference registration function */
extern void LM_TOS_initialize(const char_T **rt_errorStatus);

#ifndef LM_TOS_MDLREF_HIDE_CHILD_

extern MdlrefDW_LM_TOS_T LM_TOS_MdlrefDW;

#endif                                 /*LM_TOS_MDLREF_HIDE_CHILD_*/

#ifndef LM_TOS_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_LM_TOS_c_T LM_TOS_B;

#endif                                 /*LM_TOS_MDLREF_HIDE_CHILD_*/

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
 * '<S1>'   : 'LM_TOS/RTI Data'
 * '<S2>'   : 'LM_TOS/adapter1'
 * '<S3>'   : 'LM_TOS/adapter2'
 * '<S4>'   : 'LM_TOS/RTI Data/RTI Data Store'
 * '<S5>'   : 'LM_TOS/RTI Data/RTI Data Store/RTI Data Store'
 * '<S6>'   : 'LM_TOS/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S7>'   : 'LM_TOS/adapter1/Subsystem'
 * '<S8>'   : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP'
 * '<S9>'   : 'LM_TOS/adapter2/Lane_0'
 * '<S10>'  : 'LM_TOS/adapter2/Lane_1'
 * '<S11>'  : 'LM_TOS/adapter2/Lane_2'
 * '<S12>'  : 'LM_TOS/adapter2/Lane_3'
 * '<S13>'  : 'LM_TOS/adapter2/Lane_4'
 * '<S14>'  : 'LM_TOS/adapter2/hmi_output_adapter'
 * '<S15>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem0'
 * '<S16>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem1'
 * '<S17>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem10'
 * '<S18>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem11'
 * '<S19>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem2'
 * '<S20>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem3'
 * '<S21>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem4'
 * '<S22>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem5'
 * '<S23>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem6'
 * '<S24>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem7'
 * '<S25>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem8'
 * '<S26>'  : 'LM_TOS/adapter2/HWA_TAR_OBJ_ADP/Subsystem9'
 * '<S27>'  : 'LM_TOS/adapter2/Lane_0/Subsystem'
 * '<S28>'  : 'LM_TOS/adapter2/Lane_0/Subsystem1'
 * '<S29>'  : 'LM_TOS/adapter2/Lane_0/Subsystem10'
 * '<S30>'  : 'LM_TOS/adapter2/Lane_0/Subsystem11'
 * '<S31>'  : 'LM_TOS/adapter2/Lane_0/Subsystem12'
 * '<S32>'  : 'LM_TOS/adapter2/Lane_0/Subsystem13'
 * '<S33>'  : 'LM_TOS/adapter2/Lane_0/Subsystem14'
 * '<S34>'  : 'LM_TOS/adapter2/Lane_0/Subsystem15'
 * '<S35>'  : 'LM_TOS/adapter2/Lane_0/Subsystem2'
 * '<S36>'  : 'LM_TOS/adapter2/Lane_0/Subsystem3'
 * '<S37>'  : 'LM_TOS/adapter2/Lane_0/Subsystem4'
 * '<S38>'  : 'LM_TOS/adapter2/Lane_0/Subsystem5'
 * '<S39>'  : 'LM_TOS/adapter2/Lane_0/Subsystem6'
 * '<S40>'  : 'LM_TOS/adapter2/Lane_0/Subsystem7'
 * '<S41>'  : 'LM_TOS/adapter2/Lane_0/Subsystem8'
 * '<S42>'  : 'LM_TOS/adapter2/Lane_0/Subsystem9'
 * '<S43>'  : 'LM_TOS/adapter2/Lane_1/Subsystem'
 * '<S44>'  : 'LM_TOS/adapter2/Lane_1/Subsystem1'
 * '<S45>'  : 'LM_TOS/adapter2/Lane_1/Subsystem10'
 * '<S46>'  : 'LM_TOS/adapter2/Lane_1/Subsystem11'
 * '<S47>'  : 'LM_TOS/adapter2/Lane_1/Subsystem12'
 * '<S48>'  : 'LM_TOS/adapter2/Lane_1/Subsystem13'
 * '<S49>'  : 'LM_TOS/adapter2/Lane_1/Subsystem14'
 * '<S50>'  : 'LM_TOS/adapter2/Lane_1/Subsystem15'
 * '<S51>'  : 'LM_TOS/adapter2/Lane_1/Subsystem2'
 * '<S52>'  : 'LM_TOS/adapter2/Lane_1/Subsystem3'
 * '<S53>'  : 'LM_TOS/adapter2/Lane_1/Subsystem4'
 * '<S54>'  : 'LM_TOS/adapter2/Lane_1/Subsystem5'
 * '<S55>'  : 'LM_TOS/adapter2/Lane_1/Subsystem6'
 * '<S56>'  : 'LM_TOS/adapter2/Lane_1/Subsystem7'
 * '<S57>'  : 'LM_TOS/adapter2/Lane_1/Subsystem8'
 * '<S58>'  : 'LM_TOS/adapter2/Lane_1/Subsystem9'
 * '<S59>'  : 'LM_TOS/adapter2/Lane_2/Subsystem'
 * '<S60>'  : 'LM_TOS/adapter2/Lane_2/Subsystem1'
 * '<S61>'  : 'LM_TOS/adapter2/Lane_2/Subsystem10'
 * '<S62>'  : 'LM_TOS/adapter2/Lane_2/Subsystem11'
 * '<S63>'  : 'LM_TOS/adapter2/Lane_2/Subsystem12'
 * '<S64>'  : 'LM_TOS/adapter2/Lane_2/Subsystem13'
 * '<S65>'  : 'LM_TOS/adapter2/Lane_2/Subsystem14'
 * '<S66>'  : 'LM_TOS/adapter2/Lane_2/Subsystem15'
 * '<S67>'  : 'LM_TOS/adapter2/Lane_2/Subsystem2'
 * '<S68>'  : 'LM_TOS/adapter2/Lane_2/Subsystem3'
 * '<S69>'  : 'LM_TOS/adapter2/Lane_2/Subsystem4'
 * '<S70>'  : 'LM_TOS/adapter2/Lane_2/Subsystem5'
 * '<S71>'  : 'LM_TOS/adapter2/Lane_2/Subsystem6'
 * '<S72>'  : 'LM_TOS/adapter2/Lane_2/Subsystem7'
 * '<S73>'  : 'LM_TOS/adapter2/Lane_2/Subsystem8'
 * '<S74>'  : 'LM_TOS/adapter2/Lane_2/Subsystem9'
 * '<S75>'  : 'LM_TOS/adapter2/Lane_3/Subsystem'
 * '<S76>'  : 'LM_TOS/adapter2/Lane_3/Subsystem1'
 * '<S77>'  : 'LM_TOS/adapter2/Lane_3/Subsystem10'
 * '<S78>'  : 'LM_TOS/adapter2/Lane_3/Subsystem11'
 * '<S79>'  : 'LM_TOS/adapter2/Lane_3/Subsystem12'
 * '<S80>'  : 'LM_TOS/adapter2/Lane_3/Subsystem13'
 * '<S81>'  : 'LM_TOS/adapter2/Lane_3/Subsystem14'
 * '<S82>'  : 'LM_TOS/adapter2/Lane_3/Subsystem15'
 * '<S83>'  : 'LM_TOS/adapter2/Lane_3/Subsystem2'
 * '<S84>'  : 'LM_TOS/adapter2/Lane_3/Subsystem3'
 * '<S85>'  : 'LM_TOS/adapter2/Lane_3/Subsystem4'
 * '<S86>'  : 'LM_TOS/adapter2/Lane_3/Subsystem5'
 * '<S87>'  : 'LM_TOS/adapter2/Lane_3/Subsystem6'
 * '<S88>'  : 'LM_TOS/adapter2/Lane_3/Subsystem7'
 * '<S89>'  : 'LM_TOS/adapter2/Lane_3/Subsystem8'
 * '<S90>'  : 'LM_TOS/adapter2/Lane_3/Subsystem9'
 * '<S91>'  : 'LM_TOS/adapter2/Lane_4/Subsystem'
 * '<S92>'  : 'LM_TOS/adapter2/Lane_4/Subsystem1'
 * '<S93>'  : 'LM_TOS/adapter2/Lane_4/Subsystem10'
 * '<S94>'  : 'LM_TOS/adapter2/Lane_4/Subsystem11'
 * '<S95>'  : 'LM_TOS/adapter2/Lane_4/Subsystem12'
 * '<S96>'  : 'LM_TOS/adapter2/Lane_4/Subsystem13'
 * '<S97>'  : 'LM_TOS/adapter2/Lane_4/Subsystem14'
 * '<S98>'  : 'LM_TOS/adapter2/Lane_4/Subsystem15'
 * '<S99>'  : 'LM_TOS/adapter2/Lane_4/Subsystem2'
 * '<S100>' : 'LM_TOS/adapter2/Lane_4/Subsystem3'
 * '<S101>' : 'LM_TOS/adapter2/Lane_4/Subsystem4'
 * '<S102>' : 'LM_TOS/adapter2/Lane_4/Subsystem5'
 * '<S103>' : 'LM_TOS/adapter2/Lane_4/Subsystem6'
 * '<S104>' : 'LM_TOS/adapter2/Lane_4/Subsystem7'
 * '<S105>' : 'LM_TOS/adapter2/Lane_4/Subsystem8'
 * '<S106>' : 'LM_TOS/adapter2/Lane_4/Subsystem9'
 */
#endif                                 /* RTW_HEADER_LM_TOS_h_ */
