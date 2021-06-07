/*
 * fusionAlg.h
 *
 * Code generation for model "fusionAlg".
 *
 * Model version              : 1.124
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Nov 30 14:31:24 2020
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_fusionAlg_h_
#define RTW_HEADER_fusionAlg_h_
#include <math.h>
#include <string.h>
#ifndef fusionAlg_COMMON_INCLUDES_
# define fusionAlg_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
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
  FUS_OBJALG_ST FusionnAlg;            /* '<S4>/FusionnAlg ' */
  FUS_RADAR_DATA_ST BusCreator_l;      /* '<S6>/Bus Creator' */
  FUS_RADOBJ_LIST_ST radarObj;         /* '<S6>/Bus Creator2' */
  FUS_OBJ_DATA_ST BusCreator3;         /* '<S50>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_m;       /* '<S51>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_c;       /* '<S62>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_a;       /* '<S73>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_n;       /* '<S76>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_g;       /* '<S77>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_l;       /* '<S78>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_k;       /* '<S79>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_o;       /* '<S80>/Bus Creator3' */
  FUS_OBJ_DATA_ST BusCreator3_lh;      /* '<S81>/Bus Creator3' */
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
  FUS_RADAR_STATE_ST BusCreator1_fl;   /* '<S36>/Bus Creator1' */
  FUS_VEHICLE_DATA_ST BusCreator_f;    /* '<S5>/Bus Creator' */
  FUS_UINT32_RESERVED_ST reserved;     /* '<S6>/Bus Creator1' */
  real32_T YawRate;                    /* '<S5>/Gain1' */
  real32_T Speed;                      /* '<S5>/Gain' */
  real32_T longPosition;
  real32_T latPosition;
  real32_T longPosition_b;
  real32_T latPosition_j;
} B_fusionAlg_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[2];
  } FUS_ObjOutput_02_st1_PWORK;        /* '<S49>/FUS_ObjOutput_02_st1' */

  struct {
    void *LoggedData[2];
  } FUS_ObjOutput_01_st_PWORK;         /* '<S49>/FUS_ObjOutput_01_st' */
} DW_fusionAlg_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  Radar410_Info_ST Radar410_Info_st;   /* '<Root>/Radar410_Info_st' */
  real32_T EyeQ4_Info_st;              /* '<Root>/EyeQ4_Info_st' */
  COM_VEHBUS_ST COM_VehBus_st;         /* '<Root>/COM_VehBus_st' */
} ExtU_fusionAlg_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  FUS_OBJ_OUTPUT_ST FUS_ObjOutput_st;  /* '<Root>/FUS_ObjOutput_st ' */
} ExtY_fusionAlg_T;

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
  uint8_T RunFlag_Value;               /* Computed Parameter: RunFlag_Value
                                        * Referenced by: '<S4>/RunFlag'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_fusionAlg_T {
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
extern P_fusionAlg_T fusionAlg_P;

/* Block signals (default storage) */
extern B_fusionAlg_T fusionAlg_B;

/* Block states (default storage) */
extern DW_fusionAlg_T fusionAlg_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_fusionAlg_T fusionAlg_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_fusionAlg_T fusionAlg_Y;

/* External data declarations for dependent source files */
extern const FUS_OBJ_OUTPUT_ST fusionAlg_rtZFUS_OBJ_OUTPUT_ST;/* FUS_OBJ_OUTPUT_ST ground */

/* Model entry point functions */
extern void fusionAlg_initialize(void);
extern void fusionAlg_output(void);
extern void fusionAlg_update(void);
extern void fusionAlg_terminate(void);

/* Real-time Model object */
extern RT_MODEL_fusionAlg_T *const fusionAlg_M;

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
 * '<S1>'   : 'fusionAlg/Fusion '
 * '<S2>'   : 'fusionAlg/RTI Data'
 * '<S3>'   : 'fusionAlg/Fusion /FUS_DataAdapter'
 * '<S4>'   : 'fusionAlg/Fusion /FusionAlg'
 * '<S5>'   : 'fusionAlg/Fusion /FUS_DataAdapter/EgoMotionAdapter'
 * '<S6>'   : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter'
 * '<S7>'   : 'fusionAlg/Fusion /FUS_DataAdapter/VisionAdapter'
 * '<S8>'   : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem'
 * '<S9>'   : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem1'
 * '<S10>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem10'
 * '<S11>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem11'
 * '<S12>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem12'
 * '<S13>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem13'
 * '<S14>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem14'
 * '<S15>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem15'
 * '<S16>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem16'
 * '<S17>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem17'
 * '<S18>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem18'
 * '<S19>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem19'
 * '<S20>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem2'
 * '<S21>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem20'
 * '<S22>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem21'
 * '<S23>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem22'
 * '<S24>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem23'
 * '<S25>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem24'
 * '<S26>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem25'
 * '<S27>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem26'
 * '<S28>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem27'
 * '<S29>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem28'
 * '<S30>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem29'
 * '<S31>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem3'
 * '<S32>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem32'
 * '<S33>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem33'
 * '<S34>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem36'
 * '<S35>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem4'
 * '<S36>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem40'
 * '<S37>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem42'
 * '<S38>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem43'
 * '<S39>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem44'
 * '<S40>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem45'
 * '<S41>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem46'
 * '<S42>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem47'
 * '<S43>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem48'
 * '<S44>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem5'
 * '<S45>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem6'
 * '<S46>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem7'
 * '<S47>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem8'
 * '<S48>'  : 'fusionAlg/Fusion /FUS_DataAdapter/RadarAdapter/Subsystem9'
 * '<S49>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray'
 * '<S50>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem'
 * '<S51>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem1'
 * '<S52>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem10'
 * '<S53>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem11'
 * '<S54>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem12'
 * '<S55>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem13'
 * '<S56>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem14'
 * '<S57>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem15'
 * '<S58>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem16'
 * '<S59>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem17'
 * '<S60>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem18'
 * '<S61>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem19'
 * '<S62>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem2'
 * '<S63>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem20'
 * '<S64>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem21'
 * '<S65>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem22'
 * '<S66>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem23'
 * '<S67>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem24'
 * '<S68>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem25'
 * '<S69>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem26'
 * '<S70>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem27'
 * '<S71>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem28'
 * '<S72>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem29'
 * '<S73>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem3'
 * '<S74>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem30'
 * '<S75>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem31'
 * '<S76>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem4'
 * '<S77>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem5'
 * '<S78>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem6'
 * '<S79>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem7'
 * '<S80>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem8'
 * '<S81>'  : 'fusionAlg/Fusion /FusionAlg/BusToBusArray/Subsystem9'
 * '<S82>'  : 'fusionAlg/RTI Data/RTI Data Store'
 * '<S83>'  : 'fusionAlg/RTI Data/RTI Data Store/RTI Data Store'
 * '<S84>'  : 'fusionAlg/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_fusionAlg_h_ */
