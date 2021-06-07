/*
 * Code generation for system model 'AccTarSel'
 *
 * Model                      : AccTarSel
 * Model version              : 1.497
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Mar 16 18:26:32 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AccTarSel_trc_ptr.h"
#include "rti_initref_cpp.h"
#include "AccTarSel.h"
#include "AccTarSel_private.h"
#include "LookUp_real32_T_real32_T.h"
#include "look1_iflf_linlcpw.h"
#include "look1_iflf_linlxpw.h"
#include "mod_4K2xLldT.h"
#include "plook_u32f_bincka.h"
#include "plook_u32f_lincka.h"
#include "plook_u32s32_evencka.h"
#include "rt_powf_snf.h"
#include "rt_roundf_snf.h"

/* Named constants for Chart: '<Root>/ACC_State_Machine1' */
#define AccTarSel_IN_ACTIVE            ((uint8_T)1U)
#define AccTarSel_IN_Drive             ((uint8_T)1U)
#define AccTarSel_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define AccTarSel_IN_OFF               ((uint8_T)2U)
#define AccTarSel_IN_OVERRIDE          ((uint8_T)3U)
#define AccTarSel_IN_PASSIVE           ((uint8_T)4U)
#define AccTarSel_IN_Standstill        ((uint8_T)2U)

P_AccTarSel_T AccTarSel_P_g = {
  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<Root>/Memory'
   */
  {
    0.0,                               /* tmeStamp */

    {
      {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      }, {
        0.0F,                          /* dx */
        0.0F,                          /* dy */
        0.0F,                          /* vx */
        0.0F,                          /* vy */
        0.0F,                          /* dyToTraj */
        0.0F,                          /* dyCutInPred */
        0.0F,                          /* probCutInRaw */
        0.0F,                          /* probCutInFilt */
        0.0F,                          /* probEgoLane */
        0.0F,                          /* plausEgoLane */
        false,                         /* ValidEgoLane */
        0.0F                           /* ID */
      } }
    /* ats_obj_st */
  },

  /* Computed Parameter: FOCInfo_Y0
   * Referenced by: '<S20>/FOCInfo'
   */
  {
    false,                             /* Valid */
    0.0F,                              /* aFOC */
    false,                             /* DecToStop */
    false,                             /* FirstCyc */
    0.0F,                              /* dAim */
    0.0F,                              /* aStat */
    0.0F,                              /* aApproach */
    0.0F,                              /* ApproachCase */
    0.0F,                              /* tObjStop */
    0.0F,                              /* dSlowDown */
    false,                             /* ObjLeaving */
    0.0F                               /* dImmerseAdj */
  },

  /* Computed Parameter: Zero1_Value
   * Referenced by: '<S20>/Zero1'
   */
  { {
      false,                           /* Valid */
      0.0F,                            /* aFOC */
      false,                           /* DecToStop */
      false,                           /* FirstCyc */
      0.0F,                            /* dAim */
      0.0F,                            /* aStat */
      0.0F,                            /* aApproach */
      0.0F,                            /* ApproachCase */
      0.0F,                            /* tObjStop */
      0.0F,                            /* dSlowDown */
      false,                           /* ObjLeaving */
      0.0F                             /* dImmerseAdj */
    }, {
      false,                           /* Valid */
      0.0F,                            /* aFOC */
      false,                           /* DecToStop */
      false,                           /* FirstCyc */
      0.0F,                            /* dAim */
      0.0F,                            /* aStat */
      0.0F,                            /* aApproach */
      0.0F,                            /* ApproachCase */
      0.0F,                            /* tObjStop */
      0.0F,                            /* dSlowDown */
      false,                           /* ObjLeaving */
      0.0F                             /* dImmerseAdj */
    }, {
      false,                           /* Valid */
      0.0F,                            /* aFOC */
      false,                           /* DecToStop */
      false,                           /* FirstCyc */
      0.0F,                            /* dAim */
      0.0F,                            /* aStat */
      0.0F,                            /* aApproach */
      0.0F,                            /* ApproachCase */
      0.0F,                            /* tObjStop */
      0.0F,                            /* dSlowDown */
      false,                           /* ObjLeaving */
      0.0F                             /* dImmerseAdj */
    }, {
      false,                           /* Valid */
      0.0F,                            /* aFOC */
      false,                           /* DecToStop */
      false,                           /* FirstCyc */
      0.0F,                            /* dAim */
      0.0F,                            /* aStat */
      0.0F,                            /* aApproach */
      0.0F,                            /* ApproachCase */
      0.0F,                            /* tObjStop */
      0.0F,                            /* dSlowDown */
      false,                           /* ObjLeaving */
      0.0F                             /* dImmerseAdj */
    }, {
      false,                           /* Valid */
      0.0F,                            /* aFOC */
      false,                           /* DecToStop */
      false,                           /* FirstCyc */
      0.0F,                            /* dAim */
      0.0F,                            /* aStat */
      0.0F,                            /* aApproach */
      0.0F,                            /* ApproachCase */
      0.0F,                            /* tObjStop */
      0.0F,                            /* dSlowDown */
      false,                           /* ObjLeaving */
      0.0F                             /* dImmerseAdj */
    }, {
      false,                           /* Valid */
      0.0F,                            /* aFOC */
      false,                           /* DecToStop */
      false,                           /* FirstCyc */
      0.0F,                            /* dAim */
      0.0F,                            /* aStat */
      0.0F,                            /* aApproach */
      0.0F,                            /* ApproachCase */
      0.0F,                            /* tObjStop */
      0.0F,                            /* dSlowDown */
      false,                           /* ObjLeaving */
      0.0F                             /* dImmerseAdj */
    } },

  /* Computed Parameter: Memory1_InitialCondition
   * Referenced by: '<S1>/Memory1'
   */
  {
    false,                             /* Valid */
    0.0F,                              /* aFOC */
    false,                             /* DecToStop */
    false,                             /* FirstCyc */
    0.0F,                              /* dAim */
    0.0F,                              /* aStat */
    0.0F,                              /* aApproach */
    0.0F,                              /* ApproachCase */
    0.0F,                              /* tObjStop */
    0.0F,                              /* dSlowDown */
    false,                             /* ObjLeaving */
    0.0F                               /* dImmerseAdj */
  },

  /* Computed Parameter: ObjInfo_Y0
   * Referenced by: '<S3>/ObjInfo'
   */
  {
    0.0F,                              /* dx */
    0.0F,                              /* dy */
    0.0F,                              /* vx */
    0.0F,                              /* vy */
    0.0F,                              /* dyToTraj */
    0.0F,                              /* dyCutInPred */
    0.0F,                              /* probCutInRaw */
    0.0F,                              /* probCutInFilt */
    0.0F,                              /* probEgoLane */
    0.0F,                              /* plausEgoLane */
    false,                             /* ValidEgoLane */
    0.0F                               /* ID */
  },

  /* Computed Parameter: Zero1_Value_k
   * Referenced by: '<S3>/Zero1'
   */
  { {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    }, {
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* dyToTraj */
      0.0F,                            /* dyCutInPred */
      0.0F,                            /* probCutInRaw */
      0.0F,                            /* probCutInFilt */
      0.0F,                            /* probEgoLane */
      0.0F,                            /* plausEgoLane */
      false,                           /* ValidEgoLane */
      0.0F                             /* ID */
    } },

  /* Computed Parameter: POInfo_Y0
   * Referenced by: '<S3>/POInfo'
   */
  {
    false,                             /* Valid */
    0.0F,                              /* Index */
    0.0F,                              /* dx */
    0.0F,                              /* dy */
    0.0F,                              /* vx */
    0.0F,                              /* vy */
    0.0F,                              /* ax */
    0.0F,                              /* vxAbs */
    0.0F,                              /* axAbs */
    0.0F,                              /* Type */
    0.0F                               /* MotionSts */
  },

  /* Computed Parameter: Zero1_Value_g
   * Referenced by: '<S13>/Zero1'
   */
  { {
      false,                           /* Valid */
      0.0F,                            /* Index */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* ax */
      0.0F,                            /* vxAbs */
      0.0F,                            /* axAbs */
      0.0F,                            /* Type */
      0.0F                             /* MotionSts */
    }, {
      false,                           /* Valid */
      0.0F,                            /* Index */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* ax */
      0.0F,                            /* vxAbs */
      0.0F,                            /* axAbs */
      0.0F,                            /* Type */
      0.0F                             /* MotionSts */
    }, {
      false,                           /* Valid */
      0.0F,                            /* Index */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* ax */
      0.0F,                            /* vxAbs */
      0.0F,                            /* axAbs */
      0.0F,                            /* Type */
      0.0F                             /* MotionSts */
    }, {
      false,                           /* Valid */
      0.0F,                            /* Index */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* ax */
      0.0F,                            /* vxAbs */
      0.0F,                            /* axAbs */
      0.0F,                            /* Type */
      0.0F                             /* MotionSts */
    }, {
      false,                           /* Valid */
      0.0F,                            /* Index */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* ax */
      0.0F,                            /* vxAbs */
      0.0F,                            /* axAbs */
      0.0F,                            /* Type */
      0.0F                             /* MotionSts */
    }, {
      false,                           /* Valid */
      0.0F,                            /* Index */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* vx */
      0.0F,                            /* vy */
      0.0F,                            /* ax */
      0.0F,                            /* vxAbs */
      0.0F,                            /* axAbs */
      0.0F,                            /* Type */
      0.0F                             /* MotionSts */
    } },

  /* Computed Parameter: Memory1_InitialCondition_e
   * Referenced by: '<Root>/Memory1'
   */
  {
    false,                             /* Valid */
    0.0F,                              /* Index */
    0.0F,                              /* dx */
    0.0F,                              /* dy */
    0.0F,                              /* vx */
    0.0F,                              /* vy */
    0.0F,                              /* ax */
    0.0F,                              /* vxAbs */
    0.0F,                              /* axAbs */
    0.0F,                              /* Type */
    0.0F                               /* MotionSts */
  },

  /* Expression: -0.2
   * Referenced by: '<S44>/Constant1'
   */
  -0.2,

  /* Expression: 0.2
   * Referenced by: '<S44>/Constant2'
   */
  0.2,

  /* Expression: 0
   * Referenced by: '<S116>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S8>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/Constant'
   */
  0.0,

  /* Expression: 15
   * Referenced by: '<S159>/Constant'
   */
  15.0,

  /* Expression: 10
   * Referenced by: '<S159>/Constant1'
   */
  10.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant5'
   */
  1.0,

  /* Computed Parameter: CMDType_Y0
   * Referenced by: '<S25>/CMDType'
   */
  0,

  /* Computed Parameter: Constant2_Value_n
   * Referenced by: '<S25>/Constant2'
   */
  1,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S25>/Constant'
   */
  0,

  /* Computed Parameter: Memory1_InitialCondition_d
   * Referenced by: '<S25>/Memory1'
   */
  0,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S106>/Constant'
   */
  0,

  /* Computed Parameter: Constant2_Value_i
   * Referenced by: '<Root>/Constant2'
   */
  40,

  /* Computed Parameter: Constant1_Value_f
   * Referenced by: '<S13>/Constant1'
   */
  0,

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S13>/Constant'
   */
  0,

  /* Computed Parameter: Constant2_Value_c
   * Referenced by: '<S13>/Constant2'
   */
  1,

  /* Computed Parameter: Constant1_Value_i
   * Referenced by: '<S11>/Constant1'
   */
  0,

  /* Computed Parameter: Constant2_Value_cv
   * Referenced by: '<S26>/Constant2'
   */
  6,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S1>/Constant3'
   */
  6,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S17>/Constant'
   */
  4,

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S17>/1-D Lookup Table'
   */
  { 0, 1, 4, 3, 1, 5 },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S17>/1-D Lookup Table'
   */
  { 0, 1, 2, 3, 4, 5 },

  /* Computed Parameter: Constant9_Value
   * Referenced by: '<S1>/Constant9'
   */
  0,

  /* Computed Parameter: Constant9_Value_d
   * Referenced by: '<Root>/Constant9'
   */
  0,

  /* Computed Parameter: aMin_Y0
   * Referenced by: '<S25>/aMin'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_l
   * Referenced by: '<S25>/Constant1'
   */
  16.0F,

  /* Computed Parameter: Memory_InitialCondition_h
   * Referenced by: '<S25>/Memory'
   */
  0.0F,

  /* Computed Parameter: aFOCArray_Y0
   * Referenced by: '<S27>/aFOCArray'
   */
  0.0F,

  /* Computed Parameter: Zero1_Value_l
   * Referenced by: '<S27>/Zero1'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Constant1_Value_fy
   * Referenced by: '<S39>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_is
   * Referenced by: '<S39>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S48>/Constant'
   */
  255.0F,

  /* Computed Parameter: Constant1_Value_d
   * Referenced by: '<S47>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S47>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_p
   * Referenced by: '<S47>/Constant2'
   */
  255.0F,

  /* Computed Parameter: Constant2_Value_cj
   * Referenced by: '<S91>/Constant2'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_j
   * Referenced by: '<S94>/Constant2'
   */
  2.0F,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S94>/Constant'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S30>/Constant'
   */
  0.1F,

  /* Computed Parameter: Constant1_Value_dk
   * Referenced by: '<S30>/Constant1'
   */
  0.1F,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S45>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_ju
   * Referenced by: '<S45>/Constant2'
   */
  1.0F,

  /* Computed Parameter: Constant3_Value_a
   * Referenced by: '<S45>/Constant3'
   */
  4.0F,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S45>/Constant'
   */
  255.0F,

  /* Computed Parameter: Constant1_Value_fq
   * Referenced by: '<S45>/Constant1'
   */
  -0.1F,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S45>/Switch'
   */
  0.1F,

  /* Computed Parameter: Constant2_Value_cl
   * Referenced by: '<S42>/Constant2'
   */
  -0.1F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S41>/Gain'
   */
  0.8F,

  /* Computed Parameter: Constant10_Value
   * Referenced by: '<S32>/Constant10'
   */
  0.1F,

  /* Computed Parameter: Constant1_Value_dh
   * Referenced by: '<S32>/Constant1'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_a
   * Referenced by: '<S32>/Constant2'
   */
  7.0F,

  /* Computed Parameter: Constant5_Value_j
   * Referenced by: '<S32>/Constant5'
   */
  1.2F,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S32>/Constant6'
   */
  2.1F,

  /* Computed Parameter: Constant7_Value
   * Referenced by: '<S32>/Constant7'
   */
  1.0F,

  /* Computed Parameter: Constant8_Value
   * Referenced by: '<S32>/Constant8'
   */
  1.5F,

  /* Computed Parameter: Constant4_Value_k
   * Referenced by: '<S32>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value_k
   * Referenced by: '<S81>/Constant5'
   */
  8.3F,

  /* Computed Parameter: Constant6_Value_f
   * Referenced by: '<S81>/Constant6'
   */
  16.6F,

  /* Computed Parameter: Constant1_Value_ft
   * Referenced by: '<S81>/Constant1'
   */
  1.0F,

  /* Computed Parameter: uDLookupTable_tableData_c
   * Referenced by: '<S81>/1-D Lookup Table'
   */
  { 1.5F, 1.4F, 1.3F },

  /* Computed Parameter: uDLookupTable_bp01Data_n
   * Referenced by: '<S81>/1-D Lookup Table'
   */
  { 1.4F, 1.8F, 2.1F },

  /* Computed Parameter: Constant3_Value_ab
   * Referenced by: '<S32>/Constant3'
   */
  200.0F,

  /* Computed Parameter: Constant9_Value_g
   * Referenced by: '<S32>/Constant9'
   */
  20.0F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S32>/Gain3'
   */
  0.5F,

  /* Computed Parameter: Constant_Value_ff
   * Referenced by: '<S32>/Constant'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_m
   * Referenced by: '<S32>/Gain'
   */
  0.6F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S32>/Gain2'
   */
  0.8F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S32>/Gain1'
   */
  0.2F,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S80>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_l2
   * Referenced by: '<S41>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_b
   * Referenced by: '<S41>/Constant2'
   */
  20.0F,

  /* Computed Parameter: Constant3_Value_l
   * Referenced by: '<S41>/Constant3'
   */
  8.0F,

  /* Computed Parameter: kImsLowSpd_Gain
   * Referenced by: '<S41>/kImsLowSpd'
   */
  0.6F,

  /* Computed Parameter: kImsHighSpd_Gain
   * Referenced by: '<S41>/kImsHighSpd'
   */
  0.2F,

  /* Computed Parameter: Constant9_Value_i
   * Referenced by: '<S41>/Constant9'
   */
  1.0F,

  /* Computed Parameter: Constant10_Value_i
   * Referenced by: '<S41>/Constant10'
   */
  10.0F,

  /* Computed Parameter: Constant12_Value
   * Referenced by: '<S41>/Constant12'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_ls
   * Referenced by: '<S41>/Constant1'
   */
  -10.0F,

  /* Computed Parameter: Constant4_Value_kp
   * Referenced by: '<S41>/Constant4'
   */
  -5.0F,

  /* Computed Parameter: Constant5_Value_ja
   * Referenced by: '<S41>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant6_Value_n
   * Referenced by: '<S41>/Constant6'
   */
  1.3F,

  /* Computed Parameter: Constant7_Value_d
   * Referenced by: '<S41>/Constant7'
   */
  1.2F,

  /* Computed Parameter: Constant8_Value_k
   * Referenced by: '<S41>/Constant8'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_cf
   * Referenced by: '<S46>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant2_Value_ct
   * Referenced by: '<S43>/Constant2'
   */
  -0.1F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S43>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant1_Value_h
   * Referenced by: '<S43>/Constant1'
   */
  2.0F,

  /* Computed Parameter: Gain_Gain_k
   * Referenced by: '<S43>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant2_Value_k
   * Referenced by: '<S29>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S33>/Constant'
   */
  3.0F,

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S33>/Constant1'
   */
  0.1F,

  /* Computed Parameter: Constant2_Value_b1
   * Referenced by: '<S33>/Constant2'
   */
  0.4F,

  /* Computed Parameter: Constant4_Value_p
   * Referenced by: '<S33>/Constant4'
   */
  5.0F,

  /* Computed Parameter: Constant_Value_hz
   * Referenced by: '<S82>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant12_Value_d
   * Referenced by: '<S36>/Constant12'
   */
  0.0F,

  /* Computed Parameter: Constant13_Value
   * Referenced by: '<S36>/Constant13'
   */
  6.0F,

  /* Computed Parameter: Constant14_Value
   * Referenced by: '<S36>/Constant14'
   */
  0.0F,

  /* Computed Parameter: Constant15_Value
   * Referenced by: '<S36>/Constant15'
   */
  3.0F,

  /* Computed Parameter: Constant16_Value
   * Referenced by: '<S36>/Constant16'
   */
  0.0F,

  /* Computed Parameter: Constant17_Value
   * Referenced by: '<S36>/Constant17'
   */
  0.6F,

  /* Computed Parameter: Constant18_Value
   * Referenced by: '<S36>/Constant18'
   */
  0.0F,

  /* Computed Parameter: Gain2_Gain_f
   * Referenced by: '<S36>/Gain2'
   */
  0.2F,

  /* Computed Parameter: Constant2_Value_bz
   * Referenced by: '<S36>/Constant2'
   */
  -3.0F,

  /* Computed Parameter: Constant3_Value_i
   * Referenced by: '<S36>/Constant3'
   */
  -0.3F,

  /* Computed Parameter: Constant8_Value_h
   * Referenced by: '<S36>/Constant8'
   */
  1.7F,

  /* Computed Parameter: Constant9_Value_k
   * Referenced by: '<S36>/Constant9'
   */
  1.4F,

  /* Computed Parameter: Constant4_Value_g
   * Referenced by: '<S36>/Constant4'
   */
  2.5F,

  /* Computed Parameter: Constant5_Value_c
   * Referenced by: '<S36>/Constant5'
   */
  1.8F,

  /* Computed Parameter: Constant6_Value_j
   * Referenced by: '<S36>/Constant6'
   */
  0.4F,

  /* Computed Parameter: Constant7_Value_p
   * Referenced by: '<S36>/Constant7'
   */
  0.2F,

  /* Computed Parameter: Constant10_Value_ic
   * Referenced by: '<S36>/Constant10'
   */
  0.3F,

  /* Computed Parameter: Constant11_Value
   * Referenced by: '<S36>/Constant11'
   */
  0.15F,

  /* Computed Parameter: Constant1_Value_e
   * Referenced by: '<S36>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold_f
   * Referenced by: '<S36>/Switch'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_j
   * Referenced by: '<S36>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant19_Value
   * Referenced by: '<S36>/Constant19'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_e
   * Referenced by: '<S37>/Constant3'
   */
  200.0F,

  /* Computed Parameter: Constant9_Value_e
   * Referenced by: '<S37>/Constant9'
   */
  20.0F,

  /* Computed Parameter: Constant_Value_c1
   * Referenced by: '<S28>/Constant'
   */
  16.0F,

  /* Computed Parameter: Constant3_Value_p
   * Referenced by: '<S28>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_go
   * Referenced by: '<S28>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value_g
   * Referenced by: '<S28>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant6_Value_p
   * Referenced by: '<S28>/Constant6'
   */
  0.0F,

  /* Computed Parameter: Constant7_Value_p5
   * Referenced by: '<S28>/Constant7'
   */
  0.0F,

  /* Computed Parameter: Constant8_Value_g
   * Referenced by: '<S28>/Constant8'
   */
  0.0F,

  /* Computed Parameter: Constant10_Value_iq
   * Referenced by: '<S28>/Constant10'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable_tableData_j
   * Referenced by: '<S117>/1-D Lookup Table'
   */
  { 0.0F, 1.5F },

  /* Computed Parameter: uDLookupTable_bp01Data_c
   * Referenced by: '<S117>/1-D Lookup Table'
   */
  { 0.5F, 1.5F },

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S117>/Constant'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold_i
   * Referenced by: '<S117>/Switch'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S117>/1-D Lookup Table1'
   */
  { 1.0F, 0.0F },

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S117>/1-D Lookup Table1'
   */
  { 1.0F, 1.8F },

  /* Computed Parameter: Constant_Value_ga
   * Referenced by: '<S118>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_c
   * Referenced by: '<S116>/Constant1'
   */
  2.0F,

  /* Computed Parameter: Constant_Value_no
   * Referenced by: '<S119>/Constant'
   */
  1.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S116>/Merge'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_ae
   * Referenced by: '<S115>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S113>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_hd
   * Referenced by: '<S120>/Constant'
   */
  3.0F,

  /* Computed Parameter: uDLookupTable_tableData_n
   * Referenced by: '<S125>/1-D Lookup Table'
   */
  { 1.6F, 1.6F, 1.8F },

  /* Computed Parameter: uDLookupTable_bp01Data_m
   * Referenced by: '<S125>/1-D Lookup Table'
   */
  { 0.0F, 20.0F, 40.0F },

  /* Computed Parameter: Constant_Value_ed
   * Referenced by: '<S125>/Constant'
   */
  0.15F,

  /* Computed Parameter: Constant1_Value_a0
   * Referenced by: '<S125>/Constant1'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable1_tableData_d
   * Referenced by: '<S125>/1-D Lookup Table1'
   */
  { -1.0F, 1.2F },

  /* Computed Parameter: uDLookupTable1_bp01Data_b
   * Referenced by: '<S125>/1-D Lookup Table1'
   */
  { -0.2F, 0.2F },

  /* Computed Parameter: Constant_Value_lp
   * Referenced by: '<S128>/Constant'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable_tableData_jd
   * Referenced by: '<S129>/1-D Lookup Table'
   */
  { 80.0F, 160.0F },

  /* Computed Parameter: uDLookupTable_bp01Data_nr
   * Referenced by: '<S129>/1-D Lookup Table'
   */
  { 11.11F, 22.22F },

  /* Computed Parameter: Constant_Value_cs
   * Referenced by: '<S129>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_ar
   * Referenced by: '<S130>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S130>/Constant1'
   */
  4.0F,

  /* Computed Parameter: Constant2_Value_fh
   * Referenced by: '<S130>/Constant2'
   */
  1.0F,

  /* Computed Parameter: Constant3_Value_m
   * Referenced by: '<S130>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_gd
   * Referenced by: '<S109>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_pb
   * Referenced by: '<S111>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_lw
   * Referenced by: '<S108>/Constant1'
   */
  0.5F,

  /* Computed Parameter: Constant3_Value_c
   * Referenced by: '<S110>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_bc
   * Referenced by: '<S110>/Constant1'
   */
  1.0F,

  /* Computed Parameter: Constant2_Value_jk
   * Referenced by: '<S110>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_b0
   * Referenced by: '<S110>/Constant'
   */
  0.6F,

  /* Computed Parameter: Constant5_Value_e
   * Referenced by: '<S133>/Constant5'
   */
  255.0F,

  /* Computed Parameter: Constant_Value_b4
   * Referenced by: '<S133>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_fqq
   * Referenced by: '<S133>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_h
   * Referenced by: '<S133>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_n
   * Referenced by: '<S133>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_f
   * Referenced by: '<S133>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant7_Value_c
   * Referenced by: '<S133>/Constant7'
   */
  0.0F,

  /* Computed Parameter: Constant8_Value_p
   * Referenced by: '<S133>/Constant8'
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S106>/Delay'
   */
  65535.0F,

  /* Computed Parameter: Merge2_InitialOutput
   * Referenced by: '<S106>/Merge2'
   */
  0.0F,

  /* Computed Parameter: Merge4_InitialOutput
   * Referenced by: '<S106>/Merge4'
   */
  0.0F,

  /* Computed Parameter: Merge5_InitialOutput
   * Referenced by: '<S106>/Merge5'
   */
  0.0F,

  /* Computed Parameter: Merge_InitialOutput_b
   * Referenced by: '<S106>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge1_InitialOutput
   * Referenced by: '<S106>/Merge1'
   */
  0.0F,

  /* Computed Parameter: Merge3_InitialOutput
   * Referenced by: '<S106>/Merge3'
   */
  0.0F,

  /* Computed Parameter: Merge7_InitialOutput
   * Referenced by: '<S106>/Merge7'
   */
  0.0F,

  /* Computed Parameter: Merge8_InitialOutput
   * Referenced by: '<S106>/Merge8'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_ji
   * Referenced by: '<S134>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_o
   * Referenced by: '<S134>/Constant1'
   */
  3.0F,

  /* Computed Parameter: Constant_Value_on
   * Referenced by: '<S135>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_jv
   * Referenced by: '<S135>/Constant1'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_n
   * Referenced by: '<S163>/Constant1'
   */
  200.0F,

  /* Computed Parameter: Constant3_Value_nb
   * Referenced by: '<S163>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_h
   * Referenced by: '<S163>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Constant5_Value_n
   * Referenced by: '<S163>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Gain1_Gain_g
   * Referenced by: '<S163>/Gain1'
   */
  -1.0F,

  /* Computed Parameter: Constant7_Value_co
   * Referenced by: '<S163>/Constant7'
   */
  0.0F,

  /* Computed Parameter: Constant8_Value_j
   * Referenced by: '<S163>/Constant8'
   */
  0.0F,

  /* Computed Parameter: Constant9_Value_ge
   * Referenced by: '<S163>/Constant9'
   */
  20.0F,

  /* Computed Parameter: Constant10_Value_h
   * Referenced by: '<S163>/Constant10'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_cf
   * Referenced by: '<S164>/Constant1'
   */
  255.0F,

  /* Computed Parameter: Constant2_Value_a2
   * Referenced by: '<S164>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_f
   * Referenced by: '<S164>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_pj
   * Referenced by: '<S164>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value_e1
   * Referenced by: '<S164>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant6_Value_i
   * Referenced by: '<S164>/Constant6'
   */
  0.0F,

  /* Computed Parameter: Constant7_Value_e
   * Referenced by: '<S164>/Constant7'
   */
  0.0F,

  /* Computed Parameter: Constant8_Value_b
   * Referenced by: '<S164>/Constant8'
   */
  0.0F,

  /* Computed Parameter: Constant9_Value_h
   * Referenced by: '<S164>/Constant9'
   */
  0.0F,

  /* Computed Parameter: Constant10_Value_hj
   * Referenced by: '<S164>/Constant10'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_mc
   * Referenced by: '<S166>/Constant'
   */
  5.0F,

  /* Computed Parameter: Constant1_Value_n2
   * Referenced by: '<S166>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_as
   * Referenced by: '<S167>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_d0
   * Referenced by: '<S167>/Constant'
   */
  5.0F,

  /* Computed Parameter: Constant_Value_oc
   * Referenced by: '<S162>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant5_Value_l
   * Referenced by: '<S162>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant6_Value_a
   * Referenced by: '<S162>/Constant6'
   */
  2.0F,

  /* Computed Parameter: Constant7_Value_f
   * Referenced by: '<S162>/Constant7'
   */
  -0.1F,

  /* Computed Parameter: Constant_Value_dd
   * Referenced by: '<S169>/Constant'
   */
  1.0F,

  /* Computed Parameter: Merge_InitialOutput_i
   * Referenced by: '<S162>/Merge'
   */
  0.0F,

  /* Computed Parameter: Merge1_InitialOutput_h
   * Referenced by: '<S162>/Merge1'
   */
  0.0F,

  /* Computed Parameter: Switch2_Threshold
   * Referenced by: '<S162>/Switch2'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_ag
   * Referenced by: '<S168>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_js
   * Referenced by: '<S170>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_o3
   * Referenced by: '<S171>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_le
   * Referenced by: '<S161>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value_jg
   * Referenced by: '<S173>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_m4
   * Referenced by: '<S23>/Constant'
   */
  -5.0F,

  /* Computed Parameter: ObjSource_Value
   * Referenced by: '<Root>/ObjSource'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold_l
   * Referenced by: '<Root>/Switch'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_cx
   * Referenced by: '<S21>/Constant'
   */
  10.0F,

  /* Computed Parameter: Gain_Gain_o
   * Referenced by: '<S21>/Gain'
   */
  0.277777791F,

  /* Computed Parameter: Constant_Value_eo
   * Referenced by: '<S5>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition_o
   * Referenced by: '<S5>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_b
   * Referenced by: '<S6>/Constant3'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable_tableData_b
   * Referenced by: '<S144>/1-D Lookup Table'
   */
  { -0.1F, -0.0015F, 0.0F, 0.0F, 0.0015F, 0.1F },

  /* Computed Parameter: uDLookupTable_bp01Data_d
   * Referenced by: '<S144>/1-D Lookup Table'
   */
  { -0.1F, -0.0015F, -0.0005F, 0.0005F, 0.0015F, 0.1F },

  /* Computed Parameter: Constant1_Value_e1
   * Referenced by: '<S144>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_k
   * Referenced by: '<S144>/Constant3'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition_g
   * Referenced by: '<S144>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_fp
   * Referenced by: '<S6>/Constant2'
   */
  0.5F,

  /* Computed Parameter: Constant4_Value_n
   * Referenced by: '<S6>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value_b
   * Referenced by: '<S6>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Memory_2_InitialCondition
   * Referenced by: '<S13>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory_1_InitialCondition
   * Referenced by: '<S13>/Memory'
   */
  0.0F,

  /* Computed Parameter: Traj_C0_Value
   * Referenced by: '<S141>/Traj_C0'
   */
  0.0F,

  /* Computed Parameter: Traj_C1_Value
   * Referenced by: '<S141>/Traj_C1'
   */
  0.0F,

  /* Computed Parameter: Traj_C2_Value
   * Referenced by: '<S141>/Traj_C2'
   */
  0.0F,

  /* Computed Parameter: Traj_C3_Value
   * Referenced by: '<S141>/Traj_C3'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_nk
   * Referenced by: '<S143>/Constant'
   */
  0.1F,

  /* Computed Parameter: Memory_InitialCondition_i
   * Referenced by: '<S143>/Memory'
   */
  0.0F,

  /* Computed Parameter: Memory1_InitialCondition_l
   * Referenced by: '<S143>/Memory1'
   */
  0.0F,

  /* Computed Parameter: dy_Value
   * Referenced by: '<S141>/dy'
   */
  0.0F,

  /* Computed Parameter: Traj_C0_Value_a
   * Referenced by: '<S142>/Traj_C0'
   */
  0.0F,

  /* Computed Parameter: Traj_C1_Value_o
   * Referenced by: '<S142>/Traj_C1'
   */
  0.0F,

  /* Computed Parameter: Traj_C2_Value_g
   * Referenced by: '<S142>/Traj_C2'
   */
  0.0F,

  /* Computed Parameter: Traj_C3_Value_j
   * Referenced by: '<S142>/Traj_C3'
   */
  0.0F,

  /* Computed Parameter: dx_Value
   * Referenced by: '<S142>/dx'
   */
  255.0F,

  /* Computed Parameter: dy_Value_i
   * Referenced by: '<S142>/dy'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold_b
   * Referenced by: '<S5>/Switch'
   */
  0.0F,

  /* Computed Parameter: vSetAVP_Value
   * Referenced by: '<S22>/vSetAVP'
   */
  2.77F,

  /* Computed Parameter: Constant5_Value_h
   * Referenced by: '<S22>/Constant5'
   */
  40.0F,

  /* Computed Parameter: Gain_Gain_kl
   * Referenced by: '<S22>/Gain'
   */
  0.952380955F,

  /* Computed Parameter: Constant2_Value_ah
   * Referenced by: '<S22>/Constant2'
   */
  40.0F,

  /* Computed Parameter: Switch_Threshold_n
   * Referenced by: '<S22>/Switch'
   */
  0.5F,

  /* Computed Parameter: Constant_Value_lt
   * Referenced by: '<S104>/Constant'
   */
  1.0F,

  /* Computed Parameter: Memory_InitialCondition_he
   * Referenced by: '<S22>/Memory'
   */
  40.0F,

  /* Computed Parameter: Constant_Value_m3
   * Referenced by: '<S22>/Constant'
   */
  0.0F,

  /* Computed Parameter: Memory_InitialCondition_a
   * Referenced by: '<S1>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_os
   * Referenced by: '<S137>/Constant'
   */
  2.0F,

  /* Computed Parameter: Memory1_InitialCondition_p
   * Referenced by: '<S4>/Memory1'
   */
  3.0F,

  /* Computed Parameter: Merge_InitialOutput_d
   * Referenced by: '<S4>/Merge'
   */
  0.0F,

  /* Computed Parameter: uDLookupTable_tableData_p
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 1.4F, 1.8F, 2.1F },

  /* Computed Parameter: uDLookupTable_bp01Data_h
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 1.0F, 2.0F, 3.0F },

  /* Computed Parameter: uDLookupTable_tableData_f
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 1.6F, 1.4F, 1.2F, 0.9F },

  /* Computed Parameter: uDLookupTable_bp01Data_d3
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 3.0F, 10.0F, 20.0F, 30.0F },

  /* Computed Parameter: Constant1_Value_ea
   * Referenced by: '<S19>/Constant1'
   */
  0.0001F,

  /* Computed Parameter: Constant1_Value_iu
   * Referenced by: '<S18>/Constant1'
   */
  16.0F,

  /* Computed Parameter: Constant4_Value_i
   * Referenced by: '<S18>/Constant4'
   */
  0.5F,

  /* Computed Parameter: Constant3_Value_is
   * Referenced by: '<S18>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_mz
   * Referenced by: '<S18>/Gain'
   */
  2.0F,

  /* Computed Parameter: Constant2_Value_cvv
   * Referenced by: '<S18>/Constant2'
   */
  0.1F,

  /* Computed Parameter: Constant_Value_dn
   * Referenced by: '<S24>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant3_Value_j
   * Referenced by: '<S22>/Constant3'
   */
  18.52F,

  /* Computed Parameter: Gain_Gain_ki
   * Referenced by: '<Root>/Gain'
   */
  1.1F,

  /* Computed Parameter: Gain1_Gain_p
   * Referenced by: '<Root>/Gain1'
   */
  0.9F,

  /* Computed Parameter: Constant_Value_he
   * Referenced by: '<S12>/Constant'
   */
  3.0F,

  /* Computed Parameter: Constant8_Value_d
   * Referenced by: '<Root>/Constant8'
   */
  2.0F,

  /* Computed Parameter: Constant6_Value_d
   * Referenced by: '<Root>/Constant6'
   */
  4.0F,

  /* Computed Parameter: Memory_InitialCondition_m
   * Referenced by: '<S15>/Memory'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_gu
   * Referenced by: '<S15>/Constant'
   */
  2.0F,

  /* Computed Parameter: Constant1_Value_ic
   * Referenced by: '<S15>/Constant1'
   */
  1.0F,

  /* Computed Parameter: Memory1_InitialCondition_o
   * Referenced by: '<S15>/Memory1'
   */
  0.0F,

  /* Computed Parameter: Constant2_Value_jp
   * Referenced by: '<S15>/Constant2'
   */
  0.0F,

  /* Computed Parameter: Delay1_DelayLength
   * Referenced by: '<S106>/Delay1'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S106>/Delay'
   */
  1U,

  /* Computed Parameter: Constant4_Value_ig
   * Referenced by: '<Root>/Constant4'
   */
  0U,

  /* Computed Parameter: DecToStopArray_Y0
   * Referenced by: '<S27>/DecToStopArray'
   */
  0,

  /* Computed Parameter: Zero2_Value
   * Referenced by: '<S27>/Zero2'
   */
  { 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: Constant_Value_fj
   * Referenced by: '<S29>/Constant'
   */
  0,

  /* Computed Parameter: Constant1_Value_nw
   * Referenced by: '<S37>/Constant1'
   */
  1,

  /* Computed Parameter: Constant5_Value_no
   * Referenced by: '<S37>/Constant5'
   */
  1,

  /* Computed Parameter: Constant6_Value_m
   * Referenced by: '<S37>/Constant6'
   */
  0,

  /* Computed Parameter: Constant1_Value_m
   * Referenced by: '<S29>/Constant1'
   */
  0,

  /* Computed Parameter: Constant1_Value_iy
   * Referenced by: '<S28>/Constant1'
   */
  0,

  /* Computed Parameter: Constant2_Value_d
   * Referenced by: '<S28>/Constant2'
   */
  1,

  /* Computed Parameter: Constant9_Value_p
   * Referenced by: '<S28>/Constant9'
   */
  0,

  /* Computed Parameter: Constant_Value_ao
   * Referenced by: '<S112>/Constant'
   */
  0,

  /* Computed Parameter: Constant_Value_n5
   * Referenced by: '<S132>/Constant'
   */
  1,

  /* Computed Parameter: Constant6_Value_l
   * Referenced by: '<S133>/Constant6'
   */
  0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S3>/Out1'
   */
  0,

  /* Computed Parameter: Zero_Value
   * Referenced by: '<S3>/Zero'
   */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: Delay1_InitialCondition
   * Referenced by: '<S106>/Delay1'
   */
  0,

  /* Computed Parameter: Constant1_Value_hx
   * Referenced by: '<S106>/Constant1'
   */
  0,

  /* Computed Parameter: Merge6_InitialOutput
   * Referenced by: '<S106>/Merge6'
   */
  0,

  /* Computed Parameter: Constant_Value_ek
   * Referenced by: '<S163>/Constant'
   */
  1,

  /* Computed Parameter: Constant_Value_j0
   * Referenced by: '<S164>/Constant'
   */
  0,

  /* Computed Parameter: Constant_Value_aen
   * Referenced by: '<S173>/Constant'
   */
  1,

  /* Computed Parameter: Memory_InitialCondition_f
   * Referenced by: '<S159>/Memory'
   */
  0,

  /* Computed Parameter: Memory2_InitialCondition
   * Referenced by: '<S12>/Memory2'
   */
  0,

  /* Computed Parameter: Constant1_Value_mj
   * Referenced by: '<S12>/Constant1'
   */
  0,

  /* Computed Parameter: Memory_InitialCondition_o3
   * Referenced by: '<S12>/Memory'
   */
  0,

  /* Computed Parameter: Memory1_InitialCondition_f
   * Referenced by: '<S12>/Memory1'
   */
  0,

  /* Computed Parameter: Constant_Value_kx
   * Referenced by: '<S11>/Constant'
   */
  1,

  /* Computed Parameter: Memory_InitialCondition_a3
   * Referenced by: '<S4>/Memory'
   */
  0,

  /* Computed Parameter: Constant_Value_dc
   * Referenced by: '<Root>/Constant'
   */
  0,

  /* Computed Parameter: Constant_Value_ok
   * Referenced by: '<S1>/Constant'
   */
  0,

  /* Computed Parameter: Constant1_Value_l1
   * Referenced by: '<S1>/Constant1'
   */
  0,

  /* Computed Parameter: Constant2_Value_m
   * Referenced by: '<S1>/Constant2'
   */
  5,

  /* Computed Parameter: Constant_Value_dv
   * Referenced by: '<S18>/Constant'
   */
  0,

  /* Computed Parameter: Gain3_Gain_a
   * Referenced by: '<S12>/Gain3'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_fo
   * Referenced by: '<S12>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_n
   * Referenced by: '<S12>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain_Gain_d
   * Referenced by: '<S12>/Gain'
   */
  128U,

  /* Computed Parameter: Memory3_InitialCondition
   * Referenced by: '<S5>/Memory3'
   */
  0U,

  /* Computed Parameter: AVP_State_Value
   * Referenced by: '<S142>/AVP_State'
   */
  0U,

  /* Computed Parameter: Constant_Value_jc
   * Referenced by: '<S160>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_bv
   * Referenced by: '<S17>/Constant1'
   */
  3U,

  /* Computed Parameter: Constant7_Value_o
   * Referenced by: '<Root>/Constant7'
   */
  0U,

  /* Start of '<S15>/If Action Subsystem2' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S174>/Constant1'
     */
    0.0F,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S174>/Constant'
     */
    0
  }
  ,

  /* End of '<S15>/If Action Subsystem2' */

  /* Start of '<S15>/If Action Subsystem' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S172>/Constant1'
     */
    0.5F,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S172>/Constant'
     */
    1
  }
  ,

  /* End of '<S15>/If Action Subsystem' */

  /* Start of '<S150>/CoreSubsys' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S151>/Constant1'
     */
    3.68F,

    /* Computed Parameter: Constant1_Value_e
     * Referenced by: '<S150>/Constant1'
     */
    0.0F,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S150>/Constant2'
     */
    0.0F,

    /* Computed Parameter: Constant4_Value
     * Referenced by: '<S150>/Constant4'
     */
    0.0F,

    /* Computed Parameter: uDLookupTable_tableData
     * Referenced by: '<S152>/1-D Lookup Table'
     */
    { 0.0F, 1.0F, 4.0F, 2.0F, 2.0F, 0.0F },

    /* Computed Parameter: uDLookupTable_bp01Data
     * Referenced by: '<S152>/1-D Lookup Table'
     */
    { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F },

    /* Computed Parameter: uDLookupTable_tableData_p
     * Referenced by: '<S153>/1-D Lookup Table'
     */
    { 0.0F, 3.0F, 2.0F, 1.0F },

    /* Computed Parameter: uDLookupTable_bp01Data_l
     * Referenced by: '<S153>/1-D Lookup Table'
     */
    { 0.0F, 1.0F, 2.0F, 3.0F },

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S150>/Constant3'
     */
    0.999F
  }
  ,

  /* End of '<S150>/CoreSubsys' */

  /* Start of '<S147>/CoreSubsys' */
  {
    /* Computed Parameter: Constant11_Value
     * Referenced by: '<S149>/Constant11'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain
     * Referenced by: '<S148>/Gain'
     */
    0.5F,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S148>/Constant1'
     */
    3.68F,

    /* Computed Parameter: Constant1_Value_k
     * Referenced by: '<S147>/Constant1'
     */
    0.0F,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S147>/Constant2'
     */
    0.0F,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S147>/Constant3'
     */
    0.999F
  }
  ,

  /* End of '<S147>/CoreSubsys' */

  /* Start of '<S5>/AVP_Deactivate' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S139>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S5>/AVP_Deactivate' */

  /* Start of '<S5>/AVP_Activate' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S138>/Constant'
     */
    1.0F
  }
  ,

  /* End of '<S5>/AVP_Activate' */

  /* Start of '<S21>/If Action Subsystem3' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S101>/Constant'
     */
    40.0F
  }
  ,

  /* End of '<S21>/If Action Subsystem3' */

  /* Start of '<S21>/If Action Subsystem2' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S100>/Constant2'
     */
    0.0F,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S100>/Constant1'
     */
    30.0F,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S100>/Constant3'
     */
    3.0F,

    /* Computed Parameter: Constant4_Value
     * Referenced by: '<S100>/Constant4'
     */
    5.0F,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S100>/Constant'
     */
    40.0F
  }
  ,

  /* End of '<S21>/If Action Subsystem2' */

  /* Start of '<S21>/If Action Subsystem1' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S99>/Constant'
     */
    40.0F
  }
  ,

  /* End of '<S21>/If Action Subsystem1' */

  /* Start of '<S21>/If Action Subsystem' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S98>/Constant2'
     */
    0.0F,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S98>/Constant1'
     */
    30.0F,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S98>/Constant3'
     */
    3.0F,

    /* Computed Parameter: Constant4_Value
     * Referenced by: '<S98>/Constant4'
     */
    5.0F,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S98>/Constant'
     */
    40.0F
  }
  ,

  /* End of '<S21>/If Action Subsystem' */

  /* Start of '<S36>/If Action Subsystem2' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S88>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S36>/If Action Subsystem2' */

  /* Start of '<S44>/Leaving' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S51>/Constant'
     */
    1
  }
  ,

  /* End of '<S44>/Leaving' */

  /* Start of '<S44>/Approaching' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S49>/Constant'
     */
    0
  }
  ,

  /* End of '<S44>/Approaching' */

  /* Start of '<S30>/If Action Subsystem3' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S40>/Constant2'
     */
    2.0F
  }
  ,

  /* End of '<S30>/If Action Subsystem3' */

  /* Start of '<S30>/If Action Subsystem' */
  {
    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S38>/Constant2'
     */
    1.0F
  }
  /* End of '<S30>/If Action Subsystem' */
};

MdlrefDW_AccTarSel_T AccTarSel_MdlrefDW;

/* Block signals (default storage) */
B_AccTarSel_c_T AccTarSel_B;

/* Block states (default storage) */
DW_AccTarSel_f_T AccTarSel_DW;

/* Forward declaration for local functions */
static void AccTarSel_enter_atomic_ACTIVE(const VSI_VEHSTATE_ST
  *rtu_VSI_VehState_st);

/*
 * Output and update for action system:
 *    '<S30>/If Action Subsystem'
 *    '<S30>/If Action Subsystem3'
 */
void AccTarSel_IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1, real32_T *
  rty_Out2, P_IfActionSubsystem_AccTarSel_T *localP)
{
  /* Inport: '<S38>/In1' */
  *rty_Out1 = rtu_In1;

  /* SignalConversion: '<S38>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
   *  Constant: '<S38>/Constant2'
   */
  *rty_Out2 = localP->Constant2_Value;
}

/*
 * Output and update for action system:
 *    '<S44>/Approaching'
 *    '<S44>/Leaving'
 */
void AccTarSel_Approaching(boolean_T *rty_Out1, P_Approaching_AccTarSel_T
  *localP)
{
  /* SignalConversion: '<S49>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
   *  Constant: '<S49>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/*
 * Output and update for action system:
 *    '<S44>/Hold'
 *    '<S37>/If Action Subsystem'
 *    '<S37>/If Action Subsystem1'
 *    '<S37>/If Action Subsystem2'
 *    '<S112>/If Action Subsystem'
 *    '<S11>/If Action Subsystem'
 *    '<S11>/If Action Subsystem1'
 */
void AccTarSel_Hold(boolean_T rtu_In1, boolean_T *rty_Out1)
{
  /* Inport: '<S50>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S29>/If Action Subsystem'
 *    '<S29>/If Action Subsystem1'
 *    '<S22>/If Action Subsystem'
 *    '<S22>/If Action Subsystem1'
 *    '<S109>/If Action Subsystem'
 *    '<S110>/If Action Subsystem'
 *    '<S110>/If Action Subsystem1'
 *    '<S111>/If Action Subsystem'
 *    '<S4>/If Action Subsystem2'
 *    '<S144>/If Action Subsystem'
 *    '<S144>/If Action Subsystem1'
 */
void AccTarSel_IfActionSubsystem_b(real32_T rtu_In1, real32_T *rty_Out1)
{
  /* Inport: '<S34>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S36>/If Action Subsystem1'
 *    '<S36>/If Action Subsystem4'
 */
void AccTarSel_IfActionSubsystem1(real32_T rtu_vRelAim, real32_T rtu_vRel,
  real32_T *rty_Out1)
{
  /* Sum: '<S87>/Add' */
  *rty_Out1 = rtu_vRelAim - rtu_vRel;
}

/*
 * Output and update for action system:
 *    '<S36>/If Action Subsystem2'
 *    '<S21>/If Action Subsystem1'
 *    '<S21>/If Action Subsystem3'
 *    '<S5>/AVP_Activate'
 *    '<S5>/AVP_Deactivate'
 */
void AccTarSel_IfActionSubsystem2(real32_T *rty_Out1,
  P_IfActionSubsystem2_AccTarSe_T *localP)
{
  /* SignalConversion: '<S88>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
   *  Constant: '<S88>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/*
 * Output and update for action system:
 *    '<S21>/If Action Subsystem'
 *    '<S21>/If Action Subsystem2'
 */
void AccTarSel_IfActionSubsystem_c(const uint8_T *rtu_index, const
  FUS_OBJDATA_ST *rtu_TargetInfo, const VSI_VEHSTATE_ST *rtu_egoInfo, real32_T
  *rty_Out1, B_IfActionSubsystem_AccTarS_a_T *localB,
  P_IfActionSubsystem_AccTarS_k_T *localP)
{
  /* Selector: '<S98>/Selector1' */
  localB->ObjData = rtu_TargetInfo->objdata_st[*rtu_index];

  /* RelationalOperator: '<S98>/Relational Operator1' incorporates:
   *  Constant: '<S98>/Constant2'
   */
  localB->RelationalOperator1 = (localB->ObjData.dx >= localP->Constant2_Value);

  /* RelationalOperator: '<S98>/Relational Operator' incorporates:
   *  Constant: '<S98>/Constant1'
   */
  localB->RelationalOperator = (localB->ObjData.dx <= localP->Constant1_Value);

  /* RelationalOperator: '<S98>/Relational Operator2' incorporates:
   *  Constant: '<S98>/Constant3'
   */
  localB->RelationalOperator2 = (localB->ObjData.Type == localP->Constant3_Value);

  /* RelationalOperator: '<S98>/Relational Operator3' incorporates:
   *  Constant: '<S98>/Constant4'
   */
  localB->RelationalOperator3 = (localB->ObjData.Type == localP->Constant4_Value);

  /* Logic: '<S98>/OR' */
  localB->OR = (localB->RelationalOperator2 || localB->RelationalOperator3);

  /* Logic: '<S98>/AND' */
  localB->AND = (localB->RelationalOperator1 && localB->RelationalOperator &&
                 localB->ObjData.Valid && localB->OR);

  /* Sum: '<S98>/Add' */
  localB->Add = rtu_egoInfo->vRef + localB->ObjData.vx;

  /* Switch: '<S98>/Switch' incorporates:
   *  Constant: '<S98>/Constant'
   */
  if (localB->AND) {
    *rty_Out1 = localB->Add;
  } else {
    *rty_Out1 = localP->Constant_Value;
  }

  /* End of Switch: '<S98>/Switch' */
}

/*
 * Output and update for action system:
 *    '<S15>/If Action Subsystem'
 *    '<S15>/If Action Subsystem2'
 */
void AccTarSel_IfActionSubsystem_a(boolean_T *rty_CancelFlag, real32_T
  *rty_HoldTime, P_IfActionSubsystem_AccTarS_g_T *localP)
{
  /* SignalConversion: '<S172>/OutportBuffer_InsertedFor_CancelFlag_at_inport_0' incorporates:
   *  Constant: '<S172>/Constant'
   */
  *rty_CancelFlag = localP->Constant_Value;

  /* SignalConversion: '<S172>/OutportBuffer_InsertedFor_HoldTime_at_inport_0' incorporates:
   *  Constant: '<S172>/Constant1'
   */
  *rty_HoldTime = localP->Constant1_Value;
}

/* Function for Chart: '<Root>/ACC_State_Machine1' */
static void AccTarSel_enter_atomic_ACTIVE(const VSI_VEHSTATE_ST
  *rtu_VSI_VehState_st)
{
  real32_T minval;
  boolean_T p;
  if (AccTarSel_B.BusCreator_m.ACC_SetSw &&
      (!AccTarSel_B.BusCreator_m.ACC_SetSwK1)) {
    /* Chart: '<Root>/ACC_State_Machine1' */
    AccTarSel_B.AST_Info_st.vSet = rt_roundf_snf(rtu_VSI_VehState_st->vRef *
      1.05F * 3.6F) / 1.05F / 3.6F;
  }

  p = (rtIsNaNF(AccTarSel_B.AST_Info_st.vSet) || (AccTarSel_B.AST_Info_st.vSet >
        26.455026455026456));
  if (p) {
    minval = 26.4550266F;
  } else {
    minval = AccTarSel_B.AST_Info_st.vSet;
  }

  AccTarSel_B.AST_Info_st.vSet = minval;
  p = (rtIsNaNF(AccTarSel_B.AST_Info_st.vSet) || (AccTarSel_B.AST_Info_st.vSet <
        7.9365079365079358));
  if (p) {
    minval = 7.9365077F;
  } else {
    minval = AccTarSel_B.AST_Info_st.vSet;
  }

  AccTarSel_B.AST_Info_st.vSet = minval;
}

/* System initialize for referenced model: 'AccTarSel' */
void AccTarSel_Init(void)
{
  int32_T i;

  /* InitializeConditions for Memory: '<S159>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_l = AccTarSel_P_g.Memory_InitialCondition_f;

  /* InitializeConditions for Memory: '<S5>/Memory3' */
  AccTarSel_DW.Memory3_PreviousInput = AccTarSel_P_g.Memory3_InitialCondition;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_b = AccTarSel_P_g.Memory_InitialCondition_o;

  /* InitializeConditions for Memory: '<S12>/Memory2' */
  AccTarSel_DW.Memory2_PreviousInput = AccTarSel_P_g.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<S12>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_f = AccTarSel_P_g.Memory_InitialCondition_o3;

  /* InitializeConditions for Memory: '<S12>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_bw =
    AccTarSel_P_g.Memory1_InitialCondition_f;

  /* InitializeConditions for Memory: '<Root>/Memory' */
  AccTarSel_DW.Memory_PreviousInput = AccTarSel_P_g.Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S144>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_g = AccTarSel_P_g.Memory_InitialCondition_g;

  /* InitializeConditions for Memory: '<S13>/Memory' */
  AccTarSel_DW.Memory_2_PreviousInput = AccTarSel_P_g.Memory_2_InitialCondition;
  AccTarSel_DW.Memory_1_PreviousInput = AccTarSel_P_g.Memory_1_InitialCondition;

  /* InitializeConditions for Memory: '<S143>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_e = AccTarSel_P_g.Memory_InitialCondition_i;

  /* InitializeConditions for Memory: '<S143>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_f =
    AccTarSel_P_g.Memory1_InitialCondition_l;

  /* InitializeConditions for Memory: '<S22>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_i = AccTarSel_P_g.Memory_InitialCondition_he;

  /* InitializeConditions for Memory: '<S1>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_a = AccTarSel_P_g.Memory_InitialCondition_a;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_lc[0] =
    AccTarSel_P_g.Memory_InitialCondition_a3;
  AccTarSel_DW.Memory_PreviousInput_lc[1] =
    AccTarSel_P_g.Memory_InitialCondition_a3;

  /* InitializeConditions for Memory: '<S4>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_j =
    AccTarSel_P_g.Memory1_InitialCondition_p;
  for (i = 0; i < 6; i++) {
    /* InitializeConditions for Memory: '<Root>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput_b[i] =
      AccTarSel_P_g.Memory1_InitialCondition_e;

    /* InitializeConditions for Memory: '<S1>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput[i] =
      AccTarSel_P_g.Memory1_InitialCondition;
  }

  /* InitializeConditions for Memory: '<S15>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_h = AccTarSel_P_g.Memory_InitialCondition_m;

  /* InitializeConditions for Memory: '<S15>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_k =
    AccTarSel_P_g.Memory1_InitialCondition_o;

  /* SystemInitialize for Iterator SubSystem: '<Root>/ACC_Target_Selection' */
  /* InitializeConditions for Delay: '<S106>/Delay1' */
  AccTarSel_DW.Delay1_DSTATE = AccTarSel_P_g.Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S106>/Delay' */
  AccTarSel_DW.Delay_DSTATE = AccTarSel_P_g.Delay_InitialCondition;

  /* SystemInitialize for Atomic SubSystem: '<S105>/ValidObjCalc' */
  /* SystemInitialize for IfAction SubSystem: '<S108>/Subsystem' */
  /* SystemInitialize for IfAction SubSystem: '<S114>/Subsystem' */
  /* SystemInitialize for Merge: '<S116>/Merge' */
  AccTarSel_B.probCutIn = AccTarSel_P_g.Merge_InitialOutput;

  /* End of SystemInitialize for SubSystem: '<S114>/Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S108>/Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S105>/ValidObjCalc' */

  /* SystemInitialize for Merge: '<S106>/Merge2' */
  AccTarSel_B.vx_o = AccTarSel_P_g.Merge2_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge4' */
  AccTarSel_B.ax_a = AccTarSel_P_g.Merge4_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge6' */
  AccTarSel_B.Valid = AccTarSel_P_g.Merge6_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge5' */
  AccTarSel_B.Index = AccTarSel_P_g.Merge5_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge' */
  AccTarSel_B.dx_i = AccTarSel_P_g.Merge_InitialOutput_b;

  /* SystemInitialize for Merge: '<S106>/Merge1' */
  AccTarSel_B.dy = AccTarSel_P_g.Merge1_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge3' */
  AccTarSel_B.vy = AccTarSel_P_g.Merge3_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge7' */
  AccTarSel_B.Type = AccTarSel_P_g.Merge7_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge8' */
  AccTarSel_B.MotionSts = AccTarSel_P_g.Merge8_InitialOutput;

  /* SystemInitialize for Outport: '<S3>/Out1' */
  for (i = 0; i < 40; i++) {
    AccTarSel_B.Assignment[i] = AccTarSel_P_g.Out1_Y0;
  }

  /* End of SystemInitialize for Outport: '<S3>/Out1' */

  /* SystemInitialize for Outport: '<S3>/ObjInfo' */
  for (i = 0; i < 40; i++) {
    AccTarSel_B.Assignment1_a[i] = AccTarSel_P_g.ObjInfo_Y0;
  }

  /* End of SystemInitialize for Outport: '<S3>/ObjInfo' */

  /* SystemInitialize for Outport: '<S3>/POInfo' */
  AccTarSel_B.BusCreator_o = AccTarSel_P_g.POInfo_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/ACC_Target_Selection' */

  /* SystemInitialize for IfAction SubSystem: '<S13>/preFilt' */
  /* SystemInitialize for Merge: '<S162>/Merge' */
  AccTarSel_B.Merge_f = AccTarSel_P_g.Merge_InitialOutput_i;

  /* SystemInitialize for Merge: '<S162>/Merge1' */
  AccTarSel_B.Merge1_f = AccTarSel_P_g.Merge1_InitialOutput_h;

  /* End of SystemInitialize for SubSystem: '<S13>/preFilt' */

  /* SystemInitialize for Chart: '<Root>/ACC_State_Machine1' */
  AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
  AccTarSel_DW.is_active_c2_AccTarSel = 0U;
  AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Merge: '<S4>/Merge' */
  AccTarSel_B.Merge_o = AccTarSel_P_g.Merge_InitialOutput_d;

  /* SystemInitialize for Iterator SubSystem: '<S1>/FollowObjCtrl' */
  /* SystemInitialize for Outport: '<S20>/FOCInfo' */
  for (i = 0; i < 6; i++) {
    AccTarSel_B.Assignment1_i[i] = AccTarSel_P_g.FOCInfo_Y0;
  }

  /* End of SystemInitialize for Outport: '<S20>/FOCInfo' */
  /* End of SystemInitialize for SubSystem: '<S1>/FollowObjCtrl' */

  /* SystemInitialize for Iterator SubSystem: '<S26>/For Iterator Subsystem' */
  for (i = 0; i < 6; i++) {
    /* SystemInitialize for Outport: '<S27>/aFOCArray' */
    AccTarSel_B.Assignment1_a3[i] = AccTarSel_P_g.aFOCArray_Y0;

    /* SystemInitialize for Outport: '<S27>/DecToStopArray' */
    AccTarSel_B.Assignment2_n[i] = AccTarSel_P_g.DecToStopArray_Y0;
  }

  /* End of SystemInitialize for SubSystem: '<S26>/For Iterator Subsystem' */

  /* SystemInitialize for Iterator SubSystem: '<S17>/Subsystem' */
  /* InitializeConditions for Memory: '<S25>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_gs = AccTarSel_P_g.Memory_InitialCondition_h;

  /* InitializeConditions for Memory: '<S25>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_h =
    AccTarSel_P_g.Memory1_InitialCondition_d;

  /* SystemInitialize for Outport: '<S25>/aMin' */
  AccTarSel_B.Switch1_e = AccTarSel_P_g.aMin_Y0;

  /* SystemInitialize for Outport: '<S25>/CMDType' */
  AccTarSel_B.Switch2_j = AccTarSel_P_g.CMDType_Y0;

  /* End of SystemInitialize for SubSystem: '<S17>/Subsystem' */
}

/* System reset for referenced model: 'AccTarSel' */
void AccTarSel_Reset(void)
{
  int32_T i;

  /* InitializeConditions for Memory: '<S159>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_l = AccTarSel_P_g.Memory_InitialCondition_f;

  /* InitializeConditions for Memory: '<S5>/Memory3' */
  AccTarSel_DW.Memory3_PreviousInput = AccTarSel_P_g.Memory3_InitialCondition;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_b = AccTarSel_P_g.Memory_InitialCondition_o;

  /* InitializeConditions for Memory: '<S12>/Memory2' */
  AccTarSel_DW.Memory2_PreviousInput = AccTarSel_P_g.Memory2_InitialCondition;

  /* InitializeConditions for Memory: '<S12>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_f = AccTarSel_P_g.Memory_InitialCondition_o3;

  /* InitializeConditions for Memory: '<S12>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_bw =
    AccTarSel_P_g.Memory1_InitialCondition_f;

  /* InitializeConditions for Memory: '<Root>/Memory' */
  AccTarSel_DW.Memory_PreviousInput = AccTarSel_P_g.Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S144>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_g = AccTarSel_P_g.Memory_InitialCondition_g;

  /* InitializeConditions for Memory: '<S13>/Memory' */
  AccTarSel_DW.Memory_2_PreviousInput = AccTarSel_P_g.Memory_2_InitialCondition;
  AccTarSel_DW.Memory_1_PreviousInput = AccTarSel_P_g.Memory_1_InitialCondition;

  /* InitializeConditions for Memory: '<S143>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_e = AccTarSel_P_g.Memory_InitialCondition_i;

  /* InitializeConditions for Memory: '<S143>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_f =
    AccTarSel_P_g.Memory1_InitialCondition_l;

  /* InitializeConditions for Memory: '<S22>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_i = AccTarSel_P_g.Memory_InitialCondition_he;

  /* InitializeConditions for Memory: '<S1>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_a = AccTarSel_P_g.Memory_InitialCondition_a;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_lc[0] =
    AccTarSel_P_g.Memory_InitialCondition_a3;
  AccTarSel_DW.Memory_PreviousInput_lc[1] =
    AccTarSel_P_g.Memory_InitialCondition_a3;

  /* InitializeConditions for Memory: '<S4>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_j =
    AccTarSel_P_g.Memory1_InitialCondition_p;
  for (i = 0; i < 6; i++) {
    /* InitializeConditions for Memory: '<Root>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput_b[i] =
      AccTarSel_P_g.Memory1_InitialCondition_e;

    /* InitializeConditions for Memory: '<S1>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput[i] =
      AccTarSel_P_g.Memory1_InitialCondition;
  }

  /* InitializeConditions for Memory: '<S15>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_h = AccTarSel_P_g.Memory_InitialCondition_m;

  /* InitializeConditions for Memory: '<S15>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_k =
    AccTarSel_P_g.Memory1_InitialCondition_o;

  /* SystemReset for Chart: '<Root>/ACC_State_Machine1' */
  AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
  AccTarSel_DW.is_active_c2_AccTarSel = 0U;
  AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_NO_ACTIVE_CHILD;
}

/* Start for referenced model: 'AccTarSel' */
void AccTarSel_Start(void)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_g;
  static const OBJDATA_ST tmp = { false,/* Hist */
    false,                             /* Valid */
    0.0F,                              /* dx */
    0.0F,                              /* dvarX */
    0.0F,                              /* dy */
    0.0F,                              /* dvarY */
    0.0F,                              /* vx */
    0.0F,                              /* vy */
    0.0F,                              /* ax */
    0.0F,                              /* ay */
    0.0F,                              /* MotionSts */
    0.0F,                              /* Type */
    0.0F,                              /* probExist */
    0.0F                               /* ID */
  };

  /* Start for Iterator SubSystem: '<S8>/For Each Subsystem' */
  for (ForEach_itr = 0; ForEach_itr < 40; ForEach_itr++) {
    AccTarSel_B.CoreSubsys_p[ForEach_itr].DataTypeConversion9 = false;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].Valid = false;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].Add = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].dy = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].vx = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].vy = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].ax = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].uDLookupTable = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].MotionSts = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].uDLookupTable_o = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].Type = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].ID = 0.0F;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator = tmp;
  }

  /* End of Start for SubSystem: '<S8>/For Each Subsystem' */

  /* Start for Iterator SubSystem: '<S7>/For Each Subsystem' */
  for (ForEach_itr_g = 0; ForEach_itr_g < 40; ForEach_itr_g++) {
    AccTarSel_B.CoreSubsys[ForEach_itr_g].vx = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].ax = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Hist = false;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Valid = false;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Gain = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].dx = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].dy = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].vy = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].ay = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].MotionSts = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Type = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].ID = 0.0F;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator = tmp;
  }

  /* End of Start for SubSystem: '<S7>/For Each Subsystem' */
}

/* Outputs for referenced model: 'AccTarSel' */
void AccTarSel(const COM_VEHBUS_ST *rtu_CANInput, const FUS_OBJ_OUTPUT_ST
               *rtu_ObjList, const VSI_VEHSTATE_ST *rtu_VSI_VehState_st, const
               SYS_INFO_ST *rtu_SYS_Info_st, const Radar410_Info_ST
               *rtu_ObjRadarList, const VLC_LGTCMD_ST *rtu_VLC_Cmd_K1, const
               real32_T *rtu_TJA_Active, const ZOP2ACC *rtu_ZOP2ACC, const
               uint8_T *rtu_ACC_HMI_Req_TimeGapSet, const uint8_T
               *rtu_ACC_HMI_Req_ACC_Enable, const real32_T
               *rtu_ACC_HMI_Req_vSetAccSpd, const AVP_OUTPUT_ST *rtu_AVP_Info,
               const HWA_TARGETOBJECT_OUTPUT_ST *rtu_AdjacentLaneObjInfo,
               ACC_LGTCTRL_ST *rty_ACC_LgtCtrl_st, ATS_PO_ST *rty_ATS_Po_st,
               ACC_Status_ST *rty_ACC2ZOP)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_g;
  uint32_T bpIdx;
  int32_T i_cnt;
  boolean_T tmp;
  real32_T rtb_ImpSel_InsertedFor_In1_a__0;
  real32_T rtb_ImpSel_InsertedFor_In1_a__1;
  real32_T rtb_ImpSel_InsertedFor_In1_a__2;
  real32_T rtb_ImpSel_InsertedFor_In1_at_0;
  real32_T rtb_ImpSel_InsertedFor_In1_at_1;
  real32_T rtb_ImpSel_InsertedFor_In1_at_2;
  real32_T rtb_ImpSel_InsertedFor_In1_at_3;
  uint8_T rtb_ImpSel_InsertedFor_In1_at_4;
  uint8_T rtb_ImpSel_InsertedFor_In1_at_5;
  uint8_T rtb_ImpSel_InsertedFor_In1_at_6;
  uint8_T rtb_ImpSel_InsertedFor_In1_at_7;
  uint8_T rtb_ImpSel_InsertedFor_In1_at_8;
  real32_T rtb_ImpSel_InsertedFor_In1_at_9;
  int32_T i;
  real32_T u0;
  real32_T u1;

  /* RelationalOperator: '<S1>/Relational Operator' incorporates:
   *  Constant: '<S1>/Constant'
   */
  AccTarSel_B.RelationalOperator = (rtu_ZOP2ACC->case_num !=
    AccTarSel_P_g.Constant_Value_ok);

  /* RelationalOperator: '<S1>/Relational Operator1' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  AccTarSel_B.RelationalOperator1 = (rtu_ZOP2ACC->light_des_spd ==
    AccTarSel_P_g.Constant1_Value_l1);

  /* RelationalOperator: '<S1>/Relational Operator2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  AccTarSel_B.RelationalOperator2 = (rtu_ZOP2ACC->light_dist <=
    AccTarSel_P_g.Constant2_Value_m);

  /* Logic: '<S1>/AND' */
  AccTarSel_B.AND = (AccTarSel_B.RelationalOperator &&
                     AccTarSel_B.RelationalOperator1 &&
                     AccTarSel_B.RelationalOperator2);

  /* Concatenate: '<S8>/Vector Concatenate' */
  AccTarSel_B.VectorConcatenate[0] = rtu_ObjRadarList->x50_20_Obj_00;
  AccTarSel_B.VectorConcatenate[1] = rtu_ObjRadarList->x51_21_Obj_01;
  AccTarSel_B.VectorConcatenate[2] = rtu_ObjRadarList->x52_22_Obj_02;
  AccTarSel_B.VectorConcatenate[3] = rtu_ObjRadarList->x53_23_Obj_03;
  AccTarSel_B.VectorConcatenate[4] = rtu_ObjRadarList->x54_24_Obj_04;
  AccTarSel_B.VectorConcatenate[5] = rtu_ObjRadarList->x55_25_Obj_05;
  AccTarSel_B.VectorConcatenate[6] = rtu_ObjRadarList->x56_26_Obj_06;
  AccTarSel_B.VectorConcatenate[7] = rtu_ObjRadarList->x57_27_Obj_07;
  AccTarSel_B.VectorConcatenate[8] = rtu_ObjRadarList->x58_28_Obj_08;
  AccTarSel_B.VectorConcatenate[9] = rtu_ObjRadarList->x59_29_Obj_09;
  AccTarSel_B.VectorConcatenate[10] = rtu_ObjRadarList->x5A_2A_Obj_10;
  AccTarSel_B.VectorConcatenate[11] = rtu_ObjRadarList->x5B_2B_Obj_11;
  AccTarSel_B.VectorConcatenate[12] = rtu_ObjRadarList->x5C_2C_Obj_12;
  AccTarSel_B.VectorConcatenate[13] = rtu_ObjRadarList->x5D_2D_Obj_13;
  AccTarSel_B.VectorConcatenate[14] = rtu_ObjRadarList->x5E_2E_Obj_14;
  AccTarSel_B.VectorConcatenate[15] = rtu_ObjRadarList->x5F_2F_Obj_15;
  AccTarSel_B.VectorConcatenate[16] = rtu_ObjRadarList->x60_30_Obj_16;
  AccTarSel_B.VectorConcatenate[17] = rtu_ObjRadarList->x61_31_Obj_17;
  AccTarSel_B.VectorConcatenate[18] = rtu_ObjRadarList->x62_32_Obj_18;
  AccTarSel_B.VectorConcatenate[19] = rtu_ObjRadarList->x63_33_Obj_19;
  AccTarSel_B.VectorConcatenate[20] = rtu_ObjRadarList->x64_34_Obj_20;
  AccTarSel_B.VectorConcatenate[21] = rtu_ObjRadarList->x65_35_Obj_21;
  AccTarSel_B.VectorConcatenate[22] = rtu_ObjRadarList->x66_36_Obj_22;
  AccTarSel_B.VectorConcatenate[23] = rtu_ObjRadarList->x67_37_Obj_23;
  AccTarSel_B.VectorConcatenate[24] = rtu_ObjRadarList->x68_38_Obj_24;
  AccTarSel_B.VectorConcatenate[25] = rtu_ObjRadarList->x69_39_Obj_25;
  AccTarSel_B.VectorConcatenate[26] = rtu_ObjRadarList->x6A_3A_Obj_26;
  AccTarSel_B.VectorConcatenate[27] = rtu_ObjRadarList->x6B_3B_Obj_27;
  AccTarSel_B.VectorConcatenate[28] = rtu_ObjRadarList->x6C_3C_Obj_28;
  AccTarSel_B.VectorConcatenate[29] = rtu_ObjRadarList->x6D_3D_Obj_29;
  AccTarSel_B.VectorConcatenate[30] = rtu_ObjRadarList->x6E_3E_Obj_30;
  AccTarSel_B.VectorConcatenate[31] = rtu_ObjRadarList->x6F_3F_Obj_31;
  AccTarSel_B.VectorConcatenate[32] = rtu_ObjRadarList->x70_40_Obj_32;
  AccTarSel_B.VectorConcatenate[33] = rtu_ObjRadarList->x71_41_Obj_33;
  AccTarSel_B.VectorConcatenate[34] = rtu_ObjRadarList->x72_42_Obj_34;
  AccTarSel_B.VectorConcatenate[35] = rtu_ObjRadarList->x73_43_Obj_35;
  AccTarSel_B.VectorConcatenate[36] = rtu_ObjRadarList->x74_44_Obj_36;
  AccTarSel_B.VectorConcatenate[37] = rtu_ObjRadarList->x75_45_Obj_37;
  AccTarSel_B.VectorConcatenate[38] = rtu_ObjRadarList->x76_46_Obj_38;
  AccTarSel_B.VectorConcatenate[39] = rtu_ObjRadarList->x77_47_Obj_39;

  /* Outputs for Iterator SubSystem: '<S8>/For Each Subsystem' incorporates:
   *  ForEach: '<S150>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 40; ForEach_itr++) {
    /* ForEachSliceSelector: '<S150>/ImpSel_InsertedFor_In1_at_outport_0' */
    u1 = AccTarSel_B.VectorConcatenate[ForEach_itr].Obj_XAccRel;
    u0 = AccTarSel_B.VectorConcatenate[ForEach_itr].Obj_MotionPattern;
    rtb_ImpSel_InsertedFor_In1_at_0 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_ValidFlag;
    rtb_ImpSel_InsertedFor_In1_at_1 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_UpdateFlag;
    rtb_ImpSel_InsertedFor_In1_at_2 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_ID;
    rtb_ImpSel_InsertedFor_In1_at_3 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_YVelRel;
    rtb_ImpSel_InsertedFor_In1_at_9 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_Type;
    rtb_ImpSel_InsertedFor_In1_a__0 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_XPos;
    rtb_ImpSel_InsertedFor_In1_a__1 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_YPos;
    rtb_ImpSel_InsertedFor_In1_a__2 = AccTarSel_B.VectorConcatenate[ForEach_itr]
      .Obj_XVelRel;

    /* DataTypeConversion: '<S150>/Data Type Conversion9' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].DataTypeConversion9 =
      (rtb_ImpSel_InsertedFor_In1_at_1 != 0.0F);

    /* DataTypeConversion: '<S150>/Data Type Conversion' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].Valid =
      (rtb_ImpSel_InsertedFor_In1_at_0 != 0.0F);

    /* Sum: '<S151>/Add' incorporates:
     *  Constant: '<S151>/Constant1'
     */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].Add = rtb_ImpSel_InsertedFor_In1_a__0
      - AccTarSel_P_g.CoreSubsys_p.Constant1_Value;

    /* DataTypeConversion: '<S150>/Data Type Conversion2' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].dy = rtb_ImpSel_InsertedFor_In1_a__1;

    /* DataTypeConversion: '<S150>/Data Type Conversion1' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].vx = rtb_ImpSel_InsertedFor_In1_a__2;

    /* DataTypeConversion: '<S150>/Data Type Conversion3' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].vy = rtb_ImpSel_InsertedFor_In1_at_3;

    /* DataTypeConversion: '<S150>/Data Type Conversion4' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].ax = u1;

    /* Lookup_n-D: '<S152>/1-D Lookup Table' */
    bpIdx = plook_u32f_lincka(u0,
      AccTarSel_P_g.CoreSubsys_p.uDLookupTable_bp01Data, 5U);
    AccTarSel_B.CoreSubsys_p[ForEach_itr].uDLookupTable =
      AccTarSel_P_g.CoreSubsys_p.uDLookupTable_tableData[bpIdx];

    /* DataTypeConversion: '<S150>/Data Type Conversion6' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].MotionSts =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].uDLookupTable;

    /* Lookup_n-D: '<S153>/1-D Lookup Table' */
    bpIdx = plook_u32f_lincka(rtb_ImpSel_InsertedFor_In1_at_9,
      AccTarSel_P_g.CoreSubsys_p.uDLookupTable_bp01Data_l, 3U);
    AccTarSel_B.CoreSubsys_p[ForEach_itr].uDLookupTable_o =
      AccTarSel_P_g.CoreSubsys_p.uDLookupTable_tableData_p[bpIdx];

    /* DataTypeConversion: '<S150>/Data Type Conversion7' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].Type =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].uDLookupTable_o;

    /* DataTypeConversion: '<S150>/Data Type Conversion8' */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].ID = rtb_ImpSel_InsertedFor_In1_at_2;

    /* BusCreator: '<S150>/Bus Creator' incorporates:
     *  Constant: '<S150>/Constant1'
     *  Constant: '<S150>/Constant2'
     *  Constant: '<S150>/Constant3'
     *  Constant: '<S150>/Constant4'
     */
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.Hist =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].DataTypeConversion9;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.Valid =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].Valid;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.dx =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].Add;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.dvarX =
      AccTarSel_P_g.CoreSubsys_p.Constant1_Value_e;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.dy =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].dy;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.dvarY =
      AccTarSel_P_g.CoreSubsys_p.Constant2_Value;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.vx =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].vx;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.vy =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].vy;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.ax =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].ax;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.ay =
      AccTarSel_P_g.CoreSubsys_p.Constant4_Value;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.MotionSts =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].MotionSts;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.Type =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].Type;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.probExist =
      AccTarSel_P_g.CoreSubsys_p.Constant3_Value;
    AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator.ID =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].ID;

    /* ForEachSliceAssignment: '<S150>/ImpAsg_InsertedFor_Out1_at_inport_0' */
    AccTarSel_B.BusCreator.objdata_st[ForEach_itr] =
      AccTarSel_B.CoreSubsys_p[ForEach_itr].BusCreator;
  }

  /* End of Outputs for SubSystem: '<S8>/For Each Subsystem' */

  /* BusCreator: '<S8>/Bus Creator' incorporates:
   *  Constant: '<S8>/Constant'
   */
  AccTarSel_B.BusCreator.timeStamp = AccTarSel_P_g.Constant_Value;

  /* Outputs for Iterator SubSystem: '<S7>/For Each Subsystem' incorporates:
   *  ForEach: '<S147>/For Each'
   */
  for (ForEach_itr_g = 0; ForEach_itr_g < 40; ForEach_itr_g++) {
    /* ForEachSliceSelector: '<S147>/ImpSel_InsertedFor_In1_at_outport_0' */
    u1 = rtu_ObjList->objects[ForEach_itr_g].obj_estimate.longPosition;
    u0 = rtu_ObjList->objects[ForEach_itr_g].obj_estimate.latPosition;
    rtb_ImpSel_InsertedFor_In1_at_0 = rtu_ObjList->objects[ForEach_itr_g].
      obj_estimate.latRelativeVelocity;
    rtb_ImpSel_InsertedFor_In1_at_1 = rtu_ObjList->objects[ForEach_itr_g].
      obj_estimate.longAbsoluteVelocity;
    rtb_ImpSel_InsertedFor_In1_at_2 = rtu_ObjList->objects[ForEach_itr_g].
      obj_estimate.latRelativeAcceleration;
    rtb_ImpSel_InsertedFor_In1_at_3 = rtu_ObjList->objects[ForEach_itr_g].
      obj_estimate.longAbsoluteAcceleration;
    rtb_ImpSel_InsertedFor_In1_at_4 = rtu_ObjList->objects[ForEach_itr_g].
      obj_property.id;
    rtb_ImpSel_InsertedFor_In1_at_5 = rtu_ObjList->objects[ForEach_itr_g].
      obj_property.trackStatus;
    rtb_ImpSel_InsertedFor_In1_at_6 = rtu_ObjList->objects[ForEach_itr_g].
      obj_information.valid;
    rtb_ImpSel_InsertedFor_In1_at_7 = rtu_ObjList->objects[ForEach_itr_g].
      obj_information.type;
    rtb_ImpSel_InsertedFor_In1_at_8 = rtu_ObjList->objects[ForEach_itr_g].
      obj_information.motionPatternCurrent;
    rtb_ImpSel_InsertedFor_In1_at_9 = rtu_ObjList->objects[ForEach_itr_g].
      obj_information.length;

    /* Sum: '<S147>/Add' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].vx = rtb_ImpSel_InsertedFor_In1_at_1 -
      rtu_VSI_VehState_st->vRef;

    /* Sum: '<S147>/Add1' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].ax = rtb_ImpSel_InsertedFor_In1_at_3 -
      rtu_VSI_VehState_st->aRef;

    /* RelationalOperator: '<S149>/Relational Operator' incorporates:
     *  Constant: '<S149>/Constant11'
     */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Hist =
      (AccTarSel_P_g.CoreSubsys.Constant11_Value !=
       rtb_ImpSel_InsertedFor_In1_at_5);

    /* DataTypeConversion: '<S147>/Data Type Conversion' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Valid =
      (rtb_ImpSel_InsertedFor_In1_at_6 != 0);

    /* Gain: '<S148>/Gain' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Gain =
      AccTarSel_P_g.CoreSubsys.Gain_Gain * rtb_ImpSel_InsertedFor_In1_at_9;

    /* Sum: '<S148>/Add' incorporates:
     *  Constant: '<S148>/Constant1'
     */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].dx = (u1 -
      AccTarSel_B.CoreSubsys[ForEach_itr_g].Gain) -
      AccTarSel_P_g.CoreSubsys.Constant1_Value;

    /* DataTypeConversion: '<S147>/Data Type Conversion2' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].dy = u0;

    /* DataTypeConversion: '<S147>/Data Type Conversion3' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].vy = rtb_ImpSel_InsertedFor_In1_at_0;

    /* DataTypeConversion: '<S147>/Data Type Conversion5' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].ay = rtb_ImpSel_InsertedFor_In1_at_2;

    /* DataTypeConversion: '<S147>/Data Type Conversion6' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].MotionSts =
      rtb_ImpSel_InsertedFor_In1_at_8;

    /* DataTypeConversion: '<S147>/Data Type Conversion7' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].Type = rtb_ImpSel_InsertedFor_In1_at_7;

    /* DataTypeConversion: '<S147>/Data Type Conversion8' */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].ID = rtb_ImpSel_InsertedFor_In1_at_4;

    /* BusCreator: '<S147>/Bus Creator' incorporates:
     *  Constant: '<S147>/Constant1'
     *  Constant: '<S147>/Constant2'
     *  Constant: '<S147>/Constant3'
     */
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.Hist =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].Hist;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.Valid =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].Valid;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.dx =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].dx;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.dvarX =
      AccTarSel_P_g.CoreSubsys.Constant1_Value_k;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.dy =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].dy;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.dvarY =
      AccTarSel_P_g.CoreSubsys.Constant2_Value;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.vx =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].vx;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.vy =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].vy;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.ax =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].ax;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.ay =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].ay;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.MotionSts =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].MotionSts;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.Type =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].Type;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.probExist =
      AccTarSel_P_g.CoreSubsys.Constant3_Value;
    AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator.ID =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].ID;

    /* ForEachSliceAssignment: '<S147>/ImpAsg_InsertedFor_Out1_at_inport_0' */
    AccTarSel_B.BusCreator_n.objdata_st[ForEach_itr_g] =
      AccTarSel_B.CoreSubsys[ForEach_itr_g].BusCreator;
  }

  /* End of Outputs for SubSystem: '<S7>/For Each Subsystem' */

  /* BusCreator: '<S7>/Bus Creator' incorporates:
   *  Constant: '<S7>/Constant'
   */
  AccTarSel_B.BusCreator_n.timeStamp = AccTarSel_P_g.Constant_Value_j;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/ObjSource'
   */
  if (AccTarSel_P_g.ObjSource_Value > AccTarSel_P_g.Switch_Threshold_l) {
    AccTarSel_B.Switch = AccTarSel_B.BusCreator;
  } else {
    AccTarSel_B.Switch = AccTarSel_B.BusCreator_n;
  }

  /* End of Switch: '<Root>/Switch' */

  /* If: '<S21>/If' */
  if (rtu_AdjacentLaneObjInfo->L_NEIGHBORLANE_TAROBJ_2_ST.Index_un8 < 40) {
    /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    AccTarSel_IfActionSubsystem_c
      (&rtu_AdjacentLaneObjInfo->L_NEIGHBORLANE_TAROBJ_2_ST.Index_un8,
       &AccTarSel_B.Switch, rtu_VSI_VehState_st, &AccTarSel_B.Merge_m,
       &AccTarSel_B.IfActionSubsystem, &AccTarSel_P_g.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S21>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    AccTarSel_IfActionSubsystem2(&AccTarSel_B.Merge_m,
      &AccTarSel_P_g.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S21>/If Action Subsystem1' */
  }

  /* End of If: '<S21>/If' */

  /* If: '<S21>/If1' */
  if (rtu_AdjacentLaneObjInfo->R_NEIGHBORLANE_TAROBJ_2_ST.Index_un8 < 40) {
    /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    AccTarSel_IfActionSubsystem_c
      (&rtu_AdjacentLaneObjInfo->R_NEIGHBORLANE_TAROBJ_2_ST.Index_un8,
       &AccTarSel_B.Switch, rtu_VSI_VehState_st, &AccTarSel_B.Merge1,
       &AccTarSel_B.IfActionSubsystem2, &AccTarSel_P_g.IfActionSubsystem2);

    /* End of Outputs for SubSystem: '<S21>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S21>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    AccTarSel_IfActionSubsystem2(&AccTarSel_B.Merge1,
      &AccTarSel_P_g.IfActionSubsystem3);

    /* End of Outputs for SubSystem: '<S21>/If Action Subsystem3' */
  }

  /* End of If: '<S21>/If1' */

  /* MinMax: '<S21>/Min' */
  u0 = AccTarSel_B.Merge_m;
  u1 = AccTarSel_B.Merge1;
  if ((u0 < u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Min = u1;

  /* End of MinMax: '<S21>/Min' */

  /* Gain: '<S21>/Gain' incorporates:
   *  Constant: '<S21>/Constant'
   */
  AccTarSel_B.Gain = AccTarSel_P_g.Gain_Gain_o * AccTarSel_P_g.Constant_Value_cx;

  /* Sum: '<S21>/Add' */
  AccTarSel_B.Add = AccTarSel_B.Min + AccTarSel_B.Gain;

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  AccTarSel_B.BusCreator_m.BrakePedalApply = rtu_CANInput->x1B6.BrkPdlAppd;

  /* DataTypeConversion: '<S12>/Data Type Conversion1' */
  AccTarSel_B.DataTypeConversion1_l = rtu_CANInput->xFB.AccelOvrd;

  /* Logic: '<S159>/AND4' */
  AccTarSel_B.AND4 = !AccTarSel_B.DataTypeConversion1_l;

  /* DataTypeConversion: '<S12>/Data Type Conversion11' */
  AccTarSel_B.DataTypeConversion11 = rtu_CANInput->xAF.EPTAccelActuPos;

  /* RelationalOperator: '<S159>/Relational Operator' incorporates:
   *  Constant: '<S159>/Constant'
   */
  AccTarSel_B.RelationalOperator_k = (AccTarSel_B.DataTypeConversion11 >=
    AccTarSel_P_g.Constant_Value_l);

  /* Logic: '<S159>/AND' */
  AccTarSel_B.AND_j = (AccTarSel_B.AND4 && rtu_VLC_Cmd_K1->CDDEnable &&
                       AccTarSel_B.RelationalOperator_k);

  /* RelationalOperator: '<S159>/Relational Operator1' incorporates:
   *  Constant: '<S159>/Constant1'
   */
  AccTarSel_B.RelationalOperator1_p = (AccTarSel_B.DataTypeConversion11 >=
    AccTarSel_P_g.Constant1_Value_a);

  /* Memory: '<S159>/Memory' */
  AccTarSel_B.Memory_f = AccTarSel_DW.Memory_PreviousInput_l;

  /* Logic: '<S159>/AND2' */
  AccTarSel_B.AND2 = (AccTarSel_B.RelationalOperator1_p && AccTarSel_B.AND4 &&
                      AccTarSel_B.Memory_f);

  /* Logic: '<S159>/AND3' */
  AccTarSel_B.AND3 = (AccTarSel_B.AND_j || AccTarSel_B.AND2);

  /* Logic: '<S159>/AND1' */
  AccTarSel_B.BusCreator_m.DrvOverride = (AccTarSel_B.AND3 ||
    AccTarSel_B.DataTypeConversion1_l);

  /* DataTypeConversion: '<S12>/Data Type Conversion2' */
  AccTarSel_B.BusCreator_m.ACC_MainSw = rtu_CANInput->x1E1.CCSwStsOnSwA;

  /* DataTypeConversion: '<S12>/Data Type Conversion3' */
  AccTarSel_B.BusCreator_m.ACC_CancelSw = rtu_CANInput->x1E1.CCSwStsCanclSwA;

  /* DataTypeConversion: '<S12>/Data Type Conversion4' */
  AccTarSel_B.ACC_SetSw = rtu_CANInput->x1E1.CCSwStsSetSwA;

  /* DataTypeConversion: '<S12>/Data Type Conversion16' */
  AccTarSel_B.DataTypeConversion16 = (rtu_ZOP2ACC->activate_acc != 0);

  /* Memory: '<S5>/Memory3' */
  AccTarSel_B.Memory3 = AccTarSel_DW.Memory3_PreviousInput;

  /* RelationalOperator: '<S5>/Relational Operator1' */
  AccTarSel_B.RelationalOperator1_i = (rtu_AVP_Info->AVP_STATE !=
    AccTarSel_B.Memory3);

  /* RelationalOperator: '<S5>/Relational Operator' incorporates:
   *  Constant: '<S5>/Constant'
   */
  AccTarSel_B.RelationalOperator_j = (rtu_VLC_Cmd_K1->ACCState <=
    AccTarSel_P_g.Constant_Value_eo);

  /* Memory: '<S5>/Memory' */
  AccTarSel_B.Memory = AccTarSel_DW.Memory_PreviousInput_b;

  /* If: '<S5>/If' incorporates:
   *  Inport: '<S140>/AVP_ActiveK1'
   */
  if (AccTarSel_B.RelationalOperator1_i) {
    /* Outputs for IfAction SubSystem: '<S5>/AVP_Activate' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    AccTarSel_IfActionSubsystem2(&AccTarSel_B.Merge_c,
      &AccTarSel_P_g.AVP_Activate);

    /* End of Outputs for SubSystem: '<S5>/AVP_Activate' */
  } else if (AccTarSel_B.RelationalOperator_j) {
    /* Outputs for IfAction SubSystem: '<S5>/AVP_Deactivate' incorporates:
     *  ActionPort: '<S139>/Action Port'
     */
    AccTarSel_IfActionSubsystem2(&AccTarSel_B.Merge_c,
      &AccTarSel_P_g.AVP_Deactivate);

    /* End of Outputs for SubSystem: '<S5>/AVP_Deactivate' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/Hold' incorporates:
     *  ActionPort: '<S140>/Action Port'
     */
    AccTarSel_B.Merge_c = AccTarSel_B.Memory;

    /* End of Outputs for SubSystem: '<S5>/Hold' */
  }

  /* End of If: '<S5>/If' */

  /* Logic: '<S12>/OR' */
  AccTarSel_B.OR = ((*rtu_TJA_Active != 0.0F) || AccTarSel_B.ACC_SetSw ||
                    AccTarSel_B.DataTypeConversion16 || (AccTarSel_B.Merge_c !=
    0.0F));

  /* Memory: '<S12>/Memory2' */
  AccTarSel_B.ACC_SetSwK1 = AccTarSel_DW.Memory2_PreviousInput;

  /* DataTypeConversion: '<S12>/Data Type Conversion6' */
  AccTarSel_B.ACC_SpdIncSw = rtu_CANInput->x1E1.CCSwStsSpdIncSwA;

  /* Memory: '<S12>/Memory' */
  AccTarSel_B.ACC_SpdIncSwK1 = AccTarSel_DW.Memory_PreviousInput_f;

  /* DataTypeConversion: '<S12>/Data Type Conversion7' */
  AccTarSel_B.ACC_SpdDecSw = rtu_CANInput->x1E1.CCSwStsSpdDecSwA;

  /* Memory: '<S12>/Memory1' */
  AccTarSel_B.ACC_SpdDecSwK1 = AccTarSel_DW.Memory1_PreviousInput_bw;

  /* DataTypeConversion: '<S12>/Data Type Conversion8' */
  AccTarSel_B.BusCreator_m.ACC_DistIncSw = rtu_CANInput->x1E1.CCSwStsDistIncSwA;

  /* DataTypeConversion: '<S12>/Data Type Conversion9' */
  AccTarSel_B.BusCreator_m.ACC_DistDecSw = rtu_CANInput->x1E1.CCSwStsDistDecSwA;

  /* DataTypeConversion: '<S12>/Data Type Conversion10' */
  AccTarSel_B.BusCreator_m.GearLever = rtu_CANInput->x194.TrShftLvrPos;

  /* BusCreator: '<S12>/Bus Creator' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  AccTarSel_B.BusCreator_m.ACC_SetSw = AccTarSel_B.OR;
  AccTarSel_B.BusCreator_m.ACC_SetSwK1 = AccTarSel_B.ACC_SetSwK1;
  AccTarSel_B.BusCreator_m.ACC_ResSw = AccTarSel_P_g.Constant1_Value_mj;
  AccTarSel_B.BusCreator_m.ACC_SpdIncSw = AccTarSel_B.ACC_SpdIncSw;
  AccTarSel_B.BusCreator_m.ACC_SpdIncSwK1 = AccTarSel_B.ACC_SpdIncSwK1;
  AccTarSel_B.BusCreator_m.ACC_SpdDecSw = AccTarSel_B.ACC_SpdDecSw;
  AccTarSel_B.BusCreator_m.ACC_SpdDecSwK1 = AccTarSel_B.ACC_SpdDecSwK1;

  /* Memory: '<Root>/Memory' */
  AccTarSel_B.ATS_Internal_ObjInfo_st = AccTarSel_DW.Memory_PreviousInput;

  /* Abs: '<S144>/Abs' */
  AccTarSel_B.Abs = (real32_T)fabs(rtu_VSI_VehState_st->Curvature);

  /* RelationalOperator: '<S144>/Relational Operator' incorporates:
   *  Constant: '<S144>/P_kapHystThres'
   */
  AccTarSel_B.RelationalOperator_l = (AccTarSel_B.Abs <= rtP_P_kapHystThres);

  /* Lookup_n-D: '<S144>/1-D Lookup Table' */
  AccTarSel_B.uDLookupTable = look1_iflf_linlxpw(rtu_VSI_VehState_st->Curvature,
    AccTarSel_P_g.uDLookupTable_bp01Data_d,
    AccTarSel_P_g.uDLookupTable_tableData_b, 5U);

  /* If: '<S144>/If' incorporates:
   *  Constant: '<S144>/Constant1'
   */
  if (AccTarSel_B.RelationalOperator_l) {
    /* Outputs for IfAction SubSystem: '<S144>/If Action Subsystem' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    AccTarSel_IfActionSubsystem_b(AccTarSel_P_g.Constant1_Value_e1,
      &AccTarSel_B.Merge_k);

    /* End of Outputs for SubSystem: '<S144>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S144>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S146>/Action Port'
     */
    AccTarSel_IfActionSubsystem_b(AccTarSel_B.uDLookupTable,
      &AccTarSel_B.Merge_k);

    /* End of Outputs for SubSystem: '<S144>/If Action Subsystem1' */
  }

  /* End of If: '<S144>/If' */

  /* Product: '<S144>/Divide' incorporates:
   *  Constant: '<S144>/P_tCurvFilt'
   */
  AccTarSel_B.Divide = rtu_SYS_Info_st->dT / rtP_P_tCurvFilt;

  /* Product: '<S144>/Multiply' */
  AccTarSel_B.Multiply = AccTarSel_B.Merge_k * AccTarSel_B.Divide;

  /* Sum: '<S144>/Add' incorporates:
   *  Constant: '<S144>/Constant3'
   */
  AccTarSel_B.Add_n = AccTarSel_P_g.Constant3_Value_k - AccTarSel_B.Divide;

  /* Memory: '<S144>/Memory' */
  AccTarSel_B.Memory_e = AccTarSel_DW.Memory_PreviousInput_g;

  /* Product: '<S144>/Multiply1' */
  AccTarSel_B.Multiply1 = AccTarSel_B.Add_n * AccTarSel_B.Memory_e;

  /* Sum: '<S144>/Add1' */
  AccTarSel_B.Add1 = AccTarSel_B.Multiply + AccTarSel_B.Multiply1;

  /* Product: '<S6>/Multiply' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  AccTarSel_B.b = AccTarSel_B.Add1 * AccTarSel_P_g.Constant2_Value_fp;

  /* Outputs for Iterator SubSystem: '<Root>/ACC_Target_Selection' incorporates:
   *  ForIterator: '<S3>/For Iterator'
   */
  /* Constant: '<Root>/Constant2' */
  for (i_cnt = 0; i_cnt < AccTarSel_P_g.Constant2_Value_i; i_cnt++) {
    AccTarSel_B.ForIterator = i_cnt;

    /* Selector: '<S3>/Selector' */
    AccTarSel_B.Selector = AccTarSel_B.Switch.objdata_st[AccTarSel_B.ForIterator];

    /* Selector: '<S3>/Selector1' */
    AccTarSel_B.Selector1_c =
      AccTarSel_B.ATS_Internal_ObjInfo_st.ats_obj_st[AccTarSel_B.ForIterator];

    /* Outputs for Atomic SubSystem: '<S105>/ValidObjCalc' */
    /* If: '<S109>/If' incorporates:
     *  Constant: '<S109>/Constant'
     */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S109>/DistanceToTraj' incorporates:
       *  ActionPort: '<S120>/Action Port'
       */
      /* Math: '<S120>/Square' incorporates:
       *  Constant: '<S120>/Constant'
       */
      u1 = AccTarSel_B.Selector.dx;
      u0 = AccTarSel_P_g.Constant_Value_hd;
      if ((u1 < 0.0F) && (u0 > (real32_T)floor(u0))) {
        AccTarSel_B.Square_n = -rt_powf_snf(-u1, u0);
      } else {
        AccTarSel_B.Square_n = rt_powf_snf(u1, u0);
      }

      /* End of Math: '<S120>/Square' */

      /* Product: '<S120>/Multiply' incorporates:
       *  Constant: '<S6>/Constant3'
       */
      AccTarSel_B.Multiply_p3 = AccTarSel_B.Square_n *
        AccTarSel_P_g.Constant3_Value_b;

      /* Math: '<S120>/Square1' */
      AccTarSel_B.Square1_d = AccTarSel_B.Selector.dx * AccTarSel_B.Selector.dx;

      /* Product: '<S120>/Multiply1' */
      AccTarSel_B.Multiply1_d = AccTarSel_B.Square1_d * AccTarSel_B.b;

      /* Product: '<S120>/Multiply2' incorporates:
       *  Constant: '<S6>/Constant4'
       */
      AccTarSel_B.Multiply2 = AccTarSel_B.Selector.dx *
        AccTarSel_P_g.Constant4_Value_n;

      /* Sum: '<S120>/Add' incorporates:
       *  Constant: '<S6>/Constant5'
       */
      AccTarSel_B.Add_ca = ((AccTarSel_B.Multiply_p3 + AccTarSel_B.Multiply1_d)
                            + AccTarSel_B.Multiply2) +
        AccTarSel_P_g.Constant5_Value_b;

      /* Sum: '<S120>/Add1' */
      AccTarSel_B.dyToTraj = AccTarSel_B.Selector.dy - AccTarSel_B.Add_ca;

      /* End of Outputs for SubSystem: '<S109>/DistanceToTraj' */
    } else {
      /* Outputs for IfAction SubSystem: '<S109>/If Action Subsystem' incorporates:
       *  ActionPort: '<S121>/Action Port'
       */
      AccTarSel_IfActionSubsystem_b(AccTarSel_P_g.Constant_Value_gd,
        &AccTarSel_B.dyToTraj);

      /* End of Outputs for SubSystem: '<S109>/If Action Subsystem' */
    }

    /* End of If: '<S109>/If' */

    /* If: '<S108>/If1' */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S108>/Subsystem' incorporates:
       *  ActionPort: '<S114>/Action Port'
       */
      /* RelationalOperator: '<S114>/Relational Operator3' */
      AccTarSel_B.RelationalOperator3_d = (AccTarSel_B.Selector1_c.ID ==
        AccTarSel_B.Selector.ID);

      /* If: '<S114>/If' incorporates:
       *  Inport: '<S115>/In1'
       */
      if (AccTarSel_B.RelationalOperator3_d) {
        /* Outputs for IfAction SubSystem: '<S114>/Subsystem' incorporates:
         *  ActionPort: '<S116>/Action Port'
         */
        /* Abs: '<S116>/Abs' */
        AccTarSel_B.Abs_b = (real32_T)fabs(AccTarSel_B.dyToTraj);

        /* Abs: '<S116>/Abs1' */
        AccTarSel_B.Abs1_p = (real32_T)fabs(AccTarSel_B.Selector.vy);

        /* RelationalOperator: '<S116>/Relational Operator3' incorporates:
         *  Constant: '<S116>/Constant1'
         */
        AccTarSel_B.RelationalOperator3_o = (AccTarSel_P_g.Constant1_Value_c ==
          AccTarSel_B.Selector.MotionSts);

        /* RelationalOperator: '<S116>/Relational Operator' incorporates:
         *  Constant: '<S116>/P_dyCutInThres'
         */
        AccTarSel_B.RelationalOperator_gs = (AccTarSel_B.Abs_b <=
          rtP_P_dyCutInThres);

        /* Product: '<S116>/Multiply' */
        AccTarSel_B.Multiply_c = AccTarSel_B.dyToTraj * AccTarSel_B.Selector.vy;

        /* RelationalOperator: '<S116>/Relational Operator1' incorporates:
         *  Constant: '<S116>/Constant2'
         */
        AccTarSel_B.RelationalOperator1_jr = (AccTarSel_B.Multiply_c <
          AccTarSel_P_g.Constant2_Value_f);

        /* RelationalOperator: '<S116>/Relational Operator2' incorporates:
         *  Constant: '<S116>/P_vyCutInThres'
         */
        AccTarSel_B.RelationalOperator2_m = (AccTarSel_B.Abs1_p >
          rtP_P_vyCutInThres);

        /* Logic: '<S116>/Logical Operator' incorporates:
         *  Constant: '<S116>/P_CutInEnable'
         */
        AccTarSel_B.LogicalOperator_d = (rtP_P_CutInEnable &&
          AccTarSel_B.RelationalOperator3_o && AccTarSel_B.RelationalOperator_gs
          && AccTarSel_B.RelationalOperator1_jr &&
          AccTarSel_B.RelationalOperator2_m);

        /* If: '<S116>/If' incorporates:
         *  Inport: '<S118>/dy'
         */
        if (AccTarSel_B.LogicalOperator_d) {
          /* Outputs for IfAction SubSystem: '<S116>/If Action Subsystem' incorporates:
           *  ActionPort: '<S117>/Action Port'
           */
          /* Abs: '<S117>/Abs1' */
          AccTarSel_B.Abs1_c = (real32_T)fabs(AccTarSel_B.Selector.vy);

          /* Lookup_n-D: '<S117>/1-D Lookup Table' */
          AccTarSel_B.tPred = look1_iflf_linlcpw(AccTarSel_B.Abs1_c,
            AccTarSel_P_g.uDLookupTable_bp01Data_c,
            AccTarSel_P_g.uDLookupTable_tableData_j, 1U);

          /* Product: '<S117>/Multiply' */
          AccTarSel_B.Multiply_n = AccTarSel_B.Selector.vy * AccTarSel_B.tPred;

          /* Sum: '<S117>/Add' */
          AccTarSel_B.Add_kt = AccTarSel_B.dyToTraj + AccTarSel_B.Multiply_n;

          /* MinMax: '<S117>/Max' incorporates:
           *  Constant: '<S117>/Constant'
           */
          u0 = AccTarSel_B.Add_kt;
          u1 = AccTarSel_P_g.Constant_Value_k;
          if ((u0 > u1) || rtIsNaNF(u1)) {
            u1 = u0;
          }

          AccTarSel_B.Max_gs = u1;

          /* End of MinMax: '<S117>/Max' */

          /* MinMax: '<S117>/Max1' incorporates:
           *  Constant: '<S117>/Constant'
           */
          u0 = AccTarSel_P_g.Constant_Value_k;
          u1 = AccTarSel_B.Add_kt;
          if ((u0 < u1) || rtIsNaNF(u1)) {
            u1 = u0;
          }

          AccTarSel_B.Max1_m = u1;

          /* End of MinMax: '<S117>/Max1' */

          /* Switch: '<S117>/Switch' */
          if (AccTarSel_B.dyToTraj > AccTarSel_P_g.Switch_Threshold_i) {
            AccTarSel_B.dyPred = AccTarSel_B.Max_gs;
          } else {
            AccTarSel_B.dyPred = AccTarSel_B.Max1_m;
          }

          /* End of Switch: '<S117>/Switch' */

          /* Abs: '<S117>/Abs' */
          AccTarSel_B.Abs_iz = (real32_T)fabs(AccTarSel_B.dyPred);

          /* Lookup_n-D: '<S117>/1-D Lookup Table1' */
          AccTarSel_B.probCutIn = look1_iflf_linlcpw(AccTarSel_B.Abs_iz,
            AccTarSel_P_g.uDLookupTable1_bp01Data,
            AccTarSel_P_g.uDLookupTable1_tableData, 1U);

          /* SignalConversion: '<S117>/OutportBufferForOut2' */
          AccTarSel_B.dyCutInPred = AccTarSel_B.dyPred;

          /* End of Outputs for SubSystem: '<S116>/If Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S116>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S118>/Action Port'
           */
          /* SignalConversion: '<S118>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
           *  Constant: '<S118>/Constant'
           */
          AccTarSel_B.probCutIn = AccTarSel_P_g.Constant_Value_ga;
          AccTarSel_B.dyCutInPred = AccTarSel_B.dyToTraj;

          /* End of Outputs for SubSystem: '<S116>/If Action Subsystem1' */
        }

        /* End of If: '<S116>/If' */

        /* MinMax: '<S119>/Max' incorporates:
         *  Constant: '<S116>/P_tCutInFilt'
         */
        u0 = rtu_SYS_Info_st->dT;
        u1 = rtP_P_tCutInFilt;
        if ((u0 > u1) || rtIsNaNF(u1)) {
          u1 = u0;
        }

        AccTarSel_B.Max_c = u1;

        /* End of MinMax: '<S119>/Max' */

        /* Product: '<S119>/Divide' */
        AccTarSel_B.filtFactor_b = rtu_SYS_Info_st->dT / AccTarSel_B.Max_c;

        /* Sum: '<S119>/Add' incorporates:
         *  Constant: '<S119>/Constant'
         */
        AccTarSel_B.Add_nv = AccTarSel_P_g.Constant_Value_no -
          AccTarSel_B.filtFactor_b;

        /* Product: '<S119>/Multiply' */
        AccTarSel_B.Multiply_m = AccTarSel_B.probCutIn *
          AccTarSel_B.filtFactor_b;

        /* Product: '<S119>/Multiply1' */
        AccTarSel_B.Multiply1_i = AccTarSel_B.Add_nv *
          AccTarSel_B.Selector1_c.probCutInFilt;

        /* Sum: '<S119>/Add1' */
        AccTarSel_B.Merge_n = AccTarSel_B.Multiply_m + AccTarSel_B.Multiply1_i;

        /* SignalConversion: '<S116>/OutportBufferForprobCutInRaw' */
        AccTarSel_B.Merge2 = AccTarSel_B.probCutIn;

        /* End of Outputs for SubSystem: '<S114>/Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S114>/If Action Subsystem' incorporates:
         *  ActionPort: '<S115>/Action Port'
         */
        /* SignalConversion: '<S115>/OutportBuffer_InsertedFor_probCutInFiltInit_at_inport_0' incorporates:
         *  Constant: '<S115>/Constant'
         */
        AccTarSel_B.Merge_n = AccTarSel_P_g.Constant_Value_ae;

        /* SignalConversion: '<S115>/OutportBuffer_InsertedFor_probCutInRawInit_at_inport_0' incorporates:
         *  Constant: '<S115>/Constant'
         */
        AccTarSel_B.Merge2 = AccTarSel_P_g.Constant_Value_ae;
        AccTarSel_B.dyCutInPred = AccTarSel_B.dyToTraj;

        /* End of Outputs for SubSystem: '<S114>/If Action Subsystem' */
      }

      /* End of If: '<S114>/If' */
      /* End of Outputs for SubSystem: '<S108>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S108>/If Action Subsystem' incorporates:
       *  ActionPort: '<S113>/Action Port'
       */
      /* SignalConversion: '<S113>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
       *  Constant: '<S113>/Constant'
       */
      AccTarSel_B.Merge_n = AccTarSel_P_g.Constant_Value_p;

      /* SignalConversion: '<S113>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
       *  Constant: '<S113>/Constant'
       */
      AccTarSel_B.dyCutInPred = AccTarSel_P_g.Constant_Value_p;

      /* SignalConversion: '<S113>/OutportBuffer_InsertedFor_Out3_at_inport_0' incorporates:
       *  Constant: '<S113>/Constant'
       */
      AccTarSel_B.Merge2 = AccTarSel_P_g.Constant_Value_p;

      /* End of Outputs for SubSystem: '<S108>/If Action Subsystem' */
    }

    /* End of If: '<S108>/If1' */

    /* If: '<S111>/If' incorporates:
     *  Constant: '<S111>/Constant'
     */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S111>/Subsystem' incorporates:
       *  ActionPort: '<S125>/Action Port'
       */
      /* Lookup_n-D: '<S125>/1-D Lookup Table' */
      AccTarSel_B.uDLookupTable_f = look1_iflf_linlcpw(AccTarSel_B.Selector.dx,
        AccTarSel_P_g.uDLookupTable_bp01Data_m,
        AccTarSel_P_g.uDLookupTable_tableData_n, 2U);

      /* RelationalOperator: '<S125>/Relational Operator' */
      AccTarSel_B.RelationalOperator_lx = (AccTarSel_B.Selector.ID ==
        AccTarSel_B.Selector1_c.ID);

      /* Logic: '<S125>/AND' */
      AccTarSel_B.AND_hu = (AccTarSel_B.RelationalOperator_lx &&
                            AccTarSel_B.Selector1_c.ValidEgoLane);

      /* Switch: '<S125>/Switch' incorporates:
       *  Constant: '<S125>/Constant'
       *  Constant: '<S125>/Constant1'
       */
      if (AccTarSel_B.AND_hu) {
        AccTarSel_B.Switch_i = AccTarSel_P_g.Constant_Value_ed;
      } else {
        AccTarSel_B.Switch_i = AccTarSel_P_g.Constant1_Value_a0;
      }

      /* End of Switch: '<S125>/Switch' */

      /* Sum: '<S125>/Add1' */
      AccTarSel_B.dyWidthTraj = AccTarSel_B.Switch_i +
        AccTarSel_B.uDLookupTable_f;

      /* Abs: '<S125>/Abs' */
      AccTarSel_B.dyToTrajAbs = (real32_T)fabs(AccTarSel_B.dyToTraj);

      /* Sum: '<S125>/Add' */
      AccTarSel_B.Add_ko = AccTarSel_B.dyWidthTraj - AccTarSel_B.dyToTrajAbs;

      /* Product: '<S125>/Divide' */
      AccTarSel_B.Divide_n = AccTarSel_B.Add_ko / AccTarSel_B.dyWidthTraj;

      /* Lookup_n-D: '<S125>/1-D Lookup Table1' */
      AccTarSel_B.Merge_ns = look1_iflf_linlcpw(AccTarSel_B.Divide_n,
        AccTarSel_P_g.uDLookupTable1_bp01Data_b,
        AccTarSel_P_g.uDLookupTable1_tableData_d, 1U);

      /* End of Outputs for SubSystem: '<S111>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem' incorporates:
       *  ActionPort: '<S124>/Action Port'
       */
      AccTarSel_IfActionSubsystem_b(AccTarSel_P_g.Constant_Value_pb,
        &AccTarSel_B.Merge_ns);

      /* End of Outputs for SubSystem: '<S111>/If Action Subsystem' */
    }

    /* End of If: '<S111>/If' */

    /* RelationalOperator: '<S108>/Relational Operator2' incorporates:
     *  Constant: '<S108>/Constant1'
     */
    AccTarSel_B.isCutIn = (AccTarSel_B.Merge_n >
      AccTarSel_P_g.Constant1_Value_lw);

    /* Product: '<S110>/Multiply' */
    AccTarSel_B.Multiply_og = AccTarSel_B.Merge_ns * rtu_SYS_Info_st->dT;

    /* RelationalOperator: '<S110>/Relational Operator' */
    AccTarSel_B.RelationalOperator_o = (AccTarSel_B.Selector.ID !=
      AccTarSel_B.Selector1_c.ID);

    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S110>/Constant3'
     */
    if (AccTarSel_B.RelationalOperator_o) {
      AccTarSel_B.Switch_ls = AccTarSel_P_g.Constant3_Value_c;
    } else {
      AccTarSel_B.Switch_ls = AccTarSel_B.Selector1_c.plausEgoLane;
    }

    /* End of Switch: '<S110>/Switch' */

    /* Sum: '<S110>/Add' */
    AccTarSel_B.Add_a = AccTarSel_B.Multiply_og + AccTarSel_B.Switch_ls;

    /* MinMax: '<S110>/Min' incorporates:
     *  Constant: '<S110>/Constant1'
     */
    u0 = AccTarSel_B.Add_a;
    u1 = AccTarSel_P_g.Constant1_Value_bc;
    if ((u0 < u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Min_c = u1;

    /* End of MinMax: '<S110>/Min' */

    /* MinMax: '<S110>/Min1' incorporates:
     *  Constant: '<S110>/Constant2'
     */
    u0 = AccTarSel_B.Min_c;
    u1 = AccTarSel_P_g.Constant2_Value_jk;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Min1 = u1;

    /* End of MinMax: '<S110>/Min1' */

    /* Switch: '<S110>/Switch1' incorporates:
     *  Constant: '<S110>/Constant4'
     */
    if (rtP_P_PlausIntegDisable) {
      AccTarSel_B.Switch1_h = AccTarSel_B.Merge_ns;
    } else {
      AccTarSel_B.Switch1_h = AccTarSel_B.Min1;
    }

    /* End of Switch: '<S110>/Switch1' */

    /* MinMax: '<S110>/Max' incorporates:
     *  Constant: '<S110>/Constant'
     */
    u0 = AccTarSel_P_g.Constant_Value_b0;
    u1 = AccTarSel_B.Switch1_h;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Max_gl = u1;

    /* End of MinMax: '<S110>/Max' */

    /* If: '<S110>/If' */
    if (AccTarSel_B.isCutIn) {
      /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem' incorporates:
       *  ActionPort: '<S122>/Action Port'
       */
      AccTarSel_IfActionSubsystem_b(AccTarSel_B.Max_gl, &AccTarSel_B.Merge_ke);

      /* End of Outputs for SubSystem: '<S110>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S123>/Action Port'
       */
      AccTarSel_IfActionSubsystem_b(AccTarSel_B.Switch1_h, &AccTarSel_B.Merge_ke);

      /* End of Outputs for SubSystem: '<S110>/If Action Subsystem1' */
    }

    /* End of If: '<S110>/If' */

    /* If: '<S112>/If' incorporates:
     *  Constant: '<S112>/Constant'
     *  Constant: '<S130>/P_StandObjEnable'
     */
    if (AccTarSel_B.Selector.Valid) {
      /* Outputs for IfAction SubSystem: '<S112>/Subsystem' incorporates:
       *  ActionPort: '<S127>/Action Port'
       */
      /* RelationalOperator: '<S128>/Relational Operator' incorporates:
       *  Constant: '<S128>/P_dvarYMax4PO'
       */
      AccTarSel_B.RelationalOperator_pc = (AccTarSel_B.Selector.dvarY <=
        rtP_P_dvarYMax4PO);

      /* RelationalOperator: '<S128>/Relational Operator1' incorporates:
       *  Constant: '<S128>/P_probExistMin4PO'
       */
      AccTarSel_B.RelationalOperator1_pu = (AccTarSel_B.Selector.probExist >=
        rtP_P_probExistMin4PO);

      /* RelationalOperator: '<S128>/Relational Operator2' incorporates:
       *  Constant: '<S128>/Constant'
       */
      AccTarSel_B.RelationalOperator2_f5 = (AccTarSel_B.Selector.dx >
        AccTarSel_P_g.Constant_Value_lp);

      /* Logic: '<S128>/Logical Operator' */
      AccTarSel_B.LogicalOperator = (AccTarSel_B.RelationalOperator_pc &&
        AccTarSel_B.RelationalOperator1_pu && AccTarSel_B.RelationalOperator2_f5);

      /* Lookup_n-D: '<S129>/1-D Lookup Table' */
      AccTarSel_B.uDLookupTable_d = look1_iflf_linlcpw(rtu_VSI_VehState_st->vRef,
        AccTarSel_P_g.uDLookupTable_bp01Data_nr,
        AccTarSel_P_g.uDLookupTable_tableData_jd, 1U);

      /* RelationalOperator: '<S129>/Relational Operator1' incorporates:
       *  Constant: '<S129>/Constant'
       */
      AccTarSel_B.RelationalOperator1_k = (AccTarSel_B.Selector.dx >
        AccTarSel_P_g.Constant_Value_cs);

      /* RelationalOperator: '<S129>/Relational Operator' */
      AccTarSel_B.RelationalOperator_c = (AccTarSel_B.Selector.dx <=
        AccTarSel_B.uDLookupTable_d);

      /* Logic: '<S129>/Logical Operator' */
      AccTarSel_B.LogicalOperator_n = (AccTarSel_B.RelationalOperator1_k &&
        AccTarSel_B.RelationalOperator_c);

      /* RelationalOperator: '<S130>/Relational Operator' incorporates:
       *  Constant: '<S130>/Constant'
       */
      AccTarSel_B.RelationalOperator_i = (AccTarSel_B.Selector.MotionSts ==
        AccTarSel_P_g.Constant_Value_ar);

      /* RelationalOperator: '<S130>/Relational Operator1' incorporates:
       *  Constant: '<S130>/Constant1'
       */
      AccTarSel_B.RelationalOperator1_lm = (AccTarSel_B.Selector.MotionSts ==
        AccTarSel_P_g.Constant1_Value_j);

      /* RelationalOperator: '<S130>/Relational Operator2' incorporates:
       *  Constant: '<S130>/Constant2'
       */
      AccTarSel_B.RelationalOperator2_g = (AccTarSel_B.Selector.MotionSts ==
        AccTarSel_P_g.Constant2_Value_fh);

      /* Logic: '<S130>/Logical Operator1' */
      AccTarSel_B.LogicalOperator1 = (AccTarSel_B.RelationalOperator_i ||
        AccTarSel_B.RelationalOperator1_lm || AccTarSel_B.RelationalOperator2_g);

      /* RelationalOperator: '<S130>/Relational Operator3' incorporates:
       *  Constant: '<S130>/Constant3'
       */
      AccTarSel_B.RelationalOperator3 = (AccTarSel_B.Selector.Type !=
        AccTarSel_P_g.Constant3_Value_m);

      /* Logic: '<S130>/Logical Operator2' */
      AccTarSel_B.LogicalOperator2 = (AccTarSel_B.LogicalOperator1 &&
        AccTarSel_B.RelationalOperator3);
      AccTarSel_B.P_StandObjEnable = rtP_P_StandObjEnable;

      /* RelationalOperator: '<S131>/Relational Operator1' incorporates:
       *  Constant: '<S130>/P_StandObjEnable'
       *  Constant: '<S131>/P_plausMin4PO'
       */
      AccTarSel_B.RelationalOperator1_j = (AccTarSel_B.Merge_ke >=
        rtP_P_plausMin4PO);

      /* Logic: '<S127>/Logical Operator' */
      AccTarSel_B.Merge_oz = (AccTarSel_B.LogicalOperator_n &&
        AccTarSel_B.LogicalOperator2 && AccTarSel_B.LogicalOperator &&
        AccTarSel_B.RelationalOperator1_j);

      /* End of Outputs for SubSystem: '<S112>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S112>/If Action Subsystem' incorporates:
       *  ActionPort: '<S126>/Action Port'
       */
      AccTarSel_Hold(AccTarSel_P_g.Constant_Value_ao, &AccTarSel_B.Merge_oz);

      /* End of Outputs for SubSystem: '<S112>/If Action Subsystem' */
    }

    /* End of If: '<S112>/If' */

    /* BusCreator: '<S107>/Bus Creator' */
    AccTarSel_B.BusCreator_p.dx = AccTarSel_B.Selector.dx;
    AccTarSel_B.BusCreator_p.dy = AccTarSel_B.Selector.dy;
    AccTarSel_B.BusCreator_p.vx = AccTarSel_B.Selector.vx;
    AccTarSel_B.BusCreator_p.vy = AccTarSel_B.Selector.vy;
    AccTarSel_B.BusCreator_p.dyToTraj = AccTarSel_B.dyToTraj;
    AccTarSel_B.BusCreator_p.dyCutInPred = AccTarSel_B.dyCutInPred;
    AccTarSel_B.BusCreator_p.probCutInRaw = AccTarSel_B.Merge2;
    AccTarSel_B.BusCreator_p.probCutInFilt = AccTarSel_B.Merge_n;
    AccTarSel_B.BusCreator_p.probEgoLane = AccTarSel_B.Merge_ns;
    AccTarSel_B.BusCreator_p.plausEgoLane = AccTarSel_B.Merge_ke;
    AccTarSel_B.BusCreator_p.ValidEgoLane = AccTarSel_B.Merge_oz;
    AccTarSel_B.BusCreator_p.ID = AccTarSel_B.Selector.ID;

    /* End of Outputs for SubSystem: '<S105>/ValidObjCalc' */

    /* Assignment: '<S3>/Assignment' incorporates:
     *  Assignment: '<S3>/Assignment1'
     *  Constant: '<S3>/Zero'
     *  Constant: '<S3>/Zero1'
     */
    if (i_cnt == 0) {
      for (i = 0; i < 40; i++) {
        AccTarSel_B.Assignment[i] = AccTarSel_P_g.Zero_Value[i];
      }

      memcpy(&AccTarSel_B.Assignment1_a[0], &AccTarSel_P_g.Zero1_Value_k[0], 40U
             * sizeof(ATS_OBJINFO_ST));
    }

    AccTarSel_B.Assignment[AccTarSel_B.ForIterator] = AccTarSel_B.Merge_oz;

    /* End of Assignment: '<S3>/Assignment' */

    /* Assignment: '<S3>/Assignment1' */
    AccTarSel_B.Assignment1_a[AccTarSel_B.ForIterator] =
      AccTarSel_B.BusCreator_p;

    /* RelationalOperator: '<S106>/Relational Operator1' incorporates:
     *  Constant: '<S106>/Constant'
     */
    AccTarSel_B.RelationalOperator1_l = (AccTarSel_B.ForIterator ==
      AccTarSel_P_g.Constant_Value_d);

    /* Delay: '<S106>/Delay1' */
    AccTarSel_B.Delay1 = AccTarSel_DW.Delay1_DSTATE;

    /* RelationalOperator: '<S106>/Relational Operator2' incorporates:
     *  Constant: '<S106>/Constant1'
     */
    AccTarSel_B.RelationalOperator2_d = (AccTarSel_B.Delay1 ==
      AccTarSel_P_g.Constant1_Value_hx);

    /* Logic: '<S106>/AND1' */
    AccTarSel_B.AND1_g = (AccTarSel_B.RelationalOperator1_l ||
                          AccTarSel_B.RelationalOperator2_d);

    /* Delay: '<S106>/Delay' */
    if (AccTarSel_B.AND1_g) {
      AccTarSel_DW.Delay_DSTATE = AccTarSel_P_g.Delay_InitialCondition;
    }

    AccTarSel_B.Delay = AccTarSel_DW.Delay_DSTATE;

    /* End of Delay: '<S106>/Delay' */

    /* RelationalOperator: '<S106>/Relational Operator' */
    AccTarSel_B.RelationalOperator_d = (AccTarSel_B.Selector.dx <
      AccTarSel_B.Delay);

    /* Logic: '<S106>/AND' */
    AccTarSel_B.AND_h = (AccTarSel_B.Merge_oz &&
                         AccTarSel_B.RelationalOperator_d);

    /* DataTypeConversion: '<S106>/Data Type Conversion' */
    AccTarSel_B.DataTypeConversion = (real32_T)AccTarSel_B.ForIterator;

    /* If: '<S106>/If1' incorporates:
     *  Inport: '<S132>/In2'
     */
    if (AccTarSel_B.AND_h) {
      /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem' incorporates:
       *  ActionPort: '<S132>/Action Port'
       */
      /* SignalConversion: '<S132>/OutportBuffer_InsertedFor_valid_at_inport_0' incorporates:
       *  Constant: '<S132>/Constant'
       */
      AccTarSel_B.Valid = AccTarSel_P_g.Constant_Value_n5;
      AccTarSel_B.Index = AccTarSel_B.DataTypeConversion;

      /* SignalConversion: '<S132>/SigConversion_InsertedFor_Bus Selector_at_outport_0' incorporates:
       *  Inport: '<S132>/In2'
       */
      AccTarSel_B.dx_i = AccTarSel_B.Selector.dx;

      /* SignalConversion: '<S132>/SigConversion_InsertedFor_Bus Selector_at_outport_1' */
      AccTarSel_B.dy = AccTarSel_B.Selector.dy;

      /* SignalConversion: '<S132>/SigConversion_InsertedFor_Bus Selector_at_outport_2' */
      AccTarSel_B.vx_o = AccTarSel_B.Selector.vx;

      /* SignalConversion: '<S132>/SigConversion_InsertedFor_Bus Selector_at_outport_3' */
      AccTarSel_B.vy = AccTarSel_B.Selector.vy;

      /* SignalConversion: '<S132>/SigConversion_InsertedFor_Bus Selector_at_outport_4' */
      AccTarSel_B.ax_a = AccTarSel_B.Selector.ax;

      /* SignalConversion: '<S132>/SigConversion_InsertedFor_Bus Selector_at_outport_5' */
      AccTarSel_B.Type = AccTarSel_B.Selector.Type;

      /* SignalConversion: '<S132>/SigConversion_InsertedFor_Bus Selector_at_outport_6' */
      AccTarSel_B.MotionSts = AccTarSel_B.Selector.MotionSts;

      /* End of Outputs for SubSystem: '<S106>/If Action Subsystem' */
    } else {
      if (AccTarSel_B.AND1_g) {
        /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_valid_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant6'
         */
        AccTarSel_B.Valid = AccTarSel_P_g.Constant6_Value_l;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_index_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant5'
         */
        AccTarSel_B.Index = AccTarSel_P_g.Constant5_Value_e;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_dx_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant'
         */
        AccTarSel_B.dx_i = AccTarSel_P_g.Constant_Value_b4;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_dy_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant1'
         */
        AccTarSel_B.dy = AccTarSel_P_g.Constant1_Value_fqq;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_vx_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant2'
         */
        AccTarSel_B.vx_o = AccTarSel_P_g.Constant2_Value_h;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_vy_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant3'
         */
        AccTarSel_B.vy = AccTarSel_P_g.Constant3_Value_n;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_ax_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant4'
         */
        AccTarSel_B.ax_a = AccTarSel_P_g.Constant4_Value_f;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_Type_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant7'
         */
        AccTarSel_B.Type = AccTarSel_P_g.Constant7_Value_c;

        /* SignalConversion: '<S133>/OutportBuffer_InsertedFor_MotionSts_at_inport_0' incorporates:
         *  Constant: '<S133>/Constant8'
         */
        AccTarSel_B.MotionSts = AccTarSel_P_g.Constant8_Value_p;

        /* End of Outputs for SubSystem: '<S106>/If Action Subsystem1' */
      }
    }

    /* End of If: '<S106>/If1' */

    /* Sum: '<S106>/Add' */
    AccTarSel_B.vxAbs_c = AccTarSel_B.vx_o + rtu_VSI_VehState_st->vRef;

    /* Sum: '<S106>/Add1' */
    AccTarSel_B.axAbs_e = AccTarSel_B.ax_a + rtu_VSI_VehState_st->aRef;

    /* BusCreator: '<S106>/Bus Creator' */
    AccTarSel_B.BusCreator_o.Valid = AccTarSel_B.Valid;
    AccTarSel_B.BusCreator_o.Index = AccTarSel_B.Index;
    AccTarSel_B.BusCreator_o.dx = AccTarSel_B.dx_i;
    AccTarSel_B.BusCreator_o.dy = AccTarSel_B.dy;
    AccTarSel_B.BusCreator_o.vx = AccTarSel_B.vx_o;
    AccTarSel_B.BusCreator_o.vy = AccTarSel_B.vy;
    AccTarSel_B.BusCreator_o.ax = AccTarSel_B.ax_a;
    AccTarSel_B.BusCreator_o.vxAbs = AccTarSel_B.vxAbs_c;
    AccTarSel_B.BusCreator_o.axAbs = AccTarSel_B.axAbs_e;
    AccTarSel_B.BusCreator_o.Type = AccTarSel_B.Type;
    AccTarSel_B.BusCreator_o.MotionSts = AccTarSel_B.MotionSts;

    /* Update for Delay: '<S106>/Delay1' */
    AccTarSel_DW.Delay1_DSTATE = AccTarSel_B.Valid;

    /* Update for Delay: '<S106>/Delay' */
    AccTarSel_DW.Delay_DSTATE = AccTarSel_B.dx_i;
  }

  /* End of Constant: '<Root>/Constant2' */
  /* End of Outputs for SubSystem: '<Root>/ACC_Target_Selection' */

  /* Memory: '<Root>/Memory1' */
  memcpy(&AccTarSel_B.Memory1[0], &AccTarSel_DW.Memory1_PreviousInput_b[0], 6U *
         sizeof(ATS_PO_ST));

  /* Selector: '<S13>/Selector1' incorporates:
   *  Constant: '<S13>/Constant1'
   */
  AccTarSel_B.Selector1 = AccTarSel_B.Memory1[AccTarSel_P_g.Constant1_Value_f];

  /* RelationalOperator: '<S13>/Relational Operator' */
  AccTarSel_B.RelationalOperator_a = (AccTarSel_B.Selector1.Index ==
    AccTarSel_B.BusCreator_o.Index);

  /* Logic: '<S13>/AND' */
  AccTarSel_B.AND_b = (AccTarSel_B.Selector1.Valid &&
                       AccTarSel_B.RelationalOperator_a &&
                       AccTarSel_B.BusCreator_o.Valid);

  /* SignalConversion: '<S13>/SigConversion_InsertedFor_Bus Selector_at_outport_3' */
  AccTarSel_B.dx = AccTarSel_B.BusCreator_o.dx;

  /* SignalConversion: '<S13>/SigConversion_InsertedFor_Bus Selector_at_outport_4' */
  AccTarSel_B.vx = AccTarSel_B.BusCreator_o.vx;

  /* SignalConversion: '<S13>/SigConversion_InsertedFor_Bus Selector_at_outport_5' */
  AccTarSel_B.ax = AccTarSel_B.BusCreator_o.ax;

  /* Memory: '<S13>/Memory' */
  AccTarSel_B.PosTime = AccTarSel_DW.Memory_2_PreviousInput;
  AccTarSel_B.NegTime = AccTarSel_DW.Memory_1_PreviousInput;

  /* If: '<S13>/If' incorporates:
   *  Inport: '<S161>/ax'
   *  Inport: '<S161>/dx'
   *  Inport: '<S161>/vx'
   */
  if (AccTarSel_B.AND_b) {
    /* Outputs for IfAction SubSystem: '<S13>/preFilt' incorporates:
     *  ActionPort: '<S162>/Action Port'
     */
    /* Abs: '<S162>/Abs' */
    AccTarSel_B.Abs_i = (real32_T)fabs(AccTarSel_B.ax);

    /* Sum: '<S162>/axAbsRaw' */
    AccTarSel_B.axAbsRaw = AccTarSel_B.ax + rtu_VSI_VehState_st->aRef;

    /* SignalConversion: '<S162>/TmpSignal ConversionAtLookup Table Dynamic1Inport2' incorporates:
     *  Constant: '<S162>/Constant'
     *  Constant: '<S162>/Constant5'
     */
    AccTarSel_B.TmpSignalConversionAtLookupTabl[0] =
      AccTarSel_P_g.Constant5_Value_l;
    AccTarSel_B.TmpSignalConversionAtLookupTabl[1] =
      AccTarSel_P_g.Constant_Value_oc;

    /* SignalConversion: '<S162>/TmpSignal ConversionAtLookup Table Dynamic1Inport3' incorporates:
     *  Constant: '<S162>/P_tFiltVxAxPOFast'
     *  Constant: '<S162>/P_tFiltVxAxPOSlow'
     */
    AccTarSel_B.TmpSignalConversionAtLookupTa_l[0] = rtP_P_tFiltVxAxPOSlow;
    AccTarSel_B.TmpSignalConversionAtLookupTa_l[1] = rtP_P_tFiltVxAxPOFast;

    /* S-Function (sfix_look1_dyn): '<S162>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S162>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic1),
      &AccTarSel_B.TmpSignalConversionAtLookupTa_l[0], AccTarSel_B.Abs_i,
      &AccTarSel_B.TmpSignalConversionAtLookupTabl[0], 1U);

    /* MinMax: '<S169>/Max' */
    u0 = rtu_SYS_Info_st->dT;
    u1 = AccTarSel_B.LookupTableDynamic1;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Max_e = u1;

    /* End of MinMax: '<S169>/Max' */

    /* Product: '<S169>/Divide' */
    AccTarSel_B.filtFactor_k = rtu_SYS_Info_st->dT / AccTarSel_B.Max_e;

    /* Product: '<S169>/Multiply' */
    AccTarSel_B.Multiply_p = AccTarSel_B.ax * AccTarSel_B.filtFactor_k;

    /* Sum: '<S169>/Add' incorporates:
     *  Constant: '<S169>/Constant'
     */
    AccTarSel_B.Add_l = AccTarSel_P_g.Constant_Value_dd -
      AccTarSel_B.filtFactor_k;

    /* Product: '<S169>/Multiply1' */
    AccTarSel_B.Multiply1_k = AccTarSel_B.Add_l * AccTarSel_B.Selector1.ax;

    /* Sum: '<S169>/Add1' */
    AccTarSel_B.Add1_g = AccTarSel_B.Multiply_p + AccTarSel_B.Multiply1_k;

    /* Sum: '<S162>/axAbsFilt1st' */
    AccTarSel_B.axAbsFilt1st = AccTarSel_B.Add1_g + rtu_VSI_VehState_st->aRef;

    /* Sum: '<S162>/axAbsDelta' */
    AccTarSel_B.axAbsDelta = AccTarSel_B.axAbsRaw - AccTarSel_B.axAbsFilt1st;

    /* If: '<S162>/If' incorporates:
     *  Inport: '<S165>/axTrackTime'
     */
    if (AccTarSel_B.axAbsDelta < -0.1F) {
      /* Outputs for IfAction SubSystem: '<S162>/NegTimeInc' incorporates:
       *  ActionPort: '<S166>/Action Port'
       */
      /* Sum: '<S166>/Add' */
      AccTarSel_B.Add_kb = rtu_SYS_Info_st->dT + AccTarSel_B.NegTime;

      /* MinMax: '<S166>/Max' incorporates:
       *  Constant: '<S166>/Constant'
       */
      u0 = AccTarSel_P_g.Constant_Value_mc;
      u1 = AccTarSel_B.Add_kb;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Merge_f = u1;

      /* End of MinMax: '<S166>/Max' */

      /* SignalConversion: '<S166>/OutportBuffer_InsertedFor_PosTime_at_inport_0' incorporates:
       *  Constant: '<S166>/Constant1'
       */
      AccTarSel_B.Merge1_f = AccTarSel_P_g.Constant1_Value_n2;

      /* End of Outputs for SubSystem: '<S162>/NegTimeInc' */
    } else if (AccTarSel_B.axAbsDelta > 0.1F) {
      /* Outputs for IfAction SubSystem: '<S162>/PosTimeInc' incorporates:
       *  ActionPort: '<S167>/Action Port'
       */
      /* SignalConversion: '<S167>/OutportBuffer_InsertedFor_NegTime_at_inport_0' incorporates:
       *  Constant: '<S167>/Constant1'
       */
      AccTarSel_B.Merge_f = AccTarSel_P_g.Constant1_Value_as;

      /* Sum: '<S167>/Add' */
      AccTarSel_B.Add_c = rtu_SYS_Info_st->dT + AccTarSel_B.PosTime;

      /* MinMax: '<S167>/Max' incorporates:
       *  Constant: '<S167>/Constant'
       */
      u0 = AccTarSel_P_g.Constant_Value_d0;
      u1 = AccTarSel_B.Add_c;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Merge1_f = u1;

      /* End of MinMax: '<S167>/Max' */
      /* End of Outputs for SubSystem: '<S162>/PosTimeInc' */
    } else {
      /* Outputs for IfAction SubSystem: '<S162>/Hold' incorporates:
       *  ActionPort: '<S165>/Action Port'
       */
      AccTarSel_B.axTrackTime[0] = AccTarSel_B.NegTime;
      AccTarSel_B.axTrackTime[1] = AccTarSel_B.PosTime;

      /* SignalConversion: '<S165>/OutportBufferForNegTime' incorporates:
       *  Inport: '<S165>/axTrackTime'
       */
      AccTarSel_B.Merge_f = AccTarSel_B.axTrackTime[0];

      /* SignalConversion: '<S165>/OutportBufferForPosTime' */
      AccTarSel_B.Merge1_f = AccTarSel_B.axTrackTime[1];

      /* End of Outputs for SubSystem: '<S162>/Hold' */
    }

    /* End of If: '<S162>/If' */

    /* SignalConversion: '<S162>/TmpSignal ConversionAtLookup Table DynamicInport2' incorporates:
     *  Constant: '<S162>/Constant2'
     *  Constant: '<S162>/Constant3'
     */
    AccTarSel_B.TmpSignalConversionAtLookupTa_j[0] = rtP_P_tAxTrackNegLower;
    AccTarSel_B.TmpSignalConversionAtLookupTa_j[1] = rtP_P_tAxTrackNegUpper;

    /* SignalConversion: '<S162>/TmpSignal ConversionAtLookup Table DynamicInport3' incorporates:
     *  Constant: '<S162>/Constant1'
     *  Constant: '<S162>/Constant4'
     */
    AccTarSel_B.TmpSignalConversionAtLookupTa_g[0] = rtP_P_tFiltAxAbsPONegSlow;
    AccTarSel_B.TmpSignalConversionAtLookupTa_g[1] = rtP_P_tFiltAxAbsPONegFast;

    /* S-Function (sfix_look1_dyn): '<S162>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S162>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic),
      &AccTarSel_B.TmpSignalConversionAtLookupTa_g[0], AccTarSel_B.Merge_f,
      &AccTarSel_B.TmpSignalConversionAtLookupTa_j[0], 1U);

    /* SignalConversion: '<S162>/TmpSignal ConversionAtLookup Table Dynamic2Inport2' incorporates:
     *  Constant: '<S162>/Constant10'
     *  Constant: '<S162>/Constant11'
     */
    AccTarSel_B.TmpSignalConversionAtLookupTa_k[0] = rtP_P_tAxTrackPosLower;
    AccTarSel_B.TmpSignalConversionAtLookupTa_k[1] = rtP_P_tAxTrackPosUpper;

    /* SignalConversion: '<S162>/TmpSignal ConversionAtLookup Table Dynamic2Inport3' incorporates:
     *  Constant: '<S162>/Constant12'
     *  Constant: '<S162>/Constant9'
     */
    AccTarSel_B.TmpSignalConversionAtLookupTa_i[0] = rtP_P_tFiltAxAbsPOPosSlow;
    AccTarSel_B.TmpSignalConversionAtLookupTa_i[1] = rtP_P_tFiltAxAbsPOPosFast;

    /* S-Function (sfix_look1_dyn): '<S162>/Lookup Table Dynamic2' */
    /* Dynamic Look-Up Table Block: '<S162>/Lookup Table Dynamic2'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic2),
      &AccTarSel_B.TmpSignalConversionAtLookupTa_i[0], AccTarSel_B.Merge1_f,
      &AccTarSel_B.TmpSignalConversionAtLookupTa_k[0], 1U);

    /* MinMax: '<S162>/Max1' incorporates:
     *  Constant: '<S162>/Constant7'
     */
    u0 = AccTarSel_B.axAbsFilt1st;
    u1 = AccTarSel_P_g.Constant7_Value_f;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Max1_f = u1;

    /* End of MinMax: '<S162>/Max1' */

    /* SignalConversion: '<S162>/OutportBufferForNegTime' */
    AccTarSel_B.NegTime_e = AccTarSel_B.Merge_f;

    /* SignalConversion: '<S162>/OutportBufferForPosTime' */
    AccTarSel_B.PosTime_p = AccTarSel_B.Merge1_f;

    /* SignalConversion: '<S162>/OutportBufferForaxPreFilt' */
    AccTarSel_B.ax_p = AccTarSel_B.Add1_g;

    /* RelationalOperator: '<S162>/Relational Operator' incorporates:
     *  Constant: '<S162>/Constant6'
     */
    AccTarSel_B.RelationalOperator_ko = (AccTarSel_B.BusCreator_o.MotionSts ==
      AccTarSel_P_g.Constant6_Value_a);

    /* Switch: '<S162>/Switch2' */
    if (AccTarSel_B.Merge_f > AccTarSel_P_g.Switch2_Threshold) {
      AccTarSel_B.Switch2 = AccTarSel_B.LookupTableDynamic;
    } else {
      AccTarSel_B.Switch2 = AccTarSel_B.LookupTableDynamic2;
    }

    /* End of Switch: '<S162>/Switch2' */

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S162>/Constant8'
     *  Switch: '<S162>/Switch1'
     */
    if (AccTarSel_B.RelationalOperator_ko) {
      AccTarSel_B.Switch_la = AccTarSel_B.axAbsFilt1st;
      AccTarSel_B.Switch1_i = AccTarSel_B.Switch2;
    } else {
      AccTarSel_B.Switch_la = AccTarSel_B.Max1_f;
      AccTarSel_B.Switch1_i = rtP_P_tFiltAxAbsPOStand;
    }

    /* End of Switch: '<S162>/Switch' */

    /* MinMax: '<S168>/Max' */
    u0 = rtu_SYS_Info_st->dT;
    u1 = AccTarSel_B.Switch1_i;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Max_fb = u1;

    /* End of MinMax: '<S168>/Max' */

    /* Product: '<S168>/Divide' */
    AccTarSel_B.filtFactor_f = rtu_SYS_Info_st->dT / AccTarSel_B.Max_fb;

    /* Sum: '<S168>/Add' incorporates:
     *  Constant: '<S168>/Constant'
     */
    AccTarSel_B.Add_p5 = AccTarSel_P_g.Constant_Value_ag -
      AccTarSel_B.filtFactor_f;

    /* Product: '<S168>/Multiply' */
    AccTarSel_B.Multiply_k = AccTarSel_B.Switch_la * AccTarSel_B.filtFactor_f;

    /* Product: '<S168>/Multiply1' */
    AccTarSel_B.Multiply1_j = AccTarSel_B.Add_p5 * AccTarSel_B.Selector1.axAbs;

    /* Sum: '<S168>/Add1' */
    AccTarSel_B.axAbs = AccTarSel_B.Multiply_k + AccTarSel_B.Multiply1_j;

    /* MinMax: '<S170>/Max' */
    u0 = rtu_SYS_Info_st->dT;
    u1 = AccTarSel_B.LookupTableDynamic1;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Max_bm = u1;

    /* End of MinMax: '<S170>/Max' */

    /* Product: '<S170>/Divide' */
    AccTarSel_B.filtFactor_p = rtu_SYS_Info_st->dT / AccTarSel_B.Max_bm;

    /* Sum: '<S170>/Add' incorporates:
     *  Constant: '<S170>/Constant'
     */
    AccTarSel_B.Add_j = AccTarSel_P_g.Constant_Value_js -
      AccTarSel_B.filtFactor_p;

    /* Product: '<S170>/Multiply' */
    AccTarSel_B.Multiply_g = AccTarSel_B.dx * AccTarSel_B.filtFactor_p;

    /* Product: '<S170>/Multiply1' */
    AccTarSel_B.Multiply1_gf = AccTarSel_B.Add_j * AccTarSel_B.Selector1.dx;

    /* Sum: '<S170>/Add1' */
    AccTarSel_B.dx_a = AccTarSel_B.Multiply_g + AccTarSel_B.Multiply1_gf;

    /* MinMax: '<S171>/Max' */
    u0 = rtu_SYS_Info_st->dT;
    u1 = AccTarSel_B.LookupTableDynamic1;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Max_d = u1;

    /* End of MinMax: '<S171>/Max' */

    /* Product: '<S171>/Divide' */
    AccTarSel_B.filtFactor_c = rtu_SYS_Info_st->dT / AccTarSel_B.Max_d;

    /* Sum: '<S171>/Add' incorporates:
     *  Constant: '<S171>/Constant'
     */
    AccTarSel_B.Add_k = AccTarSel_P_g.Constant_Value_o3 -
      AccTarSel_B.filtFactor_c;

    /* Product: '<S171>/Multiply' */
    AccTarSel_B.Multiply_ps = AccTarSel_B.vx * AccTarSel_B.filtFactor_c;

    /* Product: '<S171>/Multiply1' */
    AccTarSel_B.Multiply1_n = AccTarSel_B.Add_k * AccTarSel_B.Selector1.vx;

    /* Sum: '<S171>/Add1' */
    AccTarSel_B.vx_m = AccTarSel_B.Multiply_ps + AccTarSel_B.Multiply1_n;

    /* End of Outputs for SubSystem: '<S13>/preFilt' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem' incorporates:
     *  ActionPort: '<S161>/Action Port'
     */
    AccTarSel_B.dx_a = AccTarSel_B.dx;
    AccTarSel_B.vx_m = AccTarSel_B.vx;
    AccTarSel_B.ax_n = AccTarSel_B.ax;

    /* Sum: '<S161>/Add' incorporates:
     *  Inport: '<S161>/ax'
     *  Inport: '<S161>/dx'
     *  Inport: '<S161>/vx'
     */
    AccTarSel_B.axAbs = AccTarSel_B.ax_n + rtu_VSI_VehState_st->aRef;

    /* SignalConversion: '<S161>/OutportBufferForaxPreFiltInit' */
    AccTarSel_B.ax_p = AccTarSel_B.ax_n;

    /* SignalConversion: '<S161>/OutportBuffer_InsertedFor_NegTimeInit_at_inport_0' incorporates:
     *  Constant: '<S161>/Constant'
     */
    AccTarSel_B.NegTime_e = AccTarSel_P_g.Constant_Value_le;

    /* SignalConversion: '<S161>/OutportBuffer_InsertedFor_PosTimeInit_at_inport_0' incorporates:
     *  Constant: '<S161>/Constant'
     */
    AccTarSel_B.PosTime_p = AccTarSel_P_g.Constant_Value_le;

    /* End of Outputs for SubSystem: '<S13>/If Action Subsystem' */
  }

  /* End of If: '<S13>/If' */

  /* Sum: '<S13>/Add' */
  AccTarSel_B.vxAbs = AccTarSel_B.vx_m + rtu_VSI_VehState_st->vRef;

  /* BusCreator: '<S13>/Bus Creator' */
  AccTarSel_B.ACC_PO.Valid = AccTarSel_B.BusCreator_o.Valid;
  AccTarSel_B.ACC_PO.Index = AccTarSel_B.BusCreator_o.Index;
  AccTarSel_B.ACC_PO.dx = AccTarSel_B.dx_a;
  AccTarSel_B.ACC_PO.dy = AccTarSel_B.BusCreator_o.dy;
  AccTarSel_B.ACC_PO.vx = AccTarSel_B.vx_m;
  AccTarSel_B.ACC_PO.vy = AccTarSel_B.BusCreator_o.vy;
  AccTarSel_B.ACC_PO.ax = AccTarSel_B.ax_p;
  AccTarSel_B.ACC_PO.vxAbs = AccTarSel_B.vxAbs;
  AccTarSel_B.ACC_PO.axAbs = AccTarSel_B.axAbs;
  AccTarSel_B.ACC_PO.Type = AccTarSel_B.BusCreator_o.Type;
  AccTarSel_B.ACC_PO.MotionSts = AccTarSel_B.BusCreator_o.MotionSts;

  /* Assignment: '<S13>/Assignment1' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Zero1'
   */
  memcpy(&AccTarSel_B.Assignment1[0], &AccTarSel_P_g.Zero1_Value_g[0], 6U *
         sizeof(ATS_PO_ST));
  AccTarSel_B.Assignment1[AccTarSel_P_g.Constant_Value_g] = AccTarSel_B.ACC_PO;

  /* Memory: '<S143>/Memory' */
  AccTarSel_B.Memory_o = AccTarSel_DW.Memory_PreviousInput_e;

  /* RelationalOperator: '<S143>/Relational Operator' */
  AccTarSel_B.RelationalOperator_ke = (rtu_AVP_Info->EndPoint_x !=
    AccTarSel_B.Memory_o);

  /* Memory: '<S143>/Memory1' */
  AccTarSel_B.Memory1_b = AccTarSel_DW.Memory1_PreviousInput_f;

  /* Product: '<S143>/Multiply' */
  AccTarSel_B.Multiply_o = rtu_VSI_VehState_st->vRef * rtu_SYS_Info_st->dT;

  /* Math: '<S143>/Square' */
  AccTarSel_B.Square = rtu_SYS_Info_st->dT * rtu_SYS_Info_st->dT;

  /* Product: '<S143>/Multiply1' */
  AccTarSel_B.Multiply1_h = rtu_VSI_VehState_st->aRef * AccTarSel_B.Square;

  /* Sum: '<S143>/Add' */
  AccTarSel_B.Add_p = AccTarSel_B.Multiply_o + AccTarSel_B.Multiply1_h;

  /* Sum: '<S143>/Add1' */
  AccTarSel_B.Add1_h = AccTarSel_B.Memory1_b - AccTarSel_B.Add_p;

  /* Switch: '<S143>/Switch1' */
  if (AccTarSel_B.RelationalOperator_ke) {
    AccTarSel_B.Switch1 = rtu_AVP_Info->EndPoint_x;
  } else {
    AccTarSel_B.Switch1 = AccTarSel_B.Add1_h;
  }

  /* End of Switch: '<S143>/Switch1' */

  /* MinMax: '<S143>/Max' incorporates:
   *  Constant: '<S143>/Constant'
   */
  u0 = AccTarSel_P_g.Constant_Value_nk;
  u1 = AccTarSel_B.Switch1;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Max = u1;

  /* End of MinMax: '<S143>/Max' */

  /* BusCreator: '<S141>/Bus Creator' incorporates:
   *  Constant: '<S141>/Traj_C0'
   *  Constant: '<S141>/Traj_C1'
   *  Constant: '<S141>/Traj_C2'
   *  Constant: '<S141>/Traj_C3'
   *  Constant: '<S141>/dy'
   */
  AccTarSel_B.BusCreator_i.Tractory_c0 = AccTarSel_P_g.Traj_C0_Value;
  AccTarSel_B.BusCreator_i.Tractory_c1 = AccTarSel_P_g.Traj_C1_Value;
  AccTarSel_B.BusCreator_i.Tractory_c2 = AccTarSel_P_g.Traj_C2_Value;
  AccTarSel_B.BusCreator_i.Tractory_c3 = AccTarSel_P_g.Traj_C3_Value;
  AccTarSel_B.BusCreator_i.EndPoint_x = AccTarSel_B.Max;
  AccTarSel_B.BusCreator_i.EndPoint_y = AccTarSel_P_g.dy_Value;
  AccTarSel_B.BusCreator_i.AVP_STATE = rtu_AVP_Info->AVP_STATE;

  /* BusCreator: '<S142>/Bus Creator' incorporates:
   *  Constant: '<S142>/AVP_State'
   *  Constant: '<S142>/Traj_C0'
   *  Constant: '<S142>/Traj_C1'
   *  Constant: '<S142>/Traj_C2'
   *  Constant: '<S142>/Traj_C3'
   *  Constant: '<S142>/dx'
   *  Constant: '<S142>/dy'
   */
  AccTarSel_B.BusCreator_j.Tractory_c0 = AccTarSel_P_g.Traj_C0_Value_a;
  AccTarSel_B.BusCreator_j.Tractory_c1 = AccTarSel_P_g.Traj_C1_Value_o;
  AccTarSel_B.BusCreator_j.Tractory_c2 = AccTarSel_P_g.Traj_C2_Value_g;
  AccTarSel_B.BusCreator_j.Tractory_c3 = AccTarSel_P_g.Traj_C3_Value_j;
  AccTarSel_B.BusCreator_j.EndPoint_x = AccTarSel_P_g.dx_Value;
  AccTarSel_B.BusCreator_j.EndPoint_y = AccTarSel_P_g.dy_Value_i;
  AccTarSel_B.BusCreator_j.AVP_STATE = AccTarSel_P_g.AVP_State_Value;

  /* Switch: '<S5>/Switch' */
  if (AccTarSel_B.Merge_c > AccTarSel_P_g.Switch_Threshold_b) {
    AccTarSel_B.Switch_l = AccTarSel_B.BusCreator_i;
  } else {
    AccTarSel_B.Switch_l = AccTarSel_B.BusCreator_j;
  }

  /* End of Switch: '<S5>/Switch' */

  /* RelationalOperator: '<S160>/Relational Operator' incorporates:
   *  Constant: '<S160>/Constant'
   */
  AccTarSel_B.RelationalOperator_g = (AccTarSel_B.Switch_l.AVP_STATE >
    AccTarSel_P_g.Constant_Value_jc);

  /* If: '<S160>/If' */
  if (AccTarSel_B.RelationalOperator_g) {
    /* Outputs for IfAction SubSystem: '<S160>/If Action Subsystem' incorporates:
     *  ActionPort: '<S163>/Action Port'
     */
    /* Gain: '<S163>/Gain' */
    AccTarSel_B.vx_b = AccTarSel_P_g.Gain_Gain_h * rtu_VSI_VehState_st->vRef;

    /* Gain: '<S163>/Gain1' */
    AccTarSel_B.ax_d = AccTarSel_P_g.Gain1_Gain_g * rtu_VSI_VehState_st->aRef;

    /* BusCreator: '<S163>/Bus Creator2' incorporates:
     *  Constant: '<S163>/Constant'
     *  Constant: '<S163>/Constant1'
     *  Constant: '<S163>/Constant10'
     *  Constant: '<S163>/Constant3'
     *  Constant: '<S163>/Constant5'
     *  Constant: '<S163>/Constant7'
     *  Constant: '<S163>/Constant8'
     *  Constant: '<S163>/Constant9'
     */
    AccTarSel_B.Merge.Valid = AccTarSel_P_g.Constant_Value_ek;
    AccTarSel_B.Merge.Index = AccTarSel_P_g.Constant1_Value_n;
    AccTarSel_B.Merge.dx = AccTarSel_B.Switch_l.EndPoint_x;
    AccTarSel_B.Merge.dy = AccTarSel_P_g.Constant3_Value_nb;
    AccTarSel_B.Merge.vx = AccTarSel_B.vx_b;
    AccTarSel_B.Merge.vy = AccTarSel_P_g.Constant5_Value_n;
    AccTarSel_B.Merge.ax = AccTarSel_B.ax_d;
    AccTarSel_B.Merge.vxAbs = AccTarSel_P_g.Constant7_Value_co;
    AccTarSel_B.Merge.axAbs = AccTarSel_P_g.Constant8_Value_j;
    AccTarSel_B.Merge.Type = AccTarSel_P_g.Constant9_Value_ge;
    AccTarSel_B.Merge.MotionSts = AccTarSel_P_g.Constant10_Value_h;

    /* End of Outputs for SubSystem: '<S160>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S160>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S164>/Action Port'
     */
    /* BusCreator: '<S164>/Bus Creator2' incorporates:
     *  Constant: '<S164>/Constant'
     *  Constant: '<S164>/Constant1'
     *  Constant: '<S164>/Constant10'
     *  Constant: '<S164>/Constant2'
     *  Constant: '<S164>/Constant3'
     *  Constant: '<S164>/Constant4'
     *  Constant: '<S164>/Constant5'
     *  Constant: '<S164>/Constant6'
     *  Constant: '<S164>/Constant7'
     *  Constant: '<S164>/Constant8'
     *  Constant: '<S164>/Constant9'
     */
    AccTarSel_B.Merge.Valid = AccTarSel_P_g.Constant_Value_j0;
    AccTarSel_B.Merge.Index = AccTarSel_P_g.Constant1_Value_cf;
    AccTarSel_B.Merge.dx = AccTarSel_P_g.Constant2_Value_a2;
    AccTarSel_B.Merge.dy = AccTarSel_P_g.Constant3_Value_f;
    AccTarSel_B.Merge.vx = AccTarSel_P_g.Constant4_Value_pj;
    AccTarSel_B.Merge.vy = AccTarSel_P_g.Constant5_Value_e1;
    AccTarSel_B.Merge.ax = AccTarSel_P_g.Constant6_Value_i;
    AccTarSel_B.Merge.vxAbs = AccTarSel_P_g.Constant7_Value_e;
    AccTarSel_B.Merge.axAbs = AccTarSel_P_g.Constant8_Value_b;
    AccTarSel_B.Merge.Type = AccTarSel_P_g.Constant9_Value_h;
    AccTarSel_B.Merge.MotionSts = AccTarSel_P_g.Constant10_Value_hj;

    /* End of Outputs for SubSystem: '<S160>/If Action Subsystem1' */
  }

  /* End of If: '<S160>/If' */

  /* Assignment: '<S13>/Assignment2' incorporates:
   *  Constant: '<S13>/Constant2'
   */
  memcpy(&AccTarSel_B.Assignment2[0], &AccTarSel_B.Assignment1[0], 6U * sizeof
         (ATS_PO_ST));
  AccTarSel_B.Assignment2[AccTarSel_P_g.Constant2_Value_c] = AccTarSel_B.Merge;

  /* Selector: '<S11>/Selector1' incorporates:
   *  Constant: '<S11>/Constant1'
   */
  AccTarSel_B.Selector1_a =
    AccTarSel_B.Assignment2[AccTarSel_P_g.Constant1_Value_i];

  /* RelationalOperator: '<S11>/Relational Operator6' incorporates:
   *  Constant: '<S11>/P_dObjDrvOffMax'
   */
  AccTarSel_B.RelationalOperator6 = (AccTarSel_B.Selector1_a.dx >
    rtP_P_dObjDrvOffMax);

  /* RelationalOperator: '<S11>/Relational Operator7' incorporates:
   *  Constant: '<S11>/P_dObjDrvOffMin'
   */
  AccTarSel_B.RelationalOperator7 = (AccTarSel_B.Selector1_a.dx >
    rtP_P_dObjDrvOffMin);

  /* Sum: '<S11>/Add' */
  AccTarSel_B.vAbsObj = AccTarSel_B.Selector1_a.vx + rtu_VSI_VehState_st->vRef;

  /* RelationalOperator: '<S11>/Relational Operator8' incorporates:
   *  Constant: '<S11>/P_vObjDrvOff'
   */
  AccTarSel_B.RelationalOperator8 = (AccTarSel_B.vAbsObj > rtP_P_vObjDrvOff);

  /* Logic: '<S11>/AND2' */
  AccTarSel_B.AND2_n = (AccTarSel_B.RelationalOperator7 &&
                        AccTarSel_B.RelationalOperator8);

  /* Logic: '<S11>/AND3' */
  AccTarSel_B.AND3_o = (AccTarSel_B.RelationalOperator6 || AccTarSel_B.AND2_n);

  /* If: '<S11>/If' incorporates:
   *  Constant: '<S11>/Constant'
   */
  if (AccTarSel_B.Selector1_a.Valid) {
    /* Outputs for IfAction SubSystem: '<S11>/If Action Subsystem' incorporates:
     *  ActionPort: '<S157>/Action Port'
     */
    AccTarSel_Hold(AccTarSel_B.AND3_o, &AccTarSel_B.DrvOffEnable);

    /* End of Outputs for SubSystem: '<S11>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S11>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S158>/Action Port'
     */
    AccTarSel_Hold(AccTarSel_P_g.Constant_Value_kx, &AccTarSel_B.DrvOffEnable);

    /* End of Outputs for SubSystem: '<S11>/If Action Subsystem1' */
  }

  /* End of If: '<S11>/If' */

  /* BusCreator: '<Root>/BusConversion_InsertedFor_ACC_State_Machine1_at_inport_7' */
  AccTarSel_B.BusConversion_InsertedFor_ACC_S.TimeGapSet =
    *rtu_ACC_HMI_Req_TimeGapSet;
  AccTarSel_B.BusConversion_InsertedFor_ACC_S.ACC_Enable =
    *rtu_ACC_HMI_Req_ACC_Enable;
  AccTarSel_B.BusConversion_InsertedFor_ACC_S.vSetAccSpd =
    *rtu_ACC_HMI_Req_vSetAccSpd;

  /* DataTypeConversion: '<S14>/Data Type Conversion16' */
  AccTarSel_B.DataTypeConversion16_o = (rtu_ZOP2ACC->activate_acc != 0);

  /* Chart: '<Root>/ACC_State_Machine1' incorporates:
   *  Constant: '<Root>/P_tMinDrvPhase'
   *  Constant: '<Root>/P_vStandStill'
   *  Constant: '<Root>/P_vStandStillHyst'
   */
  if (AccTarSel_DW.is_active_c2_AccTarSel == 0U) {
    AccTarSel_DW.is_active_c2_AccTarSel = 1U;
    AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_OFF;
    AccTarSel_B.AST_Info_st.MainState = 0.0F;
    AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
    AccTarSel_B.AST_Info_st.vSet = 0.0F;
  } else {
    switch (AccTarSel_DW.is_c2_AccTarSel) {
     case AccTarSel_IN_ACTIVE:
      if (AccTarSel_B.BusCreator_m.DrvOverride) {
        AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
        AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_OVERRIDE;
        AccTarSel_B.AST_Info_st.MainState = 4.0F;
        AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
      } else {
        tmp = (AccTarSel_B.BusCreator_m.ACC_CancelSw ||
               AccTarSel_B.BusCreator_m.BrakePedalApply ||
               (AccTarSel_B.BusCreator_m.GearLever < 3.0F));
        if (tmp) {
          AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
          AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_PASSIVE;
          AccTarSel_B.AST_Info_st.MainState = 1.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
        } else if (!AccTarSel_B.BusCreator_m.ACC_MainSw) {
          AccTarSel_DW.is_ACTIVE = AccTarSel_IN_NO_ACTIVE_CHILD;
          AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_OFF;
          AccTarSel_B.AST_Info_st.MainState = 0.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
          AccTarSel_B.AST_Info_st.vSet = 0.0F;
        } else {
          if (AccTarSel_B.BusCreator_m.ACC_SpdIncSw &&
              (!AccTarSel_B.BusCreator_m.ACC_SpdIncSwK1)) {
            AccTarSel_B.AST_Info_st.vSet += (5.0F - mod_4K2xLldT(rt_roundf_snf
              (AccTarSel_B.AST_Info_st.vSet * 1.05F * 3.6F))) / 1.05F / 3.6F;
          } else {
            if (AccTarSel_B.BusCreator_m.ACC_SpdDecSw &&
                (!AccTarSel_B.BusCreator_m.ACC_SpdDecSwK1)) {
              AccTarSel_B.AST_Info_st.vSet = (mod_4K2xLldT(5.0F - mod_4K2xLldT
                (rt_roundf_snf(AccTarSel_B.AST_Info_st.vSet * 1.05F * 3.6F))) /
                1.05F / 3.6F + AccTarSel_B.AST_Info_st.vSet) - 1.32275128F;
            }
          }

          if (AccTarSel_B.DataTypeConversion16_o) {
            if (AccTarSel_B.BusConversion_InsertedFor_ACC_S.vSetAccSpd >= 60.0F)
            {
              AccTarSel_B.AST_Info_st.vSet =
                AccTarSel_B.BusConversion_InsertedFor_ACC_S.vSetAccSpd / 1.05F /
                3.6F;
            }
          } else {
            if (AccTarSel_B.BusConversion_InsertedFor_ACC_S.vSetAccSpd >= 30.0F)
            {
              AccTarSel_B.AST_Info_st.vSet =
                AccTarSel_B.BusConversion_InsertedFor_ACC_S.vSetAccSpd / 1.05F /
                3.6F;
            }
          }

          tmp = (rtIsNaNF(AccTarSel_B.AST_Info_st.vSet) ||
                 (AccTarSel_B.AST_Info_st.vSet > 26.455026455026456));
          if (tmp) {
            u1 = 26.4550266F;
          } else {
            u1 = AccTarSel_B.AST_Info_st.vSet;
          }

          AccTarSel_B.AST_Info_st.vSet = u1;
          tmp = (rtIsNaNF(AccTarSel_B.AST_Info_st.vSet) ||
                 (AccTarSel_B.AST_Info_st.vSet < 7.9365079365079358));
          if (tmp) {
            u1 = 7.9365077F;
          } else {
            u1 = AccTarSel_B.AST_Info_st.vSet;
          }

          AccTarSel_B.AST_Info_st.vSet = u1;
          if (AccTarSel_DW.is_ACTIVE == AccTarSel_IN_Drive) {
            tmp = ((rtu_VSI_VehState_st->vRef < rtP_P_vStandStill) &&
                   (AccTarSel_B.AST_Info_st.tMinInDrv == 0.0F));
            if (tmp) {
              AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Standstill;
              AccTarSel_B.AST_Info_st.MainState = 3.0F;
              AccTarSel_B.AST_Info_st.tMinInDrv = rtP_P_tMinDrvPhase;
            } else {
              if (rtu_VSI_VehState_st->vRef > rtP_P_vStandStillHyst) {
                if (AccTarSel_B.AST_Info_st.tMinInDrv > rtu_SYS_Info_st->dT) {
                  AccTarSel_B.AST_Info_st.tMinInDrv -= rtu_SYS_Info_st->dT;
                } else {
                  AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
                }
              }
            }
          } else {
            if (AccTarSel_B.DrvOffEnable) {
              AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Drive;
              AccTarSel_B.AST_Info_st.MainState = 2.0F;
            }
          }
        }
      }
      break;

     case AccTarSel_IN_OFF:
      if (AccTarSel_B.BusCreator_m.ACC_MainSw) {
        AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_PASSIVE;
        AccTarSel_B.AST_Info_st.MainState = 1.0F;
        AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
      }
      break;

     case AccTarSel_IN_OVERRIDE:
      if (!AccTarSel_B.BusCreator_m.DrvOverride) {
        AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_ACTIVE;
        AccTarSel_enter_atomic_ACTIVE(rtu_VSI_VehState_st);
        AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Drive;
        AccTarSel_B.AST_Info_st.MainState = 2.0F;
      } else {
        tmp = (AccTarSel_B.BusCreator_m.ACC_CancelSw ||
               AccTarSel_B.BusCreator_m.BrakePedalApply ||
               (AccTarSel_B.BusCreator_m.GearLever < 3.0F));
        if (tmp) {
          AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_PASSIVE;
          AccTarSel_B.AST_Info_st.MainState = 1.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
        } else {
          if (!AccTarSel_B.BusCreator_m.ACC_MainSw) {
            AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_OFF;
            AccTarSel_B.AST_Info_st.MainState = 0.0F;
            AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
            AccTarSel_B.AST_Info_st.vSet = 0.0F;
          }
        }
      }
      break;

     default:
      tmp = ((AccTarSel_B.BusCreator_m.ACC_SetSw ||
              (AccTarSel_B.BusCreator_m.ACC_ResSw &&
               (AccTarSel_B.AST_Info_st.vSet != 0.0F))) &&
             (!AccTarSel_B.BusCreator_m.BrakePedalApply) &&
             (AccTarSel_B.BusCreator_m.GearLever >= 3.0F));
      if (tmp) {
        AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_ACTIVE;
        AccTarSel_enter_atomic_ACTIVE(rtu_VSI_VehState_st);
        AccTarSel_DW.is_ACTIVE = AccTarSel_IN_Drive;
        AccTarSel_B.AST_Info_st.MainState = 2.0F;
      } else {
        if (!AccTarSel_B.BusCreator_m.ACC_MainSw) {
          AccTarSel_DW.is_c2_AccTarSel = AccTarSel_IN_OFF;
          AccTarSel_B.AST_Info_st.MainState = 0.0F;
          AccTarSel_B.AST_Info_st.tMinInDrv = 0.0F;
          AccTarSel_B.AST_Info_st.vSet = 0.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/ACC_State_Machine1' */

  /* Sum: '<S21>/Add1' */
  AccTarSel_B.Add1_c = AccTarSel_B.AST_Info_st.vSet - AccTarSel_B.Gain;

  /* MinMax: '<S21>/Max' */
  u0 = AccTarSel_B.Add;
  u1 = AccTarSel_B.Add1_c;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Max_g = u1;

  /* End of MinMax: '<S21>/Max' */

  /* Switch: '<S22>/Switch1' incorporates:
   *  Constant: '<S22>/Constant5'
   *  Constant: '<S22>/vSetAVP'
   */
  if (AccTarSel_B.Switch_l.AVP_STATE != 0) {
    AccTarSel_B.Switch1_j = AccTarSel_P_g.vSetAVP_Value;
  } else {
    AccTarSel_B.Switch1_j = AccTarSel_P_g.Constant5_Value_h;
  }

  /* End of Switch: '<S22>/Switch1' */

  /* Gain: '<S22>/Gain' */
  AccTarSel_B.Gain_n = AccTarSel_P_g.Gain_Gain_kl * rtu_ZOP2ACC->spd_lmt;

  /* Switch: '<S22>/Switch' incorporates:
   *  Constant: '<S22>/Constant2'
   */
  if (rtu_ZOP2ACC->spd_lmt >= AccTarSel_P_g.Switch_Threshold_n) {
    AccTarSel_B.Switch_o = AccTarSel_B.Gain_n;
  } else {
    AccTarSel_B.Switch_o = AccTarSel_P_g.Constant2_Value_ah;
  }

  /* End of Switch: '<S22>/Switch' */

  /* MinMax: '<S104>/Max' incorporates:
   *  Constant: '<S22>/Constant1'
   */
  u0 = rtu_SYS_Info_st->dT;
  u1 = rtP_P_tFiltSpdLim;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Max_gf = u1;

  /* End of MinMax: '<S104>/Max' */

  /* Product: '<S104>/Divide' */
  AccTarSel_B.filtFactor = rtu_SYS_Info_st->dT / AccTarSel_B.Max_gf;

  /* Product: '<S104>/Multiply' */
  AccTarSel_B.Multiply_d = AccTarSel_B.Switch_o * AccTarSel_B.filtFactor;

  /* Sum: '<S104>/Add' incorporates:
   *  Constant: '<S104>/Constant'
   */
  AccTarSel_B.Add_ni = AccTarSel_P_g.Constant_Value_lt - AccTarSel_B.filtFactor;

  /* Memory: '<S22>/Memory' */
  AccTarSel_B.Memory_h = AccTarSel_DW.Memory_PreviousInput_i;

  /* Product: '<S104>/Multiply1' */
  AccTarSel_B.Multiply1_g = AccTarSel_B.Add_ni * AccTarSel_B.Memory_h;

  /* Sum: '<S104>/Add1' */
  AccTarSel_B.Add1_a = AccTarSel_B.Multiply_d + AccTarSel_B.Multiply1_g;

  /* MinMax: '<S22>/Min' */
  u0 = AccTarSel_B.Max_g;
  u1 = AccTarSel_B.Switch1_j;
  if ((u0 < u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  u0 = AccTarSel_B.Add1_a;
  if ((!(u1 < u0)) && (!rtIsNaNF(u0))) {
    u1 = u0;
  }

  u0 = AccTarSel_B.AST_Info_st.vSet;
  if ((!(u1 < u0)) && (!rtIsNaNF(u0))) {
    u1 = u0;
  }

  AccTarSel_B.Min_d = u1;

  /* End of MinMax: '<S22>/Min' */

  /* Sum: '<S22>/Add' */
  AccTarSel_B.vDiff = AccTarSel_B.Min_d - rtu_VSI_VehState_st->vRef;

  /* RelationalOperator: '<S22>/Relational Operator' incorporates:
   *  Constant: '<S22>/Constant'
   */
  AccTarSel_B.RelationalOperator_kf = (AccTarSel_B.vDiff >
    AccTarSel_P_g.Constant_Value_m3);

  /* If: '<S22>/If' incorporates:
   *  Constant: '<S22>/P_tSSCNeg'
   *  Constant: '<S22>/P_tSSCPos'
   */
  if (AccTarSel_B.RelationalOperator_kf) {
    /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    AccTarSel_IfActionSubsystem_b(rtP_P_tSSCPos, &AccTarSel_B.tSSC);

    /* End of Outputs for SubSystem: '<S22>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S103>/Action Port'
     */
    AccTarSel_IfActionSubsystem_b(rtP_P_tSSCNeg, &AccTarSel_B.tSSC);

    /* End of Outputs for SubSystem: '<S22>/If Action Subsystem1' */
  }

  /* End of If: '<S22>/If' */

  /* Product: '<S22>/Divide' */
  AccTarSel_B.aSSC = AccTarSel_B.vDiff / AccTarSel_B.tSSC;

  /* Memory: '<S1>/Memory' */
  AccTarSel_B.Memory_a = AccTarSel_DW.Memory_PreviousInput_a;

  /* RelationalOperator: '<S137>/Equal1' incorporates:
   *  Constant: '<S137>/Constant'
   */
  AccTarSel_B.Equal1 = (AccTarSel_B.AST_Info_st.MainState ==
                        AccTarSel_P_g.Constant_Value_os);

  /* Logic: '<S4>/AND2' */
  AccTarSel_B.AND2_k = ((*rtu_ACC_HMI_Req_TimeGapSet != 0) && AccTarSel_B.Equal1);

  /* Logic: '<S4>/AND1' */
  AccTarSel_B.AND1_o[0] = (AccTarSel_B.Equal1 &&
    AccTarSel_B.BusCreator_m.ACC_DistIncSw);
  AccTarSel_B.AND1_o[1] = (AccTarSel_B.Equal1 &&
    AccTarSel_B.BusCreator_m.ACC_DistDecSw);

  /* Memory: '<S4>/Memory' */
  AccTarSel_B.Memory_g[0] = AccTarSel_DW.Memory_PreviousInput_lc[0];
  AccTarSel_B.Memory_g[1] = AccTarSel_DW.Memory_PreviousInput_lc[1];

  /* RelationalOperator: '<S4>/Equal' */
  AccTarSel_B.Equal[0] = (AccTarSel_B.AND1_o[0] != AccTarSel_B.Memory_g[0]);
  AccTarSel_B.Equal[1] = (AccTarSel_B.AND1_o[1] != AccTarSel_B.Memory_g[1]);

  /* Logic: '<S4>/AND' */
  AccTarSel_B.AND_a[0] = (AccTarSel_B.AND1_o[0] && AccTarSel_B.Equal[0]);
  AccTarSel_B.AND_a[1] = (AccTarSel_B.AND1_o[1] && AccTarSel_B.Equal[1]);

  /* Memory: '<S4>/Memory1' */
  AccTarSel_B.Memory1_l = AccTarSel_DW.Memory1_PreviousInput_j;

  /* If: '<S4>/If1' */
  if (AccTarSel_B.AND_a[0]) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
     *  ActionPort: '<S134>/Action Port'
     */
    /* Sum: '<S134>/Add' incorporates:
     *  Constant: '<S134>/Constant'
     */
    AccTarSel_B.Add_i = AccTarSel_B.Memory1_l + AccTarSel_P_g.Constant_Value_ji;

    /* MinMax: '<S134>/Max' incorporates:
     *  Constant: '<S134>/Constant1'
     */
    u0 = AccTarSel_B.Add_i;
    u1 = AccTarSel_P_g.Constant1_Value_o;
    if ((u0 < u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Merge_o = u1;

    /* End of MinMax: '<S134>/Max' */
    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
  } else if (AccTarSel_B.AND_a[1]) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S135>/Action Port'
     */
    /* Sum: '<S135>/Add' incorporates:
     *  Constant: '<S135>/Constant'
     */
    AccTarSel_B.Add_g = AccTarSel_B.Memory1_l - AccTarSel_P_g.Constant_Value_on;

    /* MinMax: '<S135>/Max' incorporates:
     *  Constant: '<S135>/Constant1'
     */
    u0 = AccTarSel_B.Add_g;
    u1 = AccTarSel_P_g.Constant1_Value_jv;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Merge_o = u1;

    /* End of MinMax: '<S135>/Max' */
    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S136>/Action Port'
     */
    AccTarSel_IfActionSubsystem_b(AccTarSel_B.Memory1_l, &AccTarSel_B.Merge_o);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem2' */
  }

  /* End of If: '<S4>/If1' */

  /* Switch: '<S4>/Switch' */
  if (AccTarSel_B.AND2_k) {
    AccTarSel_B.Switch_e = AccTarSel_B.AND2_k;
  } else {
    AccTarSel_B.Switch_e = AccTarSel_B.Merge_o;
  }

  /* End of Switch: '<S4>/Switch' */

  /* Lookup_n-D: '<S4>/1-D Lookup Table' */
  bpIdx = plook_u32f_bincka(AccTarSel_B.Switch_e,
    AccTarSel_P_g.uDLookupTable_bp01Data_h, 2U);
  AccTarSel_B.uDLookupTable_i = AccTarSel_P_g.uDLookupTable_tableData_p[bpIdx];

  /* Memory: '<S1>/Memory1' */
  memcpy(&AccTarSel_B.Memory1_h[0], &AccTarSel_DW.Memory1_PreviousInput[0], 6U *
         sizeof(ACC_FOC_INFO_ST));

  /* Outputs for Iterator SubSystem: '<S1>/FollowObjCtrl' incorporates:
   *  ForIterator: '<S20>/For Iterator'
   */
  /* Constant: '<S1>/Constant3' */
  for (i_cnt = 0; i_cnt < AccTarSel_P_g.Constant3_Value; i_cnt++) {
    AccTarSel_B.ForIterator_j = i_cnt;

    /* Selector: '<S20>/Selector1' */
    AccTarSel_B.ATS_Po_st = AccTarSel_B.Assignment2[AccTarSel_B.ForIterator_j];

    /* Selector: '<S20>/Selector2' */
    AccTarSel_B.Selector2_f = AccTarSel_B.Memory1_h[AccTarSel_B.ForIterator_j];

    /* If: '<S20>/If' */
    if (AccTarSel_B.ATS_Po_st.Valid) {
      /* Outputs for IfAction SubSystem: '<S20>/FollowObjValid' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      /* Sum: '<S30>/Add' */
      AccTarSel_B.vAbsObj_e = AccTarSel_B.ATS_Po_st.vx +
        rtu_VSI_VehState_st->vRef;

      /* Product: '<S44>/Multiply' incorporates:
       *  Constant: '<S44>/Constant'
       */
      AccTarSel_B.Multiply_j = AccTarSel_B.ATS_Po_st.ax * rtP_P_tPredObjLeav;

      /* Sum: '<S44>/Add' */
      AccTarSel_B.Add_m = AccTarSel_B.ATS_Po_st.vx + AccTarSel_B.Multiply_j;

      /* RelationalOperator: '<S44>/Relational Operator' incorporates:
       *  Constant: '<S44>/Constant1'
       */
      AccTarSel_B.RelationalOperator_df = (AccTarSel_B.Add_m <=
        AccTarSel_P_g.Constant1_Value);

      /* RelationalOperator: '<S44>/Relational Operator2' incorporates:
       *  Constant: '<S44>/Constant2'
       */
      AccTarSel_B.RelationalOperator2_i = (AccTarSel_B.ATS_Po_st.vx >=
        AccTarSel_P_g.Constant2_Value);

      /* RelationalOperator: '<S44>/Relational Operator1' incorporates:
       *  Constant: '<S44>/Constant2'
       */
      AccTarSel_B.RelationalOperator1_g1 = (AccTarSel_B.ATS_Po_st.ax >=
        AccTarSel_P_g.Constant2_Value);

      /* Logic: '<S44>/AND' */
      AccTarSel_B.AND_ak = (AccTarSel_B.RelationalOperator2_i &&
                            AccTarSel_B.RelationalOperator1_g1);

      /* SignalConversion: '<S30>/SigConversion_InsertedFor_Bus Selector2_at_outport_0' */
      AccTarSel_B.ObjLeaving_h = AccTarSel_B.Selector2_f.ObjLeaving;

      /* If: '<S44>/If' */
      if (AccTarSel_B.RelationalOperator_df) {
        /* Outputs for IfAction SubSystem: '<S44>/Approaching' incorporates:
         *  ActionPort: '<S49>/Action Port'
         */
        AccTarSel_Approaching(&AccTarSel_B.Merge_l, &AccTarSel_P_g.Approaching);

        /* End of Outputs for SubSystem: '<S44>/Approaching' */
      } else if (AccTarSel_B.AND_ak) {
        /* Outputs for IfAction SubSystem: '<S44>/Leaving' incorporates:
         *  ActionPort: '<S51>/Action Port'
         */
        AccTarSel_Approaching(&AccTarSel_B.Merge_l, &AccTarSel_P_g.Leaving);

        /* End of Outputs for SubSystem: '<S44>/Leaving' */
      } else {
        /* Outputs for IfAction SubSystem: '<S44>/Hold' incorporates:
         *  ActionPort: '<S50>/Action Port'
         */
        AccTarSel_Hold(AccTarSel_B.ObjLeaving_h, &AccTarSel_B.Merge_l);

        /* End of Outputs for SubSystem: '<S44>/Hold' */
      }

      /* End of If: '<S44>/If' */

      /* Switch: '<S44>/Switch' */
      if (AccTarSel_B.Selector2_f.FirstCyc) {
        AccTarSel_B.Switch_h1 = AccTarSel_B.RelationalOperator_df;
      } else {
        AccTarSel_B.Switch_h1 = AccTarSel_B.Merge_l;
      }

      /* End of Switch: '<S44>/Switch' */

      /* RelationalOperator: '<S45>/Relational Operator' incorporates:
       *  Constant: '<S45>/Constant2'
       */
      AccTarSel_B.RelationalOperator_mi = (AccTarSel_B.ATS_Po_st.MotionSts ==
        AccTarSel_P_g.Constant2_Value_ju);

      /* RelationalOperator: '<S45>/Relational Operator1' incorporates:
       *  Constant: '<S45>/Constant3'
       */
      AccTarSel_B.RelationalOperator1_j3 = (AccTarSel_B.ATS_Po_st.MotionSts ==
        AccTarSel_P_g.Constant3_Value_a);

      /* Logic: '<S45>/OR' */
      AccTarSel_B.OR_i = (AccTarSel_B.RelationalOperator_mi ||
                          AccTarSel_B.RelationalOperator1_j3);

      /* SignalConversion: '<S30>/SigConversion_InsertedFor_Bus Selector1_at_outport_2' */
      AccTarSel_B.axAbs_h = AccTarSel_B.ATS_Po_st.axAbs;

      /* MinMax: '<S45>/Min1' incorporates:
       *  Constant: '<S45>/Constant1'
       */
      u0 = AccTarSel_B.axAbs_h;
      u1 = AccTarSel_P_g.Constant1_Value_fq;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Min1_l = u1;

      /* End of MinMax: '<S45>/Min1' */

      /* Product: '<S45>/Divide' */
      AccTarSel_B.Divide_p = AccTarSel_B.vAbsObj_e / AccTarSel_B.Min1_l;

      /* Abs: '<S45>/Abs' */
      AccTarSel_B.Abs_f = (real32_T)fabs(AccTarSel_B.Divide_p);

      /* MinMax: '<S45>/Min' incorporates:
       *  Constant: '<S45>/Constant'
       */
      u0 = AccTarSel_P_g.Constant_Value_b;
      u1 = AccTarSel_B.Abs_f;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Min_p = u1;

      /* End of MinMax: '<S45>/Min' */

      /* Switch: '<S45>/Switch' incorporates:
       *  Constant: '<S45>/Constant'
       */
      if (AccTarSel_B.axAbs_h >= AccTarSel_P_g.Switch_Threshold) {
        AccTarSel_B.Switch_p = AccTarSel_P_g.Constant_Value_b;
      } else {
        AccTarSel_B.Switch_p = AccTarSel_B.Min_p;
      }

      /* End of Switch: '<S45>/Switch' */

      /* Switch: '<S45>/Switch1' incorporates:
       *  Constant: '<S45>/Constant4'
       */
      if (AccTarSel_B.OR_i) {
        AccTarSel_B.Switch1_d = AccTarSel_P_g.Constant4_Value;
      } else {
        AccTarSel_B.Switch1_d = AccTarSel_B.Switch_p;
      }

      /* End of Switch: '<S45>/Switch1' */

      /* RelationalOperator: '<S30>/Relational Operator3' incorporates:
       *  Constant: '<S30>/Constant1'
       */
      AccTarSel_B.RelationalOperator3_m = (AccTarSel_B.Switch1_d >=
        AccTarSel_P_g.Constant1_Value_dk);

      /* RelationalOperator: '<S30>/Relational Operator1' incorporates:
       *  Constant: '<S30>/Constant'
       */
      AccTarSel_B.RelationalOperator1_m = (AccTarSel_B.axAbs_h >=
        AccTarSel_P_g.Constant_Value_h);

      /* RelationalOperator: '<S42>/Relational Operator' incorporates:
       *  Constant: '<S42>/Constant2'
       */
      AccTarSel_B.RelationalOperator_pq = (AccTarSel_B.ATS_Po_st.vx >
        AccTarSel_P_g.Constant2_Value_cl);

      /* Gain: '<S41>/Gain' */
      AccTarSel_B.Gain_i = AccTarSel_P_g.Gain_Gain * AccTarSel_B.ATS_Po_st.dx;

      /* SignalConversion: '<S32>/TmpSignal ConversionAtdAimLwSpdObjInport2' incorporates:
       *  Constant: '<S32>/Constant1'
       *  Constant: '<S32>/Constant2'
       */
      AccTarSel_B.TmpSignalConversionAtdAimLwSpdO[0] =
        AccTarSel_P_g.Constant1_Value_dh;
      AccTarSel_B.TmpSignalConversionAtdAimLwSpdO[1] =
        AccTarSel_P_g.Constant2_Value_a;

      /* SignalConversion: '<S32>/TmpSignal ConversionAt Inport2' incorporates:
       *  Constant: '<S32>/Constant5'
       *  Constant: '<S32>/Constant6'
       */
      AccTarSel_B.TmpSignalConversionAtInport2[0] =
        AccTarSel_P_g.Constant5_Value_j;
      AccTarSel_B.TmpSignalConversionAtInport2[1] =
        AccTarSel_P_g.Constant6_Value;

      /* SignalConversion: '<S32>/TmpSignal ConversionAt Inport3' incorporates:
       *  Constant: '<S32>/Constant7'
       *  Constant: '<S32>/Constant8'
       */
      AccTarSel_B.TmpSignalConversionAtInport3[0] =
        AccTarSel_P_g.Constant7_Value;
      AccTarSel_B.TmpSignalConversionAtInport3[1] =
        AccTarSel_P_g.Constant8_Value;

      /* S-Function (sfix_look1_dyn): '<S32>/ ' */
      /* Dynamic Look-Up Table Block: '<S32>/ '
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.u),
        &AccTarSel_B.TmpSignalConversionAtInport3[0],
        AccTarSel_B.uDLookupTable_i, &AccTarSel_B.TmpSignalConversionAtInport2[0],
        1U);

      /* SignalConversion: '<S32>/TmpSignal ConversionAtdAimLwSpdObjInport3' incorporates:
       *  Constant: '<S32>/Constant4'
       */
      AccTarSel_B.TmpSignalConversionAtdAimLwSp_c[0] = AccTarSel_B.u;
      AccTarSel_B.TmpSignalConversionAtdAimLwSp_c[1] =
        AccTarSel_P_g.Constant4_Value_k;

      /* S-Function (sfix_look1_dyn): '<S32>/dAimLwSpdObj' */
      /* Dynamic Look-Up Table Block: '<S32>/dAimLwSpdObj'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.dAimLwSpdObj),
        &AccTarSel_B.TmpSignalConversionAtdAimLwSp_c[0],
        AccTarSel_B.ATS_Po_st.vxAbs,
        &AccTarSel_B.TmpSignalConversionAtdAimLwSpdO[0], 1U);

      /* SignalConversion: '<S81>/TmpSignal ConversionAtGainTimeGap Inport2' incorporates:
       *  Constant: '<S81>/Constant5'
       *  Constant: '<S81>/Constant6'
       */
      AccTarSel_B.TmpSignalConversionAtGainTimeGa[0] =
        AccTarSel_P_g.Constant5_Value_k;
      AccTarSel_B.TmpSignalConversionAtGainTimeGa[1] =
        AccTarSel_P_g.Constant6_Value_f;

      /* Lookup_n-D: '<S81>/1-D Lookup Table' */
      bpIdx = plook_u32f_bincka(AccTarSel_B.uDLookupTable_i,
        AccTarSel_P_g.uDLookupTable_bp01Data_n, 2U);
      AccTarSel_B.uDLookupTable_o =
        AccTarSel_P_g.uDLookupTable_tableData_c[bpIdx];

      /* SignalConversion: '<S81>/TmpSignal ConversionAtGainTimeGap Inport3' incorporates:
       *  Constant: '<S81>/Constant1'
       */
      AccTarSel_B.TmpSignalConversionAtGainTime_o[0] =
        AccTarSel_P_g.Constant1_Value_ft;
      AccTarSel_B.TmpSignalConversionAtGainTime_o[1] =
        AccTarSel_B.uDLookupTable_o;

      /* S-Function (sfix_look1_dyn): '<S81>/GainTimeGap ' */
      /* Dynamic Look-Up Table Block: '<S81>/GainTimeGap '
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.GainTimeGap),
        &AccTarSel_B.TmpSignalConversionAtGainTime_o[0],
        rtu_VSI_VehState_st->vRef, &AccTarSel_B.TmpSignalConversionAtGainTimeGa
        [0], 1U);

      /* Product: '<S81>/tTimeGapAct' */
      AccTarSel_B.tTimeGapAct = AccTarSel_B.GainTimeGap *
        AccTarSel_B.uDLookupTable_i;

      /* Product: '<S81>/Multiply' */
      AccTarSel_B.Multiply_f = rtu_VSI_VehState_st->vRef *
        AccTarSel_B.tTimeGapAct;

      /* Sum: '<S32>/Add3' */
      AccTarSel_B.Add3 = AccTarSel_B.dAimLwSpdObj + AccTarSel_B.Multiply_f;

      /* RelationalOperator: '<S32>/Relational Operator1' incorporates:
       *  Constant: '<S32>/Constant3'
       */
      AccTarSel_B.RelationalOperator1_o = (AccTarSel_B.ATS_Po_st.Index ==
        AccTarSel_P_g.Constant3_Value_ab);

      /* RelationalOperator: '<S32>/Relational Operator2' incorporates:
       *  Constant: '<S32>/Constant9'
       */
      AccTarSel_B.RelationalOperator2_gz = (AccTarSel_B.ATS_Po_st.Type ==
        AccTarSel_P_g.Constant9_Value_g);

      /* Logic: '<S32>/AND' */
      AccTarSel_B.AND_i = (AccTarSel_B.RelationalOperator1_o &&
                           AccTarSel_B.RelationalOperator2_gz);

      /* Switch: '<S32>/Switch2' incorporates:
       *  Constant: '<S32>/P_dAimMin'
       *  Constant: '<S32>/P_dAimMinAVP'
       */
      if (AccTarSel_B.AND_i) {
        AccTarSel_B.Switch2_b = rtP_P_dAimMinAVP;
      } else {
        AccTarSel_B.Switch2_b = rtP_P_dAimMin;
      }

      /* End of Switch: '<S32>/Switch2' */

      /* MinMax: '<S32>/Max' */
      u0 = AccTarSel_B.Add3;
      u1 = AccTarSel_B.Switch2_b;
      if ((u0 > u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Max_h = u1;

      /* End of MinMax: '<S32>/Max' */

      /* Gain: '<S32>/Gain3' */
      AccTarSel_B.Gain3 = AccTarSel_P_g.Gain3_Gain * AccTarSel_B.ATS_Po_st.ax;

      /* Sum: '<S32>/Add2' */
      AccTarSel_B.Add2_o = AccTarSel_B.ATS_Po_st.vx + AccTarSel_B.Gain3;

      /* MinMax: '<S32>/Min1' */
      u0 = AccTarSel_B.ATS_Po_st.vx;
      u1 = AccTarSel_B.Add2_o;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Min1_j = u1;

      /* End of MinMax: '<S32>/Min1' */

      /* MinMax: '<S32>/Min' incorporates:
       *  Constant: '<S32>/Constant'
       */
      u0 = AccTarSel_B.Min1_j;
      u1 = AccTarSel_P_g.Constant_Value_ff;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Min_g = u1;

      /* End of MinMax: '<S32>/Min' */

      /* Gain: '<S32>/Gain' */
      AccTarSel_B.Gain_in = AccTarSel_P_g.Gain_Gain_m * AccTarSel_B.Min_g;

      /* Abs: '<S32>/Abs' */
      AccTarSel_B.Abs_p = (real32_T)fabs(AccTarSel_B.Gain_in);

      /* Sum: '<S32>/Add' */
      AccTarSel_B.Add_of = AccTarSel_B.Max_h + AccTarSel_B.Abs_p;

      /* RelationalOperator: '<S32>/Relational Operator' */
      AccTarSel_B.RelationalOperator_go = (AccTarSel_B.Add_of <
        AccTarSel_B.ATS_Po_st.dx);

      /* Gain: '<S32>/Gain2' */
      AccTarSel_B.Gain2 = AccTarSel_P_g.Gain2_Gain * AccTarSel_B.Add_of;

      /* Gain: '<S32>/Gain1' */
      AccTarSel_B.Gain1 = AccTarSel_P_g.Gain1_Gain * AccTarSel_B.ATS_Po_st.dx;

      /* Sum: '<S32>/Add1' */
      AccTarSel_B.Add1_o = AccTarSel_B.Gain2 + AccTarSel_B.Gain1;

      /* Switch: '<S32>/Switch' */
      if (AccTarSel_B.RelationalOperator_go) {
        AccTarSel_B.Switch_pn = AccTarSel_B.Add_of;
      } else {
        AccTarSel_B.Switch_pn = AccTarSel_B.Add1_o;
      }

      /* End of Switch: '<S32>/Switch' */

      /* MinMax: '<S32>/Max1' incorporates:
       *  Constant: '<S32>/Constant10'
       */
      u0 = AccTarSel_P_g.Constant10_Value;
      u1 = AccTarSel_B.Switch_pn;
      if ((u0 > u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Max1_o = u1;

      /* End of MinMax: '<S32>/Max1' */

      /* MinMax: '<S80>/Max' incorporates:
       *  Constant: '<S32>/P_tFiltDAim'
       */
      u0 = rtu_SYS_Info_st->dT;
      u1 = rtP_P_tFiltDAim;
      if ((u0 > u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Max_d4 = u1;

      /* End of MinMax: '<S80>/Max' */

      /* Product: '<S80>/Divide' */
      AccTarSel_B.filtFactor_pj = rtu_SYS_Info_st->dT / AccTarSel_B.Max_d4;

      /* Product: '<S80>/Multiply' */
      AccTarSel_B.Multiply_mk = AccTarSel_B.Max1_o * AccTarSel_B.filtFactor_pj;

      /* Sum: '<S80>/Add' incorporates:
       *  Constant: '<S80>/Constant'
       */
      AccTarSel_B.Add_pz = AccTarSel_P_g.Constant_Value_i -
        AccTarSel_B.filtFactor_pj;

      /* Product: '<S80>/Multiply1' */
      AccTarSel_B.Multiply1_ge = AccTarSel_B.Add_pz *
        AccTarSel_B.Selector2_f.dAim;

      /* Sum: '<S80>/Add1' */
      AccTarSel_B.Add1_cv = AccTarSel_B.Multiply_mk + AccTarSel_B.Multiply1_ge;

      /* Switch: '<S32>/Switch1' */
      if (AccTarSel_B.Selector2_f.FirstCyc) {
        AccTarSel_B.Switch1_p = AccTarSel_B.Max1_o;
      } else {
        AccTarSel_B.Switch1_p = AccTarSel_B.Add1_cv;
      }

      /* End of Switch: '<S32>/Switch1' */

      /* SignalConversion: '<S41>/TmpSignal ConversionAtdImmerseInport2' incorporates:
       *  Constant: '<S41>/Constant'
       *  Constant: '<S41>/Constant2'
       */
      AccTarSel_B.TmpSignalConversionAtdImmerseIn[0] =
        AccTarSel_P_g.Constant_Value_l2;
      AccTarSel_B.TmpSignalConversionAtdImmerseIn[1] =
        AccTarSel_P_g.Constant2_Value_b;

      /* Gain: '<S41>/kImsLowSpd' */
      AccTarSel_B.kImsLowSpd = AccTarSel_P_g.kImsLowSpd_Gain *
        AccTarSel_B.Switch1_p;

      /* MinMax: '<S41>/Min1' incorporates:
       *  Constant: '<S41>/Constant3'
       */
      u0 = AccTarSel_P_g.Constant3_Value_l;
      u1 = AccTarSel_B.kImsLowSpd;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Min1_d = u1;

      /* End of MinMax: '<S41>/Min1' */

      /* Gain: '<S41>/kImsHighSpd' */
      AccTarSel_B.kImsHighSpd = AccTarSel_P_g.kImsHighSpd_Gain *
        AccTarSel_B.Switch1_p;

      /* SignalConversion: '<S41>/TmpSignal ConversionAtdImmerseInport3' */
      AccTarSel_B.TmpSignalConversionAtdImmerse_e[0] = AccTarSel_B.Min1_d;
      AccTarSel_B.TmpSignalConversionAtdImmerse_e[1] = AccTarSel_B.kImsHighSpd;

      /* S-Function (sfix_look1_dyn): '<S41>/dImmerse' */
      /* Dynamic Look-Up Table Block: '<S41>/dImmerse'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.dImmerse),
        &AccTarSel_B.TmpSignalConversionAtdImmerse_e[0], AccTarSel_B.vAbsObj_e,
        &AccTarSel_B.TmpSignalConversionAtdImmerseIn[0], 1U);

      /* SignalConversion: '<S41>/TmpSignal ConversionAtkVxRefInport2' incorporates:
       *  Constant: '<S41>/Constant10'
       *  Constant: '<S41>/Constant9'
       */
      AccTarSel_B.TmpSignalConversionAtkVxRefInpo[0] =
        AccTarSel_P_g.Constant9_Value_i;
      AccTarSel_B.TmpSignalConversionAtkVxRefInpo[1] =
        AccTarSel_P_g.Constant10_Value_i;

      /* SignalConversion: '<S41>/TmpSignal ConversionAtkVxRelInport2' incorporates:
       *  Constant: '<S41>/Constant1'
       *  Constant: '<S41>/Constant4'
       *  Constant: '<S41>/Constant5'
       */
      AccTarSel_B.TmpSignalConversionAtkVxRelInpo[0] =
        AccTarSel_P_g.Constant1_Value_ls;
      AccTarSel_B.TmpSignalConversionAtkVxRelInpo[1] =
        AccTarSel_P_g.Constant4_Value_kp;
      AccTarSel_B.TmpSignalConversionAtkVxRelInpo[2] =
        AccTarSel_P_g.Constant5_Value_ja;

      /* SignalConversion: '<S41>/TmpSignal ConversionAtkVxRelInport3' incorporates:
       *  Constant: '<S41>/Constant6'
       *  Constant: '<S41>/Constant7'
       *  Constant: '<S41>/Constant8'
       */
      AccTarSel_B.TmpSignalConversionAtkVxRelIn_h[0] =
        AccTarSel_P_g.Constant6_Value_n;
      AccTarSel_B.TmpSignalConversionAtkVxRelIn_h[1] =
        AccTarSel_P_g.Constant7_Value_d;
      AccTarSel_B.TmpSignalConversionAtkVxRelIn_h[2] =
        AccTarSel_P_g.Constant8_Value_k;

      /* S-Function (sfix_look1_dyn): '<S41>/kVxRel' */
      /* Dynamic Look-Up Table Block: '<S41>/kVxRel'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.kVxRel),
        &AccTarSel_B.TmpSignalConversionAtkVxRelIn_h[0],
        AccTarSel_B.ATS_Po_st.vx, &AccTarSel_B.TmpSignalConversionAtkVxRelInpo[0],
        2U);

      /* SignalConversion: '<S41>/TmpSignal ConversionAtkVxRefInport3' incorporates:
       *  Constant: '<S41>/Constant12'
       */
      AccTarSel_B.TmpSignalConversionAtkVxRefIn_j[0] =
        AccTarSel_P_g.Constant12_Value;
      AccTarSel_B.TmpSignalConversionAtkVxRefIn_j[1] = AccTarSel_B.kVxRel;

      /* S-Function (sfix_look1_dyn): '<S41>/kVxRef' */
      /* Dynamic Look-Up Table Block: '<S41>/kVxRef'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.kVxRef),
        &AccTarSel_B.TmpSignalConversionAtkVxRefIn_j[0],
        rtu_VSI_VehState_st->vRef, &AccTarSel_B.TmpSignalConversionAtkVxRefInpo
        [0], 1U);

      /* Product: '<S41>/ ' */
      AccTarSel_B.u_h = AccTarSel_B.dImmerse * AccTarSel_B.kVxRef;

      /* MinMax: '<S41>/Min' */
      u0 = AccTarSel_B.Gain_i;
      u1 = AccTarSel_B.Switch1_p;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      u0 = AccTarSel_B.u_h;
      if ((!(u1 < u0)) && (!rtIsNaNF(u0))) {
        u1 = u0;
      }

      AccTarSel_B.Min_dy = u1;

      /* End of MinMax: '<S41>/Min' */

      /* Sum: '<S41>/Add1' */
      AccTarSel_B.Add1_j = AccTarSel_B.ATS_Po_st.dx - AccTarSel_B.Min_dy;

      /* MinMax: '<S46>/Max' incorporates:
       *  Constant: '<S41>/P_tFiltDsd'
       */
      u0 = rtu_SYS_Info_st->dT;
      u1 = rtP_P_tFiltDsd;
      if ((u0 > u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Max_a = u1;

      /* End of MinMax: '<S46>/Max' */

      /* Product: '<S46>/Divide' */
      AccTarSel_B.filtFactor_o = rtu_SYS_Info_st->dT / AccTarSel_B.Max_a;

      /* Product: '<S46>/Multiply' */
      AccTarSel_B.Multiply_e = AccTarSel_B.Add1_j * AccTarSel_B.filtFactor_o;

      /* Sum: '<S46>/Add' incorporates:
       *  Constant: '<S46>/Constant'
       */
      AccTarSel_B.Add_l0 = AccTarSel_P_g.Constant_Value_cf -
        AccTarSel_B.filtFactor_o;

      /* Product: '<S46>/Multiply1' */
      AccTarSel_B.Multiply1_ho = AccTarSel_B.Add_l0 *
        AccTarSel_B.Selector2_f.dSlowDown;

      /* Sum: '<S46>/Add1' */
      AccTarSel_B.Add1_oc = AccTarSel_B.Multiply_e + AccTarSel_B.Multiply1_ho;

      /* Switch: '<S41>/Switch' */
      if (AccTarSel_B.Selector2_f.FirstCyc) {
        AccTarSel_B.dSlowDown_a = AccTarSel_B.Add1_j;
      } else {
        AccTarSel_B.dSlowDown_a = AccTarSel_B.Add1_oc;
      }

      /* End of Switch: '<S41>/Switch' */

      /* If: '<S42>/If' incorporates:
       *  Inport: '<S48>/aAbsObj'
       */
      if (AccTarSel_B.RelationalOperator_pq) {
        /* Outputs for IfAction SubSystem: '<S42>/Subsystem1' incorporates:
         *  ActionPort: '<S48>/Action Port'
         */
        /* SignalConversion: '<S48>/OutportBuffer_InsertedFor_tSameSpd_at_inport_0' incorporates:
         *  Constant: '<S48>/Constant'
         */
        AccTarSel_B.Merge_h = AccTarSel_P_g.Constant_Value_e;
        AccTarSel_B.Merge1_j = AccTarSel_B.axAbs_h;

        /* End of Outputs for SubSystem: '<S42>/Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S42>/Subsystem' incorporates:
         *  ActionPort: '<S47>/Action Port'
         */
        /* Math: '<S47>/Square1' */
        AccTarSel_B.Square1_p = AccTarSel_B.ATS_Po_st.vx *
          AccTarSel_B.ATS_Po_st.vx;

        /* Sum: '<S47>/Add1' incorporates:
         *  Constant: '<S47>/Constant1'
         */
        AccTarSel_B.Add1_f = AccTarSel_P_g.Constant1_Value_d -
          AccTarSel_B.Square1_p;

        /* Product: '<S47>/Multiply' incorporates:
         *  Constant: '<S47>/Constant'
         */
        AccTarSel_B.Multiply_l = AccTarSel_B.dSlowDown_a *
          AccTarSel_P_g.Constant_Value_f;

        /* Product: '<S47>/Divide' */
        AccTarSel_B.Divide_g = AccTarSel_B.Add1_f / AccTarSel_B.Multiply_l;

        /* Product: '<S47>/Divide1' */
        AccTarSel_B.Divide1_a = AccTarSel_B.ATS_Po_st.vx / AccTarSel_B.Divide_g;

        /* Abs: '<S47>/Abs' */
        AccTarSel_B.Abs_pu = (real32_T)fabs(AccTarSel_B.Divide1_a);

        /* Sum: '<S47>/Add' */
        AccTarSel_B.Merge1_j = AccTarSel_B.Divide_g + AccTarSel_B.axAbs_h;

        /* MinMax: '<S47>/Min' incorporates:
         *  Constant: '<S47>/Constant2'
         */
        u0 = AccTarSel_P_g.Constant2_Value_p;
        u1 = AccTarSel_B.Abs_pu;
        if ((u0 < u1) || rtIsNaNF(u1)) {
          u1 = u0;
        }

        AccTarSel_B.Merge_h = u1;

        /* End of MinMax: '<S47>/Min' */
        /* End of Outputs for SubSystem: '<S42>/Subsystem' */
      }

      /* End of If: '<S42>/If' */

      /* RelationalOperator: '<S30>/Relational Operator' */
      AccTarSel_B.RelationalOperator_lk = (AccTarSel_B.Switch1_d >
        AccTarSel_B.Merge_h);

      /* Logic: '<S30>/OR' */
      AccTarSel_B.OR_j = (AccTarSel_B.RelationalOperator1_m ||
                          AccTarSel_B.RelationalOperator_lk);

      /* Logic: '<S30>/OR1' */
      AccTarSel_B.OR1 = (AccTarSel_B.RelationalOperator3_m && AccTarSel_B.OR_j);

      /* Math: '<S43>/Square1' */
      AccTarSel_B.Square1_o = rtu_VSI_VehState_st->vRef *
        rtu_VSI_VehState_st->vRef;

      /* Math: '<S43>/Square' */
      AccTarSel_B.Square_aj = AccTarSel_B.vAbsObj_e * AccTarSel_B.vAbsObj_e;

      /* MinMax: '<S43>/Min' incorporates:
       *  Constant: '<S43>/Constant2'
       */
      u0 = AccTarSel_B.axAbs_h;
      u1 = AccTarSel_P_g.Constant2_Value_ct;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Min_o = u1;

      /* End of MinMax: '<S43>/Min' */

      /* Abs: '<S43>/Abs' */
      AccTarSel_B.Abs_o = (real32_T)fabs(AccTarSel_B.Min_o);

      /* Product: '<S43>/Multiply' incorporates:
       *  Constant: '<S43>/Constant'
       */
      AccTarSel_B.Multiply_on = AccTarSel_B.Abs_o *
        AccTarSel_P_g.Constant_Value_n;

      /* Product: '<S43>/Divide' */
      AccTarSel_B.Divide_o = AccTarSel_B.Square_aj / AccTarSel_B.Multiply_on;

      /* Sum: '<S43>/Add' */
      AccTarSel_B.Add_gg = AccTarSel_B.dSlowDown_a + AccTarSel_B.Divide_o;

      /* Product: '<S43>/Multiply1' incorporates:
       *  Constant: '<S43>/Constant1'
       */
      AccTarSel_B.Multiply1_e = AccTarSel_B.Add_gg *
        AccTarSel_P_g.Constant1_Value_h;

      /* Product: '<S43>/Divide1' */
      AccTarSel_B.Divide1_m = AccTarSel_B.Square1_o / AccTarSel_B.Multiply1_e;

      /* Gain: '<S43>/Gain' */
      AccTarSel_B.Gain_m = AccTarSel_P_g.Gain_Gain_k * AccTarSel_B.Divide1_m;

      /* If: '<S30>/If1' */
      if (AccTarSel_B.Switch_h1) {
        /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S39>/Action Port'
         */
        /* SignalConversion: '<S39>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
         *  Constant: '<S39>/Constant1'
         */
        AccTarSel_B.aApproach_g = AccTarSel_P_g.Constant1_Value_fy;

        /* SignalConversion: '<S39>/OutportBuffer_InsertedFor_Out2_at_inport_0' incorporates:
         *  Constant: '<S39>/Constant2'
         */
        AccTarSel_B.ApproachCase = AccTarSel_P_g.Constant2_Value_is;

        /* End of Outputs for SubSystem: '<S30>/If Action Subsystem2' */
      } else if (AccTarSel_B.OR1) {
        /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem' incorporates:
         *  ActionPort: '<S38>/Action Port'
         */
        AccTarSel_IfActionSubsystem(AccTarSel_B.Merge1_j,
          &AccTarSel_B.aApproach_g, &AccTarSel_B.ApproachCase,
          &AccTarSel_P_g.IfActionSubsystem_mf);

        /* End of Outputs for SubSystem: '<S30>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S40>/Action Port'
         */
        AccTarSel_IfActionSubsystem(AccTarSel_B.Gain_m, &AccTarSel_B.aApproach_g,
          &AccTarSel_B.ApproachCase, &AccTarSel_P_g.IfActionSubsystem3_i);

        /* End of Outputs for SubSystem: '<S30>/If Action Subsystem3' */
      }

      /* End of If: '<S30>/If1' */

      /* SignalConversion: '<S33>/TmpSignal ConversionAtLookup Table Dynamic1Inport2' incorporates:
       *  Constant: '<S33>/Constant'
       *  Constant: '<S33>/Constant4'
       */
      AccTarSel_B.TmpSignalConversionAtLookupTa_h[0] =
        AccTarSel_P_g.Constant_Value_a;
      AccTarSel_B.TmpSignalConversionAtLookupTa_h[1] =
        AccTarSel_P_g.Constant4_Value_p;

      /* SignalConversion: '<S33>/TmpSignal ConversionAtLookup Table Dynamic1Inport3' incorporates:
       *  Constant: '<S33>/Constant1'
       *  Constant: '<S33>/Constant2'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_ly[0] =
        AccTarSel_P_g.Constant2_Value_b1;
      AccTarSel_B.TmpSignalConversionAtLookupT_ly[1] =
        AccTarSel_P_g.Constant1_Value_b;

      /* S-Function (sfix_look1_dyn): '<S33>/Lookup Table Dynamic1' */
      /* Dynamic Look-Up Table Block: '<S33>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic1_j),
        &AccTarSel_B.TmpSignalConversionAtLookupT_ly[0], AccTarSel_B.Switch1_d,
        &AccTarSel_B.TmpSignalConversionAtLookupTa_h[0], 1U);

      /* MinMax: '<S82>/Max' */
      u0 = rtu_SYS_Info_st->dT;
      u1 = AccTarSel_B.LookupTableDynamic1_j;
      if ((u0 > u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Max_co = u1;

      /* End of MinMax: '<S82>/Max' */

      /* Product: '<S82>/Divide' */
      AccTarSel_B.filtFactor_j = rtu_SYS_Info_st->dT / AccTarSel_B.Max_co;

      /* Sum: '<S82>/Add' incorporates:
       *  Constant: '<S82>/Constant'
       */
      AccTarSel_B.Add_nk = AccTarSel_P_g.Constant_Value_hz -
        AccTarSel_B.filtFactor_j;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic6Inport2' incorporates:
       *  Constant: '<S36>/Constant12'
       *  Constant: '<S36>/Constant13'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_j3[0] =
        AccTarSel_P_g.Constant12_Value_d;
      AccTarSel_B.TmpSignalConversionAtLookupT_j3[1] =
        AccTarSel_P_g.Constant13_Value;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic7Inport2' incorporates:
       *  Constant: '<S36>/Constant14'
       *  Constant: '<S36>/Constant15'
       */
      AccTarSel_B.TmpSignalConversionAtLookupTa_f[0] =
        AccTarSel_P_g.Constant14_Value;
      AccTarSel_B.TmpSignalConversionAtLookupTa_f[1] =
        AccTarSel_P_g.Constant15_Value;

      /* Product: '<S36>/Multiply3' incorporates:
       *  Constant: '<S36>/Constant16'
       *  Constant: '<S36>/Constant17'
       */
      AccTarSel_B.Multiply3[0] = AccTarSel_P_g.Constant16_Value *
        AccTarSel_B.ATS_Po_st.axAbs;
      AccTarSel_B.Multiply3[1] = AccTarSel_P_g.Constant17_Value *
        AccTarSel_B.ATS_Po_st.axAbs;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic7' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic7'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic7),
        &AccTarSel_B.Multiply3[0], AccTarSel_B.ATS_Po_st.vx,
        &AccTarSel_B.TmpSignalConversionAtLookupTa_f[0], 1U);

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic6Inport3' incorporates:
       *  Constant: '<S36>/Constant18'
       */
      AccTarSel_B.TmpSignalConversionAtLookupTa_c[0] =
        AccTarSel_B.LookupTableDynamic7;
      AccTarSel_B.TmpSignalConversionAtLookupTa_c[1] =
        AccTarSel_P_g.Constant18_Value;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic6' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic6'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic6),
        &AccTarSel_B.TmpSignalConversionAtLookupTa_c[0],
        rtu_VSI_VehState_st->vRef, &AccTarSel_B.TmpSignalConversionAtLookupT_j3
        [0], 1U);

      /* Gain: '<S36>/Gain2' */
      AccTarSel_B.Gain2_m = AccTarSel_P_g.Gain2_Gain_f * AccTarSel_B.Switch1_p;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic2Inport2' incorporates:
       *  Constant: '<S36>/Constant2'
       *  Constant: '<S36>/Constant3'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_ky[0] =
        AccTarSel_P_g.Constant2_Value_bz;
      AccTarSel_B.TmpSignalConversionAtLookupT_ky[1] =
        AccTarSel_P_g.Constant3_Value_i;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic4Inport3' incorporates:
       *  Constant: '<S36>/Constant8'
       *  Constant: '<S36>/Constant9'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_ka[0] =
        AccTarSel_P_g.Constant8_Value_h;
      AccTarSel_B.TmpSignalConversionAtLookupT_ka[1] =
        AccTarSel_P_g.Constant9_Value_k;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic4' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic4'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic4),
        &AccTarSel_B.TmpSignalConversionAtLookupT_ka[0],
        AccTarSel_B.ATS_Po_st.axAbs,
        &AccTarSel_B.TmpSignalConversionAtLookupT_ky[0], 1U);

      /* Product: '<S36>/Multiply2' */
      AccTarSel_B.Multiply2_k = AccTarSel_B.Switch1_p *
        AccTarSel_B.LookupTableDynamic4;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic2Inport3' incorporates:
       *  Constant: '<S36>/Constant4'
       *  Constant: '<S36>/Constant5'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_ip[0] =
        AccTarSel_P_g.Constant4_Value_g;
      AccTarSel_B.TmpSignalConversionAtLookupT_ip[1] =
        AccTarSel_P_g.Constant5_Value_c;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic2' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic2'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic2_f),
        &AccTarSel_B.TmpSignalConversionAtLookupT_ip[0],
        AccTarSel_B.ATS_Po_st.axAbs,
        &AccTarSel_B.TmpSignalConversionAtLookupT_ky[0], 1U);

      /* Product: '<S36>/Multiply1' */
      AccTarSel_B.Multiply1_gr = AccTarSel_B.Switch1_p *
        AccTarSel_B.LookupTableDynamic2_f;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table DynamicInport2' */
      AccTarSel_B.TmpSignalConversionAtLookupT_jd[0] = AccTarSel_B.Gain2_m;
      AccTarSel_B.TmpSignalConversionAtLookupT_jd[1] = AccTarSel_B.Switch1_p;
      AccTarSel_B.TmpSignalConversionAtLookupT_jd[2] = AccTarSel_B.Multiply2_k;
      AccTarSel_B.TmpSignalConversionAtLookupT_jd[3] = AccTarSel_B.Multiply1_gr;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic3Inport3' incorporates:
       *  Constant: '<S36>/Constant6'
       *  Constant: '<S36>/Constant7'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_jf[0] =
        AccTarSel_P_g.Constant6_Value_j;
      AccTarSel_B.TmpSignalConversionAtLookupT_jf[1] =
        AccTarSel_P_g.Constant7_Value_p;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic3' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic3'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic3),
        &AccTarSel_B.TmpSignalConversionAtLookupT_jf[0],
        AccTarSel_B.ATS_Po_st.axAbs,
        &AccTarSel_B.TmpSignalConversionAtLookupT_ky[0], 1U);

      /* Product: '<S36>/Multiply' */
      AccTarSel_B.Multiply_h = AccTarSel_B.ATS_Po_st.axAbs *
        AccTarSel_B.LookupTableDynamic3;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic5Inport3' incorporates:
       *  Constant: '<S36>/Constant10'
       *  Constant: '<S36>/Constant11'
       */
      AccTarSel_B.TmpSignalConversionAtLookupTa_o[0] =
        AccTarSel_P_g.Constant10_Value_ic;
      AccTarSel_B.TmpSignalConversionAtLookupTa_o[1] =
        AccTarSel_P_g.Constant11_Value;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic5' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic5'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic5),
        &AccTarSel_B.TmpSignalConversionAtLookupTa_o[0],
        AccTarSel_B.ATS_Po_st.axAbs,
        &AccTarSel_B.TmpSignalConversionAtLookupT_ky[0], 1U);

      /* Product: '<S36>/Multiply4' */
      AccTarSel_B.Multiply4 = AccTarSel_B.ATS_Po_st.axAbs *
        AccTarSel_B.LookupTableDynamic5;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table DynamicInport3' incorporates:
       *  Constant: '<S36>/Constant1'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_gn[0] =
        AccTarSel_B.ATS_Po_st.axAbs;
      AccTarSel_B.TmpSignalConversionAtLookupT_gn[1] = AccTarSel_B.Multiply_h;
      AccTarSel_B.TmpSignalConversionAtLookupT_gn[2] = AccTarSel_B.Multiply4;
      AccTarSel_B.TmpSignalConversionAtLookupT_gn[3] =
        AccTarSel_P_g.Constant1_Value_e;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic_p),
        &AccTarSel_B.TmpSignalConversionAtLookupT_gn[0],
        AccTarSel_B.ATS_Po_st.dx, &AccTarSel_B.TmpSignalConversionAtLookupT_jd[0],
        3U);

      /* Switch: '<S36>/Switch' */
      if (AccTarSel_B.ATS_Po_st.axAbs > AccTarSel_P_g.Switch_Threshold_f) {
        AccTarSel_B.Switch_h = AccTarSel_B.LookupTableDynamic6;
      } else {
        AccTarSel_B.Switch_h = AccTarSel_B.LookupTableDynamic_p;
      }

      /* End of Switch: '<S36>/Switch' */

      /* Product: '<S90>/Divide' incorporates:
       *  Constant: '<S90>/P_facFOCNegDiff'
       *  Constant: '<S90>/P_vFOCNegDiff'
       */
      AccTarSel_B.Divide_b = rtP_P_vFOCNegDiff / rtP_P_facFOCNegDiff;

      /* MinMax: '<S90>/Min' */
      u0 = AccTarSel_B.Switch1_p;
      u1 = AccTarSel_B.Divide_b;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.dThresNeg = u1;

      /* End of MinMax: '<S90>/Min' */

      /* Sum: '<S90>/Add1' */
      AccTarSel_B.dBreakPointNeg = AccTarSel_B.Switch1_p - AccTarSel_B.dThresNeg;

      /* RelationalOperator: '<S90>/Relational Operator' */
      AccTarSel_B.RelationalOperator_ob = (AccTarSel_B.ATS_Po_st.dx <
        AccTarSel_B.dBreakPointNeg);

      /* RelationalOperator: '<S90>/Relational Operator1' */
      AccTarSel_B.RelationalOperator1_kx = (AccTarSel_B.ATS_Po_st.dx <
        AccTarSel_B.Switch1_p);

      /* Product: '<S90>/Divide1' incorporates:
       *  Constant: '<S90>/P_facFOCPosDiff'
       *  Constant: '<S90>/P_vFOCPosDiff'
       */
      AccTarSel_B.Divide1_o = rtP_P_vFOCPosDiff / rtP_P_facFOCPosDiff;

      /* Sum: '<S90>/Add2' */
      AccTarSel_B.dBreakPointPos = AccTarSel_B.Switch1_p + AccTarSel_B.Divide1_o;

      /* RelationalOperator: '<S90>/Relational Operator2' */
      AccTarSel_B.RelationalOperator2_h3 = (AccTarSel_B.ATS_Po_st.dx <
        AccTarSel_B.dBreakPointPos);

      /* If: '<S90>/If' */
      if (AccTarSel_B.RelationalOperator_ob) {
        /* Outputs for IfAction SubSystem: '<S90>/If Action Subsystem' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        /* Product: '<S91>/Multiply' incorporates:
         *  Constant: '<S91>/P_facFOCNegDiff'
         *  Constant: '<S91>/P_vFOCNegDiff'
         */
        AccTarSel_B.aConstNegPhase_i = rtP_P_vFOCNegDiff * rtP_P_facFOCNegDiff;

        /* Sum: '<S91>/Add' */
        AccTarSel_B.Add_bb = AccTarSel_B.dBreakPointNeg -
          AccTarSel_B.ATS_Po_st.dx;

        /* Product: '<S91>/Multiply1' */
        AccTarSel_B.Multiply1_f = AccTarSel_B.aConstNegPhase_i *
          AccTarSel_B.Add_bb;

        /* Abs: '<S91>/Abs' */
        AccTarSel_B.Abs_fo = (real32_T)fabs(AccTarSel_B.Multiply1_f);

        /* Math: '<S91>/Square' incorporates:
         *  Constant: '<S91>/P_vFOCNegDiff'
         */
        AccTarSel_B.Square_o = rtP_P_vFOCNegDiff * rtP_P_vFOCNegDiff;

        /* Product: '<S91>/Multiply2' incorporates:
         *  Constant: '<S91>/Constant2'
         */
        AccTarSel_B.Multiply2_l = AccTarSel_B.Abs_fo *
          AccTarSel_P_g.Constant2_Value_cj;

        /* Sum: '<S91>/Add1' */
        AccTarSel_B.Add1_i = AccTarSel_B.Square_o + AccTarSel_B.Multiply2_l;

        /* SignalConversion: '<S91>/OutportBuffer_InsertedFor_vLower_at_inport_0' incorporates:
         *  Constant: '<S91>/P_vFOCNegDiff'
         */
        AccTarSel_B.Merge2_i = rtP_P_vFOCNegDiff;

        /* Sqrt: '<S91>/Sqrt' */
        AccTarSel_B.Merge1_l = (real32_T)sqrt(AccTarSel_B.Add1_i);

        /* End of Outputs for SubSystem: '<S90>/If Action Subsystem' */
      } else if (AccTarSel_B.RelationalOperator1_kx) {
        /* Outputs for IfAction SubSystem: '<S90>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* Sum: '<S92>/Add' */
        AccTarSel_B.Add_as = AccTarSel_B.Switch1_p - AccTarSel_B.ATS_Po_st.dx;

        /* Product: '<S92>/Multiply' incorporates:
         *  Constant: '<S92>/P_facFOCNegDiff'
         */
        AccTarSel_B.Multiply_k4 = rtP_P_facFOCNegDiff * AccTarSel_B.Add_as;

        /* SignalConversion: '<S92>/OutportBufferForvLower' */
        AccTarSel_B.Merge2_i = AccTarSel_B.Multiply_k4;

        /* SignalConversion: '<S92>/OutportBufferForvUpper' */
        AccTarSel_B.Merge1_l = AccTarSel_B.Multiply_k4;

        /* End of Outputs for SubSystem: '<S90>/If Action Subsystem4' */
      } else if (AccTarSel_B.RelationalOperator2_h3) {
        /* Outputs for IfAction SubSystem: '<S90>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S93>/Action Port'
         */
        /* Sum: '<S93>/Add' */
        AccTarSel_B.Add_gh = AccTarSel_B.Switch1_p - AccTarSel_B.ATS_Po_st.dx;

        /* Product: '<S93>/Multiply' incorporates:
         *  Constant: '<S93>/P_facFOCPosDiff'
         */
        AccTarSel_B.Multiply_a = rtP_P_facFOCPosDiff * AccTarSel_B.Add_gh;

        /* SignalConversion: '<S93>/OutportBufferForvLower' */
        AccTarSel_B.Merge2_i = AccTarSel_B.Multiply_a;

        /* SignalConversion: '<S93>/OutportBufferForvUpper' */
        AccTarSel_B.Merge1_l = AccTarSel_B.Multiply_a;

        /* End of Outputs for SubSystem: '<S90>/If Action Subsystem5' */
      } else {
        /* Outputs for IfAction SubSystem: '<S90>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S94>/Action Port'
         */
        /* Product: '<S94>/Multiply' incorporates:
         *  Constant: '<S94>/P_facFOCPosDiff'
         *  Constant: '<S94>/P_vFOCPosDiff'
         */
        AccTarSel_B.aConstNegPhase = rtP_P_vFOCPosDiff * rtP_P_facFOCPosDiff;

        /* Sum: '<S94>/Add' */
        AccTarSel_B.Add_by = AccTarSel_B.ATS_Po_st.dx -
          AccTarSel_B.dBreakPointPos;

        /* Product: '<S94>/Multiply1' */
        AccTarSel_B.Multiply1_dc = AccTarSel_B.aConstNegPhase *
          AccTarSel_B.Add_by;

        /* Abs: '<S94>/Abs' */
        AccTarSel_B.Abs_oh = (real32_T)fabs(AccTarSel_B.Multiply1_dc);

        /* Math: '<S94>/Square' incorporates:
         *  Constant: '<S94>/P_vFOCPosDiff'
         */
        AccTarSel_B.Square_h = rtP_P_vFOCPosDiff * rtP_P_vFOCPosDiff;

        /* Product: '<S94>/Multiply2' incorporates:
         *  Constant: '<S94>/Constant2'
         */
        AccTarSel_B.Multiply2_g = AccTarSel_B.Abs_oh *
          AccTarSel_P_g.Constant2_Value_j;

        /* Sum: '<S94>/Add1' */
        AccTarSel_B.Add1_k = AccTarSel_B.Square_h + AccTarSel_B.Multiply2_g;

        /* Product: '<S94>/Multiply3' incorporates:
         *  Constant: '<S94>/Constant'
         *  Constant: '<S94>/P_vFOCPosDiff'
         */
        AccTarSel_B.Merge1_l = rtP_P_vFOCPosDiff *
          AccTarSel_P_g.Constant_Value_o;

        /* Sqrt: '<S94>/Sqrt' */
        AccTarSel_B.vUpper = (real32_T)sqrt(AccTarSel_B.Add1_k);

        /* Product: '<S94>/Multiply4' incorporates:
         *  Constant: '<S94>/Constant'
         */
        AccTarSel_B.Merge2_i = AccTarSel_P_g.Constant_Value_o *
          AccTarSel_B.vUpper;

        /* End of Outputs for SubSystem: '<S90>/If Action Subsystem6' */
      }

      /* End of If: '<S90>/If' */

      /* RelationalOperator: '<S36>/Relational Operator' */
      AccTarSel_B.phase1 = (AccTarSel_B.ATS_Po_st.vx >= AccTarSel_B.Merge1_l);

      /* RelationalOperator: '<S36>/Relational Operator1' */
      AccTarSel_B.phase2 = (AccTarSel_B.ATS_Po_st.vx <= AccTarSel_B.Merge2_i);

      /* If: '<S36>/If1' */
      if (AccTarSel_B.phase1) {
        /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S87>/Action Port'
         */
        AccTarSel_IfActionSubsystem1(AccTarSel_B.Merge1_l,
          AccTarSel_B.ATS_Po_st.vx, &AccTarSel_B.Merge_d);

        /* End of Outputs for SubSystem: '<S36>/If Action Subsystem1' */
      } else if (AccTarSel_B.phase2) {
        /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S89>/Action Port'
         */
        AccTarSel_IfActionSubsystem1(AccTarSel_B.Merge2_i,
          AccTarSel_B.ATS_Po_st.vx, &AccTarSel_B.Merge_d);

        /* End of Outputs for SubSystem: '<S36>/If Action Subsystem4' */
      } else {
        /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S88>/Action Port'
         */
        AccTarSel_IfActionSubsystem2(&AccTarSel_B.Merge_d,
          &AccTarSel_P_g.IfActionSubsystem2_f);

        /* End of Outputs for SubSystem: '<S36>/If Action Subsystem2' */
      }

      /* End of If: '<S36>/If1' */

      /* Gain: '<S36>/Gain' */
      AccTarSel_B.vDeltaRaw = AccTarSel_P_g.Gain_Gain_j * AccTarSel_B.Merge_d;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic1Inport2' incorporates:
       *  Constant: '<S36>/P_vFOCStationaryFast'
       *  Constant: '<S36>/P_vFOCStationarySlow'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_hg[0] = rtP_P_vFOCStationarySlow;
      AccTarSel_B.TmpSignalConversionAtLookupT_hg[1] = rtP_P_vFOCStationaryFast;

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic8Inport3' incorporates:
       *  Constant: '<S36>/P_tFOCStatAccelFast'
       *  Constant: '<S36>/P_tFOCStatAccelSlow'
       */
      AccTarSel_B.TmpSignalConversionAtLookupT_he[0] = rtP_P_tFOCStatAccelSlow;
      AccTarSel_B.TmpSignalConversionAtLookupT_he[1] = rtP_P_tFOCStatAccelFast;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic8' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic8'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic8),
        &AccTarSel_B.TmpSignalConversionAtLookupT_he[0],
        rtu_VSI_VehState_st->vRef, &AccTarSel_B.TmpSignalConversionAtLookupT_hg
        [0], 1U);

      /* RelationalOperator: '<S36>/Relational Operator2' incorporates:
       *  Constant: '<S36>/Constant19'
       */
      AccTarSel_B.RelationalOperator2_hc = (AccTarSel_B.vDeltaRaw >=
        AccTarSel_P_g.Constant19_Value);

      /* SignalConversion: '<S36>/TmpSignal ConversionAtLookup Table Dynamic1Inport3' incorporates:
       *  Constant: '<S36>/P_tFOCStatDecelFast'
       *  Constant: '<S36>/P_tFOCStatDecelSlow'
       */
      AccTarSel_B.TmpSignalConversionAtLookup_lyc[0] = rtP_P_tFOCStatDecelSlow;
      AccTarSel_B.TmpSignalConversionAtLookup_lyc[1] = rtP_P_tFOCStatDecelFast;

      /* S-Function (sfix_look1_dyn): '<S36>/Lookup Table Dynamic1' */
      /* Dynamic Look-Up Table Block: '<S36>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic1_n),
        &AccTarSel_B.TmpSignalConversionAtLookup_lyc[0],
        rtu_VSI_VehState_st->vRef, &AccTarSel_B.TmpSignalConversionAtLookupT_hg
        [0], 1U);

      /* Switch: '<S36>/Switch1' */
      if (AccTarSel_B.RelationalOperator2_hc) {
        AccTarSel_B.Switch1_c = AccTarSel_B.LookupTableDynamic8;
      } else {
        AccTarSel_B.Switch1_c = AccTarSel_B.LookupTableDynamic1_n;
      }

      /* End of Switch: '<S36>/Switch1' */

      /* Product: '<S36>/Divide' */
      AccTarSel_B.Divide_h = AccTarSel_B.vDeltaRaw / AccTarSel_B.Switch1_c;

      /* Sum: '<S36>/Add' */
      AccTarSel_B.aStat_p = AccTarSel_B.Switch_h + AccTarSel_B.Divide_h;

      /* MinMax: '<S33>/Min' */
      u0 = AccTarSel_B.aStat_p;
      u1 = AccTarSel_B.aApproach_g;
      if ((u0 < u1) || rtIsNaNF(u1)) {
        u1 = u0;
      }

      AccTarSel_B.Min_oe = u1;

      /* End of MinMax: '<S33>/Min' */

      /* SignalConversion: '<S33>/TmpSignal ConversionAtLookup Table DynamicInport2' incorporates:
       *  Constant: '<S33>/P_aFOCApproachIntpAcitve'
       *  Constant: '<S33>/P_aFOCApproachIntpEnsure'
       */
      AccTarSel_B.TmpSignalConversionAtLookup_jdp[0] =
        rtP_P_aFOCApproachIntpEnsure;
      AccTarSel_B.TmpSignalConversionAtLookup_jdp[1] =
        rtP_P_aFOCApproachIntpAcitve;

      /* SignalConversion: '<S33>/TmpSignal ConversionAtLookup Table DynamicInport3' */
      AccTarSel_B.TmpSignalConversionAtLookup_gn2[0] = AccTarSel_B.Min_oe;
      AccTarSel_B.TmpSignalConversionAtLookup_gn2[1] = AccTarSel_B.aStat_p;

      /* S-Function (sfix_look1_dyn): '<S33>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S33>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real32_T
       * Input1  Data Type:  Floating Point real32_T
       * Input2  Data Type:  Floating Point real32_T
       * Output0 Data Type:  Floating Point real32_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic_k),
        &AccTarSel_B.TmpSignalConversionAtLookup_gn2[0], AccTarSel_B.Min_oe,
        &AccTarSel_B.TmpSignalConversionAtLookup_jdp[0], 1U);

      /* Product: '<S82>/Multiply' */
      AccTarSel_B.Multiply_cj = AccTarSel_B.LookupTableDynamic_k *
        AccTarSel_B.filtFactor_j;

      /* Product: '<S82>/Multiply1' */
      AccTarSel_B.Multiply1_hs = AccTarSel_B.Add_nk *
        AccTarSel_B.Selector2_f.aFOC;

      /* Sum: '<S82>/Add1' */
      AccTarSel_B.Add1_m3 = AccTarSel_B.Multiply_cj + AccTarSel_B.Multiply1_hs;

      /* RelationalOperator: '<S83>/Relational Operator' incorporates:
       *  Constant: '<S83>/P_aFOCApproachIntpAcitve'
       */
      AccTarSel_B.RelationalOperator_dk = (AccTarSel_B.aStat_p <=
        rtP_P_aFOCApproachIntpAcitve);

      /* RelationalOperator: '<S83>/Relational Operator1' incorporates:
       *  Constant: '<S83>/P_aFOCApproachIntpEnsure'
       */
      AccTarSel_B.RelationalOperator1_b = (AccTarSel_B.aApproach_g <=
        rtP_P_aFOCApproachIntpEnsure);

      /* Logic: '<S83>/Logical Operator' */
      AccTarSel_B.LogicalOperator_g = (AccTarSel_B.RelationalOperator_dk ||
        AccTarSel_B.RelationalOperator1_b);

      /* RelationalOperator: '<S83>/Relational Operator2' incorporates:
       *  Constant: '<S83>/P_aFOCApproachIntpAcitve'
       */
      AccTarSel_B.RelationalOperator2_gq = (AccTarSel_B.aApproach_g >
        rtP_P_aFOCApproachIntpAcitve);

      /* If: '<S83>/If' incorporates:
       *  Inport: '<S85>/aStat'
       */
      if (AccTarSel_B.LogicalOperator_g) {
        /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem' incorporates:
         *  ActionPort: '<S84>/Action Port'
         */
        /* MinMax: '<S84>/Min' */
        u0 = AccTarSel_B.aStat_p;
        u1 = AccTarSel_B.aApproach_g;
        if ((u0 < u1) || rtIsNaNF(u1)) {
          u1 = u0;
        }

        AccTarSel_B.aFocMix = u1;

        /* End of MinMax: '<S84>/Min' */
        /* End of Outputs for SubSystem: '<S83>/If Action Subsystem' */
      } else if (AccTarSel_B.RelationalOperator2_gq) {
        /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S85>/Action Port'
         */
        AccTarSel_B.aFocMix = AccTarSel_B.aStat_p;

        /* End of Outputs for SubSystem: '<S83>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S86>/Action Port'
         */
        /* SignalConversion: '<S86>/TmpSignal ConversionAtLookup Table DynamicInport2' incorporates:
         *  Constant: '<S83>/P_aFOCApproachIntpAcitve'
         *  Constant: '<S83>/P_aFOCApproachIntpEnsure'
         */
        AccTarSel_B.TmpSignalConversionAtLooku_jdp5[0] =
          rtP_P_aFOCApproachIntpEnsure;
        AccTarSel_B.TmpSignalConversionAtLooku_jdp5[1] =
          rtP_P_aFOCApproachIntpAcitve;

        /* SignalConversion: '<S86>/TmpSignal ConversionAtLookup Table DynamicInport3' */
        AccTarSel_B.TmpSignalConversionAtLooku_gn2p[0] = AccTarSel_B.aApproach_g;
        AccTarSel_B.TmpSignalConversionAtLooku_gn2p[1] = AccTarSel_B.aStat_p;

        /* S-Function (sfix_look1_dyn): '<S86>/Lookup Table Dynamic' */
        /* Dynamic Look-Up Table Block: '<S86>/Lookup Table Dynamic'
         * Input0  Data Type:  Floating Point real32_T
         * Input1  Data Type:  Floating Point real32_T
         * Input2  Data Type:  Floating Point real32_T
         * Output0 Data Type:  Floating Point real32_T
         * Lookup Method: Linear_Endpoint
         *
         */
        LookUp_real32_T_real32_T( &(AccTarSel_B.LookupTableDynamic_l),
          &AccTarSel_B.TmpSignalConversionAtLooku_gn2p[0],
          AccTarSel_B.aApproach_g, &AccTarSel_B.TmpSignalConversionAtLooku_jdp5
          [0], 1U);

        /* SignalConversion: '<S86>/OutportBufferForOut1' */
        AccTarSel_B.aFocMix = AccTarSel_B.LookupTableDynamic_l;

        /* End of Outputs for SubSystem: '<S83>/If Action Subsystem2' */
      }

      /* End of If: '<S83>/If' */

      /* Switch: '<S33>/Switch' */
      if (AccTarSel_B.Selector2_f.FirstCyc) {
        AccTarSel_B.Switch_m = AccTarSel_B.LookupTableDynamic_k;
      } else {
        AccTarSel_B.Switch_m = AccTarSel_B.Add1_m3;
      }

      /* End of Switch: '<S33>/Switch' */

      /* If: '<S29>/If' incorporates:
       *  Constant: '<S29>/Constant'
       *  Constant: '<S29>/Constant2'
       */
      if (AccTarSel_P_g.Constant_Value_fj) {
        /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem' incorporates:
         *  ActionPort: '<S34>/Action Port'
         */
        AccTarSel_IfActionSubsystem_b(AccTarSel_P_g.Constant2_Value_k,
          &AccTarSel_B.aFOC);

        /* End of Outputs for SubSystem: '<S29>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S35>/Action Port'
         */
        AccTarSel_IfActionSubsystem_b(AccTarSel_B.Switch_m, &AccTarSel_B.aFOC);

        /* End of Outputs for SubSystem: '<S29>/If Action Subsystem1' */
      }

      /* End of If: '<S29>/If' */

      /* SignalConversion: '<S29>/OutportBufferForObjLeaving' */
      AccTarSel_B.ObjLeaving = AccTarSel_B.Switch_h1;

      /* SignalConversion: '<S29>/OutportBufferForaApproach' */
      AccTarSel_B.aApproach = AccTarSel_B.aApproach_g;

      /* SignalConversion: '<S29>/OutportBufferForaStat' */
      AccTarSel_B.aStat = AccTarSel_B.aStat_p;

      /* SignalConversion: '<S29>/OutportBufferFordAim' */
      AccTarSel_B.dAim = AccTarSel_B.Switch1_p;

      /* SignalConversion: '<S29>/OutportBufferFordImmerseAdj' */
      AccTarSel_B.dImmerseAdj = AccTarSel_B.u_h;

      /* SignalConversion: '<S29>/OutportBufferFordSlowDown' */
      AccTarSel_B.dSlowDown = AccTarSel_B.dSlowDown_a;

      /* SignalConversion: '<S29>/OutportBufferFortObjStop' */
      AccTarSel_B.tObjStop = AccTarSel_B.Switch1_d;

      /* SignalConversion: '<S29>/SigConversion_InsertedFor_Bus Selector_at_outport_0' */
      AccTarSel_B.DecToStop_m = AccTarSel_B.Selector2_f.DecToStop;

      /* RelationalOperator: '<S37>/Relational Operator6' incorporates:
       *  Constant: '<S37>/Constant3'
       */
      AccTarSel_B.RelationalOperator6_b = (AccTarSel_B.ATS_Po_st.Index ==
        AccTarSel_P_g.Constant3_Value_e);

      /* RelationalOperator: '<S37>/Relational Operator7' incorporates:
       *  Constant: '<S37>/Constant9'
       */
      AccTarSel_B.RelationalOperator7_b = (AccTarSel_B.ATS_Po_st.Type ==
        AccTarSel_P_g.Constant9_Value_e);

      /* Logic: '<S37>/AND2' */
      AccTarSel_B.AND2_e = (AccTarSel_B.RelationalOperator6_b &&
                            AccTarSel_B.RelationalOperator7_b);

      /* Switch: '<S37>/Switch' incorporates:
       *  Constant: '<S37>/P_dObjLowHystDecToStop'
       *  Constant: '<S37>/P_dObjLowHystDecToStopAVP'
       */
      if (AccTarSel_B.AND2_e) {
        AccTarSel_B.Switch_mh = rtP_P_dObjLowHystDecToStopAVP;
      } else {
        AccTarSel_B.Switch_mh = rtP_P_dObjLowHystDecToStop;
      }

      /* End of Switch: '<S37>/Switch' */

      /* RelationalOperator: '<S37>/Relational Operator1' */
      AccTarSel_B.RelationalOperator1_kd = (AccTarSel_B.ATS_Po_st.dx <
        AccTarSel_B.Switch_mh);

      /* Sum: '<S37>/Add' */
      AccTarSel_B.vAbsObj_c = AccTarSel_B.ATS_Po_st.vx +
        rtu_VSI_VehState_st->vRef;

      /* RelationalOperator: '<S37>/Relational Operator' incorporates:
       *  Constant: '<S37>/P_vObjLowHystDecToStop'
       */
      AccTarSel_B.RelationalOperator_aa = (AccTarSel_B.vAbsObj_c <
        rtP_P_vObjLowHystDecToStop);

      /* RelationalOperator: '<S37>/Relational Operator2' incorporates:
       *  Constant: '<S37>/P_vEgoDecToStop'
       */
      AccTarSel_B.RelationalOperator2_hl = (rtu_VSI_VehState_st->vRef <
        rtP_P_vEgoDecToStop);

      /* Logic: '<S37>/AND' */
      AccTarSel_B.AND_d = (AccTarSel_B.RelationalOperator1_kd &&
                           AccTarSel_B.RelationalOperator_aa &&
                           AccTarSel_B.RelationalOperator2_hl);

      /* RelationalOperator: '<S37>/Relational Operator3' incorporates:
       *  Constant: '<S37>/P_vObjUpperHystDecToStop'
       */
      AccTarSel_B.RelationalOperator3_c = (AccTarSel_B.vAbsObj_c >
        rtP_P_vObjUpperHystDecToStop);

      /* RelationalOperator: '<S37>/Relational Operator4' incorporates:
       *  Constant: '<S37>/P_dObjUpperHystDecToStop'
       */
      AccTarSel_B.RelationalOperator4 = (AccTarSel_B.ATS_Po_st.dx >
        rtP_P_dObjUpperHystDecToStop);

      /* RelationalOperator: '<S37>/Relational Operator5' incorporates:
       *  Constant: '<S37>/Constant1'
       */
      AccTarSel_B.RelationalOperator5 = (AccTarSel_B.AST_Info_st.MainState ==
        AccTarSel_P_g.Constant1_Value_nw);

      /* Logic: '<S37>/AND1' */
      AccTarSel_B.AND1_j = (AccTarSel_B.RelationalOperator3_c ||
                            AccTarSel_B.RelationalOperator4 ||
                            AccTarSel_B.RelationalOperator5);

      /* If: '<S37>/If' incorporates:
       *  Constant: '<S37>/Constant5'
       *  Constant: '<S37>/Constant6'
       */
      if (AccTarSel_B.AND_d) {
        /* Outputs for IfAction SubSystem: '<S37>/If Action Subsystem' incorporates:
         *  ActionPort: '<S95>/Action Port'
         */
        AccTarSel_Hold(AccTarSel_P_g.Constant5_Value_no, &AccTarSel_B.DecToStop);

        /* End of Outputs for SubSystem: '<S37>/If Action Subsystem' */
      } else if (AccTarSel_B.AND1_j) {
        /* Outputs for IfAction SubSystem: '<S37>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S96>/Action Port'
         */
        AccTarSel_Hold(AccTarSel_P_g.Constant6_Value_m, &AccTarSel_B.DecToStop);

        /* End of Outputs for SubSystem: '<S37>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S37>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S97>/Action Port'
         */
        AccTarSel_Hold(AccTarSel_B.DecToStop_m, &AccTarSel_B.DecToStop);

        /* End of Outputs for SubSystem: '<S37>/If Action Subsystem2' */
      }

      /* End of If: '<S37>/If' */

      /* SignalConversion: '<S29>/OutportBuffer_InsertedFor_FirstCyc_at_inport_0' incorporates:
       *  Constant: '<S29>/Constant1'
       */
      AccTarSel_B.FirstCyc = AccTarSel_P_g.Constant1_Value_m;

      /* End of Outputs for SubSystem: '<S20>/FollowObjValid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S20>/FollowObjInvalid' incorporates:
       *  ActionPort: '<S28>/Action Port'
       */
      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_a_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant'
       */
      AccTarSel_B.aFOC = AccTarSel_P_g.Constant_Value_c1;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_DecToStop_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant1'
       */
      AccTarSel_B.DecToStop = AccTarSel_P_g.Constant1_Value_iy;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_FirstCyc_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant2'
       */
      AccTarSel_B.FirstCyc = AccTarSel_P_g.Constant2_Value_d;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_dAim_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant3'
       */
      AccTarSel_B.dAim = AccTarSel_P_g.Constant3_Value_p;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_aStat_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant4'
       */
      AccTarSel_B.aStat = AccTarSel_P_g.Constant4_Value_go;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_aApproach_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant5'
       */
      AccTarSel_B.aApproach = AccTarSel_P_g.Constant5_Value_g;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_ApproachCase_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant6'
       */
      AccTarSel_B.ApproachCase = AccTarSel_P_g.Constant6_Value_p;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_tObjStop_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant7'
       */
      AccTarSel_B.tObjStop = AccTarSel_P_g.Constant7_Value_p5;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_dSlowDown_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant8'
       */
      AccTarSel_B.dSlowDown = AccTarSel_P_g.Constant8_Value_g;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_ObjLeaving_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant9'
       */
      AccTarSel_B.ObjLeaving = AccTarSel_P_g.Constant9_Value_p;

      /* SignalConversion: '<S28>/OutportBuffer_InsertedFor_dImmerseAdj_at_inport_0' incorporates:
       *  Constant: '<S28>/Constant10'
       */
      AccTarSel_B.dImmerseAdj = AccTarSel_P_g.Constant10_Value_iq;

      /* End of Outputs for SubSystem: '<S20>/FollowObjInvalid' */
    }

    /* End of If: '<S20>/If' */

    /* BusCreator: '<S20>/Bus Creator' */
    AccTarSel_B.BusCreator_c.Valid = AccTarSel_B.ATS_Po_st.Valid;
    AccTarSel_B.BusCreator_c.aFOC = AccTarSel_B.aFOC;
    AccTarSel_B.BusCreator_c.DecToStop = AccTarSel_B.DecToStop;
    AccTarSel_B.BusCreator_c.FirstCyc = AccTarSel_B.FirstCyc;
    AccTarSel_B.BusCreator_c.dAim = AccTarSel_B.dAim;
    AccTarSel_B.BusCreator_c.aStat = AccTarSel_B.aStat;
    AccTarSel_B.BusCreator_c.aApproach = AccTarSel_B.aApproach;
    AccTarSel_B.BusCreator_c.ApproachCase = AccTarSel_B.ApproachCase;
    AccTarSel_B.BusCreator_c.tObjStop = AccTarSel_B.tObjStop;
    AccTarSel_B.BusCreator_c.dSlowDown = AccTarSel_B.dSlowDown;
    AccTarSel_B.BusCreator_c.ObjLeaving = AccTarSel_B.ObjLeaving;
    AccTarSel_B.BusCreator_c.dImmerseAdj = AccTarSel_B.dImmerseAdj;

    /* Assignment: '<S20>/Assignment1' incorporates:
     *  Constant: '<S20>/Zero1'
     */
    if (i_cnt == 0) {
      memcpy(&AccTarSel_B.Assignment1_i[0], &AccTarSel_P_g.Zero1_Value[0], 6U *
             sizeof(ACC_FOC_INFO_ST));
    }

    AccTarSel_B.Assignment1_i[AccTarSel_B.ForIterator_j] =
      AccTarSel_B.BusCreator_c;

    /* End of Assignment: '<S20>/Assignment1' */
  }

  /* End of Constant: '<S1>/Constant3' */
  /* End of Outputs for SubSystem: '<S1>/FollowObjCtrl' */

  /* Outputs for Iterator SubSystem: '<S26>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S27>/For Iterator'
   */
  /* Constant: '<S26>/Constant2' */
  for (i_cnt = 0; i_cnt < AccTarSel_P_g.Constant2_Value_cv; i_cnt++) {
    AccTarSel_B.ForIterator_jq = i_cnt;

    /* Selector: '<S27>/Selector2' */
    AccTarSel_B.Selector2_l =
      AccTarSel_B.Assignment1_i[AccTarSel_B.ForIterator_jq];

    /* Assignment: '<S27>/Assignment1' incorporates:
     *  Assignment: '<S27>/Assignment2'
     *  Constant: '<S27>/Zero1'
     *  Constant: '<S27>/Zero2'
     */
    if (i_cnt == 0) {
      for (i = 0; i < 6; i++) {
        AccTarSel_B.Assignment1_a3[i] = AccTarSel_P_g.Zero1_Value_l[i];
        AccTarSel_B.Assignment2_n[i] = AccTarSel_P_g.Zero2_Value[i];
      }
    }

    AccTarSel_B.Assignment1_a3[AccTarSel_B.ForIterator_jq] =
      AccTarSel_B.Selector2_l.aFOC;

    /* End of Assignment: '<S27>/Assignment1' */

    /* Assignment: '<S27>/Assignment2' */
    AccTarSel_B.Assignment2_n[AccTarSel_B.ForIterator_jq] =
      AccTarSel_B.Selector2_l.DecToStop;
  }

  /* End of Constant: '<S26>/Constant2' */
  /* End of Outputs for SubSystem: '<S26>/For Iterator Subsystem' */

  /* MinMax: '<S26>/Min' */
  u1 = AccTarSel_B.Assignment1_a3[0];
  for (i_cnt = 0; i_cnt < 5; i_cnt++) {
    u0 = AccTarSel_B.Assignment1_a3[i_cnt + 1];
    if ((!(u1 < u0)) && (!rtIsNaNF(u0))) {
      u1 = u0;
    }
  }

  AccTarSel_B.Min_j = u1;

  /* End of MinMax: '<S26>/Min' */

  /* Lookup_n-D: '<S19>/1-D Lookup Table' */
  AccTarSel_B.uDLookupTable_p = look1_iflf_linlcpw(rtu_VSI_VehState_st->vRef,
    AccTarSel_P_g.uDLookupTable_bp01Data_d3,
    AccTarSel_P_g.uDLookupTable_tableData_f, 3U);

  /* Abs: '<S19>/Abs1' */
  AccTarSel_B.Abs1 = (real32_T)fabs(AccTarSel_B.uDLookupTable_p);

  /* Abs: '<S19>/Abs' */
  AccTarSel_B.Abs_j = (real32_T)fabs(rtu_VSI_VehState_st->Curvature);

  /* MinMax: '<S19>/Max' incorporates:
   *  Constant: '<S19>/Constant1'
   */
  u0 = AccTarSel_B.Abs_j;
  u1 = AccTarSel_P_g.Constant1_Value_ea;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Max_b = u1;

  /* End of MinMax: '<S19>/Max' */

  /* Product: '<S19>/Divide' */
  AccTarSel_B.Divide_d = AccTarSel_B.Abs1 / AccTarSel_B.Max_b;

  /* Sqrt: '<S19>/Sqrt' */
  AccTarSel_B.Sqrt = (real32_T)sqrt(AccTarSel_B.Divide_d);

  /* Sum: '<S19>/Add' */
  AccTarSel_B.Add_b = AccTarSel_B.Sqrt - rtu_VSI_VehState_st->vRef;

  /* Product: '<S19>/Divide1' incorporates:
   *  Constant: '<S19>/P_tSSCPos'
   */
  AccTarSel_B.Divide1 = AccTarSel_B.Add_b / rtP_P_tCSC;

  /* RelationalOperator: '<S18>/Relational Operator' incorporates:
   *  Constant: '<S18>/Constant'
   */
  AccTarSel_B.RelationalOperator_e = (rtu_ZOP2ACC->case_num ==
    AccTarSel_P_g.Constant_Value_dv);

  /* Math: '<S18>/Square' */
  AccTarSel_B.Square_a = rtu_ZOP2ACC->light_des_spd * rtu_ZOP2ACC->light_des_spd;

  /* Math: '<S18>/Square1' */
  AccTarSel_B.Square1 = rtu_VSI_VehState_st->vRef * rtu_VSI_VehState_st->vRef;

  /* Sum: '<S18>/Add' */
  AccTarSel_B.Add_pp = AccTarSel_B.Square_a - AccTarSel_B.Square1;

  /* Sum: '<S18>/Add2' incorporates:
   *  Constant: '<S18>/Constant4'
   */
  AccTarSel_B.Add2 = rtu_ZOP2ACC->light_dist - AccTarSel_P_g.Constant4_Value_i;

  /* MinMax: '<S18>/Max' incorporates:
   *  Constant: '<S18>/Constant3'
   */
  u0 = AccTarSel_B.Add2;
  u1 = AccTarSel_P_g.Constant3_Value_is;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Max_m = u1;

  /* End of MinMax: '<S18>/Max' */

  /* Gain: '<S18>/Gain' */
  AccTarSel_B.Gain_a = AccTarSel_P_g.Gain_Gain_mz * AccTarSel_B.Max_m;

  /* Sum: '<S18>/Add1' incorporates:
   *  Constant: '<S18>/Constant2'
   */
  AccTarSel_B.Add1_m = AccTarSel_B.Gain_a + AccTarSel_P_g.Constant2_Value_cvv;

  /* Product: '<S18>/Divide' */
  AccTarSel_B.Divide_m = AccTarSel_B.Add_pp / AccTarSel_B.Add1_m;

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant1'
   */
  if (AccTarSel_B.RelationalOperator_e) {
    AccTarSel_B.Switch_j = AccTarSel_P_g.Constant1_Value_iu;
  } else {
    AccTarSel_B.Switch_j = AccTarSel_B.Divide_m;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Outputs for Iterator SubSystem: '<S17>/Subsystem' incorporates:
   *  ForIterator: '<S25>/For Iterator'
   */
  /* Constant: '<S17>/Constant' */
  if (0 < AccTarSel_P_g.Constant_Value_c) {
    /* SignalConversion: '<S25>/TmpSignal ConversionAtSelectorInport1' */
    AccTarSel_B.TmpSignalConversionAtSelectorIn[0] = AccTarSel_B.aSSC;
    AccTarSel_B.TmpSignalConversionAtSelectorIn[1] = AccTarSel_B.Min_j;
    AccTarSel_B.TmpSignalConversionAtSelectorIn[2] = AccTarSel_B.Divide1;
    AccTarSel_B.TmpSignalConversionAtSelectorIn[3] = AccTarSel_B.Switch_j;
  }

  /* Constant: '<S17>/Constant' */
  for (i_cnt = 0; i_cnt < AccTarSel_P_g.Constant_Value_c; i_cnt++) {
    AccTarSel_B.ForIterator_o = i_cnt;

    /* Sum: '<S25>/Add' incorporates:
     *  Constant: '<S25>/Constant2'
     */
    AccTarSel_B.Add_f = AccTarSel_B.ForIterator_o +
      AccTarSel_P_g.Constant2_Value_n;

    /* Memory: '<S25>/Memory' */
    AccTarSel_B.Memory_ao = AccTarSel_DW.Memory_PreviousInput_gs;

    /* Memory: '<S25>/Memory1' */
    AccTarSel_B.Memory1_e = AccTarSel_DW.Memory1_PreviousInput_h;

    /* RelationalOperator: '<S25>/Relational Operator' incorporates:
     *  Constant: '<S25>/Constant'
     */
    AccTarSel_B.RelationalOperator_ly = (AccTarSel_B.ForIterator_o ==
      AccTarSel_P_g.Constant_Value_m);

    /* Selector: '<S25>/Selector' */
    AccTarSel_B.Selector_f =
      AccTarSel_B.TmpSignalConversionAtSelectorIn[AccTarSel_B.ForIterator_o];

    /* Switch: '<S25>/Switch' incorporates:
     *  Constant: '<S25>/Constant1'
     */
    if (AccTarSel_B.RelationalOperator_ly) {
      AccTarSel_B.Switch_pm = AccTarSel_P_g.Constant1_Value_l;
    } else {
      AccTarSel_B.Switch_pm = AccTarSel_B.Memory_ao;
    }

    /* End of Switch: '<S25>/Switch' */

    /* RelationalOperator: '<S25>/Relational Operator1' */
    AccTarSel_B.RelationalOperator1_pk = (AccTarSel_B.Selector_f <
      AccTarSel_B.Switch_pm);

    /* Switch: '<S25>/Switch1' incorporates:
     *  Switch: '<S25>/Switch2'
     */
    if (AccTarSel_B.RelationalOperator1_pk) {
      AccTarSel_B.Switch1_e = AccTarSel_B.Selector_f;
      AccTarSel_B.Switch2_j = AccTarSel_B.Add_f;
    } else {
      AccTarSel_B.Switch1_e = AccTarSel_B.Switch_pm;
      AccTarSel_B.Switch2_j = AccTarSel_B.Memory1_e;
    }

    /* End of Switch: '<S25>/Switch1' */

    /* Update for Memory: '<S25>/Memory' */
    AccTarSel_DW.Memory_PreviousInput_gs = AccTarSel_B.Switch1_e;

    /* Update for Memory: '<S25>/Memory1' */
    AccTarSel_DW.Memory1_PreviousInput_h = AccTarSel_B.Switch2_j;
  }

  /* End of Outputs for SubSystem: '<S17>/Subsystem' */

  /* MinMax: '<S16>/Max' incorporates:
   *  Constant: '<S23>/Constant'
   */
  u0 = AccTarSel_B.Switch1_e;
  u1 = AccTarSel_P_g.Constant_Value_m4;
  if ((u0 > u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Max_f = u1;

  /* End of MinMax: '<S16>/Max' */

  /* MinMax: '<S16>/Max1' incorporates:
   *  Constant: '<S24>/Constant'
   */
  u0 = AccTarSel_B.Max_f;
  u1 = AccTarSel_P_g.Constant_Value_dn;
  if ((u0 < u1) || rtIsNaNF(u1)) {
    u1 = u0;
  }

  AccTarSel_B.Max1 = u1;

  /* End of MinMax: '<S16>/Max1' */

  /* Lookup_n-D: '<S17>/1-D Lookup Table' */
  bpIdx = plook_u32s32_evencka(AccTarSel_B.Switch2_j,
    AccTarSel_P_g.uDLookupTable_bp01Data[0], (uint32_T)
    AccTarSel_P_g.uDLookupTable_bp01Data[1] -
    AccTarSel_P_g.uDLookupTable_bp01Data[0], 5U);
  AccTarSel_B.uDLookupTable_n = AccTarSel_P_g.uDLookupTable_tableData[bpIdx];

  /* Logic: '<S26>/OR' */
  tmp = AccTarSel_B.Assignment2_n[0];
  for (i_cnt = 0; i_cnt < 5; i_cnt++) {
    tmp = (tmp || AccTarSel_B.Assignment2_n[i_cnt + 1]);
  }

  AccTarSel_B.OR_f = tmp;

  /* End of Logic: '<S26>/OR' */

  /* RelationalOperator: '<S17>/Relational Operator' incorporates:
   *  Constant: '<S17>/Constant1'
   */
  AccTarSel_B.RelationalOperator_m = (AccTarSel_B.Switch_l.AVP_STATE ==
    AccTarSel_P_g.Constant1_Value_bv);

  /* Logic: '<S17>/OR' */
  AccTarSel_B.OR_fk = (AccTarSel_B.OR_f || AccTarSel_B.RelationalOperator_m);

  /* Logic: '<S1>/OR' */
  rty_ACC_LgtCtrl_st->ACCStandstillReq = (AccTarSel_B.OR_fk || AccTarSel_B.AND);

  /* Selector: '<S1>/Selector2' incorporates:
   *  Constant: '<S1>/Constant9'
   */
  AccTarSel_B.Selector2 =
    AccTarSel_B.Assignment1_i[AccTarSel_P_g.Constant9_Value];

  /* Constant: '<S22>/Constant3' */
  AccTarSel_B.Constant3 = AccTarSel_P_g.Constant3_Value_j;

  /* BusCreator: '<Root>/Bus Creator' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  AccTarSel_B.ATS_Internal_ObjInfo_st_f.tmeStamp = AccTarSel_P_g.Constant5_Value;
  memcpy(&AccTarSel_B.ATS_Internal_ObjInfo_st_f.ats_obj_st[0],
         &AccTarSel_B.Assignment1_a[0], 40U * sizeof(ATS_OBJINFO_ST));

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  rty_ACC_LgtCtrl_st->ACCCMDType = (uint8_T)AccTarSel_B.uDLookupTable_n;

  /* Gain: '<Root>/Gain' */
  rty_ACC_LgtCtrl_st->ACCAxTarUpperComfBand = AccTarSel_P_g.Gain_Gain_ki *
    AccTarSel_B.Max1;

  /* Gain: '<Root>/Gain1' */
  rty_ACC_LgtCtrl_st->ACCAxTarLowerComfBand = AccTarSel_P_g.Gain1_Gain_p *
    AccTarSel_B.Max1;

  /* DataTypeConversion: '<S12>/Data Type Conversion12' */
  AccTarSel_B.DataTypeConversion12 = AccTarSel_B.BusCreator_m.BrakePedalApply;

  /* Gain: '<S12>/Gain' */
  AccTarSel_B.Gain_p = (uint16_T)(((uint32_T)AccTarSel_P_g.Gain_Gain_d *
    AccTarSel_B.DataTypeConversion12) >> 7);

  /* Logic: '<S12>/NOT' */
  AccTarSel_B.NOT = !AccTarSel_B.BusCreator_m.ACC_MainSw;

  /* DataTypeConversion: '<S12>/Data Type Conversion13' */
  AccTarSel_B.DataTypeConversion13 = AccTarSel_B.NOT;

  /* Gain: '<S12>/Gain1' */
  AccTarSel_B.Gain1_g = (uint16_T)(((uint32_T)AccTarSel_P_g.Gain1_Gain_n *
    AccTarSel_B.DataTypeConversion13) >> 6);

  /* DataTypeConversion: '<S12>/Data Type Conversion14' */
  AccTarSel_B.DataTypeConversion14 = AccTarSel_B.BusCreator_m.ACC_CancelSw;

  /* Gain: '<S12>/Gain2' */
  AccTarSel_B.Gain2_f = (uint16_T)(((uint32_T)AccTarSel_P_g.Gain2_Gain_fo *
    AccTarSel_B.DataTypeConversion14) >> 5);

  /* RelationalOperator: '<S12>/Relational Operator' incorporates:
   *  Constant: '<S12>/Constant'
   */
  AccTarSel_B.RelationalOperator_mf = (AccTarSel_B.BusCreator_m.GearLever <
    AccTarSel_P_g.Constant_Value_he);

  /* DataTypeConversion: '<S12>/Data Type Conversion15' */
  AccTarSel_B.DataTypeConversion15 = AccTarSel_B.RelationalOperator_mf;

  /* Gain: '<S12>/Gain3' */
  AccTarSel_B.Gain3_l = (uint16_T)(((uint32_T)AccTarSel_P_g.Gain3_Gain_a *
    AccTarSel_B.DataTypeConversion15) >> 4);

  /* Sum: '<S12>/Add' */
  AccTarSel_B.Add_d = (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
    ((uint32_T)AccTarSel_B.Gain_p + AccTarSel_B.Gain1_g) + AccTarSel_B.Gain2_f)
    + AccTarSel_B.Gain3_l);

  /* BusCreator: '<Root>/Bus Creator1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rty_ACC_LgtCtrl_st->ACCVLCMainReq = AccTarSel_B.AST_Info_st.MainState;
  rty_ACC_LgtCtrl_st->ACCAxtar = AccTarSel_B.Max1;
  rty_ACC_LgtCtrl_st->ACCBrkPrfrd = AccTarSel_P_g.Constant_Value_dc;
  rty_ACC_LgtCtrl_st->ACCDriveoffReq = AccTarSel_B.DrvOffEnable;
  rty_ACC_LgtCtrl_st->ACCdSet = AccTarSel_B.Switch_e;
  rty_ACC_LgtCtrl_st->ACCvSet = AccTarSel_B.AST_Info_st.vSet;
  rty_ACC_LgtCtrl_st->ACC_Disable_Msk = AccTarSel_B.Add_d;

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  u1 = (real32_T)floor(AccTarSel_B.AST_Info_st.MainState);
  if (rtIsNaNF(u1) || rtIsInfF(u1)) {
    u1 = 0.0F;
  } else {
    u1 = (real32_T)fmod(u1, 256.0);
  }

  rty_ACC2ZOP->state = (uint8_T)(u1 < 0.0F ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
    -u1 : (int32_T)(uint8_T)u1);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  AccTarSel_B.RelationalOperator_p = (AccTarSel_B.Add_d ==
    AccTarSel_P_g.Constant4_Value_ig);

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  rty_ACC2ZOP->ready = AccTarSel_B.RelationalOperator_p;

  /* RelationalOperator: '<Root>/Relational Operator2' incorporates:
   *  Constant: '<Root>/Constant8'
   */
  AccTarSel_B.RelationalOperator2_h = (AccTarSel_B.AST_Info_st.MainState >=
    AccTarSel_P_g.Constant8_Value_d);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  rty_ACC2ZOP->active = AccTarSel_B.RelationalOperator2_h;

  /* RelationalOperator: '<Root>/Relational Operator1' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  AccTarSel_B.RelationalOperator1_g = (AccTarSel_B.AST_Info_st.MainState ==
    AccTarSel_P_g.Constant6_Value_d);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  rty_ACC2ZOP->overide = AccTarSel_B.RelationalOperator1_g;

  /* Memory: '<S15>/Memory' */
  AccTarSel_B.Memory_j = AccTarSel_DW.Memory_PreviousInput_h;

  /* RelationalOperator: '<S15>/Relational Operator' incorporates:
   *  Constant: '<S15>/Constant'
   */
  AccTarSel_B.RelationalOperator_jx = (AccTarSel_B.Memory_j >=
    AccTarSel_P_g.Constant_Value_gu);

  /* RelationalOperator: '<S15>/Relational Operator1' incorporates:
   *  Constant: '<S15>/Constant1'
   */
  AccTarSel_B.RelationalOperator1_e = (AccTarSel_B.AST_Info_st.MainState <=
    AccTarSel_P_g.Constant1_Value_ic);

  /* Logic: '<S15>/AND' */
  AccTarSel_B.AND_jh = (AccTarSel_B.RelationalOperator_jx &&
                        AccTarSel_B.RelationalOperator1_e);

  /* Memory: '<S15>/Memory1' */
  AccTarSel_B.Memory1_k = AccTarSel_DW.Memory1_PreviousInput_k;

  /* RelationalOperator: '<S15>/Relational Operator2' incorporates:
   *  Constant: '<S15>/Constant2'
   */
  AccTarSel_B.RelationalOperator2_f = (AccTarSel_B.Memory1_k >
    AccTarSel_P_g.Constant2_Value_jp);

  /* If: '<S15>/If' */
  if (AccTarSel_B.AND_jh) {
    /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem' incorporates:
     *  ActionPort: '<S172>/Action Port'
     */
    AccTarSel_IfActionSubsystem_a(&AccTarSel_B.Merge_g, &AccTarSel_B.Merge1_b,
      &AccTarSel_P_g.IfActionSubsystem_av);

    /* End of Outputs for SubSystem: '<S15>/If Action Subsystem' */
  } else if (AccTarSel_B.RelationalOperator2_f) {
    /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S173>/Action Port'
     */
    /* SignalConversion: '<S173>/OutportBuffer_InsertedFor_CancelFlag_at_inport_0' incorporates:
     *  Constant: '<S173>/Constant'
     */
    AccTarSel_B.Merge_g = AccTarSel_P_g.Constant_Value_aen;

    /* Sum: '<S173>/Add' */
    AccTarSel_B.Add_o = AccTarSel_B.Memory1_k - rtu_SYS_Info_st->dT;

    /* MinMax: '<S173>/Max' incorporates:
     *  Constant: '<S173>/Constant1'
     */
    u0 = AccTarSel_B.Add_o;
    u1 = AccTarSel_P_g.Constant1_Value_jg;
    if ((u0 > u1) || rtIsNaNF(u1)) {
      u1 = u0;
    }

    AccTarSel_B.Merge1_b = u1;

    /* End of MinMax: '<S173>/Max' */
    /* End of Outputs for SubSystem: '<S15>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S174>/Action Port'
     */
    AccTarSel_IfActionSubsystem_a(&AccTarSel_B.Merge_g, &AccTarSel_B.Merge1_b,
      &AccTarSel_P_g.IfActionSubsystem2_a);

    /* End of Outputs for SubSystem: '<S15>/If Action Subsystem2' */
  }

  /* End of If: '<S15>/If' */

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  rty_ACC2ZOP->cancle = AccTarSel_B.Merge_g;

  /* BusCreator: '<Root>/Bus Creator2' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  rty_ACC2ZOP->error = AccTarSel_P_g.Constant7_Value_o;

  /* Selector: '<Root>/Selector2' incorporates:
   *  Constant: '<Root>/Constant9'
   */
  *rty_ATS_Po_st = AccTarSel_B.Assignment2[AccTarSel_P_g.Constant9_Value_d];
}

/* Update for referenced model: 'AccTarSel' */
void AccTarSel_Update(const AVP_OUTPUT_ST *rtu_AVP_Info)
{
  /* Update for Memory: '<S159>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_l = AccTarSel_B.AND3;

  /* Update for Memory: '<S5>/Memory3' */
  AccTarSel_DW.Memory3_PreviousInput = rtu_AVP_Info->AVP_STATE;

  /* Update for Memory: '<S5>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_b = AccTarSel_B.Merge_c;

  /* Update for Memory: '<S12>/Memory2' */
  AccTarSel_DW.Memory2_PreviousInput = AccTarSel_B.OR;

  /* Update for Memory: '<S12>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_f = AccTarSel_B.ACC_SpdIncSw;

  /* Update for Memory: '<S12>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_bw = AccTarSel_B.ACC_SpdDecSw;

  /* Update for Memory: '<Root>/Memory' */
  AccTarSel_DW.Memory_PreviousInput = AccTarSel_B.ATS_Internal_ObjInfo_st_f;

  /* Update for Memory: '<S144>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_g = AccTarSel_B.Add1;

  /* Update for Memory: '<Root>/Memory1' */
  memcpy(&AccTarSel_DW.Memory1_PreviousInput_b[0], &AccTarSel_B.Assignment2[0],
         6U * sizeof(ATS_PO_ST));

  /* Update for Memory: '<S13>/Memory' */
  AccTarSel_DW.Memory_2_PreviousInput = AccTarSel_B.PosTime_p;
  AccTarSel_DW.Memory_1_PreviousInput = AccTarSel_B.NegTime_e;

  /* Update for Memory: '<S143>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_e = rtu_AVP_Info->EndPoint_x;

  /* Update for Memory: '<S143>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_f = AccTarSel_B.Max;

  /* Update for Memory: '<S22>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_i = AccTarSel_B.Add1_a;

  /* Update for Memory: '<S1>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_a = AccTarSel_B.Max1;

  /* Update for Memory: '<S4>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_lc[0] = AccTarSel_B.AND1_o[0];
  AccTarSel_DW.Memory_PreviousInput_lc[1] = AccTarSel_B.AND1_o[1];

  /* Update for Memory: '<S4>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_j = AccTarSel_B.Switch_e;

  /* Update for Memory: '<S1>/Memory1' */
  memcpy(&AccTarSel_DW.Memory1_PreviousInput[0], &AccTarSel_B.Assignment1_i[0],
         6U * sizeof(ACC_FOC_INFO_ST));

  /* Update for Memory: '<S15>/Memory' */
  AccTarSel_DW.Memory_PreviousInput_h = AccTarSel_B.AST_Info_st.MainState;

  /* Update for Memory: '<S15>/Memory1' */
  AccTarSel_DW.Memory1_PreviousInput_k = AccTarSel_B.Merge1_b;
}

/* Model initialize function */
void AccTarSel_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_AccTarSel_T *const AccTarSel_M = &(AccTarSel_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(AccTarSel_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &AccTarSel_B), 0,
                sizeof(B_AccTarSel_c_T));

  /* states (dwork) */
  (void) memset((void *)&AccTarSel_DW, 0,
                sizeof(DW_AccTarSel_f_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    AccTarSel_rti_init_trc_pointers();
    RTI_INIT_CODE_ENV();
  }
}
