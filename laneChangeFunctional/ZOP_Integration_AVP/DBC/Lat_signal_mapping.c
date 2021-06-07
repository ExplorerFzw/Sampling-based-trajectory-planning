/*
 * Lat_signal_mapping.c
 *
 *  Created on: 2019-06-11
 *      Author: guandengshi
 */
#include "Lon_CAN_signal_mapping.h"

//#include "Lat_signal_mapping.h"
//#include "Lon_signal_mapping.h"
#include <math.h>



// Message ID: 0x1FD, TX_20ms
void VLatC_Outputs_ConvertTo_iECU_HSC2_FrP03_Can1_20ms(VLatC_Outputs *VLatC_Output)//FVCM_HSC2_FrP03
{
  Std_ReturnType fct_status;
  boolean fct_error = 0;
  
  DtSG_FVCM_HSC2_FrP03_Lat Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg = {
  0U, 0U, FALSE, 0U, 0U, FALSE, 0U, 0U, 0U
};
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LDWLKAVbnLvlReqHSC2 = VLatC_Output->LDWLKAVbnLvlReqHSC1;
	  
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAAlvRCHSC2 = AlvRlngCtr % 16;
  
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqHSC2 = (uint16)(VLatC_Output->LKAReqToqHSC1_Nm*100.0f - (-10.24f)*100.0f);
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqStsHSC2 = VLatC_Output->LKAReqToqStsHSC1;
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqVHSC2 = VLatC_Output->LKAReqToqVHSC1;                                 /*unsigned char type unsigned char*/
	
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqPVHSC2 = (uint16)((((Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqHSC2)<<1)|((Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqStsHSC2)<<12)|(Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqVHSC2))&0x3FFF);
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqPVHSC2 = (uint16)((Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqPVHSC2 + (Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAAlvRCHSC2)) & 0x3FFF);
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqPVHSC2 = (uint16)(((~Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKAReqToqPVHSC2)+1) &0x3FFF);
  
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKASysFltStsHSC2 = VLatC_Output->LKASysFltStsHSC1;
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKASysStsHSC2 = VLatC_Output->LKASysStsHSC1;
  Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg.LKADrvrTkovReqHSC2 = VLatC_Output->DrvrTkovRqeHSC2;

   fct_status = TSC_CtApLatPlatform_Rte_Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation(&Call_PiCS_FVCM_HSC2_FrP03_FVCM_HSC2_FrP02_Operation_arg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }
    
}

