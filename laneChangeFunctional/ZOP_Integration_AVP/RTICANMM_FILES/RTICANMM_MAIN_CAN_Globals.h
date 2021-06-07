/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_Globals */
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

#undef DEBUG              
#undef IDMANIPULATION
#define WITHOUT_DELAY
#define NO_TX       
#undef KICKOUT_ACTIVE                
#define NOCANID  0xEFFFFFFF
#define S_FUNCTION_NAME                           RTICANMM_MAIN_CAN
#define S_FUNCTION_LEVEL 2
#include "simstruc.h"
#include <math.h>
                                                       
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
# include "dsRTICANMMGlobals.h"
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */                                                                  
                                                       
                                                       
                                                       
#define NUM_TX_INPUT                              0
#define NUM_TX_MSG                                0
#define NUM_RX_OUTPUT                             5597
#define NUM_RX_MSG                                97
#define NUM_RX                                    5597
#define NUM_TX                                    0
/* #define TX_PORT_DATA_TYPES                     "RTICANMM_MAIN_CAN_TX_PORT.h" */
/* #define RX_PORT_DATA_TYPES                     "RTICANMM_MAIN_CAN_RX_PORT.h" */
/* #define TX_WRITE_PORT_DATA                     "RTICANMM_MAIN_CAN_TX_INPUT.h" */
/* #define RX_WRITE_PORT_DATA                     "RTICANMM_MAIN_CAN_RX_OUTPUT.h" */
                                                       
                                                       
#if !defined(MATLAB_MEX_FILE) || defined(CANMM_HOST_DEBUG)                                                            
struct MainSetupMsgData {                              
  CanMM_Msg CANMsg;                                    
  UInt8 PaddingData[4];                                
  UInt8* pData;         /* Pointer to DLC data bytes */
  double DeltaTime;                                    
  double DelayTime;                                    
  double CycleTime;                                    
  UInt8  Status;                                       
  UInt32 TXCounter;                                    
  UInt32 RXCounter;                                    
  double HwTime;                                       
  UInt8  MsgType;                                      
};                                                     
typedef struct MainSetupMsgData MainSetupMsgData;      
                                                       
enum CanMM_MsgTypes {                      
   RTICANMM_MESSAGE_TYPE_STD,              
   RTICANMM_MESSAGE_TYPE_EXT,              
   RTICANMM_MESSAGE_TYPE_J1939,            
   RTICANMM_MESSAGE_TYPE_FD_STD,           
   RTICANMM_MESSAGE_TYPE_FD_EXT            
};                                         
typedef enum CanMM_MsgTypes CanMM_MsgTypes;
                                           
#undef CAN_J1939
#undef WITHOUT_LOOPBACKSTATUS

     /* Include CRC and CustomCode here */
/* #define CAN_BASEUPDATE_FILE                    "RTICANMM_MAIN_CAN_BASEUPDATE.h" */
#undef BASEUPDATE_ACTIVE                          
/* #define CAN_DEFS_FILE                          "RTICANMM_MAIN_CAN_DEFS.h" */
/* #define CAN_MSG_DATA_FILE                      "RTICANMM_MAIN_CAN_MSG_DATA.h" */
/* #define CAN_ID_TABLE_FILE                      "RTICANMM_MAIN_CAN_ID_TABLE.h" */
#define CAN_GLOBAL_ENABLE_TX                      CANMMCAN_TXGE
#define CAN_GLOBAL_ENABLE                         CANMMCAN_GE
#define CAN_VAR_ENABLE                            CANMM_CTL_SETUP_Controller1_ID
#define CAN_VAR_TRAFFIC                           CANMMCAN_TRAFFIC
#define CANMM_RESET2DEFAULTS                      CANMMCAN_RE
#define CAN_SENDBYKICKOUT                         CANMMCAN_BYKICK
#define CAN_ENABLE                                CANMMCAN_TXEN
#define CAN_WOULDBESENT                           CANMMCAN_WBS
#define CAN_ENABLE_TIMEOUT                        CANMMCAN_TXTOUT
#define CAN_CYCLIC                                CANMMCAN_TXC
#define CAN_RX_DATA                               CANMMCAN_RX
#define CAN_TX_DATA                               CANMMCAN_TX
#define CAN_NUM_LOST                              CANMMCAN_NL
#define CAN_NUM_LOST_RESET                        CANMMCAN_NLR
#define rticanmmsaturation(value, maximum, minimum)((value >= maximum)? maximum : ((value <= minimum)? minimum : value))
#define rticanmmmaxsat(value, maximum, minimum)   ((value >= maximum)? maximum : value)
/* #define CAN_SIGNAL_HEADERFILE                  "RTICANMM_MAIN_CAN_SIGNAL_DEFAULTS.h" */
/* #define CAN_MESSAGE_HEADERFILE                 "RTICANMM_MAIN_CAN_MESSAGE_DEFAULTS.h" */
#define ENABLE_PORT                               0
#undef ONLYCAPTURE                                
#define TX_LOOPBACK                               1
#define TX_CYCLETIME                              CANMMCAN_TXCT
#define TX_DELAYTIME                              CANMMCAN_TXDT
#define TX_KICKOUT                                CANMMCAN_TXKOUT
#define RX_STATUS                                 CANMMCAN_RXsta
#define TX_STATUS                                 CANMMCAN_TXsta
#undef USE_CAPTURE                                
#define CANMM_Q_NUM                               1

#if (RTICANMM_FEEDTHROUGH_CHECK)        
static const void * GetInputPortSignal(SimStruct *S, int port_num);
static int CheckDirectFeedThroughInputPort(SimStruct *S, int port_num);
#else                                                              
#define GetInputPortSignal ssGetInputPortSignal                    
#endif //RTICANMM_FEEDTHROUGH_CHECK                                
#endif /* NOT MATLAB_MEX_FILE || CANMM_HOST_DEBUG */               
                                                                   
