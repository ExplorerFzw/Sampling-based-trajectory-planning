/********************************************************************************************************/                 
/*   FILE:                                                                                              */                 
/*     rticanmm_setup.c                                                                                 */                 
/*                                                                                                      */                 
/*   DESCRIPTION:                                                                                       */                 
/*     S-Function providing CAN initialization as well as transmit and receive functionality.           */                 
/*                                                                                                      */                 
/*   AUTHOR(S):                                                                                         */                 
/*     F. Mierke, U. Homann, M. Eikermann                                                               */                 
/*                                                                                                      */                 
/*   RTICANMM Date: 19-Feb-2019 19:14:44                                                                                  */                 
/*   RTICANMM Version: 5.2.737475.8018981481                                                                               */                 
/*                                                                                                      */                 
/*  Copyright 2020, dSPACE GmbH. All rights reserved.                                                 */                 
/*      Brand names or product names are trademarks or registered trademarks of their respective companies or organizations. */
/*                                                                                                      */                 
/* $RCSFile: rticanmm_setup.c $ $Revision: 2.323 $ $Date: 2018/07/31 15:47:35CEST $                  */                    
/* $ProjectName: e:/ARC/Products/ImplSW/RTISW/RTICANMM/Components/Blocks/BusSetup/project.pj $          */                 
/* ******************************************************************************************************/                 
                                                                                                                           
#define S_FUNCTION_LEVEL       2                                                                                           
#define S_FUNCTION_NAME        RTICANMM_SETUP_EYEQ                                                                                          
                                                                                                                           
                                                                                                                   
                                                                                                                   
/****************************/                                                                                     
/*        Includes          */                                                                                     
/****************************/                                                                                     
                                                                                                                   
#include "RTICANMM_SETUP_EYEQ.h"                                                                                                    
                                                                                                                   
                                                                                                                           
#include <simstruc.h>                                                                                                      
#include <tmwtypes.h>                                                                                                      
                                                                                                                           
#define NUM_CSTATES     0                            /* Number of Continuous States */                                     
#define NUM_DSTATES     0                            /* Number of Discrete States */                                       
                                                                                                                           
#define NUM_IWORK       0                            /* Number of I WORKS */                                               
#define NUM_PWORK       0                            /* Number of P WORKS */                                               
#define NUM_RWORK       0                            /* Number of R WORKS */                                               
                                                                                                                           
#define NUM_STIMES      1                            /* Number of Sample Times */                                          
#define NUM_MODES       0                            /* Number of Modes */                                                 
#define NUM_NSZCS       0                            /* Number of None Sampled ZCs */                                      
#define SET_OPTS        0                            /* Options */                                                         
                                                                                                                           
                                                                                                                           
                                                                                                                           
                                                                                                                           
/****************************/                                                                                     
/*         Globals          */                                                                                     
/****************************/                                                                                     
                                                                                                                   
#define NUM_PARAM       0                                /* Number of Parameter */                                 
#define NUM_IN          2                               /* Number of Input Ports */                               
#define NUM_OUT         2                               /* Number of Output Ports */                              
/* defines for rx service */                                                                                       
#define PZS_TJA_COMM_CH         6                                                                                 
                                                                                                                   
                                                                                                                           
#define CAN_BOARDNUMBER                                     1                                                     
#define CAN_BOARD_BASE                                  IP_TP1_1_MODULE_ADDR                                  
#define CAN_BOARD_IDX                                   1                                                     
#define CAN_CHANNEL_ADDR                                0x1                                                   
#define NB_OF_EFGS                                      16                                                     
#define MONITORING_SLEEPTIME                                1.000                                                         
                                                                                                                       
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                              
#define DO_CONTROL_BUS                                                                                             
  #if defined(DO_CONTROL_BUS)																				  
    static DsTCanBusStat      MyBusStat; 
    static DsSCanBusStat_Data MyData;    
  #endif  /* DO_CONTROL_BUS */                                                                                 
static Float64 CANMM_CTL_SETUP_EYEQ_baudrate      = 500.0;                                                                                 
static Float64 CANMM_CTL_SETUP_EYEQ_baudrate_in   = 500.0; /* Temporary for input port value */                                            
static Float64 CANMM_CTL_SETUP_EYEQ_baudrate_old  = 500.0;                                                                                 
                                                                                                                            
static Float64 oldBusStat_TimeStamp = 0.0;                                                                                  
                                                                                                                            
static Float64 CANMM_CTL_SETUP_EYEQ_baudrateFD      = 2000.0;                                                                           
static Float64 CANMM_CTL_SETUP_EYEQ_baudrateFD_in   = 2000.0; /* Temporary for input port value */                                      
static Float64 CANMM_CTL_SETUP_EYEQ_baudrateFD_old  = 2000.0;                                                                           
                                                                                                                        
#define SAMPLE_POINT                                        80.0                                                    
#define SAMPLE_POINT_FD                                     80.0                                                    
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                                   
                                                                                                                            
#define CAN_CHANNELNO                                       1                                                              
                                                                                                                            
#define INDEF_VARIATION ((uint8_T*) ssGetInputPortSignal(S, 0))[0]   /* Variation */                                                      
#define INDEF_RESET ((boolean_T*) ssGetInputPortSignal(S, 1))[0]   /* Reset */                                                      
                                                                                                                            
#define OUTDEF_BUSSTATE   ((int32_T*) ssGetOutputPortSignal(S, 0))[0] /* Status */                                                    
#define OUTDEF_SUCCRECRX   ((int32_T*) ssGetOutputPortSignal(S, 1))[0] /* RX ok */                                                    
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                                   
                                                                                                                   
// for DS4302 memory/TJA1041 read we should wait at least 10ms between to reads to ease slave MCU load             
#define READ_MEM_REQUEST_NOT_PENDING_4302 0                                                                        
#define READ_MEM_REQUEST_PENDING_4302     1                                                                        
#define READ_MEM_MIN_REQUEST_RATE_4302    10e-3                                                                    
                                                                                                                   
static Float64   readRequestTime    = 0.0;                                // for DS4302 memory/TJA1041 read        
static UInt8     readRequestStatus  = READ_MEM_REQUEST_NOT_PENDING_4302;  // for DS4302 memory/TJA1041 read        
static boolean_T resetStateVars = 0;                                                                               
static Int32     IndexRd = -1;           // Handle for DS4302 memory/TJA1041 read                                  
static Int32     IndexWr = -1;           // Handle for DS4302 memory/TJA1041 write                                 
static UInt32    LastState = 0;          // Last state read from the TJA1041                                       
static UInt32    LastWrittenData = 0;    // Last data written to the TJA1041 configuration register                
static boolean_T TransceiverState = 0;   // Last Transceiver State                                                 
                                                                                                                   
#if defined(RTICANMM_HAVE_DSCAN_BUS)                                                                                       
static DsTCanBus    CanMM_vBus;                                                                                    
# endif                                                                                                            
static DsTCanBoard  CanMM_board;                                                                                   
static DsTCanCh     CanMM_channel;                                                                                 
                                                                                                                   
                                                                                                                   
volatile UInt8 CANMM_CTL_SETUP_EYEQ_ID;                                                                                              
volatile UInt8 CANMM_CTL_SETUP_EYEQ_TX_STATUS                 = 1;                                                                   
volatile UInt8 DECLSPEC CANMM_CTL_SETUP_EYEQ_Variation        = 1;                                                                   
volatile UInt8 DECLSPEC CANMM_CTL_SETUP_EYEQ_VariationSwitch  = 0;                                                                   
                                                                                                                   
                                                                                                                   
                                                                                                                   
#if defined(RTICANMM_DSDAQ_SERVICEID)                                                                            
/* Data Capturing Bus Navigator with HostService */                                                              
#if !defined(CANMM_HOST_DEBUG)                                                                                   
extern UInt32 RTICANMM_MonitorData[18];  /* Provided by TLC code generation */                                                     
extern UInt8 RTICANMM_MonitoringTimeStampEnable;  /* Provided by TLC code generation */                                                          
extern dsfloat RTICANMM_MonitoringTimeStamp;  /* Provided by TLC code generation */                                                        
#else                                                                                                            
UInt32 RTICANMM_MonitorData[18];  /* For CANMM_HOST_DEBUG no TLC code generation is executed therefore declare variable here! */   
UInt8 RTICANMM_MonitoringTimeStampEnable;  /* For CANMM_HOST_DEBUG no TLC code generation is executed therefore declare variable here! */        
dsfloat RTICANMM_MonitoringTimeStamp;  /* For CANMM_HOST_DEBUG no TLC code generation is executed therefore declare variable here! */      
#endif                                                                                                           
volatile UInt8   CANMMMonitor_EYEQ     = 0;                                                                                     
volatile UInt8   CANMMMonitor_EYEQ_old = 0;                                                                                     
volatile dsfloat MonitoringTimeStamp_EYEQ = 0.0;                                                                                       
                                                                                                                 
#if defined(RTICANMM_HAVE_DSTS_H)                                                                                
static ts_timestamp_type ts;                                                                                     
#endif                                                                                                           
                                                                                                                 
/* Client to self for bus monitoring */                                                                          
static CanMM_Msg canmm_msg;                                                                                      
static CANMM_CTL_CLIENT_TYPE(CANMM_CTL_SETUP_EYEQ) ctlsetup_client;                                                                
#endif /* RTICANMM_DSDAQ_SERVICEID */                                                                            
                                                                                                                 
                                                                                                                   
void                                                                                                               
CANMM_CTL_SETUP_EYEQ_baudrate_set(Float64 baudrate) {                                                                                
  DsTError          Error         = DSCAN_NO_ERROR;                                                                
                                                                                                                   
  if ((Error = DsCanCh_setBaudRate(CanMM_channel, (int)baudrate*1000)) != DSCAN_NO_ERROR) {                        
    CANMM_DEBUG_ERROR(Error);                                                                                      
  }                                                                                                                
  else {                                                                                                           
  if ((Error = DsCanCh_apply(CanMM_channel)) != DSCAN_NO_ERROR)                                                    
    msg_info_printf(MSG_SM_CANNEDY, 0, "Baudrate change FAIL!");                                                   
    CANMM_CTL_SETUP_EYEQ_baudrate = baudrate;                                                                                        
  }                                                                                                                
}                                                                                                                  
                                                                                                                   
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                          
                                                                                                                   
                                                                                                                   
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                          
static SimStruct * RTICANMM_SETUP_EYEQ_SimStruct = 0;                                                                               
void backgroundFunction_21143421()                                                                                       
{                                                                                                                  
  SimStruct *S = RTICANMM_SETUP_EYEQ_SimStruct;                                                                                     
  extern Int32 simState;                                                                                           
  static UInt8 reInitCount = 0;                                                                                    
  if(S == 0)                                                                                                       
  {   //do not panic if S==0, on MP systems it maybe takes couple of calls to init S                               
      //S can be 0 if simState is != 2                                                                             
      if(simState == 2)                                                                                            
         reInitCount++;                                                                                            
      if((reInitCount % 100) == 0 && reInitCount != 0)                                                            
          msg_error_printf(MSG_SM_CANNEDY, 0 , "Background function received null pointer!");                       
      return;                                                                                                      
  }                                                                                                                
  reInitCount = 0;                                                                                                 
                                                                                                                   
                                                                                                                   
                                                                                                                   
   return;                                                                                                     
                                                                                                               
}                                                                                                               
#endif   /* RTICANMM_HAVE_VALID_PLATFORM */                                                                    
                                                                                                               
                                                                                                               
                                                                                                               
                                                                                                               
                                                                                                               
                                                                                                               
                                                                                                                   
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                          
                                                                                                                   
void DECLSPEC CANMM_CTL_SETUP_EYEQ_client_init(CANMM_CTL_SETUP_EYEQ_CtlClient* client) {                                                               
  DsTError          Error         = DSCAN_NO_ERROR;                                                                
                                                                                                                   
  /* initialize message structures */                                                                              
  if (!client->initialized) {                                                                                      
                                                                                                                   
    /* RX */                                                                                                       
    if ((Error = DsCanMsg_createRxMonitor(&(client->rx_msg), CanMM_channel)) != DSCAN_NO_ERROR)                    
      CANMM_DEBUG_ERROR(Error);                                                                                    
#if (defined(DSCAN_VER_MAR) && DSCAN_VER_MAR == 1) || defined(RTICANMM_HAVE_DSRT)                                  
    if ((Error = DsCanMsg_setFilter(client->rx_msg, 0x1, 0x0, DSCAN_MSG_FORMAT_BOTH, DSCAN_MSG_RTR_BOTH)) != DSCAN_NO_ERROR)
      CANMM_DEBUG_ERROR(Error);                                                                                    
#else                                                                                                              
    if ((Error = DsCanMsg_setFilter(client->rx_msg, 0x1, 0x0, DSCAN_MSG_FORMAT_ALL, DSCAN_MSG_RTR_BOTH)) != DSCAN_NO_ERROR)
      CANMM_DEBUG_ERROR(Error);                                                                                    
#endif                                                                                                             
    if ((Error = DsCanMsg_setQueueSize(client->rx_msg, 100)) != DSCAN_NO_ERROR)                                    
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    if((Error = DsCanMsg_apply(client->rx_msg)) != DSCAN_NO_ERROR)                                                 
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    /* TX */                                                                                                       
    if ((Error = DsCanMsg_createTxQueue(&client->tx_msg, CanMM_channel)) != DSCAN_NO_ERROR)                        
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    if ((Error = DsCanMsg_setQueueSize(client->tx_msg, CANMM_CTL_SETUP_EYEQ_tx_queue_size)) != DSCAN_NO_ERROR)                       
      CANMM_DEBUG_ERROR(Error);                                                                                    
#if (defined(DSCAN_VER_MAR) && DSCAN_VER_MAR == 1) || defined(RTICANMM_HAVE_DSRT)                                  
    if ((Error = DsCanMsg_setTxRetryCount(client->tx_msg, DSCAN_MSG_RETRY_MODE_ACTIVE, 3)) != DSCAN_NO_ERROR)      
      CANMM_DEBUG_ERROR(Error);                                                                                    
#else                                                                                                              
    if ((Error = DsCanCh_setTxRetryCount(CanMM_channel, DSCAN_MSG_RETRY_MODE_ACTIVE, 100)) != DSCAN_NO_ERROR)      
      CANMM_DEBUG_ERROR(Error);                                                                                    
    if ((Error = DsCanCh_apply(CanMM_channel)) != DSCAN_NO_ERROR)                                                  
      CANMM_DEBUG_ERROR(Error);                                                                                    
#endif                                                                                                             
                                                                                                                   
#if defined(RTICANMM_HAVE_DSRT)                                                                                    
    if ((Error = DsCanCh_setFeature(CanMM_channel, DSCAN_CH_FEATURE_SIMTIMECONV_OFF)) != DSCAN_NO_ERROR)           
      CANMM_DEBUG_ERROR(Error);                                                                                    
    if ((Error = DsCanCh_apply(CanMM_channel)) != DSCAN_NO_ERROR)                                                  
      CANMM_DEBUG_ERROR(Error);                                                                                    
#endif                                                                                                             
                                                                                                                   
    if ((Error = DsCanMsg_apply(client->tx_msg)) != DSCAN_NO_ERROR)                                                
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    if ((Error = DsCanMsg_start(client->tx_msg)) != DSCAN_NO_ERROR)                                                
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    client->update      = 1;                                                                                       
    client->initialized = 1;                                                                                       
    client->disabled    = 0;                                                                                       
  }                                                                                                                
}                                                                                                                  
                                                                                                                   
#if !defined(RTICANMM_HAVE_DSRT)                                                                                   
extern dsfloat RTICANMM_DataFetchTime[16];                                                                         
extern dsfloat *currentTime;                                                                                       
static DsTError RTICANMM_CanBoard_update(DsTCanBoard CanMM_board, int CanMM_Board_idx)                             
{                                                                                                                  
   DsTError Error = DSCAN_NO_ERROR;                                                                                
#if !defined(RTICANMM_HW_BACKGROUND_ACCESS)                                                                        
   if (RTICANMM_DataFetchTime[CanMM_Board_idx] != *currentTime)                                                    
   {                                                                                                               
      RTICANMM_DataFetchTime[CanMM_Board_idx] = *currentTime;                                                      
      Error = DsCanBoard_update(CanMM_board);                                                                      
   }                                                                                                               
#endif                                                                                                             
   return Error;                                                                                                   
}                                                                                                                  
#elif defined(RTICANMM_HAVE_DSRT)                                                                                  
#define RTICANMM_CanBoard_update(board, idx) DsCanBoard_update(board)                                              
#endif                                                                                                             
                                                                                                                   
                                                                                                                   
/* RX function of controller                                                                                       
 * Receives all messages (incl loopback) from all                                                                  
 * queues.                                                                                                         
 * Always call this function until no new messages are                                                             
 * available.                                                                                                      
 */                                                                                                                
Int32 DECLSPEC CANMM_CTL_SETUP_EYEQ_rx(CANMM_CTL_SETUP_EYEQ_CtlClient* client, CanMM_Msg* msg) {                                                       
    DsSCanMsg_Item msg_item;                                                                                       
    UInt32 k = 0;                                                                                                  
                                                                                                                   
    if (client->disabled) {                                                                                        
      return 0;                                                                                                    
    }                                                                                                              
                                                                                                                   
    if (client->update) {                                                                                          
      RTICANMM_CanBoard_update(CanMM_board, CAN_BOARD_IDX);                                                        
      client->update = 0;                                                                                          
    }                                                                                                              
                                                                                                                   
    if(DsCanMsg_readRxItem(client->rx_msg, &msg_item) == DSCAN_NO_ERROR) {                                         
                                                                                                                   
      if(msg_item.Status == DSCAN_MSG_NO_DATA) {                                                                   
        client->update = 1;                                                                                        
        return 0;                                                                                                  
      }                                                                                                            
                                                                                                                   
      msg->TimeStamp = msg_item.TimeStamp;                                                                         
      msg->HwTime    = msg_item.TimeStamp;                                                                         
      msg->Id        = msg_item.Id;                                                                                
      msg->Dlc       = msg_item.Dlc;                                                                               
                                                                                                                   
      // we check for 64 bytes because DLC can be corrupted                                                        
      for (k = 0; k < msg->Dlc && k < 64; k++){                                                                    
          msg->Data[k] = msg_item.Data[k];                                                                         
      }                                                                                                            
      // set unused bits to 0                                                                                      
      for (; k < 64; k++){                                                                                         
          msg->Data[k] = 0x00;                                                                                     
      }                                                                                                            
                                                                                                                   
      switch(msg_item.Format)                                                                                      
      {                                                                                                            
          case(DSCAN_MSG_FORMAT_STD):                                                                              
              msg->Format    = CANMM_MSG_FORMAT_STD;                                                               
              break;                                                                                               
          case(DSCAN_MSG_FORMAT_EXT):                                                                              
              msg->Format    = CANMM_MSG_FORMAT_EXT;                                                               
              break;                                                                                               
#if(defined(DSCAN_VER_MAR) && DSCAN_VER_MAR >= 2)                                                                  
          case(DSCAN_MSG_FORMAT_FD_STD):                                                                           
              if(msg_item.Brs == DSCAN_MSG_BRS_ENABLED) {                                                          
                  msg->Format    = CANMM_MSG_FORMAT_FD_STD_FAST;                                                   
              } else {                                                                                             
                  msg->Format    = CANMM_MSG_FORMAT_FD_STD_SLOW;                                                   
              }                                                                                                    
              break;                                                                                               
          case(DSCAN_MSG_FORMAT_FD_EXT):                                                                           
              if(msg_item.Brs == DSCAN_MSG_BRS_ENABLED) {                                                          
                  msg->Format    = CANMM_MSG_FORMAT_FD_EXT_FAST;                                                   
              } else {                                                                                             
                  msg->Format    = CANMM_MSG_FORMAT_FD_EXT_SLOW;                                                   
              }                                                                                                    
              break;                                                                                               
#endif                                                                                                             
          default:                                                                                                 
              break;                                                                                               
      }                                                                                                            
                                                                                                                   
      if(msg_item.Dir == DSCAN_MSG_DIR_RECEIVE)                                                                    
        msg->Loopback = 0;                                                                                         
      else                                                                                                         
        msg->Loopback = 1;                                                                                         
                                                                                                                   
      msg->Flags = 0;                                                                                              
      if(msg_item.Status == DSCAN_MSG_LOST) {                                                                      
        msg->Flags = msg->Flags | RTICANMM_FLAG_MSGLOST;                                                           
      }                                                                                                            
    }                                                                                                              
    else {                                                                                                         
      return 0;                                                                                                    
    }                                                                                                              
                                                                                                                   
    return 1;                                                                                                      
}                                                                                                                  
                                                                                                                   
                                                                                                                   
/* TX function of controller                                                                                       
 */                                                                                                                
Int32 DECLSPEC CANMM_CTL_SETUP_EYEQ_tx(CANMM_CTL_SETUP_EYEQ_CtlClient* client, CanMM_Msg* msg) {                                                       
  UInt32      k = 0;                                                                                               
  DsTError Error = DSCAN_NO_ERROR;                                                                                 
  DsSCanMsg_Item msg_item;                                                                                         
                                                                                                                   
  msg_item.Id  = msg->Id;                                                                                          
  msg_item.Dlc = msg->Dlc;                                                                                         
#if(defined(DSCAN_VER_MAR) && DSCAN_VER_MAR >= 2)                                                                  
  msg_item.Brs = DSCAN_MSG_BRS_DISABLED;                                                                           
#endif                                                                                                             
  msg_item.Rtr = DSCAN_MSG_RTR_DISABLED;                                                                           
  msg_item.IsEnabled = DSCAN_MSG_STATE_ACTIVE;                                                                     
  msg_item.TimeStamp = 0.0;  /* Send immediately */                                                                
                                                                                                                   
  //we check for 64 bytes because DLC can be corrupted                                                             
  for (k=0; k<msg->Dlc && k < 64; k++)                                                                             
    msg_item.Data[k] = msg->Data[k];                                                                               
                                                                                                                   
      switch(msg->Format)                                                                                          
      {                                                                                                            
          case(CANMM_MSG_FORMAT_STD):                                                                              
              msg_item.Format    = DSCAN_MSG_FORMAT_STD;                                                           
              break;                                                                                               
          case(CANMM_MSG_FORMAT_EXT):                                                                              
              msg_item.Format    = DSCAN_MSG_FORMAT_EXT;                                                           
              break;                                                                                               
#if(defined(DSCAN_VER_MAR) && DSCAN_VER_MAR >= 2)                                                                  
          case(CANMM_MSG_FORMAT_FD_STD_SLOW):                                                                      
              msg_item.Format    = DSCAN_MSG_FORMAT_FD_STD;                                                        
              break;                                                                                               
          case(CANMM_MSG_FORMAT_FD_STD_FAST):                                                                      
              msg_item.Format    = DSCAN_MSG_FORMAT_FD_STD;                                                        
              msg_item.Brs       = DSCAN_MSG_BRS_ENABLED;                                                          
              break;                                                                                               
          case(CANMM_MSG_FORMAT_FD_EXT_SLOW):                                                                      
              msg_item.Format    = DSCAN_MSG_FORMAT_FD_EXT;                                                        
              break;                                                                                               
          case(CANMM_MSG_FORMAT_FD_EXT_FAST):                                                                      
              msg_item.Format    = DSCAN_MSG_FORMAT_FD_EXT;                                                        
              msg_item.Brs       = DSCAN_MSG_BRS_ENABLED;                                                          
              break;                                                                                               
#endif                                                                                                             
          default:                                                                                                 
              break;                                                                                               
      }                                                                                                            
                                                                                                                   
  if((Error = DsCanMsg_transmitItem(client->tx_msg, &msg_item)) != DSCAN_NO_ERROR) {                               
    CANMM_DEBUG_ERROR(Error);                                                                                      
    return 1;                                                                                                      
  }                                                                                                                
  else {                                                                                                           
    return 0;                                                                                                      
  }                                                                                                                
}                                                                                                                  
                                                                                                                   
/**                                                                                                                
 * Start receiving messages                                                                                        
 * This message is used to indicate a client will start receiving messages.                                        
 * If CANMM_CTL_SETUP_EYEQ_rx_stop has been issued before, the receive buffer (mcr) is cleared                                       
 * for the calling client. Messages received in the inactive period thus will                                      
 * not be received.                                                                                                
 */                                                                                                                
void DECLSPEC CANMM_CTL_SETUP_EYEQ_rx_start(CANMM_CTL_SETUP_EYEQ_CtlClient* client) {                                                                  
  DsTError          Error         = DSCAN_NO_ERROR;                                                                
  if ((Error = DsCanMsg_start(client->rx_msg)) != DSCAN_NO_ERROR)                                                  
    CANMM_DEBUG_ERROR(Error);                                                                                      
  client->disabled = 0;                                                                                            
}                                                                                                                  
                                                                                                                   
/**                                                                                                                
 * Stop receiving messages                                                                                         
 * Indicates that the calling client intends to not further call the                                               
 * CANMM_CTL_SETUP_EYEQ_rx function. To continue reception of messages CANMM_CTL_SETUP_EYEQ_rx_start                                                   
 * has to be called.                                                                                               
 */                                                                                                                
void DECLSPEC CANMM_CTL_SETUP_EYEQ_rx_stop(CANMM_CTL_SETUP_EYEQ_CtlClient* client) {                                                                   
  DsTError          Error         = DSCAN_NO_ERROR;                                                                
  if ((Error = DsCanMsg_stop(client->rx_msg)) != DSCAN_NO_ERROR)                                                   
    CANMM_DEBUG_ERROR(Error);                                                                                      
  client->disabled = 1;                                                                                            
}                                                                                                                  
                                                                                                                   
                                                                                                                   
Float64 DECLSPEC CANMM_CTL_SETUP_EYEQ_baudrate_get() {                                                                               
  return CANMM_CTL_SETUP_EYEQ_baudrate;                                                                                              
}                                                                                                                  
                                                                                                                   
Float64 DECLSPEC CANMM_CTL_SETUP_EYEQ_baudrateFD_get() {                                                                             
  return CANMM_CTL_SETUP_EYEQ_baudrateFD;                                                                                            
}                                                                                                                  
                                                                                                                   
/**                                                                                                                
* Return the no of message waiting for transmit                                                                    
*/                                                                                                                 
UInt32 DECLSPEC CANMM_CTL_SETUP_EYEQ_tx_queue_level(CANMM_CTL_SETUP_EYEQ_CtlClient* client) {                                                          
  UInt32   tx_count = 0;                                                                                           
  DsTError Error;                                                                                                  
                                                                                                                   
  if ((Error = DsCanMsg_getTxQueueCount(client->tx_msg, &tx_count)) != DSCAN_NO_ERROR) {                           
    CANMM_DEBUG_ERROR(Error);                                                                                      
    /* In case of error, pretend a full queue */                                                                   
    tx_count = CANMM_CTL_SETUP_EYEQ_tx_queue_size;                                                                                   
  }                                                                                                                
  return tx_count;                                                                                                 
}                                                                                                                  
                                                                                                                   
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                                   
                                                                                                                           
static void mdlInitializeSizes(SimStruct *S)                                                                               
{                                                                                                                          
/****************************/                                                                                     
/*   Initialize Sizes       */                                                                                     
/****************************/                                                                                     
                                                                                                                   
  int i;                                                                                                           
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                                   
  DsTError          Error         = DSCAN_NO_ERROR;                                                                
  DsECanCh_BusState BusState      = DSCAN_CH_MODE_BUSOFF;                                                          
  Float32           TimeOut       = 0;                                                                             
  UInt32            maxFrequency  = 0;                                                                             
  UInt32            br_arb        = 0;                                                                             
  Float32           sp_arb        = 0;                                                                             
  UInt32            br_dat        = 0;                                                                             
  Float32            sp_dat        = 0;                                                                             
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                          
                                                                                                                   
  ssSetNumSFcnParams(S, NUM_PARAM);                                                                                
                                                                                                                   
  if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {                                                          
    return;                                                                                                        
  }                                                                                                                
  ssSetNumContStates(S, NUM_CSTATES);                                                                              
  ssSetNumDiscStates(S, NUM_DSTATES);                                                                              
                                                                                                                   
                                                                                                                   
  if (!ssSetNumOutputPorts(S, NUM_OUT)) {                                                                          
      return;                                                                                                      
  }                                                                                                                
                                                                                                                   
  if (!ssSetNumInputPorts(S, NUM_IN)) {                                                                            
      return;                                                                                                      
  }                                                                                                                
                                                                                                                   
  for (i=0;i<NUM_IN;i++) {                                                                                         
      ssSetInputPortRequiredContiguous(S, i, true);                                                                
      ssSetInputPortDirectFeedThrough(S, i, 1);                                                                    
      ssSetInputPortWidth(S, i, 1);                                                                                
  }                                                                                                                
  for (i=0;i<NUM_OUT;i++) {                                                                                        
      ssSetOutputPortWidth(S, i, 1);                                                                               
  }                                                                                                                
                                                                                                                   
  ssSetInputPortDataType(S, 0, SS_UINT8);    /* Variation */                                                               
  ssSetInputPortDataType(S, 1, SS_BOOLEAN);    /* Reset */                                                               
  ssSetOutputPortDataType(S, 0, SS_INT32);   /* Status */                                                               
  ssSetOutputPortDataType(S, 1, SS_INT32);   /* RX ok */                                                               
                                                                                                                   
  ssSetNumRWork(S, NUM_RWORK);                                                                                     
  ssSetNumIWork(S, NUM_IWORK);                                                                                     
  ssSetNumPWork(S, NUM_PWORK);                                                                                     
  ssSetNumSampleTimes(S, NUM_STIMES);                                                                              
  ssSetNumModes(S, NUM_MODES);                                                                                     
  ssSetNumNonsampledZCs(S, NUM_NSZCS);                                                                             
  ssSetOptions(S, SET_OPTS | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME);                                             
                                                                                                                   
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                                   
                                                                                                                   
#if defined(RTICANMM_HAVE_DSCAN_BUS)                                                                                       
  if ((Error = DsCanBus_create(&CanMM_vBus, NaN)) != DSCAN_NO_ERROR)                                                
    CANMM_DEBUG_ERROR(Error);                                                                                      
                                                                                                                   
  /* Initialize channel with default parameters */                                                                 
  if (((Error = DsCanCh_create(&CanMM_channel, NULL, NULL)) != DSCAN_NO_ERROR)                                     
        && (Error != DSCAN_ERROR_OBJECT_REUSED))                                                                   
    CANMM_DEBUG_ERROR(Error);                                                                                      
                                                                                                                   
  if ((Error = DsCanBus_connectChannel(CanMM_vBus, CanMM_channel)) != DSCAN_NO_ERROR)                              
    CANMM_DEBUG_ERROR(Error);                                                                                      
# else                                                                                                             
  if ((Error = DsCanBoard_create(&CanMM_board, CAN_BOARD_BASE)) != DSCAN_NO_ERROR)                                 
    CANMM_DEBUG_ERROR(Error);                                                                                      
  if ((Error = DsCanCh_create(&CanMM_channel, CanMM_board, CAN_CHANNEL_ADDR)) != DSCAN_NO_ERROR)                   
    CANMM_DEBUG_ERROR(Error);                                                                                      
  if(Error == DSCAN_ERROR_NODE_NOT_EXISTS || Error == DSCAN_ERROR_NULL_POINTER)                                    
    RTLIB_EXIT(1);                                                                                                 
# endif /* RTICANMM_HAVE_DSCAN_BUS */                                                                              
                                                                                                                   
  if ((Error = DsCanCh_setDescriptor(CanMM_channel, "EYEQ")) != DSCAN_NO_ERROR)                                      
    CANMM_DEBUG_ERROR(Error);                                                                                      
                                                                                                                   
  if ((Error = DsCanCh_setBaudRate(CanMM_channel, (int)CANMM_CTL_SETUP_EYEQ_baudrate*1000)) != DSCAN_NO_ERROR)                   
      CANMM_DEBUG_ERROR(Error);                                                                                
                                                                                                               
  if ((Error = DsCanCh_setSamplePoint(CanMM_channel, ((Float32) SAMPLE_POINT)/100)) != DSCAN_NO_ERROR)     
      CANMM_DEBUG_ERROR(Error);                                                                            
                                                                                                           
  if ((Error = DsCanCh_setTermination(CanMM_channel, DSCAN_CH_TERMINATION_PARALLEL_AB)) != DSCAN_NO_ERROR)                                      
    CANMM_DEBUG_ERROR(Error);                                                                                     
                                                                                                                  
  if ((Error = DsCanCh_setReceiveMode(CanMM_channel, DSCAN_CH_RECEIVE_MODE_NORMAL)) != DSCAN_NO_ERROR)            
    CANMM_DEBUG_ERROR(Error);                                                                                     
                                                                                                                  
  if ((Error = DsCanCh_setTransceiver(CanMM_channel, DSCAN_CH_TRANSCEIVER_CAN_ISO11898_2)) != DSCAN_NO_ERROR) 
     CANMM_DEBUG_ERROR(Error);                                                                                 
                                                                                                               
  if ((Error = DsCanCh_setFeature(CanMM_channel, DSCAN_CH_FEATURE_FD_ON)) != DSCAN_NO_ERROR)              
     CANMM_DEBUG_ERROR(Error);                                                                            
                                                                                                          
  if ((Error = DsCanCh_setFeature(CanMM_channel, DSCAN_CH_FEATURE_FD_ISO_MODE)) != DSCAN_NO_ERROR)    
     CANMM_DEBUG_ERROR(Error);                                                                            
                                                                                                          
  if ((Error = DsCanCh_setBaudRateDataPhase(CanMM_channel, (CANMM_CTL_SETUP_EYEQ_baudrateFD_old*1000))) != DSCAN_NO_ERROR)      
     CANMM_DEBUG_ERROR(Error);                                                                                
                                                                                                              
  if ((Error = DsCanCh_setSamplePointDataPhase(CanMM_channel, ((Float32) SAMPLE_POINT_FD)/100)) != DSCAN_NO_ERROR)
     CANMM_DEBUG_ERROR(Error);                                                                                
                                                                                                                  
  if ((Error = DsCanCh_setBusOffRecoveryMode(CanMM_channel, DSCAN_CH_BUSOFF_RECOVERY_ENABLED)) != DSCAN_NO_ERROR) 
    CANMM_DEBUG_ERROR(Error);                                                                                     
                                                                                                                  
  if ((Error = DsCanCh_setBusMode(CanMM_channel, DSCAN_CH_MODE_BUSON)) != DSCAN_NO_ERROR)                         
    CANMM_DEBUG_ERROR(Error);                                                                                     
                                                                                                                  
  if ((Error = DsCanCh_apply(CanMM_channel)) != DSCAN_NO_ERROR)                                                   
    CANMM_DEBUG_ERROR(Error);                                                                                     
                                                                                                                  
  if ((Error = DsCanCh_getBaudRate(CanMM_channel, &br_arb)) != DSCAN_NO_ERROR)                                    
    CANMM_DEBUG_ERROR(Error);                                                                                     
  else                                                                                                            
    msg_info_printf(MSG_SM_CANNEDY, 0, "CANMM_CTL_SETUP_EYEQ: Baud rate arbitration phase: %d Kb/s", (br_arb/1000));                 
                                                                                                                  
  if ((Error = DsCanCh_getSamplePoint(CanMM_channel, &sp_arb)) != DSCAN_NO_ERROR)                                 
    CANMM_DEBUG_ERROR(Error);                                                                                     
  else                                                                                                            
    msg_info_printf(MSG_SM_CANNEDY, 0, "CANMM_CTL_SETUP_EYEQ: Sample point arbitration phase: %.2f %%", sp_arb*100.0);              
                                                                                                                  
  if ((Error = DsCanCh_getBaudRateDataPhase(CanMM_channel, &br_dat)) != DSCAN_NO_ERROR)                           
    CANMM_DEBUG_ERROR(Error);                                                                                     
  else                                                                                                            
    msg_info_printf(MSG_SM_CANNEDY, 0, "CANMM_CTL_SETUP_EYEQ: Baud rate data phase: %d Kb/s", (br_dat/1000));                        
                                                                                                                  
  if ((Error = DsCanCh_getSamplePointDataPhase(CanMM_channel, &sp_dat)) != DSCAN_NO_ERROR)                        
    CANMM_DEBUG_ERROR(Error);                                                                                     
  else                                                                                                            
    msg_info_printf(MSG_SM_CANNEDY, 0, "CANMM_CTL_SETUP_EYEQ: Sample point data phase: %.2f %%", (sp_dat*100.0));                   
                                                                                                                  
  if(S != 0)                                                                                                      
       RTICANMM_SETUP_EYEQ_SimStruct = S;                                                                                          
                                                                                                                  
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                                  
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
   * Abstract:                                                                                                             
   *    In this function, you should initialize the continuous and discrete                                                
   *    states for your S-function block.  The initial states are placed                                                   
   *    in the state vector, ssGetContStates(S) or ssGetRealDiscStates(S).                                                 
   *    You can also perform any other initialization activities that your                                                 
   *    S-function may require. Note, this routine will be called at the                                                   
   *    start of simulation and if it is present in an enabled subsystem                                                   
   *    configured to reset states, it will be call when the enabled subsystem                                             
   *    restarts execution to reset the states.                                                                            
   */                                                                                                                      
static void mdlInitializeConditions(SimStruct *S)                                                                          
{                                                                                                                          
/****************************/                                                                                     
/*     Init Conditions      */                                                                                     
/****************************/                                                                                     
                                                                                                                   
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                          
   DsTError          Error         = DSCAN_NO_ERROR;                                                               
#if defined(TJA)                                                                                                   
   ds4302_canChannel* pLegacy_CanMM_channel = 0;                                                                   
# endif                                                                                                            
#if defined(RTICANMM_DSDAQ_SERVICEID)																				  
    CANMM_CTL_CLIENT_INIT(CANMM_CTL_SETUP_EYEQ, &ctlsetup_client);                                                                   
    CANMM_CTL_RX_STOP(CANMM_CTL_SETUP_EYEQ, &ctlsetup_client);      /* Start disabled */                                             
# endif                                                                                                            
                                                                                                                   
#if defined(DO_CONTROL_BUS)																						  
    /* Create bus statistic for channel */                                                                         
    if (((Error = DsCanBusStat_create(&MyBusStat, CanMM_channel)) != DSCAN_NO_ERROR)                               
        && (Error != DSCAN_ERROR_OBJECT_REUSED))                                                                   
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    if ((Error = DsCanBusStat_setUpdatePeriod(MyBusStat, MONITORING_SLEEPTIME)) != DSCAN_NO_ERROR)                 
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    if ((Error = DsCanBusStat_apply(MyBusStat)) != DSCAN_NO_ERROR)                                                 
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    if ((Error = DsCanBusStat_start(MyBusStat)) != DSCAN_NO_ERROR)                                                 
      CANMM_DEBUG_ERROR(Error);                                                                                    
                                                                                                                   
    oldBusStat_TimeStamp = 0.0;                                                                                    
#endif /* DO_CONTROL_BUS */                                                                                        
  if ((Error = DsCanCh_start(CanMM_channel)) != DSCAN_NO_ERROR)                                                    
    CANMM_DEBUG_ERROR(Error);                                                                                      
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                          
}                                                                                                                          
#endif /* MDL_INITIALIZE_CONDITIONS */                                                                                     
                                                                                                                           
                                                                                                                           
#define MDL_START  /* Change to #undef to remove function */                                                               
#if defined(MDL_START)                                                                                                     
  /* Function: mdlStart =======================================================                                            
   * Abstract:                                                                                                             
   *    This function is called once at start of model execution. If you                                                   
   *    have states that should be initialized once, this is the place                                                     
   *    to do it.                                                                                                          
   */                                                                                                                      
static void mdlStart(SimStruct *S)                                                                                         
{                                                                                                                          
/****************************/                                                                                     
/*           START          */                                                                                     
/****************************/                                                                                     
                                                                                                                   
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                                   
  boolean_T IN_RESET = INDEF_RESET;                                                                                
  static int start_once = 0;                                                                                       
                                                                                                                   
  DsTError          Error         = DSCAN_NO_ERROR;                                                                
                                                                                                                   
                                                                                                                   
  TransceiverState = IN_RESET;                                                                                     
  if(S != 0)                                                                                                       
      RTICANMM_SETUP_EYEQ_SimStruct = S;     //just to be safe we do one more assigment                                             
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                          
}                                                                                                                          
#endif /*  MDL_START */                                                                                                    
                                                                                                                           
                                                                                                                           
/* Function: mdlOutputs =======================================================                                            
 * Abstract:                                                                                                               
 *    In this function, you compute the outputs of your S-function                                                         
 *    block. Generally outputs are placed in the output vector, ssGetY(S).                                                 
 */                                                                                                                        
static void mdlOutputs(SimStruct *S, int_T tid)                                                                            
{                                                                                                                          
/****************************/                                                                                     
/*          OUTPUTS         */                                                                                     
/****************************/                                                                                     
                                                                                                                   
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                                   
                                                                                                                   
  boolean_T IN_RESET = INDEF_RESET;                                                                                
                                                                                                                   
#if defined(RTICANMM_HAVE_DSCAN_BUS)                                                                                       
  DsCanBus_update(CanMM_vBus, ssGetT(S));                                                                          
# endif                                                                                                            
  RTICANMM_CanBoard_update(CanMM_board, CAN_BOARD_IDX);                                                            
                                                                                                                   
#if defined(RTICANMM_DSDAQ_SERVICEID)                                                                            
if (CANMMMonitor_EYEQ > 0 && !(CANMMMonitor_EYEQ_old > 0)) { /* monitoring enabled */                                                          
  CANMM_CTL_RX_START(CANMM_CTL_SETUP_EYEQ, &ctlsetup_client);                                                                      
}                                                                                                                
if (!(CANMMMonitor_EYEQ > 0) && CANMMMonitor_EYEQ_old > 0) { /* monitoring disabled */                                                         
  CANMM_CTL_RX_STOP(CANMM_CTL_SETUP_EYEQ, &ctlsetup_client);                                                                       
}                                                                                                                
CANMMMonitor_EYEQ_old = CANMMMonitor_EYEQ;                                                                                                     
                                                                                                                 
if (CANMMMonitor_EYEQ > 0) {                                                                                                    
  while (CANMM_CTL_RX(CANMM_CTL_SETUP_EYEQ, &ctlsetup_client, &canmm_msg)) {                                                       
    UInt32 i = 0;                                                                                                
    int j = 0, k = 0;                                                                                            
                                                                                                                 
    if (canmm_msg.Flags & RTICANMM_FLAG_MSGLOST) {                                                               
      /* Do not monitor lost messages */                                                                         
      continue;                                                                                                  
    }                                                                                                            
                                                                                                                 
    /* Clear monitoring variables from last msg */                                                               
    for (i = 0; i < 18; i++) {                                                                                   
      RTICANMM_MonitorData[i] = 0;                                                                                                 
    }                                                                                                            
                                                                                                                 
    j = 1; k = -1;                                                                                               
    //we check for 64 bytes because DLC can be corrupted                                                         
    for (i=0;i<canmm_msg.Dlc && i < 64;i++)                                                                      
    {                                                                                                            
        if(i % 4 == 0)                                                                                          
        {                                                                                                        
           j++;                                                                                                  
           k++;                                                                                                  
        }                                                                                                        
        RTICANMM_MonitorData[j] = (RTICANMM_MonitorData[j] | (canmm_msg.Data[i] << 8*(i - (4*k))));                                                  
    }                                                                                                            
                                                                                                                 
    RTICANMM_MonitorData[0] = canmm_msg.Id;                                                                                        
                                                                                                                 
    if (canmm_msg.Loopback)                                                                                      
      RTICANMM_MonitorData[1] |= 1;                                                                                                
    else                                                                                                         
      RTICANMM_MonitorData[1] |= 0;                                                                                                
                                                                                                                 
    RTICANMM_MonitorData[1] |= (canmm_msg.Dlc << 1);                                                                               
    RTICANMM_MonitorData[1] |= (1 << 17);                                                                                         
    //cast to UInt32 to avoid warining message from PPC compiler                                                 
    switch(canmm_msg.Format)                                                                                     
    {                                                                                                            
       case(CANMM_MSG_FORMAT_STD):                                                                               
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_STD << 29);                                                   
          break;                                                                                                 
       case(CANMM_MSG_FORMAT_EXT):                                                                               
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_EXT << 29);                                                   
          break;                                                                                                 
       case(CANMM_MSG_FORMAT_FD_STD_SLOW):                                                                       
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_FD_STD_SLOW << 29);                                           
          break;                                                                                                 
       case(CANMM_MSG_FORMAT_FD_STD_FAST):                                                                       
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_FD_STD_FAST << 29);                                           
          break;                                                                                                 
       case(CANMM_MSG_FORMAT_STD_RTR):                                                                           
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_STD_RTR << 29);                                               
          break;                                                                                                 
       case(CANMM_MSG_FORMAT_EXT_RTR):                                                                           
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_EXT_RTR << 29);                                               
          break;                                                                                                 
       case(CANMM_MSG_FORMAT_FD_EXT_SLOW):                                                                       
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_FD_EXT_SLOW << 29);                                           
          break;                                                                                                 
       case(CANMM_MSG_FORMAT_FD_EXT_FAST):                                                                       
          RTICANMM_MonitorData[1] |= (UInt32)(CONTROL_DSK_MSG_FORMAT_FD_EXT_FAST << 29);                                           
          break;                                                                                                 
       default:                                                                                                  
          break;                                                                                                 
    }                                                                                                            
                                                                                                                 
    /*if(canmm_msg.Format == CANMM_MSG_FORMAT_EXT)                                                               
      RTICANMM_MonitorData[1] |= (1 << 30);                                                                                        
    else                                                                                                         
      RTICANMM_MonitorData[1] |= (0 << 30);*/                                                                                      
#if defined(RTICANMM_HAVE_HOSTSERVICE) /* Only for DS1005, DS1006, DS1401, DS1103 */                             
    /* If this is set to 1 then TimeStamp measurement is evaluated on host and filled on model. */               
    if (RTICANMM_MonitoringTimeStampEnable == 1){                                                                                                
      RTICANMM_MonitoringTimeStamp = rtk_dsts_time_to_simtime_convert(canmm_msg.TimeStamp);                                                
    }                                                                                                            
#elif defined(RTICANMM_HAVE_DSRT)                                                                                
    /* If this is set to 1 then TimeStamp measurement is evaluated on host and filled on model. */               
    if (RTICANMM_MonitoringTimeStampEnable == 1){                                                                                                
      RTICANMM_MonitoringTimeStamp = CANMM_DsConvertToSimTime(canmm_msg.TimeStamp);                                                        
    }                                                                                                            
#endif                                                                                                           
    MonitoringTimeStamp_EYEQ = canmm_msg.TimeStamp;                                                                                    
#if defined(RTICANMM_HAVE_HOSTSERVICE) | defined(RTICANMM_HAVE_DSDAQ)                                            
    {                                                                                                            
    ts_timestamp_calculate(canmm_msg.TimeStamp + ts_sum_of_reseted_time_get(), &ts);                             
    }                                                                                                            
#endif                                                                                                           
                                                                                                                 
#if defined(RTICANMM_HAVE_HOSTSERVICE)                                                                           
    /* Call host_service for monitoring */                                                                       
    host_service(RTICANMM_DSDAQ_SERVICEID, &ts);                                                                 
#endif                                                                                                           
                                                                                                                 
#if defined(RTICANMM_HAVE_DSDAQ)                                                                                 
    /* Call DaqService for CalDesk monitoring */                                                                 
    DsDaq_Service(0, 0, RTICANMM_DSDAQ_SERVICEID, (DsDaqSTimestampStruct*) &ts);                                 
#endif                                                                                                           
                                                                                                                 
#if defined(RTICANMM_HAVE_DSDAQ_WRAPPER)                                                                         
    CANMM_DsDaqService(RTICANMM_DSDAQ_SERVICEID, canmm_msg.TimeStamp);                                           
#endif                                                                                                           
  }                                                                                                              
} /* host service enable */                                                                                      
#endif /* RTICANMM_DSDAQ_SERVICEID */                                                                            
                                                                                                                   
  if (CANMM_CTL_SETUP_EYEQ_VariationSwitch == 0) {                                                                                   
    CANMM_CTL_SETUP_EYEQ_ID = INDEF_VARIATION;                                                                                       
  }                                                                                                                
  else {                                                                                                           
    CANMM_CTL_SETUP_EYEQ_ID = CANMM_CTL_SETUP_EYEQ_Variation;                                                                                          
  }                                                                                                                
                                                                                                                   
  if (IN_RESET != TransceiverState) {                                                                              
    DsCanCh_setBusMode(CanMM_channel, DSCAN_CH_MODE_BUSON);                                                        
    DsCanCh_apply(CanMM_channel);                                                                                  
    TransceiverState = IN_RESET;                                                                                   
    resetStateVars = 1;                                                                                            
  }                                                                                                                
                                                                                                                   
                                                                                                                   
                                                                                                                   
    DsCanBusStat_getData(MyBusStat, &MyData);   
    { 
      DsECanCh_BusState DsECanChBusState;                       
      DsCanCh_getBusState( CanMM_channel, &DsECanChBusState );  
      OUTDEF_BUSSTATE      =  -1; 
      switch(DsECanChBusState)                                  
      {                                                         
        case DSCAN_CH_STATE_INIT        : OUTDEF_BUSSTATE      =  0; break;
        case DSCAN_CH_STATE_ERR_ACTIVE  : OUTDEF_BUSSTATE      =  0; break;
        case DSCAN_CH_STATE_WARNING     : OUTDEF_BUSSTATE      =  1; break;
        case DSCAN_CH_STATE_ERR_PASSIVE : OUTDEF_BUSSTATE      =  1; break;
        case DSCAN_CH_STATE_BUSOFF      : OUTDEF_BUSSTATE      =  2; break;
        case DSCAN_CH_STATE_SLEEP       : OUTDEF_BUSSTATE      =  2; break;
      }                                                         
      //we add 10% tolerance to cancel jitter effect                                                                     
      if (MyData.TimeStamp - oldBusStat_TimeStamp >= (Float64)(MONITORING_SLEEPTIME - (MONITORING_SLEEPTIME * 0.01)) &&     
          oldBusStat_TimeStamp != MyData.TimeStamp)    
      {                                                                      
          oldBusStat_TimeStamp = MyData.TimeStamp;                             
      OUTDEF_SUCCRECRX      = OUTDEF_SUCCRECRX + MyData.NumRxStdFrames + MyData.NumRxExtFrames;   
      OUTDEF_SUCCRECRX      = OUTDEF_SUCCRECRX + MyData.NumRxStdFDFrames + MyData.NumRxExtFDFrames;   
      }                                                                      
                                                                             
      if (resetStateVars){                                                       
          OUTDEF_BUSSTATE      = 0;                                          
          OUTDEF_SUCCRECRX     = 0;                                          
          resetStateVars       = 0;                                          
      }                                                                      
                                                                             
}                                                
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                   
}                                                                                                                          
                                                                                                                           
                                                                                                                           
#define MDL_UPDATE  /* Change to #undef to remove function */                                                              
#if defined(MDL_UPDATE)                                                                                                    
  /* Function: mdlUpdate ======================================================                                            
   * Abstract:                                                                                                             
   *    This function is called once for every major integration time step.                                                
   *    Discrete states are typically updated here, but this function is useful                                            
   *    for performing any tasks that should only take place once per                                                      
   *    integration step.                                                                                                  
   */                                                                                                                      
static void mdlUpdate(SimStruct *S, int_T tid)                                                                             
{                                                                                                                          
}                                                                                                                          
#endif /* MDL_UPDATE */                                                                                                    
                                                                                                                           
                                                                                                                           
#define MDL_DERIVATIVES  /* Change to #undef to remove function */                                                         
#if defined(MDL_DERIVATIVES)                                                                                               
  /* Function: mdlDerivatives =================================================                                            
   * Abstract:                                                                                                             
   *    In this function, you compute the S-function block's derivatives.                                                 
   *    The derivatives are placed in the derivative vector, ssGetdX(S).                                                   
   */                                                                                                                      
static void mdlDerivatives(SimStruct *S)                                                                                   
{                                                                                                                          
}                                                                                                                          
#endif /* MDL_DERIVATIVES */                                                                                               
                                                                                                                           
                                                                                                                           
/* Function: mdlTerminate =====================================================                                            
 * Abstract:                                                                                                               
 *    In this function, you should perform any actions that are necessary                                                  
 *    at the termination of a simulation.  For example, if memory was                                                      
 *    allocated in mdlStart, this is the place to free it.                                                                 
 */                                                                                                                        
static void mdlTerminate(SimStruct *S)                                                                                     
{                                                                                                                          
/****************************/                                                                                     
/*         TERMINATE        */                                                                                     
/****************************/                                                                                     
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                                   
  DsTError          Error         = DSCAN_NO_ERROR;                                                                
                                                                                                                   
  CANMMMonitor_EYEQ_old = 0;                                                                                                      
  if ((Error = DsCanCh_stop(CanMM_channel)) != DSCAN_NO_ERROR)                                                     
    CANMM_DEBUG_ERROR(Error);                                                                                      
    RTICANMM_SETUP_EYEQ_SimStruct = 0;                                                                                              
#endif   /* RTICANMM_HAVE_VALID_PLATFORM */                                                                        
}                                                                                                                          
                                                                                                                           
                                                                                                                           
/*=============================*                                                                                           
 * Required S-function trailer *                                                                                           
 *=============================*/                                                                                          
                                                                                                                           
#if defined(MATLAB_MEX_FILE)    	/* Is this file being compiled as a MEX-file? */                                          
#include <simulink.c>      		/* MEX-file interface mechanism */                                                        
#else                                                                                                                      
#include <cg_sfun.h>       		/* Code generation registration function */                                               
#endif                                                                                                                     
