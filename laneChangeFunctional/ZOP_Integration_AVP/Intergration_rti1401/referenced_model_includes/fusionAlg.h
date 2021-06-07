/*
 * Code generation for system model 'fusionAlg'
 * For more details, see corresponding source file fusionAlg.c
 *
 */

#ifndef RTW_HEADER_fusionAlg_h_
#define RTW_HEADER_fusionAlg_h_
#include <math.h>
#include <string.h>
#ifndef fusionAlg_COMMON_INCLUDES_
# define fusionAlg_COMMON_INCLUDES_
#include <rti_assert.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* fusionAlg_COMMON_INCLUDES_ */

#include "fusionAlg_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'fusionAlg' */
#ifndef fusionAlg_MDLREF_HIDE_CHILD_

typedef struct {
  FUS_OBJALG_ST FusionAlg;             /* '<S4>/FusionAlg' */
  FUS_RADAR_DATA_ST BusCreator;        /* '<S6>/Bus Creator' */
  FUS_RADOBJ_LIST_ST radarObj;         /* '<S6>/Bus Creator2' */
  FUS_OBJ_DATA_ST BusCreator3;         /* '<S50>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_m;       /* '<S51>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_c;       /* '<S62>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_a;       /* '<S73>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_n;       /* '<S84>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_g;       /* '<S85>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_l;       /* '<S86>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_k;       /* '<S87>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_o;       /* '<S88>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_lh;      /* '<S89>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_p;       /* '<S52>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_mf;      /* '<S53>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_b;       /* '<S54>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_e;       /* '<S55>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_k5;      /* '<S58>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_f;       /* '<S59>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_o1;      /* '<S60>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_d;       /* '<S61>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_p3;      /* '<S63>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_kv;      /* '<S64>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_pa;      /* '<S65>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_pt;      /* '<S66>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_ds;      /* '<S56>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_h;       /* '<S57>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_i;       /* '<S69>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_j;       /* '<S70>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_pr;      /* '<S71>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_mp;      /* '<S72>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_fm;      /* '<S74>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_fn;      /* '<S75>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_n4;      /* '<S67>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_og;      /* '<S68>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_dt;      /* '<S76>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_aa;      /* '<S77>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_n4q;     /* '<S78>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_l5;      /* '<S79>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_ct;      /* '<S83>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_fv;      /* '<S82>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_kt;      /* '<S81>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_mz;      /* '<S80>/Bus Creator3' */
  FUS_RADAR_STATE_ST BusCreator1_fl;   /* '<S36>/Bus Creator1' */
  FUS_VEHICLE_DATA_ST BusCreator_f;    /* '<S5>/Bus Creator' */
  FUS_UINT32_RESERVED_ST reserved;     /* '<S6>/Bus Creator1' */
  real32_T YawRate;                    /* '<S5>/Gain1' */
  real32_T Speed;                      /* '<S5>/Gain' */
} B_fusionAlg_c_T;

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/

#ifndef fusionAlg_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_fusionAlg_T_ {
  real_T timestamp_Value;              /* Expression: 1129
                                        * Referenced by: '<S6>/timestamp'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S5>/Constant'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S5>/Gain'
                                        */
  uint32_T frameNum_Value;             /* Computed Parameter: frameNum_Value
                                        * Referenced by: '<S6>/frameNum'
                                        */
  uint32_T count_Value;                /* Computed Parameter: count_Value
                                        * Referenced by: '<S6>/count'
                                        */
  uint32_T errType_Value;              /* Computed Parameter: errType_Value
                                        * Referenced by: '<S6>/errType'
                                        */
  uint32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S6>/Constant'
                                        */
  uint32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S6>/Constant1'
                                        */
  uint8_T Constant_Value_o;            /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S8>/Constant'
                                        */
  uint8_T Constant1_Value_m;           /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S8>/Constant1'
                                        */
  uint8_T Constant_Value_n;            /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S9>/Constant'
                                        */
  uint8_T Constant1_Value_i;           /* Computed Parameter: Constant1_Value_i
                                        * Referenced by: '<S9>/Constant1'
                                        */
  uint8_T Constant_Value_g;            /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S20>/Constant'
                                        */
  uint8_T Constant1_Value_f;           /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S20>/Constant1'
                                        */
  uint8_T Constant_Value_m;            /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S31>/Constant'
                                        */
  uint8_T Constant1_Value_fw;          /* Computed Parameter: Constant1_Value_fw
                                        * Referenced by: '<S31>/Constant1'
                                        */
  uint8_T Constant_Value_a;            /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S35>/Constant'
                                        */
  uint8_T Constant1_Value_d;           /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S35>/Constant1'
                                        */
  uint8_T Constant_Value_c;            /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S44>/Constant'
                                        */
  uint8_T Constant1_Value_ir;          /* Computed Parameter: Constant1_Value_ir
                                        * Referenced by: '<S44>/Constant1'
                                        */
  uint8_T Constant_Value_ew;           /* Computed Parameter: Constant_Value_ew
                                        * Referenced by: '<S45>/Constant'
                                        */
  uint8_T Constant1_Value_h;           /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S45>/Constant1'
                                        */
  uint8_T Constant_Value_f;            /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S46>/Constant'
                                        */
  uint8_T Constant1_Value_j;           /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S46>/Constant1'
                                        */
  uint8_T Constant_Value_n5;           /* Computed Parameter: Constant_Value_n5
                                        * Referenced by: '<S47>/Constant'
                                        */
  uint8_T Constant1_Value_a;           /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S47>/Constant1'
                                        */
  uint8_T Constant_Value_i;            /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S48>/Constant'
                                        */
  uint8_T Constant1_Value_b;           /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S48>/Constant1'
                                        */
  uint8_T Constant_Value_eh;           /* Computed Parameter: Constant_Value_eh
                                        * Referenced by: '<S10>/Constant'
                                        */
  uint8_T Constant1_Value_k;           /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S10>/Constant1'
                                        */
  uint8_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S11>/Constant'
                                        */
  uint8_T Constant1_Value_o;           /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S11>/Constant1'
                                        */
  uint8_T Constant_Value_no;           /* Computed Parameter: Constant_Value_no
                                        * Referenced by: '<S12>/Constant'
                                        */
  uint8_T Constant1_Value_p;           /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S12>/Constant1'
                                        */
  uint8_T Constant_Value_ek;           /* Computed Parameter: Constant_Value_ek
                                        * Referenced by: '<S13>/Constant'
                                        */
  uint8_T Constant1_Value_bb;          /* Computed Parameter: Constant1_Value_bb
                                        * Referenced by: '<S13>/Constant1'
                                        */
  uint8_T Constant_Value_p;            /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S16>/Constant'
                                        */
  uint8_T Constant1_Value_jd;          /* Computed Parameter: Constant1_Value_jd
                                        * Referenced by: '<S16>/Constant1'
                                        */
  uint8_T Constant_Value_pl;           /* Computed Parameter: Constant_Value_pl
                                        * Referenced by: '<S17>/Constant'
                                        */
  uint8_T Constant1_Value_l;           /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S17>/Constant1'
                                        */
  uint8_T Constant_Value_fw;           /* Computed Parameter: Constant_Value_fw
                                        * Referenced by: '<S18>/Constant'
                                        */
  uint8_T Constant1_Value_an;          /* Computed Parameter: Constant1_Value_an
                                        * Referenced by: '<S18>/Constant1'
                                        */
  uint8_T Constant_Value_md;           /* Computed Parameter: Constant_Value_md
                                        * Referenced by: '<S19>/Constant'
                                        */
  uint8_T Constant1_Value_ot;          /* Computed Parameter: Constant1_Value_ot
                                        * Referenced by: '<S19>/Constant1'
                                        */
  uint8_T Constant_Value_il;           /* Computed Parameter: Constant_Value_il
                                        * Referenced by: '<S21>/Constant'
                                        */
  uint8_T Constant1_Value_hq;          /* Computed Parameter: Constant1_Value_hq
                                        * Referenced by: '<S21>/Constant1'
                                        */
  uint8_T Constant_Value_gr;           /* Computed Parameter: Constant_Value_gr
                                        * Referenced by: '<S22>/Constant'
                                        */
  uint8_T Constant1_Value_ji;          /* Computed Parameter: Constant1_Value_ji
                                        * Referenced by: '<S22>/Constant1'
                                        */
  uint8_T Constant_Value_py;           /* Computed Parameter: Constant_Value_py
                                        * Referenced by: '<S23>/Constant'
                                        */
  uint8_T Constant1_Value_lo;          /* Computed Parameter: Constant1_Value_lo
                                        * Referenced by: '<S23>/Constant1'
                                        */
  uint8_T Constant_Value_g0;           /* Computed Parameter: Constant_Value_g0
                                        * Referenced by: '<S24>/Constant'
                                        */
  uint8_T Constant1_Value_fv;          /* Computed Parameter: Constant1_Value_fv
                                        * Referenced by: '<S24>/Constant1'
                                        */
  uint8_T Constant_Value_od;           /* Computed Parameter: Constant_Value_od
                                        * Referenced by: '<S14>/Constant'
                                        */
  uint8_T Constant1_Value_px;          /* Computed Parameter: Constant1_Value_px
                                        * Referenced by: '<S14>/Constant1'
                                        */
  uint8_T Constant_Value_k;            /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S15>/Constant'
                                        */
  uint8_T Constant1_Value_bf;          /* Computed Parameter: Constant1_Value_bf
                                        * Referenced by: '<S15>/Constant1'
                                        */
  uint8_T Constant_Value_j;            /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S25>/Constant'
                                        */
  uint8_T Constant1_Value_fn;          /* Computed Parameter: Constant1_Value_fn
                                        * Referenced by: '<S25>/Constant1'
                                        */
  uint8_T Constant_Value_az;           /* Computed Parameter: Constant_Value_az
                                        * Referenced by: '<S26>/Constant'
                                        */
  uint8_T Constant1_Value_o3;          /* Computed Parameter: Constant1_Value_o3
                                        * Referenced by: '<S26>/Constant1'
                                        */
  uint8_T Constant_Value_cg;           /* Computed Parameter: Constant_Value_cg
                                        * Referenced by: '<S34>/Constant'
                                        */
  uint8_T Constant1_Value_jn;          /* Computed Parameter: Constant1_Value_jn
                                        * Referenced by: '<S34>/Constant1'
                                        */
  uint8_T Constant_Value_n4;           /* Computed Parameter: Constant_Value_n4
                                        * Referenced by: '<S37>/Constant'
                                        */
  uint8_T Constant1_Value_c;           /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S37>/Constant1'
                                        */
  uint8_T Constant_Value_h;            /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S38>/Constant'
                                        */
  uint8_T Constant1_Value_pl;          /* Computed Parameter: Constant1_Value_pl
                                        * Referenced by: '<S38>/Constant1'
                                        */
  uint8_T Constant_Value_fp;           /* Computed Parameter: Constant_Value_fp
                                        * Referenced by: '<S39>/Constant'
                                        */
  uint8_T Constant1_Value_ds;          /* Computed Parameter: Constant1_Value_ds
                                        * Referenced by: '<S39>/Constant1'
                                        */
  uint8_T Constant_Value_i1;           /* Computed Parameter: Constant_Value_i1
                                        * Referenced by: '<S40>/Constant'
                                        */
  uint8_T Constant1_Value_m5;          /* Computed Parameter: Constant1_Value_m5
                                        * Referenced by: '<S40>/Constant1'
                                        */
  uint8_T Constant_Value_jt;           /* Computed Parameter: Constant_Value_jt
                                        * Referenced by: '<S41>/Constant'
                                        */
  uint8_T Constant1_Value_n;           /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S41>/Constant1'
                                        */
  uint8_T Constant_Value_l;            /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S42>/Constant'
                                        */
  uint8_T Constant1_Value_oi;          /* Computed Parameter: Constant1_Value_oi
                                        * Referenced by: '<S42>/Constant1'
                                        */
  uint8_T Constant_Value_ab;           /* Computed Parameter: Constant_Value_ab
                                        * Referenced by: '<S43>/Constant'
                                        */
  uint8_T Constant1_Value_ow;          /* Computed Parameter: Constant1_Value_ow
                                        * Referenced by: '<S43>/Constant1'
                                        */
  uint8_T Constant_Value_b;            /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S27>/Constant'
                                        */
  uint8_T Constant1_Value_l4;          /* Computed Parameter: Constant1_Value_l4
                                        * Referenced by: '<S27>/Constant1'
                                        */
  uint8_T Constant_Value_du;           /* Computed Parameter: Constant_Value_du
                                        * Referenced by: '<S28>/Constant'
                                        */
  uint8_T Constant1_Value_bc;          /* Computed Parameter: Constant1_Value_bc
                                        * Referenced by: '<S28>/Constant1'
                                        */
  uint8_T Constant_Value_o1;           /* Computed Parameter: Constant_Value_o1
                                        * Referenced by: '<S29>/Constant'
                                        */
  uint8_T Constant1_Value_dj;          /* Computed Parameter: Constant1_Value_dj
                                        * Referenced by: '<S29>/Constant1'
                                        */
  uint8_T Constant_Value_mq;           /* Computed Parameter: Constant_Value_mq
                                        * Referenced by: '<S30>/Constant'
                                        */
  uint8_T Constant1_Value_ou;          /* Computed Parameter: Constant1_Value_ou
                                        * Referenced by: '<S30>/Constant1'
                                        */
  uint8_T Constant_Value_am;           /* Computed Parameter: Constant_Value_am
                                        * Referenced by: '<S32>/Constant'
                                        */
  uint8_T Constant1_Value_nd;          /* Computed Parameter: Constant1_Value_nd
                                        * Referenced by: '<S32>/Constant1'
                                        */
  uint8_T Constant_Value_lo;           /* Computed Parameter: Constant_Value_lo
                                        * Referenced by: '<S33>/Constant'
                                        */
  uint8_T Constant1_Value_oc;          /* Computed Parameter: Constant1_Value_oc
                                        * Referenced by: '<S33>/Constant1'
                                        */
  uint8_T Constant_Value_e1;           /* Computed Parameter: Constant_Value_e1
                                        * Referenced by: '<S36>/Constant'
                                        */
  uint8_T Constant1_Value_e;           /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S36>/Constant1'
                                        */
  uint8_T Constant_Value_po;           /* Computed Parameter: Constant_Value_po
                                        * Referenced by: '<S4>/Constant'
                                        */
};

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/

#ifndef fusionAlg_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_fusionAlg_T {
  const char_T **errorStatus;
};

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/

#ifndef fusionAlg_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_fusionAlg_T rtm;
} MdlrefDW_fusionAlg_T;

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/

extern void fusionAlg_Start(void);
extern void fusionAlg(const real32_T *rtu_Radar410_Info_st_x50_20_Obj, const
                      real32_T *rtu_Radar410_Info_st_x50_20_O_g, const real32_T *
                      rtu_Radar410_Info_st_x50_20_O_c, const real32_T
                      *rtu_Radar410_Info_st_x50_20_O_e, const real32_T
                      *rtu_Radar410_Info_st_x50_20_O_n, const real32_T
                      *rtu_Radar410_Info_st_x50_20_O_f, const real32_T
                      *rtu_Radar410_Info_st_x50_20_O_k, const real32_T
                      *rtu_Radar410_Info_st_x50_20_O_h, const real32_T
                      *rtu_Radar410_Info_st_x50_20__kw, const real32_T
                      *rtu_Radar410_Info_st_x50_20__ka, const real32_T
                      *rtu_Radar410_Info_st_x50_20_kaa, const real32_T
                      *rtu_Radar410_Info_st_x50_20__el, const real32_T
                      *rtu_Radar410_Info_st_x50_20__cj, const real32_T
                      *rtu_Radar410_Info_st_x50_20__ez, const real32_T
                      *rtu_Radar410_Info_st_x50_20_O_o, const real32_T
                      *rtu_Radar410_Info_st_x50_20_O_p, const real32_T
                      *rtu_Radar410_Info_st_x51_21_Obj, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_d, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_g, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_m, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_p, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_i, const real32_T
                      *rtu_Radar410_Info_st_x51_21__pr, const real32_T
                      *rtu_Radar410_Info_st_x51_21__pe, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_o, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_e, const real32_T
                      *rtu_Radar410_Info_st_x51_21__mc, const real32_T
                      *rtu_Radar410_Info_st_x51_21_O_j, const real32_T
                      *rtu_Radar410_Info_st_x51_21__po, const real32_T
                      *rtu_Radar410_Info_st_x51_21__m3, const real32_T
                      *rtu_Radar410_Info_st_x51_21__p2, const real32_T
                      *rtu_Radar410_Info_st_x51_21__i3, const real32_T
                      *rtu_Radar410_Info_st_x52_22_Obj, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_h, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_b, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_n, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_g, const real32_T
                      *rtu_Radar410_Info_st_x52_22__go, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_e, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_k, const real32_T
                      *rtu_Radar410_Info_st_x52_22__bn, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_c, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_l, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_p, const real32_T
                      *rtu_Radar410_Info_st_x52_22__py, const real32_T
                      *rtu_Radar410_Info_st_x52_22__en, const real32_T
                      *rtu_Radar410_Info_st_x52_22__px, const real32_T
                      *rtu_Radar410_Info_st_x52_22_O_m, const real32_T
                      *rtu_Radar410_Info_st_x53_23_Obj, const real32_T
                      *rtu_Radar410_Info_st_x53_23_O_f, const real32_T
                      *rtu_Radar410_Info_st_x53_23_O_d, const real32_T
                      *rtu_Radar410_Info_st_x53_23_O_m, const real32_T
                      *rtu_Radar410_Info_st_x53_23_O_h, const real32_T
                      *rtu_Radar410_Info_st_x53_23__hz, const real32_T
                      *rtu_Radar410_Info_st_x53_23__h2, const real32_T
                      *rtu_Radar410_Info_st_x53_23__hs, const real32_T
                      *rtu_Radar410_Info_st_x53_23_O_i, const real32_T
                      *rtu_Radar410_Info_st_x53_23__h5, const real32_T
                      *rtu_Radar410_Info_st_x53_23__h1, const real32_T
                      *rtu_Radar410_Info_st_x53_23__ig, const real32_T
                      *rtu_Radar410_Info_st_x53_23__dz, const real32_T
                      *rtu_Radar410_Info_st_x53_23_O_a, const real32_T
                      *rtu_Radar410_Info_st_x53_23__id, const real32_T
                      *rtu_Radar410_Info_st_x53_23_O_b, const real32_T
                      *rtu_Radar410_Info_st_x54_24_Obj, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_j, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_l, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_e, const real32_T
                      *rtu_Radar410_Info_st_x54_24__le, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_h, const real32_T
                      *rtu_Radar410_Info_st_x54_24__hc, const real32_T
                      *rtu_Radar410_Info_st_x54_24__hl, const real32_T
                      *rtu_Radar410_Info_st_x54_24__ef, const real32_T
                      *rtu_Radar410_Info_st_x54_24__h2, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_b, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_a, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_k, const real32_T
                      *rtu_Radar410_Info_st_x54_24_O_i, const real32_T
                      *rtu_Radar410_Info_st_x54_24__ba, const real32_T
                      *rtu_Radar410_Info_st_x54_24__ir, const real32_T
                      *rtu_Radar410_Info_st_x55_25_Obj, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_d, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_g, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_i, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_h, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_b, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_l, const real32_T
                      *rtu_Radar410_Info_st_x55_25__go, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_f, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_a, const real32_T
                      *rtu_Radar410_Info_st_x55_25__gz, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_c, const real32_T
                      *rtu_Radar410_Info_st_x55_25__gh, const real32_T
                      *rtu_Radar410_Info_st_x55_25_O_e, const real32_T
                      *rtu_Radar410_Info_st_x55_25__lr, const real32_T
                      *rtu_Radar410_Info_st_x55_25__l2, const real32_T
                      *rtu_Radar410_Info_st_x56_26_Obj, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_e, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_c, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_g, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_l, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_b, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_i, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_a, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_o, const real32_T
                      *rtu_Radar410_Info_st_x56_26__iq, const real32_T
                      *rtu_Radar410_Info_st_x56_26__ex, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_d, const real32_T
                      *rtu_Radar410_Info_st_x56_26__do, const real32_T
                      *rtu_Radar410_Info_st_x56_26__lj, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_k, const real32_T
                      *rtu_Radar410_Info_st_x56_26_O_n, const real32_T
                      *rtu_Radar410_Info_st_x57_27_Obj, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_g, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_m, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_l, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_a, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_i, const real32_T
                      *rtu_Radar410_Info_st_x57_27__iu, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_n, const real32_T
                      *rtu_Radar410_Info_st_x57_27__al, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_o, const real32_T
                      *rtu_Radar410_Info_st_x57_27__au, const real32_T
                      *rtu_Radar410_Info_st_x57_27__lc, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_e, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_d, const real32_T
                      *rtu_Radar410_Info_st_x57_27__ga, const real32_T
                      *rtu_Radar410_Info_st_x57_27_O_h, const real32_T
                      *rtu_Radar410_Info_st_x58_28_Obj, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_c, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_p, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_n, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_k, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_b, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_j, const real32_T
                      *rtu_Radar410_Info_st_x58_28__cg, const real32_T
                      *rtu_Radar410_Info_st_x58_28__kp, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_m, const real32_T
                      *rtu_Radar410_Info_st_x58_28__ba, const real32_T
                      *rtu_Radar410_Info_st_x58_28__kd, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_a, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_d, const real32_T
                      *rtu_Radar410_Info_st_x58_28_O_l, const real32_T
                      *rtu_Radar410_Info_st_x58_28__cb, const real32_T
                      *rtu_Radar410_Info_st_x59_29_Obj, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_o, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_m, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_g, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_b, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_a, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_n, const real32_T
                      *rtu_Radar410_Info_st_x59_29__a1, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_i, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_d, const real32_T
                      *rtu_Radar410_Info_st_x59_29__iz, const real32_T
                      *rtu_Radar410_Info_st_x59_29__nl, const real32_T
                      *rtu_Radar410_Info_st_x59_29__nw, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_j, const real32_T
                      *rtu_Radar410_Info_st_x59_29_O_k, const real32_T
                      *rtu_Radar410_Info_st_x59_29__ac, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_Obj, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_k, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_l, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_d, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_i, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A__dp, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_p, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_n, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_a, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_b, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A__nw, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A_O_j, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A__l5, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A__bg, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A__ai, const real32_T
                      *rtu_Radar410_Info_st_x5A_2A__jl, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_Obj, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_f, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_a, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B__aw, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_e, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_p, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_b, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_k, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_h, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B__e5, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_g, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_d, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B__a0, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B_O_i, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B__iz, const real32_T
                      *rtu_Radar410_Info_st_x5B_2B__f2, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_Obj, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_b, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_h, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_l, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C__la, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_k, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C__lo, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_g, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C__gm, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_f, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_o, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_i, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C__fk, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C__i3, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C_O_a, const real32_T
                      *rtu_Radar410_Info_st_x5C_2C__oq, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_Obj, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_e, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_p, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_o, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_h, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_n, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D__no, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_c, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D__hf, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D__on, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_j, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_l, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_g, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D__gg, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D_O_m, const real32_T
                      *rtu_Radar410_Info_st_x5D_2D__hb, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_Obj, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_l, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_g, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E__lx, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_h, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E__lc, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E__gu, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E__gn, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_m, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_i, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E__if, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E__l3, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E__ie, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_a, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_c, const real32_T
                      *rtu_Radar410_Info_st_x5E_2E_O_f, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_Obj, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_d, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_g, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_h, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_f, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_e, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_n, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F__fw, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_j, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F__ds, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F__hh, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_o, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F__hw, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_l, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F_O_c, const real32_T
                      *rtu_Radar410_Info_st_x5F_2F__oa, const real32_T
                      *rtu_Radar410_Info_st_x60_30_Obj, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_k, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_d, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_f, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_a, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_g, const real32_T
                      *rtu_Radar410_Info_st_x60_30__d4, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_h, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_l, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_j, const real32_T
                      *rtu_Radar410_Info_st_x60_30__jp, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_e, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_m, const real32_T
                      *rtu_Radar410_Info_st_x60_30__ga, const real32_T
                      *rtu_Radar410_Info_st_x60_30__j4, const real32_T
                      *rtu_Radar410_Info_st_x60_30_O_p, const real32_T
                      *rtu_Radar410_Info_st_x61_31_Obj, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_i, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_b, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_l, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_m, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_f, const real32_T
                      *rtu_Radar410_Info_st_x61_31__mk, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_n, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_k, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_a, const real32_T
                      *rtu_Radar410_Info_st_x61_31__bg, const real32_T
                      *rtu_Radar410_Info_st_x61_31__ir, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_d, const real32_T
                      *rtu_Radar410_Info_st_x61_31_O_j, const real32_T
                      *rtu_Radar410_Info_st_x61_31__mz, const real32_T
                      *rtu_Radar410_Info_st_x61_31__dz, const real32_T
                      *rtu_Radar410_Info_st_x62_32_Obj, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_p, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_j, const real32_T
                      *rtu_Radar410_Info_st_x62_32__ja, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_e, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_d, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_k, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_o, const real32_T
                      *rtu_Radar410_Info_st_x62_32__ku, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_a, const real32_T
                      *rtu_Radar410_Info_st_x62_32__jk, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_m, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_c, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_l, const real32_T
                      *rtu_Radar410_Info_st_x62_32__cz, const real32_T
                      *rtu_Radar410_Info_st_x62_32_O_i, const real32_T
                      *rtu_Radar410_Info_st_x63_33_Obj, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_b, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_k, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_m, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_i, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_e, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_p, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_d, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_j, const real32_T
                      *rtu_Radar410_Info_st_x63_33__pi, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_h, const real32_T
                      *rtu_Radar410_Info_st_x63_33__hk, const real32_T
                      *rtu_Radar410_Info_st_x63_33__k4, const real32_T
                      *rtu_Radar410_Info_st_x63_33__kw, const real32_T
                      *rtu_Radar410_Info_st_x63_33_O_n, const real32_T
                      *rtu_Radar410_Info_st_x63_33__nh, const real32_T
                      *rtu_Radar410_Info_st_x64_34_Obj, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_n, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_g, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_o, const real32_T
                      *rtu_Radar410_Info_st_x64_34__gh, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_p, const real32_T
                      *rtu_Radar410_Info_st_x64_34__gw, const real32_T
                      *rtu_Radar410_Info_st_x64_34__go, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_a, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_l, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_c, const real32_T
                      *rtu_Radar410_Info_st_x64_34__nz, const real32_T
                      *rtu_Radar410_Info_st_x64_34__av, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_b, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_e, const real32_T
                      *rtu_Radar410_Info_st_x64_34_O_d, const real32_T
                      *rtu_Radar410_Info_st_x65_35_Obj, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_k, const real32_T
                      *rtu_Radar410_Info_st_x65_35__ku, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_m, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_f, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_i, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_n, const real32_T
                      *rtu_Radar410_Info_st_x65_35__i3, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_b, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_h, const real32_T
                      *rtu_Radar410_Info_st_x65_35__if, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_d, const real32_T
                      *rtu_Radar410_Info_st_x65_35__dj, const real32_T
                      *rtu_Radar410_Info_st_x65_35_O_o, const real32_T
                      *rtu_Radar410_Info_st_x65_35__n5, const real32_T
                      *rtu_Radar410_Info_st_x65_35__fy, const real32_T
                      *rtu_Radar410_Info_st_x66_36_Obj, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_i, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_c, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_n, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_j, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_e, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_a, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_l, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_m, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_h, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_f, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_g, const real32_T
                      *rtu_Radar410_Info_st_x66_36_O_d, const real32_T
                      *rtu_Radar410_Info_st_x66_36__iz, const real32_T
                      *rtu_Radar410_Info_st_x66_36__f4, const real32_T
                      *rtu_Radar410_Info_st_x66_36__aj, const real32_T
                      *rtu_Radar410_Info_st_x67_37_Obj, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_g, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_o, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_p, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_a, const real32_T
                      *rtu_Radar410_Info_st_x67_37__gs, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_e, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_m, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_h, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_l, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_n, const real32_T
                      *rtu_Radar410_Info_st_x67_37__mq, const real32_T
                      *rtu_Radar410_Info_st_x67_37__er, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_j, const real32_T
                      *rtu_Radar410_Info_st_x67_37_O_c, const real32_T
                      *rtu_Radar410_Info_st_x67_37__ex, const real32_T
                      *rtu_Radar410_Info_st_x68_38_Obj, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_a, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_l, const real32_T
                      *rtu_Radar410_Info_st_x68_38__av, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_p, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_n, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_e, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_c, const real32_T
                      *rtu_Radar410_Info_st_x68_38__cz, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_j, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_o, const real32_T
                      *rtu_Radar410_Info_st_x68_38_O_k, const real32_T
                      *rtu_Radar410_Info_st_x68_38__po, const real32_T
                      *rtu_Radar410_Info_st_x68_38__ay, const real32_T
                      *rtu_Radar410_Info_st_x68_38__pq, const real32_T
                      *rtu_Radar410_Info_st_x68_38__or, const real32_T
                      *rtu_Radar410_Info_st_x69_39_Obj, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_j, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_c, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_d, const real32_T
                      *rtu_Radar410_Info_st_x69_39__dx, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_p, const real32_T
                      *rtu_Radar410_Info_st_x69_39__js, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_a, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_e, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_h, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_b, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_l, const real32_T
                      *rtu_Radar410_Info_st_x69_39__ji, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_k, const real32_T
                      *rtu_Radar410_Info_st_x69_39_O_o, const real32_T
                      *rtu_Radar410_Info_st_x69_39__og, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_Obj, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_j, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_o, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_h, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_e, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_a, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A__ad, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A__e4, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_i, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_k, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_b, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_d, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A__du, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_n, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A_O_l, const real32_T
                      *rtu_Radar410_Info_st_x6A_3A__i5, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_Obj, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_o, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_g, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_k, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_p, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_c, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_h, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B__cy, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B__hk, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B__cu, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_d, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B__g2, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_j, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B_O_e, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B__cf, const real32_T
                      *rtu_Radar410_Info_st_x6B_3B__j3, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_Obj, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_h, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_l, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_d, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_b, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C__bn, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_o, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_k, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C__oi, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_c, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_a, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C__bm, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C__ch, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C_O_m, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C__mz, const real32_T
                      *rtu_Radar410_Info_st_x6C_3C__ak, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_Obj, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_i, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_j, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_g, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_d, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_o, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D__oq, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_m, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D__d5, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_b, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D__jk, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_p, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D__jt, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D__iy, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D__j4, const real32_T
                      *rtu_Radar410_Info_st_x6D_3D_O_a, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_Obj, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_e, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_n, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_i, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_c, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_o, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_d, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E__nx, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_h, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E__h1, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_k, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_f, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_g, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_h1d, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E__o4, const real32_T
                      *rtu_Radar410_Info_st_x6E_3E_O_b, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_Obj, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_g, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_b, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_h, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_k, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F__gj, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_n, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F__n1, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F__gc, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_m, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_c, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_e, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F__gu, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_i, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_a, const real32_T
                      *rtu_Radar410_Info_st_x6F_3F_O_l, const real32_T
                      *rtu_Radar410_Info_st_x70_40_Obj, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_k, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_m, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_n, const real32_T
                      *rtu_Radar410_Info_st_x70_40__ms, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_i, const real32_T
                      *rtu_Radar410_Info_st_x70_40__ih, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_b, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_c, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_h, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_f, const real32_T
                      *rtu_Radar410_Info_st_x70_40__bd, const real32_T
                      *rtu_Radar410_Info_st_x70_40__fv, const real32_T
                      *rtu_Radar410_Info_st_x70_40__bp, const real32_T
                      *rtu_Radar410_Info_st_x70_40__f2, const real32_T
                      *rtu_Radar410_Info_st_x70_40_O_o, const real32_T
                      *rtu_Radar410_Info_st_x71_41_Obj, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_m, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_c, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_l, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_k, const real32_T
                      *rtu_Radar410_Info_st_x71_41__lp, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_f, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_h, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_g, const real32_T
                      *rtu_Radar410_Info_st_x71_41__ma, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_e, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_b, const real32_T
                      *rtu_Radar410_Info_st_x71_41__ha, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_j, const real32_T
                      *rtu_Radar410_Info_st_x71_41_O_p, const real32_T
                      *rtu_Radar410_Info_st_x71_41__ev, const real32_T
                      *rtu_Radar410_Info_st_x72_42_Obj, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_a, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_b, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_m, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_h, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_n, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_k, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_e, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_f, const real32_T
                      *rtu_Radar410_Info_st_x72_42_O_l, const real32_T
                      *rtu_Radar410_Info_st_x72_42__mh, const real32_T
                      *rtu_Radar410_Info_st_x72_42__ly, const real32_T
                      *rtu_Radar410_Info_st_x72_42__ag, const real32_T
                      *rtu_Radar410_Info_st_x72_42__mf, const real32_T
                      *rtu_Radar410_Info_st_x72_42__nk, const real32_T
                      *rtu_Radar410_Info_st_x72_42__fn, const real32_T
                      *rtu_Radar410_Info_st_x73_43_Obj, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_l, const real32_T
                      *rtu_Radar410_Info_st_x73_43__ll, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_f, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_b, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_g, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_d, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_p, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_e, const real32_T
                      *rtu_Radar410_Info_st_x73_43__dw, const real32_T
                      *rtu_Radar410_Info_st_x73_43__fs, const real32_T
                      *rtu_Radar410_Info_st_x73_43_O_o, const real32_T
                      *rtu_Radar410_Info_st_x73_43__em, const real32_T
                      *rtu_Radar410_Info_st_x73_43__lh, const real32_T
                      *rtu_Radar410_Info_st_x73_43__gf, const real32_T
                      *rtu_Radar410_Info_st_x73_43__f1, const real32_T
                      *rtu_Radar410_Info_st_x74_44_Obj, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_c, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_g, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_e, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_p, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_a, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_n, const real32_T
                      *rtu_Radar410_Info_st_x74_44__nd, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_m, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_h, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_j, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_b, const real32_T
                      *rtu_Radar410_Info_st_x74_44__my, const real32_T
                      *rtu_Radar410_Info_st_x74_44__g5, const real32_T
                      *rtu_Radar410_Info_st_x74_44__eq, const real32_T
                      *rtu_Radar410_Info_st_x74_44_O_k, const real32_T
                      *rtu_Radar410_Info_st_x75_45_Obj, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_b, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_g, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_m, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_n, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_k, const real32_T
                      *rtu_Radar410_Info_st_x75_45__kf, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_i, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_p, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_j, const real32_T
                      *rtu_Radar410_Info_st_x75_45_O_l, const real32_T
                      *rtu_Radar410_Info_st_x75_45__jl, const real32_T
                      *rtu_Radar410_Info_st_x75_45__l5, const real32_T
                      *rtu_Radar410_Info_st_x75_45__mo, const real32_T
                      *rtu_Radar410_Info_st_x75_45__gp, const real32_T
                      *rtu_Radar410_Info_st_x75_45__i4, const real32_T
                      *rtu_Radar410_Info_st_x76_46_Obj, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_l, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_g, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_n, const real32_T
                      *rtu_Radar410_Info_st_x76_46__l3, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_b, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_j, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_o, const real32_T
                      *rtu_Radar410_Info_st_x76_46__jw, const real32_T
                      *rtu_Radar410_Info_st_x76_46__bq, const real32_T
                      *rtu_Radar410_Info_st_x76_46__bl, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_c, const real32_T
                      *rtu_Radar410_Info_st_x76_46__cc, const real32_T
                      *rtu_Radar410_Info_st_x76_46__os, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_k, const real32_T
                      *rtu_Radar410_Info_st_x76_46_O_m, const real32_T
                      *rtu_Radar410_Info_st_x77_47_Obj, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_g, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_k, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_e, const real32_T
                      *rtu_Radar410_Info_st_x77_47__go, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_h, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_l, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_j, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_f, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_a, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_i, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_p, const real32_T
                      *rtu_Radar410_Info_st_x77_47__fx, const real32_T
                      *rtu_Radar410_Info_st_x77_47__ey, const real32_T
                      *rtu_Radar410_Info_st_x77_47_O_m, const real32_T
                      *rtu_Radar410_Info_st_x77_47__me, const real32_T
                      *rtu_Radar410_Info_st_x80_Status, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_p, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_d, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_l, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_h, const real32_T
                      *rtu_Radar410_Info_st_x80_Sta_lz, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_n, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_i, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_o, const real32_T
                      *rtu_Radar410_Info_st_x80_Sta_iy, const real32_T
                      *rtu_Radar410_Info_st_x80_Stat_b, const real32_T
                      *rtu_COM_VehBus_st_x1E9_VehDynYa, const real32_T
                      *rtu_COM_VehBus_st_x23C_VehSpdAv, FUS_OBJ_OUTPUT_ST
                      *rty_FUS_ObjOutput_st);
extern void fusionAlg_Term(void);

/* Model reference registration function */
extern void fusionAlg_initialize(const char_T **rt_errorStatus);

#ifndef fusionAlg_MDLREF_HIDE_CHILD_

extern MdlrefDW_fusionAlg_T fusionAlg_MdlrefDW;

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/

#ifndef fusionAlg_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_fusionAlg_c_T fusionAlg_B;

#endif                                 /*fusionAlg_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'fusionAlg'
 * '<S1>'   : 'fusionAlg/FUSION '
 * '<S2>'   : 'fusionAlg/RTI Data'
 * '<S3>'   : 'fusionAlg/FUSION /FUS_DataAdapter'
 * '<S4>'   : 'fusionAlg/FUSION /FusionAlg'
 * '<S5>'   : 'fusionAlg/FUSION /FUS_DataAdapter/EgoMotionAdapter'
 * '<S6>'   : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter'
 * '<S7>'   : 'fusionAlg/FUSION /FUS_DataAdapter/VisionAdapter'
 * '<S8>'   : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem'
 * '<S9>'   : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem1'
 * '<S10>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem10'
 * '<S11>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem11'
 * '<S12>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem12'
 * '<S13>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem13'
 * '<S14>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem14'
 * '<S15>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem15'
 * '<S16>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem16'
 * '<S17>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem17'
 * '<S18>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem18'
 * '<S19>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem19'
 * '<S20>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem2'
 * '<S21>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem20'
 * '<S22>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem21'
 * '<S23>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem22'
 * '<S24>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem23'
 * '<S25>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem24'
 * '<S26>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem25'
 * '<S27>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem26'
 * '<S28>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem27'
 * '<S29>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem28'
 * '<S30>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem29'
 * '<S31>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem3'
 * '<S32>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem32'
 * '<S33>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem33'
 * '<S34>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem36'
 * '<S35>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem4'
 * '<S36>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem40'
 * '<S37>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem42'
 * '<S38>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem43'
 * '<S39>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem44'
 * '<S40>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem45'
 * '<S41>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem46'
 * '<S42>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem47'
 * '<S43>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem48'
 * '<S44>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem5'
 * '<S45>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem6'
 * '<S46>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem7'
 * '<S47>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem8'
 * '<S48>'  : 'fusionAlg/FUSION /FUS_DataAdapter/RadarAdapter/Subsystem9'
 * '<S49>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray'
 * '<S50>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem'
 * '<S51>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem1'
 * '<S52>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem10'
 * '<S53>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem11'
 * '<S54>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem12'
 * '<S55>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem13'
 * '<S56>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem14'
 * '<S57>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem15'
 * '<S58>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem16'
 * '<S59>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem17'
 * '<S60>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem18'
 * '<S61>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem19'
 * '<S62>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem2'
 * '<S63>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem20'
 * '<S64>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem21'
 * '<S65>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem22'
 * '<S66>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem23'
 * '<S67>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem24'
 * '<S68>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem25'
 * '<S69>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem26'
 * '<S70>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem27'
 * '<S71>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem28'
 * '<S72>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem29'
 * '<S73>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem3'
 * '<S74>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem30'
 * '<S75>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem31'
 * '<S76>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem32'
 * '<S77>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem33'
 * '<S78>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem34'
 * '<S79>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem35'
 * '<S80>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem36'
 * '<S81>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem37'
 * '<S82>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem38'
 * '<S83>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem39'
 * '<S84>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem4'
 * '<S85>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem5'
 * '<S86>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem6'
 * '<S87>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem7'
 * '<S88>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem8'
 * '<S89>'  : 'fusionAlg/FUSION /FusionAlg/BusToBusArray/Subsystem9'
 * '<S90>'  : 'fusionAlg/RTI Data/RTI Data Store'
 * '<S91>'  : 'fusionAlg/RTI Data/RTI Data Store/RTI Data Store'
 * '<S92>'  : 'fusionAlg/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_fusionAlg_h_ */
