/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_ID_TABLE */
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




/* ICM_Common_Prot_A */
((UInt32*) IDPTR_MEM_R)[0] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Common_Prot_A;
CANMMCAN_MIDTXSW[0] = 0;
CANMMCAN_RXCNT[0] = 0;
CANMMCAN_MIDRX[0] = 0x47;
CANMMCAN_MIDTXS[0] = 0x47;
CANMMCAN_RXMT[0] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[0] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[0] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[0] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Common_Prot_B */
((UInt32*) IDPTR_MEM_R)[1] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Common_Prot_B;
CANMMCAN_MIDTXSW[1] = 0;
CANMMCAN_RXCNT[1] = 0;
CANMMCAN_MIDRX[1] = 0x48;
CANMMCAN_MIDTXS[1] = 0x48;
CANMMCAN_RXMT[1] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[1] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[1] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[1] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Host_Prot_A_1 */
((UInt32*) IDPTR_MEM_R)[2] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Host_Prot_A_1;
CANMMCAN_MIDTXSW[2] = 0;
CANMMCAN_RXCNT[2] = 0;
CANMMCAN_MIDRX[2] = 0x4C;
CANMMCAN_MIDTXS[2] = 0x4C;
CANMMCAN_RXMT[2] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[2] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[2] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[2] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Host_Prot_A_2 */
((UInt32*) IDPTR_MEM_R)[3] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Host_Prot_A_2;
CANMMCAN_MIDTXSW[3] = 0;
CANMMCAN_RXCNT[3] = 0;
CANMMCAN_MIDRX[3] = 0x4D;
CANMMCAN_MIDTXS[3] = 0x4D;
CANMMCAN_RXMT[3] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[3] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[3] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[3] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Host_Prot_B_1 */
((UInt32*) IDPTR_MEM_R)[4] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Host_Prot_B_1;
CANMMCAN_MIDTXSW[4] = 0;
CANMMCAN_RXCNT[4] = 0;
CANMMCAN_MIDRX[4] = 0x4E;
CANMMCAN_MIDTXS[4] = 0x4E;
CANMMCAN_RXMT[4] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[4] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[4] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[4] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Host_Prot_B_2 */
((UInt32*) IDPTR_MEM_R)[5] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Host_Prot_B_2;
CANMMCAN_MIDTXSW[5] = 0;
CANMMCAN_RXCNT[5] = 0;
CANMMCAN_MIDRX[5] = 0x4F;
CANMMCAN_MIDTXS[5] = 0x4F;
CANMMCAN_RXMT[5] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[5] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[5] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[5] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Adja_Prot_Header */
((UInt32*) IDPTR_MEM_R)[6] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Adja_Prot_Header;
CANMMCAN_MIDTXSW[6] = 0;
CANMMCAN_RXCNT[6] = 0;
CANMMCAN_MIDRX[6] = 0x60;
CANMMCAN_MIDTXS[6] = 0x60;
CANMMCAN_RXMT[6] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[6] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[6] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[6] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Adja_Prot_A */
((UInt32*) IDPTR_MEM_R)[7] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Adja_Prot_A;
CANMMCAN_MIDTXSW[7] = 0;
CANMMCAN_RXCNT[7] = 0;
CANMMCAN_MIDRX[7] = 0x61;
CANMMCAN_MIDTXS[7] = 0x61;
CANMMCAN_RXMT[7] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[7] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[7] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[7] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Adja_Prot_B */
((UInt32*) IDPTR_MEM_R)[8] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Adja_Prot_B;
CANMMCAN_MIDTXSW[8] = 0;
CANMMCAN_RXCNT[8] = 0;
CANMMCAN_MIDRX[8] = 0x62;
CANMMCAN_MIDTXS[8] = 0x62;
CANMMCAN_RXMT[8] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[8] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[8] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[8] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Adja_Prot_C */
((UInt32*) IDPTR_MEM_R)[9] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Adja_Prot_C;
CANMMCAN_MIDTXSW[9] = 0;
CANMMCAN_RXCNT[9] = 0;
CANMMCAN_MIDRX[9] = 0x63;
CANMMCAN_MIDTXS[9] = 0x63;
CANMMCAN_RXMT[9] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[9] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[9] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[9] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Adja_Prot_D */
((UInt32*) IDPTR_MEM_R)[10] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Adja_Prot_D;
CANMMCAN_MIDTXSW[10] = 0;
CANMMCAN_RXCNT[10] = 0;
CANMMCAN_MIDRX[10] = 0x64;
CANMMCAN_MIDTXS[10] = 0x64;
CANMMCAN_RXMT[10] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[10] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[10] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[10] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Host_Prot_Header */
((UInt32*) IDPTR_MEM_R)[11] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Host_Prot_Header;
CANMMCAN_MIDTXSW[11] = 0;
CANMMCAN_RXCNT[11] = 0;
CANMMCAN_MIDRX[11] = 0x69;
CANMMCAN_MIDTXS[11] = 0x69;
CANMMCAN_RXMT[11] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[11] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[11] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[11] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Road_Edge_Prot_Header */
((UInt32*) IDPTR_MEM_R)[12] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Road_Edge_Prot_Header;
CANMMCAN_MIDTXSW[12] = 0;
CANMMCAN_RXCNT[12] = 0;
CANMMCAN_MIDRX[12] = 0x6C;
CANMMCAN_MIDTXS[12] = 0x6C;
CANMMCAN_RXMT[12] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[12] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[12] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[12] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Road_Edge_Prot_A */
((UInt32*) IDPTR_MEM_R)[13] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Road_Edge_Prot_A;
CANMMCAN_MIDTXSW[13] = 0;
CANMMCAN_RXCNT[13] = 0;
CANMMCAN_MIDRX[13] = 0x6D;
CANMMCAN_MIDTXS[13] = 0x6D;
CANMMCAN_RXMT[13] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[13] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[13] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[13] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Road_Edge_Prot_B */
((UInt32*) IDPTR_MEM_R)[14] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Road_Edge_Prot_B;
CANMMCAN_MIDTXSW[14] = 0;
CANMMCAN_RXCNT[14] = 0;
CANMMCAN_MIDRX[14] = 0x6E;
CANMMCAN_MIDTXS[14] = 0x6E;
CANMMCAN_RXMT[14] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[14] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[14] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[14] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Lanes_Road_Edge_Prot_C */
((UInt32*) IDPTR_MEM_R)[15] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Lanes_Road_Edge_Prot_C;
CANMMCAN_MIDTXSW[15] = 0;
CANMMCAN_RXCNT[15] = 0;
CANMMCAN_MIDRX[15] = 0x6F;
CANMMCAN_MIDTXS[15] = 0x6F;
CANMMCAN_RXMT[15] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[15] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[15] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[15] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot_Header */
((UInt32*) IDPTR_MEM_R)[16] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot_Header;
CANMMCAN_MIDTXSW[16] = 0;
CANMMCAN_RXCNT[16] = 0;
CANMMCAN_MIDRX[16] = 0x90;
CANMMCAN_MIDTXS[16] = 0x90;
CANMMCAN_RXMT[16] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[16] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[16] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[16] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot0_A */
((UInt32*) IDPTR_MEM_R)[17] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot0_A;
CANMMCAN_MIDTXSW[17] = 0;
CANMMCAN_RXCNT[17] = 0;
CANMMCAN_MIDRX[17] = 0x91;
CANMMCAN_MIDTXS[17] = 0x91;
CANMMCAN_RXMT[17] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[17] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[17] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[17] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot0_B */
((UInt32*) IDPTR_MEM_R)[18] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot0_B;
CANMMCAN_MIDTXSW[18] = 0;
CANMMCAN_RXCNT[18] = 0;
CANMMCAN_MIDRX[18] = 0x92;
CANMMCAN_MIDTXS[18] = 0x92;
CANMMCAN_RXMT[18] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[18] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[18] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[18] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot1_A */
((UInt32*) IDPTR_MEM_R)[19] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot1_A;
CANMMCAN_MIDTXSW[19] = 0;
CANMMCAN_RXCNT[19] = 0;
CANMMCAN_MIDRX[19] = 0x93;
CANMMCAN_MIDTXS[19] = 0x93;
CANMMCAN_RXMT[19] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[19] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[19] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[19] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot1_B */
((UInt32*) IDPTR_MEM_R)[20] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot1_B;
CANMMCAN_MIDTXSW[20] = 0;
CANMMCAN_RXCNT[20] = 0;
CANMMCAN_MIDRX[20] = 0x94;
CANMMCAN_MIDTXS[20] = 0x94;
CANMMCAN_RXMT[20] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[20] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[20] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[20] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot2_A */
((UInt32*) IDPTR_MEM_R)[21] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot2_A;
CANMMCAN_MIDTXSW[21] = 0;
CANMMCAN_RXCNT[21] = 0;
CANMMCAN_MIDRX[21] = 0x95;
CANMMCAN_MIDTXS[21] = 0x95;
CANMMCAN_RXMT[21] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[21] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[21] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[21] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot2_B */
((UInt32*) IDPTR_MEM_R)[22] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot2_B;
CANMMCAN_MIDTXSW[22] = 0;
CANMMCAN_RXCNT[22] = 0;
CANMMCAN_MIDRX[22] = 0x96;
CANMMCAN_MIDTXS[22] = 0x96;
CANMMCAN_RXMT[22] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[22] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[22] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[22] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot3_A */
((UInt32*) IDPTR_MEM_R)[23] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot3_A;
CANMMCAN_MIDTXSW[23] = 0;
CANMMCAN_RXCNT[23] = 0;
CANMMCAN_MIDRX[23] = 0x97;
CANMMCAN_MIDTXS[23] = 0x97;
CANMMCAN_RXMT[23] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[23] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[23] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[23] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot3_B */
((UInt32*) IDPTR_MEM_R)[24] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot3_B;
CANMMCAN_MIDTXSW[24] = 0;
CANMMCAN_RXCNT[24] = 0;
CANMMCAN_MIDRX[24] = 0x98;
CANMMCAN_MIDTXS[24] = 0x98;
CANMMCAN_RXMT[24] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[24] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[24] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[24] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot4_A */
((UInt32*) IDPTR_MEM_R)[25] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot4_A;
CANMMCAN_MIDTXSW[25] = 0;
CANMMCAN_RXCNT[25] = 0;
CANMMCAN_MIDRX[25] = 0x99;
CANMMCAN_MIDTXS[25] = 0x99;
CANMMCAN_RXMT[25] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[25] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[25] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[25] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot4_B */
((UInt32*) IDPTR_MEM_R)[26] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot4_B;
CANMMCAN_MIDTXSW[26] = 0;
CANMMCAN_RXCNT[26] = 0;
CANMMCAN_MIDRX[26] = 0x9A;
CANMMCAN_MIDTXS[26] = 0x9A;
CANMMCAN_RXMT[26] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[26] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[26] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[26] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot5_A */
((UInt32*) IDPTR_MEM_R)[27] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot5_A;
CANMMCAN_MIDTXSW[27] = 0;
CANMMCAN_RXCNT[27] = 0;
CANMMCAN_MIDRX[27] = 0x9B;
CANMMCAN_MIDTXS[27] = 0x9B;
CANMMCAN_RXMT[27] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[27] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[27] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[27] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot5_B */
((UInt32*) IDPTR_MEM_R)[28] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot5_B;
CANMMCAN_MIDTXSW[28] = 0;
CANMMCAN_RXCNT[28] = 0;
CANMMCAN_MIDRX[28] = 0x9C;
CANMMCAN_MIDTXS[28] = 0x9C;
CANMMCAN_RXMT[28] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[28] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[28] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[28] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot6_A */
((UInt32*) IDPTR_MEM_R)[29] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot6_A;
CANMMCAN_MIDTXSW[29] = 0;
CANMMCAN_RXCNT[29] = 0;
CANMMCAN_MIDRX[29] = 0x9D;
CANMMCAN_MIDTXS[29] = 0x9D;
CANMMCAN_RXMT[29] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[29] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[29] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[29] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot6_B */
((UInt32*) IDPTR_MEM_R)[30] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot6_B;
CANMMCAN_MIDTXSW[30] = 0;
CANMMCAN_RXCNT[30] = 0;
CANMMCAN_MIDRX[30] = 0x9E;
CANMMCAN_MIDTXS[30] = 0x9E;
CANMMCAN_RXMT[30] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[30] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[30] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[30] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot7_A */
((UInt32*) IDPTR_MEM_R)[31] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot7_A;
CANMMCAN_MIDTXSW[31] = 0;
CANMMCAN_RXCNT[31] = 0;
CANMMCAN_MIDRX[31] = 0x9F;
CANMMCAN_MIDTXS[31] = 0x9F;
CANMMCAN_RXMT[31] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[31] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[31] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[31] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot7_B */
((UInt32*) IDPTR_MEM_R)[32] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot7_B;
CANMMCAN_MIDTXSW[32] = 0;
CANMMCAN_RXCNT[32] = 0;
CANMMCAN_MIDRX[32] = 0xA0;
CANMMCAN_MIDTXS[32] = 0xA0;
CANMMCAN_RXMT[32] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[32] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[32] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[32] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot8_A */
((UInt32*) IDPTR_MEM_R)[33] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot8_A;
CANMMCAN_MIDTXSW[33] = 0;
CANMMCAN_RXCNT[33] = 0;
CANMMCAN_MIDRX[33] = 0xA1;
CANMMCAN_MIDTXS[33] = 0xA1;
CANMMCAN_RXMT[33] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[33] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[33] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[33] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot8_B */
((UInt32*) IDPTR_MEM_R)[34] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot8_B;
CANMMCAN_MIDTXSW[34] = 0;
CANMMCAN_RXCNT[34] = 0;
CANMMCAN_MIDRX[34] = 0xA2;
CANMMCAN_MIDTXS[34] = 0xA2;
CANMMCAN_RXMT[34] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[34] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[34] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[34] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot9_A */
((UInt32*) IDPTR_MEM_R)[35] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot9_A;
CANMMCAN_MIDTXSW[35] = 0;
CANMMCAN_RXCNT[35] = 0;
CANMMCAN_MIDRX[35] = 0xA3;
CANMMCAN_MIDTXS[35] = 0xA3;
CANMMCAN_RXMT[35] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[35] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[35] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[35] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot9_B */
((UInt32*) IDPTR_MEM_R)[36] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot9_B;
CANMMCAN_MIDTXSW[36] = 0;
CANMMCAN_RXCNT[36] = 0;
CANMMCAN_MIDRX[36] = 0xA4;
CANMMCAN_MIDTXS[36] = 0xA4;
CANMMCAN_RXMT[36] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[36] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[36] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[36] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot10_A */
((UInt32*) IDPTR_MEM_R)[37] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot10_A;
CANMMCAN_MIDTXSW[37] = 0;
CANMMCAN_RXCNT[37] = 0;
CANMMCAN_MIDRX[37] = 0xA5;
CANMMCAN_MIDTXS[37] = 0xA5;
CANMMCAN_RXMT[37] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[37] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[37] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[37] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot10_B */
((UInt32*) IDPTR_MEM_R)[38] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot10_B;
CANMMCAN_MIDTXSW[38] = 0;
CANMMCAN_RXCNT[38] = 0;
CANMMCAN_MIDRX[38] = 0xA6;
CANMMCAN_MIDTXS[38] = 0xA6;
CANMMCAN_RXMT[38] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[38] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[38] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[38] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot11_A */
((UInt32*) IDPTR_MEM_R)[39] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot11_A;
CANMMCAN_MIDTXSW[39] = 0;
CANMMCAN_RXCNT[39] = 0;
CANMMCAN_MIDRX[39] = 0xA7;
CANMMCAN_MIDTXS[39] = 0xA7;
CANMMCAN_RXMT[39] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[39] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[39] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[39] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot11_B */
((UInt32*) IDPTR_MEM_R)[40] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot11_B;
CANMMCAN_MIDTXSW[40] = 0;
CANMMCAN_RXCNT[40] = 0;
CANMMCAN_MIDRX[40] = 0xA8;
CANMMCAN_MIDTXS[40] = 0xA8;
CANMMCAN_RXMT[40] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[40] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[40] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[40] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot12_A */
((UInt32*) IDPTR_MEM_R)[41] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot12_A;
CANMMCAN_MIDTXSW[41] = 0;
CANMMCAN_RXCNT[41] = 0;
CANMMCAN_MIDRX[41] = 0xA9;
CANMMCAN_MIDTXS[41] = 0xA9;
CANMMCAN_RXMT[41] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[41] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[41] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[41] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot12_B */
((UInt32*) IDPTR_MEM_R)[42] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot12_B;
CANMMCAN_MIDTXSW[42] = 0;
CANMMCAN_RXCNT[42] = 0;
CANMMCAN_MIDRX[42] = 0xAA;
CANMMCAN_MIDTXS[42] = 0xAA;
CANMMCAN_RXMT[42] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[42] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[42] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[42] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot13_A */
((UInt32*) IDPTR_MEM_R)[43] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot13_A;
CANMMCAN_MIDTXSW[43] = 0;
CANMMCAN_RXCNT[43] = 0;
CANMMCAN_MIDRX[43] = 0xAB;
CANMMCAN_MIDTXS[43] = 0xAB;
CANMMCAN_RXMT[43] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[43] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[43] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[43] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot13_B */
((UInt32*) IDPTR_MEM_R)[44] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot13_B;
CANMMCAN_MIDTXSW[44] = 0;
CANMMCAN_RXCNT[44] = 0;
CANMMCAN_MIDRX[44] = 0xAC;
CANMMCAN_MIDTXS[44] = 0xAC;
CANMMCAN_RXMT[44] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[44] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[44] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[44] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot14_A */
((UInt32*) IDPTR_MEM_R)[45] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot14_A;
CANMMCAN_MIDTXSW[45] = 0;
CANMMCAN_RXCNT[45] = 0;
CANMMCAN_MIDRX[45] = 0xAD;
CANMMCAN_MIDTXS[45] = 0xAD;
CANMMCAN_RXMT[45] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[45] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[45] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[45] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot14_B */
((UInt32*) IDPTR_MEM_R)[46] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot14_B;
CANMMCAN_MIDTXSW[46] = 0;
CANMMCAN_RXCNT[46] = 0;
CANMMCAN_MIDRX[46] = 0xAE;
CANMMCAN_MIDTXS[46] = 0xAE;
CANMMCAN_RXMT[46] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[46] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[46] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[46] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot15_A */
((UInt32*) IDPTR_MEM_R)[47] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot15_A;
CANMMCAN_MIDTXSW[47] = 0;
CANMMCAN_RXCNT[47] = 0;
CANMMCAN_MIDRX[47] = 0xAF;
CANMMCAN_MIDTXS[47] = 0xAF;
CANMMCAN_RXMT[47] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[47] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[47] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[47] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot15_B */
((UInt32*) IDPTR_MEM_R)[48] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot15_B;
CANMMCAN_MIDTXSW[48] = 0;
CANMMCAN_RXCNT[48] = 0;
CANMMCAN_MIDRX[48] = 0xB0;
CANMMCAN_MIDTXS[48] = 0xB0;
CANMMCAN_RXMT[48] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[48] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[48] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[48] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot16_A */
((UInt32*) IDPTR_MEM_R)[49] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot16_A;
CANMMCAN_MIDTXSW[49] = 0;
CANMMCAN_RXCNT[49] = 0;
CANMMCAN_MIDRX[49] = 0xB1;
CANMMCAN_MIDTXS[49] = 0xB1;
CANMMCAN_RXMT[49] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[49] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[49] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[49] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot16_B */
((UInt32*) IDPTR_MEM_R)[50] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot16_B;
CANMMCAN_MIDTXSW[50] = 0;
CANMMCAN_RXCNT[50] = 0;
CANMMCAN_MIDRX[50] = 0xB2;
CANMMCAN_MIDTXS[50] = 0xB2;
CANMMCAN_RXMT[50] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[50] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[50] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[50] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot17_A */
((UInt32*) IDPTR_MEM_R)[51] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot17_A;
CANMMCAN_MIDTXSW[51] = 0;
CANMMCAN_RXCNT[51] = 0;
CANMMCAN_MIDRX[51] = 0xB3;
CANMMCAN_MIDTXS[51] = 0xB3;
CANMMCAN_RXMT[51] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[51] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[51] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[51] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot17_B */
((UInt32*) IDPTR_MEM_R)[52] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot17_B;
CANMMCAN_MIDTXSW[52] = 0;
CANMMCAN_RXCNT[52] = 0;
CANMMCAN_MIDRX[52] = 0xB4;
CANMMCAN_MIDTXS[52] = 0xB4;
CANMMCAN_RXMT[52] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[52] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[52] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[52] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot18_A */
((UInt32*) IDPTR_MEM_R)[53] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot18_A;
CANMMCAN_MIDTXSW[53] = 0;
CANMMCAN_RXCNT[53] = 0;
CANMMCAN_MIDRX[53] = 0xB5;
CANMMCAN_MIDTXS[53] = 0xB5;
CANMMCAN_RXMT[53] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[53] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[53] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[53] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot18_B */
((UInt32*) IDPTR_MEM_R)[54] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot18_B;
CANMMCAN_MIDTXSW[54] = 0;
CANMMCAN_RXCNT[54] = 0;
CANMMCAN_MIDRX[54] = 0xB6;
CANMMCAN_MIDTXS[54] = 0xB6;
CANMMCAN_RXMT[54] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[54] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[54] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[54] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot19_A */
((UInt32*) IDPTR_MEM_R)[55] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot19_A;
CANMMCAN_MIDTXSW[55] = 0;
CANMMCAN_RXCNT[55] = 0;
CANMMCAN_MIDRX[55] = 0xB7;
CANMMCAN_MIDTXS[55] = 0xB7;
CANMMCAN_RXMT[55] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[55] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[55] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[55] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot19_B */
((UInt32*) IDPTR_MEM_R)[56] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot19_B;
CANMMCAN_MIDTXSW[56] = 0;
CANMMCAN_RXCNT[56] = 0;
CANMMCAN_MIDRX[56] = 0xB8;
CANMMCAN_MIDTXS[56] = 0xB8;
CANMMCAN_RXMT[56] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[56] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[56] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[56] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot20_A */
((UInt32*) IDPTR_MEM_R)[57] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot20_A;
CANMMCAN_MIDTXSW[57] = 0;
CANMMCAN_RXCNT[57] = 0;
CANMMCAN_MIDRX[57] = 0xB9;
CANMMCAN_MIDTXS[57] = 0xB9;
CANMMCAN_RXMT[57] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[57] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[57] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[57] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot20_B */
((UInt32*) IDPTR_MEM_R)[58] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot20_B;
CANMMCAN_MIDTXSW[58] = 0;
CANMMCAN_RXCNT[58] = 0;
CANMMCAN_MIDRX[58] = 0xBA;
CANMMCAN_MIDTXS[58] = 0xBA;
CANMMCAN_RXMT[58] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[58] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[58] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[58] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot21_A */
((UInt32*) IDPTR_MEM_R)[59] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot21_A;
CANMMCAN_MIDTXSW[59] = 0;
CANMMCAN_RXCNT[59] = 0;
CANMMCAN_MIDRX[59] = 0xBB;
CANMMCAN_MIDTXS[59] = 0xBB;
CANMMCAN_RXMT[59] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[59] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[59] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[59] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot21_B */
((UInt32*) IDPTR_MEM_R)[60] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot21_B;
CANMMCAN_MIDTXSW[60] = 0;
CANMMCAN_RXCNT[60] = 0;
CANMMCAN_MIDRX[60] = 0xBC;
CANMMCAN_MIDTXS[60] = 0xBC;
CANMMCAN_RXMT[60] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[60] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[60] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[60] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot22_A */
((UInt32*) IDPTR_MEM_R)[61] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot22_A;
CANMMCAN_MIDTXSW[61] = 0;
CANMMCAN_RXCNT[61] = 0;
CANMMCAN_MIDRX[61] = 0xBD;
CANMMCAN_MIDTXS[61] = 0xBD;
CANMMCAN_RXMT[61] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[61] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[61] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[61] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot22_B */
((UInt32*) IDPTR_MEM_R)[62] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot22_B;
CANMMCAN_MIDTXSW[62] = 0;
CANMMCAN_RXCNT[62] = 0;
CANMMCAN_MIDRX[62] = 0xBE;
CANMMCAN_MIDTXS[62] = 0xBE;
CANMMCAN_RXMT[62] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[62] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[62] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[62] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot23_A */
((UInt32*) IDPTR_MEM_R)[63] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot23_A;
CANMMCAN_MIDTXSW[63] = 0;
CANMMCAN_RXCNT[63] = 0;
CANMMCAN_MIDRX[63] = 0xBF;
CANMMCAN_MIDTXS[63] = 0xBF;
CANMMCAN_RXMT[63] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[63] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[63] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[63] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot23_B */
((UInt32*) IDPTR_MEM_R)[64] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot23_B;
CANMMCAN_MIDTXSW[64] = 0;
CANMMCAN_RXCNT[64] = 0;
CANMMCAN_MIDRX[64] = 0xC0;
CANMMCAN_MIDTXS[64] = 0xC0;
CANMMCAN_RXMT[64] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[64] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[64] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[64] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot24_A */
((UInt32*) IDPTR_MEM_R)[65] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot24_A;
CANMMCAN_MIDTXSW[65] = 0;
CANMMCAN_RXCNT[65] = 0;
CANMMCAN_MIDRX[65] = 0xC1;
CANMMCAN_MIDTXS[65] = 0xC1;
CANMMCAN_RXMT[65] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[65] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[65] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[65] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot24_B */
((UInt32*) IDPTR_MEM_R)[66] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot24_B;
CANMMCAN_MIDTXSW[66] = 0;
CANMMCAN_RXCNT[66] = 0;
CANMMCAN_MIDRX[66] = 0xC2;
CANMMCAN_MIDTXS[66] = 0xC2;
CANMMCAN_RXMT[66] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[66] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[66] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[66] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot25_A */
((UInt32*) IDPTR_MEM_R)[67] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot25_A;
CANMMCAN_MIDTXSW[67] = 0;
CANMMCAN_RXCNT[67] = 0;
CANMMCAN_MIDRX[67] = 0xC3;
CANMMCAN_MIDTXS[67] = 0xC3;
CANMMCAN_RXMT[67] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[67] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[67] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[67] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot25_B */
((UInt32*) IDPTR_MEM_R)[68] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot25_B;
CANMMCAN_MIDTXSW[68] = 0;
CANMMCAN_RXCNT[68] = 0;
CANMMCAN_MIDRX[68] = 0xC4;
CANMMCAN_MIDTXS[68] = 0xC4;
CANMMCAN_RXMT[68] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[68] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[68] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[68] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot26_A */
((UInt32*) IDPTR_MEM_R)[69] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot26_A;
CANMMCAN_MIDTXSW[69] = 0;
CANMMCAN_RXCNT[69] = 0;
CANMMCAN_MIDRX[69] = 0xC5;
CANMMCAN_MIDTXS[69] = 0xC5;
CANMMCAN_RXMT[69] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[69] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[69] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[69] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot26_B */
((UInt32*) IDPTR_MEM_R)[70] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot26_B;
CANMMCAN_MIDTXSW[70] = 0;
CANMMCAN_RXCNT[70] = 0;
CANMMCAN_MIDRX[70] = 0xC6;
CANMMCAN_MIDTXS[70] = 0xC6;
CANMMCAN_RXMT[70] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[70] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[70] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[70] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot27_A */
((UInt32*) IDPTR_MEM_R)[71] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot27_A;
CANMMCAN_MIDTXSW[71] = 0;
CANMMCAN_RXCNT[71] = 0;
CANMMCAN_MIDRX[71] = 0xC7;
CANMMCAN_MIDTXS[71] = 0xC7;
CANMMCAN_RXMT[71] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[71] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[71] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[71] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot27_B */
((UInt32*) IDPTR_MEM_R)[72] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot27_B;
CANMMCAN_MIDTXSW[72] = 0;
CANMMCAN_RXCNT[72] = 0;
CANMMCAN_MIDRX[72] = 0xC8;
CANMMCAN_MIDTXS[72] = 0xC8;
CANMMCAN_RXMT[72] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[72] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[72] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[72] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot28_A */
((UInt32*) IDPTR_MEM_R)[73] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot28_A;
CANMMCAN_MIDTXSW[73] = 0;
CANMMCAN_RXCNT[73] = 0;
CANMMCAN_MIDRX[73] = 0xC9;
CANMMCAN_MIDTXS[73] = 0xC9;
CANMMCAN_RXMT[73] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[73] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[73] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[73] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot28_B */
((UInt32*) IDPTR_MEM_R)[74] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot28_B;
CANMMCAN_MIDTXSW[74] = 0;
CANMMCAN_RXCNT[74] = 0;
CANMMCAN_MIDRX[74] = 0xCA;
CANMMCAN_MIDTXS[74] = 0xCA;
CANMMCAN_RXMT[74] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[74] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[74] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[74] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot29_A */
((UInt32*) IDPTR_MEM_R)[75] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot29_A;
CANMMCAN_MIDTXSW[75] = 0;
CANMMCAN_RXCNT[75] = 0;
CANMMCAN_MIDRX[75] = 0xCB;
CANMMCAN_MIDTXS[75] = 0xCB;
CANMMCAN_RXMT[75] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[75] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[75] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[75] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot29_B */
((UInt32*) IDPTR_MEM_R)[76] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot29_B;
CANMMCAN_MIDTXSW[76] = 0;
CANMMCAN_RXCNT[76] = 0;
CANMMCAN_MIDRX[76] = 0xCC;
CANMMCAN_MIDTXS[76] = 0xCC;
CANMMCAN_RXMT[76] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[76] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[76] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[76] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot30_A */
((UInt32*) IDPTR_MEM_R)[77] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot30_A;
CANMMCAN_MIDTXSW[77] = 0;
CANMMCAN_RXCNT[77] = 0;
CANMMCAN_MIDRX[77] = 0xCD;
CANMMCAN_MIDTXS[77] = 0xCD;
CANMMCAN_RXMT[77] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[77] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[77] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[77] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot30_B */
((UInt32*) IDPTR_MEM_R)[78] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot30_B;
CANMMCAN_MIDTXSW[78] = 0;
CANMMCAN_RXCNT[78] = 0;
CANMMCAN_MIDRX[78] = 0xCE;
CANMMCAN_MIDTXS[78] = 0xCE;
CANMMCAN_RXMT[78] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[78] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[78] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[78] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot31_A */
((UInt32*) IDPTR_MEM_R)[79] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot31_A;
CANMMCAN_MIDTXSW[79] = 0;
CANMMCAN_RXCNT[79] = 0;
CANMMCAN_MIDRX[79] = 0xCF;
CANMMCAN_MIDTXS[79] = 0xCF;
CANMMCAN_RXMT[79] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[79] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[79] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[79] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot31_B */
((UInt32*) IDPTR_MEM_R)[80] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot31_B;
CANMMCAN_MIDTXSW[80] = 0;
CANMMCAN_RXCNT[80] = 0;
CANMMCAN_MIDRX[80] = 0xD0;
CANMMCAN_MIDTXS[80] = 0xD0;
CANMMCAN_RXMT[80] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[80] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[80] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[80] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot32_A */
((UInt32*) IDPTR_MEM_R)[81] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot32_A;
CANMMCAN_MIDTXSW[81] = 0;
CANMMCAN_RXCNT[81] = 0;
CANMMCAN_MIDRX[81] = 0xD1;
CANMMCAN_MIDTXS[81] = 0xD1;
CANMMCAN_RXMT[81] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[81] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[81] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[81] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot32_B */
((UInt32*) IDPTR_MEM_R)[82] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot32_B;
CANMMCAN_MIDTXSW[82] = 0;
CANMMCAN_RXCNT[82] = 0;
CANMMCAN_MIDRX[82] = 0xD2;
CANMMCAN_MIDTXS[82] = 0xD2;
CANMMCAN_RXMT[82] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[82] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[82] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[82] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot33_A */
((UInt32*) IDPTR_MEM_R)[83] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot33_A;
CANMMCAN_MIDTXSW[83] = 0;
CANMMCAN_RXCNT[83] = 0;
CANMMCAN_MIDRX[83] = 0xD3;
CANMMCAN_MIDTXS[83] = 0xD3;
CANMMCAN_RXMT[83] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[83] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[83] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[83] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot33_B */
((UInt32*) IDPTR_MEM_R)[84] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot33_B;
CANMMCAN_MIDTXSW[84] = 0;
CANMMCAN_RXCNT[84] = 0;
CANMMCAN_MIDRX[84] = 0xD4;
CANMMCAN_MIDTXS[84] = 0xD4;
CANMMCAN_RXMT[84] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[84] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[84] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[84] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot34_A */
((UInt32*) IDPTR_MEM_R)[85] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot34_A;
CANMMCAN_MIDTXSW[85] = 0;
CANMMCAN_RXCNT[85] = 0;
CANMMCAN_MIDRX[85] = 0xD5;
CANMMCAN_MIDTXS[85] = 0xD5;
CANMMCAN_RXMT[85] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[85] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[85] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[85] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot34_B */
((UInt32*) IDPTR_MEM_R)[86] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot34_B;
CANMMCAN_MIDTXSW[86] = 0;
CANMMCAN_RXCNT[86] = 0;
CANMMCAN_MIDRX[86] = 0xD6;
CANMMCAN_MIDTXS[86] = 0xD6;
CANMMCAN_RXMT[86] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[86] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[86] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[86] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot35_A */
((UInt32*) IDPTR_MEM_R)[87] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot35_A;
CANMMCAN_MIDTXSW[87] = 0;
CANMMCAN_RXCNT[87] = 0;
CANMMCAN_MIDRX[87] = 0xD7;
CANMMCAN_MIDTXS[87] = 0xD7;
CANMMCAN_RXMT[87] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[87] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[87] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[87] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot35_B */
((UInt32*) IDPTR_MEM_R)[88] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot35_B;
CANMMCAN_MIDTXSW[88] = 0;
CANMMCAN_RXCNT[88] = 0;
CANMMCAN_MIDRX[88] = 0xD8;
CANMMCAN_MIDTXS[88] = 0xD8;
CANMMCAN_RXMT[88] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[88] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[88] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[88] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot36_A */
((UInt32*) IDPTR_MEM_R)[89] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot36_A;
CANMMCAN_MIDTXSW[89] = 0;
CANMMCAN_RXCNT[89] = 0;
CANMMCAN_MIDRX[89] = 0xD9;
CANMMCAN_MIDTXS[89] = 0xD9;
CANMMCAN_RXMT[89] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[89] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[89] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[89] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot36_B */
((UInt32*) IDPTR_MEM_R)[90] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot36_B;
CANMMCAN_MIDTXSW[90] = 0;
CANMMCAN_RXCNT[90] = 0;
CANMMCAN_MIDRX[90] = 0xDA;
CANMMCAN_MIDTXS[90] = 0xDA;
CANMMCAN_RXMT[90] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[90] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[90] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[90] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot37_A */
((UInt32*) IDPTR_MEM_R)[91] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot37_A;
CANMMCAN_MIDTXSW[91] = 0;
CANMMCAN_RXCNT[91] = 0;
CANMMCAN_MIDRX[91] = 0xDB;
CANMMCAN_MIDTXS[91] = 0xDB;
CANMMCAN_RXMT[91] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[91] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[91] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[91] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot37_B */
((UInt32*) IDPTR_MEM_R)[92] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot37_B;
CANMMCAN_MIDTXSW[92] = 0;
CANMMCAN_RXCNT[92] = 0;
CANMMCAN_MIDRX[92] = 0xDC;
CANMMCAN_MIDTXS[92] = 0xDC;
CANMMCAN_RXMT[92] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[92] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[92] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[92] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot38_A */
((UInt32*) IDPTR_MEM_R)[93] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot38_A;
CANMMCAN_MIDTXSW[93] = 0;
CANMMCAN_RXCNT[93] = 0;
CANMMCAN_MIDRX[93] = 0xDD;
CANMMCAN_MIDTXS[93] = 0xDD;
CANMMCAN_RXMT[93] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[93] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[93] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[93] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot38_B */
((UInt32*) IDPTR_MEM_R)[94] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot38_B;
CANMMCAN_MIDTXSW[94] = 0;
CANMMCAN_RXCNT[94] = 0;
CANMMCAN_MIDRX[94] = 0xDE;
CANMMCAN_MIDTXS[94] = 0xDE;
CANMMCAN_RXMT[94] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[94] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[94] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[94] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot39_A */
((UInt32*) IDPTR_MEM_R)[95] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot39_A;
CANMMCAN_MIDTXSW[95] = 0;
CANMMCAN_RXCNT[95] = 0;
CANMMCAN_MIDRX[95] = 0xDF;
CANMMCAN_MIDTXS[95] = 0xDF;
CANMMCAN_RXMT[95] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[95] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[95] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[95] = 6;  /* 0: standard, 1:extended */ 



/* ICM_Object_Prot39_B */
((UInt32*) IDPTR_MEM_R)[96] = (UInt32) RTICANMM_MAIN_CAN_copy_ICM_Object_Prot39_B;
CANMMCAN_MIDTXSW[96] = 0;
CANMMCAN_RXCNT[96] = 0;
CANMMCAN_MIDRX[96] = 0xE0;
CANMMCAN_MIDTXS[96] = 0xE0;
CANMMCAN_RXMT[96] = RTICANMM_MESSAGE_TYPE_FD_STD;
CANMMCAN_MIDFRX[96] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTXS[96] = 6;  /* 0: standard, 1:extended */ 
CANMMCAN_MIDFTX[96] = 6;  /* 0: standard, 1:extended */ 
 
 


