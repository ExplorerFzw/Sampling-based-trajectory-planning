/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_MESSAGE_DEFAULTS */
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

CANMMCAN_MAXMSGPERSTEP = 0;

/* DefaultGlobalEnable */
CANMMCAN_GEIN = 1;


/* Feedthrough debug variable*/
CANMMCAN_FTD = 0;
CANMMCAN_RTVE = 1;


/* ICM_Common_Prot_A */
CANMMCAN_RXCT1 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[0] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[0] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[0] = 0; /* RX Error */
CANMMCAN_RXLEN[0] = 64; /* RX Message Length */


/* ICM_Common_Prot_B */
CANMMCAN_RXCT2 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[1] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[1] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[1] = 0; /* RX Error */
CANMMCAN_RXLEN[1] = 64; /* RX Message Length */


/* ICM_Lanes_Adja_Prot_A */
CANMMCAN_RXCT3 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[7] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[7] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[7] = 0; /* RX Error */
CANMMCAN_RXLEN[7] = 64; /* RX Message Length */


/* ICM_Lanes_Adja_Prot_B */
CANMMCAN_RXCT4 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[8] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[8] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[8] = 0; /* RX Error */
CANMMCAN_RXLEN[8] = 64; /* RX Message Length */


/* ICM_Lanes_Adja_Prot_C */
CANMMCAN_RXCT5 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[9] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[9] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[9] = 0; /* RX Error */
CANMMCAN_RXLEN[9] = 64; /* RX Message Length */


/* ICM_Lanes_Adja_Prot_D */
CANMMCAN_RXCT6 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[10] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[10] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[10] = 0; /* RX Error */
CANMMCAN_RXLEN[10] = 64; /* RX Message Length */


/* ICM_Lanes_Adja_Prot_Header */
CANMMCAN_RXCT7 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[6] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[6] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[6] = 0; /* RX Error */
CANMMCAN_RXLEN[6] = 64; /* RX Message Length */


/* ICM_Lanes_Host_Prot_A_1 */
CANMMCAN_RXCT8 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[2] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[2] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[2] = 0; /* RX Error */
CANMMCAN_RXLEN[2] = 64; /* RX Message Length */


/* ICM_Lanes_Host_Prot_A_2 */
CANMMCAN_RXCT9 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[3] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[3] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[3] = 0; /* RX Error */
CANMMCAN_RXLEN[3] = 64; /* RX Message Length */


/* ICM_Lanes_Host_Prot_B_1 */
CANMMCAN_RXCT10 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[4] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[4] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[4] = 0; /* RX Error */
CANMMCAN_RXLEN[4] = 64; /* RX Message Length */


/* ICM_Lanes_Host_Prot_B_2 */
CANMMCAN_RXCT11 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[5] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[5] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[5] = 0; /* RX Error */
CANMMCAN_RXLEN[5] = 64; /* RX Message Length */


/* ICM_Lanes_Host_Prot_Header */
CANMMCAN_RXCT12 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[11] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[11] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[11] = 0; /* RX Error */
CANMMCAN_RXLEN[11] = 64; /* RX Message Length */


/* ICM_Lanes_Road_Edge_Prot_A */
CANMMCAN_RXCT13 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[13] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[13] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[13] = 0; /* RX Error */
CANMMCAN_RXLEN[13] = 64; /* RX Message Length */


/* ICM_Lanes_Road_Edge_Prot_B */
CANMMCAN_RXCT14 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[14] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[14] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[14] = 0; /* RX Error */
CANMMCAN_RXLEN[14] = 64; /* RX Message Length */


/* ICM_Lanes_Road_Edge_Prot_C */
CANMMCAN_RXCT15 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[15] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[15] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[15] = 0; /* RX Error */
CANMMCAN_RXLEN[15] = 64; /* RX Message Length */


/* ICM_Lanes_Road_Edge_Prot_Header */
CANMMCAN_RXCT16 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[12] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[12] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[12] = 0; /* RX Error */
CANMMCAN_RXLEN[12] = 64; /* RX Message Length */


/* ICM_Object_Prot0_A */
CANMMCAN_RXCT17 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[17] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[17] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[17] = 0; /* RX Error */
CANMMCAN_RXLEN[17] = 64; /* RX Message Length */


/* ICM_Object_Prot0_B */
CANMMCAN_RXCT18 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[18] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[18] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[18] = 0; /* RX Error */
CANMMCAN_RXLEN[18] = 64; /* RX Message Length */


/* ICM_Object_Prot10_A */
CANMMCAN_RXCT19 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[37] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[37] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[37] = 0; /* RX Error */
CANMMCAN_RXLEN[37] = 64; /* RX Message Length */


/* ICM_Object_Prot10_B */
CANMMCAN_RXCT20 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[38] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[38] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[38] = 0; /* RX Error */
CANMMCAN_RXLEN[38] = 64; /* RX Message Length */


/* ICM_Object_Prot11_A */
CANMMCAN_RXCT21 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[39] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[39] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[39] = 0; /* RX Error */
CANMMCAN_RXLEN[39] = 64; /* RX Message Length */


/* ICM_Object_Prot11_B */
CANMMCAN_RXCT22 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[40] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[40] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[40] = 0; /* RX Error */
CANMMCAN_RXLEN[40] = 64; /* RX Message Length */


/* ICM_Object_Prot12_A */
CANMMCAN_RXCT23 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[41] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[41] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[41] = 0; /* RX Error */
CANMMCAN_RXLEN[41] = 64; /* RX Message Length */


/* ICM_Object_Prot12_B */
CANMMCAN_RXCT24 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[42] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[42] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[42] = 0; /* RX Error */
CANMMCAN_RXLEN[42] = 64; /* RX Message Length */


/* ICM_Object_Prot13_A */
CANMMCAN_RXCT25 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[43] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[43] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[43] = 0; /* RX Error */
CANMMCAN_RXLEN[43] = 64; /* RX Message Length */


/* ICM_Object_Prot13_B */
CANMMCAN_RXCT26 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[44] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[44] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[44] = 0; /* RX Error */
CANMMCAN_RXLEN[44] = 64; /* RX Message Length */


/* ICM_Object_Prot14_A */
CANMMCAN_RXCT27 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[45] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[45] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[45] = 0; /* RX Error */
CANMMCAN_RXLEN[45] = 64; /* RX Message Length */


/* ICM_Object_Prot14_B */
CANMMCAN_RXCT28 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[46] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[46] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[46] = 0; /* RX Error */
CANMMCAN_RXLEN[46] = 64; /* RX Message Length */


/* ICM_Object_Prot15_A */
CANMMCAN_RXCT29 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[47] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[47] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[47] = 0; /* RX Error */
CANMMCAN_RXLEN[47] = 64; /* RX Message Length */


/* ICM_Object_Prot15_B */
CANMMCAN_RXCT30 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[48] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[48] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[48] = 0; /* RX Error */
CANMMCAN_RXLEN[48] = 64; /* RX Message Length */


/* ICM_Object_Prot16_A */
CANMMCAN_RXCT31 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[49] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[49] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[49] = 0; /* RX Error */
CANMMCAN_RXLEN[49] = 64; /* RX Message Length */


/* ICM_Object_Prot16_B */
CANMMCAN_RXCT32 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[50] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[50] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[50] = 0; /* RX Error */
CANMMCAN_RXLEN[50] = 64; /* RX Message Length */


/* ICM_Object_Prot17_A */
CANMMCAN_RXCT33 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[51] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[51] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[51] = 0; /* RX Error */
CANMMCAN_RXLEN[51] = 64; /* RX Message Length */


/* ICM_Object_Prot17_B */
CANMMCAN_RXCT34 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[52] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[52] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[52] = 0; /* RX Error */
CANMMCAN_RXLEN[52] = 64; /* RX Message Length */


/* ICM_Object_Prot18_A */
CANMMCAN_RXCT35 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[53] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[53] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[53] = 0; /* RX Error */
CANMMCAN_RXLEN[53] = 64; /* RX Message Length */


/* ICM_Object_Prot18_B */
CANMMCAN_RXCT36 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[54] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[54] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[54] = 0; /* RX Error */
CANMMCAN_RXLEN[54] = 64; /* RX Message Length */


/* ICM_Object_Prot19_A */
CANMMCAN_RXCT37 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[55] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[55] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[55] = 0; /* RX Error */
CANMMCAN_RXLEN[55] = 64; /* RX Message Length */


/* ICM_Object_Prot19_B */
CANMMCAN_RXCT38 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[56] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[56] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[56] = 0; /* RX Error */
CANMMCAN_RXLEN[56] = 64; /* RX Message Length */


/* ICM_Object_Prot1_A */
CANMMCAN_RXCT39 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[19] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[19] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[19] = 0; /* RX Error */
CANMMCAN_RXLEN[19] = 64; /* RX Message Length */


/* ICM_Object_Prot1_B */
CANMMCAN_RXCT40 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[20] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[20] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[20] = 0; /* RX Error */
CANMMCAN_RXLEN[20] = 64; /* RX Message Length */


/* ICM_Object_Prot20_A */
CANMMCAN_RXCT41 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[57] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[57] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[57] = 0; /* RX Error */
CANMMCAN_RXLEN[57] = 64; /* RX Message Length */


/* ICM_Object_Prot20_B */
CANMMCAN_RXCT42 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[58] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[58] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[58] = 0; /* RX Error */
CANMMCAN_RXLEN[58] = 64; /* RX Message Length */


/* ICM_Object_Prot21_A */
CANMMCAN_RXCT43 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[59] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[59] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[59] = 0; /* RX Error */
CANMMCAN_RXLEN[59] = 64; /* RX Message Length */


/* ICM_Object_Prot21_B */
CANMMCAN_RXCT44 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[60] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[60] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[60] = 0; /* RX Error */
CANMMCAN_RXLEN[60] = 64; /* RX Message Length */


/* ICM_Object_Prot22_A */
CANMMCAN_RXCT45 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[61] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[61] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[61] = 0; /* RX Error */
CANMMCAN_RXLEN[61] = 64; /* RX Message Length */


/* ICM_Object_Prot22_B */
CANMMCAN_RXCT46 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[62] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[62] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[62] = 0; /* RX Error */
CANMMCAN_RXLEN[62] = 64; /* RX Message Length */


/* ICM_Object_Prot23_A */
CANMMCAN_RXCT47 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[63] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[63] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[63] = 0; /* RX Error */
CANMMCAN_RXLEN[63] = 64; /* RX Message Length */


/* ICM_Object_Prot23_B */
CANMMCAN_RXCT48 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[64] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[64] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[64] = 0; /* RX Error */
CANMMCAN_RXLEN[64] = 64; /* RX Message Length */


/* ICM_Object_Prot24_A */
CANMMCAN_RXCT49 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[65] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[65] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[65] = 0; /* RX Error */
CANMMCAN_RXLEN[65] = 64; /* RX Message Length */


/* ICM_Object_Prot24_B */
CANMMCAN_RXCT50 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[66] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[66] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[66] = 0; /* RX Error */
CANMMCAN_RXLEN[66] = 64; /* RX Message Length */


/* ICM_Object_Prot25_A */
CANMMCAN_RXCT51 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[67] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[67] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[67] = 0; /* RX Error */
CANMMCAN_RXLEN[67] = 64; /* RX Message Length */


/* ICM_Object_Prot25_B */
CANMMCAN_RXCT52 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[68] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[68] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[68] = 0; /* RX Error */
CANMMCAN_RXLEN[68] = 64; /* RX Message Length */


/* ICM_Object_Prot26_A */
CANMMCAN_RXCT53 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[69] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[69] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[69] = 0; /* RX Error */
CANMMCAN_RXLEN[69] = 64; /* RX Message Length */


/* ICM_Object_Prot26_B */
CANMMCAN_RXCT54 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[70] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[70] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[70] = 0; /* RX Error */
CANMMCAN_RXLEN[70] = 64; /* RX Message Length */


/* ICM_Object_Prot27_A */
CANMMCAN_RXCT55 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[71] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[71] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[71] = 0; /* RX Error */
CANMMCAN_RXLEN[71] = 64; /* RX Message Length */


/* ICM_Object_Prot27_B */
CANMMCAN_RXCT56 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[72] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[72] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[72] = 0; /* RX Error */
CANMMCAN_RXLEN[72] = 64; /* RX Message Length */


/* ICM_Object_Prot28_A */
CANMMCAN_RXCT57 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[73] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[73] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[73] = 0; /* RX Error */
CANMMCAN_RXLEN[73] = 64; /* RX Message Length */


/* ICM_Object_Prot28_B */
CANMMCAN_RXCT58 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[74] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[74] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[74] = 0; /* RX Error */
CANMMCAN_RXLEN[74] = 64; /* RX Message Length */


/* ICM_Object_Prot29_A */
CANMMCAN_RXCT59 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[75] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[75] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[75] = 0; /* RX Error */
CANMMCAN_RXLEN[75] = 64; /* RX Message Length */


/* ICM_Object_Prot29_B */
CANMMCAN_RXCT60 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[76] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[76] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[76] = 0; /* RX Error */
CANMMCAN_RXLEN[76] = 64; /* RX Message Length */


/* ICM_Object_Prot2_A */
CANMMCAN_RXCT61 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[21] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[21] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[21] = 0; /* RX Error */
CANMMCAN_RXLEN[21] = 64; /* RX Message Length */


/* ICM_Object_Prot2_B */
CANMMCAN_RXCT62 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[22] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[22] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[22] = 0; /* RX Error */
CANMMCAN_RXLEN[22] = 64; /* RX Message Length */


/* ICM_Object_Prot30_A */
CANMMCAN_RXCT63 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[77] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[77] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[77] = 0; /* RX Error */
CANMMCAN_RXLEN[77] = 64; /* RX Message Length */


/* ICM_Object_Prot30_B */
CANMMCAN_RXCT64 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[78] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[78] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[78] = 0; /* RX Error */
CANMMCAN_RXLEN[78] = 64; /* RX Message Length */


/* ICM_Object_Prot31_A */
CANMMCAN_RXCT65 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[79] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[79] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[79] = 0; /* RX Error */
CANMMCAN_RXLEN[79] = 64; /* RX Message Length */


/* ICM_Object_Prot31_B */
CANMMCAN_RXCT66 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[80] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[80] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[80] = 0; /* RX Error */
CANMMCAN_RXLEN[80] = 64; /* RX Message Length */


/* ICM_Object_Prot32_A */
CANMMCAN_RXCT67 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[81] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[81] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[81] = 0; /* RX Error */
CANMMCAN_RXLEN[81] = 64; /* RX Message Length */


/* ICM_Object_Prot32_B */
CANMMCAN_RXCT68 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[82] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[82] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[82] = 0; /* RX Error */
CANMMCAN_RXLEN[82] = 64; /* RX Message Length */


/* ICM_Object_Prot33_A */
CANMMCAN_RXCT69 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[83] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[83] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[83] = 0; /* RX Error */
CANMMCAN_RXLEN[83] = 64; /* RX Message Length */


/* ICM_Object_Prot33_B */
CANMMCAN_RXCT70 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[84] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[84] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[84] = 0; /* RX Error */
CANMMCAN_RXLEN[84] = 64; /* RX Message Length */


/* ICM_Object_Prot34_A */
CANMMCAN_RXCT71 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[85] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[85] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[85] = 0; /* RX Error */
CANMMCAN_RXLEN[85] = 64; /* RX Message Length */


/* ICM_Object_Prot34_B */
CANMMCAN_RXCT72 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[86] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[86] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[86] = 0; /* RX Error */
CANMMCAN_RXLEN[86] = 64; /* RX Message Length */


/* ICM_Object_Prot35_A */
CANMMCAN_RXCT73 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[87] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[87] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[87] = 0; /* RX Error */
CANMMCAN_RXLEN[87] = 64; /* RX Message Length */


/* ICM_Object_Prot35_B */
CANMMCAN_RXCT74 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[88] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[88] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[88] = 0; /* RX Error */
CANMMCAN_RXLEN[88] = 64; /* RX Message Length */


/* ICM_Object_Prot36_A */
CANMMCAN_RXCT75 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[89] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[89] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[89] = 0; /* RX Error */
CANMMCAN_RXLEN[89] = 64; /* RX Message Length */


/* ICM_Object_Prot36_B */
CANMMCAN_RXCT76 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[90] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[90] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[90] = 0; /* RX Error */
CANMMCAN_RXLEN[90] = 64; /* RX Message Length */


/* ICM_Object_Prot37_A */
CANMMCAN_RXCT77 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[91] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[91] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[91] = 0; /* RX Error */
CANMMCAN_RXLEN[91] = 64; /* RX Message Length */


/* ICM_Object_Prot37_B */
CANMMCAN_RXCT78 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[92] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[92] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[92] = 0; /* RX Error */
CANMMCAN_RXLEN[92] = 64; /* RX Message Length */


/* ICM_Object_Prot38_A */
CANMMCAN_RXCT79 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[93] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[93] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[93] = 0; /* RX Error */
CANMMCAN_RXLEN[93] = 64; /* RX Message Length */


/* ICM_Object_Prot38_B */
CANMMCAN_RXCT80 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[94] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[94] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[94] = 0; /* RX Error */
CANMMCAN_RXLEN[94] = 64; /* RX Message Length */


/* ICM_Object_Prot39_A */
CANMMCAN_RXCT81 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[95] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[95] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[95] = 0; /* RX Error */
CANMMCAN_RXLEN[95] = 64; /* RX Message Length */


/* ICM_Object_Prot39_B */
CANMMCAN_RXCT82 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[96] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[96] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[96] = 0; /* RX Error */
CANMMCAN_RXLEN[96] = 64; /* RX Message Length */


/* ICM_Object_Prot3_A */
CANMMCAN_RXCT83 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[23] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[23] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[23] = 0; /* RX Error */
CANMMCAN_RXLEN[23] = 64; /* RX Message Length */


/* ICM_Object_Prot3_B */
CANMMCAN_RXCT84 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[24] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[24] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[24] = 0; /* RX Error */
CANMMCAN_RXLEN[24] = 64; /* RX Message Length */


/* ICM_Object_Prot4_A */
CANMMCAN_RXCT85 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[25] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[25] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[25] = 0; /* RX Error */
CANMMCAN_RXLEN[25] = 64; /* RX Message Length */


/* ICM_Object_Prot4_B */
CANMMCAN_RXCT86 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[26] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[26] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[26] = 0; /* RX Error */
CANMMCAN_RXLEN[26] = 64; /* RX Message Length */


/* ICM_Object_Prot5_A */
CANMMCAN_RXCT87 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[27] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[27] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[27] = 0; /* RX Error */
CANMMCAN_RXLEN[27] = 64; /* RX Message Length */


/* ICM_Object_Prot5_B */
CANMMCAN_RXCT88 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[28] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[28] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[28] = 0; /* RX Error */
CANMMCAN_RXLEN[28] = 64; /* RX Message Length */


/* ICM_Object_Prot6_A */
CANMMCAN_RXCT89 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[29] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[29] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[29] = 0; /* RX Error */
CANMMCAN_RXLEN[29] = 64; /* RX Message Length */


/* ICM_Object_Prot6_B */
CANMMCAN_RXCT90 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[30] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[30] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[30] = 0; /* RX Error */
CANMMCAN_RXLEN[30] = 64; /* RX Message Length */


/* ICM_Object_Prot7_A */
CANMMCAN_RXCT91 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[31] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[31] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[31] = 0; /* RX Error */
CANMMCAN_RXLEN[31] = 64; /* RX Message Length */


/* ICM_Object_Prot7_B */
CANMMCAN_RXCT92 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[32] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[32] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[32] = 0; /* RX Error */
CANMMCAN_RXLEN[32] = 64; /* RX Message Length */


/* ICM_Object_Prot8_A */
CANMMCAN_RXCT93 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[33] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[33] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[33] = 0; /* RX Error */
CANMMCAN_RXLEN[33] = 64; /* RX Message Length */


/* ICM_Object_Prot8_B */
CANMMCAN_RXCT94 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[34] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[34] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[34] = 0; /* RX Error */
CANMMCAN_RXLEN[34] = 64; /* RX Message Length */


/* ICM_Object_Prot9_A */
CANMMCAN_RXCT95 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[35] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[35] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[35] = 0; /* RX Error */
CANMMCAN_RXLEN[35] = 64; /* RX Message Length */


/* ICM_Object_Prot9_B */
CANMMCAN_RXCT96 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[36] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[36] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[36] = 0; /* RX Error */
CANMMCAN_RXLEN[36] = 64; /* RX Message Length */


/* ICM_Object_Prot_Header */
CANMMCAN_RXCT97 = 0; /* RX CycleTime[s] */
CANMMCAN_RXdt[16] = 0; /* RX DeltaTime[s] */
CANMMCAN_RXt[16] = 0.0; /* RX Time[s] */
CANMMCAN_RXerr[16] = 0; /* RX Error */
CANMMCAN_RXLEN[16] = 64; /* RX Message Length */


/* ECU ENABLE */



