/******************************************************************************
    ProjectName: Platform
    file: Lon_CAN_signal_mapping.c
    Revision: 1.0
    Date: 2019/12/09
    Author: ZCC
	Descrpition: map the CAN signals to ACC function.
******************************************************************************/

/******************************************************************************
*
*   INCLUDES
*
******************************************************************************/
#include "Lon_CAN_signal_mapping.h"

#include "ASM.h"
#include "DAC.h"
#include "ACTRL.h"
#include "HMI.h"

  

/******************************************************************************
*
*   VARIABLES - Exported signals 
*	
******************************************************************************/


	
/******************************************************************************
*
*   FUNCTION DEFINITIONS
*
******************************************************************************/	


/*===============================================================================================================
*
* Tx Message
*
==============================================================================================================*/
extern uint32 AlvRlngCtr;
extern uint8 ACCSysSts_RadarHSC2_temp;
void AccAebOutput_ConvertTo_iECU_HSC2_FrP04_20ms()
{
    Std_ReturnType fct_status;
	boolean fct_error = 0;

	/*#ifdef   visiononly*/
	DtSG_FVCM_HSC7_Radar_FrP00_Lon Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg = 
	{
		0U, 0U, FALSE, FALSE, 0U, 0U, 0U, 0U
	};

	Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSdslReq_RadarHSC7 = Vbl_ACTRL_OUT_StopStgyActv;
	Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCAccReqStsHSC7 = Vbl_ACTRL_OUT_BrkActv;
	Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCGoReqHSC7 = Vbl_ASM_AS_ACCGoReq;
	Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysFltSts_SCSHSC7 = 0; //TEMP

	switch (VTe_ASM_AS_ACCIntSt)
	{
		case eASMACCInternalStateInit:
		case eASMACCInternalStateOff:			
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 0;
			ACCSysSts_RadarHSC2_temp = 0;
			break;
		case eASMACCInternalStateInhibit:
		case eASMACCInternalStateStandby:
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 1;
			ACCSysSts_RadarHSC2_temp = 1;
			break;
		case eASMACCInternalStateActive:
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 2;
			ACCSysSts_RadarHSC2_temp = 2;
			break;			
		case eASMACCInternalStateSuspend:
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 3;
			ACCSysSts_RadarHSC2_temp = 3;
			break; 
		case eASMACCInternalStateBrakeOnly:
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 4;
			ACCSysSts_RadarHSC2_temp = 4;
			break; 	
		case eASMACCInternalStateStandStillHold:
		case eASMACCInternalStateGo:
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 5;
			ACCSysSts_RadarHSC2_temp = 5;
			break; 
		case eASMACCInternalStateGoPrevent:
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 6;
			ACCSysSts_RadarHSC2_temp = 6;
			break;
		default :
			Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 = 0;
			ACCSysSts_RadarHSC2_temp = 0;
			break;
	}
	
	Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCAccReqValHSC7 = (Vf32_ACTRL_OUT_BrkAccelDmd + 7.22F)/0.005F;
	Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysAlvRlngCtr_SCSHSC7 = AlvRlngCtr % 16; 

	uint8_T Bytes[8];

	Bytes[0] = ((Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysAlvRlngCtr_SCSHSC7 << 3) &  0x78) + ((Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCAccReqValHSC7 >> 8) & 0x07);
	Bytes[1] = (Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCAccReqValHSC7 & 0xFF);
	Bytes[2] = 0;
	Bytes[3] = ((Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCGoReqHSC7 << 6) & 0x40) + ((Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCAccReqStsHSC7 << 4) & 0x30);
	Bytes[4] = 0;
	Bytes[5] = ((Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysSts_RadarHSC7 << 3) & 0x38) + Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysFltSts_SCSHSC7 & 0x07;
	Bytes[6] = (Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSdslReq_RadarHSC7 <<7) & 0x80;

	Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCSysChksm_SCSHSC7 = checksum_CRC8(Bytes, 7);
	fct_status = TSC_CtApLonPlatform_Rte_Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation(&Call_PiCS_FVCM_HSC7_Radar_FrP00_FVCM_HSC7_Radar_FrP00_Operation_arg);
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

void AccAebOutput_ConvertTo_iECU_HSC2_FrP05_20ms()
{
    Std_ReturnType fct_status;
	boolean fct_error = 0;
	
	DtSG_FVCM_HSC7_Radar_FrP01_Lon Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg = 
	{
		0U, 0U, 0U, 0U, FALSE, 0U, 0U, 0U, 0U, 0U, 0U
	};

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBDclReqValHSC7 = (uint8)((0 + 12.7f)/0.1f);
	
	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBPrflReqHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCAEBBrkJerkLvlReq_RadarHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBSysSts_RadarHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBDclReqStsHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBPedtrnSysStsHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBHydBrkAstLvlReqHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBPedtrnSysFltStsHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBSysFltSts_RadarHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBAlvRlngCtr_SCSHSC7 = AlvRlngCtr % 16;

	// Cal ChkSum
	uint8_T Bytes[8];

	Bytes[0] = (Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBDclReqValHSC7 & 0xFF);
    Bytes[1] = (0U & 0x7F) + ((Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBPrflReqHSC7 << 7) & 0x80);
    Bytes[2] = ((Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.ACCAEBBrkJerkLvlReq_RadarHSC7 << 2) & 0x1C) + ((Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBSysSts_RadarHSC7 << 5) & 0xE0);
    Bytes[3] = (Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBDclReqStsHSC7 & 0x03) + ((Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBPedtrnSysStsHSC7<< 2) & 0x1C) + ((Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBHydBrkAstLvlReqHSC7 << 5) & 0xE0);
    Bytes[4] = (Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBAlvRlngCtr_SCSHSC7 & 0x0F) + ((Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBPedtrnSysFltStsHSC7 << 4) & 0x70);
    Bytes[5] = ((Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBSysFltSts_RadarHSC7 << 5) & 0xE0);
    
    Bytes[6] = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg.AEBChksm_SCSHSC7 = checksum_CRC8(Bytes, 7);
	fct_status = TSC_CtApLonPlatform_Rte_Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation(&Call_PiCS_FVCM_HSC7_Radar_FrP01_FVCM_HSC7_Radar_FrP00_Operation_arg);
 

}

void AccAebOutput_ConvertTo_iECU_HSC2_FrP06_20ms()
{
    Std_ReturnType fct_status;
	boolean fct_error = 0;
  
	DtSG_FVCM_HSC7_Radar_FrP02_Lon Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg = 
	{
		0U, 0U, FALSE, 0U, 0U, 0U, 0U, FALSE, 0U, 0U, 0U, 0U, 0U, FALSE, 0U, 0U, 0U
	};

	
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCObjDet_RadarHSC7 = (Vu8_DAC_In_IV_ID != 0);
	
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCDrvrSelTrgtSpd_RadarHSC7 = (uint16)(Vf32_ASM_ADS_DrvrSetSpdDsply_kph/0.015625F);
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.AEBMsgReqHSC7 = 0;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCMsgReqHSC7 = 0;
	if (Vu8_DAC_In_IV_ID != 0)
		Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCDetObjDistLvl_RadarHSC7 = 1;
	else
		Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCDetObjDistLvl_RadarHSC7 = 0;
	
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCDrvrSeldTrgtDistLvl_RadarHSC7 = Vu8_ASM_ADS_DrvrSetDistLvl;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCSysCanclReq_RadarHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.RadarCalPrgsReqHSC7 = 0;

	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCGoNotfr_RadarHSC7 = Vbl_HMI_AW_AwyDrvReqd;;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCSysFltSts_RadarHSC7 = 0;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.ACCDrvrTkovReqHSC7 = 0;
    
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.FCWSysFltSts_RadarHSC7 = 0;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.FCWSnstvtLvl_RadarHSC7 = 0;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.AEBPedtrnDspCmdHSC7 = 0;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.FCWrnngSts_RadarHSC7 = 0;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.FCWDspCmd_RadarHSC7 = 0;
	Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg.AEBDspCmd_RadarHSC7 = 0;
	fct_status = TSC_CtApLonPlatform_Rte_Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation(&Call_PiCS_FVCM_HSC7_Radar_FrP02_FVCM_HSC7_Radar_FrP02_Operation_arg);
}

void AccAebOutput_ConvertTo_iECU_HSC2_FrP07_100ms()
{
    Std_ReturnType fct_status;
	boolean fct_error = 0;
}

void AccAebOutput_ConvertTo_iECU_HSC2_FrP00_20ms()
{	
	Std_ReturnType fct_status;
	boolean fct_error = 0;
	  
	DtSG_FVCM_HSC7_FrP00_Lon Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg = 
	{
		0U, 0U, 0U, 0U
	};

	Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqStsHSC7 = Vbl_ACTRL_OUT_WhlTorqCtrlActv;

	Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqValHSC7 = (uint16)((Vf32_ACTRL_OUT_EngTorqDmd + 848.0F) / 0.5F);

	Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCAlvRCHSC7 = AlvRlngCtr % 16;
	
	Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqValPVHSC7 = (uint16)((((Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqValHSC7)<<2)|(Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqStsHSC7))&0x3FFF);                                                                                                                                                                         
	Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqValPVHSC7 = (uint16)((Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqValPVHSC7+( Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCAlvRCHSC7))&0x3FFF);                                                                                                                                                   
	Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqValPVHSC7 = (uint16)((~Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg.ACCToqReqValPVHSC7)+1U);
  
	fct_status = TSC_CtApLonPlatform_Rte_Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation(&Call_PiCS_FVCM_HSC7_FrP00_FVCM_HSC7_FrP00_Operation_arg);	 
}


uint8_T checksum_CRC8(uint8_T *data, uint8_T length)
{
	uint8_T u8_crc8 = 0xFF;
	uint8_T u8_poly = 0x1D;

	for (int i = 0; i < length; ++i)
	{
		u8_crc8 ^= data[i];

		for (int j = 0; j < 8; ++j)
		{
			if (u8_crc8 & 0x80)
			{
				u8_crc8 = (u8_crc8 << 1) ^ u8_poly;
			}
			else
			{
				u8_crc8 <<= 1;
			}
		}
	}

	u8_crc8 ^=(uint8_T)0xFF;
	
	return u8_crc8;
}
