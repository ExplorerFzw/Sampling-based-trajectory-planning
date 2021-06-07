/*****************************************************************************************************************************/
/* MAIN S-FUNCTION for RTICANMM MainBlock (RTICANMM_MAIN_CAN.c) */
/*                                                                                                                           */
/*   AUTHOR(S):                                                                                                              */
/*      U. Homann                                                                                                              */
/*      M. Eikermann                                                                                                              */
/*                                                                                                                           */
/*                                                                                                                           */
/*   RTICANMM Date: 19-Feb-2019 19:14:44                                                                                     */
/*   RTICANMM Version: 5.2.737475.8018981481                                                                                     */
/*                                                                                                                           */
/*  Copyright 2020, dSPACE GmbH. All rights reserved.                                                                    */
/*      Brand names or product names are trademarks or registered trademarks of their respective companies or organizations. */
/*                                                                                                                           */
/* ***************************************************************************************************************************/

                                                                                                                           
                                                                                                                           
#include "RTICANMM_SETUP_Controller1.h"                                                                                                            
#include "RTICANMM_MAIN_CAN_Globals.h"                                                                                                              
                                                                                                                           
                                                                                                                           
#define NUM_PARAM       0                            /* Number of Parameter */                                             
#define NUM_IN          2                            /* Number of Input Ports */                                           
#define NUM_OUT         0                            /* Number of Output Ports */                                          
                                                                                                                           
#define NUM_CSTATES     0                            /* Number of Continuous States */                                     
#define NUM_DSTATES     0                            /* Number of Discrete States */                                       
                                                                                                                           
#define NUM_IWORK       0                            /* Number of I WORKS */                                               
#define NUM_PWORK       16                           /* Number of P WORKS */                                               
#define NUM_RWORK       1                            /* Number of R WORKS */                                               
                                                                                                                           
#define NUM_STIMES      1                            /* Number of Sample Times */                                          
#define NUM_MODES       0                            /* Number of Modes */                                                 
#define NUM_NSZCS       0                            /* Number of None Sampled ZCs */                                      
#define SET_OPTS        0                            /* Options */                                                         
                                                                                                                           
#define PWORK(X)   (PWork[X])                                                                                              
                                                                                                                           
#define IDPTR_MEM_T          PWORK(0)  /* Pointer to copy functions */                                                     
#define IDPTR_MEM_R          PWORK(1)  /* Pointer to copy functions */                                                     
#define TX_QUEUE_MEM         PWORK(2)  /* Pointer to TX QUEUE array */                                                     
#define TX_OLDTIME_Ptr       PWORK(6)                                                                                      
#define TX_KO_OLD_Ptr        PWORK(8)  /* Pointer to TX Enable Table */                                                    
#define TX_CYCL_OLD_Ptr      PWORK(9)  /* Pointer to extern TX Enable Table  */                                            
#define TX_COUNTER_Ptr       PWORK(10)  /* Pointer to TX Counter Table */                                                  
#define TX_TIMESTAMP_Ptr     PWORK(11)  /* Pointer to TX Counter Table */                                                  
#define RX_OLDTIME_Ptr       PWORK(13)                                                                                     
#define OLD_TIMESTAMP_Ptr    PWORK(14)                                                                                     
#define OLD_TX_TIMESTAMP_Ptr PWORK(15)                                                                                     
                                                                                                                           
                                                                                                                           
#define TX_KO_OLD            ((UInt8*)  TX_KO_OLD_Ptr)     /* Pointer to elements of TX Enable  Table */                   
#define TX_CYCL_OLD          ((UInt8*)  TX_CYCL_OLD_Ptr)   /* Pointer to elements of TX Cyclic  Table */                   
#define TX_ENABLE_OLD        ((UInt8*)  TX_ENABLE_OLD_Ptr)  /* Pointer to elements of TX Enable  Table */                  
#define TX_COUNTER           ((Int32*)  TX_COUNTER_Ptr)     /* Pointer to elements of TX Counter Table  */                 
#define TX_TIMESTAMP         ((unsigned long*)  TX_TIMESTAMP_Ptr)    /* Pointer to elements of TX Counter Table */         
#define OLD_TX_TIMESTAMP     ((unsigned long*)  OLD_TX_TIMESTAMP_Ptr)    /* Pointer to elements of TX Counter Table */     
#define RX_OLDTIME           ((double*) RX_OLDTIME_Ptr)                                                                    
#define TX_OLDTIME           ((double*) TX_OLDTIME_Ptr)                                                                    
#define OLD_TIMESTAMP        ((double*) OLD_TIMESTAMP_Ptr)                                                                 
                                                                                                                           
#define TX_QUEUE(X)        ((tx_queue_msg*) TX_QUEUE_MEM)[X]                                                               
#define IDPtr_T(X)         ((UInt32*) IDPTR_MEM_T)[X]                                                                      
#define IDPtr_R(X)         ((UInt32*) IDPTR_MEM_R)[X]                                                                      
#define RX 0                                                                                                               
#define TX 1                                                                                                               
                                                                                                                           
#define CANMM_CONTROLLER_ID CANMM_CTL_SETUP_Controller1                                                                                             
                                                                                                                           
 /* Max number of TX Messages per step */                                                                                  
#define MAX_TX_PERSTEP (unsigned long)((6*CANMM_CTL_BAUDRATE_GET(CANMM_CONTROLLER_ID)/500.0)*((sampletime)/1000.0)+0.5)   
                                                                                                                           
                                                                                                                           
static int memAllocatedStart    = 0;                                                                                       
static int memAllocatedInitCond = 0;                                                                                       
static int LastActiveState;                                                                                                
                                                                                                                           
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
static MainSetupMsgData MsgData;                                                                                           
static CANMM_CTL_CLIENT_TYPE(CANMM_CONTROLLER_ID) ctlsetup_client;                                                         
                                                                                                                           
typedef struct{                                                                                                            
  UInt32 id;                                                                                                               
  UInt32 kickout;                                                                                                          
  UInt32 idx;                                                                                                              
  UInt32 cycletime;                                                                                                        
} tx_queue_msg;                                                                                                            
                                                                                                                           
                                                                                                                           
                                                                                                                           
                                                                                                                           
UInt32 CAN_NUM_LOST=0;                                                                                                     
                                                                                                                           
                                                                                                                           
#include "RTICANMM_MAIN_CAN_DEFS.h"                                                                                                              
#include "RTICANMM_MAIN_CAN_MSG_DATA.h"                                                                                                              
                                                                                                                           
static int find_ID_number(SimStruct *S, CanMM_Msg *Msg)                                                                
{                                                                                                                      
  /* find corresponding number to Identifier ID */                                                                     
  void** PWork = ssGetPWork(S);                  /* For all PWorks */                                                  
  static Int32 StartIdx[8] = {0, 0, 0, 0, 0, 0, 0, 97};                                                         
  static Int32 StopIdx[8]  = {-1, -1, -1, -1, -1, -1, 96, 96};                                                         
  static Int32 NumOfIds[8] = {0, 0, 0, 0, 0, 0, 97, 0};                                                         
  Int32 MsgId = Msg->Id;                                                                                                     
  UInt8 MsgIDFormat = Msg->Format; // 0=STD, 1=EXT, 2=STD FD SLOW, 3=EXT FD SLOW, 4=RES, 5=RES, 6=STD FD FAST, 7=EXT FD FAST 
  int Pos;                                                                                                                   
  int i;                                                                                                                     
  int Start, Stop;                                                                                                 
  int found = 0;                                                                                                   
                                                                                                                   
  for (i=0; i<8; i++) {                                                                                            
    if( NumOfIds[MsgIDFormat]>0) {                                                                                 
      Start = (unsigned int) StartIdx[MsgIDFormat];                                                                
      Stop  = (unsigned int) StopIdx[MsgIDFormat];                                                                 
                                                                                                                   
      while (!found && (Start <= Stop)) {                                                                          
        /* Search in the middle of the table */                                                                    
        Pos = (Start + Stop)>>1;                                                                                   
        if ((ID_Table_RX(Pos) == MsgId) && (Msg->Format == CANMMCAN_MIDFRX[Pos])) {                                             
          found = 1;                                                                                               
          break; // while                                                                                          
        }                                                                                                          
        else {                                                                                                     
          if (MsgId < ID_Table_RX(Pos))                                                                            
            Stop  = Pos - 1;                                                                                       
          else                                                                                                     
            Start = Pos + 1;                                                                                       
        }                                                                                                          
      }                                                                                                            
    }                                                                                                              
    if (found) {                                                                                                   
      break; // i                                                                                                  
    }                                                                                                              
    else {                                                                                                         
      /* Try other message format, because of message id manipulation format may have changed. */                  
      MsgIDFormat = (MsgIDFormat + 1) & 0x7; // Toogle message format locally!!!                                   
    }                                                                                                              
  }                                                                                                                
                                                                                                                   
  if (!found) {                                                                                              
    Pos = -1; /* not found */                                                                                      
  }                                                                                                                
                                                                                                                   
  return Pos;                                                                                                          
}                                                                                                                      
                                                                                                                       
#endif /* MATLAB_MEX_FILE */                                                                                               
                                                                                                                           
                                                                                                                           
static void mdlInitializeSizes(SimStruct *S)                                                                               
{                                                                                                                          
  int i;                                                                                                                   
                                                                                                                           
  static int sizes_once = 0;                                                                                               
  ssSetNumSFcnParams(S, NUM_PARAM);                                                                                        
  if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)){                                                                   
    return;                                                                                                                
  }                                                                                                                        
  ssSetNumContStates(S, NUM_CSTATES);                                                                                      
  ssSetNumDiscStates(S, NUM_DSTATES);                                                                                      
                                                                                                                           
                                                                                                                           
  if (!ssSetNumOutputPorts(S, NUM_RX_OUTPUT))  {                                                                           
    return;                                                                                                                
  }                                                                                                                        
                                                                                                                           
  if (NUM_RX_OUTPUT) {                                                                                                     
#include "RTICANMM_MAIN_CAN_RX_PORT.h"                                                                                                              
  }                                                                                                                        
                                                                                                                           
  if (!ssSetNumInputPorts(S, NUM_TX_INPUT)){                                                                               
    return;                                                                                                                
  }                                                                                                                        
                                                                                                                           
#include "RTICANMM_MAIN_CAN_TX_PORT.h"                                                                                                              
                                                                                                                           
  for (i=0; i<NUM_TX_INPUT; i++) {                                                                                         
    ssSetInputPortDirectFeedThrough(S, i, 1);                                                                              
  }                                                                                                                        
  for (i=0; i<NUM_TX_INPUT; i++) {                                                                                         
    ssSetInputPortRequiredContiguous(S, i, true); /* direct input signal access */                                           
  }                                                                                                                        
                                                                                                                           
  ssSetNumRWork(S, NUM_RWORK);                                                                                             
  ssSetNumIWork(S, NUM_IWORK);                                                                                             
  ssSetNumPWork(S, NUM_PWORK);                                                                                             
  ssSetNumSampleTimes(S, NUM_STIMES);                                                                                      
  ssSetNumModes(S, NUM_MODES);                                                                                             
  ssSetNumNonsampledZCs(S, NUM_NSZCS);                                                                                     
  ssSetOptions(S, SET_OPTS | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME);                                                                                      
  LastActiveState = -1;                                                                                                    
}                                                                                                                          
                                                                                                                           
                                                                                                                           
                                                                                                                           
/* Function: mdlInitializeSampleTimes =========================================                                            
 * Abstract:                                                                                                               
 *    This function is used to specify the sample time(s) for your                                                         
 *    S-function. You must register the same number of sample times as                                                     
 *    specified in ssSetNumSampleTimes.                                                                                    
 */                                                                                                                        
static void mdlInitializeSampleTimes(SimStruct *S)                                                                         
{                                                                                                                          
  ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);                                                                                               
  ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);                                                                                               
}                                                                                                                          
                                                                                                                           
                                                                                                                           
                                                                                                                           
#define MDL_INITIALIZE_CONDITIONS   /* Change to #undef to remove function */                                              
#if defined(MDL_INITIALIZE_CONDITIONS)                                                                                     
/* Function: mdlInitializeConditions ========================================                                              
 */                                                                                                                        
static void mdlInitializeConditions(SimStruct *S)                                                                          
{                                                                                                                          
  void **PWork = ssGetPWork(S);                                                                                            
  int i = 0;                                                                                                               
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
#include "RTICANMM_MAIN_CAN_ID_TABLE.h"  /* fills the variable ID_Table with identifiers in rising order */                                          
#include "RTICANMM_MAIN_CAN_SIGNAL_DEFAULTS.h"                                                                                                              
#include "RTICANMM_MAIN_CAN_MESSAGE_DEFAULTS.h"                                                                                                              
  /* Allocate memory only once */                                                                                          
  if (!memAllocatedInitCond)                                                                                               
  {                                                                                                                        
      memAllocatedInitCond = 1;                                                                                            
  }                                                                                                                        
                                                                                                                           
CANMM_CTL_CLIENT_INIT(CANMM_CONTROLLER_ID, &ctlsetup_client);                                                              
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                  
}                                                                                                                          
#endif /* MDL_INITIALIZE_CONDITIONS */                                                                                     
                                                                                                                           
                                                                                                                           
#define MDL_START  /* Change to #undef to remove function */                                                               
#if defined(MDL_START)                                                                                                     
/* Function: mdlStart =======================================================                                              
 */                                                                                                                        
static void mdlStart(SimStruct *S)                                                                                         
{                                                                                                                          
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                                 
                                                                                                                           
  int i, j;                                                                                                                
  void (*copy_func)(RTICANMMMsgStruct*, int, SimStruct*);                                                                  
  void **PWork = ssGetPWork(S);                                                                                            
                                                                                                                           
                                                                                                                           
#if RTICANMM_LOGLEVEL > 1                                                                                                  
      msg_info_printf(MSG_SM_CANNEDY, RTICANMM_MAINSFCN_MDL_START_INFO , RTICANMM_MAINSFCN_MDL_START_INFO_TXT, "CAN");  
#endif                                                                                                                     
                                                                                                                           
  if (!memAllocatedStart) {                                                                                                
    memAllocatedStart = 1;                                                                                                 
    TX_QUEUE_MEM           = malloc(sizeof(tx_queue_msg)*NUM_TX_MSG); /* memory for TX queues */                           
    TX_KO_OLD_Ptr          = malloc(sizeof(UInt8)*NUM_TX_MSG);        /* memory for TX Enable Table */                     
    TX_CYCL_OLD_Ptr        = malloc(sizeof(UInt8)*NUM_TX_MSG);        /* memory for extern TX_ENABLE signal of each TX message */
    IDPTR_MEM_R            = malloc(sizeof(UInt32)*NUM_RX_MSG);       /* memory for RX copy functions */                   
    IDPTR_MEM_T            = malloc(sizeof(UInt32)*NUM_TX_MSG);       /* memory for TX copy functions */                   
    TX_COUNTER_Ptr         = malloc(sizeof(Int32)*(NUM_RX_MSG));      /* memory for TX_COUNTER of each TX message */       
    RX_OLDTIME_Ptr         = malloc(sizeof(double)*(NUM_RX_MSG));                                                          
    TX_OLDTIME_Ptr         = malloc(sizeof(double)*(NUM_RX_MSG));                                                          
    OLD_TIMESTAMP_Ptr      = malloc(sizeof(double));                                                                       
    if ((NULL == TX_QUEUE_MEM) || (NULL == TX_KO_OLD_Ptr) || (NULL == TX_CYCL_OLD_Ptr) || (NULL == IDPTR_MEM_R) ||         
        (NULL == IDPTR_MEM_T) || (NULL == TX_COUNTER_Ptr) || (NULL == RX_OLDTIME_Ptr) || (NULL == TX_OLDTIME_Ptr) ||       
        (NULL == OLD_TIMESTAMP_Ptr))                                                                                       
    {                                                                                                                      
          msg_error_printf(MSG_SM_CANNEDY, RTICANMM_MAINSFCN_MALLOC_ERROR , RTICANMM_MAINSFCN_MALLOC_ERROR_TXT, "CAN");     
    }                                                                                                                      
  }                                                                                                                        
                                                                                                                           
  for (i = 0; i < NUM_RX_MSG; i++) {                                                                                       
    TX_COUNTER[i] = -1;   /* initial values, will be incremented when sending message */                                   
  }                                                                                                                        
                                                                                                                           
  for (i = 0; i < NUM_RX_MSG; i++) {                                                                                       
    RX_OLDTIME[i] = 0.0;                                                                                                   
    TX_OLDTIME[i] = 0.0;                                                                                                   
  }                                                                                                                        
  OLD_TIMESTAMP[0] = 0;                                                                                                    
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                       
}                                                                                                                          
#endif /* MDL_START */                                                                                                     
                                                                                                                           
                                                                                                                           
/* Function: mdlOutputs =======================================================                                            
 */                                                                                                                        
static void mdlOutputs(SimStruct *S, int_T tid) {                                                                          
  void    **PWork = ssGetPWork(S);                   /* For all PWorks */                                                  
                                                                                                                           
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                                 
  int mbActive = -1;                                                                                                       
  int ite, k;                                                                                                              
                                                                                                                           
  Int32 idIdx = -1;                                                                                                    
                                                                                                                           
                                                                                                                           
  Int32 i, j;                                                                                                              
  UInt32 tx_queue_level;                                                                                                   
  void (*copy_func)(MainSetupMsgData*, int, SimStruct*);                                                                   
                                                                                                                           
                                                                                                                       
  tx_queue_level = CANMM_CTL_TX_QUEUE_LEVEL(CANMM_CONTROLLER_ID, &ctlsetup_client);                                    
                                                                                                                       
                                                                                                                           
                                                                                                                           
  mbActive = CAN_GLOBAL_ENABLE && (CANMM_CTL_VARIATION(CANMM_CONTROLLER_ID) == 1);                                        
                                                                                                                           
  if (mbActive != LastActiveState) {                                                                                       
    if(mbActive == 1) {                                                                                                    
      CANMM_CTL_RX_START(CANMM_CONTROLLER_ID, &ctlsetup_client);                                                           
    }                                                                                                                      
    else {                                                                                                                 
      CANMM_CTL_RX_STOP(CANMM_CONTROLLER_ID, &ctlsetup_client);                                                            
    }                                                                                                                      
  }                                                                                                                        
                                                                                                                           
  LastActiveState = mbActive;                                                                                              
                                                                                                                           
  if (mbActive) {                                                                                                          
    CAN_VAR_TRAFFIC = 0;                                                                                                   
                                                                                                                           
    /* Reset RX status */                                                                                          
    for (ite = 0; ite < NUM_RX_MSG; ite++)                                                                         
      RX_STATUS[ite] = 0;                                                                                          
                                                                                                                   
                                                                                                                           
    /* Receive all messages */                                                                                             
    while (CANMM_CTL_RX(CANMM_CONTROLLER_ID, &ctlsetup_client, &MsgData.CANMsg)) {                                         
                                                                                                                           
      /* Detect lost messages (not used to count lost messages since not supported by DS4302, DS22xx, ... */               
      if(MsgData.CANMsg.Flags & RTICANMM_FLAG_MSGLOST) {                                                                   
        continue;                                                                                                          
      }                                                                                                                    
      CAN_VAR_TRAFFIC = 1;                                                                                                 
                                                                                                                           
/* Convert timestamp from HW time to model(current) time */                                                                
#if defined(RTICANMM_HAVE_RTK)                                                                                             
      MsgData.CANMsg.TimeStamp = rtk_dsts_time_to_simtime_convert(MsgData.CANMsg.TimeStamp);                               
      if (MsgData.CANMsg.TimeStamp == 0.0) continue;                                                                       
#elif defined(RTICANMM_HAVE_DSRT)                                                                                          
      MsgData.CANMsg.TimeStamp = CANMM_DsConvertToSimTime(MsgData.CANMsg.TimeStamp);                                       
      if (MsgData.CANMsg.TimeStamp == 0.0) continue;                                                                       
#endif                                                                                                                     
                                                                                                                           
                                                                                                                           
#if RTICANMM_LOGLEVEL > 3                                                                                                  
      if(!MsgData.CANMsg.Loopback) {                                                                                       
        msg_info_printf(MSG_SM_CANNEDY, RTICANMM_MAINSFCN_RX_LOOPBACK_INFO,                                                
                        RTICANMM_MAINSFCN_RX_LOOPBACK_INFO_TXT, "CAN",                                                      
                        MsgData.CANMsg.Id,                                                                                 
                        MsgData.CANMsg.TimeStamp,                                                                          
                        MsgData.CANMsg.Dlc,                                                                                
                        MsgData.CANMsg.Data[0]);                                                                           
      }                                                                                                                    
      else {                                                                                                               
        msg_info_printf(MSG_SM_CANNEDY, RTICANMM_MAINSFCN_RX_MSG_INFO, RTICANMM_MAINSFCN_RX_MSG_INFO_TXT, "CAN",            
                        MsgData.CANMsg.Id,                                                                                 
                        MsgData.CANMsg.TimeStamp,                                                                          
                        MsgData.CANMsg.Dlc,                                                                                
                        MsgData.CANMsg.Data[0]);                                                                           
      }                                                                                                                    
#endif                                                                                                                     
                                                                                                                           
                                                                                                                           
      if(MsgData.CANMsg.Loopback) {                                                                                            
        CAN_NUM_LOST -= 1;                                                                                                 
      }                                                                                                                    
                                                                                                                           
      idIdx = -1;                                                                                                  
      idIdx = find_ID_number(S, &MsgData.CANMsg);                                                              
                                                                                                                   
      if (idIdx != -1) {                                                                                           
        /* For all messages delta time and status: */                                                                  
        CANMMCAN_RXt[idIdx] = MsgData.CANMsg.TimeStamp;                   
        if (MsgData.CANMsg.Loopback) {                          
          CANMMCAN_RXdt[idIdx] = CANMMCAN_RXt[idIdx] - TX_OLDTIME[idIdx];            
          TX_OLDTIME[idIdx] = CANMMCAN_RXt[idIdx];                        
          CANMMCAN_RXsta[idIdx] = 1;                                    
        }                                                       
        else {                                                  
          CANMMCAN_RXdt[idIdx] = CANMMCAN_RXt[idIdx] - RX_OLDTIME[idIdx];            
          RX_OLDTIME[idIdx] = CANMMCAN_RXt[idIdx];                        
          CANMMCAN_RXsta[idIdx] = 1;                                        
        }                                                       
                                                                    
        MsgData.pData = MsgData.CANMsg.Data;                        
        copy_func = (void (*)(MainSetupMsgData *, int, SimStruct*)) IDPtr_R(idIdx);  /* get copy function */       
        copy_func(&MsgData, RX, S);  /* copy and convert RAW Data to TRC variables */                              
  }                                                                                                                
    } /* while RX */                                                                                                   
                                                                                                                       
#include "RTICANMM_MAIN_CAN_TX_INPUT.h"                                                                                                          
                                                                                                                       
                                                                                                                       
#include "RTICANMM_MAIN_CAN_RX_OUTPUT.h"                                                                                                          
                                                                                                                       
  } /* CAN_GLOBAL_ENABLE && CAN_VAR_ENABLE */                                                                              
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                 
                                                                                                                           
} /* static void mdlOutputs(SimStruct *S, int_T tid) */                                                                    
                                                                                                                           
#define MDL_UPDATE  /* Change to #undef to remove function */                                                              
#if defined(MDL_UPDATE)                                                                                                    
/* Function: mdlUpdate ======================================================                                              
 */                                                                                                                        
static void mdlUpdate(SimStruct *S, int_T tid)                                                                             
{                                                                                                                          
}/* static void mdlUpdate(SimStruct *S, int_T tid) */                                                                      
#endif /* MDL_UPDATE */                                                                                                    
                                                                                                                           
                                                                                                                           
                                                                                                                           
#define MDL_DERIVATIVES  /* Change to #undef to remove function */                                                         
#if defined(MDL_DERIVATIVES)                                                                                               
/* Function: mdlDerivatives =================================================                                              
 */                                                                                                                        
static void mdlDerivatives(SimStruct *S)                                                                                   
{                                                                                                                          
}                                                                                                                          
#endif /* MDL_DERIVATIVES */                                                                                               
                                                                                                                           
                                                                                                                           
                                                                                                                           
/* Function: mdlTerminate =====================================================                                            
 */                                                                                                                        
static void mdlTerminate(SimStruct *S)                                                                                     
{                                                                                                                          
    void** PWork = ssGetPWork(S);                  /* For all PWorks */                                                    
    if (memAllocatedStart || memAllocatedInitCond)                                                                         
    {                                                                                                                      
        memAllocatedStart = 0;                                                                                             
        memAllocatedInitCond = 0;                                                                                          
        if (TX_TIMESTAMP_Ptr != NULL)                                                                                      
        {                                                                                                                  
            free(TX_TIMESTAMP_Ptr);                                                                                        
            TX_TIMESTAMP_Ptr = NULL;                                                                                       
        }                                                                                                                  
        if (OLD_TX_TIMESTAMP_Ptr != NULL)                                                                                  
        {                                                                                                                  
            free(OLD_TX_TIMESTAMP_Ptr);                                                                                    
            OLD_TX_TIMESTAMP_Ptr = NULL;                                                                                   
        }                                                                                                                  
        if (TX_QUEUE_MEM != NULL)                                                                                          
        {                                                                                                                  
            free(TX_QUEUE_MEM);                                                                                            
            TX_QUEUE_MEM = NULL;                                                                                           
        }                                                                                                                  
        if (TX_KO_OLD_Ptr != NULL)                                                                                         
        {                                                                                                                  
            free(TX_KO_OLD_Ptr);                                                                                           
            TX_KO_OLD_Ptr = NULL;                                                                                          
        }                                                                                                                  
        if (TX_CYCL_OLD_Ptr != NULL)                                                                                       
        {                                                                                                                  
            free(TX_CYCL_OLD_Ptr);                                                                                         
            TX_CYCL_OLD_Ptr = NULL;                                                                                        
        }                                                                                                                  
        if (IDPTR_MEM_R != NULL)                                                                                           
        {                                                                                                                  
            free(IDPTR_MEM_R);                                                                                             
            IDPTR_MEM_R = NULL;                                                                                            
        }                                                                                                                  
        if (IDPTR_MEM_T != NULL)                                                                                           
        {                                                                                                                  
            free(IDPTR_MEM_T);                                                                                             
            IDPTR_MEM_T = NULL;                                                                                            
        }                                                                                                                  
        if (TX_COUNTER_Ptr != NULL)                                                                                        
        {                                                                                                                  
            free(TX_COUNTER_Ptr);                                                                                          
            TX_COUNTER_Ptr = NULL;                                                                                         
        }                                                                                                                  
        if (RX_OLDTIME_Ptr != NULL)                                                                                        
        {                                                                                                                  
            free(RX_OLDTIME_Ptr);                                                                                          
            RX_OLDTIME_Ptr = NULL;                                                                                         
        }                                                                                                                  
        if (TX_OLDTIME_Ptr != NULL)                                                                                        
        {                                                                                                                  
            free(TX_OLDTIME_Ptr);                                                                                          
            TX_OLDTIME_Ptr = NULL;                                                                                         
        }                                                                                                                  
        if (OLD_TIMESTAMP_Ptr != NULL)                                                                                     
        {                                                                                                                  
            free(OLD_TIMESTAMP_Ptr);                                                                                       
            OLD_TIMESTAMP_Ptr = NULL;                                                                                      
        }                                                                                                                  
    }                                                                                                                      
                                                                                                                           
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                                 
    CANMM_CTL_RX_STOP(CANMM_CONTROLLER_ID, &ctlsetup_client);                                                              
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                       
}                                                                                                                          
                                                                                                                           
#if defined(MATLAB_MEX_FILE)   /* Is this file being compiled as a MEX-file? */                                            
    #include "simulink.c"      /* MEX-file interface mechanism */                                                          
#else                                                                                                                      
    #include "cg_sfun.h"       /* Code generation registration function */                                                 
#endif                                                                                                                     
