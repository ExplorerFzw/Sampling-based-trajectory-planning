/*****************************************************************************************************************************/
/* RTICANMM_SETUP_Controller1 */
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

#if !defined(__RTICANMM_SETUP_Controller1_H)                                                                                                       
#define __RTICANMM_SETUP_Controller1_H                                                                                                             
                                                                                                                           
#include <dsRTICANMM_ControllerSetupApi.h>                                                                                 
                                                                                                                           
#if defined(RTICANMM_HAVE_VALID_PLATFORM)                                                                                  
#include <Dstypes.h>                                                                                                       
#include <DsEcuTimeBaseManager.h>                                                                                          
#include <RTICANMMGetSimTime.h>                                                                                    
#include <DsCan.h>                                                                                                         
#include <DsCanPn.h>                                                                                                   
#include <DsCanEfg.h>                                                                                                  
                                                                                                                           
#if defined(RTICANMM_HAVE_DSCAN_BUS)																						  
#include <DsCanBus.h>                                                                                                      
#endif                                                                                                                     
                                                                                                                           
#if !defined(MATLAB_MEX_FILE)                                                                                              
#include <rtkernel.h>                                                                                                      
#include <brtenv.h>                                                                                                        
#if defined(RTICANMM_HAVE_PHS_BUS)                                                                                          
#include <dsphs.h>                                                                                                         
#endif                                                                                                                     
#if defined(RTICANMM_HAVE_DSDAQ)                                                                                           
#if defined(RTICANMM_HAVE_DSDAQRP)                                                                                         
#include <DsDaqRP.h>                                                                                                      
#else                                                                                                                      
#include <DsDaq.h>                                                                                                        
#endif                                                                                                                     
#endif                                                                                                                     
#endif /* MATLAB_MEX_FILE */                                                                                               
                                                                                                                           
#if defined(CANMM_HOST_DEBUG) && !defined(DS_PLATFORM_OFFSIM)                                                              
#if defined(_EXPORT)                                                                                                       
#  define DECLSPEC __declspec(dllexport)                                                                                   
# else                                                                                                                     
#  define DECLSPEC __declspec(dllimport)                                                                                   
# endif                                                                                                                    
#else                                                                                                                      
# define DECLSPEC                                                                                                          
#endif                                                                                                                     
/* Controller feature defines (generated automatically - do not change) */                                                 
#undef  TJA                                                                                                            
                                                                                                                           
extern volatile UInt8 DECLSPEC       CANMM_CTL_SETUP_Controller1_ID;                                                                                
extern volatile UInt8 DECLSPEC       CANMM_CTL_SETUP_Controller1_TX_STATUS;                                                                         
extern volatile UInt8 DECLSPEC       CANMM_CTL_SETUP_Controller1_Variation;                                                                         
extern volatile UInt8 DECLSPEC       CANMM_CTL_SETUP_Controller1_VariationSwitch;                                                                   
                                                                                                                           
struct CANMM_CTL_SETUP_Controller1_CtlClient {                                                                                                      
  int initialized;                                                                                                         
  int update;                                                                                                              
  int disabled;                                                                                                            
  DsTCanMsg rx_msg;                                                                                                        
  DsTCanMsg tx_msg;                                                                                                        
};                                                                                                                         
typedef struct CANMM_CTL_SETUP_Controller1_CtlClient CANMM_CTL_SETUP_Controller1_CtlClient;                                                                                  
                                                                                                                           
void    DECLSPEC  CANMM_CTL_SETUP_Controller1_client_init(CANMM_CTL_SETUP_Controller1_CtlClient* client);                                                                    
Int32   DECLSPEC  CANMM_CTL_SETUP_Controller1_rx(CANMM_CTL_SETUP_Controller1_CtlClient* client, CanMM_Msg* msg);                                                             
Int32   DECLSPEC  CANMM_CTL_SETUP_Controller1_tx(CANMM_CTL_SETUP_Controller1_CtlClient* client, CanMM_Msg* msg);                                                             
void    DECLSPEC  CANMM_CTL_SETUP_Controller1_rx_stop(CANMM_CTL_SETUP_Controller1_CtlClient* client);                                                                        
void    DECLSPEC  CANMM_CTL_SETUP_Controller1_rx_start(CANMM_CTL_SETUP_Controller1_CtlClient* client);                                                                       
UInt32  DECLSPEC  CANMM_CTL_SETUP_Controller1_tx_queue_level(CANMM_CTL_SETUP_Controller1_CtlClient* client);                                                                 
Float64 DECLSPEC  CANMM_CTL_SETUP_Controller1_baudrate_get();                                                                                       
Float64 DECLSPEC  CANMM_CTL_SETUP_Controller1_baudrateFD_get();                                                                                     
                                                                                                                           
#define             CANMM_CTL_SETUP_Controller1_tx_queue_size 64                                                                                
                                                                                                                           
#define MSG_SM_CANNEDY                 MSG_SM_RTICANMM                                                                 
                                                                                                                           
#if defined(_DS2510) || defined(CANMM_HOST_DEBUG)                                                                          
# define ts_time_read()           ssGetT(S)                                                                                
#endif                                                                                                                     
                                                                                                                           
#define DPMEM_SIZE             100                                                                                     
                                                                                                                           
#endif /* RTICANMM_HAVE_VALID_PLATFORM */                                                                                  
#endif /* __RTICANMM_SETUP_Controller1_H */                                                                                                        
                                                                                                                           
