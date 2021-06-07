/************************ dSPACE target specific file *************************

   Include file .\Intergration_ZOP_rti1401\Intergration_ZOP_th.c :

   Task Configuration file for model : Intergration_ZOP

   RTI1401 7.12 (02-May-2019)/2.18
   17-Mar-2021 16:07:03

   MATLAB 9.5.0.944444 (R2018b)

   Copyright (c) 1993-2002 dSPACE GmbH, GERMANY

 *****************************************************************************/

/* ===== List of model tasks and assigned interrupt sources ================

   Timer Task 1 [0.01 0] s        : Timer A interrupt
   CAN_TYPE1_INT_M3_C1            : CAN_TYPE1_M3_C1 RX Interrupt
   _CAN_TYPE1_INT_M3_C1           : CAN_TYPE1_M3_C1 RX Interrupt
   __CAN_TYPE1_INT_M3_C1          : CAN_TYPE1_M3_C1 RX Interrupt
   ___CAN_TYPE1_INT_M3_C1         : CAN_TYPE1_M3_C1 RX Interrupt
   __CAN_TYPE1_INT_M3_C2          : CAN_TYPE1_M3_C2 RX Interrupt
   ___CAN_TYPE1_INT_M3_C2         : CAN_TYPE1_M3_C2 RX Interrupt
   CAN_TYPE1_INT_M3_C2            : CAN_TYPE1_M3_C2 RX Interrupt
   _CAN_TYPE1_INT_M3_C2           : CAN_TYPE1_M3_C2 RX Interrupt

  * ========================================================================= */

#ifndef  _RTI_TH_MODEL_C__
# define _RTI_TH_MODEL_C__

/* ===== File includes ===================================================== */

/* Auxiliary functions of TaskHandling*/

/* No sub-interrupts used by application: */
/* RTITH_USES_SUBINT not defined for rti_th_aux.c */
# include <rti_th_aux.c>

/* rtkernel.h already included in RTI Simulation Engine. */

/* ===== Macro definitions ================================================= */

/* Number of local tasks of the specific type */
# define  RTITH_TIMER_TASKS_LOCAL_NUM_OF      (1)
# define  RTITH_HWINT_TASKS_LOCAL_NUM_OF      (8)
# define  RTITH_SWINT_TASKS_LOCAL_NUM_OF      (0)
# define  RTITH_TMRINT_TASKS_LOCAL_NUM_OF     (0)

# define  RTITH_INT_TASKS_ALL_LOCAL_NUM_OF    (8)
# define  RTITH_TASKS_ALL_LOCAL_NUM_OF        (9)

/* Default scaling factor for timer tasks */
# ifndef  RTI_TIMER_TASK_TIME_SCALE
#   define RTI_TIMER_TASK_TIME_SCALE           (1.0)
# endif

/* Avoid compilation with invalid timer task mode */
# ifdef MULTITASKING
#   error Cannot compile in multiple timer tasks mode (.\Intergration_ZOP_rti1401\Intergration_ZOP_th.c is for ST).
# endif


/* ===== Type definitions ================================================ */

typedef struct tagRtiTimerTask1TriggerSource {
  int service;
  int subentry;
  int subsubentry;
} RtiTimerTask1TriggerSource;


/* ===== Global declarations =============================================== */

/* Pointers to task information variables */
  /* --- Task  1 : Timer Task 1 (TIMER TIMERA) */
double               *pRti_TIMERA_STime;
double               *pRti_TIMERA_TTime;
rtk_task_state_type  *pRti_TIMERA_TState;
rtk_ovc_check_type   *pRti_TIMERA_OType;
int                  *pRti_TIMERA_OMax;
int                  *pRti_TIMERA_ORpt;
int                  *pRti_TIMERA_OCnt;
double               *pRti_TIMERA_TCnt;
int                  *pRti_TIMERA_Prio;

  /* --- Task  2 : CAN_TYPE1_INT_M3_C1 (HWINT CAN7) */
double               *pRti_CAN7_TTime;
rtk_task_state_type  *pRti_CAN7_TState;
rtk_ovc_check_type   *pRti_CAN7_OType;
int                  *pRti_CAN7_OMax;
int                  *pRti_CAN7_ORpt;
int                  *pRti_CAN7_OCnt;
double               *pRti_CAN7_TCnt;
int                  *pRti_CAN7_Prio;

  /* --- Task  3 : _CAN_TYPE1_INT_M3_C1 (HWINT CAN8) */
double               *pRti_CAN8_TTime;
rtk_task_state_type  *pRti_CAN8_TState;
rtk_ovc_check_type   *pRti_CAN8_OType;
int                  *pRti_CAN8_OMax;
int                  *pRti_CAN8_ORpt;
int                  *pRti_CAN8_OCnt;
double               *pRti_CAN8_TCnt;
int                  *pRti_CAN8_Prio;

  /* --- Task  4 : __CAN_TYPE1_INT_M3_C1 (HWINT CAN5) */
double               *pRti_CAN5_TTime;
rtk_task_state_type  *pRti_CAN5_TState;
rtk_ovc_check_type   *pRti_CAN5_OType;
int                  *pRti_CAN5_OMax;
int                  *pRti_CAN5_ORpt;
int                  *pRti_CAN5_OCnt;
double               *pRti_CAN5_TCnt;
int                  *pRti_CAN5_Prio;

  /* --- Task  5 : ___CAN_TYPE1_INT_M3_C1 (HWINT CAN6) */
double               *pRti_CAN6_TTime;
rtk_task_state_type  *pRti_CAN6_TState;
rtk_ovc_check_type   *pRti_CAN6_OType;
int                  *pRti_CAN6_OMax;
int                  *pRti_CAN6_ORpt;
int                  *pRti_CAN6_OCnt;
double               *pRti_CAN6_TCnt;
int                  *pRti_CAN6_Prio;

  /* --- Task  6 : __CAN_TYPE1_INT_M3_C2 (HWINT CAN3) */
double               *pRti_CAN3_TTime;
rtk_task_state_type  *pRti_CAN3_TState;
rtk_ovc_check_type   *pRti_CAN3_OType;
int                  *pRti_CAN3_OMax;
int                  *pRti_CAN3_ORpt;
int                  *pRti_CAN3_OCnt;
double               *pRti_CAN3_TCnt;
int                  *pRti_CAN3_Prio;

  /* --- Task  7 : ___CAN_TYPE1_INT_M3_C2 (HWINT CAN4) */
double               *pRti_CAN4_TTime;
rtk_task_state_type  *pRti_CAN4_TState;
rtk_ovc_check_type   *pRti_CAN4_OType;
int                  *pRti_CAN4_OMax;
int                  *pRti_CAN4_ORpt;
int                  *pRti_CAN4_OCnt;
double               *pRti_CAN4_TCnt;
int                  *pRti_CAN4_Prio;

  /* --- Task  8 : CAN_TYPE1_INT_M3_C2 (HWINT CAN1) */
double               *pRti_CAN1_TTime;
rtk_task_state_type  *pRti_CAN1_TState;
rtk_ovc_check_type   *pRti_CAN1_OType;
int                  *pRti_CAN1_OMax;
int                  *pRti_CAN1_ORpt;
int                  *pRti_CAN1_OCnt;
double               *pRti_CAN1_TCnt;
int                  *pRti_CAN1_Prio;

  /* --- Task  9 : _CAN_TYPE1_INT_M3_C2 (HWINT CAN2) */
double               *pRti_CAN2_TTime;
rtk_task_state_type  *pRti_CAN2_TState;
rtk_ovc_check_type   *pRti_CAN2_OType;
int                  *pRti_CAN2_OMax;
int                  *pRti_CAN2_ORpt;
int                  *pRti_CAN2_OCnt;
double               *pRti_CAN2_TCnt;
int                  *pRti_CAN2_Prio;

/* Pointer to RTK task control block of 'Timer Task 1' */
static rtk_p_task_control_block    pRtiTimerTask1TCB = NULL;


/* ===== Function definitions ============================================== */

/* Interface function of Task Handling to create and bind all tasks */
static void rti_th_initialize(void)
{
  /* --- Local declarations ------------------------------------------------ */

  /* Pointers to task control blocks */
  rtk_p_task_control_block pTask1;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask2;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask3;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask4;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask5;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask6;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask7;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask8;  /*  Task (TCB pointer).              */
  rtk_p_task_control_block pTask9;  /*  Task (TCB pointer).              */

  int subentry;        /*  RTK subentry.                    */
  int service;         /*  RTK service.                     */

/* Initialize dynamically generated services */

  /* --- Initialization code -----------------------------------------------
   * Task  1 : Timer Task 1 (TIMER TIMERA)
   * Priority: 9, Source: 1, Target: 1
   * Source IntNo: 0, SubIntNo: RTK_NO_SINT, TaskId: 0
   * ----------------------------------------------------------------------- */
  service   = S_PERIODIC_A;                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      0);                /*  Interrupt number.                */
  pTask1   = rtith_create_task( /* --- Create task. ---------------- */
      rti_TIMERA,                 /*  Task function pointer.           */
      9,                 /*  Task priority.                   */
      ovc_count,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      0);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask1,          /*  Task (TCB pointer).              */
      "Timer Task 1");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask1,             /*  Task (TCB pointer).              */
      (0.01 * RTI_TIMER_TASK_TIME_SCALE),             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_periodic,               /*  RTK task type.                   */
      NULL,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_TIMERA_STime       = &(pTask1->sample_time);
  pRti_TIMERA_TTime       = &(pTask1->turnaround_time);
  pRti_TIMERA_TState      = &(pTask1->state);
  pRti_TIMERA_OType       = &(pTask1->ovc_type);
  pRti_TIMERA_OMax        = &(pTask1->ovc_max);
  pRti_TIMERA_ORpt        = &(pTask1->ovc_repeat);
  pRti_TIMERA_OCnt        = &(pTask1->ovc_counter);
  pRti_TIMERA_TCnt        = &(pTask1->tm_task_calls);
  pRti_TIMERA_Prio        = &(pTask1->priority);

  /* ... Assign pointer to RTK task control block of of 'Timer Task 1' ..... */
  pRtiTimerTask1TCB = pTask1;         /*  Reference task (time stamping).  */

  /* ... Mark driving interrupt as unused in non-RT simulation mode ........ */
# ifdef SMODE
#   if SMODE == NRTSIM
  rtith_int_status_bit_clear( /* --------------------------------- */
    service, subentry,                 /*  RTK service, RTK subentry.       */
    RTK_NO_SINT,                     /*  Sub-interrupt number.            */
    RTK_STATUS_USED);       /*  RTK mask: Interrupt is bound.    */
#   endif
# endif

  /* --- Initialization code -----------------------------------------------
   * Task  2 : CAN_TYPE1_INT_M3_C1 (HWINT CAN7)
   * Priority: 1, Source: 1, Target: 1
   * Source IntNo: 0, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      0);                /*  Interrupt number.                */
  pTask2   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN7,                 /*  Task function pointer.           */
      1,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask2,          /*  Task (TCB pointer).              */
      "CAN_TYPE1_INT_M3_C1");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask2,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN7_TTime         = &(pTask2->turnaround_time);
  pRti_CAN7_TState        = &(pTask2->state);
  pRti_CAN7_OType         = &(pTask2->ovc_type);
  pRti_CAN7_OMax          = &(pTask2->ovc_max);
  pRti_CAN7_ORpt          = &(pTask2->ovc_repeat);
  pRti_CAN7_OCnt          = &(pTask2->ovc_counter);
  pRti_CAN7_TCnt          = &(pTask2->tm_task_calls);
  pRti_CAN7_Prio          = &(pTask2->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  3 : _CAN_TYPE1_INT_M3_C1 (HWINT CAN8)
   * Priority: 2, Source: 1, Target: 1
   * Source IntNo: 1, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      1);                /*  Interrupt number.                */
  pTask3   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN8,                 /*  Task function pointer.           */
      2,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask3,          /*  Task (TCB pointer).              */
      "_CAN_TYPE1_INT_M3_C1");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask3,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN8_TTime         = &(pTask3->turnaround_time);
  pRti_CAN8_TState        = &(pTask3->state);
  pRti_CAN8_OType         = &(pTask3->ovc_type);
  pRti_CAN8_OMax          = &(pTask3->ovc_max);
  pRti_CAN8_ORpt          = &(pTask3->ovc_repeat);
  pRti_CAN8_OCnt          = &(pTask3->ovc_counter);
  pRti_CAN8_TCnt          = &(pTask3->tm_task_calls);
  pRti_CAN8_Prio          = &(pTask3->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  4 : __CAN_TYPE1_INT_M3_C1 (HWINT CAN5)
   * Priority: 3, Source: 1, Target: 1
   * Source IntNo: 2, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      2);                /*  Interrupt number.                */
  pTask4   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN5,                 /*  Task function pointer.           */
      3,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask4,          /*  Task (TCB pointer).              */
      "__CAN_TYPE1_INT_M3_C1");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask4,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN5_TTime         = &(pTask4->turnaround_time);
  pRti_CAN5_TState        = &(pTask4->state);
  pRti_CAN5_OType         = &(pTask4->ovc_type);
  pRti_CAN5_OMax          = &(pTask4->ovc_max);
  pRti_CAN5_ORpt          = &(pTask4->ovc_repeat);
  pRti_CAN5_OCnt          = &(pTask4->ovc_counter);
  pRti_CAN5_TCnt          = &(pTask4->tm_task_calls);
  pRti_CAN5_Prio          = &(pTask4->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  5 : ___CAN_TYPE1_INT_M3_C1 (HWINT CAN6)
   * Priority: 4, Source: 1, Target: 1
   * Source IntNo: 3, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      3);                /*  Interrupt number.                */
  pTask5   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN6,                 /*  Task function pointer.           */
      4,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask5,          /*  Task (TCB pointer).              */
      "___CAN_TYPE1_INT_M3_C1");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask5,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN6_TTime         = &(pTask5->turnaround_time);
  pRti_CAN6_TState        = &(pTask5->state);
  pRti_CAN6_OType         = &(pTask5->ovc_type);
  pRti_CAN6_OMax          = &(pTask5->ovc_max);
  pRti_CAN6_ORpt          = &(pTask5->ovc_repeat);
  pRti_CAN6_OCnt          = &(pTask5->ovc_counter);
  pRti_CAN6_TCnt          = &(pTask5->tm_task_calls);
  pRti_CAN6_Prio          = &(pTask5->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  6 : __CAN_TYPE1_INT_M3_C2 (HWINT CAN3)
   * Priority: 7, Source: 1, Target: 1
   * Source IntNo: 4, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      4);                /*  Interrupt number.                */
  pTask6   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN3,                 /*  Task function pointer.           */
      7,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask6,          /*  Task (TCB pointer).              */
      "__CAN_TYPE1_INT_M3_C2");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask6,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN3_TTime         = &(pTask6->turnaround_time);
  pRti_CAN3_TState        = &(pTask6->state);
  pRti_CAN3_OType         = &(pTask6->ovc_type);
  pRti_CAN3_OMax          = &(pTask6->ovc_max);
  pRti_CAN3_ORpt          = &(pTask6->ovc_repeat);
  pRti_CAN3_OCnt          = &(pTask6->ovc_counter);
  pRti_CAN3_TCnt          = &(pTask6->tm_task_calls);
  pRti_CAN3_Prio          = &(pTask6->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  7 : ___CAN_TYPE1_INT_M3_C2 (HWINT CAN4)
   * Priority: 8, Source: 1, Target: 1
   * Source IntNo: 5, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      5);                /*  Interrupt number.                */
  pTask7   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN4,                 /*  Task function pointer.           */
      8,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask7,          /*  Task (TCB pointer).              */
      "___CAN_TYPE1_INT_M3_C2");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask7,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN4_TTime         = &(pTask7->turnaround_time);
  pRti_CAN4_TState        = &(pTask7->state);
  pRti_CAN4_OType         = &(pTask7->ovc_type);
  pRti_CAN4_OMax          = &(pTask7->ovc_max);
  pRti_CAN4_ORpt          = &(pTask7->ovc_repeat);
  pRti_CAN4_OCnt          = &(pTask7->ovc_counter);
  pRti_CAN4_TCnt          = &(pTask7->tm_task_calls);
  pRti_CAN4_Prio          = &(pTask7->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  8 : CAN_TYPE1_INT_M3_C2 (HWINT CAN1)
   * Priority: 5, Source: 1, Target: 1
   * Source IntNo: 6, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      6);                /*  Interrupt number.                */
  pTask8   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN1,                 /*  Task function pointer.           */
      5,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask8,          /*  Task (TCB pointer).              */
      "CAN_TYPE1_INT_M3_C2");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask8,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN1_TTime         = &(pTask8->turnaround_time);
  pRti_CAN1_TState        = &(pTask8->state);
  pRti_CAN1_OType         = &(pTask8->ovc_type);
  pRti_CAN1_OMax          = &(pTask8->ovc_max);
  pRti_CAN1_ORpt          = &(pTask8->ovc_repeat);
  pRti_CAN1_OCnt          = &(pTask8->ovc_counter);
  pRti_CAN1_TCnt          = &(pTask8->tm_task_calls);
  pRti_CAN1_Prio          = &(pTask8->priority);

  /* --- Initialization code -----------------------------------------------
   * Task  9 : _CAN_TYPE1_INT_M3_C2 (HWINT CAN2)
   * Priority: 6, Source: 1, Target: 1
   * Source IntNo: 7, SubIntNo: RTK_NO_SINT, TaskId: -1
   * ----------------------------------------------------------------------- */
  service   = rtk_get_service(DS1401_CLASS_CAN, DS1401_MODULE_TP1, 2, 0);                     /*  RTK service.                     */
  subentry = rtk_get_subentry( /* --- Get RTK subentry. ----------- */
      service,                 /*  RTK service.                     */
      0,                 /*  Board base address.              */
      7);                /*  Interrupt number.                */
  pTask9   = rtith_create_task( /* --- Create task. ---------------- */
      rti_CAN2,                 /*  Task function pointer.           */
      6,                 /*  Task priority.                   */
      ovc_fcn,                 /*  RTK overrun check type.          */
      rti_default_overrun_fcn,                 /*  Overrun handler function.        */
      1,                 /*  Overrun count limit.             */
      -1);                /*  Simulink TID.                    */
  rtk_task_name_set( /* --- Set task name. -------------- */
      pTask9,          /*  Task (TCB pointer).              */
      "_CAN_TYPE1_INT_M3_C2");       /*  Task name.                       */
  rtith_bind_interrupt( /* --- Bind interrupt to task. ----- */
      service, subentry,         /*  RTK service, RTK subentry.       */
      pTask9,             /*  Task (TCB pointer).              */
      0,             /*  Sample time or period.           */
      C_LOCAL,             /*  RTK channel.                     */
      -1,             /*  Logical interrupt number.        */
      NULL);            /*  Hook function.                   */
  rtith_set_task_type( /* --- Set RTK task type. ---------- */
      service, subentry,           /*  RTK service, RTK subentry.       */
      RTK_NO_SINT,               /*  Sub-interrupt number.            */
      rtk_tt_aperiodic,               /*  RTK task type.                   */
      pTask1,               /*  Reference task (time stamping).  */
      0,            /*  Sample time offset.              */
      1);           /*  Step multiple.                   */

  /* ... Assign task information variables ................................. */
  pRti_CAN2_TTime         = &(pTask9->turnaround_time);
  pRti_CAN2_TState        = &(pTask9->state);
  pRti_CAN2_OType         = &(pTask9->ovc_type);
  pRti_CAN2_OMax          = &(pTask9->ovc_max);
  pRti_CAN2_ORpt          = &(pTask9->ovc_repeat);
  pRti_CAN2_OCnt          = &(pTask9->ovc_counter);
  pRti_CAN2_TCnt          = &(pTask9->tm_task_calls);
  pRti_CAN2_Prio          = &(pTask9->priority);

  return;
}

void rti_th_timertask1_trigger_source(RtiTimerTask1TriggerSource* triggerSource)
{
  triggerSource->service = S_PERIODIC_A;
  triggerSource->subentry = rtk_get_subentry(
    S_PERIODIC_A,
    0,
    0);
  triggerSource->subsubentry = RTK_NO_SINT;
}

#endif /* _RTI_TH_MODEL_C__ */

/****** [EOF] ****************************************************************/
