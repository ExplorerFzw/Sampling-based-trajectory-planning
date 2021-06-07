/*****************************************************************************************************************************/
/* RTICANMM_MAIN_CAN_DEFS */
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


/*********
 *  ICM_Common_Prot_A - 1
 *     ICM_Common_Prot_A.ICM_Common_Prot_A_Header - 1
 *     ICM_Common_Prot_A.COM_Zero_byte - 2
 *     ICM_Common_Prot_A.COM_CRC - 3
 *     ICM_Common_Prot_A.COM_Protocol_Version - 4
 *     ICM_Common_Prot_A.COM_Sync_Frame_ID - 5
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_1 - 6
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_2 - 7
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_3 - 8
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_4 - 9
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_5 - 10
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_6 - 11
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_7 - 12
 *     ICM_Common_Prot_A.COM_Frame_MCU_TS_Start_8 - 13
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_1 - 14
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_2 - 15
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_3 - 16
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_4 - 17
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_5 - 18
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_6 - 19
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_7 - 20
 *     ICM_Common_Prot_A.COM_Last_MCU_Sync_TS_8 - 21
 *     ICM_Common_Prot_A.COM_Last_Clock_Sync_Skew - 22
 *     ICM_Common_Prot_A.COM_Last_Clock_Sync_Error - 23
 *     ICM_Common_Prot_A.COM_EyeQ_Frame_ID - 24
 *     ICM_Common_Prot_A.COM_Cam_Frame_ID - 25
 *     ICM_Common_Prot_A.COM_DayTime_Indicator - 26
 *     ICM_Common_Prot_A.COM_HIL_Mode_Status - 27
 *     ICM_Common_Prot_A.COM_Exposure_Type - 28
 *     ICM_Common_Prot_A.COM_Region_Code_V - 29
 *     ICM_Common_Prot_A.COM_Region_Code - 30
 *     ICM_Common_Prot_A.COM_Driving_Side_V - 31
 *     ICM_Common_Prot_A.COM_Driving_Side - 32
 *     ICM_Common_Prot_A.COM_Is_HighSpeed_Road_V - 33
 *     ICM_Common_Prot_A.COM_Is_HighSpeed_Road - 34
 */

/*********
 *  ICM_Common_Prot_B - 2
 *     ICM_Common_Prot_B.ICM_Common_Prot_B_Header - 1
 *     ICM_Common_Prot_B.COM_SCA_Mean_X - 2
 *     ICM_Common_Prot_B.COM_SCA_Mean_Y - 3
 *     ICM_Common_Prot_B.COM_SCA_Cov_X_X - 4
 *     ICM_Common_Prot_B.COM_SCA_Cov_X_Y - 5
 *     ICM_Common_Prot_B.COM_SCA_Cov_Y_Y - 6
 *     ICM_Common_Prot_B.COM_SCA_Weight - 7
 *     ICM_Common_Prot_B.COM_SCA_Factor_Mean - 8
 *     ICM_Common_Prot_B.COM_SCA_Factor_Variance - 9
 *     ICM_Common_Prot_B.ICM_Common_Prot_B_CRC - 10
 */

/*********
 *  ICM_Lanes_Adja_Prot_A - 3
 *     ICM_Lanes_Adja_Prot_A.ICM_La_Adja_Prot_A_Header - 1
 *     ICM_Lanes_Adja_Prot_A.LA_Lane_Track_ID_0 - 2
 *     ICM_Lanes_Adja_Prot_A.LA_Age_0 - 3
 *     ICM_Lanes_Adja_Prot_A.LA_Exist_Probability_0 - 4
 *     ICM_Lanes_Adja_Prot_A.LA_Color_0 - 5
 *     ICM_Lanes_Adja_Prot_A.LA_Color_Conf_0 - 6
 *     ICM_Lanes_Adja_Prot_A.LA_Prediction_Type_0 - 7
 *     ICM_Lanes_Adja_Prot_A.LA_Prediction_Source_0 - 8
 *     ICM_Lanes_Adja_Prot_A.LA_View_Range_Start_0 - 9
 *     ICM_Lanes_Adja_Prot_A.LA_View_Range_End_0 - 10
 *     ICM_Lanes_Adja_Prot_A.LA_Measured_VR_End_0 - 11
 *     ICM_Lanes_Adja_Prot_A.LA_Lanemark_Type_0 - 12
 *     ICM_Lanes_Adja_Prot_A.LA_DLM_Type_0 - 13
 *     ICM_Lanes_Adja_Prot_A.LA_Lanemark_Type_Conf_0 - 14
 *     ICM_Lanes_Adja_Prot_A.LA_Line_Role_0 - 15
 *     ICM_Lanes_Adja_Prot_A.LA_Marker_Width_0 - 16
 *     ICM_Lanes_Adja_Prot_A.LA_Marker_Width_STD_0 - 17
 *     ICM_Lanes_Adja_Prot_A.LA_Line_C3_0 - 18
 *     ICM_Lanes_Adja_Prot_A.LA_Line_C2_0 - 19
 *     ICM_Lanes_Adja_Prot_A.LA_Line_C1_0 - 20
 *     ICM_Lanes_Adja_Prot_A.LA_Line_C0_0 - 21
 */

/*********
 *  ICM_Lanes_Adja_Prot_B - 4
 *     ICM_Lanes_Adja_Prot_B.ICM_La_Adja_Prot_B_Header - 1
 *     ICM_Lanes_Adja_Prot_B.LA_Lane_Track_ID_1 - 2
 *     ICM_Lanes_Adja_Prot_B.LA_Age_1 - 3
 *     ICM_Lanes_Adja_Prot_B.LA_Exist_Probability_1 - 4
 *     ICM_Lanes_Adja_Prot_B.LA_Color_1 - 5
 *     ICM_Lanes_Adja_Prot_B.LA_Color_Conf_1 - 6
 *     ICM_Lanes_Adja_Prot_B.LA_Prediction_Type_1 - 7
 *     ICM_Lanes_Adja_Prot_B.LA_Prediction_Source_1 - 8
 *     ICM_Lanes_Adja_Prot_B.LA_View_Range_Start_1 - 9
 *     ICM_Lanes_Adja_Prot_B.LA_View_Range_End_1 - 10
 *     ICM_Lanes_Adja_Prot_B.LA_Measured_VR_End_1 - 11
 *     ICM_Lanes_Adja_Prot_B.LA_Lanemark_Type_1 - 12
 *     ICM_Lanes_Adja_Prot_B.LA_DLM_Type_1 - 13
 *     ICM_Lanes_Adja_Prot_B.LA_Lanemark_Type_Conf_1 - 14
 *     ICM_Lanes_Adja_Prot_B.LA_Line_Role_1 - 15
 *     ICM_Lanes_Adja_Prot_B.LA_Marker_Width_1 - 16
 *     ICM_Lanes_Adja_Prot_B.LA_Marker_Width_STD_1 - 17
 *     ICM_Lanes_Adja_Prot_B.LA_Line_C3_1 - 18
 *     ICM_Lanes_Adja_Prot_B.LA_Line_C2_1 - 19
 *     ICM_Lanes_Adja_Prot_B.LA_Line_C1_1 - 20
 *     ICM_Lanes_Adja_Prot_B.LA_Line_C0_1 - 21
 */

/*********
 *  ICM_Lanes_Adja_Prot_C - 5
 *     ICM_Lanes_Adja_Prot_C.ICM_La_Adja_Prot_C_Header - 1
 *     ICM_Lanes_Adja_Prot_C.LA_Lane_Track_ID_2 - 2
 *     ICM_Lanes_Adja_Prot_C.LA_Age_2 - 3
 *     ICM_Lanes_Adja_Prot_C.LA_Exist_Probability_2 - 4
 *     ICM_Lanes_Adja_Prot_C.LA_Color_2 - 5
 *     ICM_Lanes_Adja_Prot_C.LA_Color_Conf_2 - 6
 *     ICM_Lanes_Adja_Prot_C.LA_Prediction_Type_2 - 7
 *     ICM_Lanes_Adja_Prot_C.LA_Prediction_Source_2 - 8
 *     ICM_Lanes_Adja_Prot_C.LA_View_Range_Start_2 - 9
 *     ICM_Lanes_Adja_Prot_C.LA_View_Range_End_2 - 10
 *     ICM_Lanes_Adja_Prot_C.LA_Measured_VR_End_2 - 11
 *     ICM_Lanes_Adja_Prot_C.LA_Lanemark_Type_2 - 12
 *     ICM_Lanes_Adja_Prot_C.LA_DLM_Type_2 - 13
 *     ICM_Lanes_Adja_Prot_C.LA_Lanemark_Type_Conf_2 - 14
 *     ICM_Lanes_Adja_Prot_C.LA_Line_Role_2 - 15
 *     ICM_Lanes_Adja_Prot_C.LA_Marker_Width_2 - 16
 *     ICM_Lanes_Adja_Prot_C.LA_Marker_Width_STD_2 - 17
 *     ICM_Lanes_Adja_Prot_C.LA_Line_C3_2 - 18
 *     ICM_Lanes_Adja_Prot_C.LA_Line_C2_2 - 19
 *     ICM_Lanes_Adja_Prot_C.LA_Line_C1_2 - 20
 *     ICM_Lanes_Adja_Prot_C.LA_Line_C0_2 - 21
 */

/*********
 *  ICM_Lanes_Adja_Prot_D - 6
 *     ICM_Lanes_Adja_Prot_D.ICM_La_Adja_Prot_D_Header - 1
 *     ICM_Lanes_Adja_Prot_D.LA_Lane_Track_ID_3 - 2
 *     ICM_Lanes_Adja_Prot_D.LA_Age_3 - 3
 *     ICM_Lanes_Adja_Prot_D.LA_Exist_Probability_3 - 4
 *     ICM_Lanes_Adja_Prot_D.LA_Color_3 - 5
 *     ICM_Lanes_Adja_Prot_D.LA_Color_Conf_3 - 6
 *     ICM_Lanes_Adja_Prot_D.LA_Prediction_Type_3 - 7
 *     ICM_Lanes_Adja_Prot_D.LA_Prediction_Source_3 - 8
 *     ICM_Lanes_Adja_Prot_D.LA_View_Range_Start_3 - 9
 *     ICM_Lanes_Adja_Prot_D.LA_View_Range_End_3 - 10
 *     ICM_Lanes_Adja_Prot_D.LA_Measured_VR_End_3 - 11
 *     ICM_Lanes_Adja_Prot_D.LA_Lanemark_Type_3 - 12
 *     ICM_Lanes_Adja_Prot_D.LA_DLM_Type_3 - 13
 *     ICM_Lanes_Adja_Prot_D.LA_Lanemark_Type_Conf_3 - 14
 *     ICM_Lanes_Adja_Prot_D.LA_Line_Role_3 - 15
 *     ICM_Lanes_Adja_Prot_D.LA_Marker_Width_3 - 16
 *     ICM_Lanes_Adja_Prot_D.LA_Marker_Width_STD_3 - 17
 *     ICM_Lanes_Adja_Prot_D.LA_Line_C3_3 - 18
 *     ICM_Lanes_Adja_Prot_D.LA_Line_C2_3 - 19
 *     ICM_Lanes_Adja_Prot_D.LA_Line_C1_3 - 20
 *     ICM_Lanes_Adja_Prot_D.LA_Line_C0_3 - 21
 *     ICM_Lanes_Adja_Prot_D.ICM_La_Adja_Prot_D_CRC - 22
 */

/*********
 *  ICM_Lanes_Adja_Prot_Header - 7
 *     ICM_Lanes_Adja_Prot_Header.ICM_La_Adja_Prot_Head_Header - 1
 *     ICM_Lanes_Adja_Prot_Header.LA_Zero_byte - 2
 *     ICM_Lanes_Adja_Prot_Header.LA_Protocol_Version - 3
 *     ICM_Lanes_Adja_Prot_Header.LA_Sync_ID - 4
 *     ICM_Lanes_Adja_Prot_Header.LA_Adjacent_Count - 5
 *     ICM_Lanes_Adja_Prot_Header.LA_Header_Buffer - 6
 */

/*********
 *  ICM_Lanes_Host_Prot_A_1 - 8
 *     ICM_Lanes_Host_Prot_A_1.ICM_La_Host_Prot_A_1_Header - 1
 *     ICM_Lanes_Host_Prot_A_1.LH_CRC_0 - 2
 *     ICM_Lanes_Host_Prot_A_1.LH_Is_Triggered_SDM_Type_0 - 3
 *     ICM_Lanes_Host_Prot_A_1.LH_Is_Triggered_SDM_Model_0 - 4
 *     ICM_Lanes_Host_Prot_A_1.LH_Track_ID_0 - 5
 *     ICM_Lanes_Host_Prot_A_1.LH_Age_0 - 6
 *     ICM_Lanes_Host_Prot_A_1.LH_Existence_Probability_0 - 7
 *     ICM_Lanes_Host_Prot_A_1.LH_Prediction_Source_0 - 8
 *     ICM_Lanes_Host_Prot_A_1.LH_Prediction_Type_0 - 9
 *     ICM_Lanes_Host_Prot_A_1.LH_Color_0 - 10
 *     ICM_Lanes_Host_Prot_A_1.LH_Color_Confidence_0 - 11
 *     ICM_Lanes_Host_Prot_A_1.LH_Lanemark_Type_0 - 12
 *     ICM_Lanes_Host_Prot_A_1.LH_DLM_Type_0 - 13
 *     ICM_Lanes_Host_Prot_A_1.LH_DECEL_Type_0 - 14
 *     ICM_Lanes_Host_Prot_A_1.LH_Lanemark_Type_Conf_0 - 15
 *     ICM_Lanes_Host_Prot_A_1.LH_Side_0 - 16
 *     ICM_Lanes_Host_Prot_A_1.LH_Crossing_0 - 17
 *     ICM_Lanes_Host_Prot_A_1.LH_Marker_Width_0 - 18
 *     ICM_Lanes_Host_Prot_A_1.LH_Marker_Width_STD_0 - 19
 *     ICM_Lanes_Host_Prot_A_1.LH_Dash_Average_Length_0 - 20
 *     ICM_Lanes_Host_Prot_A_1.LH_Dash_Average_Gap_0 - 21
 *     ICM_Lanes_Host_Prot_A_1.LH_Is_Multi_Clothoid_0 - 22
 *     ICM_Lanes_Host_Prot_A_1.LH_Line_First_C0_0 - 23
 *     ICM_Lanes_Host_Prot_A_1.LH_Line_First_C1_0 - 24
 *     ICM_Lanes_Host_Prot_A_1.LH_Line_First_C2_0 - 25
 *     ICM_Lanes_Host_Prot_A_1.LH_Line_First_C3_0 - 26
 *     ICM_Lanes_Host_Prot_A_1.LH_First_VR_Start_0 - 27
 *     ICM_Lanes_Host_Prot_A_1.LH_First_VR_End_0 - 28
 *     ICM_Lanes_Host_Prot_A_1.LH_First_Measured_VR_End_0 - 29
 *     ICM_Lanes_Host_Prot_A_1.LH_Second_Measured_VR_End_0 - 30
 */

/*********
 *  ICM_Lanes_Host_Prot_A_2 - 9
 *     ICM_Lanes_Host_Prot_A_2.ICM_La_Host_Prot_A_2_Header - 1
 *     ICM_Lanes_Host_Prot_A_2.LH_Line_Second_C0_0 - 2
 *     ICM_Lanes_Host_Prot_A_2.LH_Line_Second_C1_0 - 3
 *     ICM_Lanes_Host_Prot_A_2.LH_Line_Second_C2_0 - 4
 *     ICM_Lanes_Host_Prot_A_2.LH_Line_Second_C3_0 - 5
 *     ICM_Lanes_Host_Prot_A_2.LH_Second_VR_Start_0 - 6
 *     ICM_Lanes_Host_Prot_A_2.LH_Second_VR_End_0 - 7
 *     ICM_Lanes_Host_Prot_A_2.LH_Buffer_0 - 8
 */

/*********
 *  ICM_Lanes_Host_Prot_B_1 - 10
 *     ICM_Lanes_Host_Prot_B_1.ICM_La_Host_Prot_B_1_Header - 1
 *     ICM_Lanes_Host_Prot_B_1.LH_CRC_1 - 2
 *     ICM_Lanes_Host_Prot_B_1.LH_Is_Triggered_SDM_Type_1 - 3
 *     ICM_Lanes_Host_Prot_B_1.LH_Is_Triggered_SDM_Model_1 - 4
 *     ICM_Lanes_Host_Prot_B_1.LH_Track_ID_1 - 5
 *     ICM_Lanes_Host_Prot_B_1.LH_Age_1 - 6
 *     ICM_Lanes_Host_Prot_B_1.LH_Existence_Probability_1 - 7
 *     ICM_Lanes_Host_Prot_B_1.LH_Prediction_Source_1 - 8
 *     ICM_Lanes_Host_Prot_B_1.LH_Prediction_Type_1 - 9
 *     ICM_Lanes_Host_Prot_B_1.LH_Color_1 - 10
 *     ICM_Lanes_Host_Prot_B_1.LH_Color_Confidence_1 - 11
 *     ICM_Lanes_Host_Prot_B_1.LH_Lanemark_Type_1 - 12
 *     ICM_Lanes_Host_Prot_B_1.LH_DLM_Type_1 - 13
 *     ICM_Lanes_Host_Prot_B_1.LH_DECEL_Type_1 - 14
 *     ICM_Lanes_Host_Prot_B_1.LH_Lanemark_Type_Conf_1 - 15
 *     ICM_Lanes_Host_Prot_B_1.LH_Side_1 - 16
 *     ICM_Lanes_Host_Prot_B_1.LH_Crossing_1 - 17
 *     ICM_Lanes_Host_Prot_B_1.LH_Marker_Width_1 - 18
 *     ICM_Lanes_Host_Prot_B_1.LH_Marker_Width_STD_1 - 19
 *     ICM_Lanes_Host_Prot_B_1.LH_Dash_Average_Length_1 - 20
 *     ICM_Lanes_Host_Prot_B_1.LH_Dash_Average_Gap_1 - 21
 *     ICM_Lanes_Host_Prot_B_1.LH_Is_Multi_Clothoid_1 - 22
 *     ICM_Lanes_Host_Prot_B_1.LH_Line_First_C0_1 - 23
 *     ICM_Lanes_Host_Prot_B_1.LH_Line_First_C1_1 - 24
 *     ICM_Lanes_Host_Prot_B_1.LH_Line_First_C2_1 - 25
 *     ICM_Lanes_Host_Prot_B_1.LH_Line_First_C3_1 - 26
 *     ICM_Lanes_Host_Prot_B_1.LH_First_VR_Start_1 - 27
 *     ICM_Lanes_Host_Prot_B_1.LH_First_VR_End_1 - 28
 *     ICM_Lanes_Host_Prot_B_1.LH_First_Measured_VR_End_1 - 29
 *     ICM_Lanes_Host_Prot_B_1.LH_Second_Measured_VR_End_1 - 30
 */

/*********
 *  ICM_Lanes_Host_Prot_B_2 - 11
 *     ICM_Lanes_Host_Prot_B_2.ICM_La_Host_Prot_B_2_Header - 1
 *     ICM_Lanes_Host_Prot_B_2.LH_Line_Second_C0_1 - 2
 *     ICM_Lanes_Host_Prot_B_2.LH_Line_Second_C1_1 - 3
 *     ICM_Lanes_Host_Prot_B_2.LH_Line_Second_C2_1 - 4
 *     ICM_Lanes_Host_Prot_B_2.LH_Line_Second_C3_1 - 5
 *     ICM_Lanes_Host_Prot_B_2.LH_Second_VR_Start_1 - 6
 *     ICM_Lanes_Host_Prot_B_2.LH_Second_VR_End_1 - 7
 *     ICM_Lanes_Host_Prot_B_2.LH_Buffer_1 - 8
 *     ICM_Lanes_Host_Prot_B_2.ICM_La_Host_Prot_B_2_CRC - 9
 */

/*********
 *  ICM_Lanes_Host_Prot_Header - 12
 *     ICM_Lanes_Host_Prot_Header.ICM_La_Host_Prot_Head_Header - 1
 *     ICM_Lanes_Host_Prot_Header.LH_Zero_byte - 2
 *     ICM_Lanes_Host_Prot_Header.LH_Protocol_Version - 3
 *     ICM_Lanes_Host_Prot_Header.LH_Sync_ID - 4
 *     ICM_Lanes_Host_Prot_Header.LH_Lanes_Count - 5
 *     ICM_Lanes_Host_Prot_Header.LH_Estimated_Width - 6
 *     ICM_Lanes_Host_Prot_Header.LH_Snow_On_Road_Prob - 7
 *     ICM_Lanes_Host_Prot_Header.LH_Header_Buffer - 8
 */

/*********
 *  ICM_Lanes_Road_Edge_Prot_A - 13
 *     ICM_Lanes_Road_Edge_Prot_A.ICM_La_Ro_Ed_Prot_A_Header - 1
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_ID_1 - 2
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Age_1 - 3
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Exist_Prob_1 - 4
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Type_1 - 5
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Prediction_Type_1 - 6
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Height_1 - 7
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Height_STD_1 - 8
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_View_Range_Start_1 - 9
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_View_Range_End_1 - 10
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Measured_VR_End_1 - 11
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Side_1 - 12
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Index_1 - 13
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Is_Triggered_SDM_Model_1 - 14
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Line_C3_1 - 15
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Line_C2_1 - 16
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Line_C1_1 - 17
 *     ICM_Lanes_Road_Edge_Prot_A.LRE_Line_C0_1 - 18
 */

/*********
 *  ICM_Lanes_Road_Edge_Prot_B - 14
 *     ICM_Lanes_Road_Edge_Prot_B.ICM_La_Ro_Ed_Prot_B_Header - 1
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_ID_2 - 2
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Age_2 - 3
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Exist_Prob_2 - 4
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Type_2 - 5
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Prediction_Type_2 - 6
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Height_2 - 7
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Height_STD_2 - 8
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_View_Range_Start_2 - 9
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_View_Range_End_2 - 10
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Measured_VR_End_2 - 11
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Side_2 - 12
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Index_2 - 13
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Is_Triggered_SDM_Model_2 - 14
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Line_C3_2 - 15
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Line_C2_2 - 16
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Line_C1_2 - 17
 *     ICM_Lanes_Road_Edge_Prot_B.LRE_Line_C0_2 - 18
 */

/*********
 *  ICM_Lanes_Road_Edge_Prot_C - 15
 *     ICM_Lanes_Road_Edge_Prot_C.ICM_La_Ro_Ed_Prot_C_Header - 1
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_ID_3 - 2
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Age_3 - 3
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Exist_Prob_3 - 4
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Type_3 - 5
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Prediction_Type_3 - 6
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Height_3 - 7
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Height_STD_3 - 8
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_View_Range_Start_3 - 9
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_View_Range_End_3 - 10
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Measured_VR_End_3 - 11
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Side_3 - 12
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Index_3 - 13
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Is_Triggered_SDM_Model_3 - 14
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Line_C3_3 - 15
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Line_C2_3 - 16
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Line_C1_3 - 17
 *     ICM_Lanes_Road_Edge_Prot_C.LRE_Line_C0_3 - 18
 *     ICM_Lanes_Road_Edge_Prot_C.ICM_La_Ro_Ed_Prot_C_CRC - 19
 */

/*********
 *  ICM_Lanes_Road_Edge_Prot_Header - 16
 *     ICM_Lanes_Road_Edge_Prot_Header.ICM_La_Ro_Ed_Prot_Head_Header - 1
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Zero_byte - 2
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_CRC - 3
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Protocol_Version - 4
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Sync_ID - 5
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Count - 6
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Header_Buffer - 7
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_ID_0 - 8
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Age_0 - 9
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Exist_Prob_0 - 10
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Type_0 - 11
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Prediction_Type_0 - 12
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Height_0 - 13
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Height_STD_0 - 14
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_View_Range_Start_0 - 15
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_View_Range_End_0 - 16
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Measured_VR_End_0 - 17
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Side_0 - 18
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Index_0 - 19
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Is_Triggered_SDM_Model_0 - 20
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Line_C3_0 - 21
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Line_C2_0 - 22
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Line_C1_0 - 23
 *     ICM_Lanes_Road_Edge_Prot_Header.LRE_Line_C0_0 - 24
 */

/*********
 *  ICM_Object_Prot0_A - 17
 *     ICM_Object_Prot0_A.ICM_Object_Prot0_A_Header - 1
 *     ICM_Object_Prot0_A.OBJ_CRC_0 - 2
 *     ICM_Object_Prot0_A.OBJ_ID_0 - 3
 *     ICM_Object_Prot0_A.OBJ_Existence_Probability_0 - 4
 *     ICM_Object_Prot0_A.OBJ_Fusion_Source_0 - 5
 *     ICM_Object_Prot0_A.OBJ_Triggered_SDM_0 - 6
 *     ICM_Object_Prot0_A.OBJ_Motion_Category_0 - 7
 *     ICM_Object_Prot0_A.OBJ_Moving_IN_Probability_0 - 8
 *     ICM_Object_Prot0_A.OBJ_Object_Age_0 - 9
 *     ICM_Object_Prot0_A.OBJ_Measuring_Status_0 - 10
 *     ICM_Object_Prot0_A.OBJ_Object_Class_0 - 11
 *     ICM_Object_Prot0_A.OBJ_Class_Probability_0 - 12
 *     ICM_Object_Prot0_A.OBJ_Car_Probability_0 - 13
 *     ICM_Object_Prot0_A.OBJ_Truck_Probability_0 - 14
 *     ICM_Object_Prot0_A.OBJ_Bike_Probability_0 - 15
 *     ICM_Object_Prot0_A.OBJ_Camera_Source_0 - 16
 *     ICM_Object_Prot0_A.OBJ_Motion_Status_0 - 17
 *     ICM_Object_Prot0_A.OBJ_Motion_Orientation_0 - 18
 *     ICM_Object_Prot0_A.OBJ_Has_Cut_Lane_0 - 19
 *     ICM_Object_Prot0_A.OBJ_Has_Cut_Path_0 - 20
 *     ICM_Object_Prot0_A.OBJ_Brake_Light_0 - 21
 *     ICM_Object_Prot0_A.OBJ_Turn_Indicator_Right_0 - 22
 *     ICM_Object_Prot0_A.OBJ_Turn_Indicator_Left_0 - 23
 *     ICM_Object_Prot0_A.OBJ_Light_Indicator_Validity_0 - 24
 *     ICM_Object_Prot0_A.OBJ_Right_Out_Of_Image_0 - 25
 *     ICM_Object_Prot0_A.OBJ_Left_Out_Of_Image_0 - 26
 *     ICM_Object_Prot0_A.OBJ_Right_Out_Of_Image_V_0 - 27
 *     ICM_Object_Prot0_A.OBJ_Left_Out_Of_Image_V_0 - 28
 *     ICM_Object_Prot0_A.OBJ_Top_Out_Of_Image_0 - 29
 *     ICM_Object_Prot0_A.OBJ_Bottom_Out_Of_Image_0 - 30
 *     ICM_Object_Prot0_A.OBJ_Top_Out_Of_Image_V_0 - 31
 *     ICM_Object_Prot0_A.OBJ_Bottom_Out_Of_Image_V_0 - 32
 *     ICM_Object_Prot0_A.OBJ_Lane_Assignment_0 - 33
 *     ICM_Object_Prot0_A.OBJ_Lane_Assignment_V_0 - 34
 *     ICM_Object_Prot0_A.OBJ_Age_Seconds_0 - 35
 *     ICM_Object_Prot0_A.OBJ_Age_Seconds_V_0 - 36
 *     ICM_Object_Prot0_A.OBJ_Width_0 - 37
 *     ICM_Object_Prot0_A.OBJ_Width_V_0 - 38
 *     ICM_Object_Prot0_A.OBJ_Width_STD_0 - 39
 *     ICM_Object_Prot0_A.OBJ_Width_STD_V_0 - 40
 *     ICM_Object_Prot0_A.OBJ_Length_0 - 41
 *     ICM_Object_Prot0_A.OBJ_Length_V_0 - 42
 *     ICM_Object_Prot0_A.OBJ_Length_STD_0 - 43
 *     ICM_Object_Prot0_A.OBJ_Length_STD_V_0 - 44
 *     ICM_Object_Prot0_A.OBJ_Height_0 - 45
 *     ICM_Object_Prot0_A.OBJ_Height_V_0 - 46
 *     ICM_Object_Prot0_A.OBJ_Height_STD_0 - 47
 *     ICM_Object_Prot0_A.OBJ_Height_STD_V_0 - 48
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Velocity_0 - 49
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Velocity_V_0 - 50
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Velocity_STD_0 - 51
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Vel_STD_V_0 - 52
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Velocity_0 - 53
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Velocity_V_0 - 54
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Velocity_STD_0 - 55
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Vel_STD_V_0 - 56
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Acc_0 - 57
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Acc_V_0 - 58
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Acc_STD_0 - 59
 *     ICM_Object_Prot0_A.OBJ_Abs_Long_Acc_STD_V_0 - 60
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Acc_0 - 61
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Acc_V_0 - 62
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Acc_STD_0 - 63
 *     ICM_Object_Prot0_A.OBJ_Abs_Lat_Acc_STD_V_0 - 64
 *     ICM_Object_Prot0_A.OBJ_Abs_Acceleration_0 - 65
 *     ICM_Object_Prot0_A.OBJ_Abs_Acceleration_V_0 - 66
 *     ICM_Object_Prot0_A.OBJ_Abs_Acc_STD_0 - 67
 *     ICM_Object_Prot0_A.OBJ_Abs_Acc_STD_V_0 - 68
 *     ICM_Object_Prot0_A.OBJ_Inv_TTC_0 - 69
 *     ICM_Object_Prot0_A.OBJ_Inv_TTC_V_0 - 70
 *     ICM_Object_Prot0_A.OBJ_Inv_TTC_STD_0 - 71
 *     ICM_Object_Prot0_A.OBJ_Inv_TTC_STD_V_0 - 72
 *     ICM_Object_Prot0_A.OBJ_Relative_Long_Acc_0 - 73
 *     ICM_Object_Prot0_A.OBJ_Relative_Long_Acc_V_0 - 74
 *     ICM_Object_Prot0_A.OBJ_Relative_Long_Acc_STD_0 - 75
 *     ICM_Object_Prot0_A.OBJ_Rel_Long_Acc_STD_V_0 - 76
 */

/*********
 *  ICM_Object_Prot0_B - 18
 *     ICM_Object_Prot0_B.ICM_Object_Prot0_B_Header - 1
 *     ICM_Object_Prot0_B.OBJ_Relative_Long_Velocity_0 - 2
 *     ICM_Object_Prot0_B.OBJ_Relative_Long_Velocity_V_0 - 3
 *     ICM_Object_Prot0_B.OBJ_Relative_Long_Vel_STD_0 - 4
 *     ICM_Object_Prot0_B.OBJ_Rel_Long_Vel_STD_V_0 - 5
 *     ICM_Object_Prot0_B.OBJ_Relative_Lat_Velocity_0 - 6
 *     ICM_Object_Prot0_B.OBJ_Relative_Lat_Velocity_V_0 - 7
 *     ICM_Object_Prot0_B.OBJ_Relative_Lat_Velocity_STD_0 - 8
 *     ICM_Object_Prot0_B.OBJ_Rel_Lat_Vel_STD_V_0 - 9
 *     ICM_Object_Prot0_B.OBJ_Long_Distance_0 - 10
 *     ICM_Object_Prot0_B.OBJ_Long_Distance_V_0 - 11
 *     ICM_Object_Prot0_B.OBJ_Long_Distance_STD_0 - 12
 *     ICM_Object_Prot0_B.OBJ_Long_Distance_STD_V_0 - 13
 *     ICM_Object_Prot0_B.OBJ_Lat_Distance_0 - 14
 *     ICM_Object_Prot0_B.OBJ_Lat_Distance_V_0 - 15
 *     ICM_Object_Prot0_B.OBJ_Lat_Distance_STD_0 - 16
 *     ICM_Object_Prot0_B.OBJ_Lat_Distance_STD_V_0 - 17
 *     ICM_Object_Prot0_B.OBJ_Absolute_Speed_0 - 18
 *     ICM_Object_Prot0_B.OBJ_Absolute_Speed_V_0 - 19
 *     ICM_Object_Prot0_B.OBJ_Absolute_Speed_STD_0 - 20
 *     ICM_Object_Prot0_B.OBJ_Absolute_Speed_STD_V_0 - 21
 *     ICM_Object_Prot0_B.OBJ_Heading_0 - 22
 *     ICM_Object_Prot0_B.OBJ_Heading_V_0 - 23
 *     ICM_Object_Prot0_B.OBJ_Heading_STD_0 - 24
 *     ICM_Object_Prot0_B.OBJ_Heading_STD_V_0 - 25
 *     ICM_Object_Prot0_B.OBJ_Angle_Rate_STD_0 - 26
 *     ICM_Object_Prot0_B.OBJ_Angle_Rate_STD_V_0 - 27
 *     ICM_Object_Prot0_B.OBJ_Angle_Rate_0 - 28
 *     ICM_Object_Prot0_B.OBJ_Angle_Rate_V_0 - 29
 *     ICM_Object_Prot0_B.OBJ_Angle_Right_0 - 30
 *     ICM_Object_Prot0_B.OBJ_Angle_Right_V_0 - 31
 *     ICM_Object_Prot0_B.OBJ_Angle_Right_STD_0 - 32
 *     ICM_Object_Prot0_B.OBJ_Angle_Right_STD_V_0 - 33
 *     ICM_Object_Prot0_B.OBJ_Angle_Left_0 - 34
 *     ICM_Object_Prot0_B.OBJ_Angle_Left_V_0 - 35
 *     ICM_Object_Prot0_B.OBJ_Angle_Left_STD_0 - 36
 *     ICM_Object_Prot0_B.OBJ_Angle_Left_STD_V_0 - 37
 *     ICM_Object_Prot0_B.OBJ_Angle_Side_0 - 38
 *     ICM_Object_Prot0_B.OBJ_Angle_Side_V_0 - 39
 *     ICM_Object_Prot0_B.OBJ_Angle_Side_STD_0 - 40
 *     ICM_Object_Prot0_B.OBJ_Angle_Side_STD_V_0 - 41
 *     ICM_Object_Prot0_B.OBJ_Angle_Mid_V_0 - 42
 *     ICM_Object_Prot0_B.OBJ_Angle_Mid_0 - 43
 *     ICM_Object_Prot0_B.OBJ_Angle_Mid_STD_0 - 44
 *     ICM_Object_Prot0_B.OBJ_Angle_Mid_STD_V_0 - 45
 *     ICM_Object_Prot0_B.OBJ_Angle_Bottom_V_0 - 46
 *     ICM_Object_Prot0_B.OBJ_Angle_Bottom_0 - 47
 *     ICM_Object_Prot0_B.OBJ_Angle_Bottom_STD_0 - 48
 *     ICM_Object_Prot0_B.OBJ_Angle_Bottom_STD_V_0 - 49
 *     ICM_Object_Prot0_B.OBJ_Visibility_Side_V_0 - 50
 *     ICM_Object_Prot0_B.OBJ_Visibility_Side_0 - 51
 *     ICM_Object_Prot0_B.OBJ_Is_In_Drivable_Area_0 - 52
 *     ICM_Object_Prot0_B.OBJ_Is_In_Drivable_Area_V_0 - 53
 *     ICM_Object_Prot0_B.OBJ_Is_VeryClose_0 - 54
 *     ICM_Object_Prot0_B.OBJ_Is_VeryClose_V_0 - 55
 *     ICM_Object_Prot0_B.OBJ_Buffer_0 - 56
 */

/*********
 *  ICM_Object_Prot10_A - 19
 *     ICM_Object_Prot10_A.ICM_Object_Prot10_A_Header - 1
 *     ICM_Object_Prot10_A.OBJ_CRC_10 - 2
 *     ICM_Object_Prot10_A.OBJ_ID_10 - 3
 *     ICM_Object_Prot10_A.OBJ_Existence_Probability_10 - 4
 *     ICM_Object_Prot10_A.OBJ_Fusion_Source_10 - 5
 *     ICM_Object_Prot10_A.OBJ_Triggered_SDM_10 - 6
 *     ICM_Object_Prot10_A.OBJ_Motion_Category_10 - 7
 *     ICM_Object_Prot10_A.OBJ_Moving_IN_Probability_10 - 8
 *     ICM_Object_Prot10_A.OBJ_Object_Age_10 - 9
 *     ICM_Object_Prot10_A.OBJ_Measuring_Status_10 - 10
 *     ICM_Object_Prot10_A.OBJ_Object_Class_10 - 11
 *     ICM_Object_Prot10_A.OBJ_Class_Probability_10 - 12
 *     ICM_Object_Prot10_A.OBJ_Car_Probability_10 - 13
 *     ICM_Object_Prot10_A.OBJ_Truck_Probability_10 - 14
 *     ICM_Object_Prot10_A.OBJ_Bike_Probability_10 - 15
 *     ICM_Object_Prot10_A.OBJ_Camera_Source_10 - 16
 *     ICM_Object_Prot10_A.OBJ_Motion_Status_10 - 17
 *     ICM_Object_Prot10_A.OBJ_Motion_Orientation_10 - 18
 *     ICM_Object_Prot10_A.OBJ_Has_Cut_Lane_10 - 19
 *     ICM_Object_Prot10_A.OBJ_Has_Cut_Path_10 - 20
 *     ICM_Object_Prot10_A.OBJ_Brake_Light_10 - 21
 *     ICM_Object_Prot10_A.OBJ_Turn_Indicator_Right_10 - 22
 *     ICM_Object_Prot10_A.OBJ_Turn_Indicator_Left_10 - 23
 *     ICM_Object_Prot10_A.OBJ_Light_Indicator_Validity_10 - 24
 *     ICM_Object_Prot10_A.OBJ_Right_Out_Of_Image_10 - 25
 *     ICM_Object_Prot10_A.OBJ_Left_Out_Of_Image_10 - 26
 *     ICM_Object_Prot10_A.OBJ_Right_Out_Of_Image_V_10 - 27
 *     ICM_Object_Prot10_A.OBJ_Left_Out_Of_Image_V_10 - 28
 *     ICM_Object_Prot10_A.OBJ_Top_Out_Of_Image_10 - 29
 *     ICM_Object_Prot10_A.OBJ_Bottom_Out_Of_Image_10 - 30
 *     ICM_Object_Prot10_A.OBJ_Top_Out_Of_Image_V_10 - 31
 *     ICM_Object_Prot10_A.OBJ_Bottom_Out_Of_Image_V_10 - 32
 *     ICM_Object_Prot10_A.OBJ_Lane_Assignment_10 - 33
 *     ICM_Object_Prot10_A.OBJ_Lane_Assignment_V_10 - 34
 *     ICM_Object_Prot10_A.OBJ_Age_Seconds_10 - 35
 *     ICM_Object_Prot10_A.OBJ_Age_Seconds_V_10 - 36
 *     ICM_Object_Prot10_A.OBJ_Width_10 - 37
 *     ICM_Object_Prot10_A.OBJ_Width_V_10 - 38
 *     ICM_Object_Prot10_A.OBJ_Width_STD_10 - 39
 *     ICM_Object_Prot10_A.OBJ_Width_STD_V_10 - 40
 *     ICM_Object_Prot10_A.OBJ_Length_10 - 41
 *     ICM_Object_Prot10_A.OBJ_Length_V_10 - 42
 *     ICM_Object_Prot10_A.OBJ_Length_STD_10 - 43
 *     ICM_Object_Prot10_A.OBJ_Length_STD_V_10 - 44
 *     ICM_Object_Prot10_A.OBJ_Height_10 - 45
 *     ICM_Object_Prot10_A.OBJ_Height_V_10 - 46
 *     ICM_Object_Prot10_A.OBJ_Height_STD_10 - 47
 *     ICM_Object_Prot10_A.OBJ_Height_STD_V_10 - 48
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Velocity_10 - 49
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Velocity_V_10 - 50
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Velocity_STD_10 - 51
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Vel_STD_V_10 - 52
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Velocity_10 - 53
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Velocity_V_10 - 54
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Velocity_STD_10 - 55
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Vel_STD_V_10 - 56
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Acc_10 - 57
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Acc_V_10 - 58
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Acc_STD_10 - 59
 *     ICM_Object_Prot10_A.OBJ_Abs_Long_Acc_STD_V_10 - 60
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Acc_10 - 61
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Acc_V_10 - 62
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Acc_STD_10 - 63
 *     ICM_Object_Prot10_A.OBJ_Abs_Lat_Acc_STD_V_10 - 64
 *     ICM_Object_Prot10_A.OBJ_Abs_Acceleration_10 - 65
 *     ICM_Object_Prot10_A.OBJ_Abs_Acceleration_V_10 - 66
 *     ICM_Object_Prot10_A.OBJ_Abs_Acc_STD_10 - 67
 *     ICM_Object_Prot10_A.OBJ_Abs_Acc_STD_V_10 - 68
 *     ICM_Object_Prot10_A.OBJ_Inv_TTC_10 - 69
 *     ICM_Object_Prot10_A.OBJ_Inv_TTC_V_10 - 70
 *     ICM_Object_Prot10_A.OBJ_Inv_TTC_STD_10 - 71
 *     ICM_Object_Prot10_A.OBJ_Inv_TTC_STD_V_10 - 72
 *     ICM_Object_Prot10_A.OBJ_Relative_Long_Acc_10 - 73
 *     ICM_Object_Prot10_A.OBJ_Relative_Long_Acc_V_10 - 74
 *     ICM_Object_Prot10_A.OBJ_Relative_Long_Acc_STD_10 - 75
 *     ICM_Object_Prot10_A.OBJ_Rel_Long_Acc_STD_V_10 - 76
 */

/*********
 *  ICM_Object_Prot10_B - 20
 *     ICM_Object_Prot10_B.ICM_Object_Prot10_B_Header - 1
 *     ICM_Object_Prot10_B.OBJ_Relative_Long_Velocity_10 - 2
 *     ICM_Object_Prot10_B.OBJ_Relative_Long_Velocity_V_10 - 3
 *     ICM_Object_Prot10_B.OBJ_Relative_Long_Vel_STD_10 - 4
 *     ICM_Object_Prot10_B.OBJ_Rel_Long_Vel_STD_V_10 - 5
 *     ICM_Object_Prot10_B.OBJ_Relative_Lat_Velocity_10 - 6
 *     ICM_Object_Prot10_B.OBJ_Relative_Lat_Velocity_V_10 - 7
 *     ICM_Object_Prot10_B.OBJ_Relative_Lat_Velocity_STD_10 - 8
 *     ICM_Object_Prot10_B.OBJ_Rel_Lat_Vel_STD_V_10 - 9
 *     ICM_Object_Prot10_B.OBJ_Long_Distance_10 - 10
 *     ICM_Object_Prot10_B.OBJ_Long_Distance_V_10 - 11
 *     ICM_Object_Prot10_B.OBJ_Long_Distance_STD_10 - 12
 *     ICM_Object_Prot10_B.OBJ_Long_Distance_STD_V_10 - 13
 *     ICM_Object_Prot10_B.OBJ_Lat_Distance_10 - 14
 *     ICM_Object_Prot10_B.OBJ_Lat_Distance_V_10 - 15
 *     ICM_Object_Prot10_B.OBJ_Lat_Distance_STD_10 - 16
 *     ICM_Object_Prot10_B.OBJ_Lat_Distance_STD_V_10 - 17
 *     ICM_Object_Prot10_B.OBJ_Absolute_Speed_10 - 18
 *     ICM_Object_Prot10_B.OBJ_Absolute_Speed_V_10 - 19
 *     ICM_Object_Prot10_B.OBJ_Absolute_Speed_STD_10 - 20
 *     ICM_Object_Prot10_B.OBJ_Absolute_Speed_STD_V_10 - 21
 *     ICM_Object_Prot10_B.OBJ_Heading_10 - 22
 *     ICM_Object_Prot10_B.OBJ_Heading_V_10 - 23
 *     ICM_Object_Prot10_B.OBJ_Heading_STD_10 - 24
 *     ICM_Object_Prot10_B.OBJ_Heading_STD_V_10 - 25
 *     ICM_Object_Prot10_B.OBJ_Angle_Rate_STD_10 - 26
 *     ICM_Object_Prot10_B.OBJ_Angle_Rate_STD_V_10 - 27
 *     ICM_Object_Prot10_B.OBJ_Angle_Rate_10 - 28
 *     ICM_Object_Prot10_B.OBJ_Angle_Rate_V_10 - 29
 *     ICM_Object_Prot10_B.OBJ_Angle_Right_10 - 30
 *     ICM_Object_Prot10_B.OBJ_Angle_Right_V_10 - 31
 *     ICM_Object_Prot10_B.OBJ_Angle_Right_STD_10 - 32
 *     ICM_Object_Prot10_B.OBJ_Angle_Right_STD_V_10 - 33
 *     ICM_Object_Prot10_B.OBJ_Angle_Left_10 - 34
 *     ICM_Object_Prot10_B.OBJ_Angle_Left_V_10 - 35
 *     ICM_Object_Prot10_B.OBJ_Angle_Left_STD_10 - 36
 *     ICM_Object_Prot10_B.OBJ_Angle_Left_STD_V_10 - 37
 *     ICM_Object_Prot10_B.OBJ_Angle_Side_10 - 38
 *     ICM_Object_Prot10_B.OBJ_Angle_Side_V_10 - 39
 *     ICM_Object_Prot10_B.OBJ_Angle_Side_STD_10 - 40
 *     ICM_Object_Prot10_B.OBJ_Angle_Side_STD_V_10 - 41
 *     ICM_Object_Prot10_B.OBJ_Angle_Mid_V_10 - 42
 *     ICM_Object_Prot10_B.OBJ_Angle_Mid_10 - 43
 *     ICM_Object_Prot10_B.OBJ_Angle_Mid_STD_10 - 44
 *     ICM_Object_Prot10_B.OBJ_Angle_Mid_STD_V_10 - 45
 *     ICM_Object_Prot10_B.OBJ_Angle_Bottom_V_10 - 46
 *     ICM_Object_Prot10_B.OBJ_Angle_Bottom_10 - 47
 *     ICM_Object_Prot10_B.OBJ_Angle_Bottom_STD_10 - 48
 *     ICM_Object_Prot10_B.OBJ_Angle_Bottom_STD_V_10 - 49
 *     ICM_Object_Prot10_B.OBJ_Visibility_Side_V_10 - 50
 *     ICM_Object_Prot10_B.OBJ_Visibility_Side_10 - 51
 *     ICM_Object_Prot10_B.OBJ_Is_In_Drivable_Area_10 - 52
 *     ICM_Object_Prot10_B.OBJ_Is_In_Drivable_Area_V_10 - 53
 *     ICM_Object_Prot10_B.OBJ_Is_VeryClose_10 - 54
 *     ICM_Object_Prot10_B.OBJ_Is_VeryClose_V_10 - 55
 *     ICM_Object_Prot10_B.OBJ_Buffer_10 - 56
 */

/*********
 *  ICM_Object_Prot11_A - 21
 *     ICM_Object_Prot11_A.ICM_Object_Prot11_A_Header - 1
 *     ICM_Object_Prot11_A.OBJ_CRC_11 - 2
 *     ICM_Object_Prot11_A.OBJ_ID_11 - 3
 *     ICM_Object_Prot11_A.OBJ_Existence_Probability_11 - 4
 *     ICM_Object_Prot11_A.OBJ_Fusion_Source_11 - 5
 *     ICM_Object_Prot11_A.OBJ_Triggered_SDM_11 - 6
 *     ICM_Object_Prot11_A.OBJ_Motion_Category_11 - 7
 *     ICM_Object_Prot11_A.OBJ_Moving_IN_Probability_11 - 8
 *     ICM_Object_Prot11_A.OBJ_Object_Age_11 - 9
 *     ICM_Object_Prot11_A.OBJ_Measuring_Status_11 - 10
 *     ICM_Object_Prot11_A.OBJ_Object_Class_11 - 11
 *     ICM_Object_Prot11_A.OBJ_Class_Probability_11 - 12
 *     ICM_Object_Prot11_A.OBJ_Car_Probability_11 - 13
 *     ICM_Object_Prot11_A.OBJ_Truck_Probability_11 - 14
 *     ICM_Object_Prot11_A.OBJ_Bike_Probability_11 - 15
 *     ICM_Object_Prot11_A.OBJ_Camera_Source_11 - 16
 *     ICM_Object_Prot11_A.OBJ_Motion_Status_11 - 17
 *     ICM_Object_Prot11_A.OBJ_Motion_Orientation_11 - 18
 *     ICM_Object_Prot11_A.OBJ_Has_Cut_Lane_11 - 19
 *     ICM_Object_Prot11_A.OBJ_Has_Cut_Path_11 - 20
 *     ICM_Object_Prot11_A.OBJ_Brake_Light_11 - 21
 *     ICM_Object_Prot11_A.OBJ_Turn_Indicator_Right_11 - 22
 *     ICM_Object_Prot11_A.OBJ_Turn_Indicator_Left_11 - 23
 *     ICM_Object_Prot11_A.OBJ_Light_Indicator_Validity_11 - 24
 *     ICM_Object_Prot11_A.OBJ_Right_Out_Of_Image_11 - 25
 *     ICM_Object_Prot11_A.OBJ_Left_Out_Of_Image_11 - 26
 *     ICM_Object_Prot11_A.OBJ_Right_Out_Of_Image_V_11 - 27
 *     ICM_Object_Prot11_A.OBJ_Left_Out_Of_Image_V_11 - 28
 *     ICM_Object_Prot11_A.OBJ_Top_Out_Of_Image_11 - 29
 *     ICM_Object_Prot11_A.OBJ_Bottom_Out_Of_Image_11 - 30
 *     ICM_Object_Prot11_A.OBJ_Top_Out_Of_Image_V_11 - 31
 *     ICM_Object_Prot11_A.OBJ_Bottom_Out_Of_Image_V_11 - 32
 *     ICM_Object_Prot11_A.OBJ_Lane_Assignment_11 - 33
 *     ICM_Object_Prot11_A.OBJ_Lane_Assignment_V_11 - 34
 *     ICM_Object_Prot11_A.OBJ_Age_Seconds_11 - 35
 *     ICM_Object_Prot11_A.OBJ_Age_Seconds_V_11 - 36
 *     ICM_Object_Prot11_A.OBJ_Width_11 - 37
 *     ICM_Object_Prot11_A.OBJ_Width_V_11 - 38
 *     ICM_Object_Prot11_A.OBJ_Width_STD_11 - 39
 *     ICM_Object_Prot11_A.OBJ_Width_STD_V_11 - 40
 *     ICM_Object_Prot11_A.OBJ_Length_11 - 41
 *     ICM_Object_Prot11_A.OBJ_Length_V_11 - 42
 *     ICM_Object_Prot11_A.OBJ_Length_STD_11 - 43
 *     ICM_Object_Prot11_A.OBJ_Length_STD_V_11 - 44
 *     ICM_Object_Prot11_A.OBJ_Height_11 - 45
 *     ICM_Object_Prot11_A.OBJ_Height_V_11 - 46
 *     ICM_Object_Prot11_A.OBJ_Height_STD_11 - 47
 *     ICM_Object_Prot11_A.OBJ_Height_STD_V_11 - 48
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Velocity_11 - 49
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Velocity_V_11 - 50
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Velocity_STD_11 - 51
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Vel_STD_V_11 - 52
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Velocity_11 - 53
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Velocity_V_11 - 54
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Velocity_STD_11 - 55
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Vel_STD_V_11 - 56
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Acc_11 - 57
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Acc_V_11 - 58
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Acc_STD_11 - 59
 *     ICM_Object_Prot11_A.OBJ_Abs_Long_Acc_STD_V_11 - 60
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Acc_11 - 61
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Acc_V_11 - 62
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Acc_STD_11 - 63
 *     ICM_Object_Prot11_A.OBJ_Abs_Lat_Acc_STD_V_11 - 64
 *     ICM_Object_Prot11_A.OBJ_Abs_Acceleration_11 - 65
 *     ICM_Object_Prot11_A.OBJ_Abs_Acceleration_V_11 - 66
 *     ICM_Object_Prot11_A.OBJ_Abs_Acc_STD_11 - 67
 *     ICM_Object_Prot11_A.OBJ_Abs_Acc_STD_V_11 - 68
 *     ICM_Object_Prot11_A.OBJ_Inv_TTC_11 - 69
 *     ICM_Object_Prot11_A.OBJ_Inv_TTC_V_11 - 70
 *     ICM_Object_Prot11_A.OBJ_Inv_TTC_STD_11 - 71
 *     ICM_Object_Prot11_A.OBJ_Inv_TTC_STD_V_11 - 72
 *     ICM_Object_Prot11_A.OBJ_Relative_Long_Acc_11 - 73
 *     ICM_Object_Prot11_A.OBJ_Relative_Long_Acc_V_11 - 74
 *     ICM_Object_Prot11_A.OBJ_Relative_Long_Acc_STD_11 - 75
 *     ICM_Object_Prot11_A.OBJ_Rel_Long_Acc_STD_V_11 - 76
 */

/*********
 *  ICM_Object_Prot11_B - 22
 *     ICM_Object_Prot11_B.ICM_Object_Prot11_B_Header - 1
 *     ICM_Object_Prot11_B.OBJ_Relative_Long_Velocity_11 - 2
 *     ICM_Object_Prot11_B.OBJ_Relative_Long_Velocity_V_11 - 3
 *     ICM_Object_Prot11_B.OBJ_Relative_Long_Vel_STD_11 - 4
 *     ICM_Object_Prot11_B.OBJ_Rel_Long_Vel_STD_V_11 - 5
 *     ICM_Object_Prot11_B.OBJ_Relative_Lat_Velocity_11 - 6
 *     ICM_Object_Prot11_B.OBJ_Relative_Lat_Velocity_V_11 - 7
 *     ICM_Object_Prot11_B.OBJ_Relative_Lat_Velocity_STD_11 - 8
 *     ICM_Object_Prot11_B.OBJ_Rel_Lat_Vel_STD_V_11 - 9
 *     ICM_Object_Prot11_B.OBJ_Long_Distance_11 - 10
 *     ICM_Object_Prot11_B.OBJ_Long_Distance_V_11 - 11
 *     ICM_Object_Prot11_B.OBJ_Long_Distance_STD_11 - 12
 *     ICM_Object_Prot11_B.OBJ_Long_Distance_STD_V_11 - 13
 *     ICM_Object_Prot11_B.OBJ_Lat_Distance_11 - 14
 *     ICM_Object_Prot11_B.OBJ_Lat_Distance_V_11 - 15
 *     ICM_Object_Prot11_B.OBJ_Lat_Distance_STD_11 - 16
 *     ICM_Object_Prot11_B.OBJ_Lat_Distance_STD_V_11 - 17
 *     ICM_Object_Prot11_B.OBJ_Absolute_Speed_11 - 18
 *     ICM_Object_Prot11_B.OBJ_Absolute_Speed_V_11 - 19
 *     ICM_Object_Prot11_B.OBJ_Absolute_Speed_STD_11 - 20
 *     ICM_Object_Prot11_B.OBJ_Absolute_Speed_STD_V_11 - 21
 *     ICM_Object_Prot11_B.OBJ_Heading_11 - 22
 *     ICM_Object_Prot11_B.OBJ_Heading_V_11 - 23
 *     ICM_Object_Prot11_B.OBJ_Heading_STD_11 - 24
 *     ICM_Object_Prot11_B.OBJ_Heading_STD_V_11 - 25
 *     ICM_Object_Prot11_B.OBJ_Angle_Rate_STD_11 - 26
 *     ICM_Object_Prot11_B.OBJ_Angle_Rate_STD_V_11 - 27
 *     ICM_Object_Prot11_B.OBJ_Angle_Rate_11 - 28
 *     ICM_Object_Prot11_B.OBJ_Angle_Rate_V_11 - 29
 *     ICM_Object_Prot11_B.OBJ_Angle_Right_11 - 30
 *     ICM_Object_Prot11_B.OBJ_Angle_Right_V_11 - 31
 *     ICM_Object_Prot11_B.OBJ_Angle_Right_STD_11 - 32
 *     ICM_Object_Prot11_B.OBJ_Angle_Right_STD_V_11 - 33
 *     ICM_Object_Prot11_B.OBJ_Angle_Left_11 - 34
 *     ICM_Object_Prot11_B.OBJ_Angle_Left_V_11 - 35
 *     ICM_Object_Prot11_B.OBJ_Angle_Left_STD_11 - 36
 *     ICM_Object_Prot11_B.OBJ_Angle_Left_STD_V_11 - 37
 *     ICM_Object_Prot11_B.OBJ_Angle_Side_11 - 38
 *     ICM_Object_Prot11_B.OBJ_Angle_Side_V_11 - 39
 *     ICM_Object_Prot11_B.OBJ_Angle_Side_STD_11 - 40
 *     ICM_Object_Prot11_B.OBJ_Angle_Side_STD_V_11 - 41
 *     ICM_Object_Prot11_B.OBJ_Angle_Mid_V_11 - 42
 *     ICM_Object_Prot11_B.OBJ_Angle_Mid_11 - 43
 *     ICM_Object_Prot11_B.OBJ_Angle_Mid_STD_11 - 44
 *     ICM_Object_Prot11_B.OBJ_Angle_Mid_STD_V_11 - 45
 *     ICM_Object_Prot11_B.OBJ_Angle_Bottom_V_11 - 46
 *     ICM_Object_Prot11_B.OBJ_Angle_Bottom_11 - 47
 *     ICM_Object_Prot11_B.OBJ_Angle_Bottom_STD_11 - 48
 *     ICM_Object_Prot11_B.OBJ_Angle_Bottom_STD_V_11 - 49
 *     ICM_Object_Prot11_B.OBJ_Visibility_Side_V_11 - 50
 *     ICM_Object_Prot11_B.OBJ_Visibility_Side_11 - 51
 *     ICM_Object_Prot11_B.OBJ_Is_In_Drivable_Area_11 - 52
 *     ICM_Object_Prot11_B.OBJ_Is_In_Drivable_Area_V_11 - 53
 *     ICM_Object_Prot11_B.OBJ_Is_VeryClose_11 - 54
 *     ICM_Object_Prot11_B.OBJ_Is_VeryClose_V_11 - 55
 *     ICM_Object_Prot11_B.OBJ_Buffer_11 - 56
 */

/*********
 *  ICM_Object_Prot12_A - 23
 *     ICM_Object_Prot12_A.ICM_Object_Prot12_A_Header - 1
 *     ICM_Object_Prot12_A.OBJ_CRC_12 - 2
 *     ICM_Object_Prot12_A.OBJ_ID_12 - 3
 *     ICM_Object_Prot12_A.OBJ_Existence_Probability_12 - 4
 *     ICM_Object_Prot12_A.OBJ_Fusion_Source_12 - 5
 *     ICM_Object_Prot12_A.OBJ_Triggered_SDM_12 - 6
 *     ICM_Object_Prot12_A.OBJ_Motion_Category_12 - 7
 *     ICM_Object_Prot12_A.OBJ_Moving_IN_Probability_12 - 8
 *     ICM_Object_Prot12_A.OBJ_Object_Age_12 - 9
 *     ICM_Object_Prot12_A.OBJ_Measuring_Status_12 - 10
 *     ICM_Object_Prot12_A.OBJ_Object_Class_12 - 11
 *     ICM_Object_Prot12_A.OBJ_Class_Probability_12 - 12
 *     ICM_Object_Prot12_A.OBJ_Car_Probability_12 - 13
 *     ICM_Object_Prot12_A.OBJ_Truck_Probability_12 - 14
 *     ICM_Object_Prot12_A.OBJ_Bike_Probability_12 - 15
 *     ICM_Object_Prot12_A.OBJ_Camera_Source_12 - 16
 *     ICM_Object_Prot12_A.OBJ_Motion_Status_12 - 17
 *     ICM_Object_Prot12_A.OBJ_Motion_Orientation_12 - 18
 *     ICM_Object_Prot12_A.OBJ_Has_Cut_Lane_12 - 19
 *     ICM_Object_Prot12_A.OBJ_Has_Cut_Path_12 - 20
 *     ICM_Object_Prot12_A.OBJ_Brake_Light_12 - 21
 *     ICM_Object_Prot12_A.OBJ_Turn_Indicator_Right_12 - 22
 *     ICM_Object_Prot12_A.OBJ_Turn_Indicator_Left_12 - 23
 *     ICM_Object_Prot12_A.OBJ_Light_Indicator_Validity_12 - 24
 *     ICM_Object_Prot12_A.OBJ_Right_Out_Of_Image_12 - 25
 *     ICM_Object_Prot12_A.OBJ_Left_Out_Of_Image_12 - 26
 *     ICM_Object_Prot12_A.OBJ_Right_Out_Of_Image_V_12 - 27
 *     ICM_Object_Prot12_A.OBJ_Left_Out_Of_Image_V_12 - 28
 *     ICM_Object_Prot12_A.OBJ_Top_Out_Of_Image_12 - 29
 *     ICM_Object_Prot12_A.OBJ_Bottom_Out_Of_Image_12 - 30
 *     ICM_Object_Prot12_A.OBJ_Top_Out_Of_Image_V_12 - 31
 *     ICM_Object_Prot12_A.OBJ_Bottom_Out_Of_Image_V_12 - 32
 *     ICM_Object_Prot12_A.OBJ_Lane_Assignment_12 - 33
 *     ICM_Object_Prot12_A.OBJ_Lane_Assignment_V_12 - 34
 *     ICM_Object_Prot12_A.OBJ_Age_Seconds_12 - 35
 *     ICM_Object_Prot12_A.OBJ_Age_Seconds_V_12 - 36
 *     ICM_Object_Prot12_A.OBJ_Width_12 - 37
 *     ICM_Object_Prot12_A.OBJ_Width_V_12 - 38
 *     ICM_Object_Prot12_A.OBJ_Width_STD_12 - 39
 *     ICM_Object_Prot12_A.OBJ_Width_STD_V_12 - 40
 *     ICM_Object_Prot12_A.OBJ_Length_12 - 41
 *     ICM_Object_Prot12_A.OBJ_Length_V_12 - 42
 *     ICM_Object_Prot12_A.OBJ_Length_STD_12 - 43
 *     ICM_Object_Prot12_A.OBJ_Length_STD_V_12 - 44
 *     ICM_Object_Prot12_A.OBJ_Height_12 - 45
 *     ICM_Object_Prot12_A.OBJ_Height_V_12 - 46
 *     ICM_Object_Prot12_A.OBJ_Height_STD_12 - 47
 *     ICM_Object_Prot12_A.OBJ_Height_STD_V_12 - 48
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Velocity_12 - 49
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Velocity_V_12 - 50
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Velocity_STD_12 - 51
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Vel_STD_V_12 - 52
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Velocity_12 - 53
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Velocity_V_12 - 54
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Velocity_STD_12 - 55
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Vel_STD_V_12 - 56
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Acc_12 - 57
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Acc_V_12 - 58
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Acc_STD_12 - 59
 *     ICM_Object_Prot12_A.OBJ_Abs_Long_Acc_STD_V_12 - 60
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Acc_12 - 61
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Acc_V_12 - 62
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Acc_STD_12 - 63
 *     ICM_Object_Prot12_A.OBJ_Abs_Lat_Acc_STD_V_12 - 64
 *     ICM_Object_Prot12_A.OBJ_Abs_Acceleration_12 - 65
 *     ICM_Object_Prot12_A.OBJ_Abs_Acceleration_V_12 - 66
 *     ICM_Object_Prot12_A.OBJ_Abs_Acc_STD_12 - 67
 *     ICM_Object_Prot12_A.OBJ_Abs_Acc_STD_V_12 - 68
 *     ICM_Object_Prot12_A.OBJ_Inv_TTC_12 - 69
 *     ICM_Object_Prot12_A.OBJ_Inv_TTC_V_12 - 70
 *     ICM_Object_Prot12_A.OBJ_Inv_TTC_STD_12 - 71
 *     ICM_Object_Prot12_A.OBJ_Inv_TTC_STD_V_12 - 72
 *     ICM_Object_Prot12_A.OBJ_Relative_Long_Acc_12 - 73
 *     ICM_Object_Prot12_A.OBJ_Relative_Long_Acc_V_12 - 74
 *     ICM_Object_Prot12_A.OBJ_Relative_Long_Acc_STD_12 - 75
 *     ICM_Object_Prot12_A.OBJ_Rel_Long_Acc_STD_V_12 - 76
 */

/*********
 *  ICM_Object_Prot12_B - 24
 *     ICM_Object_Prot12_B.ICM_Object_Prot12_B_Header - 1
 *     ICM_Object_Prot12_B.OBJ_Relative_Long_Velocity_12 - 2
 *     ICM_Object_Prot12_B.OBJ_Relative_Long_Velocity_V_12 - 3
 *     ICM_Object_Prot12_B.OBJ_Relative_Long_Vel_STD_12 - 4
 *     ICM_Object_Prot12_B.OBJ_Rel_Long_Vel_STD_V_12 - 5
 *     ICM_Object_Prot12_B.OBJ_Relative_Lat_Velocity_12 - 6
 *     ICM_Object_Prot12_B.OBJ_Relative_Lat_Velocity_V_12 - 7
 *     ICM_Object_Prot12_B.OBJ_Relative_Lat_Velocity_STD_12 - 8
 *     ICM_Object_Prot12_B.OBJ_Rel_Lat_Vel_STD_V_12 - 9
 *     ICM_Object_Prot12_B.OBJ_Long_Distance_12 - 10
 *     ICM_Object_Prot12_B.OBJ_Long_Distance_V_12 - 11
 *     ICM_Object_Prot12_B.OBJ_Long_Distance_STD_12 - 12
 *     ICM_Object_Prot12_B.OBJ_Long_Distance_STD_V_12 - 13
 *     ICM_Object_Prot12_B.OBJ_Lat_Distance_12 - 14
 *     ICM_Object_Prot12_B.OBJ_Lat_Distance_V_12 - 15
 *     ICM_Object_Prot12_B.OBJ_Lat_Distance_STD_12 - 16
 *     ICM_Object_Prot12_B.OBJ_Lat_Distance_STD_V_12 - 17
 *     ICM_Object_Prot12_B.OBJ_Absolute_Speed_12 - 18
 *     ICM_Object_Prot12_B.OBJ_Absolute_Speed_V_12 - 19
 *     ICM_Object_Prot12_B.OBJ_Absolute_Speed_STD_12 - 20
 *     ICM_Object_Prot12_B.OBJ_Absolute_Speed_STD_V_12 - 21
 *     ICM_Object_Prot12_B.OBJ_Heading_12 - 22
 *     ICM_Object_Prot12_B.OBJ_Heading_V_12 - 23
 *     ICM_Object_Prot12_B.OBJ_Heading_STD_12 - 24
 *     ICM_Object_Prot12_B.OBJ_Heading_STD_V_12 - 25
 *     ICM_Object_Prot12_B.OBJ_Angle_Rate_STD_12 - 26
 *     ICM_Object_Prot12_B.OBJ_Angle_Rate_STD_V_12 - 27
 *     ICM_Object_Prot12_B.OBJ_Angle_Rate_12 - 28
 *     ICM_Object_Prot12_B.OBJ_Angle_Rate_V_12 - 29
 *     ICM_Object_Prot12_B.OBJ_Angle_Right_12 - 30
 *     ICM_Object_Prot12_B.OBJ_Angle_Right_V_12 - 31
 *     ICM_Object_Prot12_B.OBJ_Angle_Right_STD_12 - 32
 *     ICM_Object_Prot12_B.OBJ_Angle_Right_STD_V_12 - 33
 *     ICM_Object_Prot12_B.OBJ_Angle_Left_12 - 34
 *     ICM_Object_Prot12_B.OBJ_Angle_Left_V_12 - 35
 *     ICM_Object_Prot12_B.OBJ_Angle_Left_STD_12 - 36
 *     ICM_Object_Prot12_B.OBJ_Angle_Left_STD_V_12 - 37
 *     ICM_Object_Prot12_B.OBJ_Angle_Side_12 - 38
 *     ICM_Object_Prot12_B.OBJ_Angle_Side_V_12 - 39
 *     ICM_Object_Prot12_B.OBJ_Angle_Side_STD_12 - 40
 *     ICM_Object_Prot12_B.OBJ_Angle_Side_STD_V_12 - 41
 *     ICM_Object_Prot12_B.OBJ_Angle_Mid_V_12 - 42
 *     ICM_Object_Prot12_B.OBJ_Angle_Mid_12 - 43
 *     ICM_Object_Prot12_B.OBJ_Angle_Mid_STD_12 - 44
 *     ICM_Object_Prot12_B.OBJ_Angle_Mid_STD_V_12 - 45
 *     ICM_Object_Prot12_B.OBJ_Angle_Bottom_V_12 - 46
 *     ICM_Object_Prot12_B.OBJ_Angle_Bottom_12 - 47
 *     ICM_Object_Prot12_B.OBJ_Angle_Bottom_STD_12 - 48
 *     ICM_Object_Prot12_B.OBJ_Angle_Bottom_STD_V_12 - 49
 *     ICM_Object_Prot12_B.OBJ_Visibility_Side_V_12 - 50
 *     ICM_Object_Prot12_B.OBJ_Visibility_Side_12 - 51
 *     ICM_Object_Prot12_B.OBJ_Is_In_Drivable_Area_12 - 52
 *     ICM_Object_Prot12_B.OBJ_Is_In_Drivable_Area_V_12 - 53
 *     ICM_Object_Prot12_B.OBJ_Is_VeryClose_12 - 54
 *     ICM_Object_Prot12_B.OBJ_Is_VeryClose_V_12 - 55
 *     ICM_Object_Prot12_B.OBJ_Buffer_12 - 56
 */

/*********
 *  ICM_Object_Prot13_A - 25
 *     ICM_Object_Prot13_A.ICM_Object_Prot13_A_Header - 1
 *     ICM_Object_Prot13_A.OBJ_CRC_13 - 2
 *     ICM_Object_Prot13_A.OBJ_ID_13 - 3
 *     ICM_Object_Prot13_A.OBJ_Existence_Probability_13 - 4
 *     ICM_Object_Prot13_A.OBJ_Fusion_Source_13 - 5
 *     ICM_Object_Prot13_A.OBJ_Triggered_SDM_13 - 6
 *     ICM_Object_Prot13_A.OBJ_Motion_Category_13 - 7
 *     ICM_Object_Prot13_A.OBJ_Moving_IN_Probability_13 - 8
 *     ICM_Object_Prot13_A.OBJ_Object_Age_13 - 9
 *     ICM_Object_Prot13_A.OBJ_Measuring_Status_13 - 10
 *     ICM_Object_Prot13_A.OBJ_Object_Class_13 - 11
 *     ICM_Object_Prot13_A.OBJ_Class_Probability_13 - 12
 *     ICM_Object_Prot13_A.OBJ_Car_Probability_13 - 13
 *     ICM_Object_Prot13_A.OBJ_Truck_Probability_13 - 14
 *     ICM_Object_Prot13_A.OBJ_Bike_Probability_13 - 15
 *     ICM_Object_Prot13_A.OBJ_Camera_Source_13 - 16
 *     ICM_Object_Prot13_A.OBJ_Motion_Status_13 - 17
 *     ICM_Object_Prot13_A.OBJ_Motion_Orientation_13 - 18
 *     ICM_Object_Prot13_A.OBJ_Has_Cut_Lane_13 - 19
 *     ICM_Object_Prot13_A.OBJ_Has_Cut_Path_13 - 20
 *     ICM_Object_Prot13_A.OBJ_Brake_Light_13 - 21
 *     ICM_Object_Prot13_A.OBJ_Turn_Indicator_Right_13 - 22
 *     ICM_Object_Prot13_A.OBJ_Turn_Indicator_Left_13 - 23
 *     ICM_Object_Prot13_A.OBJ_Light_Indicator_Validity_13 - 24
 *     ICM_Object_Prot13_A.OBJ_Right_Out_Of_Image_13 - 25
 *     ICM_Object_Prot13_A.OBJ_Left_Out_Of_Image_13 - 26
 *     ICM_Object_Prot13_A.OBJ_Right_Out_Of_Image_V_13 - 27
 *     ICM_Object_Prot13_A.OBJ_Left_Out_Of_Image_V_13 - 28
 *     ICM_Object_Prot13_A.OBJ_Top_Out_Of_Image_13 - 29
 *     ICM_Object_Prot13_A.OBJ_Bottom_Out_Of_Image_13 - 30
 *     ICM_Object_Prot13_A.OBJ_Top_Out_Of_Image_V_13 - 31
 *     ICM_Object_Prot13_A.OBJ_Bottom_Out_Of_Image_V_13 - 32
 *     ICM_Object_Prot13_A.OBJ_Lane_Assignment_13 - 33
 *     ICM_Object_Prot13_A.OBJ_Lane_Assignment_V_13 - 34
 *     ICM_Object_Prot13_A.OBJ_Age_Seconds_13 - 35
 *     ICM_Object_Prot13_A.OBJ_Age_Seconds_V_13 - 36
 *     ICM_Object_Prot13_A.OBJ_Width_13 - 37
 *     ICM_Object_Prot13_A.OBJ_Width_V_13 - 38
 *     ICM_Object_Prot13_A.OBJ_Width_STD_13 - 39
 *     ICM_Object_Prot13_A.OBJ_Width_STD_V_13 - 40
 *     ICM_Object_Prot13_A.OBJ_Length_13 - 41
 *     ICM_Object_Prot13_A.OBJ_Length_V_13 - 42
 *     ICM_Object_Prot13_A.OBJ_Length_STD_13 - 43
 *     ICM_Object_Prot13_A.OBJ_Length_STD_V_13 - 44
 *     ICM_Object_Prot13_A.OBJ_Height_13 - 45
 *     ICM_Object_Prot13_A.OBJ_Height_V_13 - 46
 *     ICM_Object_Prot13_A.OBJ_Height_STD_13 - 47
 *     ICM_Object_Prot13_A.OBJ_Height_STD_V_13 - 48
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Velocity_13 - 49
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Velocity_V_13 - 50
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Velocity_STD_13 - 51
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Vel_STD_V_13 - 52
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Velocity_13 - 53
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Velocity_V_13 - 54
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Velocity_STD_13 - 55
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Vel_STD_V_13 - 56
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Acc_13 - 57
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Acc_V_13 - 58
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Acc_STD_13 - 59
 *     ICM_Object_Prot13_A.OBJ_Abs_Long_Acc_STD_V_13 - 60
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Acc_13 - 61
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Acc_V_13 - 62
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Acc_STD_13 - 63
 *     ICM_Object_Prot13_A.OBJ_Abs_Lat_Acc_STD_V_13 - 64
 *     ICM_Object_Prot13_A.OBJ_Abs_Acceleration_13 - 65
 *     ICM_Object_Prot13_A.OBJ_Abs_Acceleration_V_13 - 66
 *     ICM_Object_Prot13_A.OBJ_Abs_Acc_STD_13 - 67
 *     ICM_Object_Prot13_A.OBJ_Abs_Acc_STD_V_13 - 68
 *     ICM_Object_Prot13_A.OBJ_Inv_TTC_13 - 69
 *     ICM_Object_Prot13_A.OBJ_Inv_TTC_V_13 - 70
 *     ICM_Object_Prot13_A.OBJ_Inv_TTC_STD_13 - 71
 *     ICM_Object_Prot13_A.OBJ_Inv_TTC_STD_V_13 - 72
 *     ICM_Object_Prot13_A.OBJ_Relative_Long_Acc_13 - 73
 *     ICM_Object_Prot13_A.OBJ_Relative_Long_Acc_V_13 - 74
 *     ICM_Object_Prot13_A.OBJ_Relative_Long_Acc_STD_13 - 75
 *     ICM_Object_Prot13_A.OBJ_Rel_Long_Acc_STD_V_13 - 76
 */

/*********
 *  ICM_Object_Prot13_B - 26
 *     ICM_Object_Prot13_B.ICM_Object_Prot13_B_Header - 1
 *     ICM_Object_Prot13_B.OBJ_Relative_Long_Velocity_13 - 2
 *     ICM_Object_Prot13_B.OBJ_Relative_Long_Velocity_V_13 - 3
 *     ICM_Object_Prot13_B.OBJ_Relative_Long_Vel_STD_13 - 4
 *     ICM_Object_Prot13_B.OBJ_Rel_Long_Vel_STD_V_13 - 5
 *     ICM_Object_Prot13_B.OBJ_Relative_Lat_Velocity_13 - 6
 *     ICM_Object_Prot13_B.OBJ_Relative_Lat_Velocity_V_13 - 7
 *     ICM_Object_Prot13_B.OBJ_Relative_Lat_Velocity_STD_13 - 8
 *     ICM_Object_Prot13_B.OBJ_Rel_Lat_Vel_STD_V_13 - 9
 *     ICM_Object_Prot13_B.OBJ_Long_Distance_13 - 10
 *     ICM_Object_Prot13_B.OBJ_Long_Distance_V_13 - 11
 *     ICM_Object_Prot13_B.OBJ_Long_Distance_STD_13 - 12
 *     ICM_Object_Prot13_B.OBJ_Long_Distance_STD_V_13 - 13
 *     ICM_Object_Prot13_B.OBJ_Lat_Distance_13 - 14
 *     ICM_Object_Prot13_B.OBJ_Lat_Distance_V_13 - 15
 *     ICM_Object_Prot13_B.OBJ_Lat_Distance_STD_13 - 16
 *     ICM_Object_Prot13_B.OBJ_Lat_Distance_STD_V_13 - 17
 *     ICM_Object_Prot13_B.OBJ_Absolute_Speed_13 - 18
 *     ICM_Object_Prot13_B.OBJ_Absolute_Speed_V_13 - 19
 *     ICM_Object_Prot13_B.OBJ_Absolute_Speed_STD_13 - 20
 *     ICM_Object_Prot13_B.OBJ_Absolute_Speed_STD_V_13 - 21
 *     ICM_Object_Prot13_B.OBJ_Heading_13 - 22
 *     ICM_Object_Prot13_B.OBJ_Heading_V_13 - 23
 *     ICM_Object_Prot13_B.OBJ_Heading_STD_13 - 24
 *     ICM_Object_Prot13_B.OBJ_Heading_STD_V_13 - 25
 *     ICM_Object_Prot13_B.OBJ_Angle_Rate_STD_13 - 26
 *     ICM_Object_Prot13_B.OBJ_Angle_Rate_STD_V_13 - 27
 *     ICM_Object_Prot13_B.OBJ_Angle_Rate_13 - 28
 *     ICM_Object_Prot13_B.OBJ_Angle_Rate_V_13 - 29
 *     ICM_Object_Prot13_B.OBJ_Angle_Right_13 - 30
 *     ICM_Object_Prot13_B.OBJ_Angle_Right_V_13 - 31
 *     ICM_Object_Prot13_B.OBJ_Angle_Right_STD_13 - 32
 *     ICM_Object_Prot13_B.OBJ_Angle_Right_STD_V_13 - 33
 *     ICM_Object_Prot13_B.OBJ_Angle_Left_13 - 34
 *     ICM_Object_Prot13_B.OBJ_Angle_Left_V_13 - 35
 *     ICM_Object_Prot13_B.OBJ_Angle_Left_STD_13 - 36
 *     ICM_Object_Prot13_B.OBJ_Angle_Left_STD_V_13 - 37
 *     ICM_Object_Prot13_B.OBJ_Angle_Side_13 - 38
 *     ICM_Object_Prot13_B.OBJ_Angle_Side_V_13 - 39
 *     ICM_Object_Prot13_B.OBJ_Angle_Side_STD_13 - 40
 *     ICM_Object_Prot13_B.OBJ_Angle_Side_STD_V_13 - 41
 *     ICM_Object_Prot13_B.OBJ_Angle_Mid_V_13 - 42
 *     ICM_Object_Prot13_B.OBJ_Angle_Mid_13 - 43
 *     ICM_Object_Prot13_B.OBJ_Angle_Mid_STD_13 - 44
 *     ICM_Object_Prot13_B.OBJ_Angle_Mid_STD_V_13 - 45
 *     ICM_Object_Prot13_B.OBJ_Angle_Bottom_V_13 - 46
 *     ICM_Object_Prot13_B.OBJ_Angle_Bottom_13 - 47
 *     ICM_Object_Prot13_B.OBJ_Angle_Bottom_STD_13 - 48
 *     ICM_Object_Prot13_B.OBJ_Angle_Bottom_STD_V_13 - 49
 *     ICM_Object_Prot13_B.OBJ_Visibility_Side_V_13 - 50
 *     ICM_Object_Prot13_B.OBJ_Visibility_Side_13 - 51
 *     ICM_Object_Prot13_B.OBJ_Is_In_Drivable_Area_13 - 52
 *     ICM_Object_Prot13_B.OBJ_Is_In_Drivable_Area_V_13 - 53
 *     ICM_Object_Prot13_B.OBJ_Is_VeryClose_13 - 54
 *     ICM_Object_Prot13_B.OBJ_Is_VeryClose_V_13 - 55
 *     ICM_Object_Prot13_B.OBJ_Buffer_13 - 56
 */

/*********
 *  ICM_Object_Prot14_A - 27
 *     ICM_Object_Prot14_A.ICM_Object_Prot14_A_Header - 1
 *     ICM_Object_Prot14_A.OBJ_CRC_14 - 2
 *     ICM_Object_Prot14_A.OBJ_ID_14 - 3
 *     ICM_Object_Prot14_A.OBJ_Existence_Probability_14 - 4
 *     ICM_Object_Prot14_A.OBJ_Fusion_Source_14 - 5
 *     ICM_Object_Prot14_A.OBJ_Triggered_SDM_14 - 6
 *     ICM_Object_Prot14_A.OBJ_Motion_Category_14 - 7
 *     ICM_Object_Prot14_A.OBJ_Moving_IN_Probability_14 - 8
 *     ICM_Object_Prot14_A.OBJ_Object_Age_14 - 9
 *     ICM_Object_Prot14_A.OBJ_Measuring_Status_14 - 10
 *     ICM_Object_Prot14_A.OBJ_Object_Class_14 - 11
 *     ICM_Object_Prot14_A.OBJ_Class_Probability_14 - 12
 *     ICM_Object_Prot14_A.OBJ_Car_Probability_14 - 13
 *     ICM_Object_Prot14_A.OBJ_Truck_Probability_14 - 14
 *     ICM_Object_Prot14_A.OBJ_Bike_Probability_14 - 15
 *     ICM_Object_Prot14_A.OBJ_Camera_Source_14 - 16
 *     ICM_Object_Prot14_A.OBJ_Motion_Status_14 - 17
 *     ICM_Object_Prot14_A.OBJ_Motion_Orientation_14 - 18
 *     ICM_Object_Prot14_A.OBJ_Has_Cut_Lane_14 - 19
 *     ICM_Object_Prot14_A.OBJ_Has_Cut_Path_14 - 20
 *     ICM_Object_Prot14_A.OBJ_Brake_Light_14 - 21
 *     ICM_Object_Prot14_A.OBJ_Turn_Indicator_Right_14 - 22
 *     ICM_Object_Prot14_A.OBJ_Turn_Indicator_Left_14 - 23
 *     ICM_Object_Prot14_A.OBJ_Light_Indicator_Validity_14 - 24
 *     ICM_Object_Prot14_A.OBJ_Right_Out_Of_Image_14 - 25
 *     ICM_Object_Prot14_A.OBJ_Left_Out_Of_Image_14 - 26
 *     ICM_Object_Prot14_A.OBJ_Right_Out_Of_Image_V_14 - 27
 *     ICM_Object_Prot14_A.OBJ_Left_Out_Of_Image_V_14 - 28
 *     ICM_Object_Prot14_A.OBJ_Top_Out_Of_Image_14 - 29
 *     ICM_Object_Prot14_A.OBJ_Bottom_Out_Of_Image_14 - 30
 *     ICM_Object_Prot14_A.OBJ_Top_Out_Of_Image_V_14 - 31
 *     ICM_Object_Prot14_A.OBJ_Bottom_Out_Of_Image_V_14 - 32
 *     ICM_Object_Prot14_A.OBJ_Lane_Assignment_14 - 33
 *     ICM_Object_Prot14_A.OBJ_Lane_Assignment_V_14 - 34
 *     ICM_Object_Prot14_A.OBJ_Age_Seconds_14 - 35
 *     ICM_Object_Prot14_A.OBJ_Age_Seconds_V_14 - 36
 *     ICM_Object_Prot14_A.OBJ_Width_14 - 37
 *     ICM_Object_Prot14_A.OBJ_Width_V_14 - 38
 *     ICM_Object_Prot14_A.OBJ_Width_STD_14 - 39
 *     ICM_Object_Prot14_A.OBJ_Width_STD_V_14 - 40
 *     ICM_Object_Prot14_A.OBJ_Length_14 - 41
 *     ICM_Object_Prot14_A.OBJ_Length_V_14 - 42
 *     ICM_Object_Prot14_A.OBJ_Length_STD_14 - 43
 *     ICM_Object_Prot14_A.OBJ_Length_STD_V_14 - 44
 *     ICM_Object_Prot14_A.OBJ_Height_14 - 45
 *     ICM_Object_Prot14_A.OBJ_Height_V_14 - 46
 *     ICM_Object_Prot14_A.OBJ_Height_STD_14 - 47
 *     ICM_Object_Prot14_A.OBJ_Height_STD_V_14 - 48
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Velocity_14 - 49
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Velocity_V_14 - 50
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Velocity_STD_14 - 51
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Vel_STD_V_14 - 52
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Velocity_14 - 53
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Velocity_V_14 - 54
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Velocity_STD_14 - 55
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Vel_STD_V_14 - 56
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Acc_14 - 57
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Acc_V_14 - 58
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Acc_STD_14 - 59
 *     ICM_Object_Prot14_A.OBJ_Abs_Long_Acc_STD_V_14 - 60
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Acc_14 - 61
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Acc_V_14 - 62
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Acc_STD_14 - 63
 *     ICM_Object_Prot14_A.OBJ_Abs_Lat_Acc_STD_V_14 - 64
 *     ICM_Object_Prot14_A.OBJ_Abs_Acceleration_14 - 65
 *     ICM_Object_Prot14_A.OBJ_Abs_Acceleration_V_14 - 66
 *     ICM_Object_Prot14_A.OBJ_Abs_Acc_STD_14 - 67
 *     ICM_Object_Prot14_A.OBJ_Abs_Acc_STD_V_14 - 68
 *     ICM_Object_Prot14_A.OBJ_Inv_TTC_14 - 69
 *     ICM_Object_Prot14_A.OBJ_Inv_TTC_V_14 - 70
 *     ICM_Object_Prot14_A.OBJ_Inv_TTC_STD_14 - 71
 *     ICM_Object_Prot14_A.OBJ_Inv_TTC_STD_V_14 - 72
 *     ICM_Object_Prot14_A.OBJ_Relative_Long_Acc_14 - 73
 *     ICM_Object_Prot14_A.OBJ_Relative_Long_Acc_V_14 - 74
 *     ICM_Object_Prot14_A.OBJ_Relative_Long_Acc_STD_14 - 75
 *     ICM_Object_Prot14_A.OBJ_Rel_Long_Acc_STD_V_14 - 76
 */

/*********
 *  ICM_Object_Prot14_B - 28
 *     ICM_Object_Prot14_B.ICM_Object_Prot14_B_Header - 1
 *     ICM_Object_Prot14_B.OBJ_Relative_Long_Velocity_14 - 2
 *     ICM_Object_Prot14_B.OBJ_Relative_Long_Velocity_V_14 - 3
 *     ICM_Object_Prot14_B.OBJ_Relative_Long_Vel_STD_14 - 4
 *     ICM_Object_Prot14_B.OBJ_Rel_Long_Vel_STD_V_14 - 5
 *     ICM_Object_Prot14_B.OBJ_Relative_Lat_Velocity_14 - 6
 *     ICM_Object_Prot14_B.OBJ_Relative_Lat_Velocity_V_14 - 7
 *     ICM_Object_Prot14_B.OBJ_Relative_Lat_Velocity_STD_14 - 8
 *     ICM_Object_Prot14_B.OBJ_Rel_Lat_Vel_STD_V_14 - 9
 *     ICM_Object_Prot14_B.OBJ_Long_Distance_14 - 10
 *     ICM_Object_Prot14_B.OBJ_Long_Distance_V_14 - 11
 *     ICM_Object_Prot14_B.OBJ_Long_Distance_STD_14 - 12
 *     ICM_Object_Prot14_B.OBJ_Long_Distance_STD_V_14 - 13
 *     ICM_Object_Prot14_B.OBJ_Lat_Distance_14 - 14
 *     ICM_Object_Prot14_B.OBJ_Lat_Distance_V_14 - 15
 *     ICM_Object_Prot14_B.OBJ_Lat_Distance_STD_14 - 16
 *     ICM_Object_Prot14_B.OBJ_Lat_Distance_STD_V_14 - 17
 *     ICM_Object_Prot14_B.OBJ_Absolute_Speed_14 - 18
 *     ICM_Object_Prot14_B.OBJ_Absolute_Speed_V_14 - 19
 *     ICM_Object_Prot14_B.OBJ_Absolute_Speed_STD_14 - 20
 *     ICM_Object_Prot14_B.OBJ_Absolute_Speed_STD_V_14 - 21
 *     ICM_Object_Prot14_B.OBJ_Heading_14 - 22
 *     ICM_Object_Prot14_B.OBJ_Heading_V_14 - 23
 *     ICM_Object_Prot14_B.OBJ_Heading_STD_14 - 24
 *     ICM_Object_Prot14_B.OBJ_Heading_STD_V_14 - 25
 *     ICM_Object_Prot14_B.OBJ_Angle_Rate_STD_14 - 26
 *     ICM_Object_Prot14_B.OBJ_Angle_Rate_STD_V_14 - 27
 *     ICM_Object_Prot14_B.OBJ_Angle_Rate_14 - 28
 *     ICM_Object_Prot14_B.OBJ_Angle_Rate_V_14 - 29
 *     ICM_Object_Prot14_B.OBJ_Angle_Right_14 - 30
 *     ICM_Object_Prot14_B.OBJ_Angle_Right_V_14 - 31
 *     ICM_Object_Prot14_B.OBJ_Angle_Right_STD_14 - 32
 *     ICM_Object_Prot14_B.OBJ_Angle_Right_STD_V_14 - 33
 *     ICM_Object_Prot14_B.OBJ_Angle_Left_14 - 34
 *     ICM_Object_Prot14_B.OBJ_Angle_Left_V_14 - 35
 *     ICM_Object_Prot14_B.OBJ_Angle_Left_STD_14 - 36
 *     ICM_Object_Prot14_B.OBJ_Angle_Left_STD_V_14 - 37
 *     ICM_Object_Prot14_B.OBJ_Angle_Side_14 - 38
 *     ICM_Object_Prot14_B.OBJ_Angle_Side_V_14 - 39
 *     ICM_Object_Prot14_B.OBJ_Angle_Side_STD_14 - 40
 *     ICM_Object_Prot14_B.OBJ_Angle_Side_STD_V_14 - 41
 *     ICM_Object_Prot14_B.OBJ_Angle_Mid_V_14 - 42
 *     ICM_Object_Prot14_B.OBJ_Angle_Mid_14 - 43
 *     ICM_Object_Prot14_B.OBJ_Angle_Mid_STD_14 - 44
 *     ICM_Object_Prot14_B.OBJ_Angle_Mid_STD_V_14 - 45
 *     ICM_Object_Prot14_B.OBJ_Angle_Bottom_V_14 - 46
 *     ICM_Object_Prot14_B.OBJ_Angle_Bottom_14 - 47
 *     ICM_Object_Prot14_B.OBJ_Angle_Bottom_STD_14 - 48
 *     ICM_Object_Prot14_B.OBJ_Angle_Bottom_STD_V_14 - 49
 *     ICM_Object_Prot14_B.OBJ_Visibility_Side_V_14 - 50
 *     ICM_Object_Prot14_B.OBJ_Visibility_Side_14 - 51
 *     ICM_Object_Prot14_B.OBJ_Is_In_Drivable_Area_14 - 52
 *     ICM_Object_Prot14_B.OBJ_Is_In_Drivable_Area_V_14 - 53
 *     ICM_Object_Prot14_B.OBJ_Is_VeryClose_14 - 54
 *     ICM_Object_Prot14_B.OBJ_Is_VeryClose_V_14 - 55
 *     ICM_Object_Prot14_B.OBJ_Buffer_14 - 56
 */

/*********
 *  ICM_Object_Prot15_A - 29
 *     ICM_Object_Prot15_A.ICM_Object_Prot15_A_Header - 1
 *     ICM_Object_Prot15_A.OBJ_CRC_15 - 2
 *     ICM_Object_Prot15_A.OBJ_ID_15 - 3
 *     ICM_Object_Prot15_A.OBJ_Existence_Probability_15 - 4
 *     ICM_Object_Prot15_A.OBJ_Fusion_Source_15 - 5
 *     ICM_Object_Prot15_A.OBJ_Triggered_SDM_15 - 6
 *     ICM_Object_Prot15_A.OBJ_Motion_Category_15 - 7
 *     ICM_Object_Prot15_A.OBJ_Moving_IN_Probability_15 - 8
 *     ICM_Object_Prot15_A.OBJ_Object_Age_15 - 9
 *     ICM_Object_Prot15_A.OBJ_Measuring_Status_15 - 10
 *     ICM_Object_Prot15_A.OBJ_Object_Class_15 - 11
 *     ICM_Object_Prot15_A.OBJ_Class_Probability_15 - 12
 *     ICM_Object_Prot15_A.OBJ_Car_Probability_15 - 13
 *     ICM_Object_Prot15_A.OBJ_Truck_Probability_15 - 14
 *     ICM_Object_Prot15_A.OBJ_Bike_Probability_15 - 15
 *     ICM_Object_Prot15_A.OBJ_Camera_Source_15 - 16
 *     ICM_Object_Prot15_A.OBJ_Motion_Status_15 - 17
 *     ICM_Object_Prot15_A.OBJ_Motion_Orientation_15 - 18
 *     ICM_Object_Prot15_A.OBJ_Has_Cut_Lane_15 - 19
 *     ICM_Object_Prot15_A.OBJ_Has_Cut_Path_15 - 20
 *     ICM_Object_Prot15_A.OBJ_Brake_Light_15 - 21
 *     ICM_Object_Prot15_A.OBJ_Turn_Indicator_Right_15 - 22
 *     ICM_Object_Prot15_A.OBJ_Turn_Indicator_Left_15 - 23
 *     ICM_Object_Prot15_A.OBJ_Light_Indicator_Validity_15 - 24
 *     ICM_Object_Prot15_A.OBJ_Right_Out_Of_Image_15 - 25
 *     ICM_Object_Prot15_A.OBJ_Left_Out_Of_Image_15 - 26
 *     ICM_Object_Prot15_A.OBJ_Right_Out_Of_Image_V_15 - 27
 *     ICM_Object_Prot15_A.OBJ_Left_Out_Of_Image_V_15 - 28
 *     ICM_Object_Prot15_A.OBJ_Top_Out_Of_Image_15 - 29
 *     ICM_Object_Prot15_A.OBJ_Bottom_Out_Of_Image_15 - 30
 *     ICM_Object_Prot15_A.OBJ_Top_Out_Of_Image_V_15 - 31
 *     ICM_Object_Prot15_A.OBJ_Bottom_Out_Of_Image_V_15 - 32
 *     ICM_Object_Prot15_A.OBJ_Lane_Assignment_15 - 33
 *     ICM_Object_Prot15_A.OBJ_Lane_Assignment_V_15 - 34
 *     ICM_Object_Prot15_A.OBJ_Age_Seconds_15 - 35
 *     ICM_Object_Prot15_A.OBJ_Age_Seconds_V_15 - 36
 *     ICM_Object_Prot15_A.OBJ_Width_15 - 37
 *     ICM_Object_Prot15_A.OBJ_Width_V_15 - 38
 *     ICM_Object_Prot15_A.OBJ_Width_STD_15 - 39
 *     ICM_Object_Prot15_A.OBJ_Width_STD_V_15 - 40
 *     ICM_Object_Prot15_A.OBJ_Length_15 - 41
 *     ICM_Object_Prot15_A.OBJ_Length_V_15 - 42
 *     ICM_Object_Prot15_A.OBJ_Length_STD_15 - 43
 *     ICM_Object_Prot15_A.OBJ_Length_STD_V_15 - 44
 *     ICM_Object_Prot15_A.OBJ_Height_15 - 45
 *     ICM_Object_Prot15_A.OBJ_Height_V_15 - 46
 *     ICM_Object_Prot15_A.OBJ_Height_STD_15 - 47
 *     ICM_Object_Prot15_A.OBJ_Height_STD_V_15 - 48
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Velocity_15 - 49
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Velocity_V_15 - 50
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Velocity_STD_15 - 51
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Vel_STD_V_15 - 52
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Velocity_15 - 53
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Velocity_V_15 - 54
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Velocity_STD_15 - 55
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Vel_STD_V_15 - 56
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Acc_15 - 57
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Acc_V_15 - 58
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Acc_STD_15 - 59
 *     ICM_Object_Prot15_A.OBJ_Abs_Long_Acc_STD_V_15 - 60
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Acc_15 - 61
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Acc_V_15 - 62
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Acc_STD_15 - 63
 *     ICM_Object_Prot15_A.OBJ_Abs_Lat_Acc_STD_V_15 - 64
 *     ICM_Object_Prot15_A.OBJ_Abs_Acceleration_15 - 65
 *     ICM_Object_Prot15_A.OBJ_Abs_Acceleration_V_15 - 66
 *     ICM_Object_Prot15_A.OBJ_Abs_Acc_STD_15 - 67
 *     ICM_Object_Prot15_A.OBJ_Abs_Acc_STD_V_15 - 68
 *     ICM_Object_Prot15_A.OBJ_Inv_TTC_15 - 69
 *     ICM_Object_Prot15_A.OBJ_Inv_TTC_V_15 - 70
 *     ICM_Object_Prot15_A.OBJ_Inv_TTC_STD_15 - 71
 *     ICM_Object_Prot15_A.OBJ_Inv_TTC_STD_V_15 - 72
 *     ICM_Object_Prot15_A.OBJ_Relative_Long_Acc_15 - 73
 *     ICM_Object_Prot15_A.OBJ_Relative_Long_Acc_V_15 - 74
 *     ICM_Object_Prot15_A.OBJ_Relative_Long_Acc_STD_15 - 75
 *     ICM_Object_Prot15_A.OBJ_Rel_Long_Acc_STD_V_15 - 76
 */

/*********
 *  ICM_Object_Prot15_B - 30
 *     ICM_Object_Prot15_B.ICM_Object_Prot15_B_Header - 1
 *     ICM_Object_Prot15_B.OBJ_Relative_Long_Velocity_15 - 2
 *     ICM_Object_Prot15_B.OBJ_Relative_Long_Velocity_V_15 - 3
 *     ICM_Object_Prot15_B.OBJ_Relative_Long_Vel_STD_15 - 4
 *     ICM_Object_Prot15_B.OBJ_Rel_Long_Vel_STD_V_15 - 5
 *     ICM_Object_Prot15_B.OBJ_Relative_Lat_Velocity_15 - 6
 *     ICM_Object_Prot15_B.OBJ_Relative_Lat_Velocity_V_15 - 7
 *     ICM_Object_Prot15_B.OBJ_Relative_Lat_Velocity_STD_15 - 8
 *     ICM_Object_Prot15_B.OBJ_Rel_Lat_Vel_STD_V_15 - 9
 *     ICM_Object_Prot15_B.OBJ_Long_Distance_15 - 10
 *     ICM_Object_Prot15_B.OBJ_Long_Distance_V_15 - 11
 *     ICM_Object_Prot15_B.OBJ_Long_Distance_STD_15 - 12
 *     ICM_Object_Prot15_B.OBJ_Long_Distance_STD_V_15 - 13
 *     ICM_Object_Prot15_B.OBJ_Lat_Distance_15 - 14
 *     ICM_Object_Prot15_B.OBJ_Lat_Distance_V_15 - 15
 *     ICM_Object_Prot15_B.OBJ_Lat_Distance_STD_15 - 16
 *     ICM_Object_Prot15_B.OBJ_Lat_Distance_STD_V_15 - 17
 *     ICM_Object_Prot15_B.OBJ_Absolute_Speed_15 - 18
 *     ICM_Object_Prot15_B.OBJ_Absolute_Speed_V_15 - 19
 *     ICM_Object_Prot15_B.OBJ_Absolute_Speed_STD_15 - 20
 *     ICM_Object_Prot15_B.OBJ_Absolute_Speed_STD_V_15 - 21
 *     ICM_Object_Prot15_B.OBJ_Heading_15 - 22
 *     ICM_Object_Prot15_B.OBJ_Heading_V_15 - 23
 *     ICM_Object_Prot15_B.OBJ_Heading_STD_15 - 24
 *     ICM_Object_Prot15_B.OBJ_Heading_STD_V_15 - 25
 *     ICM_Object_Prot15_B.OBJ_Angle_Rate_STD_15 - 26
 *     ICM_Object_Prot15_B.OBJ_Angle_Rate_STD_V_15 - 27
 *     ICM_Object_Prot15_B.OBJ_Angle_Rate_15 - 28
 *     ICM_Object_Prot15_B.OBJ_Angle_Rate_V_15 - 29
 *     ICM_Object_Prot15_B.OBJ_Angle_Right_15 - 30
 *     ICM_Object_Prot15_B.OBJ_Angle_Right_V_15 - 31
 *     ICM_Object_Prot15_B.OBJ_Angle_Right_STD_15 - 32
 *     ICM_Object_Prot15_B.OBJ_Angle_Right_STD_V_15 - 33
 *     ICM_Object_Prot15_B.OBJ_Angle_Left_15 - 34
 *     ICM_Object_Prot15_B.OBJ_Angle_Left_V_15 - 35
 *     ICM_Object_Prot15_B.OBJ_Angle_Left_STD_15 - 36
 *     ICM_Object_Prot15_B.OBJ_Angle_Left_STD_V_15 - 37
 *     ICM_Object_Prot15_B.OBJ_Angle_Side_15 - 38
 *     ICM_Object_Prot15_B.OBJ_Angle_Side_V_15 - 39
 *     ICM_Object_Prot15_B.OBJ_Angle_Side_STD_15 - 40
 *     ICM_Object_Prot15_B.OBJ_Angle_Side_STD_V_15 - 41
 *     ICM_Object_Prot15_B.OBJ_Angle_Mid_V_15 - 42
 *     ICM_Object_Prot15_B.OBJ_Angle_Mid_15 - 43
 *     ICM_Object_Prot15_B.OBJ_Angle_Mid_STD_15 - 44
 *     ICM_Object_Prot15_B.OBJ_Angle_Mid_STD_V_15 - 45
 *     ICM_Object_Prot15_B.OBJ_Angle_Bottom_V_15 - 46
 *     ICM_Object_Prot15_B.OBJ_Angle_Bottom_15 - 47
 *     ICM_Object_Prot15_B.OBJ_Angle_Bottom_STD_15 - 48
 *     ICM_Object_Prot15_B.OBJ_Angle_Bottom_STD_V_15 - 49
 *     ICM_Object_Prot15_B.OBJ_Visibility_Side_V_15 - 50
 *     ICM_Object_Prot15_B.OBJ_Visibility_Side_15 - 51
 *     ICM_Object_Prot15_B.OBJ_Is_In_Drivable_Area_15 - 52
 *     ICM_Object_Prot15_B.OBJ_Is_In_Drivable_Area_V_15 - 53
 *     ICM_Object_Prot15_B.OBJ_Is_VeryClose_15 - 54
 *     ICM_Object_Prot15_B.OBJ_Is_VeryClose_V_15 - 55
 *     ICM_Object_Prot15_B.OBJ_Buffer_15 - 56
 */

/*********
 *  ICM_Object_Prot16_A - 31
 *     ICM_Object_Prot16_A.ICM_Object_Prot16_A_Header - 1
 *     ICM_Object_Prot16_A.OBJ_CRC_16 - 2
 *     ICM_Object_Prot16_A.OBJ_ID_16 - 3
 *     ICM_Object_Prot16_A.OBJ_Existence_Probability_16 - 4
 *     ICM_Object_Prot16_A.OBJ_Fusion_Source_16 - 5
 *     ICM_Object_Prot16_A.OBJ_Triggered_SDM_16 - 6
 *     ICM_Object_Prot16_A.OBJ_Motion_Category_16 - 7
 *     ICM_Object_Prot16_A.OBJ_Moving_IN_Probability_16 - 8
 *     ICM_Object_Prot16_A.OBJ_Object_Age_16 - 9
 *     ICM_Object_Prot16_A.OBJ_Measuring_Status_16 - 10
 *     ICM_Object_Prot16_A.OBJ_Object_Class_16 - 11
 *     ICM_Object_Prot16_A.OBJ_Class_Probability_16 - 12
 *     ICM_Object_Prot16_A.OBJ_Car_Probability_16 - 13
 *     ICM_Object_Prot16_A.OBJ_Truck_Probability_16 - 14
 *     ICM_Object_Prot16_A.OBJ_Bike_Probability_16 - 15
 *     ICM_Object_Prot16_A.OBJ_Camera_Source_16 - 16
 *     ICM_Object_Prot16_A.OBJ_Motion_Status_16 - 17
 *     ICM_Object_Prot16_A.OBJ_Motion_Orientation_16 - 18
 *     ICM_Object_Prot16_A.OBJ_Has_Cut_Lane_16 - 19
 *     ICM_Object_Prot16_A.OBJ_Has_Cut_Path_16 - 20
 *     ICM_Object_Prot16_A.OBJ_Brake_Light_16 - 21
 *     ICM_Object_Prot16_A.OBJ_Turn_Indicator_Right_16 - 22
 *     ICM_Object_Prot16_A.OBJ_Turn_Indicator_Left_16 - 23
 *     ICM_Object_Prot16_A.OBJ_Light_Indicator_Validity_16 - 24
 *     ICM_Object_Prot16_A.OBJ_Right_Out_Of_Image_16 - 25
 *     ICM_Object_Prot16_A.OBJ_Left_Out_Of_Image_16 - 26
 *     ICM_Object_Prot16_A.OBJ_Right_Out_Of_Image_V_16 - 27
 *     ICM_Object_Prot16_A.OBJ_Left_Out_Of_Image_V_16 - 28
 *     ICM_Object_Prot16_A.OBJ_Top_Out_Of_Image_16 - 29
 *     ICM_Object_Prot16_A.OBJ_Bottom_Out_Of_Image_16 - 30
 *     ICM_Object_Prot16_A.OBJ_Top_Out_Of_Image_V_16 - 31
 *     ICM_Object_Prot16_A.OBJ_Bottom_Out_Of_Image_V_16 - 32
 *     ICM_Object_Prot16_A.OBJ_Lane_Assignment_16 - 33
 *     ICM_Object_Prot16_A.OBJ_Lane_Assignment_V_16 - 34
 *     ICM_Object_Prot16_A.OBJ_Age_Seconds_16 - 35
 *     ICM_Object_Prot16_A.OBJ_Age_Seconds_V_16 - 36
 *     ICM_Object_Prot16_A.OBJ_Width_16 - 37
 *     ICM_Object_Prot16_A.OBJ_Width_V_16 - 38
 *     ICM_Object_Prot16_A.OBJ_Width_STD_16 - 39
 *     ICM_Object_Prot16_A.OBJ_Width_STD_V_16 - 40
 *     ICM_Object_Prot16_A.OBJ_Length_16 - 41
 *     ICM_Object_Prot16_A.OBJ_Length_V_16 - 42
 *     ICM_Object_Prot16_A.OBJ_Length_STD_16 - 43
 *     ICM_Object_Prot16_A.OBJ_Length_STD_V_16 - 44
 *     ICM_Object_Prot16_A.OBJ_Height_16 - 45
 *     ICM_Object_Prot16_A.OBJ_Height_V_16 - 46
 *     ICM_Object_Prot16_A.OBJ_Height_STD_16 - 47
 *     ICM_Object_Prot16_A.OBJ_Height_STD_V_16 - 48
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Velocity_16 - 49
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Velocity_V_16 - 50
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Velocity_STD_16 - 51
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Vel_STD_V_16 - 52
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Velocity_16 - 53
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Velocity_V_16 - 54
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Velocity_STD_16 - 55
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Vel_STD_V_16 - 56
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Acc_16 - 57
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Acc_V_16 - 58
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Acc_STD_16 - 59
 *     ICM_Object_Prot16_A.OBJ_Abs_Long_Acc_STD_V_16 - 60
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Acc_16 - 61
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Acc_V_16 - 62
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Acc_STD_16 - 63
 *     ICM_Object_Prot16_A.OBJ_Abs_Lat_Acc_STD_V_16 - 64
 *     ICM_Object_Prot16_A.OBJ_Abs_Acceleration_16 - 65
 *     ICM_Object_Prot16_A.OBJ_Abs_Acceleration_V_16 - 66
 *     ICM_Object_Prot16_A.OBJ_Abs_Acc_STD_16 - 67
 *     ICM_Object_Prot16_A.OBJ_Abs_Acc_STD_V_16 - 68
 *     ICM_Object_Prot16_A.OBJ_Inv_TTC_16 - 69
 *     ICM_Object_Prot16_A.OBJ_Inv_TTC_V_16 - 70
 *     ICM_Object_Prot16_A.OBJ_Inv_TTC_STD_16 - 71
 *     ICM_Object_Prot16_A.OBJ_Inv_TTC_STD_V_16 - 72
 *     ICM_Object_Prot16_A.OBJ_Relative_Long_Acc_16 - 73
 *     ICM_Object_Prot16_A.OBJ_Relative_Long_Acc_V_16 - 74
 *     ICM_Object_Prot16_A.OBJ_Relative_Long_Acc_STD_16 - 75
 *     ICM_Object_Prot16_A.OBJ_Rel_Long_Acc_STD_V_16 - 76
 */

/*********
 *  ICM_Object_Prot16_B - 32
 *     ICM_Object_Prot16_B.ICM_Object_Prot16_B_Header - 1
 *     ICM_Object_Prot16_B.OBJ_Relative_Long_Velocity_16 - 2
 *     ICM_Object_Prot16_B.OBJ_Relative_Long_Velocity_V_16 - 3
 *     ICM_Object_Prot16_B.OBJ_Relative_Long_Vel_STD_16 - 4
 *     ICM_Object_Prot16_B.OBJ_Rel_Long_Vel_STD_V_16 - 5
 *     ICM_Object_Prot16_B.OBJ_Relative_Lat_Velocity_16 - 6
 *     ICM_Object_Prot16_B.OBJ_Relative_Lat_Velocity_V_16 - 7
 *     ICM_Object_Prot16_B.OBJ_Relative_Lat_Velocity_STD_16 - 8
 *     ICM_Object_Prot16_B.OBJ_Rel_Lat_Vel_STD_V_16 - 9
 *     ICM_Object_Prot16_B.OBJ_Long_Distance_16 - 10
 *     ICM_Object_Prot16_B.OBJ_Long_Distance_V_16 - 11
 *     ICM_Object_Prot16_B.OBJ_Long_Distance_STD_16 - 12
 *     ICM_Object_Prot16_B.OBJ_Long_Distance_STD_V_16 - 13
 *     ICM_Object_Prot16_B.OBJ_Lat_Distance_16 - 14
 *     ICM_Object_Prot16_B.OBJ_Lat_Distance_V_16 - 15
 *     ICM_Object_Prot16_B.OBJ_Lat_Distance_STD_16 - 16
 *     ICM_Object_Prot16_B.OBJ_Lat_Distance_STD_V_16 - 17
 *     ICM_Object_Prot16_B.OBJ_Absolute_Speed_16 - 18
 *     ICM_Object_Prot16_B.OBJ_Absolute_Speed_V_16 - 19
 *     ICM_Object_Prot16_B.OBJ_Absolute_Speed_STD_16 - 20
 *     ICM_Object_Prot16_B.OBJ_Absolute_Speed_STD_V_16 - 21
 *     ICM_Object_Prot16_B.OBJ_Heading_16 - 22
 *     ICM_Object_Prot16_B.OBJ_Heading_V_16 - 23
 *     ICM_Object_Prot16_B.OBJ_Heading_STD_16 - 24
 *     ICM_Object_Prot16_B.OBJ_Heading_STD_V_16 - 25
 *     ICM_Object_Prot16_B.OBJ_Angle_Rate_STD_16 - 26
 *     ICM_Object_Prot16_B.OBJ_Angle_Rate_STD_V_16 - 27
 *     ICM_Object_Prot16_B.OBJ_Angle_Rate_16 - 28
 *     ICM_Object_Prot16_B.OBJ_Angle_Rate_V_16 - 29
 *     ICM_Object_Prot16_B.OBJ_Angle_Right_16 - 30
 *     ICM_Object_Prot16_B.OBJ_Angle_Right_V_16 - 31
 *     ICM_Object_Prot16_B.OBJ_Angle_Right_STD_16 - 32
 *     ICM_Object_Prot16_B.OBJ_Angle_Right_STD_V_16 - 33
 *     ICM_Object_Prot16_B.OBJ_Angle_Left_16 - 34
 *     ICM_Object_Prot16_B.OBJ_Angle_Left_V_16 - 35
 *     ICM_Object_Prot16_B.OBJ_Angle_Left_STD_16 - 36
 *     ICM_Object_Prot16_B.OBJ_Angle_Left_STD_V_16 - 37
 *     ICM_Object_Prot16_B.OBJ_Angle_Side_16 - 38
 *     ICM_Object_Prot16_B.OBJ_Angle_Side_V_16 - 39
 *     ICM_Object_Prot16_B.OBJ_Angle_Side_STD_16 - 40
 *     ICM_Object_Prot16_B.OBJ_Angle_Side_STD_V_16 - 41
 *     ICM_Object_Prot16_B.OBJ_Angle_Mid_V_16 - 42
 *     ICM_Object_Prot16_B.OBJ_Angle_Mid_16 - 43
 *     ICM_Object_Prot16_B.OBJ_Angle_Mid_STD_16 - 44
 *     ICM_Object_Prot16_B.OBJ_Angle_Mid_STD_V_16 - 45
 *     ICM_Object_Prot16_B.OBJ_Angle_Bottom_V_16 - 46
 *     ICM_Object_Prot16_B.OBJ_Angle_Bottom_16 - 47
 *     ICM_Object_Prot16_B.OBJ_Angle_Bottom_STD_16 - 48
 *     ICM_Object_Prot16_B.OBJ_Angle_Bottom_STD_V_16 - 49
 *     ICM_Object_Prot16_B.OBJ_Visibility_Side_V_16 - 50
 *     ICM_Object_Prot16_B.OBJ_Visibility_Side_16 - 51
 *     ICM_Object_Prot16_B.OBJ_Is_In_Drivable_Area_16 - 52
 *     ICM_Object_Prot16_B.OBJ_Is_In_Drivable_Area_V_16 - 53
 *     ICM_Object_Prot16_B.OBJ_Is_VeryClose_16 - 54
 *     ICM_Object_Prot16_B.OBJ_Is_VeryClose_V_16 - 55
 *     ICM_Object_Prot16_B.OBJ_Buffer_16 - 56
 */

/*********
 *  ICM_Object_Prot17_A - 33
 *     ICM_Object_Prot17_A.ICM_Object_Prot17_A_Header - 1
 *     ICM_Object_Prot17_A.OBJ_CRC_17 - 2
 *     ICM_Object_Prot17_A.OBJ_ID_17 - 3
 *     ICM_Object_Prot17_A.OBJ_Existence_Probability_17 - 4
 *     ICM_Object_Prot17_A.OBJ_Fusion_Source_17 - 5
 *     ICM_Object_Prot17_A.OBJ_Triggered_SDM_17 - 6
 *     ICM_Object_Prot17_A.OBJ_Motion_Category_17 - 7
 *     ICM_Object_Prot17_A.OBJ_Moving_IN_Probability_17 - 8
 *     ICM_Object_Prot17_A.OBJ_Object_Age_17 - 9
 *     ICM_Object_Prot17_A.OBJ_Measuring_Status_17 - 10
 *     ICM_Object_Prot17_A.OBJ_Object_Class_17 - 11
 *     ICM_Object_Prot17_A.OBJ_Class_Probability_17 - 12
 *     ICM_Object_Prot17_A.OBJ_Car_Probability_17 - 13
 *     ICM_Object_Prot17_A.OBJ_Truck_Probability_17 - 14
 *     ICM_Object_Prot17_A.OBJ_Bike_Probability_17 - 15
 *     ICM_Object_Prot17_A.OBJ_Camera_Source_17 - 16
 *     ICM_Object_Prot17_A.OBJ_Motion_Status_17 - 17
 *     ICM_Object_Prot17_A.OBJ_Motion_Orientation_17 - 18
 *     ICM_Object_Prot17_A.OBJ_Has_Cut_Lane_17 - 19
 *     ICM_Object_Prot17_A.OBJ_Has_Cut_Path_17 - 20
 *     ICM_Object_Prot17_A.OBJ_Brake_Light_17 - 21
 *     ICM_Object_Prot17_A.OBJ_Turn_Indicator_Right_17 - 22
 *     ICM_Object_Prot17_A.OBJ_Turn_Indicator_Left_17 - 23
 *     ICM_Object_Prot17_A.OBJ_Light_Indicator_Validity_17 - 24
 *     ICM_Object_Prot17_A.OBJ_Right_Out_Of_Image_17 - 25
 *     ICM_Object_Prot17_A.OBJ_Left_Out_Of_Image_17 - 26
 *     ICM_Object_Prot17_A.OBJ_Right_Out_Of_Image_V_17 - 27
 *     ICM_Object_Prot17_A.OBJ_Left_Out_Of_Image_V_17 - 28
 *     ICM_Object_Prot17_A.OBJ_Top_Out_Of_Image_17 - 29
 *     ICM_Object_Prot17_A.OBJ_Bottom_Out_Of_Image_17 - 30
 *     ICM_Object_Prot17_A.OBJ_Top_Out_Of_Image_V_17 - 31
 *     ICM_Object_Prot17_A.OBJ_Bottom_Out_Of_Image_V_17 - 32
 *     ICM_Object_Prot17_A.OBJ_Lane_Assignment_17 - 33
 *     ICM_Object_Prot17_A.OBJ_Lane_Assignment_V_17 - 34
 *     ICM_Object_Prot17_A.OBJ_Age_Seconds_17 - 35
 *     ICM_Object_Prot17_A.OBJ_Age_Seconds_V_17 - 36
 *     ICM_Object_Prot17_A.OBJ_Width_17 - 37
 *     ICM_Object_Prot17_A.OBJ_Width_V_17 - 38
 *     ICM_Object_Prot17_A.OBJ_Width_STD_17 - 39
 *     ICM_Object_Prot17_A.OBJ_Width_STD_V_17 - 40
 *     ICM_Object_Prot17_A.OBJ_Length_17 - 41
 *     ICM_Object_Prot17_A.OBJ_Length_V_17 - 42
 *     ICM_Object_Prot17_A.OBJ_Length_STD_17 - 43
 *     ICM_Object_Prot17_A.OBJ_Length_STD_V_17 - 44
 *     ICM_Object_Prot17_A.OBJ_Height_17 - 45
 *     ICM_Object_Prot17_A.OBJ_Height_V_17 - 46
 *     ICM_Object_Prot17_A.OBJ_Height_STD_17 - 47
 *     ICM_Object_Prot17_A.OBJ_Height_STD_V_17 - 48
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Velocity_17 - 49
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Velocity_V_17 - 50
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Velocity_STD_17 - 51
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Vel_STD_V_17 - 52
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Velocity_17 - 53
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Velocity_V_17 - 54
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Velocity_STD_17 - 55
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Vel_STD_V_17 - 56
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Acc_17 - 57
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Acc_V_17 - 58
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Acc_STD_17 - 59
 *     ICM_Object_Prot17_A.OBJ_Abs_Long_Acc_STD_V_17 - 60
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Acc_17 - 61
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Acc_V_17 - 62
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Acc_STD_17 - 63
 *     ICM_Object_Prot17_A.OBJ_Abs_Lat_Acc_STD_V_17 - 64
 *     ICM_Object_Prot17_A.OBJ_Abs_Acceleration_17 - 65
 *     ICM_Object_Prot17_A.OBJ_Abs_Acceleration_V_17 - 66
 *     ICM_Object_Prot17_A.OBJ_Abs_Acc_STD_17 - 67
 *     ICM_Object_Prot17_A.OBJ_Abs_Acc_STD_V_17 - 68
 *     ICM_Object_Prot17_A.OBJ_Inv_TTC_17 - 69
 *     ICM_Object_Prot17_A.OBJ_Inv_TTC_V_17 - 70
 *     ICM_Object_Prot17_A.OBJ_Inv_TTC_STD_17 - 71
 *     ICM_Object_Prot17_A.OBJ_Inv_TTC_STD_V_17 - 72
 *     ICM_Object_Prot17_A.OBJ_Relative_Long_Acc_17 - 73
 *     ICM_Object_Prot17_A.OBJ_Relative_Long_Acc_V_17 - 74
 *     ICM_Object_Prot17_A.OBJ_Relative_Long_Acc_STD_17 - 75
 *     ICM_Object_Prot17_A.OBJ_Rel_Long_Acc_STD_V_17 - 76
 */

/*********
 *  ICM_Object_Prot17_B - 34
 *     ICM_Object_Prot17_B.ICM_Object_Prot17_B_Header - 1
 *     ICM_Object_Prot17_B.OBJ_Relative_Long_Velocity_17 - 2
 *     ICM_Object_Prot17_B.OBJ_Relative_Long_Velocity_V_17 - 3
 *     ICM_Object_Prot17_B.OBJ_Relative_Long_Vel_STD_17 - 4
 *     ICM_Object_Prot17_B.OBJ_Rel_Long_Vel_STD_V_17 - 5
 *     ICM_Object_Prot17_B.OBJ_Relative_Lat_Velocity_17 - 6
 *     ICM_Object_Prot17_B.OBJ_Relative_Lat_Velocity_V_17 - 7
 *     ICM_Object_Prot17_B.OBJ_Relative_Lat_Velocity_STD_17 - 8
 *     ICM_Object_Prot17_B.OBJ_Rel_Lat_Vel_STD_V_17 - 9
 *     ICM_Object_Prot17_B.OBJ_Long_Distance_17 - 10
 *     ICM_Object_Prot17_B.OBJ_Long_Distance_V_17 - 11
 *     ICM_Object_Prot17_B.OBJ_Long_Distance_STD_17 - 12
 *     ICM_Object_Prot17_B.OBJ_Long_Distance_STD_V_17 - 13
 *     ICM_Object_Prot17_B.OBJ_Lat_Distance_17 - 14
 *     ICM_Object_Prot17_B.OBJ_Lat_Distance_V_17 - 15
 *     ICM_Object_Prot17_B.OBJ_Lat_Distance_STD_17 - 16
 *     ICM_Object_Prot17_B.OBJ_Lat_Distance_STD_V_17 - 17
 *     ICM_Object_Prot17_B.OBJ_Absolute_Speed_17 - 18
 *     ICM_Object_Prot17_B.OBJ_Absolute_Speed_V_17 - 19
 *     ICM_Object_Prot17_B.OBJ_Absolute_Speed_STD_17 - 20
 *     ICM_Object_Prot17_B.OBJ_Absolute_Speed_STD_V_17 - 21
 *     ICM_Object_Prot17_B.OBJ_Heading_17 - 22
 *     ICM_Object_Prot17_B.OBJ_Heading_V_17 - 23
 *     ICM_Object_Prot17_B.OBJ_Heading_STD_17 - 24
 *     ICM_Object_Prot17_B.OBJ_Heading_STD_V_17 - 25
 *     ICM_Object_Prot17_B.OBJ_Angle_Rate_STD_17 - 26
 *     ICM_Object_Prot17_B.OBJ_Angle_Rate_STD_V_17 - 27
 *     ICM_Object_Prot17_B.OBJ_Angle_Rate_17 - 28
 *     ICM_Object_Prot17_B.OBJ_Angle_Rate_V_17 - 29
 *     ICM_Object_Prot17_B.OBJ_Angle_Right_17 - 30
 *     ICM_Object_Prot17_B.OBJ_Angle_Right_V_17 - 31
 *     ICM_Object_Prot17_B.OBJ_Angle_Right_STD_17 - 32
 *     ICM_Object_Prot17_B.OBJ_Angle_Right_STD_V_17 - 33
 *     ICM_Object_Prot17_B.OBJ_Angle_Left_17 - 34
 *     ICM_Object_Prot17_B.OBJ_Angle_Left_V_17 - 35
 *     ICM_Object_Prot17_B.OBJ_Angle_Left_STD_17 - 36
 *     ICM_Object_Prot17_B.OBJ_Angle_Left_STD_V_17 - 37
 *     ICM_Object_Prot17_B.OBJ_Angle_Side_17 - 38
 *     ICM_Object_Prot17_B.OBJ_Angle_Side_V_17 - 39
 *     ICM_Object_Prot17_B.OBJ_Angle_Side_STD_17 - 40
 *     ICM_Object_Prot17_B.OBJ_Angle_Side_STD_V_17 - 41
 *     ICM_Object_Prot17_B.OBJ_Angle_Mid_V_17 - 42
 *     ICM_Object_Prot17_B.OBJ_Angle_Mid_17 - 43
 *     ICM_Object_Prot17_B.OBJ_Angle_Mid_STD_17 - 44
 *     ICM_Object_Prot17_B.OBJ_Angle_Mid_STD_V_17 - 45
 *     ICM_Object_Prot17_B.OBJ_Angle_Bottom_V_17 - 46
 *     ICM_Object_Prot17_B.OBJ_Angle_Bottom_17 - 47
 *     ICM_Object_Prot17_B.OBJ_Angle_Bottom_STD_17 - 48
 *     ICM_Object_Prot17_B.OBJ_Angle_Bottom_STD_V_17 - 49
 *     ICM_Object_Prot17_B.OBJ_Visibility_Side_V_17 - 50
 *     ICM_Object_Prot17_B.OBJ_Visibility_Side_17 - 51
 *     ICM_Object_Prot17_B.OBJ_Is_In_Drivable_Area_17 - 52
 *     ICM_Object_Prot17_B.OBJ_Is_In_Drivable_Area_V_17 - 53
 *     ICM_Object_Prot17_B.OBJ_Is_VeryClose_17 - 54
 *     ICM_Object_Prot17_B.OBJ_Is_VeryClose_V_17 - 55
 *     ICM_Object_Prot17_B.OBJ_Buffer_17 - 56
 */

/*********
 *  ICM_Object_Prot18_A - 35
 *     ICM_Object_Prot18_A.ICM_Object_Prot18_A_Header - 1
 *     ICM_Object_Prot18_A.OBJ_CRC_18 - 2
 *     ICM_Object_Prot18_A.OBJ_ID_18 - 3
 *     ICM_Object_Prot18_A.OBJ_Existence_Probability_18 - 4
 *     ICM_Object_Prot18_A.OBJ_Fusion_Source_18 - 5
 *     ICM_Object_Prot18_A.OBJ_Triggered_SDM_18 - 6
 *     ICM_Object_Prot18_A.OBJ_Motion_Category_18 - 7
 *     ICM_Object_Prot18_A.OBJ_Moving_IN_Probability_18 - 8
 *     ICM_Object_Prot18_A.OBJ_Object_Age_18 - 9
 *     ICM_Object_Prot18_A.OBJ_Measuring_Status_18 - 10
 *     ICM_Object_Prot18_A.OBJ_Object_Class_18 - 11
 *     ICM_Object_Prot18_A.OBJ_Class_Probability_18 - 12
 *     ICM_Object_Prot18_A.OBJ_Car_Probability_18 - 13
 *     ICM_Object_Prot18_A.OBJ_Truck_Probability_18 - 14
 *     ICM_Object_Prot18_A.OBJ_Bike_Probability_18 - 15
 *     ICM_Object_Prot18_A.OBJ_Camera_Source_18 - 16
 *     ICM_Object_Prot18_A.OBJ_Motion_Status_18 - 17
 *     ICM_Object_Prot18_A.OBJ_Motion_Orientation_18 - 18
 *     ICM_Object_Prot18_A.OBJ_Has_Cut_Lane_18 - 19
 *     ICM_Object_Prot18_A.OBJ_Has_Cut_Path_18 - 20
 *     ICM_Object_Prot18_A.OBJ_Brake_Light_18 - 21
 *     ICM_Object_Prot18_A.OBJ_Turn_Indicator_Right_18 - 22
 *     ICM_Object_Prot18_A.OBJ_Turn_Indicator_Left_18 - 23
 *     ICM_Object_Prot18_A.OBJ_Light_Indicator_Validity_18 - 24
 *     ICM_Object_Prot18_A.OBJ_Right_Out_Of_Image_18 - 25
 *     ICM_Object_Prot18_A.OBJ_Left_Out_Of_Image_18 - 26
 *     ICM_Object_Prot18_A.OBJ_Right_Out_Of_Image_V_18 - 27
 *     ICM_Object_Prot18_A.OBJ_Left_Out_Of_Image_V_18 - 28
 *     ICM_Object_Prot18_A.OBJ_Top_Out_Of_Image_18 - 29
 *     ICM_Object_Prot18_A.OBJ_Bottom_Out_Of_Image_18 - 30
 *     ICM_Object_Prot18_A.OBJ_Top_Out_Of_Image_V_18 - 31
 *     ICM_Object_Prot18_A.OBJ_Bottom_Out_Of_Image_V_18 - 32
 *     ICM_Object_Prot18_A.OBJ_Lane_Assignment_18 - 33
 *     ICM_Object_Prot18_A.OBJ_Lane_Assignment_V_18 - 34
 *     ICM_Object_Prot18_A.OBJ_Age_Seconds_18 - 35
 *     ICM_Object_Prot18_A.OBJ_Age_Seconds_V_18 - 36
 *     ICM_Object_Prot18_A.OBJ_Width_18 - 37
 *     ICM_Object_Prot18_A.OBJ_Width_V_18 - 38
 *     ICM_Object_Prot18_A.OBJ_Width_STD_18 - 39
 *     ICM_Object_Prot18_A.OBJ_Width_STD_V_18 - 40
 *     ICM_Object_Prot18_A.OBJ_Length_18 - 41
 *     ICM_Object_Prot18_A.OBJ_Length_V_18 - 42
 *     ICM_Object_Prot18_A.OBJ_Length_STD_18 - 43
 *     ICM_Object_Prot18_A.OBJ_Length_STD_V_18 - 44
 *     ICM_Object_Prot18_A.OBJ_Height_18 - 45
 *     ICM_Object_Prot18_A.OBJ_Height_V_18 - 46
 *     ICM_Object_Prot18_A.OBJ_Height_STD_18 - 47
 *     ICM_Object_Prot18_A.OBJ_Height_STD_V_18 - 48
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Velocity_18 - 49
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Velocity_V_18 - 50
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Velocity_STD_18 - 51
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Vel_STD_V_18 - 52
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Velocity_18 - 53
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Velocity_V_18 - 54
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Velocity_STD_18 - 55
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Vel_STD_V_18 - 56
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Acc_18 - 57
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Acc_V_18 - 58
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Acc_STD_18 - 59
 *     ICM_Object_Prot18_A.OBJ_Abs_Long_Acc_STD_V_18 - 60
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Acc_18 - 61
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Acc_V_18 - 62
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Acc_STD_18 - 63
 *     ICM_Object_Prot18_A.OBJ_Abs_Lat_Acc_STD_V_18 - 64
 *     ICM_Object_Prot18_A.OBJ_Abs_Acceleration_18 - 65
 *     ICM_Object_Prot18_A.OBJ_Abs_Acceleration_V_18 - 66
 *     ICM_Object_Prot18_A.OBJ_Abs_Acc_STD_18 - 67
 *     ICM_Object_Prot18_A.OBJ_Abs_Acc_STD_V_18 - 68
 *     ICM_Object_Prot18_A.OBJ_Inv_TTC_18 - 69
 *     ICM_Object_Prot18_A.OBJ_Inv_TTC_V_18 - 70
 *     ICM_Object_Prot18_A.OBJ_Inv_TTC_STD_18 - 71
 *     ICM_Object_Prot18_A.OBJ_Inv_TTC_STD_V_18 - 72
 *     ICM_Object_Prot18_A.OBJ_Relative_Long_Acc_18 - 73
 *     ICM_Object_Prot18_A.OBJ_Relative_Long_Acc_V_18 - 74
 *     ICM_Object_Prot18_A.OBJ_Relative_Long_Acc_STD_18 - 75
 *     ICM_Object_Prot18_A.OBJ_Rel_Long_Acc_STD_V_18 - 76
 */

/*********
 *  ICM_Object_Prot18_B - 36
 *     ICM_Object_Prot18_B.ICM_Object_Prot18_B_Header - 1
 *     ICM_Object_Prot18_B.OBJ_Relative_Long_Velocity_18 - 2
 *     ICM_Object_Prot18_B.OBJ_Relative_Long_Velocity_V_18 - 3
 *     ICM_Object_Prot18_B.OBJ_Relative_Long_Vel_STD_18 - 4
 *     ICM_Object_Prot18_B.OBJ_Rel_Long_Vel_STD_V_18 - 5
 *     ICM_Object_Prot18_B.OBJ_Relative_Lat_Velocity_18 - 6
 *     ICM_Object_Prot18_B.OBJ_Relative_Lat_Velocity_V_18 - 7
 *     ICM_Object_Prot18_B.OBJ_Relative_Lat_Velocity_STD_18 - 8
 *     ICM_Object_Prot18_B.OBJ_Rel_Lat_Vel_STD_V_18 - 9
 *     ICM_Object_Prot18_B.OBJ_Long_Distance_18 - 10
 *     ICM_Object_Prot18_B.OBJ_Long_Distance_V_18 - 11
 *     ICM_Object_Prot18_B.OBJ_Long_Distance_STD_18 - 12
 *     ICM_Object_Prot18_B.OBJ_Long_Distance_STD_V_18 - 13
 *     ICM_Object_Prot18_B.OBJ_Lat_Distance_18 - 14
 *     ICM_Object_Prot18_B.OBJ_Lat_Distance_V_18 - 15
 *     ICM_Object_Prot18_B.OBJ_Lat_Distance_STD_18 - 16
 *     ICM_Object_Prot18_B.OBJ_Lat_Distance_STD_V_18 - 17
 *     ICM_Object_Prot18_B.OBJ_Absolute_Speed_18 - 18
 *     ICM_Object_Prot18_B.OBJ_Absolute_Speed_V_18 - 19
 *     ICM_Object_Prot18_B.OBJ_Absolute_Speed_STD_18 - 20
 *     ICM_Object_Prot18_B.OBJ_Absolute_Speed_STD_V_18 - 21
 *     ICM_Object_Prot18_B.OBJ_Heading_18 - 22
 *     ICM_Object_Prot18_B.OBJ_Heading_V_18 - 23
 *     ICM_Object_Prot18_B.OBJ_Heading_STD_18 - 24
 *     ICM_Object_Prot18_B.OBJ_Heading_STD_V_18 - 25
 *     ICM_Object_Prot18_B.OBJ_Angle_Rate_STD_18 - 26
 *     ICM_Object_Prot18_B.OBJ_Angle_Rate_STD_V_18 - 27
 *     ICM_Object_Prot18_B.OBJ_Angle_Rate_18 - 28
 *     ICM_Object_Prot18_B.OBJ_Angle_Rate_V_18 - 29
 *     ICM_Object_Prot18_B.OBJ_Angle_Right_18 - 30
 *     ICM_Object_Prot18_B.OBJ_Angle_Right_V_18 - 31
 *     ICM_Object_Prot18_B.OBJ_Angle_Right_STD_18 - 32
 *     ICM_Object_Prot18_B.OBJ_Angle_Right_STD_V_18 - 33
 *     ICM_Object_Prot18_B.OBJ_Angle_Left_18 - 34
 *     ICM_Object_Prot18_B.OBJ_Angle_Left_V_18 - 35
 *     ICM_Object_Prot18_B.OBJ_Angle_Left_STD_18 - 36
 *     ICM_Object_Prot18_B.OBJ_Angle_Left_STD_V_18 - 37
 *     ICM_Object_Prot18_B.OBJ_Angle_Side_18 - 38
 *     ICM_Object_Prot18_B.OBJ_Angle_Side_V_18 - 39
 *     ICM_Object_Prot18_B.OBJ_Angle_Side_STD_18 - 40
 *     ICM_Object_Prot18_B.OBJ_Angle_Side_STD_V_18 - 41
 *     ICM_Object_Prot18_B.OBJ_Angle_Mid_V_18 - 42
 *     ICM_Object_Prot18_B.OBJ_Angle_Mid_18 - 43
 *     ICM_Object_Prot18_B.OBJ_Angle_Mid_STD_18 - 44
 *     ICM_Object_Prot18_B.OBJ_Angle_Mid_STD_V_18 - 45
 *     ICM_Object_Prot18_B.OBJ_Angle_Bottom_V_18 - 46
 *     ICM_Object_Prot18_B.OBJ_Angle_Bottom_18 - 47
 *     ICM_Object_Prot18_B.OBJ_Angle_Bottom_STD_18 - 48
 *     ICM_Object_Prot18_B.OBJ_Angle_Bottom_STD_V_18 - 49
 *     ICM_Object_Prot18_B.OBJ_Visibility_Side_V_18 - 50
 *     ICM_Object_Prot18_B.OBJ_Visibility_Side_18 - 51
 *     ICM_Object_Prot18_B.OBJ_Is_In_Drivable_Area_18 - 52
 *     ICM_Object_Prot18_B.OBJ_Is_In_Drivable_Area_V_18 - 53
 *     ICM_Object_Prot18_B.OBJ_Is_VeryClose_18 - 54
 *     ICM_Object_Prot18_B.OBJ_Is_VeryClose_V_18 - 55
 *     ICM_Object_Prot18_B.OBJ_Buffer_18 - 56
 */

/*********
 *  ICM_Object_Prot19_A - 37
 *     ICM_Object_Prot19_A.ICM_Object_Prot19_A_Header - 1
 *     ICM_Object_Prot19_A.OBJ_CRC_19 - 2
 *     ICM_Object_Prot19_A.OBJ_ID_19 - 3
 *     ICM_Object_Prot19_A.OBJ_Existence_Probability_19 - 4
 *     ICM_Object_Prot19_A.OBJ_Fusion_Source_19 - 5
 *     ICM_Object_Prot19_A.OBJ_Triggered_SDM_19 - 6
 *     ICM_Object_Prot19_A.OBJ_Motion_Category_19 - 7
 *     ICM_Object_Prot19_A.OBJ_Moving_IN_Probability_19 - 8
 *     ICM_Object_Prot19_A.OBJ_Object_Age_19 - 9
 *     ICM_Object_Prot19_A.OBJ_Measuring_Status_19 - 10
 *     ICM_Object_Prot19_A.OBJ_Object_Class_19 - 11
 *     ICM_Object_Prot19_A.OBJ_Class_Probability_19 - 12
 *     ICM_Object_Prot19_A.OBJ_Car_Probability_19 - 13
 *     ICM_Object_Prot19_A.OBJ_Truck_Probability_19 - 14
 *     ICM_Object_Prot19_A.OBJ_Bike_Probability_19 - 15
 *     ICM_Object_Prot19_A.OBJ_Camera_Source_19 - 16
 *     ICM_Object_Prot19_A.OBJ_Motion_Status_19 - 17
 *     ICM_Object_Prot19_A.OBJ_Motion_Orientation_19 - 18
 *     ICM_Object_Prot19_A.OBJ_Has_Cut_Lane_19 - 19
 *     ICM_Object_Prot19_A.OBJ_Has_Cut_Path_19 - 20
 *     ICM_Object_Prot19_A.OBJ_Brake_Light_19 - 21
 *     ICM_Object_Prot19_A.OBJ_Turn_Indicator_Right_19 - 22
 *     ICM_Object_Prot19_A.OBJ_Turn_Indicator_Left_19 - 23
 *     ICM_Object_Prot19_A.OBJ_Light_Indicator_Validity_19 - 24
 *     ICM_Object_Prot19_A.OBJ_Right_Out_Of_Image_19 - 25
 *     ICM_Object_Prot19_A.OBJ_Left_Out_Of_Image_19 - 26
 *     ICM_Object_Prot19_A.OBJ_Right_Out_Of_Image_V_19 - 27
 *     ICM_Object_Prot19_A.OBJ_Left_Out_Of_Image_V_19 - 28
 *     ICM_Object_Prot19_A.OBJ_Top_Out_Of_Image_19 - 29
 *     ICM_Object_Prot19_A.OBJ_Bottom_Out_Of_Image_19 - 30
 *     ICM_Object_Prot19_A.OBJ_Top_Out_Of_Image_V_19 - 31
 *     ICM_Object_Prot19_A.OBJ_Bottom_Out_Of_Image_V_19 - 32
 *     ICM_Object_Prot19_A.OBJ_Lane_Assignment_19 - 33
 *     ICM_Object_Prot19_A.OBJ_Lane_Assignment_V_19 - 34
 *     ICM_Object_Prot19_A.OBJ_Age_Seconds_19 - 35
 *     ICM_Object_Prot19_A.OBJ_Age_Seconds_V_19 - 36
 *     ICM_Object_Prot19_A.OBJ_Width_19 - 37
 *     ICM_Object_Prot19_A.OBJ_Width_V_19 - 38
 *     ICM_Object_Prot19_A.OBJ_Width_STD_19 - 39
 *     ICM_Object_Prot19_A.OBJ_Width_STD_V_19 - 40
 *     ICM_Object_Prot19_A.OBJ_Length_19 - 41
 *     ICM_Object_Prot19_A.OBJ_Length_V_19 - 42
 *     ICM_Object_Prot19_A.OBJ_Length_STD_19 - 43
 *     ICM_Object_Prot19_A.OBJ_Length_STD_V_19 - 44
 *     ICM_Object_Prot19_A.OBJ_Height_19 - 45
 *     ICM_Object_Prot19_A.OBJ_Height_V_19 - 46
 *     ICM_Object_Prot19_A.OBJ_Height_STD_19 - 47
 *     ICM_Object_Prot19_A.OBJ_Height_STD_V_19 - 48
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Velocity_19 - 49
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Velocity_V_19 - 50
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Velocity_STD_19 - 51
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Vel_STD_V_19 - 52
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Velocity_19 - 53
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Velocity_V_19 - 54
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Velocity_STD_19 - 55
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Vel_STD_V_19 - 56
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Acc_19 - 57
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Acc_V_19 - 58
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Acc_STD_19 - 59
 *     ICM_Object_Prot19_A.OBJ_Abs_Long_Acc_STD_V_19 - 60
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Acc_19 - 61
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Acc_V_19 - 62
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Acc_STD_19 - 63
 *     ICM_Object_Prot19_A.OBJ_Abs_Lat_Acc_STD_V_19 - 64
 *     ICM_Object_Prot19_A.OBJ_Abs_Acceleration_19 - 65
 *     ICM_Object_Prot19_A.OBJ_Abs_Acceleration_V_19 - 66
 *     ICM_Object_Prot19_A.OBJ_Abs_Acc_STD_19 - 67
 *     ICM_Object_Prot19_A.OBJ_Abs_Acc_STD_V_19 - 68
 *     ICM_Object_Prot19_A.OBJ_Inv_TTC_19 - 69
 *     ICM_Object_Prot19_A.OBJ_Inv_TTC_V_19 - 70
 *     ICM_Object_Prot19_A.OBJ_Inv_TTC_STD_19 - 71
 *     ICM_Object_Prot19_A.OBJ_Inv_TTC_STD_V_19 - 72
 *     ICM_Object_Prot19_A.OBJ_Relative_Long_Acc_19 - 73
 *     ICM_Object_Prot19_A.OBJ_Relative_Long_Acc_V_19 - 74
 *     ICM_Object_Prot19_A.OBJ_Relative_Long_Acc_STD_19 - 75
 *     ICM_Object_Prot19_A.OBJ_Rel_Long_Acc_STD_V_19 - 76
 */

/*********
 *  ICM_Object_Prot19_B - 38
 *     ICM_Object_Prot19_B.ICM_Object_Prot19_B_Header - 1
 *     ICM_Object_Prot19_B.OBJ_Relative_Long_Velocity_19 - 2
 *     ICM_Object_Prot19_B.OBJ_Relative_Long_Velocity_V_19 - 3
 *     ICM_Object_Prot19_B.OBJ_Relative_Long_Vel_STD_19 - 4
 *     ICM_Object_Prot19_B.OBJ_Rel_Long_Vel_STD_V_19 - 5
 *     ICM_Object_Prot19_B.OBJ_Relative_Lat_Velocity_19 - 6
 *     ICM_Object_Prot19_B.OBJ_Relative_Lat_Velocity_V_19 - 7
 *     ICM_Object_Prot19_B.OBJ_Relative_Lat_Velocity_STD_19 - 8
 *     ICM_Object_Prot19_B.OBJ_Rel_Lat_Vel_STD_V_19 - 9
 *     ICM_Object_Prot19_B.OBJ_Long_Distance_19 - 10
 *     ICM_Object_Prot19_B.OBJ_Long_Distance_V_19 - 11
 *     ICM_Object_Prot19_B.OBJ_Long_Distance_STD_19 - 12
 *     ICM_Object_Prot19_B.OBJ_Long_Distance_STD_V_19 - 13
 *     ICM_Object_Prot19_B.OBJ_Lat_Distance_19 - 14
 *     ICM_Object_Prot19_B.OBJ_Lat_Distance_V_19 - 15
 *     ICM_Object_Prot19_B.OBJ_Lat_Distance_STD_19 - 16
 *     ICM_Object_Prot19_B.OBJ_Lat_Distance_STD_V_19 - 17
 *     ICM_Object_Prot19_B.OBJ_Absolute_Speed_19 - 18
 *     ICM_Object_Prot19_B.OBJ_Absolute_Speed_V_19 - 19
 *     ICM_Object_Prot19_B.OBJ_Absolute_Speed_STD_19 - 20
 *     ICM_Object_Prot19_B.OBJ_Absolute_Speed_STD_V_19 - 21
 *     ICM_Object_Prot19_B.OBJ_Heading_19 - 22
 *     ICM_Object_Prot19_B.OBJ_Heading_V_19 - 23
 *     ICM_Object_Prot19_B.OBJ_Heading_STD_19 - 24
 *     ICM_Object_Prot19_B.OBJ_Heading_STD_V_19 - 25
 *     ICM_Object_Prot19_B.OBJ_Angle_Rate_STD_19 - 26
 *     ICM_Object_Prot19_B.OBJ_Angle_Rate_STD_V_19 - 27
 *     ICM_Object_Prot19_B.OBJ_Angle_Rate_19 - 28
 *     ICM_Object_Prot19_B.OBJ_Angle_Rate_V_19 - 29
 *     ICM_Object_Prot19_B.OBJ_Angle_Right_19 - 30
 *     ICM_Object_Prot19_B.OBJ_Angle_Right_V_19 - 31
 *     ICM_Object_Prot19_B.OBJ_Angle_Right_STD_19 - 32
 *     ICM_Object_Prot19_B.OBJ_Angle_Right_STD_V_19 - 33
 *     ICM_Object_Prot19_B.OBJ_Angle_Left_19 - 34
 *     ICM_Object_Prot19_B.OBJ_Angle_Left_V_19 - 35
 *     ICM_Object_Prot19_B.OBJ_Angle_Left_STD_19 - 36
 *     ICM_Object_Prot19_B.OBJ_Angle_Left_STD_V_19 - 37
 *     ICM_Object_Prot19_B.OBJ_Angle_Side_19 - 38
 *     ICM_Object_Prot19_B.OBJ_Angle_Side_V_19 - 39
 *     ICM_Object_Prot19_B.OBJ_Angle_Side_STD_19 - 40
 *     ICM_Object_Prot19_B.OBJ_Angle_Side_STD_V_19 - 41
 *     ICM_Object_Prot19_B.OBJ_Angle_Mid_V_19 - 42
 *     ICM_Object_Prot19_B.OBJ_Angle_Mid_19 - 43
 *     ICM_Object_Prot19_B.OBJ_Angle_Mid_STD_19 - 44
 *     ICM_Object_Prot19_B.OBJ_Angle_Mid_STD_V_19 - 45
 *     ICM_Object_Prot19_B.OBJ_Angle_Bottom_V_19 - 46
 *     ICM_Object_Prot19_B.OBJ_Angle_Bottom_19 - 47
 *     ICM_Object_Prot19_B.OBJ_Angle_Bottom_STD_19 - 48
 *     ICM_Object_Prot19_B.OBJ_Angle_Bottom_STD_V_19 - 49
 *     ICM_Object_Prot19_B.OBJ_Visibility_Side_V_19 - 50
 *     ICM_Object_Prot19_B.OBJ_Visibility_Side_19 - 51
 *     ICM_Object_Prot19_B.OBJ_Is_In_Drivable_Area_19 - 52
 *     ICM_Object_Prot19_B.OBJ_Is_In_Drivable_Area_V_19 - 53
 *     ICM_Object_Prot19_B.OBJ_Is_VeryClose_19 - 54
 *     ICM_Object_Prot19_B.OBJ_Is_VeryClose_V_19 - 55
 *     ICM_Object_Prot19_B.OBJ_Buffer_19 - 56
 */

/*********
 *  ICM_Object_Prot1_A - 39
 *     ICM_Object_Prot1_A.ICM_Object_Prot1_A_Header - 1
 *     ICM_Object_Prot1_A.OBJ_CRC_1 - 2
 *     ICM_Object_Prot1_A.OBJ_ID_1 - 3
 *     ICM_Object_Prot1_A.OBJ_Existence_Probability_1 - 4
 *     ICM_Object_Prot1_A.OBJ_Fusion_Source_1 - 5
 *     ICM_Object_Prot1_A.OBJ_Triggered_SDM_1 - 6
 *     ICM_Object_Prot1_A.OBJ_Motion_Category_1 - 7
 *     ICM_Object_Prot1_A.OBJ_Moving_IN_Probability_1 - 8
 *     ICM_Object_Prot1_A.OBJ_Object_Age_1 - 9
 *     ICM_Object_Prot1_A.OBJ_Measuring_Status_1 - 10
 *     ICM_Object_Prot1_A.OBJ_Object_Class_1 - 11
 *     ICM_Object_Prot1_A.OBJ_Class_Probability_1 - 12
 *     ICM_Object_Prot1_A.OBJ_Car_Probability_1 - 13
 *     ICM_Object_Prot1_A.OBJ_Truck_Probability_1 - 14
 *     ICM_Object_Prot1_A.OBJ_Bike_Probability_1 - 15
 *     ICM_Object_Prot1_A.OBJ_Camera_Source_1 - 16
 *     ICM_Object_Prot1_A.OBJ_Motion_Status_1 - 17
 *     ICM_Object_Prot1_A.OBJ_Motion_Orientation_1 - 18
 *     ICM_Object_Prot1_A.OBJ_Has_Cut_Lane_1 - 19
 *     ICM_Object_Prot1_A.OBJ_Has_Cut_Path_1 - 20
 *     ICM_Object_Prot1_A.OBJ_Brake_Light_1 - 21
 *     ICM_Object_Prot1_A.OBJ_Turn_Indicator_Right_1 - 22
 *     ICM_Object_Prot1_A.OBJ_Turn_Indicator_Left_1 - 23
 *     ICM_Object_Prot1_A.OBJ_Light_Indicator_Validity_1 - 24
 *     ICM_Object_Prot1_A.OBJ_Right_Out_Of_Image_1 - 25
 *     ICM_Object_Prot1_A.OBJ_Left_Out_Of_Image_1 - 26
 *     ICM_Object_Prot1_A.OBJ_Right_Out_Of_Image_V_1 - 27
 *     ICM_Object_Prot1_A.OBJ_Left_Out_Of_Image_V_1 - 28
 *     ICM_Object_Prot1_A.OBJ_Top_Out_Of_Image_1 - 29
 *     ICM_Object_Prot1_A.OBJ_Bottom_Out_Of_Image_1 - 30
 *     ICM_Object_Prot1_A.OBJ_Top_Out_Of_Image_V_1 - 31
 *     ICM_Object_Prot1_A.OBJ_Bottom_Out_Of_Image_V_1 - 32
 *     ICM_Object_Prot1_A.OBJ_Lane_Assignment_1 - 33
 *     ICM_Object_Prot1_A.OBJ_Lane_Assignment_V_1 - 34
 *     ICM_Object_Prot1_A.OBJ_Age_Seconds_1 - 35
 *     ICM_Object_Prot1_A.OBJ_Age_Seconds_V_1 - 36
 *     ICM_Object_Prot1_A.OBJ_Width_1 - 37
 *     ICM_Object_Prot1_A.OBJ_Width_V_1 - 38
 *     ICM_Object_Prot1_A.OBJ_Width_STD_1 - 39
 *     ICM_Object_Prot1_A.OBJ_Width_STD_V_1 - 40
 *     ICM_Object_Prot1_A.OBJ_Length_1 - 41
 *     ICM_Object_Prot1_A.OBJ_Length_V_1 - 42
 *     ICM_Object_Prot1_A.OBJ_Length_STD_1 - 43
 *     ICM_Object_Prot1_A.OBJ_Length_STD_V_1 - 44
 *     ICM_Object_Prot1_A.OBJ_Height_1 - 45
 *     ICM_Object_Prot1_A.OBJ_Height_V_1 - 46
 *     ICM_Object_Prot1_A.OBJ_Height_STD_1 - 47
 *     ICM_Object_Prot1_A.OBJ_Height_STD_V_1 - 48
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Velocity_1 - 49
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Velocity_V_1 - 50
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Velocity_STD_1 - 51
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Vel_STD_V_1 - 52
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Velocity_1 - 53
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Velocity_V_1 - 54
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Velocity_STD_1 - 55
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Vel_STD_V_1 - 56
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Acc_1 - 57
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Acc_V_1 - 58
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Acc_STD_1 - 59
 *     ICM_Object_Prot1_A.OBJ_Abs_Long_Acc_STD_V_1 - 60
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Acc_1 - 61
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Acc_V_1 - 62
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Acc_STD_1 - 63
 *     ICM_Object_Prot1_A.OBJ_Abs_Lat_Acc_STD_V_1 - 64
 *     ICM_Object_Prot1_A.OBJ_Abs_Acceleration_1 - 65
 *     ICM_Object_Prot1_A.OBJ_Abs_Acceleration_V_1 - 66
 *     ICM_Object_Prot1_A.OBJ_Abs_Acc_STD_1 - 67
 *     ICM_Object_Prot1_A.OBJ_Abs_Acc_STD_V_1 - 68
 *     ICM_Object_Prot1_A.OBJ_Inv_TTC_1 - 69
 *     ICM_Object_Prot1_A.OBJ_Inv_TTC_V_1 - 70
 *     ICM_Object_Prot1_A.OBJ_Inv_TTC_STD_1 - 71
 *     ICM_Object_Prot1_A.OBJ_Inv_TTC_STD_V_1 - 72
 *     ICM_Object_Prot1_A.OBJ_Relative_Long_Acc_1 - 73
 *     ICM_Object_Prot1_A.OBJ_Relative_Long_Acc_V_1 - 74
 *     ICM_Object_Prot1_A.OBJ_Relative_Long_Acc_STD_1 - 75
 *     ICM_Object_Prot1_A.OBJ_Rel_Long_Acc_STD_V_1 - 76
 */

/*********
 *  ICM_Object_Prot1_B - 40
 *     ICM_Object_Prot1_B.ICM_Object_Prot1_B_Header - 1
 *     ICM_Object_Prot1_B.OBJ_Relative_Long_Velocity_1 - 2
 *     ICM_Object_Prot1_B.OBJ_Relative_Long_Velocity_V_1 - 3
 *     ICM_Object_Prot1_B.OBJ_Relative_Long_Vel_STD_1 - 4
 *     ICM_Object_Prot1_B.OBJ_Rel_Long_Vel_STD_V_1 - 5
 *     ICM_Object_Prot1_B.OBJ_Relative_Lat_Velocity_1 - 6
 *     ICM_Object_Prot1_B.OBJ_Relative_Lat_Velocity_V_1 - 7
 *     ICM_Object_Prot1_B.OBJ_Relative_Lat_Velocity_STD_1 - 8
 *     ICM_Object_Prot1_B.OBJ_Rel_Lat_Vel_STD_V_1 - 9
 *     ICM_Object_Prot1_B.OBJ_Long_Distance_1 - 10
 *     ICM_Object_Prot1_B.OBJ_Long_Distance_V_1 - 11
 *     ICM_Object_Prot1_B.OBJ_Long_Distance_STD_1 - 12
 *     ICM_Object_Prot1_B.OBJ_Long_Distance_STD_V_1 - 13
 *     ICM_Object_Prot1_B.OBJ_Lat_Distance_1 - 14
 *     ICM_Object_Prot1_B.OBJ_Lat_Distance_V_1 - 15
 *     ICM_Object_Prot1_B.OBJ_Lat_Distance_STD_1 - 16
 *     ICM_Object_Prot1_B.OBJ_Lat_Distance_STD_V_1 - 17
 *     ICM_Object_Prot1_B.OBJ_Absolute_Speed_1 - 18
 *     ICM_Object_Prot1_B.OBJ_Absolute_Speed_V_1 - 19
 *     ICM_Object_Prot1_B.OBJ_Absolute_Speed_STD_1 - 20
 *     ICM_Object_Prot1_B.OBJ_Absolute_Speed_STD_V_1 - 21
 *     ICM_Object_Prot1_B.OBJ_Heading_1 - 22
 *     ICM_Object_Prot1_B.OBJ_Heading_V_1 - 23
 *     ICM_Object_Prot1_B.OBJ_Heading_STD_1 - 24
 *     ICM_Object_Prot1_B.OBJ_Heading_STD_V_1 - 25
 *     ICM_Object_Prot1_B.OBJ_Angle_Rate_STD_1 - 26
 *     ICM_Object_Prot1_B.OBJ_Angle_Rate_STD_V_1 - 27
 *     ICM_Object_Prot1_B.OBJ_Angle_Rate_1 - 28
 *     ICM_Object_Prot1_B.OBJ_Angle_Rate_V_1 - 29
 *     ICM_Object_Prot1_B.OBJ_Angle_Right_1 - 30
 *     ICM_Object_Prot1_B.OBJ_Angle_Right_V_1 - 31
 *     ICM_Object_Prot1_B.OBJ_Angle_Right_STD_1 - 32
 *     ICM_Object_Prot1_B.OBJ_Angle_Right_STD_V_1 - 33
 *     ICM_Object_Prot1_B.OBJ_Angle_Left_1 - 34
 *     ICM_Object_Prot1_B.OBJ_Angle_Left_V_1 - 35
 *     ICM_Object_Prot1_B.OBJ_Angle_Left_STD_1 - 36
 *     ICM_Object_Prot1_B.OBJ_Angle_Left_STD_V_1 - 37
 *     ICM_Object_Prot1_B.OBJ_Angle_Side_1 - 38
 *     ICM_Object_Prot1_B.OBJ_Angle_Side_V_1 - 39
 *     ICM_Object_Prot1_B.OBJ_Angle_Side_STD_1 - 40
 *     ICM_Object_Prot1_B.OBJ_Angle_Side_STD_V_1 - 41
 *     ICM_Object_Prot1_B.OBJ_Angle_Mid_V_1 - 42
 *     ICM_Object_Prot1_B.OBJ_Angle_Mid_1 - 43
 *     ICM_Object_Prot1_B.OBJ_Angle_Mid_STD_1 - 44
 *     ICM_Object_Prot1_B.OBJ_Angle_Mid_STD_V_1 - 45
 *     ICM_Object_Prot1_B.OBJ_Angle_Bottom_V_1 - 46
 *     ICM_Object_Prot1_B.OBJ_Angle_Bottom_1 - 47
 *     ICM_Object_Prot1_B.OBJ_Angle_Bottom_STD_1 - 48
 *     ICM_Object_Prot1_B.OBJ_Angle_Bottom_STD_V_1 - 49
 *     ICM_Object_Prot1_B.OBJ_Visibility_Side_V_1 - 50
 *     ICM_Object_Prot1_B.OBJ_Visibility_Side_1 - 51
 *     ICM_Object_Prot1_B.OBJ_Is_In_Drivable_Area_1 - 52
 *     ICM_Object_Prot1_B.OBJ_Is_In_Drivable_Area_V_1 - 53
 *     ICM_Object_Prot1_B.OBJ_Is_VeryClose_1 - 54
 *     ICM_Object_Prot1_B.OBJ_Is_VeryClose_V_1 - 55
 *     ICM_Object_Prot1_B.OBJ_Buffer_1 - 56
 */

/*********
 *  ICM_Object_Prot20_A - 41
 *     ICM_Object_Prot20_A.ICM_Object_Prot20_A_Header - 1
 *     ICM_Object_Prot20_A.OBJ_CRC_20 - 2
 *     ICM_Object_Prot20_A.OBJ_ID_20 - 3
 *     ICM_Object_Prot20_A.OBJ_Existence_Probability_20 - 4
 *     ICM_Object_Prot20_A.OBJ_Fusion_Source_20 - 5
 *     ICM_Object_Prot20_A.OBJ_Triggered_SDM_20 - 6
 *     ICM_Object_Prot20_A.OBJ_Motion_Category_20 - 7
 *     ICM_Object_Prot20_A.OBJ_Moving_IN_Probability_20 - 8
 *     ICM_Object_Prot20_A.OBJ_Object_Age_20 - 9
 *     ICM_Object_Prot20_A.OBJ_Measuring_Status_20 - 10
 *     ICM_Object_Prot20_A.OBJ_Object_Class_20 - 11
 *     ICM_Object_Prot20_A.OBJ_Class_Probability_20 - 12
 *     ICM_Object_Prot20_A.OBJ_Car_Probability_20 - 13
 *     ICM_Object_Prot20_A.OBJ_Truck_Probability_20 - 14
 *     ICM_Object_Prot20_A.OBJ_Bike_Probability_20 - 15
 *     ICM_Object_Prot20_A.OBJ_Camera_Source_20 - 16
 *     ICM_Object_Prot20_A.OBJ_Motion_Status_20 - 17
 *     ICM_Object_Prot20_A.OBJ_Motion_Orientation_20 - 18
 *     ICM_Object_Prot20_A.OBJ_Has_Cut_Lane_20 - 19
 *     ICM_Object_Prot20_A.OBJ_Has_Cut_Path_20 - 20
 *     ICM_Object_Prot20_A.OBJ_Brake_Light_20 - 21
 *     ICM_Object_Prot20_A.OBJ_Turn_Indicator_Right_20 - 22
 *     ICM_Object_Prot20_A.OBJ_Turn_Indicator_Left_20 - 23
 *     ICM_Object_Prot20_A.OBJ_Light_Indicator_Validity_20 - 24
 *     ICM_Object_Prot20_A.OBJ_Right_Out_Of_Image_20 - 25
 *     ICM_Object_Prot20_A.OBJ_Left_Out_Of_Image_20 - 26
 *     ICM_Object_Prot20_A.OBJ_Right_Out_Of_Image_V_20 - 27
 *     ICM_Object_Prot20_A.OBJ_Left_Out_Of_Image_V_20 - 28
 *     ICM_Object_Prot20_A.OBJ_Top_Out_Of_Image_20 - 29
 *     ICM_Object_Prot20_A.OBJ_Bottom_Out_Of_Image_20 - 30
 *     ICM_Object_Prot20_A.OBJ_Top_Out_Of_Image_V_20 - 31
 *     ICM_Object_Prot20_A.OBJ_Bottom_Out_Of_Image_V_20 - 32
 *     ICM_Object_Prot20_A.OBJ_Lane_Assignment_20 - 33
 *     ICM_Object_Prot20_A.OBJ_Lane_Assignment_V_20 - 34
 *     ICM_Object_Prot20_A.OBJ_Age_Seconds_20 - 35
 *     ICM_Object_Prot20_A.OBJ_Age_Seconds_V_20 - 36
 *     ICM_Object_Prot20_A.OBJ_Width_20 - 37
 *     ICM_Object_Prot20_A.OBJ_Width_V_20 - 38
 *     ICM_Object_Prot20_A.OBJ_Width_STD_20 - 39
 *     ICM_Object_Prot20_A.OBJ_Width_STD_V_20 - 40
 *     ICM_Object_Prot20_A.OBJ_Length_20 - 41
 *     ICM_Object_Prot20_A.OBJ_Length_V_20 - 42
 *     ICM_Object_Prot20_A.OBJ_Length_STD_20 - 43
 *     ICM_Object_Prot20_A.OBJ_Length_STD_V_20 - 44
 *     ICM_Object_Prot20_A.OBJ_Height_20 - 45
 *     ICM_Object_Prot20_A.OBJ_Height_V_20 - 46
 *     ICM_Object_Prot20_A.OBJ_Height_STD_20 - 47
 *     ICM_Object_Prot20_A.OBJ_Height_STD_V_20 - 48
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Velocity_20 - 49
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Velocity_V_20 - 50
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Velocity_STD_20 - 51
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Vel_STD_V_20 - 52
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Velocity_20 - 53
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Velocity_V_20 - 54
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Velocity_STD_20 - 55
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Vel_STD_V_20 - 56
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Acc_20 - 57
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Acc_V_20 - 58
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Acc_STD_20 - 59
 *     ICM_Object_Prot20_A.OBJ_Abs_Long_Acc_STD_V_20 - 60
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Acc_20 - 61
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Acc_V_20 - 62
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Acc_STD_20 - 63
 *     ICM_Object_Prot20_A.OBJ_Abs_Lat_Acc_STD_V_20 - 64
 *     ICM_Object_Prot20_A.OBJ_Abs_Acceleration_20 - 65
 *     ICM_Object_Prot20_A.OBJ_Abs_Acceleration_V_20 - 66
 *     ICM_Object_Prot20_A.OBJ_Abs_Acc_STD_20 - 67
 *     ICM_Object_Prot20_A.OBJ_Abs_Acc_STD_V_20 - 68
 *     ICM_Object_Prot20_A.OBJ_Inv_TTC_20 - 69
 *     ICM_Object_Prot20_A.OBJ_Inv_TTC_V_20 - 70
 *     ICM_Object_Prot20_A.OBJ_Inv_TTC_STD_20 - 71
 *     ICM_Object_Prot20_A.OBJ_Inv_TTC_STD_V_20 - 72
 *     ICM_Object_Prot20_A.OBJ_Relative_Long_Acc_20 - 73
 *     ICM_Object_Prot20_A.OBJ_Relative_Long_Acc_V_20 - 74
 *     ICM_Object_Prot20_A.OBJ_Relative_Long_Acc_STD_20 - 75
 *     ICM_Object_Prot20_A.OBJ_Rel_Long_Acc_STD_V_20 - 76
 */

/*********
 *  ICM_Object_Prot20_B - 42
 *     ICM_Object_Prot20_B.ICM_Object_Prot20_B_Header - 1
 *     ICM_Object_Prot20_B.OBJ_Relative_Long_Velocity_20 - 2
 *     ICM_Object_Prot20_B.OBJ_Relative_Long_Velocity_V_20 - 3
 *     ICM_Object_Prot20_B.OBJ_Relative_Long_Vel_STD_20 - 4
 *     ICM_Object_Prot20_B.OBJ_Rel_Long_Vel_STD_V_20 - 5
 *     ICM_Object_Prot20_B.OBJ_Relative_Lat_Velocity_20 - 6
 *     ICM_Object_Prot20_B.OBJ_Relative_Lat_Velocity_V_20 - 7
 *     ICM_Object_Prot20_B.OBJ_Relative_Lat_Velocity_STD_20 - 8
 *     ICM_Object_Prot20_B.OBJ_Rel_Lat_Vel_STD_V_20 - 9
 *     ICM_Object_Prot20_B.OBJ_Long_Distance_20 - 10
 *     ICM_Object_Prot20_B.OBJ_Long_Distance_V_20 - 11
 *     ICM_Object_Prot20_B.OBJ_Long_Distance_STD_20 - 12
 *     ICM_Object_Prot20_B.OBJ_Long_Distance_STD_V_20 - 13
 *     ICM_Object_Prot20_B.OBJ_Lat_Distance_20 - 14
 *     ICM_Object_Prot20_B.OBJ_Lat_Distance_V_20 - 15
 *     ICM_Object_Prot20_B.OBJ_Lat_Distance_STD_20 - 16
 *     ICM_Object_Prot20_B.OBJ_Lat_Distance_STD_V_20 - 17
 *     ICM_Object_Prot20_B.OBJ_Absolute_Speed_20 - 18
 *     ICM_Object_Prot20_B.OBJ_Absolute_Speed_V_20 - 19
 *     ICM_Object_Prot20_B.OBJ_Absolute_Speed_STD_20 - 20
 *     ICM_Object_Prot20_B.OBJ_Absolute_Speed_STD_V_20 - 21
 *     ICM_Object_Prot20_B.OBJ_Heading_20 - 22
 *     ICM_Object_Prot20_B.OBJ_Heading_V_20 - 23
 *     ICM_Object_Prot20_B.OBJ_Heading_STD_20 - 24
 *     ICM_Object_Prot20_B.OBJ_Heading_STD_V_20 - 25
 *     ICM_Object_Prot20_B.OBJ_Angle_Rate_STD_20 - 26
 *     ICM_Object_Prot20_B.OBJ_Angle_Rate_STD_V_20 - 27
 *     ICM_Object_Prot20_B.OBJ_Angle_Rate_20 - 28
 *     ICM_Object_Prot20_B.OBJ_Angle_Rate_V_20 - 29
 *     ICM_Object_Prot20_B.OBJ_Angle_Right_20 - 30
 *     ICM_Object_Prot20_B.OBJ_Angle_Right_V_20 - 31
 *     ICM_Object_Prot20_B.OBJ_Angle_Right_STD_20 - 32
 *     ICM_Object_Prot20_B.OBJ_Angle_Right_STD_V_20 - 33
 *     ICM_Object_Prot20_B.OBJ_Angle_Left_20 - 34
 *     ICM_Object_Prot20_B.OBJ_Angle_Left_V_20 - 35
 *     ICM_Object_Prot20_B.OBJ_Angle_Left_STD_20 - 36
 *     ICM_Object_Prot20_B.OBJ_Angle_Left_STD_V_20 - 37
 *     ICM_Object_Prot20_B.OBJ_Angle_Side_20 - 38
 *     ICM_Object_Prot20_B.OBJ_Angle_Side_V_20 - 39
 *     ICM_Object_Prot20_B.OBJ_Angle_Side_STD_20 - 40
 *     ICM_Object_Prot20_B.OBJ_Angle_Side_STD_V_20 - 41
 *     ICM_Object_Prot20_B.OBJ_Angle_Mid_V_20 - 42
 *     ICM_Object_Prot20_B.OBJ_Angle_Mid_20 - 43
 *     ICM_Object_Prot20_B.OBJ_Angle_Mid_STD_20 - 44
 *     ICM_Object_Prot20_B.OBJ_Angle_Mid_STD_V_20 - 45
 *     ICM_Object_Prot20_B.OBJ_Angle_Bottom_V_20 - 46
 *     ICM_Object_Prot20_B.OBJ_Angle_Bottom_20 - 47
 *     ICM_Object_Prot20_B.OBJ_Angle_Bottom_STD_20 - 48
 *     ICM_Object_Prot20_B.OBJ_Angle_Bottom_STD_V_20 - 49
 *     ICM_Object_Prot20_B.OBJ_Visibility_Side_V_20 - 50
 *     ICM_Object_Prot20_B.OBJ_Visibility_Side_20 - 51
 *     ICM_Object_Prot20_B.OBJ_Is_In_Drivable_Area_20 - 52
 *     ICM_Object_Prot20_B.OBJ_Is_In_Drivable_Area_V_20 - 53
 *     ICM_Object_Prot20_B.OBJ_Is_VeryClose_20 - 54
 *     ICM_Object_Prot20_B.OBJ_Is_VeryClose_V_20 - 55
 *     ICM_Object_Prot20_B.OBJ_Buffer_20 - 56
 */

/*********
 *  ICM_Object_Prot21_A - 43
 *     ICM_Object_Prot21_A.ICM_Object_Prot21_A_Header - 1
 *     ICM_Object_Prot21_A.OBJ_CRC_21 - 2
 *     ICM_Object_Prot21_A.OBJ_ID_21 - 3
 *     ICM_Object_Prot21_A.OBJ_Existence_Probability_21 - 4
 *     ICM_Object_Prot21_A.OBJ_Fusion_Source_21 - 5
 *     ICM_Object_Prot21_A.OBJ_Triggered_SDM_21 - 6
 *     ICM_Object_Prot21_A.OBJ_Motion_Category_21 - 7
 *     ICM_Object_Prot21_A.OBJ_Moving_IN_Probability_21 - 8
 *     ICM_Object_Prot21_A.OBJ_Object_Age_21 - 9
 *     ICM_Object_Prot21_A.OBJ_Measuring_Status_21 - 10
 *     ICM_Object_Prot21_A.OBJ_Object_Class_21 - 11
 *     ICM_Object_Prot21_A.OBJ_Class_Probability_21 - 12
 *     ICM_Object_Prot21_A.OBJ_Car_Probability_21 - 13
 *     ICM_Object_Prot21_A.OBJ_Truck_Probability_21 - 14
 *     ICM_Object_Prot21_A.OBJ_Bike_Probability_21 - 15
 *     ICM_Object_Prot21_A.OBJ_Camera_Source_21 - 16
 *     ICM_Object_Prot21_A.OBJ_Motion_Status_21 - 17
 *     ICM_Object_Prot21_A.OBJ_Motion_Orientation_21 - 18
 *     ICM_Object_Prot21_A.OBJ_Has_Cut_Lane_21 - 19
 *     ICM_Object_Prot21_A.OBJ_Has_Cut_Path_21 - 20
 *     ICM_Object_Prot21_A.OBJ_Brake_Light_21 - 21
 *     ICM_Object_Prot21_A.OBJ_Turn_Indicator_Right_21 - 22
 *     ICM_Object_Prot21_A.OBJ_Turn_Indicator_Left_21 - 23
 *     ICM_Object_Prot21_A.OBJ_Light_Indicator_Validity_21 - 24
 *     ICM_Object_Prot21_A.OBJ_Right_Out_Of_Image_21 - 25
 *     ICM_Object_Prot21_A.OBJ_Left_Out_Of_Image_21 - 26
 *     ICM_Object_Prot21_A.OBJ_Right_Out_Of_Image_V_21 - 27
 *     ICM_Object_Prot21_A.OBJ_Left_Out_Of_Image_V_21 - 28
 *     ICM_Object_Prot21_A.OBJ_Top_Out_Of_Image_21 - 29
 *     ICM_Object_Prot21_A.OBJ_Bottom_Out_Of_Image_21 - 30
 *     ICM_Object_Prot21_A.OBJ_Top_Out_Of_Image_V_21 - 31
 *     ICM_Object_Prot21_A.OBJ_Bottom_Out_Of_Image_V_21 - 32
 *     ICM_Object_Prot21_A.OBJ_Lane_Assignment_21 - 33
 *     ICM_Object_Prot21_A.OBJ_Lane_Assignment_V_21 - 34
 *     ICM_Object_Prot21_A.OBJ_Age_Seconds_21 - 35
 *     ICM_Object_Prot21_A.OBJ_Age_Seconds_V_21 - 36
 *     ICM_Object_Prot21_A.OBJ_Width_21 - 37
 *     ICM_Object_Prot21_A.OBJ_Width_V_21 - 38
 *     ICM_Object_Prot21_A.OBJ_Width_STD_21 - 39
 *     ICM_Object_Prot21_A.OBJ_Width_STD_V_21 - 40
 *     ICM_Object_Prot21_A.OBJ_Length_21 - 41
 *     ICM_Object_Prot21_A.OBJ_Length_V_21 - 42
 *     ICM_Object_Prot21_A.OBJ_Length_STD_21 - 43
 *     ICM_Object_Prot21_A.OBJ_Length_STD_V_21 - 44
 *     ICM_Object_Prot21_A.OBJ_Height_21 - 45
 *     ICM_Object_Prot21_A.OBJ_Height_V_21 - 46
 *     ICM_Object_Prot21_A.OBJ_Height_STD_21 - 47
 *     ICM_Object_Prot21_A.OBJ_Height_STD_V_21 - 48
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Velocity_21 - 49
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Velocity_V_21 - 50
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Velocity_STD_21 - 51
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Vel_STD_V_21 - 52
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Velocity_21 - 53
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Velocity_V_21 - 54
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Velocity_STD_21 - 55
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Vel_STD_V_21 - 56
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Acc_21 - 57
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Acc_V_21 - 58
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Acc_STD_21 - 59
 *     ICM_Object_Prot21_A.OBJ_Abs_Long_Acc_STD_V_21 - 60
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Acc_21 - 61
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Acc_V_21 - 62
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Acc_STD_21 - 63
 *     ICM_Object_Prot21_A.OBJ_Abs_Lat_Acc_STD_V_21 - 64
 *     ICM_Object_Prot21_A.OBJ_Abs_Acceleration_21 - 65
 *     ICM_Object_Prot21_A.OBJ_Abs_Acceleration_V_21 - 66
 *     ICM_Object_Prot21_A.OBJ_Abs_Acc_STD_21 - 67
 *     ICM_Object_Prot21_A.OBJ_Abs_Acc_STD_V_21 - 68
 *     ICM_Object_Prot21_A.OBJ_Inv_TTC_21 - 69
 *     ICM_Object_Prot21_A.OBJ_Inv_TTC_V_21 - 70
 *     ICM_Object_Prot21_A.OBJ_Inv_TTC_STD_21 - 71
 *     ICM_Object_Prot21_A.OBJ_Inv_TTC_STD_V_21 - 72
 *     ICM_Object_Prot21_A.OBJ_Relative_Long_Acc_21 - 73
 *     ICM_Object_Prot21_A.OBJ_Relative_Long_Acc_V_21 - 74
 *     ICM_Object_Prot21_A.OBJ_Relative_Long_Acc_STD_21 - 75
 *     ICM_Object_Prot21_A.OBJ_Rel_Long_Acc_STD_V_21 - 76
 */

/*********
 *  ICM_Object_Prot21_B - 44
 *     ICM_Object_Prot21_B.ICM_Object_Prot21_B_Header - 1
 *     ICM_Object_Prot21_B.OBJ_Relative_Long_Velocity_21 - 2
 *     ICM_Object_Prot21_B.OBJ_Relative_Long_Velocity_V_21 - 3
 *     ICM_Object_Prot21_B.OBJ_Relative_Long_Vel_STD_21 - 4
 *     ICM_Object_Prot21_B.OBJ_Rel_Long_Vel_STD_V_21 - 5
 *     ICM_Object_Prot21_B.OBJ_Relative_Lat_Velocity_21 - 6
 *     ICM_Object_Prot21_B.OBJ_Relative_Lat_Velocity_V_21 - 7
 *     ICM_Object_Prot21_B.OBJ_Relative_Lat_Velocity_STD_21 - 8
 *     ICM_Object_Prot21_B.OBJ_Rel_Lat_Vel_STD_V_21 - 9
 *     ICM_Object_Prot21_B.OBJ_Long_Distance_21 - 10
 *     ICM_Object_Prot21_B.OBJ_Long_Distance_V_21 - 11
 *     ICM_Object_Prot21_B.OBJ_Long_Distance_STD_21 - 12
 *     ICM_Object_Prot21_B.OBJ_Long_Distance_STD_V_21 - 13
 *     ICM_Object_Prot21_B.OBJ_Lat_Distance_21 - 14
 *     ICM_Object_Prot21_B.OBJ_Lat_Distance_V_21 - 15
 *     ICM_Object_Prot21_B.OBJ_Lat_Distance_STD_21 - 16
 *     ICM_Object_Prot21_B.OBJ_Lat_Distance_STD_V_21 - 17
 *     ICM_Object_Prot21_B.OBJ_Absolute_Speed_21 - 18
 *     ICM_Object_Prot21_B.OBJ_Absolute_Speed_V_21 - 19
 *     ICM_Object_Prot21_B.OBJ_Absolute_Speed_STD_21 - 20
 *     ICM_Object_Prot21_B.OBJ_Absolute_Speed_STD_V_21 - 21
 *     ICM_Object_Prot21_B.OBJ_Heading_21 - 22
 *     ICM_Object_Prot21_B.OBJ_Heading_V_21 - 23
 *     ICM_Object_Prot21_B.OBJ_Heading_STD_21 - 24
 *     ICM_Object_Prot21_B.OBJ_Heading_STD_V_21 - 25
 *     ICM_Object_Prot21_B.OBJ_Angle_Rate_STD_21 - 26
 *     ICM_Object_Prot21_B.OBJ_Angle_Rate_STD_V_21 - 27
 *     ICM_Object_Prot21_B.OBJ_Angle_Rate_21 - 28
 *     ICM_Object_Prot21_B.OBJ_Angle_Rate_V_21 - 29
 *     ICM_Object_Prot21_B.OBJ_Angle_Right_21 - 30
 *     ICM_Object_Prot21_B.OBJ_Angle_Right_V_21 - 31
 *     ICM_Object_Prot21_B.OBJ_Angle_Right_STD_21 - 32
 *     ICM_Object_Prot21_B.OBJ_Angle_Right_STD_V_21 - 33
 *     ICM_Object_Prot21_B.OBJ_Angle_Left_21 - 34
 *     ICM_Object_Prot21_B.OBJ_Angle_Left_V_21 - 35
 *     ICM_Object_Prot21_B.OBJ_Angle_Left_STD_21 - 36
 *     ICM_Object_Prot21_B.OBJ_Angle_Left_STD_V_21 - 37
 *     ICM_Object_Prot21_B.OBJ_Angle_Side_21 - 38
 *     ICM_Object_Prot21_B.OBJ_Angle_Side_V_21 - 39
 *     ICM_Object_Prot21_B.OBJ_Angle_Side_STD_21 - 40
 *     ICM_Object_Prot21_B.OBJ_Angle_Side_STD_V_21 - 41
 *     ICM_Object_Prot21_B.OBJ_Angle_Mid_V_21 - 42
 *     ICM_Object_Prot21_B.OBJ_Angle_Mid_21 - 43
 *     ICM_Object_Prot21_B.OBJ_Angle_Mid_STD_21 - 44
 *     ICM_Object_Prot21_B.OBJ_Angle_Mid_STD_V_21 - 45
 *     ICM_Object_Prot21_B.OBJ_Angle_Bottom_V_21 - 46
 *     ICM_Object_Prot21_B.OBJ_Angle_Bottom_21 - 47
 *     ICM_Object_Prot21_B.OBJ_Angle_Bottom_STD_21 - 48
 *     ICM_Object_Prot21_B.OBJ_Angle_Bottom_STD_V_21 - 49
 *     ICM_Object_Prot21_B.OBJ_Visibility_Side_V_21 - 50
 *     ICM_Object_Prot21_B.OBJ_Visibility_Side_21 - 51
 *     ICM_Object_Prot21_B.OBJ_Is_In_Drivable_Area_21 - 52
 *     ICM_Object_Prot21_B.OBJ_Is_In_Drivable_Area_V_21 - 53
 *     ICM_Object_Prot21_B.OBJ_Is_VeryClose_21 - 54
 *     ICM_Object_Prot21_B.OBJ_Is_VeryClose_V_21 - 55
 *     ICM_Object_Prot21_B.OBJ_Buffer_21 - 56
 */

/*********
 *  ICM_Object_Prot22_A - 45
 *     ICM_Object_Prot22_A.ICM_Object_Prot22_A_Header - 1
 *     ICM_Object_Prot22_A.OBJ_CRC_22 - 2
 *     ICM_Object_Prot22_A.OBJ_ID_22 - 3
 *     ICM_Object_Prot22_A.OBJ_Existence_Probability_22 - 4
 *     ICM_Object_Prot22_A.OBJ_Fusion_Source_22 - 5
 *     ICM_Object_Prot22_A.OBJ_Triggered_SDM_22 - 6
 *     ICM_Object_Prot22_A.OBJ_Motion_Category_22 - 7
 *     ICM_Object_Prot22_A.OBJ_Moving_IN_Probability_22 - 8
 *     ICM_Object_Prot22_A.OBJ_Object_Age_22 - 9
 *     ICM_Object_Prot22_A.OBJ_Measuring_Status_22 - 10
 *     ICM_Object_Prot22_A.OBJ_Object_Class_22 - 11
 *     ICM_Object_Prot22_A.OBJ_Class_Probability_22 - 12
 *     ICM_Object_Prot22_A.OBJ_Car_Probability_22 - 13
 *     ICM_Object_Prot22_A.OBJ_Truck_Probability_22 - 14
 *     ICM_Object_Prot22_A.OBJ_Bike_Probability_22 - 15
 *     ICM_Object_Prot22_A.OBJ_Camera_Source_22 - 16
 *     ICM_Object_Prot22_A.OBJ_Motion_Status_22 - 17
 *     ICM_Object_Prot22_A.OBJ_Motion_Orientation_22 - 18
 *     ICM_Object_Prot22_A.OBJ_Has_Cut_Lane_22 - 19
 *     ICM_Object_Prot22_A.OBJ_Has_Cut_Path_22 - 20
 *     ICM_Object_Prot22_A.OBJ_Brake_Light_22 - 21
 *     ICM_Object_Prot22_A.OBJ_Turn_Indicator_Right_22 - 22
 *     ICM_Object_Prot22_A.OBJ_Turn_Indicator_Left_22 - 23
 *     ICM_Object_Prot22_A.OBJ_Light_Indicator_Validity_22 - 24
 *     ICM_Object_Prot22_A.OBJ_Right_Out_Of_Image_22 - 25
 *     ICM_Object_Prot22_A.OBJ_Left_Out_Of_Image_22 - 26
 *     ICM_Object_Prot22_A.OBJ_Right_Out_Of_Image_V_22 - 27
 *     ICM_Object_Prot22_A.OBJ_Left_Out_Of_Image_V_22 - 28
 *     ICM_Object_Prot22_A.OBJ_Top_Out_Of_Image_22 - 29
 *     ICM_Object_Prot22_A.OBJ_Bottom_Out_Of_Image_22 - 30
 *     ICM_Object_Prot22_A.OBJ_Top_Out_Of_Image_V_22 - 31
 *     ICM_Object_Prot22_A.OBJ_Bottom_Out_Of_Image_V_22 - 32
 *     ICM_Object_Prot22_A.OBJ_Lane_Assignment_22 - 33
 *     ICM_Object_Prot22_A.OBJ_Lane_Assignment_V_22 - 34
 *     ICM_Object_Prot22_A.OBJ_Age_Seconds_22 - 35
 *     ICM_Object_Prot22_A.OBJ_Age_Seconds_V_22 - 36
 *     ICM_Object_Prot22_A.OBJ_Width_22 - 37
 *     ICM_Object_Prot22_A.OBJ_Width_V_22 - 38
 *     ICM_Object_Prot22_A.OBJ_Width_STD_22 - 39
 *     ICM_Object_Prot22_A.OBJ_Width_STD_V_22 - 40
 *     ICM_Object_Prot22_A.OBJ_Length_22 - 41
 *     ICM_Object_Prot22_A.OBJ_Length_V_22 - 42
 *     ICM_Object_Prot22_A.OBJ_Length_STD_22 - 43
 *     ICM_Object_Prot22_A.OBJ_Length_STD_V_22 - 44
 *     ICM_Object_Prot22_A.OBJ_Height_22 - 45
 *     ICM_Object_Prot22_A.OBJ_Height_V_22 - 46
 *     ICM_Object_Prot22_A.OBJ_Height_STD_22 - 47
 *     ICM_Object_Prot22_A.OBJ_Height_STD_V_22 - 48
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Velocity_22 - 49
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Velocity_V_22 - 50
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Velocity_STD_22 - 51
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Vel_STD_V_22 - 52
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Velocity_22 - 53
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Velocity_V_22 - 54
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Velocity_STD_22 - 55
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Vel_STD_V_22 - 56
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Acc_22 - 57
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Acc_V_22 - 58
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Acc_STD_22 - 59
 *     ICM_Object_Prot22_A.OBJ_Abs_Long_Acc_STD_V_22 - 60
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Acc_22 - 61
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Acc_V_22 - 62
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Acc_STD_22 - 63
 *     ICM_Object_Prot22_A.OBJ_Abs_Lat_Acc_STD_V_22 - 64
 *     ICM_Object_Prot22_A.OBJ_Abs_Acceleration_22 - 65
 *     ICM_Object_Prot22_A.OBJ_Abs_Acceleration_V_22 - 66
 *     ICM_Object_Prot22_A.OBJ_Abs_Acc_STD_22 - 67
 *     ICM_Object_Prot22_A.OBJ_Abs_Acc_STD_V_22 - 68
 *     ICM_Object_Prot22_A.OBJ_Inv_TTC_22 - 69
 *     ICM_Object_Prot22_A.OBJ_Inv_TTC_V_22 - 70
 *     ICM_Object_Prot22_A.OBJ_Inv_TTC_STD_22 - 71
 *     ICM_Object_Prot22_A.OBJ_Inv_TTC_STD_V_22 - 72
 *     ICM_Object_Prot22_A.OBJ_Relative_Long_Acc_22 - 73
 *     ICM_Object_Prot22_A.OBJ_Relative_Long_Acc_V_22 - 74
 *     ICM_Object_Prot22_A.OBJ_Relative_Long_Acc_STD_22 - 75
 *     ICM_Object_Prot22_A.OBJ_Rel_Long_Acc_STD_V_22 - 76
 */

/*********
 *  ICM_Object_Prot22_B - 46
 *     ICM_Object_Prot22_B.ICM_Object_Prot22_B_Header - 1
 *     ICM_Object_Prot22_B.OBJ_Relative_Long_Velocity_22 - 2
 *     ICM_Object_Prot22_B.OBJ_Relative_Long_Velocity_V_22 - 3
 *     ICM_Object_Prot22_B.OBJ_Relative_Long_Vel_STD_22 - 4
 *     ICM_Object_Prot22_B.OBJ_Rel_Long_Vel_STD_V_22 - 5
 *     ICM_Object_Prot22_B.OBJ_Relative_Lat_Velocity_22 - 6
 *     ICM_Object_Prot22_B.OBJ_Relative_Lat_Velocity_V_22 - 7
 *     ICM_Object_Prot22_B.OBJ_Relative_Lat_Velocity_STD_22 - 8
 *     ICM_Object_Prot22_B.OBJ_Rel_Lat_Vel_STD_V_22 - 9
 *     ICM_Object_Prot22_B.OBJ_Long_Distance_22 - 10
 *     ICM_Object_Prot22_B.OBJ_Long_Distance_V_22 - 11
 *     ICM_Object_Prot22_B.OBJ_Long_Distance_STD_22 - 12
 *     ICM_Object_Prot22_B.OBJ_Long_Distance_STD_V_22 - 13
 *     ICM_Object_Prot22_B.OBJ_Lat_Distance_22 - 14
 *     ICM_Object_Prot22_B.OBJ_Lat_Distance_V_22 - 15
 *     ICM_Object_Prot22_B.OBJ_Lat_Distance_STD_22 - 16
 *     ICM_Object_Prot22_B.OBJ_Lat_Distance_STD_V_22 - 17
 *     ICM_Object_Prot22_B.OBJ_Absolute_Speed_22 - 18
 *     ICM_Object_Prot22_B.OBJ_Absolute_Speed_V_22 - 19
 *     ICM_Object_Prot22_B.OBJ_Absolute_Speed_STD_22 - 20
 *     ICM_Object_Prot22_B.OBJ_Absolute_Speed_STD_V_22 - 21
 *     ICM_Object_Prot22_B.OBJ_Heading_22 - 22
 *     ICM_Object_Prot22_B.OBJ_Heading_V_22 - 23
 *     ICM_Object_Prot22_B.OBJ_Heading_STD_22 - 24
 *     ICM_Object_Prot22_B.OBJ_Heading_STD_V_22 - 25
 *     ICM_Object_Prot22_B.OBJ_Angle_Rate_STD_22 - 26
 *     ICM_Object_Prot22_B.OBJ_Angle_Rate_STD_V_22 - 27
 *     ICM_Object_Prot22_B.OBJ_Angle_Rate_22 - 28
 *     ICM_Object_Prot22_B.OBJ_Angle_Rate_V_22 - 29
 *     ICM_Object_Prot22_B.OBJ_Angle_Right_22 - 30
 *     ICM_Object_Prot22_B.OBJ_Angle_Right_V_22 - 31
 *     ICM_Object_Prot22_B.OBJ_Angle_Right_STD_22 - 32
 *     ICM_Object_Prot22_B.OBJ_Angle_Right_STD_V_22 - 33
 *     ICM_Object_Prot22_B.OBJ_Angle_Left_22 - 34
 *     ICM_Object_Prot22_B.OBJ_Angle_Left_V_22 - 35
 *     ICM_Object_Prot22_B.OBJ_Angle_Left_STD_22 - 36
 *     ICM_Object_Prot22_B.OBJ_Angle_Left_STD_V_22 - 37
 *     ICM_Object_Prot22_B.OBJ_Angle_Side_22 - 38
 *     ICM_Object_Prot22_B.OBJ_Angle_Side_V_22 - 39
 *     ICM_Object_Prot22_B.OBJ_Angle_Side_STD_22 - 40
 *     ICM_Object_Prot22_B.OBJ_Angle_Side_STD_V_22 - 41
 *     ICM_Object_Prot22_B.OBJ_Angle_Mid_V_22 - 42
 *     ICM_Object_Prot22_B.OBJ_Angle_Mid_22 - 43
 *     ICM_Object_Prot22_B.OBJ_Angle_Mid_STD_22 - 44
 *     ICM_Object_Prot22_B.OBJ_Angle_Mid_STD_V_22 - 45
 *     ICM_Object_Prot22_B.OBJ_Angle_Bottom_V_22 - 46
 *     ICM_Object_Prot22_B.OBJ_Angle_Bottom_22 - 47
 *     ICM_Object_Prot22_B.OBJ_Angle_Bottom_STD_22 - 48
 *     ICM_Object_Prot22_B.OBJ_Angle_Bottom_STD_V_22 - 49
 *     ICM_Object_Prot22_B.OBJ_Visibility_Side_V_22 - 50
 *     ICM_Object_Prot22_B.OBJ_Visibility_Side_22 - 51
 *     ICM_Object_Prot22_B.OBJ_Is_In_Drivable_Area_22 - 52
 *     ICM_Object_Prot22_B.OBJ_Is_In_Drivable_Area_V_22 - 53
 *     ICM_Object_Prot22_B.OBJ_Is_VeryClose_22 - 54
 *     ICM_Object_Prot22_B.OBJ_Is_VeryClose_V_22 - 55
 *     ICM_Object_Prot22_B.OBJ_Buffer_22 - 56
 */

/*********
 *  ICM_Object_Prot23_A - 47
 *     ICM_Object_Prot23_A.ICM_Object_Prot23_A_Header - 1
 *     ICM_Object_Prot23_A.OBJ_CRC_23 - 2
 *     ICM_Object_Prot23_A.OBJ_ID_23 - 3
 *     ICM_Object_Prot23_A.OBJ_Existence_Probability_23 - 4
 *     ICM_Object_Prot23_A.OBJ_Fusion_Source_23 - 5
 *     ICM_Object_Prot23_A.OBJ_Triggered_SDM_23 - 6
 *     ICM_Object_Prot23_A.OBJ_Motion_Category_23 - 7
 *     ICM_Object_Prot23_A.OBJ_Moving_IN_Probability_23 - 8
 *     ICM_Object_Prot23_A.OBJ_Object_Age_23 - 9
 *     ICM_Object_Prot23_A.OBJ_Measuring_Status_23 - 10
 *     ICM_Object_Prot23_A.OBJ_Object_Class_23 - 11
 *     ICM_Object_Prot23_A.OBJ_Class_Probability_23 - 12
 *     ICM_Object_Prot23_A.OBJ_Car_Probability_23 - 13
 *     ICM_Object_Prot23_A.OBJ_Truck_Probability_23 - 14
 *     ICM_Object_Prot23_A.OBJ_Bike_Probability_23 - 15
 *     ICM_Object_Prot23_A.OBJ_Camera_Source_23 - 16
 *     ICM_Object_Prot23_A.OBJ_Motion_Status_23 - 17
 *     ICM_Object_Prot23_A.OBJ_Motion_Orientation_23 - 18
 *     ICM_Object_Prot23_A.OBJ_Has_Cut_Lane_23 - 19
 *     ICM_Object_Prot23_A.OBJ_Has_Cut_Path_23 - 20
 *     ICM_Object_Prot23_A.OBJ_Brake_Light_23 - 21
 *     ICM_Object_Prot23_A.OBJ_Turn_Indicator_Right_23 - 22
 *     ICM_Object_Prot23_A.OBJ_Turn_Indicator_Left_23 - 23
 *     ICM_Object_Prot23_A.OBJ_Light_Indicator_Validity_23 - 24
 *     ICM_Object_Prot23_A.OBJ_Right_Out_Of_Image_23 - 25
 *     ICM_Object_Prot23_A.OBJ_Left_Out_Of_Image_23 - 26
 *     ICM_Object_Prot23_A.OBJ_Right_Out_Of_Image_V_23 - 27
 *     ICM_Object_Prot23_A.OBJ_Left_Out_Of_Image_V_23 - 28
 *     ICM_Object_Prot23_A.OBJ_Top_Out_Of_Image_23 - 29
 *     ICM_Object_Prot23_A.OBJ_Bottom_Out_Of_Image_23 - 30
 *     ICM_Object_Prot23_A.OBJ_Top_Out_Of_Image_V_23 - 31
 *     ICM_Object_Prot23_A.OBJ_Bottom_Out_Of_Image_V_23 - 32
 *     ICM_Object_Prot23_A.OBJ_Lane_Assignment_23 - 33
 *     ICM_Object_Prot23_A.OBJ_Lane_Assignment_V_23 - 34
 *     ICM_Object_Prot23_A.OBJ_Age_Seconds_23 - 35
 *     ICM_Object_Prot23_A.OBJ_Age_Seconds_V_23 - 36
 *     ICM_Object_Prot23_A.OBJ_Width_23 - 37
 *     ICM_Object_Prot23_A.OBJ_Width_V_23 - 38
 *     ICM_Object_Prot23_A.OBJ_Width_STD_23 - 39
 *     ICM_Object_Prot23_A.OBJ_Width_STD_V_23 - 40
 *     ICM_Object_Prot23_A.OBJ_Length_23 - 41
 *     ICM_Object_Prot23_A.OBJ_Length_V_23 - 42
 *     ICM_Object_Prot23_A.OBJ_Length_STD_23 - 43
 *     ICM_Object_Prot23_A.OBJ_Length_STD_V_23 - 44
 *     ICM_Object_Prot23_A.OBJ_Height_23 - 45
 *     ICM_Object_Prot23_A.OBJ_Height_V_23 - 46
 *     ICM_Object_Prot23_A.OBJ_Height_STD_23 - 47
 *     ICM_Object_Prot23_A.OBJ_Height_STD_V_23 - 48
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Velocity_23 - 49
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Velocity_V_23 - 50
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Velocity_STD_23 - 51
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Vel_STD_V_23 - 52
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Velocity_23 - 53
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Velocity_V_23 - 54
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Velocity_STD_23 - 55
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Vel_STD_V_23 - 56
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Acc_23 - 57
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Acc_V_23 - 58
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Acc_STD_23 - 59
 *     ICM_Object_Prot23_A.OBJ_Abs_Long_Acc_STD_V_23 - 60
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Acc_23 - 61
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Acc_V_23 - 62
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Acc_STD_23 - 63
 *     ICM_Object_Prot23_A.OBJ_Abs_Lat_Acc_STD_V_23 - 64
 *     ICM_Object_Prot23_A.OBJ_Abs_Acceleration_23 - 65
 *     ICM_Object_Prot23_A.OBJ_Abs_Acceleration_V_23 - 66
 *     ICM_Object_Prot23_A.OBJ_Abs_Acc_STD_23 - 67
 *     ICM_Object_Prot23_A.OBJ_Abs_Acc_STD_V_23 - 68
 *     ICM_Object_Prot23_A.OBJ_Inv_TTC_23 - 69
 *     ICM_Object_Prot23_A.OBJ_Inv_TTC_V_23 - 70
 *     ICM_Object_Prot23_A.OBJ_Inv_TTC_STD_23 - 71
 *     ICM_Object_Prot23_A.OBJ_Inv_TTC_STD_V_23 - 72
 *     ICM_Object_Prot23_A.OBJ_Relative_Long_Acc_23 - 73
 *     ICM_Object_Prot23_A.OBJ_Relative_Long_Acc_V_23 - 74
 *     ICM_Object_Prot23_A.OBJ_Relative_Long_Acc_STD_23 - 75
 *     ICM_Object_Prot23_A.OBJ_Rel_Long_Acc_STD_V_23 - 76
 */

/*********
 *  ICM_Object_Prot23_B - 48
 *     ICM_Object_Prot23_B.ICM_Object_Prot23_B_Header - 1
 *     ICM_Object_Prot23_B.OBJ_Relative_Long_Velocity_23 - 2
 *     ICM_Object_Prot23_B.OBJ_Relative_Long_Velocity_V_23 - 3
 *     ICM_Object_Prot23_B.OBJ_Relative_Long_Vel_STD_23 - 4
 *     ICM_Object_Prot23_B.OBJ_Rel_Long_Vel_STD_V_23 - 5
 *     ICM_Object_Prot23_B.OBJ_Relative_Lat_Velocity_23 - 6
 *     ICM_Object_Prot23_B.OBJ_Relative_Lat_Velocity_V_23 - 7
 *     ICM_Object_Prot23_B.OBJ_Relative_Lat_Velocity_STD_23 - 8
 *     ICM_Object_Prot23_B.OBJ_Rel_Lat_Vel_STD_V_23 - 9
 *     ICM_Object_Prot23_B.OBJ_Long_Distance_23 - 10
 *     ICM_Object_Prot23_B.OBJ_Long_Distance_V_23 - 11
 *     ICM_Object_Prot23_B.OBJ_Long_Distance_STD_23 - 12
 *     ICM_Object_Prot23_B.OBJ_Long_Distance_STD_V_23 - 13
 *     ICM_Object_Prot23_B.OBJ_Lat_Distance_23 - 14
 *     ICM_Object_Prot23_B.OBJ_Lat_Distance_V_23 - 15
 *     ICM_Object_Prot23_B.OBJ_Lat_Distance_STD_23 - 16
 *     ICM_Object_Prot23_B.OBJ_Lat_Distance_STD_V_23 - 17
 *     ICM_Object_Prot23_B.OBJ_Absolute_Speed_23 - 18
 *     ICM_Object_Prot23_B.OBJ_Absolute_Speed_V_23 - 19
 *     ICM_Object_Prot23_B.OBJ_Absolute_Speed_STD_23 - 20
 *     ICM_Object_Prot23_B.OBJ_Absolute_Speed_STD_V_23 - 21
 *     ICM_Object_Prot23_B.OBJ_Heading_23 - 22
 *     ICM_Object_Prot23_B.OBJ_Heading_V_23 - 23
 *     ICM_Object_Prot23_B.OBJ_Heading_STD_23 - 24
 *     ICM_Object_Prot23_B.OBJ_Heading_STD_V_23 - 25
 *     ICM_Object_Prot23_B.OBJ_Angle_Rate_STD_23 - 26
 *     ICM_Object_Prot23_B.OBJ_Angle_Rate_STD_V_23 - 27
 *     ICM_Object_Prot23_B.OBJ_Angle_Rate_23 - 28
 *     ICM_Object_Prot23_B.OBJ_Angle_Rate_V_23 - 29
 *     ICM_Object_Prot23_B.OBJ_Angle_Right_23 - 30
 *     ICM_Object_Prot23_B.OBJ_Angle_Right_V_23 - 31
 *     ICM_Object_Prot23_B.OBJ_Angle_Right_STD_23 - 32
 *     ICM_Object_Prot23_B.OBJ_Angle_Right_STD_V_23 - 33
 *     ICM_Object_Prot23_B.OBJ_Angle_Left_23 - 34
 *     ICM_Object_Prot23_B.OBJ_Angle_Left_V_23 - 35
 *     ICM_Object_Prot23_B.OBJ_Angle_Left_STD_23 - 36
 *     ICM_Object_Prot23_B.OBJ_Angle_Left_STD_V_23 - 37
 *     ICM_Object_Prot23_B.OBJ_Angle_Side_23 - 38
 *     ICM_Object_Prot23_B.OBJ_Angle_Side_V_23 - 39
 *     ICM_Object_Prot23_B.OBJ_Angle_Side_STD_23 - 40
 *     ICM_Object_Prot23_B.OBJ_Angle_Side_STD_V_23 - 41
 *     ICM_Object_Prot23_B.OBJ_Angle_Mid_V_23 - 42
 *     ICM_Object_Prot23_B.OBJ_Angle_Mid_23 - 43
 *     ICM_Object_Prot23_B.OBJ_Angle_Mid_STD_23 - 44
 *     ICM_Object_Prot23_B.OBJ_Angle_Mid_STD_V_23 - 45
 *     ICM_Object_Prot23_B.OBJ_Angle_Bottom_V_23 - 46
 *     ICM_Object_Prot23_B.OBJ_Angle_Bottom_23 - 47
 *     ICM_Object_Prot23_B.OBJ_Angle_Bottom_STD_23 - 48
 *     ICM_Object_Prot23_B.OBJ_Angle_Bottom_STD_V_23 - 49
 *     ICM_Object_Prot23_B.OBJ_Visibility_Side_V_23 - 50
 *     ICM_Object_Prot23_B.OBJ_Visibility_Side_23 - 51
 *     ICM_Object_Prot23_B.OBJ_Is_In_Drivable_Area_23 - 52
 *     ICM_Object_Prot23_B.OBJ_Is_In_Drivable_Area_V_23 - 53
 *     ICM_Object_Prot23_B.OBJ_Is_VeryClose_23 - 54
 *     ICM_Object_Prot23_B.OBJ_Is_VeryClose_V_23 - 55
 *     ICM_Object_Prot23_B.OBJ_Buffer_23 - 56
 */

/*********
 *  ICM_Object_Prot24_A - 49
 *     ICM_Object_Prot24_A.ICM_Object_Prot24_A_Header - 1
 *     ICM_Object_Prot24_A.OBJ_CRC_24 - 2
 *     ICM_Object_Prot24_A.OBJ_ID_24 - 3
 *     ICM_Object_Prot24_A.OBJ_Existence_Probability_24 - 4
 *     ICM_Object_Prot24_A.OBJ_Fusion_Source_24 - 5
 *     ICM_Object_Prot24_A.OBJ_Triggered_SDM_24 - 6
 *     ICM_Object_Prot24_A.OBJ_Motion_Category_24 - 7
 *     ICM_Object_Prot24_A.OBJ_Moving_IN_Probability_24 - 8
 *     ICM_Object_Prot24_A.OBJ_Object_Age_24 - 9
 *     ICM_Object_Prot24_A.OBJ_Measuring_Status_24 - 10
 *     ICM_Object_Prot24_A.OBJ_Object_Class_24 - 11
 *     ICM_Object_Prot24_A.OBJ_Class_Probability_24 - 12
 *     ICM_Object_Prot24_A.OBJ_Car_Probability_24 - 13
 *     ICM_Object_Prot24_A.OBJ_Truck_Probability_24 - 14
 *     ICM_Object_Prot24_A.OBJ_Bike_Probability_24 - 15
 *     ICM_Object_Prot24_A.OBJ_Camera_Source_24 - 16
 *     ICM_Object_Prot24_A.OBJ_Motion_Status_24 - 17
 *     ICM_Object_Prot24_A.OBJ_Motion_Orientation_24 - 18
 *     ICM_Object_Prot24_A.OBJ_Has_Cut_Lane_24 - 19
 *     ICM_Object_Prot24_A.OBJ_Has_Cut_Path_24 - 20
 *     ICM_Object_Prot24_A.OBJ_Brake_Light_24 - 21
 *     ICM_Object_Prot24_A.OBJ_Turn_Indicator_Right_24 - 22
 *     ICM_Object_Prot24_A.OBJ_Turn_Indicator_Left_24 - 23
 *     ICM_Object_Prot24_A.OBJ_Light_Indicator_Validity_24 - 24
 *     ICM_Object_Prot24_A.OBJ_Right_Out_Of_Image_24 - 25
 *     ICM_Object_Prot24_A.OBJ_Left_Out_Of_Image_24 - 26
 *     ICM_Object_Prot24_A.OBJ_Right_Out_Of_Image_V_24 - 27
 *     ICM_Object_Prot24_A.OBJ_Left_Out_Of_Image_V_24 - 28
 *     ICM_Object_Prot24_A.OBJ_Top_Out_Of_Image_24 - 29
 *     ICM_Object_Prot24_A.OBJ_Bottom_Out_Of_Image_24 - 30
 *     ICM_Object_Prot24_A.OBJ_Top_Out_Of_Image_V_24 - 31
 *     ICM_Object_Prot24_A.OBJ_Bottom_Out_Of_Image_V_24 - 32
 *     ICM_Object_Prot24_A.OBJ_Lane_Assignment_24 - 33
 *     ICM_Object_Prot24_A.OBJ_Lane_Assignment_V_24 - 34
 *     ICM_Object_Prot24_A.OBJ_Age_Seconds_24 - 35
 *     ICM_Object_Prot24_A.OBJ_Age_Seconds_V_24 - 36
 *     ICM_Object_Prot24_A.OBJ_Width_24 - 37
 *     ICM_Object_Prot24_A.OBJ_Width_V_24 - 38
 *     ICM_Object_Prot24_A.OBJ_Width_STD_24 - 39
 *     ICM_Object_Prot24_A.OBJ_Width_STD_V_24 - 40
 *     ICM_Object_Prot24_A.OBJ_Length_24 - 41
 *     ICM_Object_Prot24_A.OBJ_Length_V_24 - 42
 *     ICM_Object_Prot24_A.OBJ_Length_STD_24 - 43
 *     ICM_Object_Prot24_A.OBJ_Length_STD_V_24 - 44
 *     ICM_Object_Prot24_A.OBJ_Height_24 - 45
 *     ICM_Object_Prot24_A.OBJ_Height_V_24 - 46
 *     ICM_Object_Prot24_A.OBJ_Height_STD_24 - 47
 *     ICM_Object_Prot24_A.OBJ_Height_STD_V_24 - 48
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Velocity_24 - 49
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Velocity_V_24 - 50
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Velocity_STD_24 - 51
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Vel_STD_V_24 - 52
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Velocity_24 - 53
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Velocity_V_24 - 54
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Velocity_STD_24 - 55
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Vel_STD_V_24 - 56
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Acc_24 - 57
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Acc_V_24 - 58
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Acc_STD_24 - 59
 *     ICM_Object_Prot24_A.OBJ_Abs_Long_Acc_STD_V_24 - 60
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Acc_24 - 61
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Acc_V_24 - 62
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Acc_STD_24 - 63
 *     ICM_Object_Prot24_A.OBJ_Abs_Lat_Acc_STD_V_24 - 64
 *     ICM_Object_Prot24_A.OBJ_Abs_Acceleration_24 - 65
 *     ICM_Object_Prot24_A.OBJ_Abs_Acceleration_V_24 - 66
 *     ICM_Object_Prot24_A.OBJ_Abs_Acc_STD_24 - 67
 *     ICM_Object_Prot24_A.OBJ_Abs_Acc_STD_V_24 - 68
 *     ICM_Object_Prot24_A.OBJ_Inv_TTC_24 - 69
 *     ICM_Object_Prot24_A.OBJ_Inv_TTC_V_24 - 70
 *     ICM_Object_Prot24_A.OBJ_Inv_TTC_STD_24 - 71
 *     ICM_Object_Prot24_A.OBJ_Inv_TTC_STD_V_24 - 72
 *     ICM_Object_Prot24_A.OBJ_Relative_Long_Acc_24 - 73
 *     ICM_Object_Prot24_A.OBJ_Relative_Long_Acc_V_24 - 74
 *     ICM_Object_Prot24_A.OBJ_Relative_Long_Acc_STD_24 - 75
 *     ICM_Object_Prot24_A.OBJ_Rel_Long_Acc_STD_V_24 - 76
 */

/*********
 *  ICM_Object_Prot24_B - 50
 *     ICM_Object_Prot24_B.ICM_Object_Prot24_B_Header - 1
 *     ICM_Object_Prot24_B.OBJ_Relative_Long_Velocity_24 - 2
 *     ICM_Object_Prot24_B.OBJ_Relative_Long_Velocity_V_24 - 3
 *     ICM_Object_Prot24_B.OBJ_Relative_Long_Vel_STD_24 - 4
 *     ICM_Object_Prot24_B.OBJ_Rel_Long_Vel_STD_V_24 - 5
 *     ICM_Object_Prot24_B.OBJ_Relative_Lat_Velocity_24 - 6
 *     ICM_Object_Prot24_B.OBJ_Relative_Lat_Velocity_V_24 - 7
 *     ICM_Object_Prot24_B.OBJ_Relative_Lat_Velocity_STD_24 - 8
 *     ICM_Object_Prot24_B.OBJ_Rel_Lat_Vel_STD_V_24 - 9
 *     ICM_Object_Prot24_B.OBJ_Long_Distance_24 - 10
 *     ICM_Object_Prot24_B.OBJ_Long_Distance_V_24 - 11
 *     ICM_Object_Prot24_B.OBJ_Long_Distance_STD_24 - 12
 *     ICM_Object_Prot24_B.OBJ_Long_Distance_STD_V_24 - 13
 *     ICM_Object_Prot24_B.OBJ_Lat_Distance_24 - 14
 *     ICM_Object_Prot24_B.OBJ_Lat_Distance_V_24 - 15
 *     ICM_Object_Prot24_B.OBJ_Lat_Distance_STD_24 - 16
 *     ICM_Object_Prot24_B.OBJ_Lat_Distance_STD_V_24 - 17
 *     ICM_Object_Prot24_B.OBJ_Absolute_Speed_24 - 18
 *     ICM_Object_Prot24_B.OBJ_Absolute_Speed_V_24 - 19
 *     ICM_Object_Prot24_B.OBJ_Absolute_Speed_STD_24 - 20
 *     ICM_Object_Prot24_B.OBJ_Absolute_Speed_STD_V_24 - 21
 *     ICM_Object_Prot24_B.OBJ_Heading_24 - 22
 *     ICM_Object_Prot24_B.OBJ_Heading_V_24 - 23
 *     ICM_Object_Prot24_B.OBJ_Heading_STD_24 - 24
 *     ICM_Object_Prot24_B.OBJ_Heading_STD_V_24 - 25
 *     ICM_Object_Prot24_B.OBJ_Angle_Rate_STD_24 - 26
 *     ICM_Object_Prot24_B.OBJ_Angle_Rate_STD_V_24 - 27
 *     ICM_Object_Prot24_B.OBJ_Angle_Rate_24 - 28
 *     ICM_Object_Prot24_B.OBJ_Angle_Rate_V_24 - 29
 *     ICM_Object_Prot24_B.OBJ_Angle_Right_24 - 30
 *     ICM_Object_Prot24_B.OBJ_Angle_Right_V_24 - 31
 *     ICM_Object_Prot24_B.OBJ_Angle_Right_STD_24 - 32
 *     ICM_Object_Prot24_B.OBJ_Angle_Right_STD_V_24 - 33
 *     ICM_Object_Prot24_B.OBJ_Angle_Left_24 - 34
 *     ICM_Object_Prot24_B.OBJ_Angle_Left_V_24 - 35
 *     ICM_Object_Prot24_B.OBJ_Angle_Left_STD_24 - 36
 *     ICM_Object_Prot24_B.OBJ_Angle_Left_STD_V_24 - 37
 *     ICM_Object_Prot24_B.OBJ_Angle_Side_24 - 38
 *     ICM_Object_Prot24_B.OBJ_Angle_Side_V_24 - 39
 *     ICM_Object_Prot24_B.OBJ_Angle_Side_STD_24 - 40
 *     ICM_Object_Prot24_B.OBJ_Angle_Side_STD_V_24 - 41
 *     ICM_Object_Prot24_B.OBJ_Angle_Mid_V_24 - 42
 *     ICM_Object_Prot24_B.OBJ_Angle_Mid_24 - 43
 *     ICM_Object_Prot24_B.OBJ_Angle_Mid_STD_24 - 44
 *     ICM_Object_Prot24_B.OBJ_Angle_Mid_STD_V_24 - 45
 *     ICM_Object_Prot24_B.OBJ_Angle_Bottom_V_24 - 46
 *     ICM_Object_Prot24_B.OBJ_Angle_Bottom_24 - 47
 *     ICM_Object_Prot24_B.OBJ_Angle_Bottom_STD_24 - 48
 *     ICM_Object_Prot24_B.OBJ_Angle_Bottom_STD_V_24 - 49
 *     ICM_Object_Prot24_B.OBJ_Visibility_Side_V_24 - 50
 *     ICM_Object_Prot24_B.OBJ_Visibility_Side_24 - 51
 *     ICM_Object_Prot24_B.OBJ_Is_In_Drivable_Area_24 - 52
 *     ICM_Object_Prot24_B.OBJ_Is_In_Drivable_Area_V_24 - 53
 *     ICM_Object_Prot24_B.OBJ_Is_VeryClose_24 - 54
 *     ICM_Object_Prot24_B.OBJ_Is_VeryClose_V_24 - 55
 *     ICM_Object_Prot24_B.OBJ_Buffer_24 - 56
 */

/*********
 *  ICM_Object_Prot25_A - 51
 *     ICM_Object_Prot25_A.ICM_Object_Prot25_A_Header - 1
 *     ICM_Object_Prot25_A.OBJ_CRC_25 - 2
 *     ICM_Object_Prot25_A.OBJ_ID_25 - 3
 *     ICM_Object_Prot25_A.OBJ_Existence_Probability_25 - 4
 *     ICM_Object_Prot25_A.OBJ_Fusion_Source_25 - 5
 *     ICM_Object_Prot25_A.OBJ_Triggered_SDM_25 - 6
 *     ICM_Object_Prot25_A.OBJ_Motion_Category_25 - 7
 *     ICM_Object_Prot25_A.OBJ_Moving_IN_Probability_25 - 8
 *     ICM_Object_Prot25_A.OBJ_Object_Age_25 - 9
 *     ICM_Object_Prot25_A.OBJ_Measuring_Status_25 - 10
 *     ICM_Object_Prot25_A.OBJ_Object_Class_25 - 11
 *     ICM_Object_Prot25_A.OBJ_Class_Probability_25 - 12
 *     ICM_Object_Prot25_A.OBJ_Car_Probability_25 - 13
 *     ICM_Object_Prot25_A.OBJ_Truck_Probability_25 - 14
 *     ICM_Object_Prot25_A.OBJ_Bike_Probability_25 - 15
 *     ICM_Object_Prot25_A.OBJ_Camera_Source_25 - 16
 *     ICM_Object_Prot25_A.OBJ_Motion_Status_25 - 17
 *     ICM_Object_Prot25_A.OBJ_Motion_Orientation_25 - 18
 *     ICM_Object_Prot25_A.OBJ_Has_Cut_Lane_25 - 19
 *     ICM_Object_Prot25_A.OBJ_Has_Cut_Path_25 - 20
 *     ICM_Object_Prot25_A.OBJ_Brake_Light_25 - 21
 *     ICM_Object_Prot25_A.OBJ_Turn_Indicator_Right_25 - 22
 *     ICM_Object_Prot25_A.OBJ_Turn_Indicator_Left_25 - 23
 *     ICM_Object_Prot25_A.OBJ_Light_Indicator_Validity_25 - 24
 *     ICM_Object_Prot25_A.OBJ_Right_Out_Of_Image_25 - 25
 *     ICM_Object_Prot25_A.OBJ_Left_Out_Of_Image_25 - 26
 *     ICM_Object_Prot25_A.OBJ_Right_Out_Of_Image_V_25 - 27
 *     ICM_Object_Prot25_A.OBJ_Left_Out_Of_Image_V_25 - 28
 *     ICM_Object_Prot25_A.OBJ_Top_Out_Of_Image_25 - 29
 *     ICM_Object_Prot25_A.OBJ_Bottom_Out_Of_Image_25 - 30
 *     ICM_Object_Prot25_A.OBJ_Top_Out_Of_Image_V_25 - 31
 *     ICM_Object_Prot25_A.OBJ_Bottom_Out_Of_Image_V_25 - 32
 *     ICM_Object_Prot25_A.OBJ_Lane_Assignment_25 - 33
 *     ICM_Object_Prot25_A.OBJ_Lane_Assignment_V_25 - 34
 *     ICM_Object_Prot25_A.OBJ_Age_Seconds_25 - 35
 *     ICM_Object_Prot25_A.OBJ_Age_Seconds_V_25 - 36
 *     ICM_Object_Prot25_A.OBJ_Width_25 - 37
 *     ICM_Object_Prot25_A.OBJ_Width_V_25 - 38
 *     ICM_Object_Prot25_A.OBJ_Width_STD_25 - 39
 *     ICM_Object_Prot25_A.OBJ_Width_STD_V_25 - 40
 *     ICM_Object_Prot25_A.OBJ_Length_25 - 41
 *     ICM_Object_Prot25_A.OBJ_Length_V_25 - 42
 *     ICM_Object_Prot25_A.OBJ_Length_STD_25 - 43
 *     ICM_Object_Prot25_A.OBJ_Length_STD_V_25 - 44
 *     ICM_Object_Prot25_A.OBJ_Height_25 - 45
 *     ICM_Object_Prot25_A.OBJ_Height_V_25 - 46
 *     ICM_Object_Prot25_A.OBJ_Height_STD_25 - 47
 *     ICM_Object_Prot25_A.OBJ_Height_STD_V_25 - 48
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Velocity_25 - 49
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Velocity_V_25 - 50
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Velocity_STD_25 - 51
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Vel_STD_V_25 - 52
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Velocity_25 - 53
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Velocity_V_25 - 54
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Velocity_STD_25 - 55
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Vel_STD_V_25 - 56
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Acc_25 - 57
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Acc_V_25 - 58
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Acc_STD_25 - 59
 *     ICM_Object_Prot25_A.OBJ_Abs_Long_Acc_STD_V_25 - 60
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Acc_25 - 61
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Acc_V_25 - 62
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Acc_STD_25 - 63
 *     ICM_Object_Prot25_A.OBJ_Abs_Lat_Acc_STD_V_25 - 64
 *     ICM_Object_Prot25_A.OBJ_Abs_Acceleration_25 - 65
 *     ICM_Object_Prot25_A.OBJ_Abs_Acceleration_V_25 - 66
 *     ICM_Object_Prot25_A.OBJ_Abs_Acc_STD_25 - 67
 *     ICM_Object_Prot25_A.OBJ_Abs_Acc_STD_V_25 - 68
 *     ICM_Object_Prot25_A.OBJ_Inv_TTC_25 - 69
 *     ICM_Object_Prot25_A.OBJ_Inv_TTC_V_25 - 70
 *     ICM_Object_Prot25_A.OBJ_Inv_TTC_STD_25 - 71
 *     ICM_Object_Prot25_A.OBJ_Inv_TTC_STD_V_25 - 72
 *     ICM_Object_Prot25_A.OBJ_Relative_Long_Acc_25 - 73
 *     ICM_Object_Prot25_A.OBJ_Relative_Long_Acc_V_25 - 74
 *     ICM_Object_Prot25_A.OBJ_Relative_Long_Acc_STD_25 - 75
 *     ICM_Object_Prot25_A.OBJ_Rel_Long_Acc_STD_V_25 - 76
 */

/*********
 *  ICM_Object_Prot25_B - 52
 *     ICM_Object_Prot25_B.ICM_Object_Prot25_B_Header - 1
 *     ICM_Object_Prot25_B.OBJ_Relative_Long_Velocity_25 - 2
 *     ICM_Object_Prot25_B.OBJ_Relative_Long_Velocity_V_25 - 3
 *     ICM_Object_Prot25_B.OBJ_Relative_Long_Vel_STD_25 - 4
 *     ICM_Object_Prot25_B.OBJ_Rel_Long_Vel_STD_V_25 - 5
 *     ICM_Object_Prot25_B.OBJ_Relative_Lat_Velocity_25 - 6
 *     ICM_Object_Prot25_B.OBJ_Relative_Lat_Velocity_V_25 - 7
 *     ICM_Object_Prot25_B.OBJ_Relative_Lat_Velocity_STD_25 - 8
 *     ICM_Object_Prot25_B.OBJ_Rel_Lat_Vel_STD_V_25 - 9
 *     ICM_Object_Prot25_B.OBJ_Long_Distance_25 - 10
 *     ICM_Object_Prot25_B.OBJ_Long_Distance_V_25 - 11
 *     ICM_Object_Prot25_B.OBJ_Long_Distance_STD_25 - 12
 *     ICM_Object_Prot25_B.OBJ_Long_Distance_STD_V_25 - 13
 *     ICM_Object_Prot25_B.OBJ_Lat_Distance_25 - 14
 *     ICM_Object_Prot25_B.OBJ_Lat_Distance_V_25 - 15
 *     ICM_Object_Prot25_B.OBJ_Lat_Distance_STD_25 - 16
 *     ICM_Object_Prot25_B.OBJ_Lat_Distance_STD_V_25 - 17
 *     ICM_Object_Prot25_B.OBJ_Absolute_Speed_25 - 18
 *     ICM_Object_Prot25_B.OBJ_Absolute_Speed_V_25 - 19
 *     ICM_Object_Prot25_B.OBJ_Absolute_Speed_STD_25 - 20
 *     ICM_Object_Prot25_B.OBJ_Absolute_Speed_STD_V_25 - 21
 *     ICM_Object_Prot25_B.OBJ_Heading_25 - 22
 *     ICM_Object_Prot25_B.OBJ_Heading_V_25 - 23
 *     ICM_Object_Prot25_B.OBJ_Heading_STD_25 - 24
 *     ICM_Object_Prot25_B.OBJ_Heading_STD_V_25 - 25
 *     ICM_Object_Prot25_B.OBJ_Angle_Rate_STD_25 - 26
 *     ICM_Object_Prot25_B.OBJ_Angle_Rate_STD_V_25 - 27
 *     ICM_Object_Prot25_B.OBJ_Angle_Rate_25 - 28
 *     ICM_Object_Prot25_B.OBJ_Angle_Rate_V_25 - 29
 *     ICM_Object_Prot25_B.OBJ_Angle_Right_25 - 30
 *     ICM_Object_Prot25_B.OBJ_Angle_Right_V_25 - 31
 *     ICM_Object_Prot25_B.OBJ_Angle_Right_STD_25 - 32
 *     ICM_Object_Prot25_B.OBJ_Angle_Right_STD_V_25 - 33
 *     ICM_Object_Prot25_B.OBJ_Angle_Left_25 - 34
 *     ICM_Object_Prot25_B.OBJ_Angle_Left_V_25 - 35
 *     ICM_Object_Prot25_B.OBJ_Angle_Left_STD_25 - 36
 *     ICM_Object_Prot25_B.OBJ_Angle_Left_STD_V_25 - 37
 *     ICM_Object_Prot25_B.OBJ_Angle_Side_25 - 38
 *     ICM_Object_Prot25_B.OBJ_Angle_Side_V_25 - 39
 *     ICM_Object_Prot25_B.OBJ_Angle_Side_STD_25 - 40
 *     ICM_Object_Prot25_B.OBJ_Angle_Side_STD_V_25 - 41
 *     ICM_Object_Prot25_B.OBJ_Angle_Mid_V_25 - 42
 *     ICM_Object_Prot25_B.OBJ_Angle_Mid_25 - 43
 *     ICM_Object_Prot25_B.OBJ_Angle_Mid_STD_25 - 44
 *     ICM_Object_Prot25_B.OBJ_Angle_Mid_STD_V_25 - 45
 *     ICM_Object_Prot25_B.OBJ_Angle_Bottom_V_25 - 46
 *     ICM_Object_Prot25_B.OBJ_Angle_Bottom_25 - 47
 *     ICM_Object_Prot25_B.OBJ_Angle_Bottom_STD_25 - 48
 *     ICM_Object_Prot25_B.OBJ_Angle_Bottom_STD_V_25 - 49
 *     ICM_Object_Prot25_B.OBJ_Visibility_Side_V_25 - 50
 *     ICM_Object_Prot25_B.OBJ_Visibility_Side_25 - 51
 *     ICM_Object_Prot25_B.OBJ_Is_In_Drivable_Area_25 - 52
 *     ICM_Object_Prot25_B.OBJ_Is_In_Drivable_Area_V_25 - 53
 *     ICM_Object_Prot25_B.OBJ_Is_VeryClose_25 - 54
 *     ICM_Object_Prot25_B.OBJ_Is_VeryClose_V_25 - 55
 *     ICM_Object_Prot25_B.OBJ_Buffer_25 - 56
 */

/*********
 *  ICM_Object_Prot26_A - 53
 *     ICM_Object_Prot26_A.ICM_Object_Prot26_A_Header - 1
 *     ICM_Object_Prot26_A.OBJ_CRC_26 - 2
 *     ICM_Object_Prot26_A.OBJ_ID_26 - 3
 *     ICM_Object_Prot26_A.OBJ_Existence_Probability_26 - 4
 *     ICM_Object_Prot26_A.OBJ_Fusion_Source_26 - 5
 *     ICM_Object_Prot26_A.OBJ_Triggered_SDM_26 - 6
 *     ICM_Object_Prot26_A.OBJ_Motion_Category_26 - 7
 *     ICM_Object_Prot26_A.OBJ_Moving_IN_Probability_26 - 8
 *     ICM_Object_Prot26_A.OBJ_Object_Age_26 - 9
 *     ICM_Object_Prot26_A.OBJ_Measuring_Status_26 - 10
 *     ICM_Object_Prot26_A.OBJ_Object_Class_26 - 11
 *     ICM_Object_Prot26_A.OBJ_Class_Probability_26 - 12
 *     ICM_Object_Prot26_A.OBJ_Car_Probability_26 - 13
 *     ICM_Object_Prot26_A.OBJ_Truck_Probability_26 - 14
 *     ICM_Object_Prot26_A.OBJ_Bike_Probability_26 - 15
 *     ICM_Object_Prot26_A.OBJ_Camera_Source_26 - 16
 *     ICM_Object_Prot26_A.OBJ_Motion_Status_26 - 17
 *     ICM_Object_Prot26_A.OBJ_Motion_Orientation_26 - 18
 *     ICM_Object_Prot26_A.OBJ_Has_Cut_Lane_26 - 19
 *     ICM_Object_Prot26_A.OBJ_Has_Cut_Path_26 - 20
 *     ICM_Object_Prot26_A.OBJ_Brake_Light_26 - 21
 *     ICM_Object_Prot26_A.OBJ_Turn_Indicator_Right_26 - 22
 *     ICM_Object_Prot26_A.OBJ_Turn_Indicator_Left_26 - 23
 *     ICM_Object_Prot26_A.OBJ_Light_Indicator_Validity_26 - 24
 *     ICM_Object_Prot26_A.OBJ_Right_Out_Of_Image_26 - 25
 *     ICM_Object_Prot26_A.OBJ_Left_Out_Of_Image_26 - 26
 *     ICM_Object_Prot26_A.OBJ_Right_Out_Of_Image_V_26 - 27
 *     ICM_Object_Prot26_A.OBJ_Left_Out_Of_Image_V_26 - 28
 *     ICM_Object_Prot26_A.OBJ_Top_Out_Of_Image_26 - 29
 *     ICM_Object_Prot26_A.OBJ_Bottom_Out_Of_Image_26 - 30
 *     ICM_Object_Prot26_A.OBJ_Top_Out_Of_Image_V_26 - 31
 *     ICM_Object_Prot26_A.OBJ_Bottom_Out_Of_Image_V_26 - 32
 *     ICM_Object_Prot26_A.OBJ_Lane_Assignment_26 - 33
 *     ICM_Object_Prot26_A.OBJ_Lane_Assignment_V_26 - 34
 *     ICM_Object_Prot26_A.OBJ_Age_Seconds_26 - 35
 *     ICM_Object_Prot26_A.OBJ_Age_Seconds_V_26 - 36
 *     ICM_Object_Prot26_A.OBJ_Width_26 - 37
 *     ICM_Object_Prot26_A.OBJ_Width_V_26 - 38
 *     ICM_Object_Prot26_A.OBJ_Width_STD_26 - 39
 *     ICM_Object_Prot26_A.OBJ_Width_STD_V_26 - 40
 *     ICM_Object_Prot26_A.OBJ_Length_26 - 41
 *     ICM_Object_Prot26_A.OBJ_Length_V_26 - 42
 *     ICM_Object_Prot26_A.OBJ_Length_STD_26 - 43
 *     ICM_Object_Prot26_A.OBJ_Length_STD_V_26 - 44
 *     ICM_Object_Prot26_A.OBJ_Height_26 - 45
 *     ICM_Object_Prot26_A.OBJ_Height_V_26 - 46
 *     ICM_Object_Prot26_A.OBJ_Height_STD_26 - 47
 *     ICM_Object_Prot26_A.OBJ_Height_STD_V_26 - 48
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Velocity_26 - 49
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Velocity_V_26 - 50
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Velocity_STD_26 - 51
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Vel_STD_V_26 - 52
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Velocity_26 - 53
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Velocity_V_26 - 54
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Velocity_STD_26 - 55
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Vel_STD_V_26 - 56
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Acc_26 - 57
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Acc_V_26 - 58
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Acc_STD_26 - 59
 *     ICM_Object_Prot26_A.OBJ_Abs_Long_Acc_STD_V_26 - 60
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Acc_26 - 61
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Acc_V_26 - 62
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Acc_STD_26 - 63
 *     ICM_Object_Prot26_A.OBJ_Abs_Lat_Acc_STD_V_26 - 64
 *     ICM_Object_Prot26_A.OBJ_Abs_Acceleration_26 - 65
 *     ICM_Object_Prot26_A.OBJ_Abs_Acceleration_V_26 - 66
 *     ICM_Object_Prot26_A.OBJ_Abs_Acc_STD_26 - 67
 *     ICM_Object_Prot26_A.OBJ_Abs_Acc_STD_V_26 - 68
 *     ICM_Object_Prot26_A.OBJ_Inv_TTC_26 - 69
 *     ICM_Object_Prot26_A.OBJ_Inv_TTC_V_26 - 70
 *     ICM_Object_Prot26_A.OBJ_Inv_TTC_STD_26 - 71
 *     ICM_Object_Prot26_A.OBJ_Inv_TTC_STD_V_26 - 72
 *     ICM_Object_Prot26_A.OBJ_Relative_Long_Acc_26 - 73
 *     ICM_Object_Prot26_A.OBJ_Relative_Long_Acc_V_26 - 74
 *     ICM_Object_Prot26_A.OBJ_Relative_Long_Acc_STD_26 - 75
 *     ICM_Object_Prot26_A.OBJ_Rel_Long_Acc_STD_V_26 - 76
 */

/*********
 *  ICM_Object_Prot26_B - 54
 *     ICM_Object_Prot26_B.ICM_Object_Prot26_B_Header - 1
 *     ICM_Object_Prot26_B.OBJ_Relative_Long_Velocity_26 - 2
 *     ICM_Object_Prot26_B.OBJ_Relative_Long_Velocity_V_26 - 3
 *     ICM_Object_Prot26_B.OBJ_Relative_Long_Vel_STD_26 - 4
 *     ICM_Object_Prot26_B.OBJ_Rel_Long_Vel_STD_V_26 - 5
 *     ICM_Object_Prot26_B.OBJ_Relative_Lat_Velocity_26 - 6
 *     ICM_Object_Prot26_B.OBJ_Relative_Lat_Velocity_V_26 - 7
 *     ICM_Object_Prot26_B.OBJ_Relative_Lat_Velocity_STD_26 - 8
 *     ICM_Object_Prot26_B.OBJ_Rel_Lat_Vel_STD_V_26 - 9
 *     ICM_Object_Prot26_B.OBJ_Long_Distance_26 - 10
 *     ICM_Object_Prot26_B.OBJ_Long_Distance_V_26 - 11
 *     ICM_Object_Prot26_B.OBJ_Long_Distance_STD_26 - 12
 *     ICM_Object_Prot26_B.OBJ_Long_Distance_STD_V_26 - 13
 *     ICM_Object_Prot26_B.OBJ_Lat_Distance_26 - 14
 *     ICM_Object_Prot26_B.OBJ_Lat_Distance_V_26 - 15
 *     ICM_Object_Prot26_B.OBJ_Lat_Distance_STD_26 - 16
 *     ICM_Object_Prot26_B.OBJ_Lat_Distance_STD_V_26 - 17
 *     ICM_Object_Prot26_B.OBJ_Absolute_Speed_26 - 18
 *     ICM_Object_Prot26_B.OBJ_Absolute_Speed_V_26 - 19
 *     ICM_Object_Prot26_B.OBJ_Absolute_Speed_STD_26 - 20
 *     ICM_Object_Prot26_B.OBJ_Absolute_Speed_STD_V_26 - 21
 *     ICM_Object_Prot26_B.OBJ_Heading_26 - 22
 *     ICM_Object_Prot26_B.OBJ_Heading_V_26 - 23
 *     ICM_Object_Prot26_B.OBJ_Heading_STD_26 - 24
 *     ICM_Object_Prot26_B.OBJ_Heading_STD_V_26 - 25
 *     ICM_Object_Prot26_B.OBJ_Angle_Rate_STD_26 - 26
 *     ICM_Object_Prot26_B.OBJ_Angle_Rate_STD_V_26 - 27
 *     ICM_Object_Prot26_B.OBJ_Angle_Rate_26 - 28
 *     ICM_Object_Prot26_B.OBJ_Angle_Rate_V_26 - 29
 *     ICM_Object_Prot26_B.OBJ_Angle_Right_26 - 30
 *     ICM_Object_Prot26_B.OBJ_Angle_Right_V_26 - 31
 *     ICM_Object_Prot26_B.OBJ_Angle_Right_STD_26 - 32
 *     ICM_Object_Prot26_B.OBJ_Angle_Right_STD_V_26 - 33
 *     ICM_Object_Prot26_B.OBJ_Angle_Left_26 - 34
 *     ICM_Object_Prot26_B.OBJ_Angle_Left_V_26 - 35
 *     ICM_Object_Prot26_B.OBJ_Angle_Left_STD_26 - 36
 *     ICM_Object_Prot26_B.OBJ_Angle_Left_STD_V_26 - 37
 *     ICM_Object_Prot26_B.OBJ_Angle_Side_26 - 38
 *     ICM_Object_Prot26_B.OBJ_Angle_Side_V_26 - 39
 *     ICM_Object_Prot26_B.OBJ_Angle_Side_STD_26 - 40
 *     ICM_Object_Prot26_B.OBJ_Angle_Side_STD_V_26 - 41
 *     ICM_Object_Prot26_B.OBJ_Angle_Mid_V_26 - 42
 *     ICM_Object_Prot26_B.OBJ_Angle_Mid_26 - 43
 *     ICM_Object_Prot26_B.OBJ_Angle_Mid_STD_26 - 44
 *     ICM_Object_Prot26_B.OBJ_Angle_Mid_STD_V_26 - 45
 *     ICM_Object_Prot26_B.OBJ_Angle_Bottom_V_26 - 46
 *     ICM_Object_Prot26_B.OBJ_Angle_Bottom_26 - 47
 *     ICM_Object_Prot26_B.OBJ_Angle_Bottom_STD_26 - 48
 *     ICM_Object_Prot26_B.OBJ_Angle_Bottom_STD_V_26 - 49
 *     ICM_Object_Prot26_B.OBJ_Visibility_Side_V_26 - 50
 *     ICM_Object_Prot26_B.OBJ_Visibility_Side_26 - 51
 *     ICM_Object_Prot26_B.OBJ_Is_In_Drivable_Area_26 - 52
 *     ICM_Object_Prot26_B.OBJ_Is_In_Drivable_Area_V_26 - 53
 *     ICM_Object_Prot26_B.OBJ_Is_VeryClose_26 - 54
 *     ICM_Object_Prot26_B.OBJ_Is_VeryClose_V_26 - 55
 *     ICM_Object_Prot26_B.OBJ_Buffer_26 - 56
 */

/*********
 *  ICM_Object_Prot27_A - 55
 *     ICM_Object_Prot27_A.ICM_Object_Prot27_A_Header - 1
 *     ICM_Object_Prot27_A.OBJ_CRC_27 - 2
 *     ICM_Object_Prot27_A.OBJ_ID_27 - 3
 *     ICM_Object_Prot27_A.OBJ_Existence_Probability_27 - 4
 *     ICM_Object_Prot27_A.OBJ_Fusion_Source_27 - 5
 *     ICM_Object_Prot27_A.OBJ_Triggered_SDM_27 - 6
 *     ICM_Object_Prot27_A.OBJ_Motion_Category_27 - 7
 *     ICM_Object_Prot27_A.OBJ_Moving_IN_Probability_27 - 8
 *     ICM_Object_Prot27_A.OBJ_Object_Age_27 - 9
 *     ICM_Object_Prot27_A.OBJ_Measuring_Status_27 - 10
 *     ICM_Object_Prot27_A.OBJ_Object_Class_27 - 11
 *     ICM_Object_Prot27_A.OBJ_Class_Probability_27 - 12
 *     ICM_Object_Prot27_A.OBJ_Car_Probability_27 - 13
 *     ICM_Object_Prot27_A.OBJ_Truck_Probability_27 - 14
 *     ICM_Object_Prot27_A.OBJ_Bike_Probability_27 - 15
 *     ICM_Object_Prot27_A.OBJ_Camera_Source_27 - 16
 *     ICM_Object_Prot27_A.OBJ_Motion_Status_27 - 17
 *     ICM_Object_Prot27_A.OBJ_Motion_Orientation_27 - 18
 *     ICM_Object_Prot27_A.OBJ_Has_Cut_Lane_27 - 19
 *     ICM_Object_Prot27_A.OBJ_Has_Cut_Path_27 - 20
 *     ICM_Object_Prot27_A.OBJ_Brake_Light_27 - 21
 *     ICM_Object_Prot27_A.OBJ_Turn_Indicator_Right_27 - 22
 *     ICM_Object_Prot27_A.OBJ_Turn_Indicator_Left_27 - 23
 *     ICM_Object_Prot27_A.OBJ_Light_Indicator_Validity_27 - 24
 *     ICM_Object_Prot27_A.OBJ_Right_Out_Of_Image_27 - 25
 *     ICM_Object_Prot27_A.OBJ_Left_Out_Of_Image_27 - 26
 *     ICM_Object_Prot27_A.OBJ_Right_Out_Of_Image_V_27 - 27
 *     ICM_Object_Prot27_A.OBJ_Left_Out_Of_Image_V_27 - 28
 *     ICM_Object_Prot27_A.OBJ_Top_Out_Of_Image_27 - 29
 *     ICM_Object_Prot27_A.OBJ_Bottom_Out_Of_Image_27 - 30
 *     ICM_Object_Prot27_A.OBJ_Top_Out_Of_Image_V_27 - 31
 *     ICM_Object_Prot27_A.OBJ_Bottom_Out_Of_Image_V_27 - 32
 *     ICM_Object_Prot27_A.OBJ_Lane_Assignment_27 - 33
 *     ICM_Object_Prot27_A.OBJ_Lane_Assignment_V_27 - 34
 *     ICM_Object_Prot27_A.OBJ_Age_Seconds_27 - 35
 *     ICM_Object_Prot27_A.OBJ_Age_Seconds_V_27 - 36
 *     ICM_Object_Prot27_A.OBJ_Width_27 - 37
 *     ICM_Object_Prot27_A.OBJ_Width_V_27 - 38
 *     ICM_Object_Prot27_A.OBJ_Width_STD_27 - 39
 *     ICM_Object_Prot27_A.OBJ_Width_STD_V_27 - 40
 *     ICM_Object_Prot27_A.OBJ_Length_27 - 41
 *     ICM_Object_Prot27_A.OBJ_Length_V_27 - 42
 *     ICM_Object_Prot27_A.OBJ_Length_STD_27 - 43
 *     ICM_Object_Prot27_A.OBJ_Length_STD_V_27 - 44
 *     ICM_Object_Prot27_A.OBJ_Height_27 - 45
 *     ICM_Object_Prot27_A.OBJ_Height_V_27 - 46
 *     ICM_Object_Prot27_A.OBJ_Height_STD_27 - 47
 *     ICM_Object_Prot27_A.OBJ_Height_STD_V_27 - 48
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Velocity_27 - 49
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Velocity_V_27 - 50
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Velocity_STD_27 - 51
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Vel_STD_V_27 - 52
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Velocity_27 - 53
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Velocity_V_27 - 54
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Velocity_STD_27 - 55
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Vel_STD_V_27 - 56
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Acc_27 - 57
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Acc_V_27 - 58
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Acc_STD_27 - 59
 *     ICM_Object_Prot27_A.OBJ_Abs_Long_Acc_STD_V_27 - 60
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Acc_27 - 61
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Acc_V_27 - 62
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Acc_STD_27 - 63
 *     ICM_Object_Prot27_A.OBJ_Abs_Lat_Acc_STD_V_27 - 64
 *     ICM_Object_Prot27_A.OBJ_Abs_Acceleration_27 - 65
 *     ICM_Object_Prot27_A.OBJ_Abs_Acceleration_V_27 - 66
 *     ICM_Object_Prot27_A.OBJ_Abs_Acc_STD_27 - 67
 *     ICM_Object_Prot27_A.OBJ_Abs_Acc_STD_V_27 - 68
 *     ICM_Object_Prot27_A.OBJ_Inv_TTC_27 - 69
 *     ICM_Object_Prot27_A.OBJ_Inv_TTC_V_27 - 70
 *     ICM_Object_Prot27_A.OBJ_Inv_TTC_STD_27 - 71
 *     ICM_Object_Prot27_A.OBJ_Inv_TTC_STD_V_27 - 72
 *     ICM_Object_Prot27_A.OBJ_Relative_Long_Acc_27 - 73
 *     ICM_Object_Prot27_A.OBJ_Relative_Long_Acc_V_27 - 74
 *     ICM_Object_Prot27_A.OBJ_Relative_Long_Acc_STD_27 - 75
 *     ICM_Object_Prot27_A.OBJ_Rel_Long_Acc_STD_V_27 - 76
 */

/*********
 *  ICM_Object_Prot27_B - 56
 *     ICM_Object_Prot27_B.ICM_Object_Prot27_B_Header - 1
 *     ICM_Object_Prot27_B.OBJ_Relative_Long_Velocity_27 - 2
 *     ICM_Object_Prot27_B.OBJ_Relative_Long_Velocity_V_27 - 3
 *     ICM_Object_Prot27_B.OBJ_Relative_Long_Vel_STD_27 - 4
 *     ICM_Object_Prot27_B.OBJ_Rel_Long_Vel_STD_V_27 - 5
 *     ICM_Object_Prot27_B.OBJ_Relative_Lat_Velocity_27 - 6
 *     ICM_Object_Prot27_B.OBJ_Relative_Lat_Velocity_V_27 - 7
 *     ICM_Object_Prot27_B.OBJ_Relative_Lat_Velocity_STD_27 - 8
 *     ICM_Object_Prot27_B.OBJ_Rel_Lat_Vel_STD_V_27 - 9
 *     ICM_Object_Prot27_B.OBJ_Long_Distance_27 - 10
 *     ICM_Object_Prot27_B.OBJ_Long_Distance_V_27 - 11
 *     ICM_Object_Prot27_B.OBJ_Long_Distance_STD_27 - 12
 *     ICM_Object_Prot27_B.OBJ_Long_Distance_STD_V_27 - 13
 *     ICM_Object_Prot27_B.OBJ_Lat_Distance_27 - 14
 *     ICM_Object_Prot27_B.OBJ_Lat_Distance_V_27 - 15
 *     ICM_Object_Prot27_B.OBJ_Lat_Distance_STD_27 - 16
 *     ICM_Object_Prot27_B.OBJ_Lat_Distance_STD_V_27 - 17
 *     ICM_Object_Prot27_B.OBJ_Absolute_Speed_27 - 18
 *     ICM_Object_Prot27_B.OBJ_Absolute_Speed_V_27 - 19
 *     ICM_Object_Prot27_B.OBJ_Absolute_Speed_STD_27 - 20
 *     ICM_Object_Prot27_B.OBJ_Absolute_Speed_STD_V_27 - 21
 *     ICM_Object_Prot27_B.OBJ_Heading_27 - 22
 *     ICM_Object_Prot27_B.OBJ_Heading_V_27 - 23
 *     ICM_Object_Prot27_B.OBJ_Heading_STD_27 - 24
 *     ICM_Object_Prot27_B.OBJ_Heading_STD_V_27 - 25
 *     ICM_Object_Prot27_B.OBJ_Angle_Rate_STD_27 - 26
 *     ICM_Object_Prot27_B.OBJ_Angle_Rate_STD_V_27 - 27
 *     ICM_Object_Prot27_B.OBJ_Angle_Rate_27 - 28
 *     ICM_Object_Prot27_B.OBJ_Angle_Rate_V_27 - 29
 *     ICM_Object_Prot27_B.OBJ_Angle_Right_27 - 30
 *     ICM_Object_Prot27_B.OBJ_Angle_Right_V_27 - 31
 *     ICM_Object_Prot27_B.OBJ_Angle_Right_STD_27 - 32
 *     ICM_Object_Prot27_B.OBJ_Angle_Right_STD_V_27 - 33
 *     ICM_Object_Prot27_B.OBJ_Angle_Left_27 - 34
 *     ICM_Object_Prot27_B.OBJ_Angle_Left_V_27 - 35
 *     ICM_Object_Prot27_B.OBJ_Angle_Left_STD_27 - 36
 *     ICM_Object_Prot27_B.OBJ_Angle_Left_STD_V_27 - 37
 *     ICM_Object_Prot27_B.OBJ_Angle_Side_27 - 38
 *     ICM_Object_Prot27_B.OBJ_Angle_Side_V_27 - 39
 *     ICM_Object_Prot27_B.OBJ_Angle_Side_STD_27 - 40
 *     ICM_Object_Prot27_B.OBJ_Angle_Side_STD_V_27 - 41
 *     ICM_Object_Prot27_B.OBJ_Angle_Mid_V_27 - 42
 *     ICM_Object_Prot27_B.OBJ_Angle_Mid_27 - 43
 *     ICM_Object_Prot27_B.OBJ_Angle_Mid_STD_27 - 44
 *     ICM_Object_Prot27_B.OBJ_Angle_Mid_STD_V_27 - 45
 *     ICM_Object_Prot27_B.OBJ_Angle_Bottom_V_27 - 46
 *     ICM_Object_Prot27_B.OBJ_Angle_Bottom_27 - 47
 *     ICM_Object_Prot27_B.OBJ_Angle_Bottom_STD_27 - 48
 *     ICM_Object_Prot27_B.OBJ_Angle_Bottom_STD_V_27 - 49
 *     ICM_Object_Prot27_B.OBJ_Visibility_Side_V_27 - 50
 *     ICM_Object_Prot27_B.OBJ_Visibility_Side_27 - 51
 *     ICM_Object_Prot27_B.OBJ_Is_In_Drivable_Area_27 - 52
 *     ICM_Object_Prot27_B.OBJ_Is_In_Drivable_Area_V_27 - 53
 *     ICM_Object_Prot27_B.OBJ_Is_VeryClose_27 - 54
 *     ICM_Object_Prot27_B.OBJ_Is_VeryClose_V_27 - 55
 *     ICM_Object_Prot27_B.OBJ_Buffer_27 - 56
 */

/*********
 *  ICM_Object_Prot28_A - 57
 *     ICM_Object_Prot28_A.ICM_Object_Prot28_A_Header - 1
 *     ICM_Object_Prot28_A.OBJ_CRC_28 - 2
 *     ICM_Object_Prot28_A.OBJ_ID_28 - 3
 *     ICM_Object_Prot28_A.OBJ_Existence_Probability_28 - 4
 *     ICM_Object_Prot28_A.OBJ_Fusion_Source_28 - 5
 *     ICM_Object_Prot28_A.OBJ_Triggered_SDM_28 - 6
 *     ICM_Object_Prot28_A.OBJ_Motion_Category_28 - 7
 *     ICM_Object_Prot28_A.OBJ_Moving_IN_Probability_28 - 8
 *     ICM_Object_Prot28_A.OBJ_Object_Age_28 - 9
 *     ICM_Object_Prot28_A.OBJ_Measuring_Status_28 - 10
 *     ICM_Object_Prot28_A.OBJ_Object_Class_28 - 11
 *     ICM_Object_Prot28_A.OBJ_Class_Probability_28 - 12
 *     ICM_Object_Prot28_A.OBJ_Car_Probability_28 - 13
 *     ICM_Object_Prot28_A.OBJ_Truck_Probability_28 - 14
 *     ICM_Object_Prot28_A.OBJ_Bike_Probability_28 - 15
 *     ICM_Object_Prot28_A.OBJ_Camera_Source_28 - 16
 *     ICM_Object_Prot28_A.OBJ_Motion_Status_28 - 17
 *     ICM_Object_Prot28_A.OBJ_Motion_Orientation_28 - 18
 *     ICM_Object_Prot28_A.OBJ_Has_Cut_Lane_28 - 19
 *     ICM_Object_Prot28_A.OBJ_Has_Cut_Path_28 - 20
 *     ICM_Object_Prot28_A.OBJ_Brake_Light_28 - 21
 *     ICM_Object_Prot28_A.OBJ_Turn_Indicator_Right_28 - 22
 *     ICM_Object_Prot28_A.OBJ_Turn_Indicator_Left_28 - 23
 *     ICM_Object_Prot28_A.OBJ_Light_Indicator_Validity_28 - 24
 *     ICM_Object_Prot28_A.OBJ_Right_Out_Of_Image_28 - 25
 *     ICM_Object_Prot28_A.OBJ_Left_Out_Of_Image_28 - 26
 *     ICM_Object_Prot28_A.OBJ_Right_Out_Of_Image_V_28 - 27
 *     ICM_Object_Prot28_A.OBJ_Left_Out_Of_Image_V_28 - 28
 *     ICM_Object_Prot28_A.OBJ_Top_Out_Of_Image_28 - 29
 *     ICM_Object_Prot28_A.OBJ_Bottom_Out_Of_Image_28 - 30
 *     ICM_Object_Prot28_A.OBJ_Top_Out_Of_Image_V_28 - 31
 *     ICM_Object_Prot28_A.OBJ_Bottom_Out_Of_Image_V_28 - 32
 *     ICM_Object_Prot28_A.OBJ_Lane_Assignment_28 - 33
 *     ICM_Object_Prot28_A.OBJ_Lane_Assignment_V_28 - 34
 *     ICM_Object_Prot28_A.OBJ_Age_Seconds_28 - 35
 *     ICM_Object_Prot28_A.OBJ_Age_Seconds_V_28 - 36
 *     ICM_Object_Prot28_A.OBJ_Width_28 - 37
 *     ICM_Object_Prot28_A.OBJ_Width_V_28 - 38
 *     ICM_Object_Prot28_A.OBJ_Width_STD_28 - 39
 *     ICM_Object_Prot28_A.OBJ_Width_STD_V_28 - 40
 *     ICM_Object_Prot28_A.OBJ_Length_28 - 41
 *     ICM_Object_Prot28_A.OBJ_Length_V_28 - 42
 *     ICM_Object_Prot28_A.OBJ_Length_STD_28 - 43
 *     ICM_Object_Prot28_A.OBJ_Length_STD_V_28 - 44
 *     ICM_Object_Prot28_A.OBJ_Height_28 - 45
 *     ICM_Object_Prot28_A.OBJ_Height_V_28 - 46
 *     ICM_Object_Prot28_A.OBJ_Height_STD_28 - 47
 *     ICM_Object_Prot28_A.OBJ_Height_STD_V_28 - 48
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Velocity_28 - 49
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Velocity_V_28 - 50
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Velocity_STD_28 - 51
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Vel_STD_V_28 - 52
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Velocity_28 - 53
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Velocity_V_28 - 54
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Velocity_STD_28 - 55
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Vel_STD_V_28 - 56
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Acc_28 - 57
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Acc_V_28 - 58
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Acc_STD_28 - 59
 *     ICM_Object_Prot28_A.OBJ_Abs_Long_Acc_STD_V_28 - 60
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Acc_28 - 61
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Acc_V_28 - 62
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Acc_STD_28 - 63
 *     ICM_Object_Prot28_A.OBJ_Abs_Lat_Acc_STD_V_28 - 64
 *     ICM_Object_Prot28_A.OBJ_Abs_Acceleration_28 - 65
 *     ICM_Object_Prot28_A.OBJ_Abs_Acceleration_V_28 - 66
 *     ICM_Object_Prot28_A.OBJ_Abs_Acc_STD_28 - 67
 *     ICM_Object_Prot28_A.OBJ_Abs_Acc_STD_V_28 - 68
 *     ICM_Object_Prot28_A.OBJ_Inv_TTC_28 - 69
 *     ICM_Object_Prot28_A.OBJ_Inv_TTC_V_28 - 70
 *     ICM_Object_Prot28_A.OBJ_Inv_TTC_STD_28 - 71
 *     ICM_Object_Prot28_A.OBJ_Inv_TTC_STD_V_28 - 72
 *     ICM_Object_Prot28_A.OBJ_Relative_Long_Acc_28 - 73
 *     ICM_Object_Prot28_A.OBJ_Relative_Long_Acc_V_28 - 74
 *     ICM_Object_Prot28_A.OBJ_Relative_Long_Acc_STD_28 - 75
 *     ICM_Object_Prot28_A.OBJ_Rel_Long_Acc_STD_V_28 - 76
 */

/*********
 *  ICM_Object_Prot28_B - 58
 *     ICM_Object_Prot28_B.ICM_Object_Prot28_B_Header - 1
 *     ICM_Object_Prot28_B.OBJ_Relative_Long_Velocity_28 - 2
 *     ICM_Object_Prot28_B.OBJ_Relative_Long_Velocity_V_28 - 3
 *     ICM_Object_Prot28_B.OBJ_Relative_Long_Vel_STD_28 - 4
 *     ICM_Object_Prot28_B.OBJ_Rel_Long_Vel_STD_V_28 - 5
 *     ICM_Object_Prot28_B.OBJ_Relative_Lat_Velocity_28 - 6
 *     ICM_Object_Prot28_B.OBJ_Relative_Lat_Velocity_V_28 - 7
 *     ICM_Object_Prot28_B.OBJ_Relative_Lat_Velocity_STD_28 - 8
 *     ICM_Object_Prot28_B.OBJ_Rel_Lat_Vel_STD_V_28 - 9
 *     ICM_Object_Prot28_B.OBJ_Long_Distance_28 - 10
 *     ICM_Object_Prot28_B.OBJ_Long_Distance_V_28 - 11
 *     ICM_Object_Prot28_B.OBJ_Long_Distance_STD_28 - 12
 *     ICM_Object_Prot28_B.OBJ_Long_Distance_STD_V_28 - 13
 *     ICM_Object_Prot28_B.OBJ_Lat_Distance_28 - 14
 *     ICM_Object_Prot28_B.OBJ_Lat_Distance_V_28 - 15
 *     ICM_Object_Prot28_B.OBJ_Lat_Distance_STD_28 - 16
 *     ICM_Object_Prot28_B.OBJ_Lat_Distance_STD_V_28 - 17
 *     ICM_Object_Prot28_B.OBJ_Absolute_Speed_28 - 18
 *     ICM_Object_Prot28_B.OBJ_Absolute_Speed_V_28 - 19
 *     ICM_Object_Prot28_B.OBJ_Absolute_Speed_STD_28 - 20
 *     ICM_Object_Prot28_B.OBJ_Absolute_Speed_STD_V_28 - 21
 *     ICM_Object_Prot28_B.OBJ_Heading_28 - 22
 *     ICM_Object_Prot28_B.OBJ_Heading_V_28 - 23
 *     ICM_Object_Prot28_B.OBJ_Heading_STD_28 - 24
 *     ICM_Object_Prot28_B.OBJ_Heading_STD_V_28 - 25
 *     ICM_Object_Prot28_B.OBJ_Angle_Rate_STD_28 - 26
 *     ICM_Object_Prot28_B.OBJ_Angle_Rate_STD_V_28 - 27
 *     ICM_Object_Prot28_B.OBJ_Angle_Rate_28 - 28
 *     ICM_Object_Prot28_B.OBJ_Angle_Rate_V_28 - 29
 *     ICM_Object_Prot28_B.OBJ_Angle_Right_28 - 30
 *     ICM_Object_Prot28_B.OBJ_Angle_Right_V_28 - 31
 *     ICM_Object_Prot28_B.OBJ_Angle_Right_STD_28 - 32
 *     ICM_Object_Prot28_B.OBJ_Angle_Right_STD_V_28 - 33
 *     ICM_Object_Prot28_B.OBJ_Angle_Left_28 - 34
 *     ICM_Object_Prot28_B.OBJ_Angle_Left_V_28 - 35
 *     ICM_Object_Prot28_B.OBJ_Angle_Left_STD_28 - 36
 *     ICM_Object_Prot28_B.OBJ_Angle_Left_STD_V_28 - 37
 *     ICM_Object_Prot28_B.OBJ_Angle_Side_28 - 38
 *     ICM_Object_Prot28_B.OBJ_Angle_Side_V_28 - 39
 *     ICM_Object_Prot28_B.OBJ_Angle_Side_STD_28 - 40
 *     ICM_Object_Prot28_B.OBJ_Angle_Side_STD_V_28 - 41
 *     ICM_Object_Prot28_B.OBJ_Angle_Mid_V_28 - 42
 *     ICM_Object_Prot28_B.OBJ_Angle_Mid_28 - 43
 *     ICM_Object_Prot28_B.OBJ_Angle_Mid_STD_28 - 44
 *     ICM_Object_Prot28_B.OBJ_Angle_Mid_STD_V_28 - 45
 *     ICM_Object_Prot28_B.OBJ_Angle_Bottom_V_28 - 46
 *     ICM_Object_Prot28_B.OBJ_Angle_Bottom_28 - 47
 *     ICM_Object_Prot28_B.OBJ_Angle_Bottom_STD_28 - 48
 *     ICM_Object_Prot28_B.OBJ_Angle_Bottom_STD_V_28 - 49
 *     ICM_Object_Prot28_B.OBJ_Visibility_Side_V_28 - 50
 *     ICM_Object_Prot28_B.OBJ_Visibility_Side_28 - 51
 *     ICM_Object_Prot28_B.OBJ_Is_In_Drivable_Area_28 - 52
 *     ICM_Object_Prot28_B.OBJ_Is_In_Drivable_Area_V_28 - 53
 *     ICM_Object_Prot28_B.OBJ_Is_VeryClose_28 - 54
 *     ICM_Object_Prot28_B.OBJ_Is_VeryClose_V_28 - 55
 *     ICM_Object_Prot28_B.OBJ_Buffer_28 - 56
 */

/*********
 *  ICM_Object_Prot29_A - 59
 *     ICM_Object_Prot29_A.ICM_Object_Prot29_A_Header - 1
 *     ICM_Object_Prot29_A.OBJ_CRC_29 - 2
 *     ICM_Object_Prot29_A.OBJ_ID_29 - 3
 *     ICM_Object_Prot29_A.OBJ_Existence_Probability_29 - 4
 *     ICM_Object_Prot29_A.OBJ_Fusion_Source_29 - 5
 *     ICM_Object_Prot29_A.OBJ_Triggered_SDM_29 - 6
 *     ICM_Object_Prot29_A.OBJ_Motion_Category_29 - 7
 *     ICM_Object_Prot29_A.OBJ_Moving_IN_Probability_29 - 8
 *     ICM_Object_Prot29_A.OBJ_Object_Age_29 - 9
 *     ICM_Object_Prot29_A.OBJ_Measuring_Status_29 - 10
 *     ICM_Object_Prot29_A.OBJ_Object_Class_29 - 11
 *     ICM_Object_Prot29_A.OBJ_Class_Probability_29 - 12
 *     ICM_Object_Prot29_A.OBJ_Car_Probability_29 - 13
 *     ICM_Object_Prot29_A.OBJ_Truck_Probability_29 - 14
 *     ICM_Object_Prot29_A.OBJ_Bike_Probability_29 - 15
 *     ICM_Object_Prot29_A.OBJ_Camera_Source_29 - 16
 *     ICM_Object_Prot29_A.OBJ_Motion_Status_29 - 17
 *     ICM_Object_Prot29_A.OBJ_Motion_Orientation_29 - 18
 *     ICM_Object_Prot29_A.OBJ_Has_Cut_Lane_29 - 19
 *     ICM_Object_Prot29_A.OBJ_Has_Cut_Path_29 - 20
 *     ICM_Object_Prot29_A.OBJ_Brake_Light_29 - 21
 *     ICM_Object_Prot29_A.OBJ_Turn_Indicator_Right_29 - 22
 *     ICM_Object_Prot29_A.OBJ_Turn_Indicator_Left_29 - 23
 *     ICM_Object_Prot29_A.OBJ_Light_Indicator_Validity_29 - 24
 *     ICM_Object_Prot29_A.OBJ_Right_Out_Of_Image_29 - 25
 *     ICM_Object_Prot29_A.OBJ_Left_Out_Of_Image_29 - 26
 *     ICM_Object_Prot29_A.OBJ_Right_Out_Of_Image_V_29 - 27
 *     ICM_Object_Prot29_A.OBJ_Left_Out_Of_Image_V_29 - 28
 *     ICM_Object_Prot29_A.OBJ_Top_Out_Of_Image_29 - 29
 *     ICM_Object_Prot29_A.OBJ_Bottom_Out_Of_Image_29 - 30
 *     ICM_Object_Prot29_A.OBJ_Top_Out_Of_Image_V_29 - 31
 *     ICM_Object_Prot29_A.OBJ_Bottom_Out_Of_Image_V_29 - 32
 *     ICM_Object_Prot29_A.OBJ_Lane_Assignment_29 - 33
 *     ICM_Object_Prot29_A.OBJ_Lane_Assignment_V_29 - 34
 *     ICM_Object_Prot29_A.OBJ_Age_Seconds_29 - 35
 *     ICM_Object_Prot29_A.OBJ_Age_Seconds_V_29 - 36
 *     ICM_Object_Prot29_A.OBJ_Width_29 - 37
 *     ICM_Object_Prot29_A.OBJ_Width_V_29 - 38
 *     ICM_Object_Prot29_A.OBJ_Width_STD_29 - 39
 *     ICM_Object_Prot29_A.OBJ_Width_STD_V_29 - 40
 *     ICM_Object_Prot29_A.OBJ_Length_29 - 41
 *     ICM_Object_Prot29_A.OBJ_Length_V_29 - 42
 *     ICM_Object_Prot29_A.OBJ_Length_STD_29 - 43
 *     ICM_Object_Prot29_A.OBJ_Length_STD_V_29 - 44
 *     ICM_Object_Prot29_A.OBJ_Height_29 - 45
 *     ICM_Object_Prot29_A.OBJ_Height_V_29 - 46
 *     ICM_Object_Prot29_A.OBJ_Height_STD_29 - 47
 *     ICM_Object_Prot29_A.OBJ_Height_STD_V_29 - 48
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Velocity_29 - 49
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Velocity_V_29 - 50
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Velocity_STD_29 - 51
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Vel_STD_V_29 - 52
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Velocity_29 - 53
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Velocity_V_29 - 54
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Velocity_STD_29 - 55
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Vel_STD_V_29 - 56
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Acc_29 - 57
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Acc_V_29 - 58
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Acc_STD_29 - 59
 *     ICM_Object_Prot29_A.OBJ_Abs_Long_Acc_STD_V_29 - 60
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Acc_29 - 61
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Acc_V_29 - 62
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Acc_STD_29 - 63
 *     ICM_Object_Prot29_A.OBJ_Abs_Lat_Acc_STD_V_29 - 64
 *     ICM_Object_Prot29_A.OBJ_Abs_Acceleration_29 - 65
 *     ICM_Object_Prot29_A.OBJ_Abs_Acceleration_V_29 - 66
 *     ICM_Object_Prot29_A.OBJ_Abs_Acc_STD_29 - 67
 *     ICM_Object_Prot29_A.OBJ_Abs_Acc_STD_V_29 - 68
 *     ICM_Object_Prot29_A.OBJ_Inv_TTC_29 - 69
 *     ICM_Object_Prot29_A.OBJ_Inv_TTC_V_29 - 70
 *     ICM_Object_Prot29_A.OBJ_Inv_TTC_STD_29 - 71
 *     ICM_Object_Prot29_A.OBJ_Inv_TTC_STD_V_29 - 72
 *     ICM_Object_Prot29_A.OBJ_Relative_Long_Acc_29 - 73
 *     ICM_Object_Prot29_A.OBJ_Relative_Long_Acc_V_29 - 74
 *     ICM_Object_Prot29_A.OBJ_Relative_Long_Acc_STD_29 - 75
 *     ICM_Object_Prot29_A.OBJ_Rel_Long_Acc_STD_V_29 - 76
 */

/*********
 *  ICM_Object_Prot29_B - 60
 *     ICM_Object_Prot29_B.ICM_Object_Prot29_B_Header - 1
 *     ICM_Object_Prot29_B.OBJ_Relative_Long_Velocity_29 - 2
 *     ICM_Object_Prot29_B.OBJ_Relative_Long_Velocity_V_29 - 3
 *     ICM_Object_Prot29_B.OBJ_Relative_Long_Vel_STD_29 - 4
 *     ICM_Object_Prot29_B.OBJ_Rel_Long_Vel_STD_V_29 - 5
 *     ICM_Object_Prot29_B.OBJ_Relative_Lat_Velocity_29 - 6
 *     ICM_Object_Prot29_B.OBJ_Relative_Lat_Velocity_V_29 - 7
 *     ICM_Object_Prot29_B.OBJ_Relative_Lat_Velocity_STD_29 - 8
 *     ICM_Object_Prot29_B.OBJ_Rel_Lat_Vel_STD_V_29 - 9
 *     ICM_Object_Prot29_B.OBJ_Long_Distance_29 - 10
 *     ICM_Object_Prot29_B.OBJ_Long_Distance_V_29 - 11
 *     ICM_Object_Prot29_B.OBJ_Long_Distance_STD_29 - 12
 *     ICM_Object_Prot29_B.OBJ_Long_Distance_STD_V_29 - 13
 *     ICM_Object_Prot29_B.OBJ_Lat_Distance_29 - 14
 *     ICM_Object_Prot29_B.OBJ_Lat_Distance_V_29 - 15
 *     ICM_Object_Prot29_B.OBJ_Lat_Distance_STD_29 - 16
 *     ICM_Object_Prot29_B.OBJ_Lat_Distance_STD_V_29 - 17
 *     ICM_Object_Prot29_B.OBJ_Absolute_Speed_29 - 18
 *     ICM_Object_Prot29_B.OBJ_Absolute_Speed_V_29 - 19
 *     ICM_Object_Prot29_B.OBJ_Absolute_Speed_STD_29 - 20
 *     ICM_Object_Prot29_B.OBJ_Absolute_Speed_STD_V_29 - 21
 *     ICM_Object_Prot29_B.OBJ_Heading_29 - 22
 *     ICM_Object_Prot29_B.OBJ_Heading_V_29 - 23
 *     ICM_Object_Prot29_B.OBJ_Heading_STD_29 - 24
 *     ICM_Object_Prot29_B.OBJ_Heading_STD_V_29 - 25
 *     ICM_Object_Prot29_B.OBJ_Angle_Rate_STD_29 - 26
 *     ICM_Object_Prot29_B.OBJ_Angle_Rate_STD_V_29 - 27
 *     ICM_Object_Prot29_B.OBJ_Angle_Rate_29 - 28
 *     ICM_Object_Prot29_B.OBJ_Angle_Rate_V_29 - 29
 *     ICM_Object_Prot29_B.OBJ_Angle_Right_29 - 30
 *     ICM_Object_Prot29_B.OBJ_Angle_Right_V_29 - 31
 *     ICM_Object_Prot29_B.OBJ_Angle_Right_STD_29 - 32
 *     ICM_Object_Prot29_B.OBJ_Angle_Right_STD_V_29 - 33
 *     ICM_Object_Prot29_B.OBJ_Angle_Left_29 - 34
 *     ICM_Object_Prot29_B.OBJ_Angle_Left_V_29 - 35
 *     ICM_Object_Prot29_B.OBJ_Angle_Left_STD_29 - 36
 *     ICM_Object_Prot29_B.OBJ_Angle_Left_STD_V_29 - 37
 *     ICM_Object_Prot29_B.OBJ_Angle_Side_29 - 38
 *     ICM_Object_Prot29_B.OBJ_Angle_Side_V_29 - 39
 *     ICM_Object_Prot29_B.OBJ_Angle_Side_STD_29 - 40
 *     ICM_Object_Prot29_B.OBJ_Angle_Side_STD_V_29 - 41
 *     ICM_Object_Prot29_B.OBJ_Angle_Mid_V_29 - 42
 *     ICM_Object_Prot29_B.OBJ_Angle_Mid_29 - 43
 *     ICM_Object_Prot29_B.OBJ_Angle_Mid_STD_29 - 44
 *     ICM_Object_Prot29_B.OBJ_Angle_Mid_STD_V_29 - 45
 *     ICM_Object_Prot29_B.OBJ_Angle_Bottom_V_29 - 46
 *     ICM_Object_Prot29_B.OBJ_Angle_Bottom_29 - 47
 *     ICM_Object_Prot29_B.OBJ_Angle_Bottom_STD_29 - 48
 *     ICM_Object_Prot29_B.OBJ_Angle_Bottom_STD_V_29 - 49
 *     ICM_Object_Prot29_B.OBJ_Visibility_Side_V_29 - 50
 *     ICM_Object_Prot29_B.OBJ_Visibility_Side_29 - 51
 *     ICM_Object_Prot29_B.OBJ_Is_In_Drivable_Area_29 - 52
 *     ICM_Object_Prot29_B.OBJ_Is_In_Drivable_Area_V_29 - 53
 *     ICM_Object_Prot29_B.OBJ_Is_VeryClose_29 - 54
 *     ICM_Object_Prot29_B.OBJ_Is_VeryClose_V_29 - 55
 *     ICM_Object_Prot29_B.OBJ_Buffer_29 - 56
 */

/*********
 *  ICM_Object_Prot2_A - 61
 *     ICM_Object_Prot2_A.ICM_Object_Prot2_A_Header - 1
 *     ICM_Object_Prot2_A.OBJ_CRC_2 - 2
 *     ICM_Object_Prot2_A.OBJ_ID_2 - 3
 *     ICM_Object_Prot2_A.OBJ_Existence_Probability_2 - 4
 *     ICM_Object_Prot2_A.OBJ_Fusion_Source_2 - 5
 *     ICM_Object_Prot2_A.OBJ_Triggered_SDM_2 - 6
 *     ICM_Object_Prot2_A.OBJ_Motion_Category_2 - 7
 *     ICM_Object_Prot2_A.OBJ_Moving_IN_Probability_2 - 8
 *     ICM_Object_Prot2_A.OBJ_Object_Age_2 - 9
 *     ICM_Object_Prot2_A.OBJ_Measuring_Status_2 - 10
 *     ICM_Object_Prot2_A.OBJ_Object_Class_2 - 11
 *     ICM_Object_Prot2_A.OBJ_Class_Probability_2 - 12
 *     ICM_Object_Prot2_A.OBJ_Car_Probability_2 - 13
 *     ICM_Object_Prot2_A.OBJ_Truck_Probability_2 - 14
 *     ICM_Object_Prot2_A.OBJ_Bike_Probability_2 - 15
 *     ICM_Object_Prot2_A.OBJ_Camera_Source_2 - 16
 *     ICM_Object_Prot2_A.OBJ_Motion_Status_2 - 17
 *     ICM_Object_Prot2_A.OBJ_Motion_Orientation_2 - 18
 *     ICM_Object_Prot2_A.OBJ_Has_Cut_Lane_2 - 19
 *     ICM_Object_Prot2_A.OBJ_Has_Cut_Path_2 - 20
 *     ICM_Object_Prot2_A.OBJ_Brake_Light_2 - 21
 *     ICM_Object_Prot2_A.OBJ_Turn_Indicator_Right_2 - 22
 *     ICM_Object_Prot2_A.OBJ_Turn_Indicator_Left_2 - 23
 *     ICM_Object_Prot2_A.OBJ_Light_Indicator_Validity_2 - 24
 *     ICM_Object_Prot2_A.OBJ_Right_Out_Of_Image_2 - 25
 *     ICM_Object_Prot2_A.OBJ_Left_Out_Of_Image_2 - 26
 *     ICM_Object_Prot2_A.OBJ_Right_Out_Of_Image_V_2 - 27
 *     ICM_Object_Prot2_A.OBJ_Left_Out_Of_Image_V_2 - 28
 *     ICM_Object_Prot2_A.OBJ_Top_Out_Of_Image_2 - 29
 *     ICM_Object_Prot2_A.OBJ_Bottom_Out_Of_Image_2 - 30
 *     ICM_Object_Prot2_A.OBJ_Top_Out_Of_Image_V_2 - 31
 *     ICM_Object_Prot2_A.OBJ_Bottom_Out_Of_Image_V_2 - 32
 *     ICM_Object_Prot2_A.OBJ_Lane_Assignment_2 - 33
 *     ICM_Object_Prot2_A.OBJ_Lane_Assignment_V_2 - 34
 *     ICM_Object_Prot2_A.OBJ_Age_Seconds_2 - 35
 *     ICM_Object_Prot2_A.OBJ_Age_Seconds_V_2 - 36
 *     ICM_Object_Prot2_A.OBJ_Width_2 - 37
 *     ICM_Object_Prot2_A.OBJ_Width_V_2 - 38
 *     ICM_Object_Prot2_A.OBJ_Width_STD_2 - 39
 *     ICM_Object_Prot2_A.OBJ_Width_STD_V_2 - 40
 *     ICM_Object_Prot2_A.OBJ_Length_2 - 41
 *     ICM_Object_Prot2_A.OBJ_Length_V_2 - 42
 *     ICM_Object_Prot2_A.OBJ_Length_STD_2 - 43
 *     ICM_Object_Prot2_A.OBJ_Length_STD_V_2 - 44
 *     ICM_Object_Prot2_A.OBJ_Height_2 - 45
 *     ICM_Object_Prot2_A.OBJ_Height_V_2 - 46
 *     ICM_Object_Prot2_A.OBJ_Height_STD_2 - 47
 *     ICM_Object_Prot2_A.OBJ_Height_STD_V_2 - 48
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Velocity_2 - 49
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Velocity_V_2 - 50
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Velocity_STD_2 - 51
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Vel_STD_V_2 - 52
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Velocity_2 - 53
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Velocity_V_2 - 54
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Velocity_STD_2 - 55
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Vel_STD_V_2 - 56
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Acc_2 - 57
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Acc_V_2 - 58
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Acc_STD_2 - 59
 *     ICM_Object_Prot2_A.OBJ_Abs_Long_Acc_STD_V_2 - 60
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Acc_2 - 61
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Acc_V_2 - 62
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Acc_STD_2 - 63
 *     ICM_Object_Prot2_A.OBJ_Abs_Lat_Acc_STD_V_2 - 64
 *     ICM_Object_Prot2_A.OBJ_Abs_Acceleration_2 - 65
 *     ICM_Object_Prot2_A.OBJ_Abs_Acceleration_V_2 - 66
 *     ICM_Object_Prot2_A.OBJ_Abs_Acc_STD_2 - 67
 *     ICM_Object_Prot2_A.OBJ_Abs_Acc_STD_V_2 - 68
 *     ICM_Object_Prot2_A.OBJ_Inv_TTC_2 - 69
 *     ICM_Object_Prot2_A.OBJ_Inv_TTC_V_2 - 70
 *     ICM_Object_Prot2_A.OBJ_Inv_TTC_STD_2 - 71
 *     ICM_Object_Prot2_A.OBJ_Inv_TTC_STD_V_2 - 72
 *     ICM_Object_Prot2_A.OBJ_Relative_Long_Acc_2 - 73
 *     ICM_Object_Prot2_A.OBJ_Relative_Long_Acc_V_2 - 74
 *     ICM_Object_Prot2_A.OBJ_Relative_Long_Acc_STD_2 - 75
 *     ICM_Object_Prot2_A.OBJ_Rel_Long_Acc_STD_V_2 - 76
 */

/*********
 *  ICM_Object_Prot2_B - 62
 *     ICM_Object_Prot2_B.ICM_Object_Prot2_B_Header - 1
 *     ICM_Object_Prot2_B.OBJ_Relative_Long_Velocity_2 - 2
 *     ICM_Object_Prot2_B.OBJ_Relative_Long_Velocity_V_2 - 3
 *     ICM_Object_Prot2_B.OBJ_Relative_Long_Vel_STD_2 - 4
 *     ICM_Object_Prot2_B.OBJ_Rel_Long_Vel_STD_V_2 - 5
 *     ICM_Object_Prot2_B.OBJ_Relative_Lat_Velocity_2 - 6
 *     ICM_Object_Prot2_B.OBJ_Relative_Lat_Velocity_V_2 - 7
 *     ICM_Object_Prot2_B.OBJ_Relative_Lat_Velocity_STD_2 - 8
 *     ICM_Object_Prot2_B.OBJ_Rel_Lat_Vel_STD_V_2 - 9
 *     ICM_Object_Prot2_B.OBJ_Long_Distance_2 - 10
 *     ICM_Object_Prot2_B.OBJ_Long_Distance_V_2 - 11
 *     ICM_Object_Prot2_B.OBJ_Long_Distance_STD_2 - 12
 *     ICM_Object_Prot2_B.OBJ_Long_Distance_STD_V_2 - 13
 *     ICM_Object_Prot2_B.OBJ_Lat_Distance_2 - 14
 *     ICM_Object_Prot2_B.OBJ_Lat_Distance_V_2 - 15
 *     ICM_Object_Prot2_B.OBJ_Lat_Distance_STD_2 - 16
 *     ICM_Object_Prot2_B.OBJ_Lat_Distance_STD_V_2 - 17
 *     ICM_Object_Prot2_B.OBJ_Absolute_Speed_2 - 18
 *     ICM_Object_Prot2_B.OBJ_Absolute_Speed_V_2 - 19
 *     ICM_Object_Prot2_B.OBJ_Absolute_Speed_STD_2 - 20
 *     ICM_Object_Prot2_B.OBJ_Absolute_Speed_STD_V_2 - 21
 *     ICM_Object_Prot2_B.OBJ_Heading_2 - 22
 *     ICM_Object_Prot2_B.OBJ_Heading_V_2 - 23
 *     ICM_Object_Prot2_B.OBJ_Heading_STD_2 - 24
 *     ICM_Object_Prot2_B.OBJ_Heading_STD_V_2 - 25
 *     ICM_Object_Prot2_B.OBJ_Angle_Rate_STD_2 - 26
 *     ICM_Object_Prot2_B.OBJ_Angle_Rate_STD_V_2 - 27
 *     ICM_Object_Prot2_B.OBJ_Angle_Rate_2 - 28
 *     ICM_Object_Prot2_B.OBJ_Angle_Rate_V_2 - 29
 *     ICM_Object_Prot2_B.OBJ_Angle_Right_2 - 30
 *     ICM_Object_Prot2_B.OBJ_Angle_Right_V_2 - 31
 *     ICM_Object_Prot2_B.OBJ_Angle_Right_STD_2 - 32
 *     ICM_Object_Prot2_B.OBJ_Angle_Right_STD_V_2 - 33
 *     ICM_Object_Prot2_B.OBJ_Angle_Left_2 - 34
 *     ICM_Object_Prot2_B.OBJ_Angle_Left_V_2 - 35
 *     ICM_Object_Prot2_B.OBJ_Angle_Left_STD_2 - 36
 *     ICM_Object_Prot2_B.OBJ_Angle_Left_STD_V_2 - 37
 *     ICM_Object_Prot2_B.OBJ_Angle_Side_2 - 38
 *     ICM_Object_Prot2_B.OBJ_Angle_Side_V_2 - 39
 *     ICM_Object_Prot2_B.OBJ_Angle_Side_STD_2 - 40
 *     ICM_Object_Prot2_B.OBJ_Angle_Side_STD_V_2 - 41
 *     ICM_Object_Prot2_B.OBJ_Angle_Mid_V_2 - 42
 *     ICM_Object_Prot2_B.OBJ_Angle_Mid_2 - 43
 *     ICM_Object_Prot2_B.OBJ_Angle_Mid_STD_2 - 44
 *     ICM_Object_Prot2_B.OBJ_Angle_Mid_STD_V_2 - 45
 *     ICM_Object_Prot2_B.OBJ_Angle_Bottom_V_2 - 46
 *     ICM_Object_Prot2_B.OBJ_Angle_Bottom_2 - 47
 *     ICM_Object_Prot2_B.OBJ_Angle_Bottom_STD_2 - 48
 *     ICM_Object_Prot2_B.OBJ_Angle_Bottom_STD_V_2 - 49
 *     ICM_Object_Prot2_B.OBJ_Visibility_Side_V_2 - 50
 *     ICM_Object_Prot2_B.OBJ_Visibility_Side_2 - 51
 *     ICM_Object_Prot2_B.OBJ_Is_In_Drivable_Area_2 - 52
 *     ICM_Object_Prot2_B.OBJ_Is_In_Drivable_Area_V_2 - 53
 *     ICM_Object_Prot2_B.OBJ_Is_VeryClose_2 - 54
 *     ICM_Object_Prot2_B.OBJ_Is_VeryClose_V_2 - 55
 *     ICM_Object_Prot2_B.OBJ_Buffer_2 - 56
 */

/*********
 *  ICM_Object_Prot30_A - 63
 *     ICM_Object_Prot30_A.ICM_Object_Prot30_A_Header - 1
 *     ICM_Object_Prot30_A.OBJ_CRC_30 - 2
 *     ICM_Object_Prot30_A.OBJ_ID_30 - 3
 *     ICM_Object_Prot30_A.OBJ_Existence_Probability_30 - 4
 *     ICM_Object_Prot30_A.OBJ_Fusion_Source_30 - 5
 *     ICM_Object_Prot30_A.OBJ_Triggered_SDM_30 - 6
 *     ICM_Object_Prot30_A.OBJ_Motion_Category_30 - 7
 *     ICM_Object_Prot30_A.OBJ_Moving_IN_Probability_30 - 8
 *     ICM_Object_Prot30_A.OBJ_Object_Age_30 - 9
 *     ICM_Object_Prot30_A.OBJ_Measuring_Status_30 - 10
 *     ICM_Object_Prot30_A.OBJ_Object_Class_30 - 11
 *     ICM_Object_Prot30_A.OBJ_Class_Probability_30 - 12
 *     ICM_Object_Prot30_A.OBJ_Car_Probability_30 - 13
 *     ICM_Object_Prot30_A.OBJ_Truck_Probability_30 - 14
 *     ICM_Object_Prot30_A.OBJ_Bike_Probability_30 - 15
 *     ICM_Object_Prot30_A.OBJ_Camera_Source_30 - 16
 *     ICM_Object_Prot30_A.OBJ_Motion_Status_30 - 17
 *     ICM_Object_Prot30_A.OBJ_Motion_Orientation_30 - 18
 *     ICM_Object_Prot30_A.OBJ_Has_Cut_Lane_30 - 19
 *     ICM_Object_Prot30_A.OBJ_Has_Cut_Path_30 - 20
 *     ICM_Object_Prot30_A.OBJ_Brake_Light_30 - 21
 *     ICM_Object_Prot30_A.OBJ_Turn_Indicator_Right_30 - 22
 *     ICM_Object_Prot30_A.OBJ_Turn_Indicator_Left_30 - 23
 *     ICM_Object_Prot30_A.OBJ_Light_Indicator_Validity_30 - 24
 *     ICM_Object_Prot30_A.OBJ_Right_Out_Of_Image_30 - 25
 *     ICM_Object_Prot30_A.OBJ_Left_Out_Of_Image_30 - 26
 *     ICM_Object_Prot30_A.OBJ_Right_Out_Of_Image_V_30 - 27
 *     ICM_Object_Prot30_A.OBJ_Left_Out_Of_Image_V_30 - 28
 *     ICM_Object_Prot30_A.OBJ_Top_Out_Of_Image_30 - 29
 *     ICM_Object_Prot30_A.OBJ_Bottom_Out_Of_Image_30 - 30
 *     ICM_Object_Prot30_A.OBJ_Top_Out_Of_Image_V_30 - 31
 *     ICM_Object_Prot30_A.OBJ_Bottom_Out_Of_Image_V_30 - 32
 *     ICM_Object_Prot30_A.OBJ_Lane_Assignment_30 - 33
 *     ICM_Object_Prot30_A.OBJ_Lane_Assignment_V_30 - 34
 *     ICM_Object_Prot30_A.OBJ_Age_Seconds_30 - 35
 *     ICM_Object_Prot30_A.OBJ_Age_Seconds_V_30 - 36
 *     ICM_Object_Prot30_A.OBJ_Width_30 - 37
 *     ICM_Object_Prot30_A.OBJ_Width_V_30 - 38
 *     ICM_Object_Prot30_A.OBJ_Width_STD_30 - 39
 *     ICM_Object_Prot30_A.OBJ_Width_STD_V_30 - 40
 *     ICM_Object_Prot30_A.OBJ_Length_30 - 41
 *     ICM_Object_Prot30_A.OBJ_Length_V_30 - 42
 *     ICM_Object_Prot30_A.OBJ_Length_STD_30 - 43
 *     ICM_Object_Prot30_A.OBJ_Length_STD_V_30 - 44
 *     ICM_Object_Prot30_A.OBJ_Height_30 - 45
 *     ICM_Object_Prot30_A.OBJ_Height_V_30 - 46
 *     ICM_Object_Prot30_A.OBJ_Height_STD_30 - 47
 *     ICM_Object_Prot30_A.OBJ_Height_STD_V_30 - 48
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Velocity_30 - 49
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Velocity_V_30 - 50
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Velocity_STD_30 - 51
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Vel_STD_V_30 - 52
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Velocity_30 - 53
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Velocity_V_30 - 54
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Velocity_STD_30 - 55
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Vel_STD_V_30 - 56
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Acc_30 - 57
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Acc_V_30 - 58
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Acc_STD_30 - 59
 *     ICM_Object_Prot30_A.OBJ_Abs_Long_Acc_STD_V_30 - 60
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Acc_30 - 61
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Acc_V_30 - 62
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Acc_STD_30 - 63
 *     ICM_Object_Prot30_A.OBJ_Abs_Lat_Acc_STD_V_30 - 64
 *     ICM_Object_Prot30_A.OBJ_Abs_Acceleration_30 - 65
 *     ICM_Object_Prot30_A.OBJ_Abs_Acceleration_V_30 - 66
 *     ICM_Object_Prot30_A.OBJ_Abs_Acc_STD_30 - 67
 *     ICM_Object_Prot30_A.OBJ_Abs_Acc_STD_V_30 - 68
 *     ICM_Object_Prot30_A.OBJ_Inv_TTC_30 - 69
 *     ICM_Object_Prot30_A.OBJ_Inv_TTC_V_30 - 70
 *     ICM_Object_Prot30_A.OBJ_Inv_TTC_STD_30 - 71
 *     ICM_Object_Prot30_A.OBJ_Inv_TTC_STD_V_30 - 72
 *     ICM_Object_Prot30_A.OBJ_Relative_Long_Acc_30 - 73
 *     ICM_Object_Prot30_A.OBJ_Relative_Long_Acc_V_30 - 74
 *     ICM_Object_Prot30_A.OBJ_Relative_Long_Acc_STD_30 - 75
 *     ICM_Object_Prot30_A.OBJ_Rel_Long_Acc_STD_V_30 - 76
 */

/*********
 *  ICM_Object_Prot30_B - 64
 *     ICM_Object_Prot30_B.ICM_Object_Prot30_B_Header - 1
 *     ICM_Object_Prot30_B.OBJ_Relative_Long_Velocity_30 - 2
 *     ICM_Object_Prot30_B.OBJ_Relative_Long_Velocity_V_30 - 3
 *     ICM_Object_Prot30_B.OBJ_Relative_Long_Vel_STD_30 - 4
 *     ICM_Object_Prot30_B.OBJ_Rel_Long_Vel_STD_V_30 - 5
 *     ICM_Object_Prot30_B.OBJ_Relative_Lat_Velocity_30 - 6
 *     ICM_Object_Prot30_B.OBJ_Relative_Lat_Velocity_V_30 - 7
 *     ICM_Object_Prot30_B.OBJ_Relative_Lat_Velocity_STD_30 - 8
 *     ICM_Object_Prot30_B.OBJ_Rel_Lat_Vel_STD_V_30 - 9
 *     ICM_Object_Prot30_B.OBJ_Long_Distance_30 - 10
 *     ICM_Object_Prot30_B.OBJ_Long_Distance_V_30 - 11
 *     ICM_Object_Prot30_B.OBJ_Long_Distance_STD_30 - 12
 *     ICM_Object_Prot30_B.OBJ_Long_Distance_STD_V_30 - 13
 *     ICM_Object_Prot30_B.OBJ_Lat_Distance_30 - 14
 *     ICM_Object_Prot30_B.OBJ_Lat_Distance_V_30 - 15
 *     ICM_Object_Prot30_B.OBJ_Lat_Distance_STD_30 - 16
 *     ICM_Object_Prot30_B.OBJ_Lat_Distance_STD_V_30 - 17
 *     ICM_Object_Prot30_B.OBJ_Absolute_Speed_30 - 18
 *     ICM_Object_Prot30_B.OBJ_Absolute_Speed_V_30 - 19
 *     ICM_Object_Prot30_B.OBJ_Absolute_Speed_STD_30 - 20
 *     ICM_Object_Prot30_B.OBJ_Absolute_Speed_STD_V_30 - 21
 *     ICM_Object_Prot30_B.OBJ_Heading_30 - 22
 *     ICM_Object_Prot30_B.OBJ_Heading_V_30 - 23
 *     ICM_Object_Prot30_B.OBJ_Heading_STD_30 - 24
 *     ICM_Object_Prot30_B.OBJ_Heading_STD_V_30 - 25
 *     ICM_Object_Prot30_B.OBJ_Angle_Rate_STD_30 - 26
 *     ICM_Object_Prot30_B.OBJ_Angle_Rate_STD_V_30 - 27
 *     ICM_Object_Prot30_B.OBJ_Angle_Rate_30 - 28
 *     ICM_Object_Prot30_B.OBJ_Angle_Rate_V_30 - 29
 *     ICM_Object_Prot30_B.OBJ_Angle_Right_30 - 30
 *     ICM_Object_Prot30_B.OBJ_Angle_Right_V_30 - 31
 *     ICM_Object_Prot30_B.OBJ_Angle_Right_STD_30 - 32
 *     ICM_Object_Prot30_B.OBJ_Angle_Right_STD_V_30 - 33
 *     ICM_Object_Prot30_B.OBJ_Angle_Left_30 - 34
 *     ICM_Object_Prot30_B.OBJ_Angle_Left_V_30 - 35
 *     ICM_Object_Prot30_B.OBJ_Angle_Left_STD_30 - 36
 *     ICM_Object_Prot30_B.OBJ_Angle_Left_STD_V_30 - 37
 *     ICM_Object_Prot30_B.OBJ_Angle_Side_30 - 38
 *     ICM_Object_Prot30_B.OBJ_Angle_Side_V_30 - 39
 *     ICM_Object_Prot30_B.OBJ_Angle_Side_STD_30 - 40
 *     ICM_Object_Prot30_B.OBJ_Angle_Side_STD_V_30 - 41
 *     ICM_Object_Prot30_B.OBJ_Angle_Mid_V_30 - 42
 *     ICM_Object_Prot30_B.OBJ_Angle_Mid_30 - 43
 *     ICM_Object_Prot30_B.OBJ_Angle_Mid_STD_30 - 44
 *     ICM_Object_Prot30_B.OBJ_Angle_Mid_STD_V_30 - 45
 *     ICM_Object_Prot30_B.OBJ_Angle_Bottom_V_30 - 46
 *     ICM_Object_Prot30_B.OBJ_Angle_Bottom_30 - 47
 *     ICM_Object_Prot30_B.OBJ_Angle_Bottom_STD_30 - 48
 *     ICM_Object_Prot30_B.OBJ_Angle_Bottom_STD_V_30 - 49
 *     ICM_Object_Prot30_B.OBJ_Visibility_Side_V_30 - 50
 *     ICM_Object_Prot30_B.OBJ_Visibility_Side_30 - 51
 *     ICM_Object_Prot30_B.OBJ_Is_In_Drivable_Area_30 - 52
 *     ICM_Object_Prot30_B.OBJ_Is_In_Drivable_Area_V_30 - 53
 *     ICM_Object_Prot30_B.OBJ_Is_VeryClose_30 - 54
 *     ICM_Object_Prot30_B.OBJ_Is_VeryClose_V_30 - 55
 *     ICM_Object_Prot30_B.OBJ_Buffer_30 - 56
 */

/*********
 *  ICM_Object_Prot31_A - 65
 *     ICM_Object_Prot31_A.ICM_Object_Prot31_A_Header - 1
 *     ICM_Object_Prot31_A.OBJ_CRC_31 - 2
 *     ICM_Object_Prot31_A.OBJ_ID_31 - 3
 *     ICM_Object_Prot31_A.OBJ_Existence_Probability_31 - 4
 *     ICM_Object_Prot31_A.OBJ_Fusion_Source_31 - 5
 *     ICM_Object_Prot31_A.OBJ_Triggered_SDM_31 - 6
 *     ICM_Object_Prot31_A.OBJ_Motion_Category_31 - 7
 *     ICM_Object_Prot31_A.OBJ_Moving_IN_Probability_31 - 8
 *     ICM_Object_Prot31_A.OBJ_Object_Age_31 - 9
 *     ICM_Object_Prot31_A.OBJ_Measuring_Status_31 - 10
 *     ICM_Object_Prot31_A.OBJ_Object_Class_31 - 11
 *     ICM_Object_Prot31_A.OBJ_Class_Probability_31 - 12
 *     ICM_Object_Prot31_A.OBJ_Car_Probability_31 - 13
 *     ICM_Object_Prot31_A.OBJ_Truck_Probability_31 - 14
 *     ICM_Object_Prot31_A.OBJ_Bike_Probability_31 - 15
 *     ICM_Object_Prot31_A.OBJ_Camera_Source_31 - 16
 *     ICM_Object_Prot31_A.OBJ_Motion_Status_31 - 17
 *     ICM_Object_Prot31_A.OBJ_Motion_Orientation_31 - 18
 *     ICM_Object_Prot31_A.OBJ_Has_Cut_Lane_31 - 19
 *     ICM_Object_Prot31_A.OBJ_Has_Cut_Path_31 - 20
 *     ICM_Object_Prot31_A.OBJ_Brake_Light_31 - 21
 *     ICM_Object_Prot31_A.OBJ_Turn_Indicator_Right_31 - 22
 *     ICM_Object_Prot31_A.OBJ_Turn_Indicator_Left_31 - 23
 *     ICM_Object_Prot31_A.OBJ_Light_Indicator_Validity_31 - 24
 *     ICM_Object_Prot31_A.OBJ_Right_Out_Of_Image_31 - 25
 *     ICM_Object_Prot31_A.OBJ_Left_Out_Of_Image_31 - 26
 *     ICM_Object_Prot31_A.OBJ_Right_Out_Of_Image_V_31 - 27
 *     ICM_Object_Prot31_A.OBJ_Left_Out_Of_Image_V_31 - 28
 *     ICM_Object_Prot31_A.OBJ_Top_Out_Of_Image_31 - 29
 *     ICM_Object_Prot31_A.OBJ_Bottom_Out_Of_Image_31 - 30
 *     ICM_Object_Prot31_A.OBJ_Bottom_Out_Of_Image_V_31 - 31
 *     ICM_Object_Prot31_A.OBJ_Top_Out_Of_Image_V_31 - 32
 *     ICM_Object_Prot31_A.OBJ_Lane_Assignment_31 - 33
 *     ICM_Object_Prot31_A.OBJ_Lane_Assignment_V_31 - 34
 *     ICM_Object_Prot31_A.OBJ_Age_Seconds_31 - 35
 *     ICM_Object_Prot31_A.OBJ_Age_Seconds_V_31 - 36
 *     ICM_Object_Prot31_A.OBJ_Width_31 - 37
 *     ICM_Object_Prot31_A.OBJ_Width_V_31 - 38
 *     ICM_Object_Prot31_A.OBJ_Width_STD_31 - 39
 *     ICM_Object_Prot31_A.OBJ_Width_STD_V_31 - 40
 *     ICM_Object_Prot31_A.OBJ_Length_31 - 41
 *     ICM_Object_Prot31_A.OBJ_Length_V_31 - 42
 *     ICM_Object_Prot31_A.OBJ_Length_STD_31 - 43
 *     ICM_Object_Prot31_A.OBJ_Length_STD_V_31 - 44
 *     ICM_Object_Prot31_A.OBJ_Height_31 - 45
 *     ICM_Object_Prot31_A.OBJ_Height_V_31 - 46
 *     ICM_Object_Prot31_A.OBJ_Height_STD_31 - 47
 *     ICM_Object_Prot31_A.OBJ_Height_STD_V_31 - 48
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Velocity_31 - 49
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Velocity_V_31 - 50
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Velocity_STD_31 - 51
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Vel_STD_V_31 - 52
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Velocity_31 - 53
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Velocity_V_31 - 54
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Velocity_STD_31 - 55
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Vel_STD_V_31 - 56
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Acc_31 - 57
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Acc_V_31 - 58
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Acc_STD_31 - 59
 *     ICM_Object_Prot31_A.OBJ_Abs_Long_Acc_STD_V_31 - 60
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Acc_31 - 61
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Acc_V_31 - 62
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Acc_STD_31 - 63
 *     ICM_Object_Prot31_A.OBJ_Abs_Lat_Acc_STD_V_31 - 64
 *     ICM_Object_Prot31_A.OBJ_Abs_Acceleration_31 - 65
 *     ICM_Object_Prot31_A.OBJ_Abs_Acceleration_V_31 - 66
 *     ICM_Object_Prot31_A.OBJ_Abs_Acc_STD_31 - 67
 *     ICM_Object_Prot31_A.OBJ_Abs_Acc_STD_V_31 - 68
 *     ICM_Object_Prot31_A.OBJ_Inv_TTC_31 - 69
 *     ICM_Object_Prot31_A.OBJ_Inv_TTC_V_31 - 70
 *     ICM_Object_Prot31_A.OBJ_Inv_TTC_STD_31 - 71
 *     ICM_Object_Prot31_A.OBJ_Inv_TTC_STD_V_31 - 72
 *     ICM_Object_Prot31_A.OBJ_Relative_Long_Acc_31 - 73
 *     ICM_Object_Prot31_A.OBJ_Relative_Long_Acc_V_31 - 74
 *     ICM_Object_Prot31_A.OBJ_Relative_Long_Acc_STD_31 - 75
 *     ICM_Object_Prot31_A.OBJ_Rel_Long_Acc_STD_V_31 - 76
 */

/*********
 *  ICM_Object_Prot31_B - 66
 *     ICM_Object_Prot31_B.ICM_Object_Prot31_B_Header - 1
 *     ICM_Object_Prot31_B.OBJ_Relative_Long_Velocity_31 - 2
 *     ICM_Object_Prot31_B.OBJ_Relative_Long_Velocity_V_31 - 3
 *     ICM_Object_Prot31_B.OBJ_Relative_Long_Vel_STD_31 - 4
 *     ICM_Object_Prot31_B.OBJ_Rel_Long_Vel_STD_V_31 - 5
 *     ICM_Object_Prot31_B.OBJ_Relative_Lat_Velocity_31 - 6
 *     ICM_Object_Prot31_B.OBJ_Relative_Lat_Velocity_V_31 - 7
 *     ICM_Object_Prot31_B.OBJ_Relative_Lat_Velocity_STD_31 - 8
 *     ICM_Object_Prot31_B.OBJ_Rel_Lat_Vel_STD_V_31 - 9
 *     ICM_Object_Prot31_B.OBJ_Long_Distance_31 - 10
 *     ICM_Object_Prot31_B.OBJ_Long_Distance_V_31 - 11
 *     ICM_Object_Prot31_B.OBJ_Long_Distance_STD_31 - 12
 *     ICM_Object_Prot31_B.OBJ_Long_Distance_STD_V_31 - 13
 *     ICM_Object_Prot31_B.OBJ_Lat_Distance_31 - 14
 *     ICM_Object_Prot31_B.OBJ_Lat_Distance_V_31 - 15
 *     ICM_Object_Prot31_B.OBJ_Lat_Distance_STD_31 - 16
 *     ICM_Object_Prot31_B.OBJ_Lat_Distance_STD_V_31 - 17
 *     ICM_Object_Prot31_B.OBJ_Absolute_Speed_31 - 18
 *     ICM_Object_Prot31_B.OBJ_Absolute_Speed_V_31 - 19
 *     ICM_Object_Prot31_B.OBJ_Absolute_Speed_STD_31 - 20
 *     ICM_Object_Prot31_B.OBJ_Absolute_Speed_STD_V_31 - 21
 *     ICM_Object_Prot31_B.OBJ_Heading_31 - 22
 *     ICM_Object_Prot31_B.OBJ_Heading_V_31 - 23
 *     ICM_Object_Prot31_B.OBJ_Heading_STD_31 - 24
 *     ICM_Object_Prot31_B.OBJ_Heading_STD_V_31 - 25
 *     ICM_Object_Prot31_B.OBJ_Angle_Rate_STD_31 - 26
 *     ICM_Object_Prot31_B.OBJ_Angle_Rate_STD_V_31 - 27
 *     ICM_Object_Prot31_B.OBJ_Angle_Rate_31 - 28
 *     ICM_Object_Prot31_B.OBJ_Angle_Rate_V_31 - 29
 *     ICM_Object_Prot31_B.OBJ_Angle_Right_31 - 30
 *     ICM_Object_Prot31_B.OBJ_Angle_Right_V_31 - 31
 *     ICM_Object_Prot31_B.OBJ_Angle_Right_STD_31 - 32
 *     ICM_Object_Prot31_B.OBJ_Angle_Right_STD_V_31 - 33
 *     ICM_Object_Prot31_B.OBJ_Angle_Left_31 - 34
 *     ICM_Object_Prot31_B.OBJ_Angle_Left_V_31 - 35
 *     ICM_Object_Prot31_B.OBJ_Angle_Left_STD_31 - 36
 *     ICM_Object_Prot31_B.OBJ_Angle_Left_STD_V_31 - 37
 *     ICM_Object_Prot31_B.OBJ_Angle_Side_31 - 38
 *     ICM_Object_Prot31_B.OBJ_Angle_Side_V_31 - 39
 *     ICM_Object_Prot31_B.OBJ_Angle_Side_STD_31 - 40
 *     ICM_Object_Prot31_B.OBJ_Angle_Side_STD_V_31 - 41
 *     ICM_Object_Prot31_B.OBJ_Angle_Mid_V_31 - 42
 *     ICM_Object_Prot31_B.OBJ_Angle_Mid_31 - 43
 *     ICM_Object_Prot31_B.OBJ_Angle_Mid_STD_31 - 44
 *     ICM_Object_Prot31_B.OBJ_Angle_Mid_STD_V_31 - 45
 *     ICM_Object_Prot31_B.OBJ_Angle_Bottom_V_31 - 46
 *     ICM_Object_Prot31_B.OBJ_Angle_Bottom_31 - 47
 *     ICM_Object_Prot31_B.OBJ_Angle_Bottom_STD_31 - 48
 *     ICM_Object_Prot31_B.OBJ_Angle_Bottom_STD_V_31 - 49
 *     ICM_Object_Prot31_B.OBJ_Visibility_Side_V_31 - 50
 *     ICM_Object_Prot31_B.OBJ_Visibility_Side_31 - 51
 *     ICM_Object_Prot31_B.OBJ_Is_In_Drivable_Area_31 - 52
 *     ICM_Object_Prot31_B.OBJ_Is_In_Drivable_Area_V_31 - 53
 *     ICM_Object_Prot31_B.OBJ_Is_VeryClose_31 - 54
 *     ICM_Object_Prot31_B.OBJ_Is_VeryClose_V_31 - 55
 *     ICM_Object_Prot31_B.OBJ_Buffer_31 - 56
 */

/*********
 *  ICM_Object_Prot32_A - 67
 *     ICM_Object_Prot32_A.ICM_Object_Prot32_A_Header - 1
 *     ICM_Object_Prot32_A.OBJ_CRC_32 - 2
 *     ICM_Object_Prot32_A.OBJ_ID_32 - 3
 *     ICM_Object_Prot32_A.OBJ_Existence_Probability_32 - 4
 *     ICM_Object_Prot32_A.OBJ_Fusion_Source_32 - 5
 *     ICM_Object_Prot32_A.OBJ_Triggered_SDM_32 - 6
 *     ICM_Object_Prot32_A.OBJ_Motion_Category_32 - 7
 *     ICM_Object_Prot32_A.OBJ_Moving_IN_Probability_32 - 8
 *     ICM_Object_Prot32_A.OBJ_Object_Age_32 - 9
 *     ICM_Object_Prot32_A.OBJ_Measuring_Status_32 - 10
 *     ICM_Object_Prot32_A.OBJ_Object_Class_32 - 11
 *     ICM_Object_Prot32_A.OBJ_Class_Probability_32 - 12
 *     ICM_Object_Prot32_A.OBJ_Car_Probability_32 - 13
 *     ICM_Object_Prot32_A.OBJ_Truck_Probability_32 - 14
 *     ICM_Object_Prot32_A.OBJ_Bike_Probability_32 - 15
 *     ICM_Object_Prot32_A.OBJ_Camera_Source_32 - 16
 *     ICM_Object_Prot32_A.OBJ_Motion_Status_32 - 17
 *     ICM_Object_Prot32_A.OBJ_Motion_Orientation_32 - 18
 *     ICM_Object_Prot32_A.OBJ_Has_Cut_Lane_32 - 19
 *     ICM_Object_Prot32_A.OBJ_Has_Cut_Path_32 - 20
 *     ICM_Object_Prot32_A.OBJ_Brake_Light_32 - 21
 *     ICM_Object_Prot32_A.OBJ_Turn_Indicator_Right_32 - 22
 *     ICM_Object_Prot32_A.OBJ_Turn_Indicator_Left_32 - 23
 *     ICM_Object_Prot32_A.OBJ_Light_Indicator_Validity_32 - 24
 *     ICM_Object_Prot32_A.OBJ_Right_Out_Of_Image_32 - 25
 *     ICM_Object_Prot32_A.OBJ_Left_Out_Of_Image_32 - 26
 *     ICM_Object_Prot32_A.OBJ_Right_Out_Of_Image_V_32 - 27
 *     ICM_Object_Prot32_A.OBJ_Left_Out_Of_Image_V_32 - 28
 *     ICM_Object_Prot32_A.OBJ_Top_Out_Of_Image_32 - 29
 *     ICM_Object_Prot32_A.OBJ_Bottom_Out_Of_Image_32 - 30
 *     ICM_Object_Prot32_A.OBJ_Top_Out_Of_Image_V_32 - 31
 *     ICM_Object_Prot32_A.OBJ_Bottom_Out_Of_Image_V_32 - 32
 *     ICM_Object_Prot32_A.OBJ_Lane_Assignment_32 - 33
 *     ICM_Object_Prot32_A.OBJ_Lane_Assignment_V_32 - 34
 *     ICM_Object_Prot32_A.OBJ_Age_Seconds_32 - 35
 *     ICM_Object_Prot32_A.OBJ_Age_Seconds_V_32 - 36
 *     ICM_Object_Prot32_A.OBJ_Width_32 - 37
 *     ICM_Object_Prot32_A.OBJ_Width_V_32 - 38
 *     ICM_Object_Prot32_A.OBJ_Width_STD_32 - 39
 *     ICM_Object_Prot32_A.OBJ_Width_STD_V_32 - 40
 *     ICM_Object_Prot32_A.OBJ_Length_32 - 41
 *     ICM_Object_Prot32_A.OBJ_Length_V_32 - 42
 *     ICM_Object_Prot32_A.OBJ_Length_STD_32 - 43
 *     ICM_Object_Prot32_A.OBJ_Length_STD_V_32 - 44
 *     ICM_Object_Prot32_A.OBJ_Height_32 - 45
 *     ICM_Object_Prot32_A.OBJ_Height_V_32 - 46
 *     ICM_Object_Prot32_A.OBJ_Height_STD_32 - 47
 *     ICM_Object_Prot32_A.OBJ_Height_STD_V_32 - 48
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Velocity_32 - 49
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Velocity_V_32 - 50
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Velocity_STD_32 - 51
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Vel_STD_V_32 - 52
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Velocity_32 - 53
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Velocity_V_32 - 54
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Velocity_STD_32 - 55
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Vel_STD_V_32 - 56
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Acc_32 - 57
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Acc_V_32 - 58
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Acc_STD_32 - 59
 *     ICM_Object_Prot32_A.OBJ_Abs_Long_Acc_STD_V_32 - 60
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Acc_32 - 61
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Acc_V_32 - 62
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Acc_STD_32 - 63
 *     ICM_Object_Prot32_A.OBJ_Abs_Lat_Acc_STD_V_32 - 64
 *     ICM_Object_Prot32_A.OBJ_Abs_Acceleration_32 - 65
 *     ICM_Object_Prot32_A.OBJ_Abs_Acceleration_V_32 - 66
 *     ICM_Object_Prot32_A.OBJ_Abs_Acc_STD_32 - 67
 *     ICM_Object_Prot32_A.OBJ_Abs_Acc_STD_V_32 - 68
 *     ICM_Object_Prot32_A.OBJ_Inv_TTC_32 - 69
 *     ICM_Object_Prot32_A.OBJ_Inv_TTC_V_32 - 70
 *     ICM_Object_Prot32_A.OBJ_Inv_TTC_STD_32 - 71
 *     ICM_Object_Prot32_A.OBJ_Inv_TTC_STD_V_32 - 72
 *     ICM_Object_Prot32_A.OBJ_Relative_Long_Acc_32 - 73
 *     ICM_Object_Prot32_A.OBJ_Relative_Long_Acc_V_32 - 74
 *     ICM_Object_Prot32_A.OBJ_Relative_Long_Acc_STD_32 - 75
 *     ICM_Object_Prot32_A.OBJ_Rel_Long_Acc_STD_V_32 - 76
 */

/*********
 *  ICM_Object_Prot32_B - 68
 *     ICM_Object_Prot32_B.ICM_Object_Prot32_B_Header - 1
 *     ICM_Object_Prot32_B.OBJ_Relative_Long_Velocity_32 - 2
 *     ICM_Object_Prot32_B.OBJ_Relative_Long_Velocity_V_32 - 3
 *     ICM_Object_Prot32_B.OBJ_Relative_Long_Vel_STD_32 - 4
 *     ICM_Object_Prot32_B.OBJ_Rel_Long_Vel_STD_V_32 - 5
 *     ICM_Object_Prot32_B.OBJ_Relative_Lat_Velocity_32 - 6
 *     ICM_Object_Prot32_B.OBJ_Relative_Lat_Velocity_V_32 - 7
 *     ICM_Object_Prot32_B.OBJ_Relative_Lat_Velocity_STD_32 - 8
 *     ICM_Object_Prot32_B.OBJ_Rel_Lat_Vel_STD_V_32 - 9
 *     ICM_Object_Prot32_B.OBJ_Long_Distance_32 - 10
 *     ICM_Object_Prot32_B.OBJ_Long_Distance_V_32 - 11
 *     ICM_Object_Prot32_B.OBJ_Long_Distance_STD_32 - 12
 *     ICM_Object_Prot32_B.OBJ_Long_Distance_STD_V_32 - 13
 *     ICM_Object_Prot32_B.OBJ_Lat_Distance_32 - 14
 *     ICM_Object_Prot32_B.OBJ_Lat_Distance_V_32 - 15
 *     ICM_Object_Prot32_B.OBJ_Lat_Distance_STD_32 - 16
 *     ICM_Object_Prot32_B.OBJ_Lat_Distance_STD_V_32 - 17
 *     ICM_Object_Prot32_B.OBJ_Absolute_Speed_32 - 18
 *     ICM_Object_Prot32_B.OBJ_Absolute_Speed_V_32 - 19
 *     ICM_Object_Prot32_B.OBJ_Absolute_Speed_STD_32 - 20
 *     ICM_Object_Prot32_B.OBJ_Absolute_Speed_STD_V_32 - 21
 *     ICM_Object_Prot32_B.OBJ_Heading_32 - 22
 *     ICM_Object_Prot32_B.OBJ_Heading_V_32 - 23
 *     ICM_Object_Prot32_B.OBJ_Heading_STD_32 - 24
 *     ICM_Object_Prot32_B.OBJ_Heading_STD_V_32 - 25
 *     ICM_Object_Prot32_B.OBJ_Angle_Rate_STD_32 - 26
 *     ICM_Object_Prot32_B.OBJ_Angle_Rate_STD_V_32 - 27
 *     ICM_Object_Prot32_B.OBJ_Angle_Rate_32 - 28
 *     ICM_Object_Prot32_B.OBJ_Angle_Rate_V_32 - 29
 *     ICM_Object_Prot32_B.OBJ_Angle_Right_32 - 30
 *     ICM_Object_Prot32_B.OBJ_Angle_Right_V_32 - 31
 *     ICM_Object_Prot32_B.OBJ_Angle_Right_STD_32 - 32
 *     ICM_Object_Prot32_B.OBJ_Angle_Right_STD_V_32 - 33
 *     ICM_Object_Prot32_B.OBJ_Angle_Left_32 - 34
 *     ICM_Object_Prot32_B.OBJ_Angle_Left_V_32 - 35
 *     ICM_Object_Prot32_B.OBJ_Angle_Left_STD_32 - 36
 *     ICM_Object_Prot32_B.OBJ_Angle_Left_STD_V_32 - 37
 *     ICM_Object_Prot32_B.OBJ_Angle_Side_32 - 38
 *     ICM_Object_Prot32_B.OBJ_Angle_Side_V_32 - 39
 *     ICM_Object_Prot32_B.OBJ_Angle_Side_STD_32 - 40
 *     ICM_Object_Prot32_B.OBJ_Angle_Side_STD_V_32 - 41
 *     ICM_Object_Prot32_B.OBJ_Angle_Mid_V_32 - 42
 *     ICM_Object_Prot32_B.OBJ_Angle_Mid_32 - 43
 *     ICM_Object_Prot32_B.OBJ_Angle_Mid_STD_32 - 44
 *     ICM_Object_Prot32_B.OBJ_Angle_Mid_STD_V_32 - 45
 *     ICM_Object_Prot32_B.OBJ_Angle_Bottom_V_32 - 46
 *     ICM_Object_Prot32_B.OBJ_Angle_Bottom_32 - 47
 *     ICM_Object_Prot32_B.OBJ_Angle_Bottom_STD_32 - 48
 *     ICM_Object_Prot32_B.OBJ_Angle_Bottom_STD_V_32 - 49
 *     ICM_Object_Prot32_B.OBJ_Visibility_Side_V_32 - 50
 *     ICM_Object_Prot32_B.OBJ_Visibility_Side_32 - 51
 *     ICM_Object_Prot32_B.OBJ_Is_In_Drivable_Area_32 - 52
 *     ICM_Object_Prot32_B.OBJ_Is_In_Drivable_Area_V_32 - 53
 *     ICM_Object_Prot32_B.OBJ_Is_VeryClose_32 - 54
 *     ICM_Object_Prot32_B.OBJ_Is_VeryClose_V_32 - 55
 *     ICM_Object_Prot32_B.OBJ_Buffer_32 - 56
 */

/*********
 *  ICM_Object_Prot33_A - 69
 *     ICM_Object_Prot33_A.ICM_Object_Prot33_A_Header - 1
 *     ICM_Object_Prot33_A.OBJ_CRC_33 - 2
 *     ICM_Object_Prot33_A.OBJ_ID_33 - 3
 *     ICM_Object_Prot33_A.OBJ_Existence_Probability_33 - 4
 *     ICM_Object_Prot33_A.OBJ_Fusion_Source_33 - 5
 *     ICM_Object_Prot33_A.OBJ_Triggered_SDM_33 - 6
 *     ICM_Object_Prot33_A.OBJ_Motion_Category_33 - 7
 *     ICM_Object_Prot33_A.OBJ_Moving_IN_Probability_33 - 8
 *     ICM_Object_Prot33_A.OBJ_Object_Age_33 - 9
 *     ICM_Object_Prot33_A.OBJ_Measuring_Status_33 - 10
 *     ICM_Object_Prot33_A.OBJ_Object_Class_33 - 11
 *     ICM_Object_Prot33_A.OBJ_Class_Probability_33 - 12
 *     ICM_Object_Prot33_A.OBJ_Car_Probability_33 - 13
 *     ICM_Object_Prot33_A.OBJ_Truck_Probability_33 - 14
 *     ICM_Object_Prot33_A.OBJ_Bike_Probability_33 - 15
 *     ICM_Object_Prot33_A.OBJ_Camera_Source_33 - 16
 *     ICM_Object_Prot33_A.OBJ_Motion_Status_33 - 17
 *     ICM_Object_Prot33_A.OBJ_Motion_Orientation_33 - 18
 *     ICM_Object_Prot33_A.OBJ_Has_Cut_Lane_33 - 19
 *     ICM_Object_Prot33_A.OBJ_Has_Cut_Path_33 - 20
 *     ICM_Object_Prot33_A.OBJ_Brake_Light_33 - 21
 *     ICM_Object_Prot33_A.OBJ_Turn_Indicator_Right_33 - 22
 *     ICM_Object_Prot33_A.OBJ_Turn_Indicator_Left_33 - 23
 *     ICM_Object_Prot33_A.OBJ_Light_Indicator_Validity_33 - 24
 *     ICM_Object_Prot33_A.OBJ_Right_Out_Of_Image_33 - 25
 *     ICM_Object_Prot33_A.OBJ_Left_Out_Of_Image_33 - 26
 *     ICM_Object_Prot33_A.OBJ_Right_Out_Of_Image_V_33 - 27
 *     ICM_Object_Prot33_A.OBJ_Left_Out_Of_Image_V_33 - 28
 *     ICM_Object_Prot33_A.OBJ_Top_Out_Of_Image_33 - 29
 *     ICM_Object_Prot33_A.OBJ_Bottom_Out_Of_Image_33 - 30
 *     ICM_Object_Prot33_A.OBJ_Top_Out_Of_Image_V_33 - 31
 *     ICM_Object_Prot33_A.OBJ_Bottom_Out_Of_Image_V_33 - 32
 *     ICM_Object_Prot33_A.OBJ_Lane_Assignment_33 - 33
 *     ICM_Object_Prot33_A.OBJ_Lane_Assignment_V_33 - 34
 *     ICM_Object_Prot33_A.OBJ_Age_Seconds_33 - 35
 *     ICM_Object_Prot33_A.OBJ_Age_Seconds_V_33 - 36
 *     ICM_Object_Prot33_A.OBJ_Width_33 - 37
 *     ICM_Object_Prot33_A.OBJ_Width_V_33 - 38
 *     ICM_Object_Prot33_A.OBJ_Width_STD_33 - 39
 *     ICM_Object_Prot33_A.OBJ_Width_STD_V_33 - 40
 *     ICM_Object_Prot33_A.OBJ_Length_33 - 41
 *     ICM_Object_Prot33_A.OBJ_Length_V_33 - 42
 *     ICM_Object_Prot33_A.OBJ_Length_STD_33 - 43
 *     ICM_Object_Prot33_A.OBJ_Length_STD_V_33 - 44
 *     ICM_Object_Prot33_A.OBJ_Height_33 - 45
 *     ICM_Object_Prot33_A.OBJ_Height_V_33 - 46
 *     ICM_Object_Prot33_A.OBJ_Height_STD_33 - 47
 *     ICM_Object_Prot33_A.OBJ_Height_STD_V_33 - 48
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Velocity_33 - 49
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Velocity_V_33 - 50
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Velocity_STD_33 - 51
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Vel_STD_V_33 - 52
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Velocity_33 - 53
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Velocity_V_33 - 54
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Velocity_STD_33 - 55
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Vel_STD_V_33 - 56
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Acc_33 - 57
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Acc_V_33 - 58
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Acc_STD_33 - 59
 *     ICM_Object_Prot33_A.OBJ_Abs_Long_Acc_STD_V_33 - 60
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Acc_33 - 61
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Acc_V_33 - 62
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Acc_STD_33 - 63
 *     ICM_Object_Prot33_A.OBJ_Abs_Lat_Acc_STD_V_33 - 64
 *     ICM_Object_Prot33_A.OBJ_Abs_Acceleration_33 - 65
 *     ICM_Object_Prot33_A.OBJ_Abs_Acceleration_V_33 - 66
 *     ICM_Object_Prot33_A.OBJ_Abs_Acc_STD_33 - 67
 *     ICM_Object_Prot33_A.OBJ_Abs_Acc_STD_V_33 - 68
 *     ICM_Object_Prot33_A.OBJ_Inv_TTC_33 - 69
 *     ICM_Object_Prot33_A.OBJ_Inv_TTC_V_33 - 70
 *     ICM_Object_Prot33_A.OBJ_Inv_TTC_STD_33 - 71
 *     ICM_Object_Prot33_A.OBJ_Inv_TTC_STD_V_33 - 72
 *     ICM_Object_Prot33_A.OBJ_Relative_Long_Acc_33 - 73
 *     ICM_Object_Prot33_A.OBJ_Relative_Long_Acc_V_33 - 74
 *     ICM_Object_Prot33_A.OBJ_Relative_Long_Acc_STD_33 - 75
 *     ICM_Object_Prot33_A.OBJ_Rel_Long_Acc_STD_V_33 - 76
 */

/*********
 *  ICM_Object_Prot33_B - 70
 *     ICM_Object_Prot33_B.ICM_Object_Prot33_B_Header - 1
 *     ICM_Object_Prot33_B.OBJ_Relative_Long_Velocity_33 - 2
 *     ICM_Object_Prot33_B.OBJ_Relative_Long_Velocity_V_33 - 3
 *     ICM_Object_Prot33_B.OBJ_Relative_Long_Vel_STD_33 - 4
 *     ICM_Object_Prot33_B.OBJ_Rel_Long_Vel_STD_V_33 - 5
 *     ICM_Object_Prot33_B.OBJ_Relative_Lat_Velocity_33 - 6
 *     ICM_Object_Prot33_B.OBJ_Relative_Lat_Velocity_V_33 - 7
 *     ICM_Object_Prot33_B.OBJ_Relative_Lat_Velocity_STD_33 - 8
 *     ICM_Object_Prot33_B.OBJ_Rel_Lat_Vel_STD_V_33 - 9
 *     ICM_Object_Prot33_B.OBJ_Long_Distance_33 - 10
 *     ICM_Object_Prot33_B.OBJ_Long_Distance_V_33 - 11
 *     ICM_Object_Prot33_B.OBJ_Long_Distance_STD_33 - 12
 *     ICM_Object_Prot33_B.OBJ_Long_Distance_STD_V_33 - 13
 *     ICM_Object_Prot33_B.OBJ_Lat_Distance_33 - 14
 *     ICM_Object_Prot33_B.OBJ_Lat_Distance_V_33 - 15
 *     ICM_Object_Prot33_B.OBJ_Lat_Distance_STD_33 - 16
 *     ICM_Object_Prot33_B.OBJ_Lat_Distance_STD_V_33 - 17
 *     ICM_Object_Prot33_B.OBJ_Absolute_Speed_33 - 18
 *     ICM_Object_Prot33_B.OBJ_Absolute_Speed_V_33 - 19
 *     ICM_Object_Prot33_B.OBJ_Absolute_Speed_STD_33 - 20
 *     ICM_Object_Prot33_B.OBJ_Absolute_Speed_STD_V_33 - 21
 *     ICM_Object_Prot33_B.OBJ_Heading_33 - 22
 *     ICM_Object_Prot33_B.OBJ_Heading_V_33 - 23
 *     ICM_Object_Prot33_B.OBJ_Heading_STD_33 - 24
 *     ICM_Object_Prot33_B.OBJ_Heading_STD_V_33 - 25
 *     ICM_Object_Prot33_B.OBJ_Angle_Rate_STD_33 - 26
 *     ICM_Object_Prot33_B.OBJ_Angle_Rate_STD_V_33 - 27
 *     ICM_Object_Prot33_B.OBJ_Angle_Rate_33 - 28
 *     ICM_Object_Prot33_B.OBJ_Angle_Rate_V_33 - 29
 *     ICM_Object_Prot33_B.OBJ_Angle_Right_33 - 30
 *     ICM_Object_Prot33_B.OBJ_Angle_Right_V_33 - 31
 *     ICM_Object_Prot33_B.OBJ_Angle_Right_STD_33 - 32
 *     ICM_Object_Prot33_B.OBJ_Angle_Right_STD_V_33 - 33
 *     ICM_Object_Prot33_B.OBJ_Angle_Left_33 - 34
 *     ICM_Object_Prot33_B.OBJ_Angle_Left_V_33 - 35
 *     ICM_Object_Prot33_B.OBJ_Angle_Left_STD_33 - 36
 *     ICM_Object_Prot33_B.OBJ_Angle_Left_STD_V_33 - 37
 *     ICM_Object_Prot33_B.OBJ_Angle_Side_33 - 38
 *     ICM_Object_Prot33_B.OBJ_Angle_Side_V_33 - 39
 *     ICM_Object_Prot33_B.OBJ_Angle_Side_STD_33 - 40
 *     ICM_Object_Prot33_B.OBJ_Angle_Side_STD_V_33 - 41
 *     ICM_Object_Prot33_B.OBJ_Angle_Mid_V_33 - 42
 *     ICM_Object_Prot33_B.OBJ_Angle_Mid_33 - 43
 *     ICM_Object_Prot33_B.OBJ_Angle_Mid_STD_33 - 44
 *     ICM_Object_Prot33_B.OBJ_Angle_Mid_STD_V_33 - 45
 *     ICM_Object_Prot33_B.OBJ_Angle_Bottom_V_33 - 46
 *     ICM_Object_Prot33_B.OBJ_Angle_Bottom_33 - 47
 *     ICM_Object_Prot33_B.OBJ_Angle_Bottom_STD_33 - 48
 *     ICM_Object_Prot33_B.OBJ_Angle_Bottom_STD_V_33 - 49
 *     ICM_Object_Prot33_B.OBJ_Visibility_Side_V_33 - 50
 *     ICM_Object_Prot33_B.OBJ_Visibility_Side_33 - 51
 *     ICM_Object_Prot33_B.OBJ_Is_In_Drivable_Area_33 - 52
 *     ICM_Object_Prot33_B.OBJ_Is_In_Drivable_Area_V_33 - 53
 *     ICM_Object_Prot33_B.OBJ_Is_VeryClose_33 - 54
 *     ICM_Object_Prot33_B.OBJ_Is_VeryClose_V_33 - 55
 *     ICM_Object_Prot33_B.OBJ_Buffer_33 - 56
 */

/*********
 *  ICM_Object_Prot34_A - 71
 *     ICM_Object_Prot34_A.ICM_Object_Prot34_A_Header - 1
 *     ICM_Object_Prot34_A.OBJ_CRC_34 - 2
 *     ICM_Object_Prot34_A.OBJ_ID_34 - 3
 *     ICM_Object_Prot34_A.OBJ_Existence_Probability_34 - 4
 *     ICM_Object_Prot34_A.OBJ_Fusion_Source_34 - 5
 *     ICM_Object_Prot34_A.OBJ_Triggered_SDM_34 - 6
 *     ICM_Object_Prot34_A.OBJ_Motion_Category_34 - 7
 *     ICM_Object_Prot34_A.OBJ_Moving_IN_Probability_34 - 8
 *     ICM_Object_Prot34_A.OBJ_Object_Age_34 - 9
 *     ICM_Object_Prot34_A.OBJ_Measuring_Status_34 - 10
 *     ICM_Object_Prot34_A.OBJ_Object_Class_34 - 11
 *     ICM_Object_Prot34_A.OBJ_Class_Probability_34 - 12
 *     ICM_Object_Prot34_A.OBJ_Car_Probability_34 - 13
 *     ICM_Object_Prot34_A.OBJ_Truck_Probability_34 - 14
 *     ICM_Object_Prot34_A.OBJ_Bike_Probability_34 - 15
 *     ICM_Object_Prot34_A.OBJ_Camera_Source_34 - 16
 *     ICM_Object_Prot34_A.OBJ_Motion_Status_34 - 17
 *     ICM_Object_Prot34_A.OBJ_Motion_Orientation_34 - 18
 *     ICM_Object_Prot34_A.OBJ_Has_Cut_Lane_34 - 19
 *     ICM_Object_Prot34_A.OBJ_Has_Cut_Path_34 - 20
 *     ICM_Object_Prot34_A.OBJ_Brake_Light_34 - 21
 *     ICM_Object_Prot34_A.OBJ_Turn_Indicator_Right_34 - 22
 *     ICM_Object_Prot34_A.OBJ_Turn_Indicator_Left_34 - 23
 *     ICM_Object_Prot34_A.OBJ_Light_Indicator_Validity_34 - 24
 *     ICM_Object_Prot34_A.OBJ_Right_Out_Of_Image_34 - 25
 *     ICM_Object_Prot34_A.OBJ_Left_Out_Of_Image_34 - 26
 *     ICM_Object_Prot34_A.OBJ_Right_Out_Of_Image_V_34 - 27
 *     ICM_Object_Prot34_A.OBJ_Left_Out_Of_Image_V_34 - 28
 *     ICM_Object_Prot34_A.OBJ_Top_Out_Of_Image_34 - 29
 *     ICM_Object_Prot34_A.OBJ_Bottom_Out_Of_Image_34 - 30
 *     ICM_Object_Prot34_A.OBJ_Top_Out_Of_Image_V_34 - 31
 *     ICM_Object_Prot34_A.OBJ_Bottom_Out_Of_Image_V_34 - 32
 *     ICM_Object_Prot34_A.OBJ_Lane_Assignment_34 - 33
 *     ICM_Object_Prot34_A.OBJ_Lane_Assignment_V_34 - 34
 *     ICM_Object_Prot34_A.OBJ_Age_Seconds_34 - 35
 *     ICM_Object_Prot34_A.OBJ_Age_Seconds_V_34 - 36
 *     ICM_Object_Prot34_A.OBJ_Width_34 - 37
 *     ICM_Object_Prot34_A.OBJ_Width_V_34 - 38
 *     ICM_Object_Prot34_A.OBJ_Width_STD_34 - 39
 *     ICM_Object_Prot34_A.OBJ_Width_STD_V_34 - 40
 *     ICM_Object_Prot34_A.OBJ_Length_34 - 41
 *     ICM_Object_Prot34_A.OBJ_Length_V_34 - 42
 *     ICM_Object_Prot34_A.OBJ_Length_STD_34 - 43
 *     ICM_Object_Prot34_A.OBJ_Length_STD_V_34 - 44
 *     ICM_Object_Prot34_A.OBJ_Height_34 - 45
 *     ICM_Object_Prot34_A.OBJ_Height_V_34 - 46
 *     ICM_Object_Prot34_A.OBJ_Height_STD_34 - 47
 *     ICM_Object_Prot34_A.OBJ_Height_STD_V_34 - 48
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Velocity_34 - 49
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Velocity_V_34 - 50
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Velocity_STD_34 - 51
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Vel_STD_V_34 - 52
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Velocity_34 - 53
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Velocity_V_34 - 54
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Velocity_STD_34 - 55
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Vel_STD_V_34 - 56
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Acc_34 - 57
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Acc_V_34 - 58
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Acc_STD_34 - 59
 *     ICM_Object_Prot34_A.OBJ_Abs_Long_Acc_STD_V_34 - 60
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Acc_34 - 61
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Acc_V_34 - 62
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Acc_STD_34 - 63
 *     ICM_Object_Prot34_A.OBJ_Abs_Lat_Acc_STD_V_34 - 64
 *     ICM_Object_Prot34_A.OBJ_Abs_Acceleration_34 - 65
 *     ICM_Object_Prot34_A.OBJ_Abs_Acceleration_V_34 - 66
 *     ICM_Object_Prot34_A.OBJ_Abs_Acc_STD_34 - 67
 *     ICM_Object_Prot34_A.OBJ_Abs_Acc_STD_V_34 - 68
 *     ICM_Object_Prot34_A.OBJ_Inv_TTC_34 - 69
 *     ICM_Object_Prot34_A.OBJ_Inv_TTC_V_34 - 70
 *     ICM_Object_Prot34_A.OBJ_Inv_TTC_STD_34 - 71
 *     ICM_Object_Prot34_A.OBJ_Inv_TTC_STD_V_34 - 72
 *     ICM_Object_Prot34_A.OBJ_Relative_Long_Acc_34 - 73
 *     ICM_Object_Prot34_A.OBJ_Relative_Long_Acc_V_34 - 74
 *     ICM_Object_Prot34_A.OBJ_Relative_Long_Acc_STD_34 - 75
 *     ICM_Object_Prot34_A.OBJ_Rel_Long_Acc_STD_V_34 - 76
 */

/*********
 *  ICM_Object_Prot34_B - 72
 *     ICM_Object_Prot34_B.ICM_Object_Prot34_B_Header - 1
 *     ICM_Object_Prot34_B.OBJ_Relative_Long_Velocity_34 - 2
 *     ICM_Object_Prot34_B.OBJ_Relative_Long_Velocity_V_34 - 3
 *     ICM_Object_Prot34_B.OBJ_Relative_Long_Vel_STD_34 - 4
 *     ICM_Object_Prot34_B.OBJ_Rel_Long_Vel_STD_V_34 - 5
 *     ICM_Object_Prot34_B.OBJ_Relative_Lat_Velocity_34 - 6
 *     ICM_Object_Prot34_B.OBJ_Relative_Lat_Velocity_V_34 - 7
 *     ICM_Object_Prot34_B.OBJ_Relative_Lat_Velocity_STD_34 - 8
 *     ICM_Object_Prot34_B.OBJ_Rel_Lat_Vel_STD_V_34 - 9
 *     ICM_Object_Prot34_B.OBJ_Long_Distance_34 - 10
 *     ICM_Object_Prot34_B.OBJ_Long_Distance_V_34 - 11
 *     ICM_Object_Prot34_B.OBJ_Long_Distance_STD_34 - 12
 *     ICM_Object_Prot34_B.OBJ_Long_Distance_STD_V_34 - 13
 *     ICM_Object_Prot34_B.OBJ_Lat_Distance_34 - 14
 *     ICM_Object_Prot34_B.OBJ_Lat_Distance_V_34 - 15
 *     ICM_Object_Prot34_B.OBJ_Lat_Distance_STD_34 - 16
 *     ICM_Object_Prot34_B.OBJ_Lat_Distance_STD_V_34 - 17
 *     ICM_Object_Prot34_B.OBJ_Absolute_Speed_34 - 18
 *     ICM_Object_Prot34_B.OBJ_Absolute_Speed_V_34 - 19
 *     ICM_Object_Prot34_B.OBJ_Absolute_Speed_STD_34 - 20
 *     ICM_Object_Prot34_B.OBJ_Absolute_Speed_STD_V_34 - 21
 *     ICM_Object_Prot34_B.OBJ_Heading_34 - 22
 *     ICM_Object_Prot34_B.OBJ_Heading_V_34 - 23
 *     ICM_Object_Prot34_B.OBJ_Heading_STD_34 - 24
 *     ICM_Object_Prot34_B.OBJ_Heading_STD_V_34 - 25
 *     ICM_Object_Prot34_B.OBJ_Angle_Rate_STD_34 - 26
 *     ICM_Object_Prot34_B.OBJ_Angle_Rate_STD_V_34 - 27
 *     ICM_Object_Prot34_B.OBJ_Angle_Rate_34 - 28
 *     ICM_Object_Prot34_B.OBJ_Angle_Rate_V_34 - 29
 *     ICM_Object_Prot34_B.OBJ_Angle_Right_34 - 30
 *     ICM_Object_Prot34_B.OBJ_Angle_Right_V_34 - 31
 *     ICM_Object_Prot34_B.OBJ_Angle_Right_STD_34 - 32
 *     ICM_Object_Prot34_B.OBJ_Angle_Right_STD_V_34 - 33
 *     ICM_Object_Prot34_B.OBJ_Angle_Left_34 - 34
 *     ICM_Object_Prot34_B.OBJ_Angle_Left_V_34 - 35
 *     ICM_Object_Prot34_B.OBJ_Angle_Left_STD_34 - 36
 *     ICM_Object_Prot34_B.OBJ_Angle_Left_STD_V_34 - 37
 *     ICM_Object_Prot34_B.OBJ_Angle_Side_34 - 38
 *     ICM_Object_Prot34_B.OBJ_Angle_Side_V_34 - 39
 *     ICM_Object_Prot34_B.OBJ_Angle_Side_STD_34 - 40
 *     ICM_Object_Prot34_B.OBJ_Angle_Side_STD_V_34 - 41
 *     ICM_Object_Prot34_B.OBJ_Angle_Mid_V_34 - 42
 *     ICM_Object_Prot34_B.OBJ_Angle_Mid_34 - 43
 *     ICM_Object_Prot34_B.OBJ_Angle_Mid_STD_34 - 44
 *     ICM_Object_Prot34_B.OBJ_Angle_Mid_STD_V_34 - 45
 *     ICM_Object_Prot34_B.OBJ_Angle_Bottom_V_34 - 46
 *     ICM_Object_Prot34_B.OBJ_Angle_Bottom_34 - 47
 *     ICM_Object_Prot34_B.OBJ_Angle_Bottom_STD_34 - 48
 *     ICM_Object_Prot34_B.OBJ_Angle_Bottom_STD_V_34 - 49
 *     ICM_Object_Prot34_B.OBJ_Visibility_Side_V_34 - 50
 *     ICM_Object_Prot34_B.OBJ_Visibility_Side_34 - 51
 *     ICM_Object_Prot34_B.OBJ_Is_In_Drivable_Area_34 - 52
 *     ICM_Object_Prot34_B.OBJ_Is_In_Drivable_Area_V_34 - 53
 *     ICM_Object_Prot34_B.OBJ_Is_VeryClose_34 - 54
 *     ICM_Object_Prot34_B.OBJ_Is_VeryClose_V_34 - 55
 *     ICM_Object_Prot34_B.OBJ_Buffer_34 - 56
 */

/*********
 *  ICM_Object_Prot35_A - 73
 *     ICM_Object_Prot35_A.ICM_Object_Prot35_A_Header - 1
 *     ICM_Object_Prot35_A.OBJ_CRC_35 - 2
 *     ICM_Object_Prot35_A.OBJ_ID_35 - 3
 *     ICM_Object_Prot35_A.OBJ_Existence_Probability_35 - 4
 *     ICM_Object_Prot35_A.OBJ_Fusion_Source_35 - 5
 *     ICM_Object_Prot35_A.OBJ_Triggered_SDM_35 - 6
 *     ICM_Object_Prot35_A.OBJ_Motion_Category_35 - 7
 *     ICM_Object_Prot35_A.OBJ_Moving_IN_Probability_35 - 8
 *     ICM_Object_Prot35_A.OBJ_Object_Age_35 - 9
 *     ICM_Object_Prot35_A.OBJ_Measuring_Status_35 - 10
 *     ICM_Object_Prot35_A.OBJ_Object_Class_35 - 11
 *     ICM_Object_Prot35_A.OBJ_Class_Probability_35 - 12
 *     ICM_Object_Prot35_A.OBJ_Car_Probability_35 - 13
 *     ICM_Object_Prot35_A.OBJ_Truck_Probability_35 - 14
 *     ICM_Object_Prot35_A.OBJ_Bike_Probability_35 - 15
 *     ICM_Object_Prot35_A.OBJ_Camera_Source_35 - 16
 *     ICM_Object_Prot35_A.OBJ_Motion_Status_35 - 17
 *     ICM_Object_Prot35_A.OBJ_Motion_Orientation_35 - 18
 *     ICM_Object_Prot35_A.OBJ_Has_Cut_Lane_35 - 19
 *     ICM_Object_Prot35_A.OBJ_Has_Cut_Path_35 - 20
 *     ICM_Object_Prot35_A.OBJ_Brake_Light_35 - 21
 *     ICM_Object_Prot35_A.OBJ_Turn_Indicator_Right_35 - 22
 *     ICM_Object_Prot35_A.OBJ_Turn_Indicator_Left_35 - 23
 *     ICM_Object_Prot35_A.OBJ_Light_Indicator_Validity_35 - 24
 *     ICM_Object_Prot35_A.OBJ_Right_Out_Of_Image_35 - 25
 *     ICM_Object_Prot35_A.OBJ_Left_Out_Of_Image_35 - 26
 *     ICM_Object_Prot35_A.OBJ_Right_Out_Of_Image_V_35 - 27
 *     ICM_Object_Prot35_A.OBJ_Left_Out_Of_Image_V_35 - 28
 *     ICM_Object_Prot35_A.OBJ_Top_Out_Of_Image_35 - 29
 *     ICM_Object_Prot35_A.OBJ_Bottom_Out_Of_Image_35 - 30
 *     ICM_Object_Prot35_A.OBJ_Top_Out_Of_Image_V_35 - 31
 *     ICM_Object_Prot35_A.OBJ_Bottom_Out_Of_Image_V_35 - 32
 *     ICM_Object_Prot35_A.OBJ_Lane_Assignment_35 - 33
 *     ICM_Object_Prot35_A.OBJ_Lane_Assignment_V_35 - 34
 *     ICM_Object_Prot35_A.OBJ_Age_Seconds_35 - 35
 *     ICM_Object_Prot35_A.OBJ_Age_Seconds_V_35 - 36
 *     ICM_Object_Prot35_A.OBJ_Width_35 - 37
 *     ICM_Object_Prot35_A.OBJ_Width_V_35 - 38
 *     ICM_Object_Prot35_A.OBJ_Width_STD_35 - 39
 *     ICM_Object_Prot35_A.OBJ_Width_STD_V_35 - 40
 *     ICM_Object_Prot35_A.OBJ_Length_35 - 41
 *     ICM_Object_Prot35_A.OBJ_Length_V_35 - 42
 *     ICM_Object_Prot35_A.OBJ_Length_STD_35 - 43
 *     ICM_Object_Prot35_A.OBJ_Length_STD_V_35 - 44
 *     ICM_Object_Prot35_A.OBJ_Height_35 - 45
 *     ICM_Object_Prot35_A.OBJ_Height_V_35 - 46
 *     ICM_Object_Prot35_A.OBJ_Height_STD_35 - 47
 *     ICM_Object_Prot35_A.OBJ_Height_STD_V_35 - 48
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Velocity_35 - 49
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Velocity_V_35 - 50
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Velocity_STD_35 - 51
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Vel_STD_V_35 - 52
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Velocity_35 - 53
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Velocity_V_35 - 54
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Velocity_STD_35 - 55
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Vel_STD_V_35 - 56
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Acc_35 - 57
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Acc_V_35 - 58
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Acc_STD_35 - 59
 *     ICM_Object_Prot35_A.OBJ_Abs_Long_Acc_STD_V_35 - 60
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Acc_35 - 61
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Acc_V_35 - 62
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Acc_STD_35 - 63
 *     ICM_Object_Prot35_A.OBJ_Abs_Lat_Acc_STD_V_35 - 64
 *     ICM_Object_Prot35_A.OBJ_Abs_Acceleration_35 - 65
 *     ICM_Object_Prot35_A.OBJ_Abs_Acceleration_V_35 - 66
 *     ICM_Object_Prot35_A.OBJ_Abs_Acc_STD_35 - 67
 *     ICM_Object_Prot35_A.OBJ_Abs_Acc_STD_V_35 - 68
 *     ICM_Object_Prot35_A.OBJ_Inv_TTC_35 - 69
 *     ICM_Object_Prot35_A.OBJ_Inv_TTC_V_35 - 70
 *     ICM_Object_Prot35_A.OBJ_Inv_TTC_STD_35 - 71
 *     ICM_Object_Prot35_A.OBJ_Inv_TTC_STD_V_35 - 72
 *     ICM_Object_Prot35_A.OBJ_Relative_Long_Acc_35 - 73
 *     ICM_Object_Prot35_A.OBJ_Relative_Long_Acc_V_35 - 74
 *     ICM_Object_Prot35_A.OBJ_Relative_Long_Acc_STD_35 - 75
 *     ICM_Object_Prot35_A.OBJ_Rel_Long_Acc_STD_V_35 - 76
 */

/*********
 *  ICM_Object_Prot35_B - 74
 *     ICM_Object_Prot35_B.ICM_Object_Prot35_B_Header - 1
 *     ICM_Object_Prot35_B.OBJ_Relative_Long_Velocity_35 - 2
 *     ICM_Object_Prot35_B.OBJ_Relative_Long_Velocity_V_35 - 3
 *     ICM_Object_Prot35_B.OBJ_Relative_Long_Vel_STD_35 - 4
 *     ICM_Object_Prot35_B.OBJ_Rel_Long_Vel_STD_V_35 - 5
 *     ICM_Object_Prot35_B.OBJ_Relative_Lat_Velocity_35 - 6
 *     ICM_Object_Prot35_B.OBJ_Relative_Lat_Velocity_V_35 - 7
 *     ICM_Object_Prot35_B.OBJ_Relative_Lat_Velocity_STD_35 - 8
 *     ICM_Object_Prot35_B.OBJ_Rel_Lat_Vel_STD_V_35 - 9
 *     ICM_Object_Prot35_B.OBJ_Long_Distance_35 - 10
 *     ICM_Object_Prot35_B.OBJ_Long_Distance_V_35 - 11
 *     ICM_Object_Prot35_B.OBJ_Long_Distance_STD_35 - 12
 *     ICM_Object_Prot35_B.OBJ_Long_Distance_STD_V_35 - 13
 *     ICM_Object_Prot35_B.OBJ_Lat_Distance_35 - 14
 *     ICM_Object_Prot35_B.OBJ_Lat_Distance_V_35 - 15
 *     ICM_Object_Prot35_B.OBJ_Lat_Distance_STD_35 - 16
 *     ICM_Object_Prot35_B.OBJ_Lat_Distance_STD_V_35 - 17
 *     ICM_Object_Prot35_B.OBJ_Absolute_Speed_35 - 18
 *     ICM_Object_Prot35_B.OBJ_Absolute_Speed_V_35 - 19
 *     ICM_Object_Prot35_B.OBJ_Absolute_Speed_STD_35 - 20
 *     ICM_Object_Prot35_B.OBJ_Absolute_Speed_STD_V_35 - 21
 *     ICM_Object_Prot35_B.OBJ_Heading_35 - 22
 *     ICM_Object_Prot35_B.OBJ_Heading_V_35 - 23
 *     ICM_Object_Prot35_B.OBJ_Heading_STD_35 - 24
 *     ICM_Object_Prot35_B.OBJ_Heading_STD_V_35 - 25
 *     ICM_Object_Prot35_B.OBJ_Angle_Rate_STD_35 - 26
 *     ICM_Object_Prot35_B.OBJ_Angle_Rate_STD_V_35 - 27
 *     ICM_Object_Prot35_B.OBJ_Angle_Rate_35 - 28
 *     ICM_Object_Prot35_B.OBJ_Angle_Rate_V_35 - 29
 *     ICM_Object_Prot35_B.OBJ_Angle_Right_35 - 30
 *     ICM_Object_Prot35_B.OBJ_Angle_Right_V_35 - 31
 *     ICM_Object_Prot35_B.OBJ_Angle_Right_STD_35 - 32
 *     ICM_Object_Prot35_B.OBJ_Angle_Right_STD_V_35 - 33
 *     ICM_Object_Prot35_B.OBJ_Angle_Left_35 - 34
 *     ICM_Object_Prot35_B.OBJ_Angle_Left_V_35 - 35
 *     ICM_Object_Prot35_B.OBJ_Angle_Left_STD_35 - 36
 *     ICM_Object_Prot35_B.OBJ_Angle_Left_STD_V_35 - 37
 *     ICM_Object_Prot35_B.OBJ_Angle_Side_35 - 38
 *     ICM_Object_Prot35_B.OBJ_Angle_Side_V_35 - 39
 *     ICM_Object_Prot35_B.OBJ_Angle_Side_STD_35 - 40
 *     ICM_Object_Prot35_B.OBJ_Angle_Side_STD_V_35 - 41
 *     ICM_Object_Prot35_B.OBJ_Angle_Mid_V_35 - 42
 *     ICM_Object_Prot35_B.OBJ_Angle_Mid_35 - 43
 *     ICM_Object_Prot35_B.OBJ_Angle_Mid_STD_35 - 44
 *     ICM_Object_Prot35_B.OBJ_Angle_Mid_STD_V_35 - 45
 *     ICM_Object_Prot35_B.OBJ_Angle_Bottom_V_35 - 46
 *     ICM_Object_Prot35_B.OBJ_Angle_Bottom_35 - 47
 *     ICM_Object_Prot35_B.OBJ_Angle_Bottom_STD_35 - 48
 *     ICM_Object_Prot35_B.OBJ_Angle_Bottom_STD_V_35 - 49
 *     ICM_Object_Prot35_B.OBJ_Visibility_Side_V_35 - 50
 *     ICM_Object_Prot35_B.OBJ_Visibility_Side_35 - 51
 *     ICM_Object_Prot35_B.OBJ_Is_In_Drivable_Area_35 - 52
 *     ICM_Object_Prot35_B.OBJ_Is_In_Drivable_Area_V_35 - 53
 *     ICM_Object_Prot35_B.OBJ_Is_VeryClose_35 - 54
 *     ICM_Object_Prot35_B.OBJ_Is_VeryClose_V_35 - 55
 *     ICM_Object_Prot35_B.OBJ_Buffer_35 - 56
 */

/*********
 *  ICM_Object_Prot36_A - 75
 *     ICM_Object_Prot36_A.ICM_Object_Prot36_A_Header - 1
 *     ICM_Object_Prot36_A.OBJ_CRC_36 - 2
 *     ICM_Object_Prot36_A.OBJ_ID_36 - 3
 *     ICM_Object_Prot36_A.OBJ_Existence_Probability_36 - 4
 *     ICM_Object_Prot36_A.OBJ_Fusion_Source_36 - 5
 *     ICM_Object_Prot36_A.OBJ_Triggered_SDM_36 - 6
 *     ICM_Object_Prot36_A.OBJ_Motion_Category_36 - 7
 *     ICM_Object_Prot36_A.OBJ_Moving_IN_Probability_36 - 8
 *     ICM_Object_Prot36_A.OBJ_Object_Age_36 - 9
 *     ICM_Object_Prot36_A.OBJ_Measuring_Status_36 - 10
 *     ICM_Object_Prot36_A.OBJ_Object_Class_36 - 11
 *     ICM_Object_Prot36_A.OBJ_Class_Probability_36 - 12
 *     ICM_Object_Prot36_A.OBJ_Car_Probability_36 - 13
 *     ICM_Object_Prot36_A.OBJ_Truck_Probability_36 - 14
 *     ICM_Object_Prot36_A.OBJ_Bike_Probability_36 - 15
 *     ICM_Object_Prot36_A.OBJ_Camera_Source_36 - 16
 *     ICM_Object_Prot36_A.OBJ_Motion_Status_36 - 17
 *     ICM_Object_Prot36_A.OBJ_Motion_Orientation_36 - 18
 *     ICM_Object_Prot36_A.OBJ_Has_Cut_Lane_36 - 19
 *     ICM_Object_Prot36_A.OBJ_Has_Cut_Path_36 - 20
 *     ICM_Object_Prot36_A.OBJ_Brake_Light_36 - 21
 *     ICM_Object_Prot36_A.OBJ_Turn_Indicator_Right_36 - 22
 *     ICM_Object_Prot36_A.OBJ_Turn_Indicator_Left_36 - 23
 *     ICM_Object_Prot36_A.OBJ_Light_Indicator_Validity_36 - 24
 *     ICM_Object_Prot36_A.OBJ_Right_Out_Of_Image_36 - 25
 *     ICM_Object_Prot36_A.OBJ_Left_Out_Of_Image_36 - 26
 *     ICM_Object_Prot36_A.OBJ_Right_Out_Of_Image_V_36 - 27
 *     ICM_Object_Prot36_A.OBJ_Left_Out_Of_Image_V_36 - 28
 *     ICM_Object_Prot36_A.OBJ_Top_Out_Of_Image_36 - 29
 *     ICM_Object_Prot36_A.OBJ_Bottom_Out_Of_Image_36 - 30
 *     ICM_Object_Prot36_A.OBJ_Top_Out_Of_Image_V_36 - 31
 *     ICM_Object_Prot36_A.OBJ_Bottom_Out_Of_Image_V_36 - 32
 *     ICM_Object_Prot36_A.OBJ_Lane_Assignment_36 - 33
 *     ICM_Object_Prot36_A.OBJ_Lane_Assignment_V_36 - 34
 *     ICM_Object_Prot36_A.OBJ_Age_Seconds_36 - 35
 *     ICM_Object_Prot36_A.OBJ_Age_Seconds_V_36 - 36
 *     ICM_Object_Prot36_A.OBJ_Width_36 - 37
 *     ICM_Object_Prot36_A.OBJ_Width_V_36 - 38
 *     ICM_Object_Prot36_A.OBJ_Width_STD_36 - 39
 *     ICM_Object_Prot36_A.OBJ_Width_STD_V_36 - 40
 *     ICM_Object_Prot36_A.OBJ_Length_36 - 41
 *     ICM_Object_Prot36_A.OBJ_Length_V_36 - 42
 *     ICM_Object_Prot36_A.OBJ_Length_STD_36 - 43
 *     ICM_Object_Prot36_A.OBJ_Length_STD_V_36 - 44
 *     ICM_Object_Prot36_A.OBJ_Height_36 - 45
 *     ICM_Object_Prot36_A.OBJ_Height_V_36 - 46
 *     ICM_Object_Prot36_A.OBJ_Height_STD_36 - 47
 *     ICM_Object_Prot36_A.OBJ_Height_STD_V_36 - 48
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Velocity_36 - 49
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Velocity_V_36 - 50
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Velocity_STD_36 - 51
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Vel_STD_V_36 - 52
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Velocity_36 - 53
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Velocity_V_36 - 54
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Velocity_STD_36 - 55
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Vel_STD_V_36 - 56
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Acc_36 - 57
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Acc_V_36 - 58
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Acc_STD_36 - 59
 *     ICM_Object_Prot36_A.OBJ_Abs_Long_Acc_STD_V_36 - 60
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Acc_36 - 61
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Acc_V_36 - 62
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Acc_STD_36 - 63
 *     ICM_Object_Prot36_A.OBJ_Abs_Lat_Acc_STD_V_36 - 64
 *     ICM_Object_Prot36_A.OBJ_Abs_Acceleration_36 - 65
 *     ICM_Object_Prot36_A.OBJ_Abs_Acceleration_V_36 - 66
 *     ICM_Object_Prot36_A.OBJ_Abs_Acc_STD_36 - 67
 *     ICM_Object_Prot36_A.OBJ_Abs_Acc_STD_V_36 - 68
 *     ICM_Object_Prot36_A.OBJ_Inv_TTC_36 - 69
 *     ICM_Object_Prot36_A.OBJ_Inv_TTC_V_36 - 70
 *     ICM_Object_Prot36_A.OBJ_Inv_TTC_STD_36 - 71
 *     ICM_Object_Prot36_A.OBJ_Inv_TTC_STD_V_36 - 72
 *     ICM_Object_Prot36_A.OBJ_Relative_Long_Acc_36 - 73
 *     ICM_Object_Prot36_A.OBJ_Relative_Long_Acc_V_36 - 74
 *     ICM_Object_Prot36_A.OBJ_Relative_Long_Acc_STD_36 - 75
 *     ICM_Object_Prot36_A.OBJ_Rel_Long_Acc_STD_V_36 - 76
 */

/*********
 *  ICM_Object_Prot36_B - 76
 *     ICM_Object_Prot36_B.ICM_Object_Prot36_B_Header - 1
 *     ICM_Object_Prot36_B.OBJ_Relative_Long_Velocity_36 - 2
 *     ICM_Object_Prot36_B.OBJ_Relative_Long_Velocity_V_36 - 3
 *     ICM_Object_Prot36_B.OBJ_Relative_Long_Vel_STD_36 - 4
 *     ICM_Object_Prot36_B.OBJ_Rel_Long_Vel_STD_V_36 - 5
 *     ICM_Object_Prot36_B.OBJ_Relative_Lat_Velocity_36 - 6
 *     ICM_Object_Prot36_B.OBJ_Relative_Lat_Velocity_V_36 - 7
 *     ICM_Object_Prot36_B.OBJ_Relative_Lat_Velocity_STD_36 - 8
 *     ICM_Object_Prot36_B.OBJ_Rel_Lat_Vel_STD_V_36 - 9
 *     ICM_Object_Prot36_B.OBJ_Long_Distance_36 - 10
 *     ICM_Object_Prot36_B.OBJ_Long_Distance_V_36 - 11
 *     ICM_Object_Prot36_B.OBJ_Long_Distance_STD_36 - 12
 *     ICM_Object_Prot36_B.OBJ_Long_Distance_STD_V_36 - 13
 *     ICM_Object_Prot36_B.OBJ_Lat_Distance_36 - 14
 *     ICM_Object_Prot36_B.OBJ_Lat_Distance_V_36 - 15
 *     ICM_Object_Prot36_B.OBJ_Lat_Distance_STD_36 - 16
 *     ICM_Object_Prot36_B.OBJ_Lat_Distance_STD_V_36 - 17
 *     ICM_Object_Prot36_B.OBJ_Absolute_Speed_36 - 18
 *     ICM_Object_Prot36_B.OBJ_Absolute_Speed_V_36 - 19
 *     ICM_Object_Prot36_B.OBJ_Absolute_Speed_STD_36 - 20
 *     ICM_Object_Prot36_B.OBJ_Absolute_Speed_STD_V_36 - 21
 *     ICM_Object_Prot36_B.OBJ_Heading_36 - 22
 *     ICM_Object_Prot36_B.OBJ_Heading_V_36 - 23
 *     ICM_Object_Prot36_B.OBJ_Heading_STD_36 - 24
 *     ICM_Object_Prot36_B.OBJ_Heading_STD_V_36 - 25
 *     ICM_Object_Prot36_B.OBJ_Angle_Rate_STD_36 - 26
 *     ICM_Object_Prot36_B.OBJ_Angle_Rate_STD_V_36 - 27
 *     ICM_Object_Prot36_B.OBJ_Angle_Rate_36 - 28
 *     ICM_Object_Prot36_B.OBJ_Angle_Rate_V_36 - 29
 *     ICM_Object_Prot36_B.OBJ_Angle_Right_36 - 30
 *     ICM_Object_Prot36_B.OBJ_Angle_Right_V_36 - 31
 *     ICM_Object_Prot36_B.OBJ_Angle_Right_STD_36 - 32
 *     ICM_Object_Prot36_B.OBJ_Angle_Right_STD_V_36 - 33
 *     ICM_Object_Prot36_B.OBJ_Angle_Left_36 - 34
 *     ICM_Object_Prot36_B.OBJ_Angle_Left_V_36 - 35
 *     ICM_Object_Prot36_B.OBJ_Angle_Left_STD_36 - 36
 *     ICM_Object_Prot36_B.OBJ_Angle_Left_STD_V_36 - 37
 *     ICM_Object_Prot36_B.OBJ_Angle_Side_36 - 38
 *     ICM_Object_Prot36_B.OBJ_Angle_Side_V_36 - 39
 *     ICM_Object_Prot36_B.OBJ_Angle_Side_STD_36 - 40
 *     ICM_Object_Prot36_B.OBJ_Angle_Side_STD_V_36 - 41
 *     ICM_Object_Prot36_B.OBJ_Angle_Mid_V_36 - 42
 *     ICM_Object_Prot36_B.OBJ_Angle_Mid_36 - 43
 *     ICM_Object_Prot36_B.OBJ_Angle_Mid_STD_36 - 44
 *     ICM_Object_Prot36_B.OBJ_Angle_Mid_STD_V_36 - 45
 *     ICM_Object_Prot36_B.OBJ_Angle_Bottom_V_36 - 46
 *     ICM_Object_Prot36_B.OBJ_Angle_Bottom_36 - 47
 *     ICM_Object_Prot36_B.OBJ_Angle_Bottom_STD_36 - 48
 *     ICM_Object_Prot36_B.OBJ_Angle_Bottom_STD_V_36 - 49
 *     ICM_Object_Prot36_B.OBJ_Visibility_Side_V_36 - 50
 *     ICM_Object_Prot36_B.OBJ_Visibility_Side_36 - 51
 *     ICM_Object_Prot36_B.OBJ_Is_In_Drivable_Area_36 - 52
 *     ICM_Object_Prot36_B.OBJ_Is_In_Drivable_Area_V_36 - 53
 *     ICM_Object_Prot36_B.OBJ_Is_VeryClose_36 - 54
 *     ICM_Object_Prot36_B.OBJ_Is_VeryClose_V_36 - 55
 *     ICM_Object_Prot36_B.OBJ_Buffer_36 - 56
 */

/*********
 *  ICM_Object_Prot37_A - 77
 *     ICM_Object_Prot37_A.ICM_Object_Prot37_A_Header - 1
 *     ICM_Object_Prot37_A.OBJ_CRC_37 - 2
 *     ICM_Object_Prot37_A.OBJ_ID_37 - 3
 *     ICM_Object_Prot37_A.OBJ_Existence_Probability_37 - 4
 *     ICM_Object_Prot37_A.OBJ_Fusion_Source_37 - 5
 *     ICM_Object_Prot37_A.OBJ_Triggered_SDM_37 - 6
 *     ICM_Object_Prot37_A.OBJ_Motion_Category_37 - 7
 *     ICM_Object_Prot37_A.OBJ_Moving_IN_Probability_37 - 8
 *     ICM_Object_Prot37_A.OBJ_Object_Age_37 - 9
 *     ICM_Object_Prot37_A.OBJ_Measuring_Status_37 - 10
 *     ICM_Object_Prot37_A.OBJ_Object_Class_37 - 11
 *     ICM_Object_Prot37_A.OBJ_Class_Probability_37 - 12
 *     ICM_Object_Prot37_A.OBJ_Car_Probability_37 - 13
 *     ICM_Object_Prot37_A.OBJ_Truck_Probability_37 - 14
 *     ICM_Object_Prot37_A.OBJ_Bike_Probability_37 - 15
 *     ICM_Object_Prot37_A.OBJ_Camera_Source_37 - 16
 *     ICM_Object_Prot37_A.OBJ_Motion_Status_37 - 17
 *     ICM_Object_Prot37_A.OBJ_Motion_Orientation_37 - 18
 *     ICM_Object_Prot37_A.OBJ_Has_Cut_Lane_37 - 19
 *     ICM_Object_Prot37_A.OBJ_Has_Cut_Path_37 - 20
 *     ICM_Object_Prot37_A.OBJ_Brake_Light_37 - 21
 *     ICM_Object_Prot37_A.OBJ_Turn_Indicator_Right_37 - 22
 *     ICM_Object_Prot37_A.OBJ_Turn_Indicator_Left_37 - 23
 *     ICM_Object_Prot37_A.OBJ_Light_Indicator_Validity_37 - 24
 *     ICM_Object_Prot37_A.OBJ_Right_Out_Of_Image_37 - 25
 *     ICM_Object_Prot37_A.OBJ_Left_Out_Of_Image_37 - 26
 *     ICM_Object_Prot37_A.OBJ_Right_Out_Of_Image_V_37 - 27
 *     ICM_Object_Prot37_A.OBJ_Left_Out_Of_Image_V_37 - 28
 *     ICM_Object_Prot37_A.OBJ_Top_Out_Of_Image_37 - 29
 *     ICM_Object_Prot37_A.OBJ_Bottom_Out_Of_Image_37 - 30
 *     ICM_Object_Prot37_A.OBJ_Top_Out_Of_Image_V_37 - 31
 *     ICM_Object_Prot37_A.OBJ_Bottom_Out_Of_Image_V_37 - 32
 *     ICM_Object_Prot37_A.OBJ_Lane_Assignment_37 - 33
 *     ICM_Object_Prot37_A.OBJ_Lane_Assignment_V_37 - 34
 *     ICM_Object_Prot37_A.OBJ_Age_Seconds_37 - 35
 *     ICM_Object_Prot37_A.OBJ_Age_Seconds_V_37 - 36
 *     ICM_Object_Prot37_A.OBJ_Width_37 - 37
 *     ICM_Object_Prot37_A.OBJ_Width_V_37 - 38
 *     ICM_Object_Prot37_A.OBJ_Width_STD_37 - 39
 *     ICM_Object_Prot37_A.OBJ_Width_STD_V_37 - 40
 *     ICM_Object_Prot37_A.OBJ_Length_37 - 41
 *     ICM_Object_Prot37_A.OBJ_Length_V_37 - 42
 *     ICM_Object_Prot37_A.OBJ_Length_STD_37 - 43
 *     ICM_Object_Prot37_A.OBJ_Length_STD_V_37 - 44
 *     ICM_Object_Prot37_A.OBJ_Height_37 - 45
 *     ICM_Object_Prot37_A.OBJ_Height_V_37 - 46
 *     ICM_Object_Prot37_A.OBJ_Height_STD_37 - 47
 *     ICM_Object_Prot37_A.OBJ_Height_STD_V_37 - 48
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Velocity_37 - 49
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Velocity_V_37 - 50
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Velocity_STD_37 - 51
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Vel_STD_V_37 - 52
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Velocity_37 - 53
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Velocity_V_37 - 54
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Velocity_STD_37 - 55
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Vel_STD_V_37 - 56
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Acc_37 - 57
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Acc_V_37 - 58
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Acc_STD_37 - 59
 *     ICM_Object_Prot37_A.OBJ_Abs_Long_Acc_STD_V_37 - 60
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Acc_37 - 61
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Acc_V_37 - 62
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Acc_STD_37 - 63
 *     ICM_Object_Prot37_A.OBJ_Abs_Lat_Acc_STD_V_37 - 64
 *     ICM_Object_Prot37_A.OBJ_Abs_Acceleration_37 - 65
 *     ICM_Object_Prot37_A.OBJ_Abs_Acceleration_V_37 - 66
 *     ICM_Object_Prot37_A.OBJ_Abs_Acc_STD_37 - 67
 *     ICM_Object_Prot37_A.OBJ_Abs_Acc_STD_V_37 - 68
 *     ICM_Object_Prot37_A.OBJ_Inv_TTC_37 - 69
 *     ICM_Object_Prot37_A.OBJ_Inv_TTC_V_37 - 70
 *     ICM_Object_Prot37_A.OBJ_Inv_TTC_STD_37 - 71
 *     ICM_Object_Prot37_A.OBJ_Inv_TTC_STD_V_37 - 72
 *     ICM_Object_Prot37_A.OBJ_Relative_Long_Acc_37 - 73
 *     ICM_Object_Prot37_A.OBJ_Relative_Long_Acc_V_37 - 74
 *     ICM_Object_Prot37_A.OBJ_Relative_Long_Acc_STD_37 - 75
 *     ICM_Object_Prot37_A.OBJ_Rel_Long_Acc_STD_V_37 - 76
 */

/*********
 *  ICM_Object_Prot37_B - 78
 *     ICM_Object_Prot37_B.ICM_Object_Prot37_B_Header - 1
 *     ICM_Object_Prot37_B.OBJ_Relative_Long_Velocity_37 - 2
 *     ICM_Object_Prot37_B.OBJ_Relative_Long_Velocity_V_37 - 3
 *     ICM_Object_Prot37_B.OBJ_Relative_Long_Vel_STD_37 - 4
 *     ICM_Object_Prot37_B.OBJ_Rel_Long_Vel_STD_V_37 - 5
 *     ICM_Object_Prot37_B.OBJ_Relative_Lat_Velocity_37 - 6
 *     ICM_Object_Prot37_B.OBJ_Relative_Lat_Velocity_V_37 - 7
 *     ICM_Object_Prot37_B.OBJ_Relative_Lat_Velocity_STD_37 - 8
 *     ICM_Object_Prot37_B.OBJ_Rel_Lat_Vel_STD_V_37 - 9
 *     ICM_Object_Prot37_B.OBJ_Long_Distance_37 - 10
 *     ICM_Object_Prot37_B.OBJ_Long_Distance_V_37 - 11
 *     ICM_Object_Prot37_B.OBJ_Long_Distance_STD_37 - 12
 *     ICM_Object_Prot37_B.OBJ_Long_Distance_STD_V_37 - 13
 *     ICM_Object_Prot37_B.OBJ_Lat_Distance_37 - 14
 *     ICM_Object_Prot37_B.OBJ_Lat_Distance_V_37 - 15
 *     ICM_Object_Prot37_B.OBJ_Lat_Distance_STD_37 - 16
 *     ICM_Object_Prot37_B.OBJ_Lat_Distance_STD_V_37 - 17
 *     ICM_Object_Prot37_B.OBJ_Absolute_Speed_37 - 18
 *     ICM_Object_Prot37_B.OBJ_Absolute_Speed_V_37 - 19
 *     ICM_Object_Prot37_B.OBJ_Absolute_Speed_STD_37 - 20
 *     ICM_Object_Prot37_B.OBJ_Absolute_Speed_STD_V_37 - 21
 *     ICM_Object_Prot37_B.OBJ_Heading_37 - 22
 *     ICM_Object_Prot37_B.OBJ_Heading_V_37 - 23
 *     ICM_Object_Prot37_B.OBJ_Heading_STD_37 - 24
 *     ICM_Object_Prot37_B.OBJ_Heading_STD_V_37 - 25
 *     ICM_Object_Prot37_B.OBJ_Angle_Rate_STD_37 - 26
 *     ICM_Object_Prot37_B.OBJ_Angle_Rate_STD_V_37 - 27
 *     ICM_Object_Prot37_B.OBJ_Angle_Rate_37 - 28
 *     ICM_Object_Prot37_B.OBJ_Angle_Rate_V_37 - 29
 *     ICM_Object_Prot37_B.OBJ_Angle_Right_37 - 30
 *     ICM_Object_Prot37_B.OBJ_Angle_Right_V_37 - 31
 *     ICM_Object_Prot37_B.OBJ_Angle_Right_STD_37 - 32
 *     ICM_Object_Prot37_B.OBJ_Angle_Right_STD_V_37 - 33
 *     ICM_Object_Prot37_B.OBJ_Angle_Left_37 - 34
 *     ICM_Object_Prot37_B.OBJ_Angle_Left_V_37 - 35
 *     ICM_Object_Prot37_B.OBJ_Angle_Left_STD_37 - 36
 *     ICM_Object_Prot37_B.OBJ_Angle_Left_STD_V_37 - 37
 *     ICM_Object_Prot37_B.OBJ_Angle_Side_37 - 38
 *     ICM_Object_Prot37_B.OBJ_Angle_Side_V_37 - 39
 *     ICM_Object_Prot37_B.OBJ_Angle_Side_STD_37 - 40
 *     ICM_Object_Prot37_B.OBJ_Angle_Side_STD_V_37 - 41
 *     ICM_Object_Prot37_B.OBJ_Angle_Mid_V_37 - 42
 *     ICM_Object_Prot37_B.OBJ_Angle_Mid_37 - 43
 *     ICM_Object_Prot37_B.OBJ_Angle_Mid_STD_37 - 44
 *     ICM_Object_Prot37_B.OBJ_Angle_Mid_STD_V_37 - 45
 *     ICM_Object_Prot37_B.OBJ_Angle_Bottom_V_37 - 46
 *     ICM_Object_Prot37_B.OBJ_Angle_Bottom_37 - 47
 *     ICM_Object_Prot37_B.OBJ_Angle_Bottom_STD_37 - 48
 *     ICM_Object_Prot37_B.OBJ_Angle_Bottom_STD_V_37 - 49
 *     ICM_Object_Prot37_B.OBJ_Visibility_Side_V_37 - 50
 *     ICM_Object_Prot37_B.OBJ_Visibility_Side_37 - 51
 *     ICM_Object_Prot37_B.OBJ_Is_In_Drivable_Area_37 - 52
 *     ICM_Object_Prot37_B.OBJ_Is_In_Drivable_Area_V_37 - 53
 *     ICM_Object_Prot37_B.OBJ_Is_VeryClose_37 - 54
 *     ICM_Object_Prot37_B.OBJ_Is_VeryClose_V_37 - 55
 *     ICM_Object_Prot37_B.OBJ_Buffer_37 - 56
 */

/*********
 *  ICM_Object_Prot38_A - 79
 *     ICM_Object_Prot38_A.ICM_Object_Prot38_A_Header - 1
 *     ICM_Object_Prot38_A.OBJ_CRC_38 - 2
 *     ICM_Object_Prot38_A.OBJ_ID_38 - 3
 *     ICM_Object_Prot38_A.OBJ_Existence_Probability_38 - 4
 *     ICM_Object_Prot38_A.OBJ_Fusion_Source_38 - 5
 *     ICM_Object_Prot38_A.OBJ_Triggered_SDM_38 - 6
 *     ICM_Object_Prot38_A.OBJ_Motion_Category_38 - 7
 *     ICM_Object_Prot38_A.OBJ_Moving_IN_Probability_38 - 8
 *     ICM_Object_Prot38_A.OBJ_Object_Age_38 - 9
 *     ICM_Object_Prot38_A.OBJ_Measuring_Status_38 - 10
 *     ICM_Object_Prot38_A.OBJ_Object_Class_38 - 11
 *     ICM_Object_Prot38_A.OBJ_Class_Probability_38 - 12
 *     ICM_Object_Prot38_A.OBJ_Car_Probability_38 - 13
 *     ICM_Object_Prot38_A.OBJ_Truck_Probability_38 - 14
 *     ICM_Object_Prot38_A.OBJ_Bike_Probability_38 - 15
 *     ICM_Object_Prot38_A.OBJ_Camera_Source_38 - 16
 *     ICM_Object_Prot38_A.OBJ_Motion_Status_38 - 17
 *     ICM_Object_Prot38_A.OBJ_Motion_Orientation_38 - 18
 *     ICM_Object_Prot38_A.OBJ_Has_Cut_Lane_38 - 19
 *     ICM_Object_Prot38_A.OBJ_Has_Cut_Path_38 - 20
 *     ICM_Object_Prot38_A.OBJ_Brake_Light_38 - 21
 *     ICM_Object_Prot38_A.OBJ_Turn_Indicator_Right_38 - 22
 *     ICM_Object_Prot38_A.OBJ_Turn_Indicator_Left_38 - 23
 *     ICM_Object_Prot38_A.OBJ_Light_Indicator_Validity_38 - 24
 *     ICM_Object_Prot38_A.OBJ_Right_Out_Of_Image_38 - 25
 *     ICM_Object_Prot38_A.OBJ_Left_Out_Of_Image_38 - 26
 *     ICM_Object_Prot38_A.OBJ_Right_Out_Of_Image_V_38 - 27
 *     ICM_Object_Prot38_A.OBJ_Left_Out_Of_Image_V_38 - 28
 *     ICM_Object_Prot38_A.OBJ_Top_Out_Of_Image_38 - 29
 *     ICM_Object_Prot38_A.OBJ_Bottom_Out_Of_Image_38 - 30
 *     ICM_Object_Prot38_A.OBJ_Top_Out_Of_Image_V_38 - 31
 *     ICM_Object_Prot38_A.OBJ_Bottom_Out_Of_Image_V_38 - 32
 *     ICM_Object_Prot38_A.OBJ_Lane_Assignment_38 - 33
 *     ICM_Object_Prot38_A.OBJ_Lane_Assignment_V_38 - 34
 *     ICM_Object_Prot38_A.OBJ_Age_Seconds_38 - 35
 *     ICM_Object_Prot38_A.OBJ_Age_Seconds_V_38 - 36
 *     ICM_Object_Prot38_A.OBJ_Width_38 - 37
 *     ICM_Object_Prot38_A.OBJ_Width_V_38 - 38
 *     ICM_Object_Prot38_A.OBJ_Width_STD_38 - 39
 *     ICM_Object_Prot38_A.OBJ_Width_STD_V_38 - 40
 *     ICM_Object_Prot38_A.OBJ_Length_38 - 41
 *     ICM_Object_Prot38_A.OBJ_Length_V_38 - 42
 *     ICM_Object_Prot38_A.OBJ_Length_STD_38 - 43
 *     ICM_Object_Prot38_A.OBJ_Length_STD_V_38 - 44
 *     ICM_Object_Prot38_A.OBJ_Height_38 - 45
 *     ICM_Object_Prot38_A.OBJ_Height_V_38 - 46
 *     ICM_Object_Prot38_A.OBJ_Height_STD_38 - 47
 *     ICM_Object_Prot38_A.OBJ_Height_STD_V_38 - 48
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Velocity_38 - 49
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Velocity_V_38 - 50
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Velocity_STD_38 - 51
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Vel_STD_V_38 - 52
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Velocity_38 - 53
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Velocity_V_38 - 54
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Velocity_STD_38 - 55
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Vel_STD_V_38 - 56
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Acc_38 - 57
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Acc_V_38 - 58
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Acc_STD_38 - 59
 *     ICM_Object_Prot38_A.OBJ_Abs_Long_Acc_STD_V_38 - 60
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Acc_38 - 61
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Acc_V_38 - 62
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Acc_STD_38 - 63
 *     ICM_Object_Prot38_A.OBJ_Abs_Lat_Acc_STD_V_38 - 64
 *     ICM_Object_Prot38_A.OBJ_Abs_Acceleration_38 - 65
 *     ICM_Object_Prot38_A.OBJ_Abs_Acceleration_V_38 - 66
 *     ICM_Object_Prot38_A.OBJ_Abs_Acc_STD_38 - 67
 *     ICM_Object_Prot38_A.OBJ_Abs_Acc_STD_V_38 - 68
 *     ICM_Object_Prot38_A.OBJ_Inv_TTC_38 - 69
 *     ICM_Object_Prot38_A.OBJ_Inv_TTC_V_38 - 70
 *     ICM_Object_Prot38_A.OBJ_Inv_TTC_STD_38 - 71
 *     ICM_Object_Prot38_A.OBJ_Inv_TTC_STD_V_38 - 72
 *     ICM_Object_Prot38_A.OBJ_Relative_Long_Acc_38 - 73
 *     ICM_Object_Prot38_A.OBJ_Relative_Long_Acc_V_38 - 74
 *     ICM_Object_Prot38_A.OBJ_Relative_Long_Acc_STD_38 - 75
 *     ICM_Object_Prot38_A.OBJ_Rel_Long_Acc_STD_V_38 - 76
 */

/*********
 *  ICM_Object_Prot38_B - 80
 *     ICM_Object_Prot38_B.ICM_Object_Prot38_B_Header - 1
 *     ICM_Object_Prot38_B.OBJ_Relative_Long_Velocity_38 - 2
 *     ICM_Object_Prot38_B.OBJ_Relative_Long_Velocity_V_38 - 3
 *     ICM_Object_Prot38_B.OBJ_Relative_Long_Vel_STD_38 - 4
 *     ICM_Object_Prot38_B.OBJ_Rel_Long_Vel_STD_V_38 - 5
 *     ICM_Object_Prot38_B.OBJ_Relative_Lat_Velocity_38 - 6
 *     ICM_Object_Prot38_B.OBJ_Relative_Lat_Velocity_V_38 - 7
 *     ICM_Object_Prot38_B.OBJ_Relative_Lat_Velocity_STD_38 - 8
 *     ICM_Object_Prot38_B.OBJ_Rel_Lat_Vel_STD_V_38 - 9
 *     ICM_Object_Prot38_B.OBJ_Long_Distance_38 - 10
 *     ICM_Object_Prot38_B.OBJ_Long_Distance_V_38 - 11
 *     ICM_Object_Prot38_B.OBJ_Long_Distance_STD_38 - 12
 *     ICM_Object_Prot38_B.OBJ_Long_Distance_STD_V_38 - 13
 *     ICM_Object_Prot38_B.OBJ_Lat_Distance_38 - 14
 *     ICM_Object_Prot38_B.OBJ_Lat_Distance_V_38 - 15
 *     ICM_Object_Prot38_B.OBJ_Lat_Distance_STD_38 - 16
 *     ICM_Object_Prot38_B.OBJ_Lat_Distance_STD_V_38 - 17
 *     ICM_Object_Prot38_B.OBJ_Absolute_Speed_38 - 18
 *     ICM_Object_Prot38_B.OBJ_Absolute_Speed_V_38 - 19
 *     ICM_Object_Prot38_B.OBJ_Absolute_Speed_STD_38 - 20
 *     ICM_Object_Prot38_B.OBJ_Absolute_Speed_STD_V_38 - 21
 *     ICM_Object_Prot38_B.OBJ_Heading_38 - 22
 *     ICM_Object_Prot38_B.OBJ_Heading_V_38 - 23
 *     ICM_Object_Prot38_B.OBJ_Heading_STD_38 - 24
 *     ICM_Object_Prot38_B.OBJ_Heading_STD_V_38 - 25
 *     ICM_Object_Prot38_B.OBJ_Angle_Rate_STD_38 - 26
 *     ICM_Object_Prot38_B.OBJ_Angle_Rate_STD_V_38 - 27
 *     ICM_Object_Prot38_B.OBJ_Angle_Rate_38 - 28
 *     ICM_Object_Prot38_B.OBJ_Angle_Rate_V_38 - 29
 *     ICM_Object_Prot38_B.OBJ_Angle_Right_38 - 30
 *     ICM_Object_Prot38_B.OBJ_Angle_Right_V_38 - 31
 *     ICM_Object_Prot38_B.OBJ_Angle_Right_STD_38 - 32
 *     ICM_Object_Prot38_B.OBJ_Angle_Right_STD_V_38 - 33
 *     ICM_Object_Prot38_B.OBJ_Angle_Left_38 - 34
 *     ICM_Object_Prot38_B.OBJ_Angle_Left_V_38 - 35
 *     ICM_Object_Prot38_B.OBJ_Angle_Left_STD_38 - 36
 *     ICM_Object_Prot38_B.OBJ_Angle_Left_STD_V_38 - 37
 *     ICM_Object_Prot38_B.OBJ_Angle_Side_38 - 38
 *     ICM_Object_Prot38_B.OBJ_Angle_Side_V_38 - 39
 *     ICM_Object_Prot38_B.OBJ_Angle_Side_STD_38 - 40
 *     ICM_Object_Prot38_B.OBJ_Angle_Side_STD_V_38 - 41
 *     ICM_Object_Prot38_B.OBJ_Angle_Mid_V_38 - 42
 *     ICM_Object_Prot38_B.OBJ_Angle_Mid_38 - 43
 *     ICM_Object_Prot38_B.OBJ_Angle_Mid_STD_38 - 44
 *     ICM_Object_Prot38_B.OBJ_Angle_Mid_STD_V_38 - 45
 *     ICM_Object_Prot38_B.OBJ_Angle_Bottom_V_38 - 46
 *     ICM_Object_Prot38_B.OBJ_Angle_Bottom_38 - 47
 *     ICM_Object_Prot38_B.OBJ_Angle_Bottom_STD_38 - 48
 *     ICM_Object_Prot38_B.OBJ_Angle_Bottom_STD_V_38 - 49
 *     ICM_Object_Prot38_B.OBJ_Visibility_Side_V_38 - 50
 *     ICM_Object_Prot38_B.OBJ_Visibility_Side_38 - 51
 *     ICM_Object_Prot38_B.OBJ_Is_In_Drivable_Area_38 - 52
 *     ICM_Object_Prot38_B.OBJ_Is_In_Drivable_Area_V_38 - 53
 *     ICM_Object_Prot38_B.OBJ_Is_VeryClose_38 - 54
 *     ICM_Object_Prot38_B.OBJ_Is_VeryClose_V_38 - 55
 *     ICM_Object_Prot38_B.OBJ_Buffer_38 - 56
 */

/*********
 *  ICM_Object_Prot39_A - 81
 *     ICM_Object_Prot39_A.ICM_Object_Prot39_A_Header - 1
 *     ICM_Object_Prot39_A.OBJ_CRC_39 - 2
 *     ICM_Object_Prot39_A.OBJ_ID_39 - 3
 *     ICM_Object_Prot39_A.OBJ_Existence_Probability_39 - 4
 *     ICM_Object_Prot39_A.OBJ_Fusion_Source_39 - 5
 *     ICM_Object_Prot39_A.OBJ_Triggered_SDM_39 - 6
 *     ICM_Object_Prot39_A.OBJ_Motion_Category_39 - 7
 *     ICM_Object_Prot39_A.OBJ_Moving_IN_Probability_39 - 8
 *     ICM_Object_Prot39_A.OBJ_Object_Age_39 - 9
 *     ICM_Object_Prot39_A.OBJ_Measuring_Status_39 - 10
 *     ICM_Object_Prot39_A.OBJ_Object_Class_39 - 11
 *     ICM_Object_Prot39_A.OBJ_Class_Probability_39 - 12
 *     ICM_Object_Prot39_A.OBJ_Car_Probability_39 - 13
 *     ICM_Object_Prot39_A.OBJ_Truck_Probability_39 - 14
 *     ICM_Object_Prot39_A.OBJ_Bike_Probability_39 - 15
 *     ICM_Object_Prot39_A.OBJ_Camera_Source_39 - 16
 *     ICM_Object_Prot39_A.OBJ_Motion_Status_39 - 17
 *     ICM_Object_Prot39_A.OBJ_Motion_Orientation_39 - 18
 *     ICM_Object_Prot39_A.OBJ_Has_Cut_Lane_39 - 19
 *     ICM_Object_Prot39_A.OBJ_Has_Cut_Path_39 - 20
 *     ICM_Object_Prot39_A.OBJ_Brake_Light_39 - 21
 *     ICM_Object_Prot39_A.OBJ_Turn_Indicator_Right_39 - 22
 *     ICM_Object_Prot39_A.OBJ_Turn_Indicator_Left_39 - 23
 *     ICM_Object_Prot39_A.OBJ_Light_Indicator_Validity_39 - 24
 *     ICM_Object_Prot39_A.OBJ_Right_Out_Of_Image_39 - 25
 *     ICM_Object_Prot39_A.OBJ_Left_Out_Of_Image_39 - 26
 *     ICM_Object_Prot39_A.OBJ_Right_Out_Of_Image_V_39 - 27
 *     ICM_Object_Prot39_A.OBJ_Left_Out_Of_Image_V_39 - 28
 *     ICM_Object_Prot39_A.OBJ_Top_Out_Of_Image_39 - 29
 *     ICM_Object_Prot39_A.OBJ_Bottom_Out_Of_Image_39 - 30
 *     ICM_Object_Prot39_A.OBJ_Top_Out_Of_Image_V_39 - 31
 *     ICM_Object_Prot39_A.OBJ_Bottom_Out_Of_Image_V_39 - 32
 *     ICM_Object_Prot39_A.OBJ_Lane_Assignment_39 - 33
 *     ICM_Object_Prot39_A.OBJ_Lane_Assignment_V_39 - 34
 *     ICM_Object_Prot39_A.OBJ_Age_Seconds_39 - 35
 *     ICM_Object_Prot39_A.OBJ_Age_Seconds_V_39 - 36
 *     ICM_Object_Prot39_A.OBJ_Width_39 - 37
 *     ICM_Object_Prot39_A.OBJ_Width_V_39 - 38
 *     ICM_Object_Prot39_A.OBJ_Width_STD_39 - 39
 *     ICM_Object_Prot39_A.OBJ_Width_STD_V_39 - 40
 *     ICM_Object_Prot39_A.OBJ_Length_39 - 41
 *     ICM_Object_Prot39_A.OBJ_Length_V_39 - 42
 *     ICM_Object_Prot39_A.OBJ_Length_STD_39 - 43
 *     ICM_Object_Prot39_A.OBJ_Length_STD_V_39 - 44
 *     ICM_Object_Prot39_A.OBJ_Height_39 - 45
 *     ICM_Object_Prot39_A.OBJ_Height_V_39 - 46
 *     ICM_Object_Prot39_A.OBJ_Height_STD_39 - 47
 *     ICM_Object_Prot39_A.OBJ_Height_STD_V_39 - 48
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Velocity_39 - 49
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Velocity_V_39 - 50
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Velocity_STD_39 - 51
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Vel_STD_V_39 - 52
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Velocity_39 - 53
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Velocity_V_39 - 54
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Velocity_STD_39 - 55
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Vel_STD_V_39 - 56
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Acc_39 - 57
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Acc_V_39 - 58
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Acc_STD_39 - 59
 *     ICM_Object_Prot39_A.OBJ_Abs_Long_Acc_STD_V_39 - 60
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Acc_39 - 61
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Acc_V_39 - 62
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Acc_STD_39 - 63
 *     ICM_Object_Prot39_A.OBJ_Abs_Lat_Acc_STD_V_39 - 64
 *     ICM_Object_Prot39_A.OBJ_Abs_Acceleration_39 - 65
 *     ICM_Object_Prot39_A.OBJ_Abs_Acceleration_V_39 - 66
 *     ICM_Object_Prot39_A.OBJ_Abs_Acc_STD_39 - 67
 *     ICM_Object_Prot39_A.OBJ_Abs_Acc_STD_V_39 - 68
 *     ICM_Object_Prot39_A.OBJ_Inv_TTC_39 - 69
 *     ICM_Object_Prot39_A.OBJ_Inv_TTC_V_39 - 70
 *     ICM_Object_Prot39_A.OBJ_Inv_TTC_STD_39 - 71
 *     ICM_Object_Prot39_A.OBJ_Inv_TTC_STD_V_39 - 72
 *     ICM_Object_Prot39_A.OBJ_Relative_Long_Acc_39 - 73
 *     ICM_Object_Prot39_A.OBJ_Relative_Long_Acc_V_39 - 74
 *     ICM_Object_Prot39_A.OBJ_Relative_Long_Acc_STD_39 - 75
 *     ICM_Object_Prot39_A.OBJ_Rel_Long_Acc_STD_V_39 - 76
 */

/*********
 *  ICM_Object_Prot39_B - 82
 *     ICM_Object_Prot39_B.ICM_Object_Prot39_B_Header - 1
 *     ICM_Object_Prot39_B.OBJ_Relative_Long_Velocity_39 - 2
 *     ICM_Object_Prot39_B.OBJ_Relative_Long_Velocity_V_39 - 3
 *     ICM_Object_Prot39_B.OBJ_Relative_Long_Vel_STD_39 - 4
 *     ICM_Object_Prot39_B.OBJ_Rel_Long_Vel_STD_V_39 - 5
 *     ICM_Object_Prot39_B.OBJ_Relative_Lat_Velocity_39 - 6
 *     ICM_Object_Prot39_B.OBJ_Relative_Lat_Velocity_V_39 - 7
 *     ICM_Object_Prot39_B.OBJ_Relative_Lat_Velocity_STD_39 - 8
 *     ICM_Object_Prot39_B.OBJ_Rel_Lat_Vel_STD_V_39 - 9
 *     ICM_Object_Prot39_B.OBJ_Long_Distance_39 - 10
 *     ICM_Object_Prot39_B.OBJ_Long_Distance_V_39 - 11
 *     ICM_Object_Prot39_B.OBJ_Long_Distance_STD_39 - 12
 *     ICM_Object_Prot39_B.OBJ_Long_Distance_STD_V_39 - 13
 *     ICM_Object_Prot39_B.OBJ_Lat_Distance_39 - 14
 *     ICM_Object_Prot39_B.OBJ_Lat_Distance_V_39 - 15
 *     ICM_Object_Prot39_B.OBJ_Lat_Distance_STD_39 - 16
 *     ICM_Object_Prot39_B.OBJ_Lat_Distance_STD_V_39 - 17
 *     ICM_Object_Prot39_B.OBJ_Absolute_Speed_39 - 18
 *     ICM_Object_Prot39_B.OBJ_Absolute_Speed_V_39 - 19
 *     ICM_Object_Prot39_B.OBJ_Absolute_Speed_STD_39 - 20
 *     ICM_Object_Prot39_B.OBJ_Absolute_Speed_STD_V_39 - 21
 *     ICM_Object_Prot39_B.OBJ_Heading_39 - 22
 *     ICM_Object_Prot39_B.OBJ_Heading_V_39 - 23
 *     ICM_Object_Prot39_B.OBJ_Heading_STD_39 - 24
 *     ICM_Object_Prot39_B.OBJ_Heading_STD_V_39 - 25
 *     ICM_Object_Prot39_B.OBJ_Angle_Rate_STD_39 - 26
 *     ICM_Object_Prot39_B.OBJ_Angle_Rate_STD_V_39 - 27
 *     ICM_Object_Prot39_B.OBJ_Angle_Rate_39 - 28
 *     ICM_Object_Prot39_B.OBJ_Angle_Rate_V_39 - 29
 *     ICM_Object_Prot39_B.OBJ_Angle_Right_39 - 30
 *     ICM_Object_Prot39_B.OBJ_Angle_Right_V_39 - 31
 *     ICM_Object_Prot39_B.OBJ_Angle_Right_STD_39 - 32
 *     ICM_Object_Prot39_B.OBJ_Angle_Right_STD_V_39 - 33
 *     ICM_Object_Prot39_B.OBJ_Angle_Left_39 - 34
 *     ICM_Object_Prot39_B.OBJ_Angle_Left_V_39 - 35
 *     ICM_Object_Prot39_B.OBJ_Angle_Left_STD_39 - 36
 *     ICM_Object_Prot39_B.OBJ_Angle_Left_STD_V_39 - 37
 *     ICM_Object_Prot39_B.OBJ_Angle_Side_39 - 38
 *     ICM_Object_Prot39_B.OBJ_Angle_Side_V_39 - 39
 *     ICM_Object_Prot39_B.OBJ_Angle_Side_STD_39 - 40
 *     ICM_Object_Prot39_B.OBJ_Angle_Side_STD_V_39 - 41
 *     ICM_Object_Prot39_B.OBJ_Angle_Mid_V_39 - 42
 *     ICM_Object_Prot39_B.OBJ_Angle_Mid_39 - 43
 *     ICM_Object_Prot39_B.OBJ_Angle_Mid_STD_39 - 44
 *     ICM_Object_Prot39_B.OBJ_Angle_Mid_STD_V_39 - 45
 *     ICM_Object_Prot39_B.OBJ_Angle_Bottom_V_39 - 46
 *     ICM_Object_Prot39_B.OBJ_Angle_Bottom_39 - 47
 *     ICM_Object_Prot39_B.OBJ_Angle_Bottom_STD_39 - 48
 *     ICM_Object_Prot39_B.OBJ_Angle_Bottom_STD_V_39 - 49
 *     ICM_Object_Prot39_B.OBJ_Visibility_Side_V_39 - 50
 *     ICM_Object_Prot39_B.OBJ_Visibility_Side_39 - 51
 *     ICM_Object_Prot39_B.OBJ_Is_In_Drivable_Area_39 - 52
 *     ICM_Object_Prot39_B.OBJ_Is_In_Drivable_Area_V_39 - 53
 *     ICM_Object_Prot39_B.OBJ_Is_VeryClose_39 - 54
 *     ICM_Object_Prot39_B.OBJ_Is_VeryClose_V_39 - 55
 *     ICM_Object_Prot39_B.OBJ_Buffer_39 - 56
 *     ICM_Object_Prot39_B.ICM_Object_Prot39_B_CRC - 57
 */

/*********
 *  ICM_Object_Prot3_A - 83
 *     ICM_Object_Prot3_A.ICM_Object_Prot3_A_Header - 1
 *     ICM_Object_Prot3_A.OBJ_CRC_3 - 2
 *     ICM_Object_Prot3_A.OBJ_ID_3 - 3
 *     ICM_Object_Prot3_A.OBJ_Existence_Probability_3 - 4
 *     ICM_Object_Prot3_A.OBJ_Fusion_Source_3 - 5
 *     ICM_Object_Prot3_A.OBJ_Triggered_SDM_3 - 6
 *     ICM_Object_Prot3_A.OBJ_Motion_Category_3 - 7
 *     ICM_Object_Prot3_A.OBJ_Moving_IN_Probability_3 - 8
 *     ICM_Object_Prot3_A.OBJ_Object_Age_3 - 9
 *     ICM_Object_Prot3_A.OBJ_Measuring_Status_3 - 10
 *     ICM_Object_Prot3_A.OBJ_Object_Class_3 - 11
 *     ICM_Object_Prot3_A.OBJ_Class_Probability_3 - 12
 *     ICM_Object_Prot3_A.OBJ_Car_Probability_3 - 13
 *     ICM_Object_Prot3_A.OBJ_Truck_Probability_3 - 14
 *     ICM_Object_Prot3_A.OBJ_Bike_Probability_3 - 15
 *     ICM_Object_Prot3_A.OBJ_Camera_Source_3 - 16
 *     ICM_Object_Prot3_A.OBJ_Motion_Status_3 - 17
 *     ICM_Object_Prot3_A.OBJ_Motion_Orientation_3 - 18
 *     ICM_Object_Prot3_A.OBJ_Has_Cut_Lane_3 - 19
 *     ICM_Object_Prot3_A.OBJ_Has_Cut_Path_3 - 20
 *     ICM_Object_Prot3_A.OBJ_Brake_Light_3 - 21
 *     ICM_Object_Prot3_A.OBJ_Turn_Indicator_Right_3 - 22
 *     ICM_Object_Prot3_A.OBJ_Turn_Indicator_Left_3 - 23
 *     ICM_Object_Prot3_A.OBJ_Light_Indicator_Validity_3 - 24
 *     ICM_Object_Prot3_A.OBJ_Right_Out_Of_Image_3 - 25
 *     ICM_Object_Prot3_A.OBJ_Left_Out_Of_Image_3 - 26
 *     ICM_Object_Prot3_A.OBJ_Right_Out_Of_Image_V_3 - 27
 *     ICM_Object_Prot3_A.OBJ_Left_Out_Of_Image_V_3 - 28
 *     ICM_Object_Prot3_A.OBJ_Top_Out_Of_Image_3 - 29
 *     ICM_Object_Prot3_A.OBJ_Bottom_Out_Of_Image_3 - 30
 *     ICM_Object_Prot3_A.OBJ_Top_Out_Of_Image_V_3 - 31
 *     ICM_Object_Prot3_A.OBJ_Bottom_Out_Of_Image_V_3 - 32
 *     ICM_Object_Prot3_A.OBJ_Lane_Assignment_3 - 33
 *     ICM_Object_Prot3_A.OBJ_Lane_Assignment_V_3 - 34
 *     ICM_Object_Prot3_A.OBJ_Age_Seconds_3 - 35
 *     ICM_Object_Prot3_A.OBJ_Age_Seconds_V_3 - 36
 *     ICM_Object_Prot3_A.OBJ_Width_3 - 37
 *     ICM_Object_Prot3_A.OBJ_Width_V_3 - 38
 *     ICM_Object_Prot3_A.OBJ_Width_STD_3 - 39
 *     ICM_Object_Prot3_A.OBJ_Width_STD_V_3 - 40
 *     ICM_Object_Prot3_A.OBJ_Length_3 - 41
 *     ICM_Object_Prot3_A.OBJ_Length_V_3 - 42
 *     ICM_Object_Prot3_A.OBJ_Length_STD_3 - 43
 *     ICM_Object_Prot3_A.OBJ_Length_STD_V_3 - 44
 *     ICM_Object_Prot3_A.OBJ_Height_3 - 45
 *     ICM_Object_Prot3_A.OBJ_Height_V_3 - 46
 *     ICM_Object_Prot3_A.OBJ_Height_STD_3 - 47
 *     ICM_Object_Prot3_A.OBJ_Height_STD_V_3 - 48
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Velocity_3 - 49
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Velocity_V_3 - 50
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Velocity_STD_3 - 51
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Vel_STD_V_3 - 52
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Velocity_3 - 53
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Velocity_V_3 - 54
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Velocity_STD_3 - 55
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Vel_STD_V_3 - 56
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Acc_3 - 57
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Acc_V_3 - 58
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Acc_STD_3 - 59
 *     ICM_Object_Prot3_A.OBJ_Abs_Long_Acc_STD_V_3 - 60
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Acc_3 - 61
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Acc_V_3 - 62
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Acc_STD_3 - 63
 *     ICM_Object_Prot3_A.OBJ_Abs_Lat_Acc_STD_V_3 - 64
 *     ICM_Object_Prot3_A.OBJ_Abs_Acceleration_3 - 65
 *     ICM_Object_Prot3_A.OBJ_Abs_Acceleration_V_3 - 66
 *     ICM_Object_Prot3_A.OBJ_Abs_Acc_STD_3 - 67
 *     ICM_Object_Prot3_A.OBJ_Abs_Acc_STD_V_3 - 68
 *     ICM_Object_Prot3_A.OBJ_Inv_TTC_3 - 69
 *     ICM_Object_Prot3_A.OBJ_Inv_TTC_V_3 - 70
 *     ICM_Object_Prot3_A.OBJ_Inv_TTC_STD_3 - 71
 *     ICM_Object_Prot3_A.OBJ_Inv_TTC_STD_V_3 - 72
 *     ICM_Object_Prot3_A.OBJ_Relative_Long_Acc_3 - 73
 *     ICM_Object_Prot3_A.OBJ_Relative_Long_Acc_V_3 - 74
 *     ICM_Object_Prot3_A.OBJ_Relative_Long_Acc_STD_3 - 75
 *     ICM_Object_Prot3_A.OBJ_Rel_Long_Acc_STD_V_3 - 76
 */

/*********
 *  ICM_Object_Prot3_B - 84
 *     ICM_Object_Prot3_B.ICM_Object_Prot3_B_Header - 1
 *     ICM_Object_Prot3_B.OBJ_Relative_Long_Velocity_3 - 2
 *     ICM_Object_Prot3_B.OBJ_Relative_Long_Velocity_V_3 - 3
 *     ICM_Object_Prot3_B.OBJ_Relative_Long_Vel_STD_3 - 4
 *     ICM_Object_Prot3_B.OBJ_Rel_Long_Vel_STD_V_3 - 5
 *     ICM_Object_Prot3_B.OBJ_Relative_Lat_Velocity_3 - 6
 *     ICM_Object_Prot3_B.OBJ_Relative_Lat_Velocity_V_3 - 7
 *     ICM_Object_Prot3_B.OBJ_Relative_Lat_Velocity_STD_3 - 8
 *     ICM_Object_Prot3_B.OBJ_Rel_Lat_Vel_STD_V_3 - 9
 *     ICM_Object_Prot3_B.OBJ_Long_Distance_3 - 10
 *     ICM_Object_Prot3_B.OBJ_Long_Distance_V_3 - 11
 *     ICM_Object_Prot3_B.OBJ_Long_Distance_STD_3 - 12
 *     ICM_Object_Prot3_B.OBJ_Long_Distance_STD_V_3 - 13
 *     ICM_Object_Prot3_B.OBJ_Lat_Distance_3 - 14
 *     ICM_Object_Prot3_B.OBJ_Lat_Distance_V_3 - 15
 *     ICM_Object_Prot3_B.OBJ_Lat_Distance_STD_3 - 16
 *     ICM_Object_Prot3_B.OBJ_Lat_Distance_STD_V_3 - 17
 *     ICM_Object_Prot3_B.OBJ_Absolute_Speed_3 - 18
 *     ICM_Object_Prot3_B.OBJ_Absolute_Speed_V_3 - 19
 *     ICM_Object_Prot3_B.OBJ_Absolute_Speed_STD_3 - 20
 *     ICM_Object_Prot3_B.OBJ_Absolute_Speed_STD_V_3 - 21
 *     ICM_Object_Prot3_B.OBJ_Heading_3 - 22
 *     ICM_Object_Prot3_B.OBJ_Heading_V_3 - 23
 *     ICM_Object_Prot3_B.OBJ_Heading_STD_3 - 24
 *     ICM_Object_Prot3_B.OBJ_Heading_STD_V_3 - 25
 *     ICM_Object_Prot3_B.OBJ_Angle_Rate_STD_3 - 26
 *     ICM_Object_Prot3_B.OBJ_Angle_Rate_STD_V_3 - 27
 *     ICM_Object_Prot3_B.OBJ_Angle_Rate_3 - 28
 *     ICM_Object_Prot3_B.OBJ_Angle_Rate_V_3 - 29
 *     ICM_Object_Prot3_B.OBJ_Angle_Right_3 - 30
 *     ICM_Object_Prot3_B.OBJ_Angle_Right_V_3 - 31
 *     ICM_Object_Prot3_B.OBJ_Angle_Right_STD_3 - 32
 *     ICM_Object_Prot3_B.OBJ_Angle_Right_STD_V_3 - 33
 *     ICM_Object_Prot3_B.OBJ_Angle_Left_3 - 34
 *     ICM_Object_Prot3_B.OBJ_Angle_Left_V_3 - 35
 *     ICM_Object_Prot3_B.OBJ_Angle_Left_STD_3 - 36
 *     ICM_Object_Prot3_B.OBJ_Angle_Left_STD_V_3 - 37
 *     ICM_Object_Prot3_B.OBJ_Angle_Side_3 - 38
 *     ICM_Object_Prot3_B.OBJ_Angle_Side_V_3 - 39
 *     ICM_Object_Prot3_B.OBJ_Angle_Side_STD_3 - 40
 *     ICM_Object_Prot3_B.OBJ_Angle_Side_STD_V_3 - 41
 *     ICM_Object_Prot3_B.OBJ_Angle_Mid_V_3 - 42
 *     ICM_Object_Prot3_B.OBJ_Angle_Mid_3 - 43
 *     ICM_Object_Prot3_B.OBJ_Angle_Mid_STD_3 - 44
 *     ICM_Object_Prot3_B.OBJ_Angle_Mid_STD_V_3 - 45
 *     ICM_Object_Prot3_B.OBJ_Angle_Bottom_V_3 - 46
 *     ICM_Object_Prot3_B.OBJ_Angle_Bottom_3 - 47
 *     ICM_Object_Prot3_B.OBJ_Angle_Bottom_STD_3 - 48
 *     ICM_Object_Prot3_B.OBJ_Angle_Bottom_STD_V_3 - 49
 *     ICM_Object_Prot3_B.OBJ_Visibility_Side_V_3 - 50
 *     ICM_Object_Prot3_B.OBJ_Visibility_Side_3 - 51
 *     ICM_Object_Prot3_B.OBJ_Is_In_Drivable_Area_3 - 52
 *     ICM_Object_Prot3_B.OBJ_Is_In_Drivable_Area_V_3 - 53
 *     ICM_Object_Prot3_B.OBJ_Is_VeryClose_3 - 54
 *     ICM_Object_Prot3_B.OBJ_Is_VeryClose_V_3 - 55
 *     ICM_Object_Prot3_B.OBJ_Buffer_3 - 56
 */

/*********
 *  ICM_Object_Prot4_A - 85
 *     ICM_Object_Prot4_A.ICM_Object_Prot4_A_Header - 1
 *     ICM_Object_Prot4_A.OBJ_CRC_4 - 2
 *     ICM_Object_Prot4_A.OBJ_ID_4 - 3
 *     ICM_Object_Prot4_A.OBJ_Existence_Probability_4 - 4
 *     ICM_Object_Prot4_A.OBJ_Fusion_Source_4 - 5
 *     ICM_Object_Prot4_A.OBJ_Triggered_SDM_4 - 6
 *     ICM_Object_Prot4_A.OBJ_Motion_Category_4 - 7
 *     ICM_Object_Prot4_A.OBJ_Moving_IN_Probability_4 - 8
 *     ICM_Object_Prot4_A.OBJ_Object_Age_4 - 9
 *     ICM_Object_Prot4_A.OBJ_Measuring_Status_4 - 10
 *     ICM_Object_Prot4_A.OBJ_Object_Class_4 - 11
 *     ICM_Object_Prot4_A.OBJ_Class_Probability_4 - 12
 *     ICM_Object_Prot4_A.OBJ_Car_Probability_4 - 13
 *     ICM_Object_Prot4_A.OBJ_Truck_Probability_4 - 14
 *     ICM_Object_Prot4_A.OBJ_Bike_Probability_4 - 15
 *     ICM_Object_Prot4_A.OBJ_Camera_Source_4 - 16
 *     ICM_Object_Prot4_A.OBJ_Motion_Status_4 - 17
 *     ICM_Object_Prot4_A.OBJ_Motion_Orientation_4 - 18
 *     ICM_Object_Prot4_A.OBJ_Has_Cut_Lane_4 - 19
 *     ICM_Object_Prot4_A.OBJ_Has_Cut_Path_4 - 20
 *     ICM_Object_Prot4_A.OBJ_Brake_Light_4 - 21
 *     ICM_Object_Prot4_A.OBJ_Turn_Indicator_Right_4 - 22
 *     ICM_Object_Prot4_A.OBJ_Turn_Indicator_Left_4 - 23
 *     ICM_Object_Prot4_A.OBJ_Light_Indicator_Validity_4 - 24
 *     ICM_Object_Prot4_A.OBJ_Right_Out_Of_Image_4 - 25
 *     ICM_Object_Prot4_A.OBJ_Left_Out_Of_Image_4 - 26
 *     ICM_Object_Prot4_A.OBJ_Right_Out_Of_Image_V_4 - 27
 *     ICM_Object_Prot4_A.OBJ_Left_Out_Of_Image_V_4 - 28
 *     ICM_Object_Prot4_A.OBJ_Top_Out_Of_Image_4 - 29
 *     ICM_Object_Prot4_A.OBJ_Bottom_Out_Of_Image_4 - 30
 *     ICM_Object_Prot4_A.OBJ_Top_Out_Of_Image_V_4 - 31
 *     ICM_Object_Prot4_A.OBJ_Bottom_Out_Of_Image_V_4 - 32
 *     ICM_Object_Prot4_A.OBJ_Lane_Assignment_4 - 33
 *     ICM_Object_Prot4_A.OBJ_Lane_Assignment_V_4 - 34
 *     ICM_Object_Prot4_A.OBJ_Age_Seconds_4 - 35
 *     ICM_Object_Prot4_A.OBJ_Age_Seconds_V_4 - 36
 *     ICM_Object_Prot4_A.OBJ_Width_4 - 37
 *     ICM_Object_Prot4_A.OBJ_Width_V_4 - 38
 *     ICM_Object_Prot4_A.OBJ_Width_STD_4 - 39
 *     ICM_Object_Prot4_A.OBJ_Width_STD_V_4 - 40
 *     ICM_Object_Prot4_A.OBJ_Length_4 - 41
 *     ICM_Object_Prot4_A.OBJ_Length_V_4 - 42
 *     ICM_Object_Prot4_A.OBJ_Length_STD_4 - 43
 *     ICM_Object_Prot4_A.OBJ_Length_STD_V_4 - 44
 *     ICM_Object_Prot4_A.OBJ_Height_4 - 45
 *     ICM_Object_Prot4_A.OBJ_Height_V_4 - 46
 *     ICM_Object_Prot4_A.OBJ_Height_STD_4 - 47
 *     ICM_Object_Prot4_A.OBJ_Height_STD_V_4 - 48
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Velocity_4 - 49
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Velocity_V_4 - 50
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Velocity_STD_4 - 51
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Vel_STD_V_4 - 52
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Velocity_4 - 53
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Velocity_V_4 - 54
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Velocity_STD_4 - 55
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Vel_STD_V_4 - 56
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Acc_4 - 57
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Acc_V_4 - 58
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Acc_STD_4 - 59
 *     ICM_Object_Prot4_A.OBJ_Abs_Long_Acc_STD_V_4 - 60
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Acc_4 - 61
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Acc_V_4 - 62
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Acc_STD_4 - 63
 *     ICM_Object_Prot4_A.OBJ_Abs_Lat_Acc_STD_V_4 - 64
 *     ICM_Object_Prot4_A.OBJ_Abs_Acceleration_4 - 65
 *     ICM_Object_Prot4_A.OBJ_Abs_Acceleration_V_4 - 66
 *     ICM_Object_Prot4_A.OBJ_Abs_Acc_STD_4 - 67
 *     ICM_Object_Prot4_A.OBJ_Abs_Acc_STD_V_4 - 68
 *     ICM_Object_Prot4_A.OBJ_Inv_TTC_4 - 69
 *     ICM_Object_Prot4_A.OBJ_Inv_TTC_V_4 - 70
 *     ICM_Object_Prot4_A.OBJ_Inv_TTC_STD_4 - 71
 *     ICM_Object_Prot4_A.OBJ_Inv_TTC_STD_V_4 - 72
 *     ICM_Object_Prot4_A.OBJ_Relative_Long_Acc_4 - 73
 *     ICM_Object_Prot4_A.OBJ_Relative_Long_Acc_V_4 - 74
 *     ICM_Object_Prot4_A.OBJ_Relative_Long_Acc_STD_4 - 75
 *     ICM_Object_Prot4_A.OBJ_Rel_Long_Acc_STD_V_4 - 76
 */

/*********
 *  ICM_Object_Prot4_B - 86
 *     ICM_Object_Prot4_B.ICM_Object_Prot4_B_Header - 1
 *     ICM_Object_Prot4_B.OBJ_Relative_Long_Velocity_4 - 2
 *     ICM_Object_Prot4_B.OBJ_Relative_Long_Velocity_V_4 - 3
 *     ICM_Object_Prot4_B.OBJ_Relative_Long_Vel_STD_4 - 4
 *     ICM_Object_Prot4_B.OBJ_Rel_Long_Vel_STD_V_4 - 5
 *     ICM_Object_Prot4_B.OBJ_Relative_Lat_Velocity_4 - 6
 *     ICM_Object_Prot4_B.OBJ_Relative_Lat_Velocity_V_4 - 7
 *     ICM_Object_Prot4_B.OBJ_Relative_Lat_Velocity_STD_4 - 8
 *     ICM_Object_Prot4_B.OBJ_Rel_Lat_Vel_STD_V_4 - 9
 *     ICM_Object_Prot4_B.OBJ_Long_Distance_4 - 10
 *     ICM_Object_Prot4_B.OBJ_Long_Distance_V_4 - 11
 *     ICM_Object_Prot4_B.OBJ_Long_Distance_STD_4 - 12
 *     ICM_Object_Prot4_B.OBJ_Long_Distance_STD_V_4 - 13
 *     ICM_Object_Prot4_B.OBJ_Lat_Distance_4 - 14
 *     ICM_Object_Prot4_B.OBJ_Lat_Distance_V_4 - 15
 *     ICM_Object_Prot4_B.OBJ_Lat_Distance_STD_4 - 16
 *     ICM_Object_Prot4_B.OBJ_Lat_Distance_STD_V_4 - 17
 *     ICM_Object_Prot4_B.OBJ_Absolute_Speed_4 - 18
 *     ICM_Object_Prot4_B.OBJ_Absolute_Speed_V_4 - 19
 *     ICM_Object_Prot4_B.OBJ_Absolute_Speed_STD_4 - 20
 *     ICM_Object_Prot4_B.OBJ_Absolute_Speed_STD_V_4 - 21
 *     ICM_Object_Prot4_B.OBJ_Heading_4 - 22
 *     ICM_Object_Prot4_B.OBJ_Heading_V_4 - 23
 *     ICM_Object_Prot4_B.OBJ_Heading_STD_4 - 24
 *     ICM_Object_Prot4_B.OBJ_Heading_STD_V_4 - 25
 *     ICM_Object_Prot4_B.OBJ_Angle_Rate_STD_4 - 26
 *     ICM_Object_Prot4_B.OBJ_Angle_Rate_STD_V_4 - 27
 *     ICM_Object_Prot4_B.OBJ_Angle_Rate_4 - 28
 *     ICM_Object_Prot4_B.OBJ_Angle_Rate_V_4 - 29
 *     ICM_Object_Prot4_B.OBJ_Angle_Right_4 - 30
 *     ICM_Object_Prot4_B.OBJ_Angle_Right_V_4 - 31
 *     ICM_Object_Prot4_B.OBJ_Angle_Right_STD_4 - 32
 *     ICM_Object_Prot4_B.OBJ_Angle_Right_STD_V_4 - 33
 *     ICM_Object_Prot4_B.OBJ_Angle_Left_4 - 34
 *     ICM_Object_Prot4_B.OBJ_Angle_Left_V_4 - 35
 *     ICM_Object_Prot4_B.OBJ_Angle_Left_STD_4 - 36
 *     ICM_Object_Prot4_B.OBJ_Angle_Left_STD_V_4 - 37
 *     ICM_Object_Prot4_B.OBJ_Angle_Side_4 - 38
 *     ICM_Object_Prot4_B.OBJ_Angle_Side_V_4 - 39
 *     ICM_Object_Prot4_B.OBJ_Angle_Side_STD_4 - 40
 *     ICM_Object_Prot4_B.OBJ_Angle_Side_STD_V_4 - 41
 *     ICM_Object_Prot4_B.OBJ_Angle_Mid_V_4 - 42
 *     ICM_Object_Prot4_B.OBJ_Angle_Mid_4 - 43
 *     ICM_Object_Prot4_B.OBJ_Angle_Mid_STD_4 - 44
 *     ICM_Object_Prot4_B.OBJ_Angle_Mid_STD_V_4 - 45
 *     ICM_Object_Prot4_B.OBJ_Angle_Bottom_V_4 - 46
 *     ICM_Object_Prot4_B.OBJ_Angle_Bottom_4 - 47
 *     ICM_Object_Prot4_B.OBJ_Angle_Bottom_STD_4 - 48
 *     ICM_Object_Prot4_B.OBJ_Angle_Bottom_STD_V_4 - 49
 *     ICM_Object_Prot4_B.OBJ_Visibility_Side_V_4 - 50
 *     ICM_Object_Prot4_B.OBJ_Visibility_Side_4 - 51
 *     ICM_Object_Prot4_B.OBJ_Is_In_Drivable_Area_4 - 52
 *     ICM_Object_Prot4_B.OBJ_Is_In_Drivable_Area_V_4 - 53
 *     ICM_Object_Prot4_B.OBJ_Is_VeryClose_4 - 54
 *     ICM_Object_Prot4_B.OBJ_Is_VeryClose_V_4 - 55
 *     ICM_Object_Prot4_B.OBJ_Buffer_4 - 56
 */

/*********
 *  ICM_Object_Prot5_A - 87
 *     ICM_Object_Prot5_A.ICM_Object_Prot5_A_Header - 1
 *     ICM_Object_Prot5_A.OBJ_CRC_5 - 2
 *     ICM_Object_Prot5_A.OBJ_ID_5 - 3
 *     ICM_Object_Prot5_A.OBJ_Existence_Probability_5 - 4
 *     ICM_Object_Prot5_A.OBJ_Fusion_Source_5 - 5
 *     ICM_Object_Prot5_A.OBJ_Triggered_SDM_5 - 6
 *     ICM_Object_Prot5_A.OBJ_Motion_Category_5 - 7
 *     ICM_Object_Prot5_A.OBJ_Moving_IN_Probability_5 - 8
 *     ICM_Object_Prot5_A.OBJ_Object_Age_5 - 9
 *     ICM_Object_Prot5_A.OBJ_Measuring_Status_5 - 10
 *     ICM_Object_Prot5_A.OBJ_Object_Class_5 - 11
 *     ICM_Object_Prot5_A.OBJ_Class_Probability_5 - 12
 *     ICM_Object_Prot5_A.OBJ_Car_Probability_5 - 13
 *     ICM_Object_Prot5_A.OBJ_Truck_Probability_5 - 14
 *     ICM_Object_Prot5_A.OBJ_Bike_Probability_5 - 15
 *     ICM_Object_Prot5_A.OBJ_Camera_Source_5 - 16
 *     ICM_Object_Prot5_A.OBJ_Motion_Status_5 - 17
 *     ICM_Object_Prot5_A.OBJ_Motion_Orientation_5 - 18
 *     ICM_Object_Prot5_A.OBJ_Has_Cut_Lane_5 - 19
 *     ICM_Object_Prot5_A.OBJ_Has_Cut_Path_5 - 20
 *     ICM_Object_Prot5_A.OBJ_Brake_Light_5 - 21
 *     ICM_Object_Prot5_A.OBJ_Turn_Indicator_Right_5 - 22
 *     ICM_Object_Prot5_A.OBJ_Turn_Indicator_Left_5 - 23
 *     ICM_Object_Prot5_A.OBJ_Light_Indicator_Validity_5 - 24
 *     ICM_Object_Prot5_A.OBJ_Right_Out_Of_Image_5 - 25
 *     ICM_Object_Prot5_A.OBJ_Left_Out_Of_Image_5 - 26
 *     ICM_Object_Prot5_A.OBJ_Right_Out_Of_Image_V_5 - 27
 *     ICM_Object_Prot5_A.OBJ_Left_Out_Of_Image_V_5 - 28
 *     ICM_Object_Prot5_A.OBJ_Top_Out_Of_Image_5 - 29
 *     ICM_Object_Prot5_A.OBJ_Bottom_Out_Of_Image_5 - 30
 *     ICM_Object_Prot5_A.OBJ_Top_Out_Of_Image_V_5 - 31
 *     ICM_Object_Prot5_A.OBJ_Bottom_Out_Of_Image_V_5 - 32
 *     ICM_Object_Prot5_A.OBJ_Lane_Assignment_5 - 33
 *     ICM_Object_Prot5_A.OBJ_Lane_Assignment_V_5 - 34
 *     ICM_Object_Prot5_A.OBJ_Age_Seconds_5 - 35
 *     ICM_Object_Prot5_A.OBJ_Age_Seconds_V_5 - 36
 *     ICM_Object_Prot5_A.OBJ_Width_5 - 37
 *     ICM_Object_Prot5_A.OBJ_Width_V_5 - 38
 *     ICM_Object_Prot5_A.OBJ_Width_STD_5 - 39
 *     ICM_Object_Prot5_A.OBJ_Width_STD_V_5 - 40
 *     ICM_Object_Prot5_A.OBJ_Length_5 - 41
 *     ICM_Object_Prot5_A.OBJ_Length_V_5 - 42
 *     ICM_Object_Prot5_A.OBJ_Length_STD_5 - 43
 *     ICM_Object_Prot5_A.OBJ_Length_STD_V_5 - 44
 *     ICM_Object_Prot5_A.OBJ_Height_5 - 45
 *     ICM_Object_Prot5_A.OBJ_Height_V_5 - 46
 *     ICM_Object_Prot5_A.OBJ_Height_STD_5 - 47
 *     ICM_Object_Prot5_A.OBJ_Height_STD_V_5 - 48
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Velocity_5 - 49
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Velocity_V_5 - 50
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Velocity_STD_5 - 51
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Vel_STD_V_5 - 52
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Velocity_5 - 53
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Velocity_V_5 - 54
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Velocity_STD_5 - 55
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Vel_STD_V_5 - 56
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Acc_5 - 57
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Acc_V_5 - 58
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Acc_STD_5 - 59
 *     ICM_Object_Prot5_A.OBJ_Abs_Long_Acc_STD_V_5 - 60
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Acc_5 - 61
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Acc_V_5 - 62
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Acc_STD_5 - 63
 *     ICM_Object_Prot5_A.OBJ_Abs_Lat_Acc_STD_V_5 - 64
 *     ICM_Object_Prot5_A.OBJ_Abs_Acceleration_5 - 65
 *     ICM_Object_Prot5_A.OBJ_Abs_Acceleration_V_5 - 66
 *     ICM_Object_Prot5_A.OBJ_Abs_Acc_STD_5 - 67
 *     ICM_Object_Prot5_A.OBJ_Abs_Acc_STD_V_5 - 68
 *     ICM_Object_Prot5_A.OBJ_Inv_TTC_5 - 69
 *     ICM_Object_Prot5_A.OBJ_Inv_TTC_V_5 - 70
 *     ICM_Object_Prot5_A.OBJ_Inv_TTC_STD_5 - 71
 *     ICM_Object_Prot5_A.OBJ_Inv_TTC_STD_V_5 - 72
 *     ICM_Object_Prot5_A.OBJ_Relative_Long_Acc_5 - 73
 *     ICM_Object_Prot5_A.OBJ_Relative_Long_Acc_V_5 - 74
 *     ICM_Object_Prot5_A.OBJ_Relative_Long_Acc_STD_5 - 75
 *     ICM_Object_Prot5_A.OBJ_Rel_Long_Acc_STD_V_5 - 76
 */

/*********
 *  ICM_Object_Prot5_B - 88
 *     ICM_Object_Prot5_B.ICM_Object_Prot5_B_Header - 1
 *     ICM_Object_Prot5_B.OBJ_Relative_Long_Velocity_5 - 2
 *     ICM_Object_Prot5_B.OBJ_Relative_Long_Velocity_V_5 - 3
 *     ICM_Object_Prot5_B.OBJ_Relative_Long_Vel_STD_5 - 4
 *     ICM_Object_Prot5_B.OBJ_Rel_Long_Vel_STD_V_5 - 5
 *     ICM_Object_Prot5_B.OBJ_Relative_Lat_Velocity_5 - 6
 *     ICM_Object_Prot5_B.OBJ_Relative_Lat_Velocity_V_5 - 7
 *     ICM_Object_Prot5_B.OBJ_Relative_Lat_Velocity_STD_5 - 8
 *     ICM_Object_Prot5_B.OBJ_Rel_Lat_Vel_STD_V_5 - 9
 *     ICM_Object_Prot5_B.OBJ_Long_Distance_5 - 10
 *     ICM_Object_Prot5_B.OBJ_Long_Distance_V_5 - 11
 *     ICM_Object_Prot5_B.OBJ_Long_Distance_STD_5 - 12
 *     ICM_Object_Prot5_B.OBJ_Long_Distance_STD_V_5 - 13
 *     ICM_Object_Prot5_B.OBJ_Lat_Distance_5 - 14
 *     ICM_Object_Prot5_B.OBJ_Lat_Distance_V_5 - 15
 *     ICM_Object_Prot5_B.OBJ_Lat_Distance_STD_5 - 16
 *     ICM_Object_Prot5_B.OBJ_Lat_Distance_STD_V_5 - 17
 *     ICM_Object_Prot5_B.OBJ_Absolute_Speed_5 - 18
 *     ICM_Object_Prot5_B.OBJ_Absolute_Speed_V_5 - 19
 *     ICM_Object_Prot5_B.OBJ_Absolute_Speed_STD_5 - 20
 *     ICM_Object_Prot5_B.OBJ_Absolute_Speed_STD_V_5 - 21
 *     ICM_Object_Prot5_B.OBJ_Heading_5 - 22
 *     ICM_Object_Prot5_B.OBJ_Heading_V_5 - 23
 *     ICM_Object_Prot5_B.OBJ_Heading_STD_5 - 24
 *     ICM_Object_Prot5_B.OBJ_Heading_STD_V_5 - 25
 *     ICM_Object_Prot5_B.OBJ_Angle_Rate_STD_5 - 26
 *     ICM_Object_Prot5_B.OBJ_Angle_Rate_STD_V_5 - 27
 *     ICM_Object_Prot5_B.OBJ_Angle_Rate_5 - 28
 *     ICM_Object_Prot5_B.OBJ_Angle_Rate_V_5 - 29
 *     ICM_Object_Prot5_B.OBJ_Angle_Right_5 - 30
 *     ICM_Object_Prot5_B.OBJ_Angle_Right_V_5 - 31
 *     ICM_Object_Prot5_B.OBJ_Angle_Right_STD_5 - 32
 *     ICM_Object_Prot5_B.OBJ_Angle_Right_STD_V_5 - 33
 *     ICM_Object_Prot5_B.OBJ_Angle_Left_5 - 34
 *     ICM_Object_Prot5_B.OBJ_Angle_Left_V_5 - 35
 *     ICM_Object_Prot5_B.OBJ_Angle_Left_STD_5 - 36
 *     ICM_Object_Prot5_B.OBJ_Angle_Left_STD_V_5 - 37
 *     ICM_Object_Prot5_B.OBJ_Angle_Side_5 - 38
 *     ICM_Object_Prot5_B.OBJ_Angle_Side_V_5 - 39
 *     ICM_Object_Prot5_B.OBJ_Angle_Side_STD_5 - 40
 *     ICM_Object_Prot5_B.OBJ_Angle_Side_STD_V_5 - 41
 *     ICM_Object_Prot5_B.OBJ_Angle_Mid_V_5 - 42
 *     ICM_Object_Prot5_B.OBJ_Angle_Mid_5 - 43
 *     ICM_Object_Prot5_B.OBJ_Angle_Mid_STD_5 - 44
 *     ICM_Object_Prot5_B.OBJ_Angle_Mid_STD_V_5 - 45
 *     ICM_Object_Prot5_B.OBJ_Angle_Bottom_V_5 - 46
 *     ICM_Object_Prot5_B.OBJ_Angle_Bottom_5 - 47
 *     ICM_Object_Prot5_B.OBJ_Angle_Bottom_STD_5 - 48
 *     ICM_Object_Prot5_B.OBJ_Angle_Bottom_STD_V_5 - 49
 *     ICM_Object_Prot5_B.OBJ_Visibility_Side_V_5 - 50
 *     ICM_Object_Prot5_B.OBJ_Visibility_Side_5 - 51
 *     ICM_Object_Prot5_B.OBJ_Is_In_Drivable_Area_5 - 52
 *     ICM_Object_Prot5_B.OBJ_Is_In_Drivable_Area_V_5 - 53
 *     ICM_Object_Prot5_B.OBJ_Is_VeryClose_5 - 54
 *     ICM_Object_Prot5_B.OBJ_Is_VeryClose_V_5 - 55
 *     ICM_Object_Prot5_B.OBJ_Buffer_5 - 56
 */

/*********
 *  ICM_Object_Prot6_A - 89
 *     ICM_Object_Prot6_A.ICM_Object_Prot6_A_Header - 1
 *     ICM_Object_Prot6_A.OBJ_CRC_6 - 2
 *     ICM_Object_Prot6_A.OBJ_ID_6 - 3
 *     ICM_Object_Prot6_A.OBJ_Existence_Probability_6 - 4
 *     ICM_Object_Prot6_A.OBJ_Fusion_Source_6 - 5
 *     ICM_Object_Prot6_A.OBJ_Triggered_SDM_6 - 6
 *     ICM_Object_Prot6_A.OBJ_Motion_Category_6 - 7
 *     ICM_Object_Prot6_A.OBJ_Moving_IN_Probability_6 - 8
 *     ICM_Object_Prot6_A.OBJ_Object_Age_6 - 9
 *     ICM_Object_Prot6_A.OBJ_Measuring_Status_6 - 10
 *     ICM_Object_Prot6_A.OBJ_Object_Class_6 - 11
 *     ICM_Object_Prot6_A.OBJ_Class_Probability_6 - 12
 *     ICM_Object_Prot6_A.OBJ_Car_Probability_6 - 13
 *     ICM_Object_Prot6_A.OBJ_Truck_Probability_6 - 14
 *     ICM_Object_Prot6_A.OBJ_Bike_Probability_6 - 15
 *     ICM_Object_Prot6_A.OBJ_Camera_Source_6 - 16
 *     ICM_Object_Prot6_A.OBJ_Motion_Status_6 - 17
 *     ICM_Object_Prot6_A.OBJ_Motion_Orientation_6 - 18
 *     ICM_Object_Prot6_A.OBJ_Has_Cut_Lane_6 - 19
 *     ICM_Object_Prot6_A.OBJ_Has_Cut_Path_6 - 20
 *     ICM_Object_Prot6_A.OBJ_Brake_Light_6 - 21
 *     ICM_Object_Prot6_A.OBJ_Turn_Indicator_Right_6 - 22
 *     ICM_Object_Prot6_A.OBJ_Turn_Indicator_Left_6 - 23
 *     ICM_Object_Prot6_A.OBJ_Light_Indicator_Validity_6 - 24
 *     ICM_Object_Prot6_A.OBJ_Right_Out_Of_Image_6 - 25
 *     ICM_Object_Prot6_A.OBJ_Left_Out_Of_Image_6 - 26
 *     ICM_Object_Prot6_A.OBJ_Right_Out_Of_Image_V_6 - 27
 *     ICM_Object_Prot6_A.OBJ_Left_Out_Of_Image_V_6 - 28
 *     ICM_Object_Prot6_A.OBJ_Top_Out_Of_Image_6 - 29
 *     ICM_Object_Prot6_A.OBJ_Bottom_Out_Of_Image_6 - 30
 *     ICM_Object_Prot6_A.OBJ_Top_Out_Of_Image_V_6 - 31
 *     ICM_Object_Prot6_A.OBJ_Bottom_Out_Of_Image_V_6 - 32
 *     ICM_Object_Prot6_A.OBJ_Lane_Assignment_6 - 33
 *     ICM_Object_Prot6_A.OBJ_Lane_Assignment_V_6 - 34
 *     ICM_Object_Prot6_A.OBJ_Age_Seconds_6 - 35
 *     ICM_Object_Prot6_A.OBJ_Age_Seconds_V_6 - 36
 *     ICM_Object_Prot6_A.OBJ_Width_6 - 37
 *     ICM_Object_Prot6_A.OBJ_Width_V_6 - 38
 *     ICM_Object_Prot6_A.OBJ_Width_STD_6 - 39
 *     ICM_Object_Prot6_A.OBJ_Width_STD_V_6 - 40
 *     ICM_Object_Prot6_A.OBJ_Length_6 - 41
 *     ICM_Object_Prot6_A.OBJ_Length_V_6 - 42
 *     ICM_Object_Prot6_A.OBJ_Length_STD_6 - 43
 *     ICM_Object_Prot6_A.OBJ_Length_STD_V_6 - 44
 *     ICM_Object_Prot6_A.OBJ_Height_6 - 45
 *     ICM_Object_Prot6_A.OBJ_Height_V_6 - 46
 *     ICM_Object_Prot6_A.OBJ_Height_STD_6 - 47
 *     ICM_Object_Prot6_A.OBJ_Height_STD_V_6 - 48
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Velocity_6 - 49
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Velocity_V_6 - 50
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Velocity_STD_6 - 51
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Vel_STD_V_6 - 52
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Velocity_6 - 53
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Velocity_V_6 - 54
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Velocity_STD_6 - 55
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Vel_STD_V_6 - 56
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Acc_6 - 57
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Acc_V_6 - 58
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Acc_STD_6 - 59
 *     ICM_Object_Prot6_A.OBJ_Abs_Long_Acc_STD_V_6 - 60
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Acc_6 - 61
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Acc_V_6 - 62
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Acc_STD_6 - 63
 *     ICM_Object_Prot6_A.OBJ_Abs_Lat_Acc_STD_V_6 - 64
 *     ICM_Object_Prot6_A.OBJ_Abs_Acceleration_6 - 65
 *     ICM_Object_Prot6_A.OBJ_Abs_Acceleration_V_6 - 66
 *     ICM_Object_Prot6_A.OBJ_Abs_Acc_STD_6 - 67
 *     ICM_Object_Prot6_A.OBJ_Abs_Acc_STD_V_6 - 68
 *     ICM_Object_Prot6_A.OBJ_Inv_TTC_6 - 69
 *     ICM_Object_Prot6_A.OBJ_Inv_TTC_V_6 - 70
 *     ICM_Object_Prot6_A.OBJ_Inv_TTC_STD_6 - 71
 *     ICM_Object_Prot6_A.OBJ_Inv_TTC_STD_V_6 - 72
 *     ICM_Object_Prot6_A.OBJ_Relative_Long_Acc_6 - 73
 *     ICM_Object_Prot6_A.OBJ_Relative_Long_Acc_V_6 - 74
 *     ICM_Object_Prot6_A.OBJ_Relative_Long_Acc_STD_6 - 75
 *     ICM_Object_Prot6_A.OBJ_Rel_Long_Acc_STD_V_6 - 76
 */

/*********
 *  ICM_Object_Prot6_B - 90
 *     ICM_Object_Prot6_B.ICM_Object_Prot6_B_Header - 1
 *     ICM_Object_Prot6_B.OBJ_Relative_Long_Velocity_6 - 2
 *     ICM_Object_Prot6_B.OBJ_Relative_Long_Velocity_V_6 - 3
 *     ICM_Object_Prot6_B.OBJ_Relative_Long_Vel_STD_6 - 4
 *     ICM_Object_Prot6_B.OBJ_Rel_Long_Vel_STD_V_6 - 5
 *     ICM_Object_Prot6_B.OBJ_Relative_Lat_Velocity_6 - 6
 *     ICM_Object_Prot6_B.OBJ_Relative_Lat_Velocity_V_6 - 7
 *     ICM_Object_Prot6_B.OBJ_Relative_Lat_Velocity_STD_6 - 8
 *     ICM_Object_Prot6_B.OBJ_Rel_Lat_Vel_STD_V_6 - 9
 *     ICM_Object_Prot6_B.OBJ_Long_Distance_6 - 10
 *     ICM_Object_Prot6_B.OBJ_Long_Distance_V_6 - 11
 *     ICM_Object_Prot6_B.OBJ_Long_Distance_STD_6 - 12
 *     ICM_Object_Prot6_B.OBJ_Long_Distance_STD_V_6 - 13
 *     ICM_Object_Prot6_B.OBJ_Lat_Distance_6 - 14
 *     ICM_Object_Prot6_B.OBJ_Lat_Distance_V_6 - 15
 *     ICM_Object_Prot6_B.OBJ_Lat_Distance_STD_6 - 16
 *     ICM_Object_Prot6_B.OBJ_Lat_Distance_STD_V_6 - 17
 *     ICM_Object_Prot6_B.OBJ_Absolute_Speed_6 - 18
 *     ICM_Object_Prot6_B.OBJ_Absolute_Speed_V_6 - 19
 *     ICM_Object_Prot6_B.OBJ_Absolute_Speed_STD_6 - 20
 *     ICM_Object_Prot6_B.OBJ_Absolute_Speed_STD_V_6 - 21
 *     ICM_Object_Prot6_B.OBJ_Heading_6 - 22
 *     ICM_Object_Prot6_B.OBJ_Heading_V_6 - 23
 *     ICM_Object_Prot6_B.OBJ_Heading_STD_6 - 24
 *     ICM_Object_Prot6_B.OBJ_Heading_STD_V_6 - 25
 *     ICM_Object_Prot6_B.OBJ_Angle_Rate_STD_6 - 26
 *     ICM_Object_Prot6_B.OBJ_Angle_Rate_STD_V_6 - 27
 *     ICM_Object_Prot6_B.OBJ_Angle_Rate_6 - 28
 *     ICM_Object_Prot6_B.OBJ_Angle_Rate_V_6 - 29
 *     ICM_Object_Prot6_B.OBJ_Angle_Right_6 - 30
 *     ICM_Object_Prot6_B.OBJ_Angle_Right_V_6 - 31
 *     ICM_Object_Prot6_B.OBJ_Angle_Right_STD_6 - 32
 *     ICM_Object_Prot6_B.OBJ_Angle_Right_STD_V_6 - 33
 *     ICM_Object_Prot6_B.OBJ_Angle_Left_6 - 34
 *     ICM_Object_Prot6_B.OBJ_Angle_Left_V_6 - 35
 *     ICM_Object_Prot6_B.OBJ_Angle_Left_STD_6 - 36
 *     ICM_Object_Prot6_B.OBJ_Angle_Left_STD_V_6 - 37
 *     ICM_Object_Prot6_B.OBJ_Angle_Side_6 - 38
 *     ICM_Object_Prot6_B.OBJ_Angle_Side_V_6 - 39
 *     ICM_Object_Prot6_B.OBJ_Angle_Side_STD_6 - 40
 *     ICM_Object_Prot6_B.OBJ_Angle_Side_STD_V_6 - 41
 *     ICM_Object_Prot6_B.OBJ_Angle_Mid_V_6 - 42
 *     ICM_Object_Prot6_B.OBJ_Angle_Mid_6 - 43
 *     ICM_Object_Prot6_B.OBJ_Angle_Mid_STD_6 - 44
 *     ICM_Object_Prot6_B.OBJ_Angle_Mid_STD_V_6 - 45
 *     ICM_Object_Prot6_B.OBJ_Angle_Bottom_V_6 - 46
 *     ICM_Object_Prot6_B.OBJ_Angle_Bottom_6 - 47
 *     ICM_Object_Prot6_B.OBJ_Angle_Bottom_STD_6 - 48
 *     ICM_Object_Prot6_B.OBJ_Angle_Bottom_STD_V_6 - 49
 *     ICM_Object_Prot6_B.OBJ_Visibility_Side_V_6 - 50
 *     ICM_Object_Prot6_B.OBJ_Visibility_Side_6 - 51
 *     ICM_Object_Prot6_B.OBJ_Is_In_Drivable_Area_6 - 52
 *     ICM_Object_Prot6_B.OBJ_Is_In_Drivable_Area_V_6 - 53
 *     ICM_Object_Prot6_B.OBJ_Is_VeryClose_6 - 54
 *     ICM_Object_Prot6_B.OBJ_Is_VeryClose_V_6 - 55
 *     ICM_Object_Prot6_B.OBJ_Buffer_6 - 56
 */

/*********
 *  ICM_Object_Prot7_A - 91
 *     ICM_Object_Prot7_A.ICM_Object_Prot7_A_Header - 1
 *     ICM_Object_Prot7_A.OBJ_CRC_7 - 2
 *     ICM_Object_Prot7_A.OBJ_ID_7 - 3
 *     ICM_Object_Prot7_A.OBJ_Existence_Probability_7 - 4
 *     ICM_Object_Prot7_A.OBJ_Fusion_Source_7 - 5
 *     ICM_Object_Prot7_A.OBJ_Triggered_SDM_7 - 6
 *     ICM_Object_Prot7_A.OBJ_Motion_Category_7 - 7
 *     ICM_Object_Prot7_A.OBJ_Moving_IN_Probability_7 - 8
 *     ICM_Object_Prot7_A.OBJ_Object_Age_7 - 9
 *     ICM_Object_Prot7_A.OBJ_Measuring_Status_7 - 10
 *     ICM_Object_Prot7_A.OBJ_Object_Class_7 - 11
 *     ICM_Object_Prot7_A.OBJ_Class_Probability_7 - 12
 *     ICM_Object_Prot7_A.OBJ_Car_Probability_7 - 13
 *     ICM_Object_Prot7_A.OBJ_Truck_Probability_7 - 14
 *     ICM_Object_Prot7_A.OBJ_Bike_Probability_7 - 15
 *     ICM_Object_Prot7_A.OBJ_Camera_Source_7 - 16
 *     ICM_Object_Prot7_A.OBJ_Motion_Status_7 - 17
 *     ICM_Object_Prot7_A.OBJ_Motion_Orientation_7 - 18
 *     ICM_Object_Prot7_A.OBJ_Has_Cut_Lane_7 - 19
 *     ICM_Object_Prot7_A.OBJ_Has_Cut_Path_7 - 20
 *     ICM_Object_Prot7_A.OBJ_Brake_Light_7 - 21
 *     ICM_Object_Prot7_A.OBJ_Turn_Indicator_Right_7 - 22
 *     ICM_Object_Prot7_A.OBJ_Turn_Indicator_Left_7 - 23
 *     ICM_Object_Prot7_A.OBJ_Light_Indicator_Validity_7 - 24
 *     ICM_Object_Prot7_A.OBJ_Right_Out_Of_Image_7 - 25
 *     ICM_Object_Prot7_A.OBJ_Left_Out_Of_Image_7 - 26
 *     ICM_Object_Prot7_A.OBJ_Right_Out_Of_Image_V_7 - 27
 *     ICM_Object_Prot7_A.OBJ_Left_Out_Of_Image_V_7 - 28
 *     ICM_Object_Prot7_A.OBJ_Top_Out_Of_Image_7 - 29
 *     ICM_Object_Prot7_A.OBJ_Bottom_Out_Of_Image_7 - 30
 *     ICM_Object_Prot7_A.OBJ_Top_Out_Of_Image_V_7 - 31
 *     ICM_Object_Prot7_A.OBJ_Bottom_Out_Of_Image_V_7 - 32
 *     ICM_Object_Prot7_A.OBJ_Lane_Assignment_7 - 33
 *     ICM_Object_Prot7_A.OBJ_Lane_Assignment_V_7 - 34
 *     ICM_Object_Prot7_A.OBJ_Age_Seconds_7 - 35
 *     ICM_Object_Prot7_A.OBJ_Age_Seconds_V_7 - 36
 *     ICM_Object_Prot7_A.OBJ_Width_7 - 37
 *     ICM_Object_Prot7_A.OBJ_Width_V_7 - 38
 *     ICM_Object_Prot7_A.OBJ_Width_STD_7 - 39
 *     ICM_Object_Prot7_A.OBJ_Width_STD_V_7 - 40
 *     ICM_Object_Prot7_A.OBJ_Length_7 - 41
 *     ICM_Object_Prot7_A.OBJ_Length_V_7 - 42
 *     ICM_Object_Prot7_A.OBJ_Length_STD_7 - 43
 *     ICM_Object_Prot7_A.OBJ_Length_STD_V_7 - 44
 *     ICM_Object_Prot7_A.OBJ_Height_7 - 45
 *     ICM_Object_Prot7_A.OBJ_Height_V_7 - 46
 *     ICM_Object_Prot7_A.OBJ_Height_STD_7 - 47
 *     ICM_Object_Prot7_A.OBJ_Height_STD_V_7 - 48
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Velocity_7 - 49
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Velocity_V_7 - 50
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Velocity_STD_7 - 51
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Vel_STD_V_7 - 52
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Velocity_7 - 53
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Velocity_V_7 - 54
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Velocity_STD_7 - 55
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Vel_STD_V_7 - 56
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Acc_7 - 57
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Acc_V_7 - 58
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Acc_STD_7 - 59
 *     ICM_Object_Prot7_A.OBJ_Abs_Long_Acc_STD_V_7 - 60
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Acc_7 - 61
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Acc_V_7 - 62
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Acc_STD_7 - 63
 *     ICM_Object_Prot7_A.OBJ_Abs_Lat_Acc_STD_V_7 - 64
 *     ICM_Object_Prot7_A.OBJ_Abs_Acceleration_7 - 65
 *     ICM_Object_Prot7_A.OBJ_Abs_Acceleration_V_7 - 66
 *     ICM_Object_Prot7_A.OBJ_Abs_Acc_STD_7 - 67
 *     ICM_Object_Prot7_A.OBJ_Abs_Acc_STD_V_7 - 68
 *     ICM_Object_Prot7_A.OBJ_Inv_TTC_7 - 69
 *     ICM_Object_Prot7_A.OBJ_Inv_TTC_V_7 - 70
 *     ICM_Object_Prot7_A.OBJ_Inv_TTC_STD_7 - 71
 *     ICM_Object_Prot7_A.OBJ_Inv_TTC_STD_V_7 - 72
 *     ICM_Object_Prot7_A.OBJ_Relative_Long_Acc_7 - 73
 *     ICM_Object_Prot7_A.OBJ_Relative_Long_Acc_V_7 - 74
 *     ICM_Object_Prot7_A.OBJ_Relative_Long_Acc_STD_7 - 75
 *     ICM_Object_Prot7_A.OBJ_Rel_Long_Acc_STD_V_7 - 76
 */

/*********
 *  ICM_Object_Prot7_B - 92
 *     ICM_Object_Prot7_B.ICM_Object_Prot7_B_Header - 1
 *     ICM_Object_Prot7_B.OBJ_Relative_Long_Velocity_7 - 2
 *     ICM_Object_Prot7_B.OBJ_Relative_Long_Velocity_V_7 - 3
 *     ICM_Object_Prot7_B.OBJ_Relative_Long_Vel_STD_7 - 4
 *     ICM_Object_Prot7_B.OBJ_Rel_Long_Vel_STD_V_7 - 5
 *     ICM_Object_Prot7_B.OBJ_Relative_Lat_Velocity_7 - 6
 *     ICM_Object_Prot7_B.OBJ_Relative_Lat_Velocity_V_7 - 7
 *     ICM_Object_Prot7_B.OBJ_Relative_Lat_Velocity_STD_7 - 8
 *     ICM_Object_Prot7_B.OBJ_Rel_Lat_Vel_STD_V_7 - 9
 *     ICM_Object_Prot7_B.OBJ_Long_Distance_7 - 10
 *     ICM_Object_Prot7_B.OBJ_Long_Distance_V_7 - 11
 *     ICM_Object_Prot7_B.OBJ_Long_Distance_STD_7 - 12
 *     ICM_Object_Prot7_B.OBJ_Long_Distance_STD_V_7 - 13
 *     ICM_Object_Prot7_B.OBJ_Lat_Distance_7 - 14
 *     ICM_Object_Prot7_B.OBJ_Lat_Distance_V_7 - 15
 *     ICM_Object_Prot7_B.OBJ_Lat_Distance_STD_7 - 16
 *     ICM_Object_Prot7_B.OBJ_Lat_Distance_STD_V_7 - 17
 *     ICM_Object_Prot7_B.OBJ_Absolute_Speed_7 - 18
 *     ICM_Object_Prot7_B.OBJ_Absolute_Speed_V_7 - 19
 *     ICM_Object_Prot7_B.OBJ_Absolute_Speed_STD_7 - 20
 *     ICM_Object_Prot7_B.OBJ_Absolute_Speed_STD_V_7 - 21
 *     ICM_Object_Prot7_B.OBJ_Heading_7 - 22
 *     ICM_Object_Prot7_B.OBJ_Heading_V_7 - 23
 *     ICM_Object_Prot7_B.OBJ_Heading_STD_7 - 24
 *     ICM_Object_Prot7_B.OBJ_Heading_STD_V_7 - 25
 *     ICM_Object_Prot7_B.OBJ_Angle_Rate_STD_7 - 26
 *     ICM_Object_Prot7_B.OBJ_Angle_Rate_STD_V_7 - 27
 *     ICM_Object_Prot7_B.OBJ_Angle_Rate_7 - 28
 *     ICM_Object_Prot7_B.OBJ_Angle_Rate_V_7 - 29
 *     ICM_Object_Prot7_B.OBJ_Angle_Right_7 - 30
 *     ICM_Object_Prot7_B.OBJ_Angle_Right_V_7 - 31
 *     ICM_Object_Prot7_B.OBJ_Angle_Right_STD_7 - 32
 *     ICM_Object_Prot7_B.OBJ_Angle_Right_STD_V_7 - 33
 *     ICM_Object_Prot7_B.OBJ_Angle_Left_7 - 34
 *     ICM_Object_Prot7_B.OBJ_Angle_Left_V_7 - 35
 *     ICM_Object_Prot7_B.OBJ_Angle_Left_STD_7 - 36
 *     ICM_Object_Prot7_B.OBJ_Angle_Left_STD_V_7 - 37
 *     ICM_Object_Prot7_B.OBJ_Angle_Side_7 - 38
 *     ICM_Object_Prot7_B.OBJ_Angle_Side_V_7 - 39
 *     ICM_Object_Prot7_B.OBJ_Angle_Side_STD_7 - 40
 *     ICM_Object_Prot7_B.OBJ_Angle_Side_STD_V_7 - 41
 *     ICM_Object_Prot7_B.OBJ_Angle_Mid_V_7 - 42
 *     ICM_Object_Prot7_B.OBJ_Angle_Mid_7 - 43
 *     ICM_Object_Prot7_B.OBJ_Angle_Mid_STD_7 - 44
 *     ICM_Object_Prot7_B.OBJ_Angle_Mid_STD_V_7 - 45
 *     ICM_Object_Prot7_B.OBJ_Angle_Bottom_V_7 - 46
 *     ICM_Object_Prot7_B.OBJ_Angle_Bottom_7 - 47
 *     ICM_Object_Prot7_B.OBJ_Angle_Bottom_STD_7 - 48
 *     ICM_Object_Prot7_B.OBJ_Angle_Bottom_STD_V_7 - 49
 *     ICM_Object_Prot7_B.OBJ_Visibility_Side_V_7 - 50
 *     ICM_Object_Prot7_B.OBJ_Visibility_Side_7 - 51
 *     ICM_Object_Prot7_B.OBJ_Is_In_Drivable_Area_7 - 52
 *     ICM_Object_Prot7_B.OBJ_Is_In_Drivable_Area_V_7 - 53
 *     ICM_Object_Prot7_B.OBJ_Is_VeryClose_7 - 54
 *     ICM_Object_Prot7_B.OBJ_Is_VeryClose_V_7 - 55
 *     ICM_Object_Prot7_B.OBJ_Buffer_7 - 56
 */

/*********
 *  ICM_Object_Prot8_A - 93
 *     ICM_Object_Prot8_A.ICM_Object_Prot8_A_Header - 1
 *     ICM_Object_Prot8_A.OBJ_CRC_8 - 2
 *     ICM_Object_Prot8_A.OBJ_ID_8 - 3
 *     ICM_Object_Prot8_A.OBJ_Existence_Probability_8 - 4
 *     ICM_Object_Prot8_A.OBJ_Fusion_Source_8 - 5
 *     ICM_Object_Prot8_A.OBJ_Triggered_SDM_8 - 6
 *     ICM_Object_Prot8_A.OBJ_Motion_Category_8 - 7
 *     ICM_Object_Prot8_A.OBJ_Moving_IN_Probability_8 - 8
 *     ICM_Object_Prot8_A.OBJ_Object_Age_8 - 9
 *     ICM_Object_Prot8_A.OBJ_Measuring_Status_8 - 10
 *     ICM_Object_Prot8_A.OBJ_Object_Class_8 - 11
 *     ICM_Object_Prot8_A.OBJ_Class_Probability_8 - 12
 *     ICM_Object_Prot8_A.OBJ_Car_Probability_8 - 13
 *     ICM_Object_Prot8_A.OBJ_Truck_Probability_8 - 14
 *     ICM_Object_Prot8_A.OBJ_Bike_Probability_8 - 15
 *     ICM_Object_Prot8_A.OBJ_Camera_Source_8 - 16
 *     ICM_Object_Prot8_A.OBJ_Motion_Status_8 - 17
 *     ICM_Object_Prot8_A.OBJ_Motion_Orientation_8 - 18
 *     ICM_Object_Prot8_A.OBJ_Has_Cut_Lane_8 - 19
 *     ICM_Object_Prot8_A.OBJ_Has_Cut_Path_8 - 20
 *     ICM_Object_Prot8_A.OBJ_Brake_Light_8 - 21
 *     ICM_Object_Prot8_A.OBJ_Turn_Indicator_Right_8 - 22
 *     ICM_Object_Prot8_A.OBJ_Turn_Indicator_Left_8 - 23
 *     ICM_Object_Prot8_A.OBJ_Light_Indicator_Validity_8 - 24
 *     ICM_Object_Prot8_A.OBJ_Right_Out_Of_Image_8 - 25
 *     ICM_Object_Prot8_A.OBJ_Left_Out_Of_Image_8 - 26
 *     ICM_Object_Prot8_A.OBJ_Right_Out_Of_Image_V_8 - 27
 *     ICM_Object_Prot8_A.OBJ_Left_Out_Of_Image_V_8 - 28
 *     ICM_Object_Prot8_A.OBJ_Top_Out_Of_Image_8 - 29
 *     ICM_Object_Prot8_A.OBJ_Bottom_Out_Of_Image_8 - 30
 *     ICM_Object_Prot8_A.OBJ_Top_Out_Of_Image_V_8 - 31
 *     ICM_Object_Prot8_A.OBJ_Bottom_Out_Of_Image_V_8 - 32
 *     ICM_Object_Prot8_A.OBJ_Lane_Assignment_8 - 33
 *     ICM_Object_Prot8_A.OBJ_Lane_Assignment_V_8 - 34
 *     ICM_Object_Prot8_A.OBJ_Age_Seconds_8 - 35
 *     ICM_Object_Prot8_A.OBJ_Age_Seconds_V_8 - 36
 *     ICM_Object_Prot8_A.OBJ_Width_8 - 37
 *     ICM_Object_Prot8_A.OBJ_Width_V_8 - 38
 *     ICM_Object_Prot8_A.OBJ_Width_STD_8 - 39
 *     ICM_Object_Prot8_A.OBJ_Width_STD_V_8 - 40
 *     ICM_Object_Prot8_A.OBJ_Length_8 - 41
 *     ICM_Object_Prot8_A.OBJ_Length_V_8 - 42
 *     ICM_Object_Prot8_A.OBJ_Length_STD_8 - 43
 *     ICM_Object_Prot8_A.OBJ_Length_STD_V_8 - 44
 *     ICM_Object_Prot8_A.OBJ_Height_8 - 45
 *     ICM_Object_Prot8_A.OBJ_Height_V_8 - 46
 *     ICM_Object_Prot8_A.OBJ_Height_STD_8 - 47
 *     ICM_Object_Prot8_A.OBJ_Height_STD_V_8 - 48
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Velocity_8 - 49
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Velocity_V_8 - 50
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Velocity_STD_8 - 51
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Vel_STD_V_8 - 52
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Velocity_8 - 53
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Velocity_V_8 - 54
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Velocity_STD_8 - 55
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Vel_STD_V_8 - 56
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Acc_8 - 57
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Acc_V_8 - 58
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Acc_STD_8 - 59
 *     ICM_Object_Prot8_A.OBJ_Abs_Long_Acc_STD_V_8 - 60
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Acc_8 - 61
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Acc_V_8 - 62
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Acc_STD_8 - 63
 *     ICM_Object_Prot8_A.OBJ_Abs_Lat_Acc_STD_V_8 - 64
 *     ICM_Object_Prot8_A.OBJ_Abs_Acceleration_8 - 65
 *     ICM_Object_Prot8_A.OBJ_Abs_Acceleration_V_8 - 66
 *     ICM_Object_Prot8_A.OBJ_Abs_Acc_STD_8 - 67
 *     ICM_Object_Prot8_A.OBJ_Abs_Acc_STD_V_8 - 68
 *     ICM_Object_Prot8_A.OBJ_Inv_TTC_8 - 69
 *     ICM_Object_Prot8_A.OBJ_Inv_TTC_V_8 - 70
 *     ICM_Object_Prot8_A.OBJ_Inv_TTC_STD_8 - 71
 *     ICM_Object_Prot8_A.OBJ_Inv_TTC_STD_V_8 - 72
 *     ICM_Object_Prot8_A.OBJ_Relative_Long_Acc_8 - 73
 *     ICM_Object_Prot8_A.OBJ_Relative_Long_Acc_V_8 - 74
 *     ICM_Object_Prot8_A.OBJ_Relative_Long_Acc_STD_8 - 75
 *     ICM_Object_Prot8_A.OBJ_Rel_Long_Acc_STD_V_8 - 76
 */

/*********
 *  ICM_Object_Prot8_B - 94
 *     ICM_Object_Prot8_B.ICM_Object_Prot8_B_Header - 1
 *     ICM_Object_Prot8_B.OBJ_Relative_Long_Velocity_8 - 2
 *     ICM_Object_Prot8_B.OBJ_Relative_Long_Velocity_V_8 - 3
 *     ICM_Object_Prot8_B.OBJ_Relative_Long_Vel_STD_8 - 4
 *     ICM_Object_Prot8_B.OBJ_Rel_Long_Vel_STD_V_8 - 5
 *     ICM_Object_Prot8_B.OBJ_Relative_Lat_Velocity_8 - 6
 *     ICM_Object_Prot8_B.OBJ_Relative_Lat_Velocity_V_8 - 7
 *     ICM_Object_Prot8_B.OBJ_Relative_Lat_Velocity_STD_8 - 8
 *     ICM_Object_Prot8_B.OBJ_Rel_Lat_Vel_STD_V_8 - 9
 *     ICM_Object_Prot8_B.OBJ_Long_Distance_8 - 10
 *     ICM_Object_Prot8_B.OBJ_Long_Distance_V_8 - 11
 *     ICM_Object_Prot8_B.OBJ_Long_Distance_STD_8 - 12
 *     ICM_Object_Prot8_B.OBJ_Long_Distance_STD_V_8 - 13
 *     ICM_Object_Prot8_B.OBJ_Lat_Distance_8 - 14
 *     ICM_Object_Prot8_B.OBJ_Lat_Distance_V_8 - 15
 *     ICM_Object_Prot8_B.OBJ_Lat_Distance_STD_8 - 16
 *     ICM_Object_Prot8_B.OBJ_Lat_Distance_STD_V_8 - 17
 *     ICM_Object_Prot8_B.OBJ_Absolute_Speed_8 - 18
 *     ICM_Object_Prot8_B.OBJ_Absolute_Speed_V_8 - 19
 *     ICM_Object_Prot8_B.OBJ_Absolute_Speed_STD_8 - 20
 *     ICM_Object_Prot8_B.OBJ_Absolute_Speed_STD_V_8 - 21
 *     ICM_Object_Prot8_B.OBJ_Heading_8 - 22
 *     ICM_Object_Prot8_B.OBJ_Heading_V_8 - 23
 *     ICM_Object_Prot8_B.OBJ_Heading_STD_8 - 24
 *     ICM_Object_Prot8_B.OBJ_Heading_STD_V_8 - 25
 *     ICM_Object_Prot8_B.OBJ_Angle_Rate_STD_8 - 26
 *     ICM_Object_Prot8_B.OBJ_Angle_Rate_STD_V_8 - 27
 *     ICM_Object_Prot8_B.OBJ_Angle_Rate_8 - 28
 *     ICM_Object_Prot8_B.OBJ_Angle_Rate_V_8 - 29
 *     ICM_Object_Prot8_B.OBJ_Angle_Right_8 - 30
 *     ICM_Object_Prot8_B.OBJ_Angle_Right_V_8 - 31
 *     ICM_Object_Prot8_B.OBJ_Angle_Right_STD_8 - 32
 *     ICM_Object_Prot8_B.OBJ_Angle_Right_STD_V_8 - 33
 *     ICM_Object_Prot8_B.OBJ_Angle_Left_8 - 34
 *     ICM_Object_Prot8_B.OBJ_Angle_Left_V_8 - 35
 *     ICM_Object_Prot8_B.OBJ_Angle_Left_STD_8 - 36
 *     ICM_Object_Prot8_B.OBJ_Angle_Left_STD_V_8 - 37
 *     ICM_Object_Prot8_B.OBJ_Angle_Side_8 - 38
 *     ICM_Object_Prot8_B.OBJ_Angle_Side_V_8 - 39
 *     ICM_Object_Prot8_B.OBJ_Angle_Side_STD_8 - 40
 *     ICM_Object_Prot8_B.OBJ_Angle_Side_STD_V_8 - 41
 *     ICM_Object_Prot8_B.OBJ_Angle_Mid_V_8 - 42
 *     ICM_Object_Prot8_B.OBJ_Angle_Mid_8 - 43
 *     ICM_Object_Prot8_B.OBJ_Angle_Mid_STD_8 - 44
 *     ICM_Object_Prot8_B.OBJ_Angle_Mid_STD_V_8 - 45
 *     ICM_Object_Prot8_B.OBJ_Angle_Bottom_V_8 - 46
 *     ICM_Object_Prot8_B.OBJ_Angle_Bottom_8 - 47
 *     ICM_Object_Prot8_B.OBJ_Angle_Bottom_STD_8 - 48
 *     ICM_Object_Prot8_B.OBJ_Angle_Bottom_STD_V_8 - 49
 *     ICM_Object_Prot8_B.OBJ_Visibility_Side_V_8 - 50
 *     ICM_Object_Prot8_B.OBJ_Visibility_Side_8 - 51
 *     ICM_Object_Prot8_B.OBJ_Is_In_Drivable_Area_8 - 52
 *     ICM_Object_Prot8_B.OBJ_Is_In_Drivable_Area_V_8 - 53
 *     ICM_Object_Prot8_B.OBJ_Is_VeryClose_8 - 54
 *     ICM_Object_Prot8_B.OBJ_Is_VeryClose_V_8 - 55
 *     ICM_Object_Prot8_B.OBJ_Buffer_8 - 56
 */

/*********
 *  ICM_Object_Prot9_A - 95
 *     ICM_Object_Prot9_A.ICM_Object_Prot9_A_Header - 1
 *     ICM_Object_Prot9_A.OBJ_CRC_9 - 2
 *     ICM_Object_Prot9_A.OBJ_ID_9 - 3
 *     ICM_Object_Prot9_A.OBJ_Existence_Probability_9 - 4
 *     ICM_Object_Prot9_A.OBJ_Fusion_Source_9 - 5
 *     ICM_Object_Prot9_A.OBJ_Triggered_SDM_9 - 6
 *     ICM_Object_Prot9_A.OBJ_Motion_Category_9 - 7
 *     ICM_Object_Prot9_A.OBJ_Moving_IN_Probability_9 - 8
 *     ICM_Object_Prot9_A.OBJ_Object_Age_9 - 9
 *     ICM_Object_Prot9_A.OBJ_Measuring_Status_9 - 10
 *     ICM_Object_Prot9_A.OBJ_Object_Class_9 - 11
 *     ICM_Object_Prot9_A.OBJ_Class_Probability_9 - 12
 *     ICM_Object_Prot9_A.OBJ_Car_Probability_9 - 13
 *     ICM_Object_Prot9_A.OBJ_Truck_Probability_9 - 14
 *     ICM_Object_Prot9_A.OBJ_Bike_Probability_9 - 15
 *     ICM_Object_Prot9_A.OBJ_Camera_Source_9 - 16
 *     ICM_Object_Prot9_A.OBJ_Motion_Status_9 - 17
 *     ICM_Object_Prot9_A.OBJ_Motion_Orientation_9 - 18
 *     ICM_Object_Prot9_A.OBJ_Has_Cut_Lane_9 - 19
 *     ICM_Object_Prot9_A.OBJ_Has_Cut_Path_9 - 20
 *     ICM_Object_Prot9_A.OBJ_Brake_Light_9 - 21
 *     ICM_Object_Prot9_A.OBJ_Turn_Indicator_Right_9 - 22
 *     ICM_Object_Prot9_A.OBJ_Turn_Indicator_Left_9 - 23
 *     ICM_Object_Prot9_A.OBJ_Light_Indicator_Validity_9 - 24
 *     ICM_Object_Prot9_A.OBJ_Right_Out_Of_Image_9 - 25
 *     ICM_Object_Prot9_A.OBJ_Left_Out_Of_Image_9 - 26
 *     ICM_Object_Prot9_A.OBJ_Right_Out_Of_Image_V_9 - 27
 *     ICM_Object_Prot9_A.OBJ_Left_Out_Of_Image_V_9 - 28
 *     ICM_Object_Prot9_A.OBJ_Top_Out_Of_Image_9 - 29
 *     ICM_Object_Prot9_A.OBJ_Bottom_Out_Of_Image_9 - 30
 *     ICM_Object_Prot9_A.OBJ_Top_Out_Of_Image_V_9 - 31
 *     ICM_Object_Prot9_A.OBJ_Bottom_Out_Of_Image_V_9 - 32
 *     ICM_Object_Prot9_A.OBJ_Lane_Assignment_9 - 33
 *     ICM_Object_Prot9_A.OBJ_Lane_Assignment_V_9 - 34
 *     ICM_Object_Prot9_A.OBJ_Age_Seconds_9 - 35
 *     ICM_Object_Prot9_A.OBJ_Age_Seconds_V_9 - 36
 *     ICM_Object_Prot9_A.OBJ_Width_9 - 37
 *     ICM_Object_Prot9_A.OBJ_Width_V_9 - 38
 *     ICM_Object_Prot9_A.OBJ_Width_STD_9 - 39
 *     ICM_Object_Prot9_A.OBJ_Width_STD_V_9 - 40
 *     ICM_Object_Prot9_A.OBJ_Length_9 - 41
 *     ICM_Object_Prot9_A.OBJ_Length_V_9 - 42
 *     ICM_Object_Prot9_A.OBJ_Length_STD_9 - 43
 *     ICM_Object_Prot9_A.OBJ_Length_STD_V_9 - 44
 *     ICM_Object_Prot9_A.OBJ_Height_9 - 45
 *     ICM_Object_Prot9_A.OBJ_Height_V_9 - 46
 *     ICM_Object_Prot9_A.OBJ_Height_STD_9 - 47
 *     ICM_Object_Prot9_A.OBJ_Height_STD_V_9 - 48
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Velocity_9 - 49
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Velocity_V_9 - 50
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Velocity_STD_9 - 51
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Vel_STD_V_9 - 52
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Velocity_9 - 53
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Velocity_V_9 - 54
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Velocity_STD_9 - 55
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Vel_STD_V_9 - 56
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Acc_9 - 57
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Acc_V_9 - 58
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Acc_STD_9 - 59
 *     ICM_Object_Prot9_A.OBJ_Abs_Long_Acc_STD_V_9 - 60
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Acc_9 - 61
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Acc_V_9 - 62
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Acc_STD_9 - 63
 *     ICM_Object_Prot9_A.OBJ_Abs_Lat_Acc_STD_V_9 - 64
 *     ICM_Object_Prot9_A.OBJ_Abs_Acceleration_9 - 65
 *     ICM_Object_Prot9_A.OBJ_Abs_Acceleration_V_9 - 66
 *     ICM_Object_Prot9_A.OBJ_Abs_Acc_STD_9 - 67
 *     ICM_Object_Prot9_A.OBJ_Abs_Acc_STD_V_9 - 68
 *     ICM_Object_Prot9_A.OBJ_Inv_TTC_9 - 69
 *     ICM_Object_Prot9_A.OBJ_Inv_TTC_V_9 - 70
 *     ICM_Object_Prot9_A.OBJ_Inv_TTC_STD_9 - 71
 *     ICM_Object_Prot9_A.OBJ_Inv_TTC_STD_V_9 - 72
 *     ICM_Object_Prot9_A.OBJ_Relative_Long_Acc_9 - 73
 *     ICM_Object_Prot9_A.OBJ_Relative_Long_Acc_V_9 - 74
 *     ICM_Object_Prot9_A.OBJ_Relative_Long_Acc_STD_9 - 75
 *     ICM_Object_Prot9_A.OBJ_Rel_Long_Acc_STD_V_9 - 76
 */

/*********
 *  ICM_Object_Prot9_B - 96
 *     ICM_Object_Prot9_B.ICM_Object_Prot9_B_Header - 1
 *     ICM_Object_Prot9_B.OBJ_Relative_Long_Velocity_9 - 2
 *     ICM_Object_Prot9_B.OBJ_Relative_Long_Velocity_V_9 - 3
 *     ICM_Object_Prot9_B.OBJ_Relative_Long_Vel_STD_9 - 4
 *     ICM_Object_Prot9_B.OBJ_Rel_Long_Vel_STD_V_9 - 5
 *     ICM_Object_Prot9_B.OBJ_Relative_Lat_Velocity_9 - 6
 *     ICM_Object_Prot9_B.OBJ_Relative_Lat_Velocity_V_9 - 7
 *     ICM_Object_Prot9_B.OBJ_Relative_Lat_Velocity_STD_9 - 8
 *     ICM_Object_Prot9_B.OBJ_Rel_Lat_Vel_STD_V_9 - 9
 *     ICM_Object_Prot9_B.OBJ_Long_Distance_9 - 10
 *     ICM_Object_Prot9_B.OBJ_Long_Distance_V_9 - 11
 *     ICM_Object_Prot9_B.OBJ_Long_Distance_STD_9 - 12
 *     ICM_Object_Prot9_B.OBJ_Long_Distance_STD_V_9 - 13
 *     ICM_Object_Prot9_B.OBJ_Lat_Distance_9 - 14
 *     ICM_Object_Prot9_B.OBJ_Lat_Distance_V_9 - 15
 *     ICM_Object_Prot9_B.OBJ_Lat_Distance_STD_9 - 16
 *     ICM_Object_Prot9_B.OBJ_Lat_Distance_STD_V_9 - 17
 *     ICM_Object_Prot9_B.OBJ_Absolute_Speed_9 - 18
 *     ICM_Object_Prot9_B.OBJ_Absolute_Speed_V_9 - 19
 *     ICM_Object_Prot9_B.OBJ_Absolute_Speed_STD_9 - 20
 *     ICM_Object_Prot9_B.OBJ_Absolute_Speed_STD_V_9 - 21
 *     ICM_Object_Prot9_B.OBJ_Heading_9 - 22
 *     ICM_Object_Prot9_B.OBJ_Heading_V_9 - 23
 *     ICM_Object_Prot9_B.OBJ_Heading_STD_9 - 24
 *     ICM_Object_Prot9_B.OBJ_Heading_STD_V_9 - 25
 *     ICM_Object_Prot9_B.OBJ_Angle_Rate_STD_9 - 26
 *     ICM_Object_Prot9_B.OBJ_Angle_Rate_STD_V_9 - 27
 *     ICM_Object_Prot9_B.OBJ_Angle_Rate_9 - 28
 *     ICM_Object_Prot9_B.OBJ_Angle_Rate_V_9 - 29
 *     ICM_Object_Prot9_B.OBJ_Angle_Right_9 - 30
 *     ICM_Object_Prot9_B.OBJ_Angle_Right_V_9 - 31
 *     ICM_Object_Prot9_B.OBJ_Angle_Right_STD_9 - 32
 *     ICM_Object_Prot9_B.OBJ_Angle_Right_STD_V_9 - 33
 *     ICM_Object_Prot9_B.OBJ_Angle_Left_9 - 34
 *     ICM_Object_Prot9_B.OBJ_Angle_Left_V_9 - 35
 *     ICM_Object_Prot9_B.OBJ_Angle_Left_STD_9 - 36
 *     ICM_Object_Prot9_B.OBJ_Angle_Left_STD_V_9 - 37
 *     ICM_Object_Prot9_B.OBJ_Angle_Side_9 - 38
 *     ICM_Object_Prot9_B.OBJ_Angle_Side_V_9 - 39
 *     ICM_Object_Prot9_B.OBJ_Angle_Side_STD_9 - 40
 *     ICM_Object_Prot9_B.OBJ_Angle_Side_STD_V_9 - 41
 *     ICM_Object_Prot9_B.OBJ_Angle_Mid_V_9 - 42
 *     ICM_Object_Prot9_B.OBJ_Angle_Mid_9 - 43
 *     ICM_Object_Prot9_B.OBJ_Angle_Mid_STD_9 - 44
 *     ICM_Object_Prot9_B.OBJ_Angle_Mid_STD_V_9 - 45
 *     ICM_Object_Prot9_B.OBJ_Angle_Bottom_V_9 - 46
 *     ICM_Object_Prot9_B.OBJ_Angle_Bottom_9 - 47
 *     ICM_Object_Prot9_B.OBJ_Angle_Bottom_STD_9 - 48
 *     ICM_Object_Prot9_B.OBJ_Angle_Bottom_STD_V_9 - 49
 *     ICM_Object_Prot9_B.OBJ_Visibility_Side_V_9 - 50
 *     ICM_Object_Prot9_B.OBJ_Visibility_Side_9 - 51
 *     ICM_Object_Prot9_B.OBJ_Is_In_Drivable_Area_9 - 52
 *     ICM_Object_Prot9_B.OBJ_Is_In_Drivable_Area_V_9 - 53
 *     ICM_Object_Prot9_B.OBJ_Is_VeryClose_9 - 54
 *     ICM_Object_Prot9_B.OBJ_Is_VeryClose_V_9 - 55
 *     ICM_Object_Prot9_B.OBJ_Buffer_9 - 56
 */

/*********
 *  ICM_Object_Prot_Header - 97
 *     ICM_Object_Prot_Header.ICM_Object_Prot_Head_Header - 1
 *     ICM_Object_Prot_Header.OBJ_Zero_byte - 2
 *     ICM_Object_Prot_Header.OBJ_Header_CRC - 3
 *     ICM_Object_Prot_Header.OBJ_Protocol_Version - 4
 *     ICM_Object_Prot_Header.OBJ_Sync_ID - 5
 *     ICM_Object_Prot_Header.OBJ_VRU_Count - 6
 *     ICM_Object_Prot_Header.OBJ_VD_Count - 7
 *     ICM_Object_Prot_Header.OBJ_General_OBJ_Count - 8
 *     ICM_Object_Prot_Header.OBJ_Animal_Count - 9
 *     ICM_Object_Prot_Header.OBJ_VD_NIV_Left - 10
 *     ICM_Object_Prot_Header.OBJ_VD_NIV_Right - 11
 *     ICM_Object_Prot_Header.OBJ_VD_CIPV_ID - 12
 *     ICM_Object_Prot_Header.OBJ_VD_CIPV_Lost - 13
 *     ICM_Object_Prot_Header.OBJ_VD_Allow_Acc - 14
 *     ICM_Object_Prot_Header.OBJ_Is_Blocked_Left - 15
 *     ICM_Object_Prot_Header.OBJ_Is_Blocked_Right - 16
 *     ICM_Object_Prot_Header.OBJ_Header_Buffer - 17
 */
volatile uint8_T CANMMCAN_RTVE;
volatile boolean_T CANMMCAN_TRAFFIC;
volatile int32_T CANMMCAN_MAXMSGPERSTEP;

volatile uint8_T CANMMCAN_TVAR8;

volatile uint8_T CANMMCAN_TVAR8_2;

volatile uint32_T CANMMCAN_TVAR32;

volatile uint8_T CANMMCAN_TVAR8A[8];

volatile double CANMMCAN_TVARD;
volatile double CANMMCAN_TVARD2;

/* Globale Enable */
volatile boolean_T CANMMCAN_GEIN;
#define CANMMCAN_GE CANMMCAN_GEIN

/* Reset */
#define CANMMCAN_RE 1


/* Feedthrough debug variable*/
volatile uint8_T CANMMCAN_FTD;


#define ID_Table_RX(X) (int)(CANMMCAN_MIDRX[X])
#define ID_Table_TX(X) (int)(CANMMCAN_MIDTX[X])
uint8_T CANMMCAN_MIDTXSW[NUM_RX_MSG];
uint32_T CANMMCAN_MIDTXIN[NUM_RX_MSG];
uint32_T CANMMCAN_MIDTXS[NUM_RX_MSG];
uint32_T CANMMCAN_MIDRX[NUM_RX_MSG];
uint8_T CANMMCAN_MIDFRX[NUM_RX_MSG];
uint8_T CANMMCAN_MIDFTXIN[NUM_RX_MSG];
uint8_T CANMMCAN_MIDFTXS[NUM_RX_MSG];
uint8_T CANMMCAN_MIDFTX[NUM_RX_MSG];
uint8_T CANMMCAN_RXMT[NUM_RX_MSG];
 

volatile real_T CANMMCAN_RXt[NUM_RX_MSG];
volatile real_T CANMMCAN_RXdt[NUM_RX_MSG];
volatile boolean_T CANMMCAN_RXsta[NUM_RX_MSG];
volatile uint8_T CANMMCAN_RXerr[NUM_RX_MSG];
volatile real_T CANMMCAN_RXCTMIN[NUM_RX_MSG];
volatile real_T CANMMCAN_RXCTMAX[NUM_RX_MSG];
volatile uint8_T CANMMCAN_RXLEN[NUM_RX_MSG];
volatile uint32_T CANMMCAN_RXCNT[NUM_RX_MSG];



/* Define RX/TX structure */

volatile real_T CANMMCAN_RXCT1;
UInt16 CANMMCAN_RX_Msg_1_Sgn_1;
UInt8 CANMMCAN_RX_Msg_1_Sgn_2;
UInt32 CANMMCAN_RX_Msg_1_Sgn_3;
UInt8 CANMMCAN_RX_Msg_1_Sgn_4;
UInt8 CANMMCAN_RX_Msg_1_Sgn_5;
UInt8 CANMMCAN_RX_Msg_1_Sgn_6;
UInt8 CANMMCAN_RX_Msg_1_Sgn_7;
UInt8 CANMMCAN_RX_Msg_1_Sgn_8;
UInt8 CANMMCAN_RX_Msg_1_Sgn_9;
UInt8 CANMMCAN_RX_Msg_1_Sgn_10;
UInt8 CANMMCAN_RX_Msg_1_Sgn_11;
UInt8 CANMMCAN_RX_Msg_1_Sgn_12;
UInt8 CANMMCAN_RX_Msg_1_Sgn_13;
UInt8 CANMMCAN_RX_Msg_1_Sgn_14;
UInt8 CANMMCAN_RX_Msg_1_Sgn_15;
UInt8 CANMMCAN_RX_Msg_1_Sgn_16;
UInt8 CANMMCAN_RX_Msg_1_Sgn_17;
UInt8 CANMMCAN_RX_Msg_1_Sgn_18;
UInt8 CANMMCAN_RX_Msg_1_Sgn_19;
UInt8 CANMMCAN_RX_Msg_1_Sgn_20;
UInt8 CANMMCAN_RX_Msg_1_Sgn_21;
Int32 CANMMCAN_RX_Msg_1_Sgn_22;
UInt8 CANMMCAN_RX_Msg_1_Sgn_23;
UInt32 CANMMCAN_RX_Msg_1_Sgn_24;
UInt32 CANMMCAN_RX_Msg_1_Sgn_25;
UInt8 CANMMCAN_RX_Msg_1_Sgn_26;
UInt8 CANMMCAN_RX_Msg_1_Sgn_27;
UInt8 CANMMCAN_RX_Msg_1_Sgn_28;
UInt8 CANMMCAN_RX_Msg_1_Sgn_29;
UInt8 CANMMCAN_RX_Msg_1_Sgn_30;
UInt8 CANMMCAN_RX_Msg_1_Sgn_31;
UInt8 CANMMCAN_RX_Msg_1_Sgn_32;
UInt8 CANMMCAN_RX_Msg_1_Sgn_33;
UInt8 CANMMCAN_RX_Msg_1_Sgn_34;
volatile real_T CANMMCAN_RXCT2;
Int16 CANMMCAN_RX_Msg_2_Sgn_1;
Int32 CANMMCAN_RX_Msg_2_Sgn_2;
Int32 CANMMCAN_RX_Msg_2_Sgn_3;
Int32 CANMMCAN_RX_Msg_2_Sgn_4;
Int32 CANMMCAN_RX_Msg_2_Sgn_5;
Int32 CANMMCAN_RX_Msg_2_Sgn_6;
Int32 CANMMCAN_RX_Msg_2_Sgn_7;
Int32 CANMMCAN_RX_Msg_2_Sgn_8;
Int32 CANMMCAN_RX_Msg_2_Sgn_9;
Int16 CANMMCAN_RX_Msg_2_Sgn_10;
volatile real_T CANMMCAN_RXCT3;
UInt16 CANMMCAN_RX_Msg_3_Sgn_1;
UInt8 CANMMCAN_RX_Msg_3_Sgn_2;
UInt8 CANMMCAN_RX_Msg_3_Sgn_3;
double CANMMCAN_RX_Msg_3_Sgn_4;
UInt8 CANMMCAN_RX_Msg_3_Sgn_5;
double CANMMCAN_RX_Msg_3_Sgn_6;
UInt8 CANMMCAN_RX_Msg_3_Sgn_7;
UInt8 CANMMCAN_RX_Msg_3_Sgn_8;
double CANMMCAN_RX_Msg_3_Sgn_9;
double CANMMCAN_RX_Msg_3_Sgn_10;
double CANMMCAN_RX_Msg_3_Sgn_11;
UInt8 CANMMCAN_RX_Msg_3_Sgn_12;
UInt8 CANMMCAN_RX_Msg_3_Sgn_13;
double CANMMCAN_RX_Msg_3_Sgn_14;
UInt8 CANMMCAN_RX_Msg_3_Sgn_15;
double CANMMCAN_RX_Msg_3_Sgn_16;
double CANMMCAN_RX_Msg_3_Sgn_17;
double CANMMCAN_RX_Msg_3_Sgn_18;
double CANMMCAN_RX_Msg_3_Sgn_19;
double CANMMCAN_RX_Msg_3_Sgn_20;
double CANMMCAN_RX_Msg_3_Sgn_21;
volatile real_T CANMMCAN_RXCT4;
UInt16 CANMMCAN_RX_Msg_4_Sgn_1;
UInt8 CANMMCAN_RX_Msg_4_Sgn_2;
UInt8 CANMMCAN_RX_Msg_4_Sgn_3;
double CANMMCAN_RX_Msg_4_Sgn_4;
UInt8 CANMMCAN_RX_Msg_4_Sgn_5;
double CANMMCAN_RX_Msg_4_Sgn_6;
UInt8 CANMMCAN_RX_Msg_4_Sgn_7;
UInt8 CANMMCAN_RX_Msg_4_Sgn_8;
double CANMMCAN_RX_Msg_4_Sgn_9;
double CANMMCAN_RX_Msg_4_Sgn_10;
double CANMMCAN_RX_Msg_4_Sgn_11;
UInt8 CANMMCAN_RX_Msg_4_Sgn_12;
UInt8 CANMMCAN_RX_Msg_4_Sgn_13;
double CANMMCAN_RX_Msg_4_Sgn_14;
UInt8 CANMMCAN_RX_Msg_4_Sgn_15;
double CANMMCAN_RX_Msg_4_Sgn_16;
double CANMMCAN_RX_Msg_4_Sgn_17;
double CANMMCAN_RX_Msg_4_Sgn_18;
double CANMMCAN_RX_Msg_4_Sgn_19;
double CANMMCAN_RX_Msg_4_Sgn_20;
double CANMMCAN_RX_Msg_4_Sgn_21;
volatile real_T CANMMCAN_RXCT5;
UInt16 CANMMCAN_RX_Msg_5_Sgn_1;
UInt8 CANMMCAN_RX_Msg_5_Sgn_2;
UInt8 CANMMCAN_RX_Msg_5_Sgn_3;
double CANMMCAN_RX_Msg_5_Sgn_4;
UInt8 CANMMCAN_RX_Msg_5_Sgn_5;
double CANMMCAN_RX_Msg_5_Sgn_6;
UInt8 CANMMCAN_RX_Msg_5_Sgn_7;
UInt8 CANMMCAN_RX_Msg_5_Sgn_8;
double CANMMCAN_RX_Msg_5_Sgn_9;
double CANMMCAN_RX_Msg_5_Sgn_10;
double CANMMCAN_RX_Msg_5_Sgn_11;
UInt8 CANMMCAN_RX_Msg_5_Sgn_12;
UInt8 CANMMCAN_RX_Msg_5_Sgn_13;
double CANMMCAN_RX_Msg_5_Sgn_14;
UInt8 CANMMCAN_RX_Msg_5_Sgn_15;
double CANMMCAN_RX_Msg_5_Sgn_16;
double CANMMCAN_RX_Msg_5_Sgn_17;
double CANMMCAN_RX_Msg_5_Sgn_18;
double CANMMCAN_RX_Msg_5_Sgn_19;
double CANMMCAN_RX_Msg_5_Sgn_20;
double CANMMCAN_RX_Msg_5_Sgn_21;
volatile real_T CANMMCAN_RXCT6;
UInt16 CANMMCAN_RX_Msg_6_Sgn_1;
UInt8 CANMMCAN_RX_Msg_6_Sgn_2;
UInt8 CANMMCAN_RX_Msg_6_Sgn_3;
double CANMMCAN_RX_Msg_6_Sgn_4;
UInt8 CANMMCAN_RX_Msg_6_Sgn_5;
double CANMMCAN_RX_Msg_6_Sgn_6;
UInt8 CANMMCAN_RX_Msg_6_Sgn_7;
UInt8 CANMMCAN_RX_Msg_6_Sgn_8;
double CANMMCAN_RX_Msg_6_Sgn_9;
double CANMMCAN_RX_Msg_6_Sgn_10;
double CANMMCAN_RX_Msg_6_Sgn_11;
UInt8 CANMMCAN_RX_Msg_6_Sgn_12;
UInt8 CANMMCAN_RX_Msg_6_Sgn_13;
double CANMMCAN_RX_Msg_6_Sgn_14;
UInt8 CANMMCAN_RX_Msg_6_Sgn_15;
double CANMMCAN_RX_Msg_6_Sgn_16;
double CANMMCAN_RX_Msg_6_Sgn_17;
double CANMMCAN_RX_Msg_6_Sgn_18;
double CANMMCAN_RX_Msg_6_Sgn_19;
double CANMMCAN_RX_Msg_6_Sgn_20;
double CANMMCAN_RX_Msg_6_Sgn_21;
UInt16 CANMMCAN_RX_Msg_6_Sgn_22;
volatile real_T CANMMCAN_RXCT7;
UInt16 CANMMCAN_RX_Msg_7_Sgn_1;
UInt8 CANMMCAN_RX_Msg_7_Sgn_2;
UInt8 CANMMCAN_RX_Msg_7_Sgn_3;
UInt8 CANMMCAN_RX_Msg_7_Sgn_4;
UInt8 CANMMCAN_RX_Msg_7_Sgn_5;
UInt8 CANMMCAN_RX_Msg_7_Sgn_6;
volatile real_T CANMMCAN_RXCT8;
UInt16 CANMMCAN_RX_Msg_8_Sgn_1;
UInt32 CANMMCAN_RX_Msg_8_Sgn_2;
Int8 CANMMCAN_RX_Msg_8_Sgn_3;
Int8 CANMMCAN_RX_Msg_8_Sgn_4;
UInt8 CANMMCAN_RX_Msg_8_Sgn_5;
UInt8 CANMMCAN_RX_Msg_8_Sgn_6;
double CANMMCAN_RX_Msg_8_Sgn_7;
UInt8 CANMMCAN_RX_Msg_8_Sgn_8;
UInt8 CANMMCAN_RX_Msg_8_Sgn_9;
UInt8 CANMMCAN_RX_Msg_8_Sgn_10;
double CANMMCAN_RX_Msg_8_Sgn_11;
UInt8 CANMMCAN_RX_Msg_8_Sgn_12;
UInt8 CANMMCAN_RX_Msg_8_Sgn_13;
UInt8 CANMMCAN_RX_Msg_8_Sgn_14;
double CANMMCAN_RX_Msg_8_Sgn_15;
UInt8 CANMMCAN_RX_Msg_8_Sgn_16;
UInt8 CANMMCAN_RX_Msg_8_Sgn_17;
double CANMMCAN_RX_Msg_8_Sgn_18;
double CANMMCAN_RX_Msg_8_Sgn_19;
double CANMMCAN_RX_Msg_8_Sgn_20;
double CANMMCAN_RX_Msg_8_Sgn_21;
UInt8 CANMMCAN_RX_Msg_8_Sgn_22;
double CANMMCAN_RX_Msg_8_Sgn_23;
double CANMMCAN_RX_Msg_8_Sgn_24;
double CANMMCAN_RX_Msg_8_Sgn_25;
double CANMMCAN_RX_Msg_8_Sgn_26;
double CANMMCAN_RX_Msg_8_Sgn_27;
double CANMMCAN_RX_Msg_8_Sgn_28;
double CANMMCAN_RX_Msg_8_Sgn_29;
double CANMMCAN_RX_Msg_8_Sgn_30;
volatile real_T CANMMCAN_RXCT9;
UInt16 CANMMCAN_RX_Msg_9_Sgn_1;
double CANMMCAN_RX_Msg_9_Sgn_2;
double CANMMCAN_RX_Msg_9_Sgn_3;
double CANMMCAN_RX_Msg_9_Sgn_4;
double CANMMCAN_RX_Msg_9_Sgn_5;
double CANMMCAN_RX_Msg_9_Sgn_6;
double CANMMCAN_RX_Msg_9_Sgn_7;
Int8 CANMMCAN_RX_Msg_9_Sgn_8;
volatile real_T CANMMCAN_RXCT10;
UInt16 CANMMCAN_RX_Msg_10_Sgn_1;
UInt32 CANMMCAN_RX_Msg_10_Sgn_2;
Int8 CANMMCAN_RX_Msg_10_Sgn_3;
Int8 CANMMCAN_RX_Msg_10_Sgn_4;
UInt8 CANMMCAN_RX_Msg_10_Sgn_5;
UInt8 CANMMCAN_RX_Msg_10_Sgn_6;
double CANMMCAN_RX_Msg_10_Sgn_7;
UInt8 CANMMCAN_RX_Msg_10_Sgn_8;
UInt8 CANMMCAN_RX_Msg_10_Sgn_9;
UInt8 CANMMCAN_RX_Msg_10_Sgn_10;
double CANMMCAN_RX_Msg_10_Sgn_11;
UInt8 CANMMCAN_RX_Msg_10_Sgn_12;
UInt8 CANMMCAN_RX_Msg_10_Sgn_13;
UInt8 CANMMCAN_RX_Msg_10_Sgn_14;
double CANMMCAN_RX_Msg_10_Sgn_15;
UInt8 CANMMCAN_RX_Msg_10_Sgn_16;
UInt8 CANMMCAN_RX_Msg_10_Sgn_17;
double CANMMCAN_RX_Msg_10_Sgn_18;
double CANMMCAN_RX_Msg_10_Sgn_19;
double CANMMCAN_RX_Msg_10_Sgn_20;
double CANMMCAN_RX_Msg_10_Sgn_21;
UInt8 CANMMCAN_RX_Msg_10_Sgn_22;
double CANMMCAN_RX_Msg_10_Sgn_23;
double CANMMCAN_RX_Msg_10_Sgn_24;
double CANMMCAN_RX_Msg_10_Sgn_25;
double CANMMCAN_RX_Msg_10_Sgn_26;
double CANMMCAN_RX_Msg_10_Sgn_27;
double CANMMCAN_RX_Msg_10_Sgn_28;
double CANMMCAN_RX_Msg_10_Sgn_29;
double CANMMCAN_RX_Msg_10_Sgn_30;
volatile real_T CANMMCAN_RXCT11;
UInt16 CANMMCAN_RX_Msg_11_Sgn_1;
double CANMMCAN_RX_Msg_11_Sgn_2;
double CANMMCAN_RX_Msg_11_Sgn_3;
double CANMMCAN_RX_Msg_11_Sgn_4;
double CANMMCAN_RX_Msg_11_Sgn_5;
double CANMMCAN_RX_Msg_11_Sgn_6;
double CANMMCAN_RX_Msg_11_Sgn_7;
Int8 CANMMCAN_RX_Msg_11_Sgn_8;
UInt16 CANMMCAN_RX_Msg_11_Sgn_9;
volatile real_T CANMMCAN_RXCT12;
UInt16 CANMMCAN_RX_Msg_12_Sgn_1;
UInt8 CANMMCAN_RX_Msg_12_Sgn_2;
UInt8 CANMMCAN_RX_Msg_12_Sgn_3;
UInt8 CANMMCAN_RX_Msg_12_Sgn_4;
UInt8 CANMMCAN_RX_Msg_12_Sgn_5;
double CANMMCAN_RX_Msg_12_Sgn_6;
double CANMMCAN_RX_Msg_12_Sgn_7;
UInt16 CANMMCAN_RX_Msg_12_Sgn_8;
volatile real_T CANMMCAN_RXCT13;
UInt16 CANMMCAN_RX_Msg_13_Sgn_1;
UInt8 CANMMCAN_RX_Msg_13_Sgn_2;
UInt8 CANMMCAN_RX_Msg_13_Sgn_3;
double CANMMCAN_RX_Msg_13_Sgn_4;
UInt8 CANMMCAN_RX_Msg_13_Sgn_5;
UInt8 CANMMCAN_RX_Msg_13_Sgn_6;
UInt8 CANMMCAN_RX_Msg_13_Sgn_7;
UInt8 CANMMCAN_RX_Msg_13_Sgn_8;
double CANMMCAN_RX_Msg_13_Sgn_9;
double CANMMCAN_RX_Msg_13_Sgn_10;
double CANMMCAN_RX_Msg_13_Sgn_11;
UInt8 CANMMCAN_RX_Msg_13_Sgn_12;
UInt8 CANMMCAN_RX_Msg_13_Sgn_13;
Int8 CANMMCAN_RX_Msg_13_Sgn_14;
double CANMMCAN_RX_Msg_13_Sgn_15;
double CANMMCAN_RX_Msg_13_Sgn_16;
double CANMMCAN_RX_Msg_13_Sgn_17;
double CANMMCAN_RX_Msg_13_Sgn_18;
volatile real_T CANMMCAN_RXCT14;
UInt16 CANMMCAN_RX_Msg_14_Sgn_1;
UInt8 CANMMCAN_RX_Msg_14_Sgn_2;
UInt8 CANMMCAN_RX_Msg_14_Sgn_3;
double CANMMCAN_RX_Msg_14_Sgn_4;
UInt8 CANMMCAN_RX_Msg_14_Sgn_5;
UInt8 CANMMCAN_RX_Msg_14_Sgn_6;
UInt8 CANMMCAN_RX_Msg_14_Sgn_7;
UInt8 CANMMCAN_RX_Msg_14_Sgn_8;
double CANMMCAN_RX_Msg_14_Sgn_9;
double CANMMCAN_RX_Msg_14_Sgn_10;
double CANMMCAN_RX_Msg_14_Sgn_11;
UInt8 CANMMCAN_RX_Msg_14_Sgn_12;
UInt8 CANMMCAN_RX_Msg_14_Sgn_13;
Int8 CANMMCAN_RX_Msg_14_Sgn_14;
double CANMMCAN_RX_Msg_14_Sgn_15;
double CANMMCAN_RX_Msg_14_Sgn_16;
double CANMMCAN_RX_Msg_14_Sgn_17;
double CANMMCAN_RX_Msg_14_Sgn_18;
volatile real_T CANMMCAN_RXCT15;
UInt16 CANMMCAN_RX_Msg_15_Sgn_1;
UInt8 CANMMCAN_RX_Msg_15_Sgn_2;
UInt8 CANMMCAN_RX_Msg_15_Sgn_3;
double CANMMCAN_RX_Msg_15_Sgn_4;
UInt8 CANMMCAN_RX_Msg_15_Sgn_5;
UInt8 CANMMCAN_RX_Msg_15_Sgn_6;
UInt8 CANMMCAN_RX_Msg_15_Sgn_7;
UInt8 CANMMCAN_RX_Msg_15_Sgn_8;
double CANMMCAN_RX_Msg_15_Sgn_9;
double CANMMCAN_RX_Msg_15_Sgn_10;
double CANMMCAN_RX_Msg_15_Sgn_11;
UInt8 CANMMCAN_RX_Msg_15_Sgn_12;
UInt8 CANMMCAN_RX_Msg_15_Sgn_13;
Int8 CANMMCAN_RX_Msg_15_Sgn_14;
double CANMMCAN_RX_Msg_15_Sgn_15;
double CANMMCAN_RX_Msg_15_Sgn_16;
double CANMMCAN_RX_Msg_15_Sgn_17;
double CANMMCAN_RX_Msg_15_Sgn_18;
UInt16 CANMMCAN_RX_Msg_15_Sgn_19;
volatile real_T CANMMCAN_RXCT16;
UInt16 CANMMCAN_RX_Msg_16_Sgn_1;
UInt8 CANMMCAN_RX_Msg_16_Sgn_2;
UInt32 CANMMCAN_RX_Msg_16_Sgn_3;
UInt8 CANMMCAN_RX_Msg_16_Sgn_4;
UInt8 CANMMCAN_RX_Msg_16_Sgn_5;
Int8 CANMMCAN_RX_Msg_16_Sgn_6;
UInt16 CANMMCAN_RX_Msg_16_Sgn_7;
UInt8 CANMMCAN_RX_Msg_16_Sgn_8;
UInt8 CANMMCAN_RX_Msg_16_Sgn_9;
double CANMMCAN_RX_Msg_16_Sgn_10;
UInt8 CANMMCAN_RX_Msg_16_Sgn_11;
UInt8 CANMMCAN_RX_Msg_16_Sgn_12;
UInt8 CANMMCAN_RX_Msg_16_Sgn_13;
UInt8 CANMMCAN_RX_Msg_16_Sgn_14;
double CANMMCAN_RX_Msg_16_Sgn_15;
double CANMMCAN_RX_Msg_16_Sgn_16;
double CANMMCAN_RX_Msg_16_Sgn_17;
UInt8 CANMMCAN_RX_Msg_16_Sgn_18;
UInt8 CANMMCAN_RX_Msg_16_Sgn_19;
Int8 CANMMCAN_RX_Msg_16_Sgn_20;
double CANMMCAN_RX_Msg_16_Sgn_21;
double CANMMCAN_RX_Msg_16_Sgn_22;
double CANMMCAN_RX_Msg_16_Sgn_23;
double CANMMCAN_RX_Msg_16_Sgn_24;
volatile real_T CANMMCAN_RXCT17;
UInt16 CANMMCAN_RX_Msg_17_Sgn_1;
UInt32 CANMMCAN_RX_Msg_17_Sgn_2;
UInt8 CANMMCAN_RX_Msg_17_Sgn_3;
double CANMMCAN_RX_Msg_17_Sgn_4;
UInt16 CANMMCAN_RX_Msg_17_Sgn_5;
UInt8 CANMMCAN_RX_Msg_17_Sgn_6;
UInt8 CANMMCAN_RX_Msg_17_Sgn_7;
double CANMMCAN_RX_Msg_17_Sgn_8;
UInt16 CANMMCAN_RX_Msg_17_Sgn_9;
UInt8 CANMMCAN_RX_Msg_17_Sgn_10;
UInt8 CANMMCAN_RX_Msg_17_Sgn_11;
double CANMMCAN_RX_Msg_17_Sgn_12;
double CANMMCAN_RX_Msg_17_Sgn_13;
double CANMMCAN_RX_Msg_17_Sgn_14;
double CANMMCAN_RX_Msg_17_Sgn_15;
UInt8 CANMMCAN_RX_Msg_17_Sgn_16;
UInt8 CANMMCAN_RX_Msg_17_Sgn_17;
UInt8 CANMMCAN_RX_Msg_17_Sgn_18;
UInt8 CANMMCAN_RX_Msg_17_Sgn_19;
UInt8 CANMMCAN_RX_Msg_17_Sgn_20;
UInt8 CANMMCAN_RX_Msg_17_Sgn_21;
UInt8 CANMMCAN_RX_Msg_17_Sgn_22;
UInt8 CANMMCAN_RX_Msg_17_Sgn_23;
UInt8 CANMMCAN_RX_Msg_17_Sgn_24;
UInt8 CANMMCAN_RX_Msg_17_Sgn_25;
UInt8 CANMMCAN_RX_Msg_17_Sgn_26;
UInt8 CANMMCAN_RX_Msg_17_Sgn_27;
UInt8 CANMMCAN_RX_Msg_17_Sgn_28;
UInt8 CANMMCAN_RX_Msg_17_Sgn_29;
UInt8 CANMMCAN_RX_Msg_17_Sgn_30;
UInt8 CANMMCAN_RX_Msg_17_Sgn_31;
UInt8 CANMMCAN_RX_Msg_17_Sgn_32;
UInt8 CANMMCAN_RX_Msg_17_Sgn_33;
UInt8 CANMMCAN_RX_Msg_17_Sgn_34;
UInt8 CANMMCAN_RX_Msg_17_Sgn_35;
UInt8 CANMMCAN_RX_Msg_17_Sgn_36;
double CANMMCAN_RX_Msg_17_Sgn_37;
UInt8 CANMMCAN_RX_Msg_17_Sgn_38;
double CANMMCAN_RX_Msg_17_Sgn_39;
UInt8 CANMMCAN_RX_Msg_17_Sgn_40;
double CANMMCAN_RX_Msg_17_Sgn_41;
UInt8 CANMMCAN_RX_Msg_17_Sgn_42;
double CANMMCAN_RX_Msg_17_Sgn_43;
UInt8 CANMMCAN_RX_Msg_17_Sgn_44;
double CANMMCAN_RX_Msg_17_Sgn_45;
UInt8 CANMMCAN_RX_Msg_17_Sgn_46;
double CANMMCAN_RX_Msg_17_Sgn_47;
UInt8 CANMMCAN_RX_Msg_17_Sgn_48;
double CANMMCAN_RX_Msg_17_Sgn_49;
UInt8 CANMMCAN_RX_Msg_17_Sgn_50;
double CANMMCAN_RX_Msg_17_Sgn_51;
UInt8 CANMMCAN_RX_Msg_17_Sgn_52;
double CANMMCAN_RX_Msg_17_Sgn_53;
UInt8 CANMMCAN_RX_Msg_17_Sgn_54;
double CANMMCAN_RX_Msg_17_Sgn_55;
UInt8 CANMMCAN_RX_Msg_17_Sgn_56;
double CANMMCAN_RX_Msg_17_Sgn_57;
UInt8 CANMMCAN_RX_Msg_17_Sgn_58;
double CANMMCAN_RX_Msg_17_Sgn_59;
UInt8 CANMMCAN_RX_Msg_17_Sgn_60;
double CANMMCAN_RX_Msg_17_Sgn_61;
UInt8 CANMMCAN_RX_Msg_17_Sgn_62;
double CANMMCAN_RX_Msg_17_Sgn_63;
UInt8 CANMMCAN_RX_Msg_17_Sgn_64;
double CANMMCAN_RX_Msg_17_Sgn_65;
UInt8 CANMMCAN_RX_Msg_17_Sgn_66;
double CANMMCAN_RX_Msg_17_Sgn_67;
UInt8 CANMMCAN_RX_Msg_17_Sgn_68;
double CANMMCAN_RX_Msg_17_Sgn_69;
UInt8 CANMMCAN_RX_Msg_17_Sgn_70;
double CANMMCAN_RX_Msg_17_Sgn_71;
UInt8 CANMMCAN_RX_Msg_17_Sgn_72;
double CANMMCAN_RX_Msg_17_Sgn_73;
UInt8 CANMMCAN_RX_Msg_17_Sgn_74;
double CANMMCAN_RX_Msg_17_Sgn_75;
UInt8 CANMMCAN_RX_Msg_17_Sgn_76;
volatile real_T CANMMCAN_RXCT18;
UInt16 CANMMCAN_RX_Msg_18_Sgn_1;
double CANMMCAN_RX_Msg_18_Sgn_2;
UInt8 CANMMCAN_RX_Msg_18_Sgn_3;
double CANMMCAN_RX_Msg_18_Sgn_4;
UInt8 CANMMCAN_RX_Msg_18_Sgn_5;
double CANMMCAN_RX_Msg_18_Sgn_6;
UInt8 CANMMCAN_RX_Msg_18_Sgn_7;
double CANMMCAN_RX_Msg_18_Sgn_8;
UInt8 CANMMCAN_RX_Msg_18_Sgn_9;
double CANMMCAN_RX_Msg_18_Sgn_10;
UInt8 CANMMCAN_RX_Msg_18_Sgn_11;
double CANMMCAN_RX_Msg_18_Sgn_12;
UInt8 CANMMCAN_RX_Msg_18_Sgn_13;
double CANMMCAN_RX_Msg_18_Sgn_14;
UInt8 CANMMCAN_RX_Msg_18_Sgn_15;
double CANMMCAN_RX_Msg_18_Sgn_16;
UInt8 CANMMCAN_RX_Msg_18_Sgn_17;
double CANMMCAN_RX_Msg_18_Sgn_18;
UInt8 CANMMCAN_RX_Msg_18_Sgn_19;
double CANMMCAN_RX_Msg_18_Sgn_20;
UInt8 CANMMCAN_RX_Msg_18_Sgn_21;
double CANMMCAN_RX_Msg_18_Sgn_22;
UInt8 CANMMCAN_RX_Msg_18_Sgn_23;
double CANMMCAN_RX_Msg_18_Sgn_24;
UInt8 CANMMCAN_RX_Msg_18_Sgn_25;
double CANMMCAN_RX_Msg_18_Sgn_26;
UInt8 CANMMCAN_RX_Msg_18_Sgn_27;
double CANMMCAN_RX_Msg_18_Sgn_28;
UInt8 CANMMCAN_RX_Msg_18_Sgn_29;
double CANMMCAN_RX_Msg_18_Sgn_30;
UInt8 CANMMCAN_RX_Msg_18_Sgn_31;
double CANMMCAN_RX_Msg_18_Sgn_32;
UInt8 CANMMCAN_RX_Msg_18_Sgn_33;
double CANMMCAN_RX_Msg_18_Sgn_34;
UInt8 CANMMCAN_RX_Msg_18_Sgn_35;
double CANMMCAN_RX_Msg_18_Sgn_36;
UInt8 CANMMCAN_RX_Msg_18_Sgn_37;
double CANMMCAN_RX_Msg_18_Sgn_38;
UInt8 CANMMCAN_RX_Msg_18_Sgn_39;
double CANMMCAN_RX_Msg_18_Sgn_40;
UInt8 CANMMCAN_RX_Msg_18_Sgn_41;
UInt8 CANMMCAN_RX_Msg_18_Sgn_42;
double CANMMCAN_RX_Msg_18_Sgn_43;
double CANMMCAN_RX_Msg_18_Sgn_44;
UInt8 CANMMCAN_RX_Msg_18_Sgn_45;
UInt8 CANMMCAN_RX_Msg_18_Sgn_46;
double CANMMCAN_RX_Msg_18_Sgn_47;
double CANMMCAN_RX_Msg_18_Sgn_48;
UInt8 CANMMCAN_RX_Msg_18_Sgn_49;
UInt8 CANMMCAN_RX_Msg_18_Sgn_50;
UInt8 CANMMCAN_RX_Msg_18_Sgn_51;
UInt8 CANMMCAN_RX_Msg_18_Sgn_52;
UInt8 CANMMCAN_RX_Msg_18_Sgn_53;
UInt8 CANMMCAN_RX_Msg_18_Sgn_54;
UInt8 CANMMCAN_RX_Msg_18_Sgn_55;
UInt16 CANMMCAN_RX_Msg_18_Sgn_56;
volatile real_T CANMMCAN_RXCT19;
UInt16 CANMMCAN_RX_Msg_19_Sgn_1;
UInt32 CANMMCAN_RX_Msg_19_Sgn_2;
UInt8 CANMMCAN_RX_Msg_19_Sgn_3;
double CANMMCAN_RX_Msg_19_Sgn_4;
UInt16 CANMMCAN_RX_Msg_19_Sgn_5;
UInt8 CANMMCAN_RX_Msg_19_Sgn_6;
UInt8 CANMMCAN_RX_Msg_19_Sgn_7;
double CANMMCAN_RX_Msg_19_Sgn_8;
UInt16 CANMMCAN_RX_Msg_19_Sgn_9;
UInt8 CANMMCAN_RX_Msg_19_Sgn_10;
UInt8 CANMMCAN_RX_Msg_19_Sgn_11;
double CANMMCAN_RX_Msg_19_Sgn_12;
double CANMMCAN_RX_Msg_19_Sgn_13;
double CANMMCAN_RX_Msg_19_Sgn_14;
double CANMMCAN_RX_Msg_19_Sgn_15;
UInt8 CANMMCAN_RX_Msg_19_Sgn_16;
UInt8 CANMMCAN_RX_Msg_19_Sgn_17;
UInt8 CANMMCAN_RX_Msg_19_Sgn_18;
UInt8 CANMMCAN_RX_Msg_19_Sgn_19;
UInt8 CANMMCAN_RX_Msg_19_Sgn_20;
UInt8 CANMMCAN_RX_Msg_19_Sgn_21;
UInt8 CANMMCAN_RX_Msg_19_Sgn_22;
UInt8 CANMMCAN_RX_Msg_19_Sgn_23;
UInt8 CANMMCAN_RX_Msg_19_Sgn_24;
UInt8 CANMMCAN_RX_Msg_19_Sgn_25;
UInt8 CANMMCAN_RX_Msg_19_Sgn_26;
UInt8 CANMMCAN_RX_Msg_19_Sgn_27;
UInt8 CANMMCAN_RX_Msg_19_Sgn_28;
UInt8 CANMMCAN_RX_Msg_19_Sgn_29;
UInt8 CANMMCAN_RX_Msg_19_Sgn_30;
UInt8 CANMMCAN_RX_Msg_19_Sgn_31;
UInt8 CANMMCAN_RX_Msg_19_Sgn_32;
UInt8 CANMMCAN_RX_Msg_19_Sgn_33;
UInt8 CANMMCAN_RX_Msg_19_Sgn_34;
UInt8 CANMMCAN_RX_Msg_19_Sgn_35;
UInt8 CANMMCAN_RX_Msg_19_Sgn_36;
double CANMMCAN_RX_Msg_19_Sgn_37;
UInt8 CANMMCAN_RX_Msg_19_Sgn_38;
double CANMMCAN_RX_Msg_19_Sgn_39;
UInt8 CANMMCAN_RX_Msg_19_Sgn_40;
double CANMMCAN_RX_Msg_19_Sgn_41;
UInt8 CANMMCAN_RX_Msg_19_Sgn_42;
double CANMMCAN_RX_Msg_19_Sgn_43;
UInt8 CANMMCAN_RX_Msg_19_Sgn_44;
double CANMMCAN_RX_Msg_19_Sgn_45;
UInt8 CANMMCAN_RX_Msg_19_Sgn_46;
double CANMMCAN_RX_Msg_19_Sgn_47;
UInt8 CANMMCAN_RX_Msg_19_Sgn_48;
double CANMMCAN_RX_Msg_19_Sgn_49;
UInt8 CANMMCAN_RX_Msg_19_Sgn_50;
double CANMMCAN_RX_Msg_19_Sgn_51;
UInt8 CANMMCAN_RX_Msg_19_Sgn_52;
double CANMMCAN_RX_Msg_19_Sgn_53;
UInt8 CANMMCAN_RX_Msg_19_Sgn_54;
double CANMMCAN_RX_Msg_19_Sgn_55;
UInt8 CANMMCAN_RX_Msg_19_Sgn_56;
double CANMMCAN_RX_Msg_19_Sgn_57;
UInt8 CANMMCAN_RX_Msg_19_Sgn_58;
double CANMMCAN_RX_Msg_19_Sgn_59;
UInt8 CANMMCAN_RX_Msg_19_Sgn_60;
double CANMMCAN_RX_Msg_19_Sgn_61;
UInt8 CANMMCAN_RX_Msg_19_Sgn_62;
double CANMMCAN_RX_Msg_19_Sgn_63;
UInt8 CANMMCAN_RX_Msg_19_Sgn_64;
double CANMMCAN_RX_Msg_19_Sgn_65;
UInt8 CANMMCAN_RX_Msg_19_Sgn_66;
double CANMMCAN_RX_Msg_19_Sgn_67;
UInt8 CANMMCAN_RX_Msg_19_Sgn_68;
double CANMMCAN_RX_Msg_19_Sgn_69;
UInt8 CANMMCAN_RX_Msg_19_Sgn_70;
double CANMMCAN_RX_Msg_19_Sgn_71;
UInt8 CANMMCAN_RX_Msg_19_Sgn_72;
double CANMMCAN_RX_Msg_19_Sgn_73;
UInt8 CANMMCAN_RX_Msg_19_Sgn_74;
double CANMMCAN_RX_Msg_19_Sgn_75;
UInt8 CANMMCAN_RX_Msg_19_Sgn_76;
volatile real_T CANMMCAN_RXCT20;
UInt16 CANMMCAN_RX_Msg_20_Sgn_1;
double CANMMCAN_RX_Msg_20_Sgn_2;
UInt8 CANMMCAN_RX_Msg_20_Sgn_3;
double CANMMCAN_RX_Msg_20_Sgn_4;
UInt8 CANMMCAN_RX_Msg_20_Sgn_5;
double CANMMCAN_RX_Msg_20_Sgn_6;
UInt8 CANMMCAN_RX_Msg_20_Sgn_7;
double CANMMCAN_RX_Msg_20_Sgn_8;
UInt8 CANMMCAN_RX_Msg_20_Sgn_9;
double CANMMCAN_RX_Msg_20_Sgn_10;
UInt8 CANMMCAN_RX_Msg_20_Sgn_11;
double CANMMCAN_RX_Msg_20_Sgn_12;
UInt8 CANMMCAN_RX_Msg_20_Sgn_13;
double CANMMCAN_RX_Msg_20_Sgn_14;
UInt8 CANMMCAN_RX_Msg_20_Sgn_15;
double CANMMCAN_RX_Msg_20_Sgn_16;
UInt8 CANMMCAN_RX_Msg_20_Sgn_17;
double CANMMCAN_RX_Msg_20_Sgn_18;
UInt8 CANMMCAN_RX_Msg_20_Sgn_19;
double CANMMCAN_RX_Msg_20_Sgn_20;
UInt8 CANMMCAN_RX_Msg_20_Sgn_21;
double CANMMCAN_RX_Msg_20_Sgn_22;
UInt8 CANMMCAN_RX_Msg_20_Sgn_23;
double CANMMCAN_RX_Msg_20_Sgn_24;
UInt8 CANMMCAN_RX_Msg_20_Sgn_25;
double CANMMCAN_RX_Msg_20_Sgn_26;
UInt8 CANMMCAN_RX_Msg_20_Sgn_27;
double CANMMCAN_RX_Msg_20_Sgn_28;
UInt8 CANMMCAN_RX_Msg_20_Sgn_29;
double CANMMCAN_RX_Msg_20_Sgn_30;
UInt8 CANMMCAN_RX_Msg_20_Sgn_31;
double CANMMCAN_RX_Msg_20_Sgn_32;
UInt8 CANMMCAN_RX_Msg_20_Sgn_33;
double CANMMCAN_RX_Msg_20_Sgn_34;
UInt8 CANMMCAN_RX_Msg_20_Sgn_35;
double CANMMCAN_RX_Msg_20_Sgn_36;
UInt8 CANMMCAN_RX_Msg_20_Sgn_37;
double CANMMCAN_RX_Msg_20_Sgn_38;
UInt8 CANMMCAN_RX_Msg_20_Sgn_39;
double CANMMCAN_RX_Msg_20_Sgn_40;
UInt8 CANMMCAN_RX_Msg_20_Sgn_41;
UInt8 CANMMCAN_RX_Msg_20_Sgn_42;
double CANMMCAN_RX_Msg_20_Sgn_43;
double CANMMCAN_RX_Msg_20_Sgn_44;
UInt8 CANMMCAN_RX_Msg_20_Sgn_45;
UInt8 CANMMCAN_RX_Msg_20_Sgn_46;
double CANMMCAN_RX_Msg_20_Sgn_47;
double CANMMCAN_RX_Msg_20_Sgn_48;
UInt8 CANMMCAN_RX_Msg_20_Sgn_49;
UInt8 CANMMCAN_RX_Msg_20_Sgn_50;
UInt8 CANMMCAN_RX_Msg_20_Sgn_51;
UInt8 CANMMCAN_RX_Msg_20_Sgn_52;
UInt8 CANMMCAN_RX_Msg_20_Sgn_53;
UInt8 CANMMCAN_RX_Msg_20_Sgn_54;
UInt8 CANMMCAN_RX_Msg_20_Sgn_55;
UInt16 CANMMCAN_RX_Msg_20_Sgn_56;
volatile real_T CANMMCAN_RXCT21;
UInt16 CANMMCAN_RX_Msg_21_Sgn_1;
UInt32 CANMMCAN_RX_Msg_21_Sgn_2;
UInt8 CANMMCAN_RX_Msg_21_Sgn_3;
double CANMMCAN_RX_Msg_21_Sgn_4;
UInt16 CANMMCAN_RX_Msg_21_Sgn_5;
UInt8 CANMMCAN_RX_Msg_21_Sgn_6;
UInt8 CANMMCAN_RX_Msg_21_Sgn_7;
double CANMMCAN_RX_Msg_21_Sgn_8;
UInt16 CANMMCAN_RX_Msg_21_Sgn_9;
UInt8 CANMMCAN_RX_Msg_21_Sgn_10;
UInt8 CANMMCAN_RX_Msg_21_Sgn_11;
double CANMMCAN_RX_Msg_21_Sgn_12;
double CANMMCAN_RX_Msg_21_Sgn_13;
double CANMMCAN_RX_Msg_21_Sgn_14;
double CANMMCAN_RX_Msg_21_Sgn_15;
UInt8 CANMMCAN_RX_Msg_21_Sgn_16;
UInt8 CANMMCAN_RX_Msg_21_Sgn_17;
UInt8 CANMMCAN_RX_Msg_21_Sgn_18;
UInt8 CANMMCAN_RX_Msg_21_Sgn_19;
UInt8 CANMMCAN_RX_Msg_21_Sgn_20;
UInt8 CANMMCAN_RX_Msg_21_Sgn_21;
UInt8 CANMMCAN_RX_Msg_21_Sgn_22;
UInt8 CANMMCAN_RX_Msg_21_Sgn_23;
UInt8 CANMMCAN_RX_Msg_21_Sgn_24;
UInt8 CANMMCAN_RX_Msg_21_Sgn_25;
UInt8 CANMMCAN_RX_Msg_21_Sgn_26;
UInt8 CANMMCAN_RX_Msg_21_Sgn_27;
UInt8 CANMMCAN_RX_Msg_21_Sgn_28;
UInt8 CANMMCAN_RX_Msg_21_Sgn_29;
UInt8 CANMMCAN_RX_Msg_21_Sgn_30;
UInt8 CANMMCAN_RX_Msg_21_Sgn_31;
UInt8 CANMMCAN_RX_Msg_21_Sgn_32;
UInt8 CANMMCAN_RX_Msg_21_Sgn_33;
UInt8 CANMMCAN_RX_Msg_21_Sgn_34;
UInt8 CANMMCAN_RX_Msg_21_Sgn_35;
UInt8 CANMMCAN_RX_Msg_21_Sgn_36;
double CANMMCAN_RX_Msg_21_Sgn_37;
UInt8 CANMMCAN_RX_Msg_21_Sgn_38;
double CANMMCAN_RX_Msg_21_Sgn_39;
UInt8 CANMMCAN_RX_Msg_21_Sgn_40;
double CANMMCAN_RX_Msg_21_Sgn_41;
UInt8 CANMMCAN_RX_Msg_21_Sgn_42;
double CANMMCAN_RX_Msg_21_Sgn_43;
UInt8 CANMMCAN_RX_Msg_21_Sgn_44;
double CANMMCAN_RX_Msg_21_Sgn_45;
UInt8 CANMMCAN_RX_Msg_21_Sgn_46;
double CANMMCAN_RX_Msg_21_Sgn_47;
UInt8 CANMMCAN_RX_Msg_21_Sgn_48;
double CANMMCAN_RX_Msg_21_Sgn_49;
UInt8 CANMMCAN_RX_Msg_21_Sgn_50;
double CANMMCAN_RX_Msg_21_Sgn_51;
UInt8 CANMMCAN_RX_Msg_21_Sgn_52;
double CANMMCAN_RX_Msg_21_Sgn_53;
UInt8 CANMMCAN_RX_Msg_21_Sgn_54;
double CANMMCAN_RX_Msg_21_Sgn_55;
UInt8 CANMMCAN_RX_Msg_21_Sgn_56;
double CANMMCAN_RX_Msg_21_Sgn_57;
UInt8 CANMMCAN_RX_Msg_21_Sgn_58;
double CANMMCAN_RX_Msg_21_Sgn_59;
UInt8 CANMMCAN_RX_Msg_21_Sgn_60;
double CANMMCAN_RX_Msg_21_Sgn_61;
UInt8 CANMMCAN_RX_Msg_21_Sgn_62;
double CANMMCAN_RX_Msg_21_Sgn_63;
UInt8 CANMMCAN_RX_Msg_21_Sgn_64;
double CANMMCAN_RX_Msg_21_Sgn_65;
UInt8 CANMMCAN_RX_Msg_21_Sgn_66;
double CANMMCAN_RX_Msg_21_Sgn_67;
UInt8 CANMMCAN_RX_Msg_21_Sgn_68;
double CANMMCAN_RX_Msg_21_Sgn_69;
UInt8 CANMMCAN_RX_Msg_21_Sgn_70;
double CANMMCAN_RX_Msg_21_Sgn_71;
UInt8 CANMMCAN_RX_Msg_21_Sgn_72;
double CANMMCAN_RX_Msg_21_Sgn_73;
UInt8 CANMMCAN_RX_Msg_21_Sgn_74;
double CANMMCAN_RX_Msg_21_Sgn_75;
UInt8 CANMMCAN_RX_Msg_21_Sgn_76;
volatile real_T CANMMCAN_RXCT22;
UInt16 CANMMCAN_RX_Msg_22_Sgn_1;
double CANMMCAN_RX_Msg_22_Sgn_2;
UInt8 CANMMCAN_RX_Msg_22_Sgn_3;
double CANMMCAN_RX_Msg_22_Sgn_4;
UInt8 CANMMCAN_RX_Msg_22_Sgn_5;
double CANMMCAN_RX_Msg_22_Sgn_6;
UInt8 CANMMCAN_RX_Msg_22_Sgn_7;
double CANMMCAN_RX_Msg_22_Sgn_8;
UInt8 CANMMCAN_RX_Msg_22_Sgn_9;
double CANMMCAN_RX_Msg_22_Sgn_10;
UInt8 CANMMCAN_RX_Msg_22_Sgn_11;
double CANMMCAN_RX_Msg_22_Sgn_12;
UInt8 CANMMCAN_RX_Msg_22_Sgn_13;
double CANMMCAN_RX_Msg_22_Sgn_14;
UInt8 CANMMCAN_RX_Msg_22_Sgn_15;
double CANMMCAN_RX_Msg_22_Sgn_16;
UInt8 CANMMCAN_RX_Msg_22_Sgn_17;
double CANMMCAN_RX_Msg_22_Sgn_18;
UInt8 CANMMCAN_RX_Msg_22_Sgn_19;
double CANMMCAN_RX_Msg_22_Sgn_20;
UInt8 CANMMCAN_RX_Msg_22_Sgn_21;
double CANMMCAN_RX_Msg_22_Sgn_22;
UInt8 CANMMCAN_RX_Msg_22_Sgn_23;
double CANMMCAN_RX_Msg_22_Sgn_24;
UInt8 CANMMCAN_RX_Msg_22_Sgn_25;
double CANMMCAN_RX_Msg_22_Sgn_26;
UInt8 CANMMCAN_RX_Msg_22_Sgn_27;
double CANMMCAN_RX_Msg_22_Sgn_28;
UInt8 CANMMCAN_RX_Msg_22_Sgn_29;
double CANMMCAN_RX_Msg_22_Sgn_30;
UInt8 CANMMCAN_RX_Msg_22_Sgn_31;
double CANMMCAN_RX_Msg_22_Sgn_32;
UInt8 CANMMCAN_RX_Msg_22_Sgn_33;
double CANMMCAN_RX_Msg_22_Sgn_34;
UInt8 CANMMCAN_RX_Msg_22_Sgn_35;
double CANMMCAN_RX_Msg_22_Sgn_36;
UInt8 CANMMCAN_RX_Msg_22_Sgn_37;
double CANMMCAN_RX_Msg_22_Sgn_38;
UInt8 CANMMCAN_RX_Msg_22_Sgn_39;
double CANMMCAN_RX_Msg_22_Sgn_40;
UInt8 CANMMCAN_RX_Msg_22_Sgn_41;
UInt8 CANMMCAN_RX_Msg_22_Sgn_42;
double CANMMCAN_RX_Msg_22_Sgn_43;
double CANMMCAN_RX_Msg_22_Sgn_44;
UInt8 CANMMCAN_RX_Msg_22_Sgn_45;
UInt8 CANMMCAN_RX_Msg_22_Sgn_46;
double CANMMCAN_RX_Msg_22_Sgn_47;
double CANMMCAN_RX_Msg_22_Sgn_48;
UInt8 CANMMCAN_RX_Msg_22_Sgn_49;
UInt8 CANMMCAN_RX_Msg_22_Sgn_50;
UInt8 CANMMCAN_RX_Msg_22_Sgn_51;
UInt8 CANMMCAN_RX_Msg_22_Sgn_52;
UInt8 CANMMCAN_RX_Msg_22_Sgn_53;
UInt8 CANMMCAN_RX_Msg_22_Sgn_54;
UInt8 CANMMCAN_RX_Msg_22_Sgn_55;
UInt16 CANMMCAN_RX_Msg_22_Sgn_56;
volatile real_T CANMMCAN_RXCT23;
UInt16 CANMMCAN_RX_Msg_23_Sgn_1;
UInt32 CANMMCAN_RX_Msg_23_Sgn_2;
UInt8 CANMMCAN_RX_Msg_23_Sgn_3;
double CANMMCAN_RX_Msg_23_Sgn_4;
UInt16 CANMMCAN_RX_Msg_23_Sgn_5;
UInt8 CANMMCAN_RX_Msg_23_Sgn_6;
UInt8 CANMMCAN_RX_Msg_23_Sgn_7;
double CANMMCAN_RX_Msg_23_Sgn_8;
UInt16 CANMMCAN_RX_Msg_23_Sgn_9;
UInt8 CANMMCAN_RX_Msg_23_Sgn_10;
UInt8 CANMMCAN_RX_Msg_23_Sgn_11;
double CANMMCAN_RX_Msg_23_Sgn_12;
double CANMMCAN_RX_Msg_23_Sgn_13;
double CANMMCAN_RX_Msg_23_Sgn_14;
double CANMMCAN_RX_Msg_23_Sgn_15;
UInt8 CANMMCAN_RX_Msg_23_Sgn_16;
UInt8 CANMMCAN_RX_Msg_23_Sgn_17;
UInt8 CANMMCAN_RX_Msg_23_Sgn_18;
UInt8 CANMMCAN_RX_Msg_23_Sgn_19;
UInt8 CANMMCAN_RX_Msg_23_Sgn_20;
UInt8 CANMMCAN_RX_Msg_23_Sgn_21;
UInt8 CANMMCAN_RX_Msg_23_Sgn_22;
UInt8 CANMMCAN_RX_Msg_23_Sgn_23;
UInt8 CANMMCAN_RX_Msg_23_Sgn_24;
UInt8 CANMMCAN_RX_Msg_23_Sgn_25;
UInt8 CANMMCAN_RX_Msg_23_Sgn_26;
UInt8 CANMMCAN_RX_Msg_23_Sgn_27;
UInt8 CANMMCAN_RX_Msg_23_Sgn_28;
UInt8 CANMMCAN_RX_Msg_23_Sgn_29;
UInt8 CANMMCAN_RX_Msg_23_Sgn_30;
UInt8 CANMMCAN_RX_Msg_23_Sgn_31;
UInt8 CANMMCAN_RX_Msg_23_Sgn_32;
UInt8 CANMMCAN_RX_Msg_23_Sgn_33;
UInt8 CANMMCAN_RX_Msg_23_Sgn_34;
UInt8 CANMMCAN_RX_Msg_23_Sgn_35;
UInt8 CANMMCAN_RX_Msg_23_Sgn_36;
double CANMMCAN_RX_Msg_23_Sgn_37;
UInt8 CANMMCAN_RX_Msg_23_Sgn_38;
double CANMMCAN_RX_Msg_23_Sgn_39;
UInt8 CANMMCAN_RX_Msg_23_Sgn_40;
double CANMMCAN_RX_Msg_23_Sgn_41;
UInt8 CANMMCAN_RX_Msg_23_Sgn_42;
double CANMMCAN_RX_Msg_23_Sgn_43;
UInt8 CANMMCAN_RX_Msg_23_Sgn_44;
double CANMMCAN_RX_Msg_23_Sgn_45;
UInt8 CANMMCAN_RX_Msg_23_Sgn_46;
double CANMMCAN_RX_Msg_23_Sgn_47;
UInt8 CANMMCAN_RX_Msg_23_Sgn_48;
double CANMMCAN_RX_Msg_23_Sgn_49;
UInt8 CANMMCAN_RX_Msg_23_Sgn_50;
double CANMMCAN_RX_Msg_23_Sgn_51;
UInt8 CANMMCAN_RX_Msg_23_Sgn_52;
double CANMMCAN_RX_Msg_23_Sgn_53;
UInt8 CANMMCAN_RX_Msg_23_Sgn_54;
double CANMMCAN_RX_Msg_23_Sgn_55;
UInt8 CANMMCAN_RX_Msg_23_Sgn_56;
double CANMMCAN_RX_Msg_23_Sgn_57;
UInt8 CANMMCAN_RX_Msg_23_Sgn_58;
double CANMMCAN_RX_Msg_23_Sgn_59;
UInt8 CANMMCAN_RX_Msg_23_Sgn_60;
double CANMMCAN_RX_Msg_23_Sgn_61;
UInt8 CANMMCAN_RX_Msg_23_Sgn_62;
double CANMMCAN_RX_Msg_23_Sgn_63;
UInt8 CANMMCAN_RX_Msg_23_Sgn_64;
double CANMMCAN_RX_Msg_23_Sgn_65;
UInt8 CANMMCAN_RX_Msg_23_Sgn_66;
double CANMMCAN_RX_Msg_23_Sgn_67;
UInt8 CANMMCAN_RX_Msg_23_Sgn_68;
double CANMMCAN_RX_Msg_23_Sgn_69;
UInt8 CANMMCAN_RX_Msg_23_Sgn_70;
double CANMMCAN_RX_Msg_23_Sgn_71;
UInt8 CANMMCAN_RX_Msg_23_Sgn_72;
double CANMMCAN_RX_Msg_23_Sgn_73;
UInt8 CANMMCAN_RX_Msg_23_Sgn_74;
double CANMMCAN_RX_Msg_23_Sgn_75;
UInt8 CANMMCAN_RX_Msg_23_Sgn_76;
volatile real_T CANMMCAN_RXCT24;
UInt16 CANMMCAN_RX_Msg_24_Sgn_1;
double CANMMCAN_RX_Msg_24_Sgn_2;
UInt8 CANMMCAN_RX_Msg_24_Sgn_3;
double CANMMCAN_RX_Msg_24_Sgn_4;
UInt8 CANMMCAN_RX_Msg_24_Sgn_5;
double CANMMCAN_RX_Msg_24_Sgn_6;
UInt8 CANMMCAN_RX_Msg_24_Sgn_7;
double CANMMCAN_RX_Msg_24_Sgn_8;
UInt8 CANMMCAN_RX_Msg_24_Sgn_9;
double CANMMCAN_RX_Msg_24_Sgn_10;
UInt8 CANMMCAN_RX_Msg_24_Sgn_11;
double CANMMCAN_RX_Msg_24_Sgn_12;
UInt8 CANMMCAN_RX_Msg_24_Sgn_13;
double CANMMCAN_RX_Msg_24_Sgn_14;
UInt8 CANMMCAN_RX_Msg_24_Sgn_15;
double CANMMCAN_RX_Msg_24_Sgn_16;
UInt8 CANMMCAN_RX_Msg_24_Sgn_17;
double CANMMCAN_RX_Msg_24_Sgn_18;
UInt8 CANMMCAN_RX_Msg_24_Sgn_19;
double CANMMCAN_RX_Msg_24_Sgn_20;
UInt8 CANMMCAN_RX_Msg_24_Sgn_21;
double CANMMCAN_RX_Msg_24_Sgn_22;
UInt8 CANMMCAN_RX_Msg_24_Sgn_23;
double CANMMCAN_RX_Msg_24_Sgn_24;
UInt8 CANMMCAN_RX_Msg_24_Sgn_25;
double CANMMCAN_RX_Msg_24_Sgn_26;
UInt8 CANMMCAN_RX_Msg_24_Sgn_27;
double CANMMCAN_RX_Msg_24_Sgn_28;
UInt8 CANMMCAN_RX_Msg_24_Sgn_29;
double CANMMCAN_RX_Msg_24_Sgn_30;
UInt8 CANMMCAN_RX_Msg_24_Sgn_31;
double CANMMCAN_RX_Msg_24_Sgn_32;
UInt8 CANMMCAN_RX_Msg_24_Sgn_33;
double CANMMCAN_RX_Msg_24_Sgn_34;
UInt8 CANMMCAN_RX_Msg_24_Sgn_35;
double CANMMCAN_RX_Msg_24_Sgn_36;
UInt8 CANMMCAN_RX_Msg_24_Sgn_37;
double CANMMCAN_RX_Msg_24_Sgn_38;
UInt8 CANMMCAN_RX_Msg_24_Sgn_39;
double CANMMCAN_RX_Msg_24_Sgn_40;
UInt8 CANMMCAN_RX_Msg_24_Sgn_41;
UInt8 CANMMCAN_RX_Msg_24_Sgn_42;
double CANMMCAN_RX_Msg_24_Sgn_43;
double CANMMCAN_RX_Msg_24_Sgn_44;
UInt8 CANMMCAN_RX_Msg_24_Sgn_45;
UInt8 CANMMCAN_RX_Msg_24_Sgn_46;
double CANMMCAN_RX_Msg_24_Sgn_47;
double CANMMCAN_RX_Msg_24_Sgn_48;
UInt8 CANMMCAN_RX_Msg_24_Sgn_49;
UInt8 CANMMCAN_RX_Msg_24_Sgn_50;
UInt8 CANMMCAN_RX_Msg_24_Sgn_51;
UInt8 CANMMCAN_RX_Msg_24_Sgn_52;
UInt8 CANMMCAN_RX_Msg_24_Sgn_53;
UInt8 CANMMCAN_RX_Msg_24_Sgn_54;
UInt8 CANMMCAN_RX_Msg_24_Sgn_55;
UInt16 CANMMCAN_RX_Msg_24_Sgn_56;
volatile real_T CANMMCAN_RXCT25;
UInt16 CANMMCAN_RX_Msg_25_Sgn_1;
UInt32 CANMMCAN_RX_Msg_25_Sgn_2;
UInt8 CANMMCAN_RX_Msg_25_Sgn_3;
double CANMMCAN_RX_Msg_25_Sgn_4;
UInt16 CANMMCAN_RX_Msg_25_Sgn_5;
UInt8 CANMMCAN_RX_Msg_25_Sgn_6;
UInt8 CANMMCAN_RX_Msg_25_Sgn_7;
double CANMMCAN_RX_Msg_25_Sgn_8;
UInt16 CANMMCAN_RX_Msg_25_Sgn_9;
UInt8 CANMMCAN_RX_Msg_25_Sgn_10;
UInt8 CANMMCAN_RX_Msg_25_Sgn_11;
double CANMMCAN_RX_Msg_25_Sgn_12;
double CANMMCAN_RX_Msg_25_Sgn_13;
double CANMMCAN_RX_Msg_25_Sgn_14;
double CANMMCAN_RX_Msg_25_Sgn_15;
UInt8 CANMMCAN_RX_Msg_25_Sgn_16;
UInt8 CANMMCAN_RX_Msg_25_Sgn_17;
UInt8 CANMMCAN_RX_Msg_25_Sgn_18;
UInt8 CANMMCAN_RX_Msg_25_Sgn_19;
UInt8 CANMMCAN_RX_Msg_25_Sgn_20;
UInt8 CANMMCAN_RX_Msg_25_Sgn_21;
UInt8 CANMMCAN_RX_Msg_25_Sgn_22;
UInt8 CANMMCAN_RX_Msg_25_Sgn_23;
UInt8 CANMMCAN_RX_Msg_25_Sgn_24;
UInt8 CANMMCAN_RX_Msg_25_Sgn_25;
UInt8 CANMMCAN_RX_Msg_25_Sgn_26;
UInt8 CANMMCAN_RX_Msg_25_Sgn_27;
UInt8 CANMMCAN_RX_Msg_25_Sgn_28;
UInt8 CANMMCAN_RX_Msg_25_Sgn_29;
UInt8 CANMMCAN_RX_Msg_25_Sgn_30;
UInt8 CANMMCAN_RX_Msg_25_Sgn_31;
UInt8 CANMMCAN_RX_Msg_25_Sgn_32;
UInt8 CANMMCAN_RX_Msg_25_Sgn_33;
UInt8 CANMMCAN_RX_Msg_25_Sgn_34;
UInt8 CANMMCAN_RX_Msg_25_Sgn_35;
UInt8 CANMMCAN_RX_Msg_25_Sgn_36;
double CANMMCAN_RX_Msg_25_Sgn_37;
UInt8 CANMMCAN_RX_Msg_25_Sgn_38;
double CANMMCAN_RX_Msg_25_Sgn_39;
UInt8 CANMMCAN_RX_Msg_25_Sgn_40;
double CANMMCAN_RX_Msg_25_Sgn_41;
UInt8 CANMMCAN_RX_Msg_25_Sgn_42;
double CANMMCAN_RX_Msg_25_Sgn_43;
UInt8 CANMMCAN_RX_Msg_25_Sgn_44;
double CANMMCAN_RX_Msg_25_Sgn_45;
UInt8 CANMMCAN_RX_Msg_25_Sgn_46;
double CANMMCAN_RX_Msg_25_Sgn_47;
UInt8 CANMMCAN_RX_Msg_25_Sgn_48;
double CANMMCAN_RX_Msg_25_Sgn_49;
UInt8 CANMMCAN_RX_Msg_25_Sgn_50;
double CANMMCAN_RX_Msg_25_Sgn_51;
UInt8 CANMMCAN_RX_Msg_25_Sgn_52;
double CANMMCAN_RX_Msg_25_Sgn_53;
UInt8 CANMMCAN_RX_Msg_25_Sgn_54;
double CANMMCAN_RX_Msg_25_Sgn_55;
UInt8 CANMMCAN_RX_Msg_25_Sgn_56;
double CANMMCAN_RX_Msg_25_Sgn_57;
UInt8 CANMMCAN_RX_Msg_25_Sgn_58;
double CANMMCAN_RX_Msg_25_Sgn_59;
UInt8 CANMMCAN_RX_Msg_25_Sgn_60;
double CANMMCAN_RX_Msg_25_Sgn_61;
UInt8 CANMMCAN_RX_Msg_25_Sgn_62;
double CANMMCAN_RX_Msg_25_Sgn_63;
UInt8 CANMMCAN_RX_Msg_25_Sgn_64;
double CANMMCAN_RX_Msg_25_Sgn_65;
UInt8 CANMMCAN_RX_Msg_25_Sgn_66;
double CANMMCAN_RX_Msg_25_Sgn_67;
UInt8 CANMMCAN_RX_Msg_25_Sgn_68;
double CANMMCAN_RX_Msg_25_Sgn_69;
UInt8 CANMMCAN_RX_Msg_25_Sgn_70;
double CANMMCAN_RX_Msg_25_Sgn_71;
UInt8 CANMMCAN_RX_Msg_25_Sgn_72;
double CANMMCAN_RX_Msg_25_Sgn_73;
UInt8 CANMMCAN_RX_Msg_25_Sgn_74;
double CANMMCAN_RX_Msg_25_Sgn_75;
UInt8 CANMMCAN_RX_Msg_25_Sgn_76;
volatile real_T CANMMCAN_RXCT26;
UInt16 CANMMCAN_RX_Msg_26_Sgn_1;
double CANMMCAN_RX_Msg_26_Sgn_2;
UInt8 CANMMCAN_RX_Msg_26_Sgn_3;
double CANMMCAN_RX_Msg_26_Sgn_4;
UInt8 CANMMCAN_RX_Msg_26_Sgn_5;
double CANMMCAN_RX_Msg_26_Sgn_6;
UInt8 CANMMCAN_RX_Msg_26_Sgn_7;
double CANMMCAN_RX_Msg_26_Sgn_8;
UInt8 CANMMCAN_RX_Msg_26_Sgn_9;
double CANMMCAN_RX_Msg_26_Sgn_10;
UInt8 CANMMCAN_RX_Msg_26_Sgn_11;
double CANMMCAN_RX_Msg_26_Sgn_12;
UInt8 CANMMCAN_RX_Msg_26_Sgn_13;
double CANMMCAN_RX_Msg_26_Sgn_14;
UInt8 CANMMCAN_RX_Msg_26_Sgn_15;
double CANMMCAN_RX_Msg_26_Sgn_16;
UInt8 CANMMCAN_RX_Msg_26_Sgn_17;
double CANMMCAN_RX_Msg_26_Sgn_18;
UInt8 CANMMCAN_RX_Msg_26_Sgn_19;
double CANMMCAN_RX_Msg_26_Sgn_20;
UInt8 CANMMCAN_RX_Msg_26_Sgn_21;
double CANMMCAN_RX_Msg_26_Sgn_22;
UInt8 CANMMCAN_RX_Msg_26_Sgn_23;
double CANMMCAN_RX_Msg_26_Sgn_24;
UInt8 CANMMCAN_RX_Msg_26_Sgn_25;
double CANMMCAN_RX_Msg_26_Sgn_26;
UInt8 CANMMCAN_RX_Msg_26_Sgn_27;
double CANMMCAN_RX_Msg_26_Sgn_28;
UInt8 CANMMCAN_RX_Msg_26_Sgn_29;
double CANMMCAN_RX_Msg_26_Sgn_30;
UInt8 CANMMCAN_RX_Msg_26_Sgn_31;
double CANMMCAN_RX_Msg_26_Sgn_32;
UInt8 CANMMCAN_RX_Msg_26_Sgn_33;
double CANMMCAN_RX_Msg_26_Sgn_34;
UInt8 CANMMCAN_RX_Msg_26_Sgn_35;
double CANMMCAN_RX_Msg_26_Sgn_36;
UInt8 CANMMCAN_RX_Msg_26_Sgn_37;
double CANMMCAN_RX_Msg_26_Sgn_38;
UInt8 CANMMCAN_RX_Msg_26_Sgn_39;
double CANMMCAN_RX_Msg_26_Sgn_40;
UInt8 CANMMCAN_RX_Msg_26_Sgn_41;
UInt8 CANMMCAN_RX_Msg_26_Sgn_42;
double CANMMCAN_RX_Msg_26_Sgn_43;
double CANMMCAN_RX_Msg_26_Sgn_44;
UInt8 CANMMCAN_RX_Msg_26_Sgn_45;
UInt8 CANMMCAN_RX_Msg_26_Sgn_46;
double CANMMCAN_RX_Msg_26_Sgn_47;
double CANMMCAN_RX_Msg_26_Sgn_48;
UInt8 CANMMCAN_RX_Msg_26_Sgn_49;
UInt8 CANMMCAN_RX_Msg_26_Sgn_50;
UInt8 CANMMCAN_RX_Msg_26_Sgn_51;
UInt8 CANMMCAN_RX_Msg_26_Sgn_52;
UInt8 CANMMCAN_RX_Msg_26_Sgn_53;
UInt8 CANMMCAN_RX_Msg_26_Sgn_54;
UInt8 CANMMCAN_RX_Msg_26_Sgn_55;
UInt16 CANMMCAN_RX_Msg_26_Sgn_56;
volatile real_T CANMMCAN_RXCT27;
UInt16 CANMMCAN_RX_Msg_27_Sgn_1;
UInt32 CANMMCAN_RX_Msg_27_Sgn_2;
UInt8 CANMMCAN_RX_Msg_27_Sgn_3;
double CANMMCAN_RX_Msg_27_Sgn_4;
UInt16 CANMMCAN_RX_Msg_27_Sgn_5;
UInt8 CANMMCAN_RX_Msg_27_Sgn_6;
UInt8 CANMMCAN_RX_Msg_27_Sgn_7;
double CANMMCAN_RX_Msg_27_Sgn_8;
UInt16 CANMMCAN_RX_Msg_27_Sgn_9;
UInt8 CANMMCAN_RX_Msg_27_Sgn_10;
UInt8 CANMMCAN_RX_Msg_27_Sgn_11;
double CANMMCAN_RX_Msg_27_Sgn_12;
double CANMMCAN_RX_Msg_27_Sgn_13;
double CANMMCAN_RX_Msg_27_Sgn_14;
double CANMMCAN_RX_Msg_27_Sgn_15;
UInt8 CANMMCAN_RX_Msg_27_Sgn_16;
UInt8 CANMMCAN_RX_Msg_27_Sgn_17;
UInt8 CANMMCAN_RX_Msg_27_Sgn_18;
UInt8 CANMMCAN_RX_Msg_27_Sgn_19;
UInt8 CANMMCAN_RX_Msg_27_Sgn_20;
UInt8 CANMMCAN_RX_Msg_27_Sgn_21;
UInt8 CANMMCAN_RX_Msg_27_Sgn_22;
UInt8 CANMMCAN_RX_Msg_27_Sgn_23;
UInt8 CANMMCAN_RX_Msg_27_Sgn_24;
UInt8 CANMMCAN_RX_Msg_27_Sgn_25;
UInt8 CANMMCAN_RX_Msg_27_Sgn_26;
UInt8 CANMMCAN_RX_Msg_27_Sgn_27;
UInt8 CANMMCAN_RX_Msg_27_Sgn_28;
UInt8 CANMMCAN_RX_Msg_27_Sgn_29;
UInt8 CANMMCAN_RX_Msg_27_Sgn_30;
UInt8 CANMMCAN_RX_Msg_27_Sgn_31;
UInt8 CANMMCAN_RX_Msg_27_Sgn_32;
UInt8 CANMMCAN_RX_Msg_27_Sgn_33;
UInt8 CANMMCAN_RX_Msg_27_Sgn_34;
UInt8 CANMMCAN_RX_Msg_27_Sgn_35;
UInt8 CANMMCAN_RX_Msg_27_Sgn_36;
double CANMMCAN_RX_Msg_27_Sgn_37;
UInt8 CANMMCAN_RX_Msg_27_Sgn_38;
double CANMMCAN_RX_Msg_27_Sgn_39;
UInt8 CANMMCAN_RX_Msg_27_Sgn_40;
double CANMMCAN_RX_Msg_27_Sgn_41;
UInt8 CANMMCAN_RX_Msg_27_Sgn_42;
double CANMMCAN_RX_Msg_27_Sgn_43;
UInt8 CANMMCAN_RX_Msg_27_Sgn_44;
double CANMMCAN_RX_Msg_27_Sgn_45;
UInt8 CANMMCAN_RX_Msg_27_Sgn_46;
double CANMMCAN_RX_Msg_27_Sgn_47;
UInt8 CANMMCAN_RX_Msg_27_Sgn_48;
double CANMMCAN_RX_Msg_27_Sgn_49;
UInt8 CANMMCAN_RX_Msg_27_Sgn_50;
double CANMMCAN_RX_Msg_27_Sgn_51;
UInt8 CANMMCAN_RX_Msg_27_Sgn_52;
double CANMMCAN_RX_Msg_27_Sgn_53;
UInt8 CANMMCAN_RX_Msg_27_Sgn_54;
double CANMMCAN_RX_Msg_27_Sgn_55;
UInt8 CANMMCAN_RX_Msg_27_Sgn_56;
double CANMMCAN_RX_Msg_27_Sgn_57;
UInt8 CANMMCAN_RX_Msg_27_Sgn_58;
double CANMMCAN_RX_Msg_27_Sgn_59;
UInt8 CANMMCAN_RX_Msg_27_Sgn_60;
double CANMMCAN_RX_Msg_27_Sgn_61;
UInt8 CANMMCAN_RX_Msg_27_Sgn_62;
double CANMMCAN_RX_Msg_27_Sgn_63;
UInt8 CANMMCAN_RX_Msg_27_Sgn_64;
double CANMMCAN_RX_Msg_27_Sgn_65;
UInt8 CANMMCAN_RX_Msg_27_Sgn_66;
double CANMMCAN_RX_Msg_27_Sgn_67;
UInt8 CANMMCAN_RX_Msg_27_Sgn_68;
double CANMMCAN_RX_Msg_27_Sgn_69;
UInt8 CANMMCAN_RX_Msg_27_Sgn_70;
double CANMMCAN_RX_Msg_27_Sgn_71;
UInt8 CANMMCAN_RX_Msg_27_Sgn_72;
double CANMMCAN_RX_Msg_27_Sgn_73;
UInt8 CANMMCAN_RX_Msg_27_Sgn_74;
double CANMMCAN_RX_Msg_27_Sgn_75;
UInt8 CANMMCAN_RX_Msg_27_Sgn_76;
volatile real_T CANMMCAN_RXCT28;
UInt16 CANMMCAN_RX_Msg_28_Sgn_1;
double CANMMCAN_RX_Msg_28_Sgn_2;
UInt8 CANMMCAN_RX_Msg_28_Sgn_3;
double CANMMCAN_RX_Msg_28_Sgn_4;
UInt8 CANMMCAN_RX_Msg_28_Sgn_5;
double CANMMCAN_RX_Msg_28_Sgn_6;
UInt8 CANMMCAN_RX_Msg_28_Sgn_7;
double CANMMCAN_RX_Msg_28_Sgn_8;
UInt8 CANMMCAN_RX_Msg_28_Sgn_9;
double CANMMCAN_RX_Msg_28_Sgn_10;
UInt8 CANMMCAN_RX_Msg_28_Sgn_11;
double CANMMCAN_RX_Msg_28_Sgn_12;
UInt8 CANMMCAN_RX_Msg_28_Sgn_13;
double CANMMCAN_RX_Msg_28_Sgn_14;
UInt8 CANMMCAN_RX_Msg_28_Sgn_15;
double CANMMCAN_RX_Msg_28_Sgn_16;
UInt8 CANMMCAN_RX_Msg_28_Sgn_17;
double CANMMCAN_RX_Msg_28_Sgn_18;
UInt8 CANMMCAN_RX_Msg_28_Sgn_19;
double CANMMCAN_RX_Msg_28_Sgn_20;
UInt8 CANMMCAN_RX_Msg_28_Sgn_21;
double CANMMCAN_RX_Msg_28_Sgn_22;
UInt8 CANMMCAN_RX_Msg_28_Sgn_23;
double CANMMCAN_RX_Msg_28_Sgn_24;
UInt8 CANMMCAN_RX_Msg_28_Sgn_25;
double CANMMCAN_RX_Msg_28_Sgn_26;
UInt8 CANMMCAN_RX_Msg_28_Sgn_27;
double CANMMCAN_RX_Msg_28_Sgn_28;
UInt8 CANMMCAN_RX_Msg_28_Sgn_29;
double CANMMCAN_RX_Msg_28_Sgn_30;
UInt8 CANMMCAN_RX_Msg_28_Sgn_31;
double CANMMCAN_RX_Msg_28_Sgn_32;
UInt8 CANMMCAN_RX_Msg_28_Sgn_33;
double CANMMCAN_RX_Msg_28_Sgn_34;
UInt8 CANMMCAN_RX_Msg_28_Sgn_35;
double CANMMCAN_RX_Msg_28_Sgn_36;
UInt8 CANMMCAN_RX_Msg_28_Sgn_37;
double CANMMCAN_RX_Msg_28_Sgn_38;
UInt8 CANMMCAN_RX_Msg_28_Sgn_39;
double CANMMCAN_RX_Msg_28_Sgn_40;
UInt8 CANMMCAN_RX_Msg_28_Sgn_41;
UInt8 CANMMCAN_RX_Msg_28_Sgn_42;
double CANMMCAN_RX_Msg_28_Sgn_43;
double CANMMCAN_RX_Msg_28_Sgn_44;
UInt8 CANMMCAN_RX_Msg_28_Sgn_45;
UInt8 CANMMCAN_RX_Msg_28_Sgn_46;
double CANMMCAN_RX_Msg_28_Sgn_47;
double CANMMCAN_RX_Msg_28_Sgn_48;
UInt8 CANMMCAN_RX_Msg_28_Sgn_49;
UInt8 CANMMCAN_RX_Msg_28_Sgn_50;
UInt8 CANMMCAN_RX_Msg_28_Sgn_51;
UInt8 CANMMCAN_RX_Msg_28_Sgn_52;
UInt8 CANMMCAN_RX_Msg_28_Sgn_53;
UInt8 CANMMCAN_RX_Msg_28_Sgn_54;
UInt8 CANMMCAN_RX_Msg_28_Sgn_55;
UInt16 CANMMCAN_RX_Msg_28_Sgn_56;
volatile real_T CANMMCAN_RXCT29;
UInt16 CANMMCAN_RX_Msg_29_Sgn_1;
UInt32 CANMMCAN_RX_Msg_29_Sgn_2;
UInt8 CANMMCAN_RX_Msg_29_Sgn_3;
double CANMMCAN_RX_Msg_29_Sgn_4;
UInt16 CANMMCAN_RX_Msg_29_Sgn_5;
UInt8 CANMMCAN_RX_Msg_29_Sgn_6;
UInt8 CANMMCAN_RX_Msg_29_Sgn_7;
double CANMMCAN_RX_Msg_29_Sgn_8;
UInt16 CANMMCAN_RX_Msg_29_Sgn_9;
UInt8 CANMMCAN_RX_Msg_29_Sgn_10;
UInt8 CANMMCAN_RX_Msg_29_Sgn_11;
double CANMMCAN_RX_Msg_29_Sgn_12;
double CANMMCAN_RX_Msg_29_Sgn_13;
double CANMMCAN_RX_Msg_29_Sgn_14;
double CANMMCAN_RX_Msg_29_Sgn_15;
UInt8 CANMMCAN_RX_Msg_29_Sgn_16;
UInt8 CANMMCAN_RX_Msg_29_Sgn_17;
UInt8 CANMMCAN_RX_Msg_29_Sgn_18;
UInt8 CANMMCAN_RX_Msg_29_Sgn_19;
UInt8 CANMMCAN_RX_Msg_29_Sgn_20;
UInt8 CANMMCAN_RX_Msg_29_Sgn_21;
UInt8 CANMMCAN_RX_Msg_29_Sgn_22;
UInt8 CANMMCAN_RX_Msg_29_Sgn_23;
UInt8 CANMMCAN_RX_Msg_29_Sgn_24;
UInt8 CANMMCAN_RX_Msg_29_Sgn_25;
UInt8 CANMMCAN_RX_Msg_29_Sgn_26;
UInt8 CANMMCAN_RX_Msg_29_Sgn_27;
UInt8 CANMMCAN_RX_Msg_29_Sgn_28;
UInt8 CANMMCAN_RX_Msg_29_Sgn_29;
UInt8 CANMMCAN_RX_Msg_29_Sgn_30;
UInt8 CANMMCAN_RX_Msg_29_Sgn_31;
UInt8 CANMMCAN_RX_Msg_29_Sgn_32;
UInt8 CANMMCAN_RX_Msg_29_Sgn_33;
UInt8 CANMMCAN_RX_Msg_29_Sgn_34;
UInt8 CANMMCAN_RX_Msg_29_Sgn_35;
UInt8 CANMMCAN_RX_Msg_29_Sgn_36;
double CANMMCAN_RX_Msg_29_Sgn_37;
UInt8 CANMMCAN_RX_Msg_29_Sgn_38;
double CANMMCAN_RX_Msg_29_Sgn_39;
UInt8 CANMMCAN_RX_Msg_29_Sgn_40;
double CANMMCAN_RX_Msg_29_Sgn_41;
UInt8 CANMMCAN_RX_Msg_29_Sgn_42;
double CANMMCAN_RX_Msg_29_Sgn_43;
UInt8 CANMMCAN_RX_Msg_29_Sgn_44;
double CANMMCAN_RX_Msg_29_Sgn_45;
UInt8 CANMMCAN_RX_Msg_29_Sgn_46;
double CANMMCAN_RX_Msg_29_Sgn_47;
UInt8 CANMMCAN_RX_Msg_29_Sgn_48;
double CANMMCAN_RX_Msg_29_Sgn_49;
UInt8 CANMMCAN_RX_Msg_29_Sgn_50;
double CANMMCAN_RX_Msg_29_Sgn_51;
UInt8 CANMMCAN_RX_Msg_29_Sgn_52;
double CANMMCAN_RX_Msg_29_Sgn_53;
UInt8 CANMMCAN_RX_Msg_29_Sgn_54;
double CANMMCAN_RX_Msg_29_Sgn_55;
UInt8 CANMMCAN_RX_Msg_29_Sgn_56;
double CANMMCAN_RX_Msg_29_Sgn_57;
UInt8 CANMMCAN_RX_Msg_29_Sgn_58;
double CANMMCAN_RX_Msg_29_Sgn_59;
UInt8 CANMMCAN_RX_Msg_29_Sgn_60;
double CANMMCAN_RX_Msg_29_Sgn_61;
UInt8 CANMMCAN_RX_Msg_29_Sgn_62;
double CANMMCAN_RX_Msg_29_Sgn_63;
UInt8 CANMMCAN_RX_Msg_29_Sgn_64;
double CANMMCAN_RX_Msg_29_Sgn_65;
UInt8 CANMMCAN_RX_Msg_29_Sgn_66;
double CANMMCAN_RX_Msg_29_Sgn_67;
UInt8 CANMMCAN_RX_Msg_29_Sgn_68;
double CANMMCAN_RX_Msg_29_Sgn_69;
UInt8 CANMMCAN_RX_Msg_29_Sgn_70;
double CANMMCAN_RX_Msg_29_Sgn_71;
UInt8 CANMMCAN_RX_Msg_29_Sgn_72;
double CANMMCAN_RX_Msg_29_Sgn_73;
UInt8 CANMMCAN_RX_Msg_29_Sgn_74;
double CANMMCAN_RX_Msg_29_Sgn_75;
UInt8 CANMMCAN_RX_Msg_29_Sgn_76;
volatile real_T CANMMCAN_RXCT30;
UInt16 CANMMCAN_RX_Msg_30_Sgn_1;
double CANMMCAN_RX_Msg_30_Sgn_2;
UInt8 CANMMCAN_RX_Msg_30_Sgn_3;
double CANMMCAN_RX_Msg_30_Sgn_4;
UInt8 CANMMCAN_RX_Msg_30_Sgn_5;
double CANMMCAN_RX_Msg_30_Sgn_6;
UInt8 CANMMCAN_RX_Msg_30_Sgn_7;
double CANMMCAN_RX_Msg_30_Sgn_8;
UInt8 CANMMCAN_RX_Msg_30_Sgn_9;
double CANMMCAN_RX_Msg_30_Sgn_10;
UInt8 CANMMCAN_RX_Msg_30_Sgn_11;
double CANMMCAN_RX_Msg_30_Sgn_12;
UInt8 CANMMCAN_RX_Msg_30_Sgn_13;
double CANMMCAN_RX_Msg_30_Sgn_14;
UInt8 CANMMCAN_RX_Msg_30_Sgn_15;
double CANMMCAN_RX_Msg_30_Sgn_16;
UInt8 CANMMCAN_RX_Msg_30_Sgn_17;
double CANMMCAN_RX_Msg_30_Sgn_18;
UInt8 CANMMCAN_RX_Msg_30_Sgn_19;
double CANMMCAN_RX_Msg_30_Sgn_20;
UInt8 CANMMCAN_RX_Msg_30_Sgn_21;
double CANMMCAN_RX_Msg_30_Sgn_22;
UInt8 CANMMCAN_RX_Msg_30_Sgn_23;
double CANMMCAN_RX_Msg_30_Sgn_24;
UInt8 CANMMCAN_RX_Msg_30_Sgn_25;
double CANMMCAN_RX_Msg_30_Sgn_26;
UInt8 CANMMCAN_RX_Msg_30_Sgn_27;
double CANMMCAN_RX_Msg_30_Sgn_28;
UInt8 CANMMCAN_RX_Msg_30_Sgn_29;
double CANMMCAN_RX_Msg_30_Sgn_30;
UInt8 CANMMCAN_RX_Msg_30_Sgn_31;
double CANMMCAN_RX_Msg_30_Sgn_32;
UInt8 CANMMCAN_RX_Msg_30_Sgn_33;
double CANMMCAN_RX_Msg_30_Sgn_34;
UInt8 CANMMCAN_RX_Msg_30_Sgn_35;
double CANMMCAN_RX_Msg_30_Sgn_36;
UInt8 CANMMCAN_RX_Msg_30_Sgn_37;
double CANMMCAN_RX_Msg_30_Sgn_38;
UInt8 CANMMCAN_RX_Msg_30_Sgn_39;
double CANMMCAN_RX_Msg_30_Sgn_40;
UInt8 CANMMCAN_RX_Msg_30_Sgn_41;
UInt8 CANMMCAN_RX_Msg_30_Sgn_42;
double CANMMCAN_RX_Msg_30_Sgn_43;
double CANMMCAN_RX_Msg_30_Sgn_44;
UInt8 CANMMCAN_RX_Msg_30_Sgn_45;
UInt8 CANMMCAN_RX_Msg_30_Sgn_46;
double CANMMCAN_RX_Msg_30_Sgn_47;
double CANMMCAN_RX_Msg_30_Sgn_48;
UInt8 CANMMCAN_RX_Msg_30_Sgn_49;
UInt8 CANMMCAN_RX_Msg_30_Sgn_50;
UInt8 CANMMCAN_RX_Msg_30_Sgn_51;
UInt8 CANMMCAN_RX_Msg_30_Sgn_52;
UInt8 CANMMCAN_RX_Msg_30_Sgn_53;
UInt8 CANMMCAN_RX_Msg_30_Sgn_54;
UInt8 CANMMCAN_RX_Msg_30_Sgn_55;
UInt16 CANMMCAN_RX_Msg_30_Sgn_56;
volatile real_T CANMMCAN_RXCT31;
UInt16 CANMMCAN_RX_Msg_31_Sgn_1;
UInt32 CANMMCAN_RX_Msg_31_Sgn_2;
UInt8 CANMMCAN_RX_Msg_31_Sgn_3;
double CANMMCAN_RX_Msg_31_Sgn_4;
UInt16 CANMMCAN_RX_Msg_31_Sgn_5;
UInt8 CANMMCAN_RX_Msg_31_Sgn_6;
UInt8 CANMMCAN_RX_Msg_31_Sgn_7;
double CANMMCAN_RX_Msg_31_Sgn_8;
UInt16 CANMMCAN_RX_Msg_31_Sgn_9;
UInt8 CANMMCAN_RX_Msg_31_Sgn_10;
UInt8 CANMMCAN_RX_Msg_31_Sgn_11;
double CANMMCAN_RX_Msg_31_Sgn_12;
double CANMMCAN_RX_Msg_31_Sgn_13;
double CANMMCAN_RX_Msg_31_Sgn_14;
double CANMMCAN_RX_Msg_31_Sgn_15;
UInt8 CANMMCAN_RX_Msg_31_Sgn_16;
UInt8 CANMMCAN_RX_Msg_31_Sgn_17;
UInt8 CANMMCAN_RX_Msg_31_Sgn_18;
UInt8 CANMMCAN_RX_Msg_31_Sgn_19;
UInt8 CANMMCAN_RX_Msg_31_Sgn_20;
UInt8 CANMMCAN_RX_Msg_31_Sgn_21;
UInt8 CANMMCAN_RX_Msg_31_Sgn_22;
UInt8 CANMMCAN_RX_Msg_31_Sgn_23;
UInt8 CANMMCAN_RX_Msg_31_Sgn_24;
UInt8 CANMMCAN_RX_Msg_31_Sgn_25;
UInt8 CANMMCAN_RX_Msg_31_Sgn_26;
UInt8 CANMMCAN_RX_Msg_31_Sgn_27;
UInt8 CANMMCAN_RX_Msg_31_Sgn_28;
UInt8 CANMMCAN_RX_Msg_31_Sgn_29;
UInt8 CANMMCAN_RX_Msg_31_Sgn_30;
UInt8 CANMMCAN_RX_Msg_31_Sgn_31;
UInt8 CANMMCAN_RX_Msg_31_Sgn_32;
UInt8 CANMMCAN_RX_Msg_31_Sgn_33;
UInt8 CANMMCAN_RX_Msg_31_Sgn_34;
UInt8 CANMMCAN_RX_Msg_31_Sgn_35;
UInt8 CANMMCAN_RX_Msg_31_Sgn_36;
double CANMMCAN_RX_Msg_31_Sgn_37;
UInt8 CANMMCAN_RX_Msg_31_Sgn_38;
double CANMMCAN_RX_Msg_31_Sgn_39;
UInt8 CANMMCAN_RX_Msg_31_Sgn_40;
double CANMMCAN_RX_Msg_31_Sgn_41;
UInt8 CANMMCAN_RX_Msg_31_Sgn_42;
double CANMMCAN_RX_Msg_31_Sgn_43;
UInt8 CANMMCAN_RX_Msg_31_Sgn_44;
double CANMMCAN_RX_Msg_31_Sgn_45;
UInt8 CANMMCAN_RX_Msg_31_Sgn_46;
double CANMMCAN_RX_Msg_31_Sgn_47;
UInt8 CANMMCAN_RX_Msg_31_Sgn_48;
double CANMMCAN_RX_Msg_31_Sgn_49;
UInt8 CANMMCAN_RX_Msg_31_Sgn_50;
double CANMMCAN_RX_Msg_31_Sgn_51;
UInt8 CANMMCAN_RX_Msg_31_Sgn_52;
double CANMMCAN_RX_Msg_31_Sgn_53;
UInt8 CANMMCAN_RX_Msg_31_Sgn_54;
double CANMMCAN_RX_Msg_31_Sgn_55;
UInt8 CANMMCAN_RX_Msg_31_Sgn_56;
double CANMMCAN_RX_Msg_31_Sgn_57;
UInt8 CANMMCAN_RX_Msg_31_Sgn_58;
double CANMMCAN_RX_Msg_31_Sgn_59;
UInt8 CANMMCAN_RX_Msg_31_Sgn_60;
double CANMMCAN_RX_Msg_31_Sgn_61;
UInt8 CANMMCAN_RX_Msg_31_Sgn_62;
double CANMMCAN_RX_Msg_31_Sgn_63;
UInt8 CANMMCAN_RX_Msg_31_Sgn_64;
double CANMMCAN_RX_Msg_31_Sgn_65;
UInt8 CANMMCAN_RX_Msg_31_Sgn_66;
double CANMMCAN_RX_Msg_31_Sgn_67;
UInt8 CANMMCAN_RX_Msg_31_Sgn_68;
double CANMMCAN_RX_Msg_31_Sgn_69;
UInt8 CANMMCAN_RX_Msg_31_Sgn_70;
double CANMMCAN_RX_Msg_31_Sgn_71;
UInt8 CANMMCAN_RX_Msg_31_Sgn_72;
double CANMMCAN_RX_Msg_31_Sgn_73;
UInt8 CANMMCAN_RX_Msg_31_Sgn_74;
double CANMMCAN_RX_Msg_31_Sgn_75;
UInt8 CANMMCAN_RX_Msg_31_Sgn_76;
volatile real_T CANMMCAN_RXCT32;
UInt16 CANMMCAN_RX_Msg_32_Sgn_1;
double CANMMCAN_RX_Msg_32_Sgn_2;
UInt8 CANMMCAN_RX_Msg_32_Sgn_3;
double CANMMCAN_RX_Msg_32_Sgn_4;
UInt8 CANMMCAN_RX_Msg_32_Sgn_5;
double CANMMCAN_RX_Msg_32_Sgn_6;
UInt8 CANMMCAN_RX_Msg_32_Sgn_7;
double CANMMCAN_RX_Msg_32_Sgn_8;
UInt8 CANMMCAN_RX_Msg_32_Sgn_9;
double CANMMCAN_RX_Msg_32_Sgn_10;
UInt8 CANMMCAN_RX_Msg_32_Sgn_11;
double CANMMCAN_RX_Msg_32_Sgn_12;
UInt8 CANMMCAN_RX_Msg_32_Sgn_13;
double CANMMCAN_RX_Msg_32_Sgn_14;
UInt8 CANMMCAN_RX_Msg_32_Sgn_15;
double CANMMCAN_RX_Msg_32_Sgn_16;
UInt8 CANMMCAN_RX_Msg_32_Sgn_17;
double CANMMCAN_RX_Msg_32_Sgn_18;
UInt8 CANMMCAN_RX_Msg_32_Sgn_19;
double CANMMCAN_RX_Msg_32_Sgn_20;
UInt8 CANMMCAN_RX_Msg_32_Sgn_21;
double CANMMCAN_RX_Msg_32_Sgn_22;
UInt8 CANMMCAN_RX_Msg_32_Sgn_23;
double CANMMCAN_RX_Msg_32_Sgn_24;
UInt8 CANMMCAN_RX_Msg_32_Sgn_25;
double CANMMCAN_RX_Msg_32_Sgn_26;
UInt8 CANMMCAN_RX_Msg_32_Sgn_27;
double CANMMCAN_RX_Msg_32_Sgn_28;
UInt8 CANMMCAN_RX_Msg_32_Sgn_29;
double CANMMCAN_RX_Msg_32_Sgn_30;
UInt8 CANMMCAN_RX_Msg_32_Sgn_31;
double CANMMCAN_RX_Msg_32_Sgn_32;
UInt8 CANMMCAN_RX_Msg_32_Sgn_33;
double CANMMCAN_RX_Msg_32_Sgn_34;
UInt8 CANMMCAN_RX_Msg_32_Sgn_35;
double CANMMCAN_RX_Msg_32_Sgn_36;
UInt8 CANMMCAN_RX_Msg_32_Sgn_37;
double CANMMCAN_RX_Msg_32_Sgn_38;
UInt8 CANMMCAN_RX_Msg_32_Sgn_39;
double CANMMCAN_RX_Msg_32_Sgn_40;
UInt8 CANMMCAN_RX_Msg_32_Sgn_41;
UInt8 CANMMCAN_RX_Msg_32_Sgn_42;
double CANMMCAN_RX_Msg_32_Sgn_43;
double CANMMCAN_RX_Msg_32_Sgn_44;
UInt8 CANMMCAN_RX_Msg_32_Sgn_45;
UInt8 CANMMCAN_RX_Msg_32_Sgn_46;
double CANMMCAN_RX_Msg_32_Sgn_47;
double CANMMCAN_RX_Msg_32_Sgn_48;
UInt8 CANMMCAN_RX_Msg_32_Sgn_49;
UInt8 CANMMCAN_RX_Msg_32_Sgn_50;
UInt8 CANMMCAN_RX_Msg_32_Sgn_51;
UInt8 CANMMCAN_RX_Msg_32_Sgn_52;
UInt8 CANMMCAN_RX_Msg_32_Sgn_53;
UInt8 CANMMCAN_RX_Msg_32_Sgn_54;
UInt8 CANMMCAN_RX_Msg_32_Sgn_55;
UInt16 CANMMCAN_RX_Msg_32_Sgn_56;
volatile real_T CANMMCAN_RXCT33;
UInt16 CANMMCAN_RX_Msg_33_Sgn_1;
UInt32 CANMMCAN_RX_Msg_33_Sgn_2;
UInt8 CANMMCAN_RX_Msg_33_Sgn_3;
double CANMMCAN_RX_Msg_33_Sgn_4;
UInt16 CANMMCAN_RX_Msg_33_Sgn_5;
UInt8 CANMMCAN_RX_Msg_33_Sgn_6;
UInt8 CANMMCAN_RX_Msg_33_Sgn_7;
double CANMMCAN_RX_Msg_33_Sgn_8;
UInt16 CANMMCAN_RX_Msg_33_Sgn_9;
UInt8 CANMMCAN_RX_Msg_33_Sgn_10;
UInt8 CANMMCAN_RX_Msg_33_Sgn_11;
double CANMMCAN_RX_Msg_33_Sgn_12;
double CANMMCAN_RX_Msg_33_Sgn_13;
double CANMMCAN_RX_Msg_33_Sgn_14;
double CANMMCAN_RX_Msg_33_Sgn_15;
UInt8 CANMMCAN_RX_Msg_33_Sgn_16;
UInt8 CANMMCAN_RX_Msg_33_Sgn_17;
UInt8 CANMMCAN_RX_Msg_33_Sgn_18;
UInt8 CANMMCAN_RX_Msg_33_Sgn_19;
UInt8 CANMMCAN_RX_Msg_33_Sgn_20;
UInt8 CANMMCAN_RX_Msg_33_Sgn_21;
UInt8 CANMMCAN_RX_Msg_33_Sgn_22;
UInt8 CANMMCAN_RX_Msg_33_Sgn_23;
UInt8 CANMMCAN_RX_Msg_33_Sgn_24;
UInt8 CANMMCAN_RX_Msg_33_Sgn_25;
UInt8 CANMMCAN_RX_Msg_33_Sgn_26;
UInt8 CANMMCAN_RX_Msg_33_Sgn_27;
UInt8 CANMMCAN_RX_Msg_33_Sgn_28;
UInt8 CANMMCAN_RX_Msg_33_Sgn_29;
UInt8 CANMMCAN_RX_Msg_33_Sgn_30;
UInt8 CANMMCAN_RX_Msg_33_Sgn_31;
UInt8 CANMMCAN_RX_Msg_33_Sgn_32;
UInt8 CANMMCAN_RX_Msg_33_Sgn_33;
UInt8 CANMMCAN_RX_Msg_33_Sgn_34;
UInt8 CANMMCAN_RX_Msg_33_Sgn_35;
UInt8 CANMMCAN_RX_Msg_33_Sgn_36;
double CANMMCAN_RX_Msg_33_Sgn_37;
UInt8 CANMMCAN_RX_Msg_33_Sgn_38;
double CANMMCAN_RX_Msg_33_Sgn_39;
UInt8 CANMMCAN_RX_Msg_33_Sgn_40;
double CANMMCAN_RX_Msg_33_Sgn_41;
UInt8 CANMMCAN_RX_Msg_33_Sgn_42;
double CANMMCAN_RX_Msg_33_Sgn_43;
UInt8 CANMMCAN_RX_Msg_33_Sgn_44;
double CANMMCAN_RX_Msg_33_Sgn_45;
UInt8 CANMMCAN_RX_Msg_33_Sgn_46;
double CANMMCAN_RX_Msg_33_Sgn_47;
UInt8 CANMMCAN_RX_Msg_33_Sgn_48;
double CANMMCAN_RX_Msg_33_Sgn_49;
UInt8 CANMMCAN_RX_Msg_33_Sgn_50;
double CANMMCAN_RX_Msg_33_Sgn_51;
UInt8 CANMMCAN_RX_Msg_33_Sgn_52;
double CANMMCAN_RX_Msg_33_Sgn_53;
UInt8 CANMMCAN_RX_Msg_33_Sgn_54;
double CANMMCAN_RX_Msg_33_Sgn_55;
UInt8 CANMMCAN_RX_Msg_33_Sgn_56;
double CANMMCAN_RX_Msg_33_Sgn_57;
UInt8 CANMMCAN_RX_Msg_33_Sgn_58;
double CANMMCAN_RX_Msg_33_Sgn_59;
UInt8 CANMMCAN_RX_Msg_33_Sgn_60;
double CANMMCAN_RX_Msg_33_Sgn_61;
UInt8 CANMMCAN_RX_Msg_33_Sgn_62;
double CANMMCAN_RX_Msg_33_Sgn_63;
UInt8 CANMMCAN_RX_Msg_33_Sgn_64;
double CANMMCAN_RX_Msg_33_Sgn_65;
UInt8 CANMMCAN_RX_Msg_33_Sgn_66;
double CANMMCAN_RX_Msg_33_Sgn_67;
UInt8 CANMMCAN_RX_Msg_33_Sgn_68;
double CANMMCAN_RX_Msg_33_Sgn_69;
UInt8 CANMMCAN_RX_Msg_33_Sgn_70;
double CANMMCAN_RX_Msg_33_Sgn_71;
UInt8 CANMMCAN_RX_Msg_33_Sgn_72;
double CANMMCAN_RX_Msg_33_Sgn_73;
UInt8 CANMMCAN_RX_Msg_33_Sgn_74;
double CANMMCAN_RX_Msg_33_Sgn_75;
UInt8 CANMMCAN_RX_Msg_33_Sgn_76;
volatile real_T CANMMCAN_RXCT34;
UInt16 CANMMCAN_RX_Msg_34_Sgn_1;
double CANMMCAN_RX_Msg_34_Sgn_2;
UInt8 CANMMCAN_RX_Msg_34_Sgn_3;
double CANMMCAN_RX_Msg_34_Sgn_4;
UInt8 CANMMCAN_RX_Msg_34_Sgn_5;
double CANMMCAN_RX_Msg_34_Sgn_6;
UInt8 CANMMCAN_RX_Msg_34_Sgn_7;
double CANMMCAN_RX_Msg_34_Sgn_8;
UInt8 CANMMCAN_RX_Msg_34_Sgn_9;
double CANMMCAN_RX_Msg_34_Sgn_10;
UInt8 CANMMCAN_RX_Msg_34_Sgn_11;
double CANMMCAN_RX_Msg_34_Sgn_12;
UInt8 CANMMCAN_RX_Msg_34_Sgn_13;
double CANMMCAN_RX_Msg_34_Sgn_14;
UInt8 CANMMCAN_RX_Msg_34_Sgn_15;
double CANMMCAN_RX_Msg_34_Sgn_16;
UInt8 CANMMCAN_RX_Msg_34_Sgn_17;
double CANMMCAN_RX_Msg_34_Sgn_18;
UInt8 CANMMCAN_RX_Msg_34_Sgn_19;
double CANMMCAN_RX_Msg_34_Sgn_20;
UInt8 CANMMCAN_RX_Msg_34_Sgn_21;
double CANMMCAN_RX_Msg_34_Sgn_22;
UInt8 CANMMCAN_RX_Msg_34_Sgn_23;
double CANMMCAN_RX_Msg_34_Sgn_24;
UInt8 CANMMCAN_RX_Msg_34_Sgn_25;
double CANMMCAN_RX_Msg_34_Sgn_26;
UInt8 CANMMCAN_RX_Msg_34_Sgn_27;
double CANMMCAN_RX_Msg_34_Sgn_28;
UInt8 CANMMCAN_RX_Msg_34_Sgn_29;
double CANMMCAN_RX_Msg_34_Sgn_30;
UInt8 CANMMCAN_RX_Msg_34_Sgn_31;
double CANMMCAN_RX_Msg_34_Sgn_32;
UInt8 CANMMCAN_RX_Msg_34_Sgn_33;
double CANMMCAN_RX_Msg_34_Sgn_34;
UInt8 CANMMCAN_RX_Msg_34_Sgn_35;
double CANMMCAN_RX_Msg_34_Sgn_36;
UInt8 CANMMCAN_RX_Msg_34_Sgn_37;
double CANMMCAN_RX_Msg_34_Sgn_38;
UInt8 CANMMCAN_RX_Msg_34_Sgn_39;
double CANMMCAN_RX_Msg_34_Sgn_40;
UInt8 CANMMCAN_RX_Msg_34_Sgn_41;
UInt8 CANMMCAN_RX_Msg_34_Sgn_42;
double CANMMCAN_RX_Msg_34_Sgn_43;
double CANMMCAN_RX_Msg_34_Sgn_44;
UInt8 CANMMCAN_RX_Msg_34_Sgn_45;
UInt8 CANMMCAN_RX_Msg_34_Sgn_46;
double CANMMCAN_RX_Msg_34_Sgn_47;
double CANMMCAN_RX_Msg_34_Sgn_48;
UInt8 CANMMCAN_RX_Msg_34_Sgn_49;
UInt8 CANMMCAN_RX_Msg_34_Sgn_50;
UInt8 CANMMCAN_RX_Msg_34_Sgn_51;
UInt8 CANMMCAN_RX_Msg_34_Sgn_52;
UInt8 CANMMCAN_RX_Msg_34_Sgn_53;
UInt8 CANMMCAN_RX_Msg_34_Sgn_54;
UInt8 CANMMCAN_RX_Msg_34_Sgn_55;
UInt16 CANMMCAN_RX_Msg_34_Sgn_56;
volatile real_T CANMMCAN_RXCT35;
UInt16 CANMMCAN_RX_Msg_35_Sgn_1;
UInt32 CANMMCAN_RX_Msg_35_Sgn_2;
UInt8 CANMMCAN_RX_Msg_35_Sgn_3;
double CANMMCAN_RX_Msg_35_Sgn_4;
UInt16 CANMMCAN_RX_Msg_35_Sgn_5;
UInt8 CANMMCAN_RX_Msg_35_Sgn_6;
UInt8 CANMMCAN_RX_Msg_35_Sgn_7;
double CANMMCAN_RX_Msg_35_Sgn_8;
UInt16 CANMMCAN_RX_Msg_35_Sgn_9;
UInt8 CANMMCAN_RX_Msg_35_Sgn_10;
UInt8 CANMMCAN_RX_Msg_35_Sgn_11;
double CANMMCAN_RX_Msg_35_Sgn_12;
double CANMMCAN_RX_Msg_35_Sgn_13;
double CANMMCAN_RX_Msg_35_Sgn_14;
double CANMMCAN_RX_Msg_35_Sgn_15;
UInt8 CANMMCAN_RX_Msg_35_Sgn_16;
UInt8 CANMMCAN_RX_Msg_35_Sgn_17;
UInt8 CANMMCAN_RX_Msg_35_Sgn_18;
UInt8 CANMMCAN_RX_Msg_35_Sgn_19;
UInt8 CANMMCAN_RX_Msg_35_Sgn_20;
UInt8 CANMMCAN_RX_Msg_35_Sgn_21;
UInt8 CANMMCAN_RX_Msg_35_Sgn_22;
UInt8 CANMMCAN_RX_Msg_35_Sgn_23;
UInt8 CANMMCAN_RX_Msg_35_Sgn_24;
UInt8 CANMMCAN_RX_Msg_35_Sgn_25;
UInt8 CANMMCAN_RX_Msg_35_Sgn_26;
UInt8 CANMMCAN_RX_Msg_35_Sgn_27;
UInt8 CANMMCAN_RX_Msg_35_Sgn_28;
UInt8 CANMMCAN_RX_Msg_35_Sgn_29;
UInt8 CANMMCAN_RX_Msg_35_Sgn_30;
UInt8 CANMMCAN_RX_Msg_35_Sgn_31;
UInt8 CANMMCAN_RX_Msg_35_Sgn_32;
UInt8 CANMMCAN_RX_Msg_35_Sgn_33;
UInt8 CANMMCAN_RX_Msg_35_Sgn_34;
UInt8 CANMMCAN_RX_Msg_35_Sgn_35;
UInt8 CANMMCAN_RX_Msg_35_Sgn_36;
double CANMMCAN_RX_Msg_35_Sgn_37;
UInt8 CANMMCAN_RX_Msg_35_Sgn_38;
double CANMMCAN_RX_Msg_35_Sgn_39;
UInt8 CANMMCAN_RX_Msg_35_Sgn_40;
double CANMMCAN_RX_Msg_35_Sgn_41;
UInt8 CANMMCAN_RX_Msg_35_Sgn_42;
double CANMMCAN_RX_Msg_35_Sgn_43;
UInt8 CANMMCAN_RX_Msg_35_Sgn_44;
double CANMMCAN_RX_Msg_35_Sgn_45;
UInt8 CANMMCAN_RX_Msg_35_Sgn_46;
double CANMMCAN_RX_Msg_35_Sgn_47;
UInt8 CANMMCAN_RX_Msg_35_Sgn_48;
double CANMMCAN_RX_Msg_35_Sgn_49;
UInt8 CANMMCAN_RX_Msg_35_Sgn_50;
double CANMMCAN_RX_Msg_35_Sgn_51;
UInt8 CANMMCAN_RX_Msg_35_Sgn_52;
double CANMMCAN_RX_Msg_35_Sgn_53;
UInt8 CANMMCAN_RX_Msg_35_Sgn_54;
double CANMMCAN_RX_Msg_35_Sgn_55;
UInt8 CANMMCAN_RX_Msg_35_Sgn_56;
double CANMMCAN_RX_Msg_35_Sgn_57;
UInt8 CANMMCAN_RX_Msg_35_Sgn_58;
double CANMMCAN_RX_Msg_35_Sgn_59;
UInt8 CANMMCAN_RX_Msg_35_Sgn_60;
double CANMMCAN_RX_Msg_35_Sgn_61;
UInt8 CANMMCAN_RX_Msg_35_Sgn_62;
double CANMMCAN_RX_Msg_35_Sgn_63;
UInt8 CANMMCAN_RX_Msg_35_Sgn_64;
double CANMMCAN_RX_Msg_35_Sgn_65;
UInt8 CANMMCAN_RX_Msg_35_Sgn_66;
double CANMMCAN_RX_Msg_35_Sgn_67;
UInt8 CANMMCAN_RX_Msg_35_Sgn_68;
double CANMMCAN_RX_Msg_35_Sgn_69;
UInt8 CANMMCAN_RX_Msg_35_Sgn_70;
double CANMMCAN_RX_Msg_35_Sgn_71;
UInt8 CANMMCAN_RX_Msg_35_Sgn_72;
double CANMMCAN_RX_Msg_35_Sgn_73;
UInt8 CANMMCAN_RX_Msg_35_Sgn_74;
double CANMMCAN_RX_Msg_35_Sgn_75;
UInt8 CANMMCAN_RX_Msg_35_Sgn_76;
volatile real_T CANMMCAN_RXCT36;
UInt16 CANMMCAN_RX_Msg_36_Sgn_1;
double CANMMCAN_RX_Msg_36_Sgn_2;
UInt8 CANMMCAN_RX_Msg_36_Sgn_3;
double CANMMCAN_RX_Msg_36_Sgn_4;
UInt8 CANMMCAN_RX_Msg_36_Sgn_5;
double CANMMCAN_RX_Msg_36_Sgn_6;
UInt8 CANMMCAN_RX_Msg_36_Sgn_7;
double CANMMCAN_RX_Msg_36_Sgn_8;
UInt8 CANMMCAN_RX_Msg_36_Sgn_9;
double CANMMCAN_RX_Msg_36_Sgn_10;
UInt8 CANMMCAN_RX_Msg_36_Sgn_11;
double CANMMCAN_RX_Msg_36_Sgn_12;
UInt8 CANMMCAN_RX_Msg_36_Sgn_13;
double CANMMCAN_RX_Msg_36_Sgn_14;
UInt8 CANMMCAN_RX_Msg_36_Sgn_15;
double CANMMCAN_RX_Msg_36_Sgn_16;
UInt8 CANMMCAN_RX_Msg_36_Sgn_17;
double CANMMCAN_RX_Msg_36_Sgn_18;
UInt8 CANMMCAN_RX_Msg_36_Sgn_19;
double CANMMCAN_RX_Msg_36_Sgn_20;
UInt8 CANMMCAN_RX_Msg_36_Sgn_21;
double CANMMCAN_RX_Msg_36_Sgn_22;
UInt8 CANMMCAN_RX_Msg_36_Sgn_23;
double CANMMCAN_RX_Msg_36_Sgn_24;
UInt8 CANMMCAN_RX_Msg_36_Sgn_25;
double CANMMCAN_RX_Msg_36_Sgn_26;
UInt8 CANMMCAN_RX_Msg_36_Sgn_27;
double CANMMCAN_RX_Msg_36_Sgn_28;
UInt8 CANMMCAN_RX_Msg_36_Sgn_29;
double CANMMCAN_RX_Msg_36_Sgn_30;
UInt8 CANMMCAN_RX_Msg_36_Sgn_31;
double CANMMCAN_RX_Msg_36_Sgn_32;
UInt8 CANMMCAN_RX_Msg_36_Sgn_33;
double CANMMCAN_RX_Msg_36_Sgn_34;
UInt8 CANMMCAN_RX_Msg_36_Sgn_35;
double CANMMCAN_RX_Msg_36_Sgn_36;
UInt8 CANMMCAN_RX_Msg_36_Sgn_37;
double CANMMCAN_RX_Msg_36_Sgn_38;
UInt8 CANMMCAN_RX_Msg_36_Sgn_39;
double CANMMCAN_RX_Msg_36_Sgn_40;
UInt8 CANMMCAN_RX_Msg_36_Sgn_41;
UInt8 CANMMCAN_RX_Msg_36_Sgn_42;
double CANMMCAN_RX_Msg_36_Sgn_43;
double CANMMCAN_RX_Msg_36_Sgn_44;
UInt8 CANMMCAN_RX_Msg_36_Sgn_45;
UInt8 CANMMCAN_RX_Msg_36_Sgn_46;
double CANMMCAN_RX_Msg_36_Sgn_47;
double CANMMCAN_RX_Msg_36_Sgn_48;
UInt8 CANMMCAN_RX_Msg_36_Sgn_49;
UInt8 CANMMCAN_RX_Msg_36_Sgn_50;
UInt8 CANMMCAN_RX_Msg_36_Sgn_51;
UInt8 CANMMCAN_RX_Msg_36_Sgn_52;
UInt8 CANMMCAN_RX_Msg_36_Sgn_53;
UInt8 CANMMCAN_RX_Msg_36_Sgn_54;
UInt8 CANMMCAN_RX_Msg_36_Sgn_55;
UInt16 CANMMCAN_RX_Msg_36_Sgn_56;
volatile real_T CANMMCAN_RXCT37;
UInt16 CANMMCAN_RX_Msg_37_Sgn_1;
UInt32 CANMMCAN_RX_Msg_37_Sgn_2;
UInt8 CANMMCAN_RX_Msg_37_Sgn_3;
double CANMMCAN_RX_Msg_37_Sgn_4;
UInt16 CANMMCAN_RX_Msg_37_Sgn_5;
UInt8 CANMMCAN_RX_Msg_37_Sgn_6;
UInt8 CANMMCAN_RX_Msg_37_Sgn_7;
double CANMMCAN_RX_Msg_37_Sgn_8;
UInt16 CANMMCAN_RX_Msg_37_Sgn_9;
UInt8 CANMMCAN_RX_Msg_37_Sgn_10;
UInt8 CANMMCAN_RX_Msg_37_Sgn_11;
double CANMMCAN_RX_Msg_37_Sgn_12;
double CANMMCAN_RX_Msg_37_Sgn_13;
double CANMMCAN_RX_Msg_37_Sgn_14;
double CANMMCAN_RX_Msg_37_Sgn_15;
UInt8 CANMMCAN_RX_Msg_37_Sgn_16;
UInt8 CANMMCAN_RX_Msg_37_Sgn_17;
UInt8 CANMMCAN_RX_Msg_37_Sgn_18;
UInt8 CANMMCAN_RX_Msg_37_Sgn_19;
UInt8 CANMMCAN_RX_Msg_37_Sgn_20;
UInt8 CANMMCAN_RX_Msg_37_Sgn_21;
UInt8 CANMMCAN_RX_Msg_37_Sgn_22;
UInt8 CANMMCAN_RX_Msg_37_Sgn_23;
UInt8 CANMMCAN_RX_Msg_37_Sgn_24;
UInt8 CANMMCAN_RX_Msg_37_Sgn_25;
UInt8 CANMMCAN_RX_Msg_37_Sgn_26;
UInt8 CANMMCAN_RX_Msg_37_Sgn_27;
UInt8 CANMMCAN_RX_Msg_37_Sgn_28;
UInt8 CANMMCAN_RX_Msg_37_Sgn_29;
UInt8 CANMMCAN_RX_Msg_37_Sgn_30;
UInt8 CANMMCAN_RX_Msg_37_Sgn_31;
UInt8 CANMMCAN_RX_Msg_37_Sgn_32;
UInt8 CANMMCAN_RX_Msg_37_Sgn_33;
UInt8 CANMMCAN_RX_Msg_37_Sgn_34;
UInt8 CANMMCAN_RX_Msg_37_Sgn_35;
UInt8 CANMMCAN_RX_Msg_37_Sgn_36;
double CANMMCAN_RX_Msg_37_Sgn_37;
UInt8 CANMMCAN_RX_Msg_37_Sgn_38;
double CANMMCAN_RX_Msg_37_Sgn_39;
UInt8 CANMMCAN_RX_Msg_37_Sgn_40;
double CANMMCAN_RX_Msg_37_Sgn_41;
UInt8 CANMMCAN_RX_Msg_37_Sgn_42;
double CANMMCAN_RX_Msg_37_Sgn_43;
UInt8 CANMMCAN_RX_Msg_37_Sgn_44;
double CANMMCAN_RX_Msg_37_Sgn_45;
UInt8 CANMMCAN_RX_Msg_37_Sgn_46;
double CANMMCAN_RX_Msg_37_Sgn_47;
UInt8 CANMMCAN_RX_Msg_37_Sgn_48;
double CANMMCAN_RX_Msg_37_Sgn_49;
UInt8 CANMMCAN_RX_Msg_37_Sgn_50;
double CANMMCAN_RX_Msg_37_Sgn_51;
UInt8 CANMMCAN_RX_Msg_37_Sgn_52;
double CANMMCAN_RX_Msg_37_Sgn_53;
UInt8 CANMMCAN_RX_Msg_37_Sgn_54;
double CANMMCAN_RX_Msg_37_Sgn_55;
UInt8 CANMMCAN_RX_Msg_37_Sgn_56;
double CANMMCAN_RX_Msg_37_Sgn_57;
UInt8 CANMMCAN_RX_Msg_37_Sgn_58;
double CANMMCAN_RX_Msg_37_Sgn_59;
UInt8 CANMMCAN_RX_Msg_37_Sgn_60;
double CANMMCAN_RX_Msg_37_Sgn_61;
UInt8 CANMMCAN_RX_Msg_37_Sgn_62;
double CANMMCAN_RX_Msg_37_Sgn_63;
UInt8 CANMMCAN_RX_Msg_37_Sgn_64;
double CANMMCAN_RX_Msg_37_Sgn_65;
UInt8 CANMMCAN_RX_Msg_37_Sgn_66;
double CANMMCAN_RX_Msg_37_Sgn_67;
UInt8 CANMMCAN_RX_Msg_37_Sgn_68;
double CANMMCAN_RX_Msg_37_Sgn_69;
UInt8 CANMMCAN_RX_Msg_37_Sgn_70;
double CANMMCAN_RX_Msg_37_Sgn_71;
UInt8 CANMMCAN_RX_Msg_37_Sgn_72;
double CANMMCAN_RX_Msg_37_Sgn_73;
UInt8 CANMMCAN_RX_Msg_37_Sgn_74;
double CANMMCAN_RX_Msg_37_Sgn_75;
UInt8 CANMMCAN_RX_Msg_37_Sgn_76;
volatile real_T CANMMCAN_RXCT38;
UInt16 CANMMCAN_RX_Msg_38_Sgn_1;
double CANMMCAN_RX_Msg_38_Sgn_2;
UInt8 CANMMCAN_RX_Msg_38_Sgn_3;
double CANMMCAN_RX_Msg_38_Sgn_4;
UInt8 CANMMCAN_RX_Msg_38_Sgn_5;
double CANMMCAN_RX_Msg_38_Sgn_6;
UInt8 CANMMCAN_RX_Msg_38_Sgn_7;
double CANMMCAN_RX_Msg_38_Sgn_8;
UInt8 CANMMCAN_RX_Msg_38_Sgn_9;
double CANMMCAN_RX_Msg_38_Sgn_10;
UInt8 CANMMCAN_RX_Msg_38_Sgn_11;
double CANMMCAN_RX_Msg_38_Sgn_12;
UInt8 CANMMCAN_RX_Msg_38_Sgn_13;
double CANMMCAN_RX_Msg_38_Sgn_14;
UInt8 CANMMCAN_RX_Msg_38_Sgn_15;
double CANMMCAN_RX_Msg_38_Sgn_16;
UInt8 CANMMCAN_RX_Msg_38_Sgn_17;
double CANMMCAN_RX_Msg_38_Sgn_18;
UInt8 CANMMCAN_RX_Msg_38_Sgn_19;
double CANMMCAN_RX_Msg_38_Sgn_20;
UInt8 CANMMCAN_RX_Msg_38_Sgn_21;
double CANMMCAN_RX_Msg_38_Sgn_22;
UInt8 CANMMCAN_RX_Msg_38_Sgn_23;
double CANMMCAN_RX_Msg_38_Sgn_24;
UInt8 CANMMCAN_RX_Msg_38_Sgn_25;
double CANMMCAN_RX_Msg_38_Sgn_26;
UInt8 CANMMCAN_RX_Msg_38_Sgn_27;
double CANMMCAN_RX_Msg_38_Sgn_28;
UInt8 CANMMCAN_RX_Msg_38_Sgn_29;
double CANMMCAN_RX_Msg_38_Sgn_30;
UInt8 CANMMCAN_RX_Msg_38_Sgn_31;
double CANMMCAN_RX_Msg_38_Sgn_32;
UInt8 CANMMCAN_RX_Msg_38_Sgn_33;
double CANMMCAN_RX_Msg_38_Sgn_34;
UInt8 CANMMCAN_RX_Msg_38_Sgn_35;
double CANMMCAN_RX_Msg_38_Sgn_36;
UInt8 CANMMCAN_RX_Msg_38_Sgn_37;
double CANMMCAN_RX_Msg_38_Sgn_38;
UInt8 CANMMCAN_RX_Msg_38_Sgn_39;
double CANMMCAN_RX_Msg_38_Sgn_40;
UInt8 CANMMCAN_RX_Msg_38_Sgn_41;
UInt8 CANMMCAN_RX_Msg_38_Sgn_42;
double CANMMCAN_RX_Msg_38_Sgn_43;
double CANMMCAN_RX_Msg_38_Sgn_44;
UInt8 CANMMCAN_RX_Msg_38_Sgn_45;
UInt8 CANMMCAN_RX_Msg_38_Sgn_46;
double CANMMCAN_RX_Msg_38_Sgn_47;
double CANMMCAN_RX_Msg_38_Sgn_48;
UInt8 CANMMCAN_RX_Msg_38_Sgn_49;
UInt8 CANMMCAN_RX_Msg_38_Sgn_50;
UInt8 CANMMCAN_RX_Msg_38_Sgn_51;
UInt8 CANMMCAN_RX_Msg_38_Sgn_52;
UInt8 CANMMCAN_RX_Msg_38_Sgn_53;
UInt8 CANMMCAN_RX_Msg_38_Sgn_54;
UInt8 CANMMCAN_RX_Msg_38_Sgn_55;
UInt16 CANMMCAN_RX_Msg_38_Sgn_56;
volatile real_T CANMMCAN_RXCT39;
UInt16 CANMMCAN_RX_Msg_39_Sgn_1;
UInt32 CANMMCAN_RX_Msg_39_Sgn_2;
UInt8 CANMMCAN_RX_Msg_39_Sgn_3;
double CANMMCAN_RX_Msg_39_Sgn_4;
UInt16 CANMMCAN_RX_Msg_39_Sgn_5;
UInt8 CANMMCAN_RX_Msg_39_Sgn_6;
UInt8 CANMMCAN_RX_Msg_39_Sgn_7;
double CANMMCAN_RX_Msg_39_Sgn_8;
UInt16 CANMMCAN_RX_Msg_39_Sgn_9;
UInt8 CANMMCAN_RX_Msg_39_Sgn_10;
UInt8 CANMMCAN_RX_Msg_39_Sgn_11;
double CANMMCAN_RX_Msg_39_Sgn_12;
double CANMMCAN_RX_Msg_39_Sgn_13;
double CANMMCAN_RX_Msg_39_Sgn_14;
double CANMMCAN_RX_Msg_39_Sgn_15;
UInt8 CANMMCAN_RX_Msg_39_Sgn_16;
UInt8 CANMMCAN_RX_Msg_39_Sgn_17;
UInt8 CANMMCAN_RX_Msg_39_Sgn_18;
UInt8 CANMMCAN_RX_Msg_39_Sgn_19;
UInt8 CANMMCAN_RX_Msg_39_Sgn_20;
UInt8 CANMMCAN_RX_Msg_39_Sgn_21;
UInt8 CANMMCAN_RX_Msg_39_Sgn_22;
UInt8 CANMMCAN_RX_Msg_39_Sgn_23;
UInt8 CANMMCAN_RX_Msg_39_Sgn_24;
UInt8 CANMMCAN_RX_Msg_39_Sgn_25;
UInt8 CANMMCAN_RX_Msg_39_Sgn_26;
UInt8 CANMMCAN_RX_Msg_39_Sgn_27;
UInt8 CANMMCAN_RX_Msg_39_Sgn_28;
UInt8 CANMMCAN_RX_Msg_39_Sgn_29;
UInt8 CANMMCAN_RX_Msg_39_Sgn_30;
UInt8 CANMMCAN_RX_Msg_39_Sgn_31;
UInt8 CANMMCAN_RX_Msg_39_Sgn_32;
UInt8 CANMMCAN_RX_Msg_39_Sgn_33;
UInt8 CANMMCAN_RX_Msg_39_Sgn_34;
UInt8 CANMMCAN_RX_Msg_39_Sgn_35;
UInt8 CANMMCAN_RX_Msg_39_Sgn_36;
double CANMMCAN_RX_Msg_39_Sgn_37;
UInt8 CANMMCAN_RX_Msg_39_Sgn_38;
double CANMMCAN_RX_Msg_39_Sgn_39;
UInt8 CANMMCAN_RX_Msg_39_Sgn_40;
double CANMMCAN_RX_Msg_39_Sgn_41;
UInt8 CANMMCAN_RX_Msg_39_Sgn_42;
double CANMMCAN_RX_Msg_39_Sgn_43;
UInt8 CANMMCAN_RX_Msg_39_Sgn_44;
double CANMMCAN_RX_Msg_39_Sgn_45;
UInt8 CANMMCAN_RX_Msg_39_Sgn_46;
double CANMMCAN_RX_Msg_39_Sgn_47;
UInt8 CANMMCAN_RX_Msg_39_Sgn_48;
double CANMMCAN_RX_Msg_39_Sgn_49;
UInt8 CANMMCAN_RX_Msg_39_Sgn_50;
double CANMMCAN_RX_Msg_39_Sgn_51;
UInt8 CANMMCAN_RX_Msg_39_Sgn_52;
double CANMMCAN_RX_Msg_39_Sgn_53;
UInt8 CANMMCAN_RX_Msg_39_Sgn_54;
double CANMMCAN_RX_Msg_39_Sgn_55;
UInt8 CANMMCAN_RX_Msg_39_Sgn_56;
double CANMMCAN_RX_Msg_39_Sgn_57;
UInt8 CANMMCAN_RX_Msg_39_Sgn_58;
double CANMMCAN_RX_Msg_39_Sgn_59;
UInt8 CANMMCAN_RX_Msg_39_Sgn_60;
double CANMMCAN_RX_Msg_39_Sgn_61;
UInt8 CANMMCAN_RX_Msg_39_Sgn_62;
double CANMMCAN_RX_Msg_39_Sgn_63;
UInt8 CANMMCAN_RX_Msg_39_Sgn_64;
double CANMMCAN_RX_Msg_39_Sgn_65;
UInt8 CANMMCAN_RX_Msg_39_Sgn_66;
double CANMMCAN_RX_Msg_39_Sgn_67;
UInt8 CANMMCAN_RX_Msg_39_Sgn_68;
double CANMMCAN_RX_Msg_39_Sgn_69;
UInt8 CANMMCAN_RX_Msg_39_Sgn_70;
double CANMMCAN_RX_Msg_39_Sgn_71;
UInt8 CANMMCAN_RX_Msg_39_Sgn_72;
double CANMMCAN_RX_Msg_39_Sgn_73;
UInt8 CANMMCAN_RX_Msg_39_Sgn_74;
double CANMMCAN_RX_Msg_39_Sgn_75;
UInt8 CANMMCAN_RX_Msg_39_Sgn_76;
volatile real_T CANMMCAN_RXCT40;
UInt16 CANMMCAN_RX_Msg_40_Sgn_1;
double CANMMCAN_RX_Msg_40_Sgn_2;
UInt8 CANMMCAN_RX_Msg_40_Sgn_3;
double CANMMCAN_RX_Msg_40_Sgn_4;
UInt8 CANMMCAN_RX_Msg_40_Sgn_5;
double CANMMCAN_RX_Msg_40_Sgn_6;
UInt8 CANMMCAN_RX_Msg_40_Sgn_7;
double CANMMCAN_RX_Msg_40_Sgn_8;
UInt8 CANMMCAN_RX_Msg_40_Sgn_9;
double CANMMCAN_RX_Msg_40_Sgn_10;
UInt8 CANMMCAN_RX_Msg_40_Sgn_11;
double CANMMCAN_RX_Msg_40_Sgn_12;
UInt8 CANMMCAN_RX_Msg_40_Sgn_13;
double CANMMCAN_RX_Msg_40_Sgn_14;
UInt8 CANMMCAN_RX_Msg_40_Sgn_15;
double CANMMCAN_RX_Msg_40_Sgn_16;
UInt8 CANMMCAN_RX_Msg_40_Sgn_17;
double CANMMCAN_RX_Msg_40_Sgn_18;
UInt8 CANMMCAN_RX_Msg_40_Sgn_19;
double CANMMCAN_RX_Msg_40_Sgn_20;
UInt8 CANMMCAN_RX_Msg_40_Sgn_21;
double CANMMCAN_RX_Msg_40_Sgn_22;
UInt8 CANMMCAN_RX_Msg_40_Sgn_23;
double CANMMCAN_RX_Msg_40_Sgn_24;
UInt8 CANMMCAN_RX_Msg_40_Sgn_25;
double CANMMCAN_RX_Msg_40_Sgn_26;
UInt8 CANMMCAN_RX_Msg_40_Sgn_27;
double CANMMCAN_RX_Msg_40_Sgn_28;
UInt8 CANMMCAN_RX_Msg_40_Sgn_29;
double CANMMCAN_RX_Msg_40_Sgn_30;
UInt8 CANMMCAN_RX_Msg_40_Sgn_31;
double CANMMCAN_RX_Msg_40_Sgn_32;
UInt8 CANMMCAN_RX_Msg_40_Sgn_33;
double CANMMCAN_RX_Msg_40_Sgn_34;
UInt8 CANMMCAN_RX_Msg_40_Sgn_35;
double CANMMCAN_RX_Msg_40_Sgn_36;
UInt8 CANMMCAN_RX_Msg_40_Sgn_37;
double CANMMCAN_RX_Msg_40_Sgn_38;
UInt8 CANMMCAN_RX_Msg_40_Sgn_39;
double CANMMCAN_RX_Msg_40_Sgn_40;
UInt8 CANMMCAN_RX_Msg_40_Sgn_41;
UInt8 CANMMCAN_RX_Msg_40_Sgn_42;
double CANMMCAN_RX_Msg_40_Sgn_43;
double CANMMCAN_RX_Msg_40_Sgn_44;
UInt8 CANMMCAN_RX_Msg_40_Sgn_45;
UInt8 CANMMCAN_RX_Msg_40_Sgn_46;
double CANMMCAN_RX_Msg_40_Sgn_47;
double CANMMCAN_RX_Msg_40_Sgn_48;
UInt8 CANMMCAN_RX_Msg_40_Sgn_49;
UInt8 CANMMCAN_RX_Msg_40_Sgn_50;
UInt8 CANMMCAN_RX_Msg_40_Sgn_51;
UInt8 CANMMCAN_RX_Msg_40_Sgn_52;
UInt8 CANMMCAN_RX_Msg_40_Sgn_53;
UInt8 CANMMCAN_RX_Msg_40_Sgn_54;
UInt8 CANMMCAN_RX_Msg_40_Sgn_55;
UInt16 CANMMCAN_RX_Msg_40_Sgn_56;
volatile real_T CANMMCAN_RXCT41;
UInt16 CANMMCAN_RX_Msg_41_Sgn_1;
UInt32 CANMMCAN_RX_Msg_41_Sgn_2;
UInt8 CANMMCAN_RX_Msg_41_Sgn_3;
double CANMMCAN_RX_Msg_41_Sgn_4;
UInt16 CANMMCAN_RX_Msg_41_Sgn_5;
UInt8 CANMMCAN_RX_Msg_41_Sgn_6;
UInt8 CANMMCAN_RX_Msg_41_Sgn_7;
double CANMMCAN_RX_Msg_41_Sgn_8;
UInt16 CANMMCAN_RX_Msg_41_Sgn_9;
UInt8 CANMMCAN_RX_Msg_41_Sgn_10;
UInt8 CANMMCAN_RX_Msg_41_Sgn_11;
double CANMMCAN_RX_Msg_41_Sgn_12;
double CANMMCAN_RX_Msg_41_Sgn_13;
double CANMMCAN_RX_Msg_41_Sgn_14;
double CANMMCAN_RX_Msg_41_Sgn_15;
UInt8 CANMMCAN_RX_Msg_41_Sgn_16;
UInt8 CANMMCAN_RX_Msg_41_Sgn_17;
UInt8 CANMMCAN_RX_Msg_41_Sgn_18;
UInt8 CANMMCAN_RX_Msg_41_Sgn_19;
UInt8 CANMMCAN_RX_Msg_41_Sgn_20;
UInt8 CANMMCAN_RX_Msg_41_Sgn_21;
UInt8 CANMMCAN_RX_Msg_41_Sgn_22;
UInt8 CANMMCAN_RX_Msg_41_Sgn_23;
UInt8 CANMMCAN_RX_Msg_41_Sgn_24;
UInt8 CANMMCAN_RX_Msg_41_Sgn_25;
UInt8 CANMMCAN_RX_Msg_41_Sgn_26;
UInt8 CANMMCAN_RX_Msg_41_Sgn_27;
UInt8 CANMMCAN_RX_Msg_41_Sgn_28;
UInt8 CANMMCAN_RX_Msg_41_Sgn_29;
UInt8 CANMMCAN_RX_Msg_41_Sgn_30;
UInt8 CANMMCAN_RX_Msg_41_Sgn_31;
UInt8 CANMMCAN_RX_Msg_41_Sgn_32;
UInt8 CANMMCAN_RX_Msg_41_Sgn_33;
UInt8 CANMMCAN_RX_Msg_41_Sgn_34;
UInt8 CANMMCAN_RX_Msg_41_Sgn_35;
UInt8 CANMMCAN_RX_Msg_41_Sgn_36;
double CANMMCAN_RX_Msg_41_Sgn_37;
UInt8 CANMMCAN_RX_Msg_41_Sgn_38;
double CANMMCAN_RX_Msg_41_Sgn_39;
UInt8 CANMMCAN_RX_Msg_41_Sgn_40;
double CANMMCAN_RX_Msg_41_Sgn_41;
UInt8 CANMMCAN_RX_Msg_41_Sgn_42;
double CANMMCAN_RX_Msg_41_Sgn_43;
UInt8 CANMMCAN_RX_Msg_41_Sgn_44;
double CANMMCAN_RX_Msg_41_Sgn_45;
UInt8 CANMMCAN_RX_Msg_41_Sgn_46;
double CANMMCAN_RX_Msg_41_Sgn_47;
UInt8 CANMMCAN_RX_Msg_41_Sgn_48;
double CANMMCAN_RX_Msg_41_Sgn_49;
UInt8 CANMMCAN_RX_Msg_41_Sgn_50;
double CANMMCAN_RX_Msg_41_Sgn_51;
UInt8 CANMMCAN_RX_Msg_41_Sgn_52;
double CANMMCAN_RX_Msg_41_Sgn_53;
UInt8 CANMMCAN_RX_Msg_41_Sgn_54;
double CANMMCAN_RX_Msg_41_Sgn_55;
UInt8 CANMMCAN_RX_Msg_41_Sgn_56;
double CANMMCAN_RX_Msg_41_Sgn_57;
UInt8 CANMMCAN_RX_Msg_41_Sgn_58;
double CANMMCAN_RX_Msg_41_Sgn_59;
UInt8 CANMMCAN_RX_Msg_41_Sgn_60;
double CANMMCAN_RX_Msg_41_Sgn_61;
UInt8 CANMMCAN_RX_Msg_41_Sgn_62;
double CANMMCAN_RX_Msg_41_Sgn_63;
UInt8 CANMMCAN_RX_Msg_41_Sgn_64;
double CANMMCAN_RX_Msg_41_Sgn_65;
UInt8 CANMMCAN_RX_Msg_41_Sgn_66;
double CANMMCAN_RX_Msg_41_Sgn_67;
UInt8 CANMMCAN_RX_Msg_41_Sgn_68;
double CANMMCAN_RX_Msg_41_Sgn_69;
UInt8 CANMMCAN_RX_Msg_41_Sgn_70;
double CANMMCAN_RX_Msg_41_Sgn_71;
UInt8 CANMMCAN_RX_Msg_41_Sgn_72;
double CANMMCAN_RX_Msg_41_Sgn_73;
UInt8 CANMMCAN_RX_Msg_41_Sgn_74;
double CANMMCAN_RX_Msg_41_Sgn_75;
UInt8 CANMMCAN_RX_Msg_41_Sgn_76;
volatile real_T CANMMCAN_RXCT42;
UInt16 CANMMCAN_RX_Msg_42_Sgn_1;
double CANMMCAN_RX_Msg_42_Sgn_2;
UInt8 CANMMCAN_RX_Msg_42_Sgn_3;
double CANMMCAN_RX_Msg_42_Sgn_4;
UInt8 CANMMCAN_RX_Msg_42_Sgn_5;
double CANMMCAN_RX_Msg_42_Sgn_6;
UInt8 CANMMCAN_RX_Msg_42_Sgn_7;
double CANMMCAN_RX_Msg_42_Sgn_8;
UInt8 CANMMCAN_RX_Msg_42_Sgn_9;
double CANMMCAN_RX_Msg_42_Sgn_10;
UInt8 CANMMCAN_RX_Msg_42_Sgn_11;
double CANMMCAN_RX_Msg_42_Sgn_12;
UInt8 CANMMCAN_RX_Msg_42_Sgn_13;
double CANMMCAN_RX_Msg_42_Sgn_14;
UInt8 CANMMCAN_RX_Msg_42_Sgn_15;
double CANMMCAN_RX_Msg_42_Sgn_16;
UInt8 CANMMCAN_RX_Msg_42_Sgn_17;
double CANMMCAN_RX_Msg_42_Sgn_18;
UInt8 CANMMCAN_RX_Msg_42_Sgn_19;
double CANMMCAN_RX_Msg_42_Sgn_20;
UInt8 CANMMCAN_RX_Msg_42_Sgn_21;
double CANMMCAN_RX_Msg_42_Sgn_22;
UInt8 CANMMCAN_RX_Msg_42_Sgn_23;
double CANMMCAN_RX_Msg_42_Sgn_24;
UInt8 CANMMCAN_RX_Msg_42_Sgn_25;
double CANMMCAN_RX_Msg_42_Sgn_26;
UInt8 CANMMCAN_RX_Msg_42_Sgn_27;
double CANMMCAN_RX_Msg_42_Sgn_28;
UInt8 CANMMCAN_RX_Msg_42_Sgn_29;
double CANMMCAN_RX_Msg_42_Sgn_30;
UInt8 CANMMCAN_RX_Msg_42_Sgn_31;
double CANMMCAN_RX_Msg_42_Sgn_32;
UInt8 CANMMCAN_RX_Msg_42_Sgn_33;
double CANMMCAN_RX_Msg_42_Sgn_34;
UInt8 CANMMCAN_RX_Msg_42_Sgn_35;
double CANMMCAN_RX_Msg_42_Sgn_36;
UInt8 CANMMCAN_RX_Msg_42_Sgn_37;
double CANMMCAN_RX_Msg_42_Sgn_38;
UInt8 CANMMCAN_RX_Msg_42_Sgn_39;
double CANMMCAN_RX_Msg_42_Sgn_40;
UInt8 CANMMCAN_RX_Msg_42_Sgn_41;
UInt8 CANMMCAN_RX_Msg_42_Sgn_42;
double CANMMCAN_RX_Msg_42_Sgn_43;
double CANMMCAN_RX_Msg_42_Sgn_44;
UInt8 CANMMCAN_RX_Msg_42_Sgn_45;
UInt8 CANMMCAN_RX_Msg_42_Sgn_46;
double CANMMCAN_RX_Msg_42_Sgn_47;
double CANMMCAN_RX_Msg_42_Sgn_48;
UInt8 CANMMCAN_RX_Msg_42_Sgn_49;
UInt8 CANMMCAN_RX_Msg_42_Sgn_50;
UInt8 CANMMCAN_RX_Msg_42_Sgn_51;
UInt8 CANMMCAN_RX_Msg_42_Sgn_52;
UInt8 CANMMCAN_RX_Msg_42_Sgn_53;
UInt8 CANMMCAN_RX_Msg_42_Sgn_54;
UInt8 CANMMCAN_RX_Msg_42_Sgn_55;
UInt16 CANMMCAN_RX_Msg_42_Sgn_56;
volatile real_T CANMMCAN_RXCT43;
UInt16 CANMMCAN_RX_Msg_43_Sgn_1;
UInt32 CANMMCAN_RX_Msg_43_Sgn_2;
UInt8 CANMMCAN_RX_Msg_43_Sgn_3;
double CANMMCAN_RX_Msg_43_Sgn_4;
UInt16 CANMMCAN_RX_Msg_43_Sgn_5;
UInt8 CANMMCAN_RX_Msg_43_Sgn_6;
UInt8 CANMMCAN_RX_Msg_43_Sgn_7;
double CANMMCAN_RX_Msg_43_Sgn_8;
UInt16 CANMMCAN_RX_Msg_43_Sgn_9;
UInt8 CANMMCAN_RX_Msg_43_Sgn_10;
UInt8 CANMMCAN_RX_Msg_43_Sgn_11;
double CANMMCAN_RX_Msg_43_Sgn_12;
double CANMMCAN_RX_Msg_43_Sgn_13;
double CANMMCAN_RX_Msg_43_Sgn_14;
double CANMMCAN_RX_Msg_43_Sgn_15;
UInt8 CANMMCAN_RX_Msg_43_Sgn_16;
UInt8 CANMMCAN_RX_Msg_43_Sgn_17;
UInt8 CANMMCAN_RX_Msg_43_Sgn_18;
UInt8 CANMMCAN_RX_Msg_43_Sgn_19;
UInt8 CANMMCAN_RX_Msg_43_Sgn_20;
UInt8 CANMMCAN_RX_Msg_43_Sgn_21;
UInt8 CANMMCAN_RX_Msg_43_Sgn_22;
UInt8 CANMMCAN_RX_Msg_43_Sgn_23;
UInt8 CANMMCAN_RX_Msg_43_Sgn_24;
UInt8 CANMMCAN_RX_Msg_43_Sgn_25;
UInt8 CANMMCAN_RX_Msg_43_Sgn_26;
UInt8 CANMMCAN_RX_Msg_43_Sgn_27;
UInt8 CANMMCAN_RX_Msg_43_Sgn_28;
UInt8 CANMMCAN_RX_Msg_43_Sgn_29;
UInt8 CANMMCAN_RX_Msg_43_Sgn_30;
UInt8 CANMMCAN_RX_Msg_43_Sgn_31;
UInt8 CANMMCAN_RX_Msg_43_Sgn_32;
UInt8 CANMMCAN_RX_Msg_43_Sgn_33;
UInt8 CANMMCAN_RX_Msg_43_Sgn_34;
UInt8 CANMMCAN_RX_Msg_43_Sgn_35;
UInt8 CANMMCAN_RX_Msg_43_Sgn_36;
double CANMMCAN_RX_Msg_43_Sgn_37;
UInt8 CANMMCAN_RX_Msg_43_Sgn_38;
double CANMMCAN_RX_Msg_43_Sgn_39;
UInt8 CANMMCAN_RX_Msg_43_Sgn_40;
double CANMMCAN_RX_Msg_43_Sgn_41;
UInt8 CANMMCAN_RX_Msg_43_Sgn_42;
double CANMMCAN_RX_Msg_43_Sgn_43;
UInt8 CANMMCAN_RX_Msg_43_Sgn_44;
double CANMMCAN_RX_Msg_43_Sgn_45;
UInt8 CANMMCAN_RX_Msg_43_Sgn_46;
double CANMMCAN_RX_Msg_43_Sgn_47;
UInt8 CANMMCAN_RX_Msg_43_Sgn_48;
double CANMMCAN_RX_Msg_43_Sgn_49;
UInt8 CANMMCAN_RX_Msg_43_Sgn_50;
double CANMMCAN_RX_Msg_43_Sgn_51;
UInt8 CANMMCAN_RX_Msg_43_Sgn_52;
double CANMMCAN_RX_Msg_43_Sgn_53;
UInt8 CANMMCAN_RX_Msg_43_Sgn_54;
double CANMMCAN_RX_Msg_43_Sgn_55;
UInt8 CANMMCAN_RX_Msg_43_Sgn_56;
double CANMMCAN_RX_Msg_43_Sgn_57;
UInt8 CANMMCAN_RX_Msg_43_Sgn_58;
double CANMMCAN_RX_Msg_43_Sgn_59;
UInt8 CANMMCAN_RX_Msg_43_Sgn_60;
double CANMMCAN_RX_Msg_43_Sgn_61;
UInt8 CANMMCAN_RX_Msg_43_Sgn_62;
double CANMMCAN_RX_Msg_43_Sgn_63;
UInt8 CANMMCAN_RX_Msg_43_Sgn_64;
double CANMMCAN_RX_Msg_43_Sgn_65;
UInt8 CANMMCAN_RX_Msg_43_Sgn_66;
double CANMMCAN_RX_Msg_43_Sgn_67;
UInt8 CANMMCAN_RX_Msg_43_Sgn_68;
double CANMMCAN_RX_Msg_43_Sgn_69;
UInt8 CANMMCAN_RX_Msg_43_Sgn_70;
double CANMMCAN_RX_Msg_43_Sgn_71;
UInt8 CANMMCAN_RX_Msg_43_Sgn_72;
double CANMMCAN_RX_Msg_43_Sgn_73;
UInt8 CANMMCAN_RX_Msg_43_Sgn_74;
double CANMMCAN_RX_Msg_43_Sgn_75;
UInt8 CANMMCAN_RX_Msg_43_Sgn_76;
volatile real_T CANMMCAN_RXCT44;
UInt16 CANMMCAN_RX_Msg_44_Sgn_1;
double CANMMCAN_RX_Msg_44_Sgn_2;
UInt8 CANMMCAN_RX_Msg_44_Sgn_3;
double CANMMCAN_RX_Msg_44_Sgn_4;
UInt8 CANMMCAN_RX_Msg_44_Sgn_5;
double CANMMCAN_RX_Msg_44_Sgn_6;
UInt8 CANMMCAN_RX_Msg_44_Sgn_7;
double CANMMCAN_RX_Msg_44_Sgn_8;
UInt8 CANMMCAN_RX_Msg_44_Sgn_9;
double CANMMCAN_RX_Msg_44_Sgn_10;
UInt8 CANMMCAN_RX_Msg_44_Sgn_11;
double CANMMCAN_RX_Msg_44_Sgn_12;
UInt8 CANMMCAN_RX_Msg_44_Sgn_13;
double CANMMCAN_RX_Msg_44_Sgn_14;
UInt8 CANMMCAN_RX_Msg_44_Sgn_15;
double CANMMCAN_RX_Msg_44_Sgn_16;
UInt8 CANMMCAN_RX_Msg_44_Sgn_17;
double CANMMCAN_RX_Msg_44_Sgn_18;
UInt8 CANMMCAN_RX_Msg_44_Sgn_19;
double CANMMCAN_RX_Msg_44_Sgn_20;
UInt8 CANMMCAN_RX_Msg_44_Sgn_21;
double CANMMCAN_RX_Msg_44_Sgn_22;
UInt8 CANMMCAN_RX_Msg_44_Sgn_23;
double CANMMCAN_RX_Msg_44_Sgn_24;
UInt8 CANMMCAN_RX_Msg_44_Sgn_25;
double CANMMCAN_RX_Msg_44_Sgn_26;
UInt8 CANMMCAN_RX_Msg_44_Sgn_27;
double CANMMCAN_RX_Msg_44_Sgn_28;
UInt8 CANMMCAN_RX_Msg_44_Sgn_29;
double CANMMCAN_RX_Msg_44_Sgn_30;
UInt8 CANMMCAN_RX_Msg_44_Sgn_31;
double CANMMCAN_RX_Msg_44_Sgn_32;
UInt8 CANMMCAN_RX_Msg_44_Sgn_33;
double CANMMCAN_RX_Msg_44_Sgn_34;
UInt8 CANMMCAN_RX_Msg_44_Sgn_35;
double CANMMCAN_RX_Msg_44_Sgn_36;
UInt8 CANMMCAN_RX_Msg_44_Sgn_37;
double CANMMCAN_RX_Msg_44_Sgn_38;
UInt8 CANMMCAN_RX_Msg_44_Sgn_39;
double CANMMCAN_RX_Msg_44_Sgn_40;
UInt8 CANMMCAN_RX_Msg_44_Sgn_41;
UInt8 CANMMCAN_RX_Msg_44_Sgn_42;
double CANMMCAN_RX_Msg_44_Sgn_43;
double CANMMCAN_RX_Msg_44_Sgn_44;
UInt8 CANMMCAN_RX_Msg_44_Sgn_45;
UInt8 CANMMCAN_RX_Msg_44_Sgn_46;
double CANMMCAN_RX_Msg_44_Sgn_47;
double CANMMCAN_RX_Msg_44_Sgn_48;
UInt8 CANMMCAN_RX_Msg_44_Sgn_49;
UInt8 CANMMCAN_RX_Msg_44_Sgn_50;
UInt8 CANMMCAN_RX_Msg_44_Sgn_51;
UInt8 CANMMCAN_RX_Msg_44_Sgn_52;
UInt8 CANMMCAN_RX_Msg_44_Sgn_53;
UInt8 CANMMCAN_RX_Msg_44_Sgn_54;
UInt8 CANMMCAN_RX_Msg_44_Sgn_55;
UInt16 CANMMCAN_RX_Msg_44_Sgn_56;
volatile real_T CANMMCAN_RXCT45;
UInt16 CANMMCAN_RX_Msg_45_Sgn_1;
UInt32 CANMMCAN_RX_Msg_45_Sgn_2;
UInt8 CANMMCAN_RX_Msg_45_Sgn_3;
double CANMMCAN_RX_Msg_45_Sgn_4;
UInt16 CANMMCAN_RX_Msg_45_Sgn_5;
UInt8 CANMMCAN_RX_Msg_45_Sgn_6;
UInt8 CANMMCAN_RX_Msg_45_Sgn_7;
double CANMMCAN_RX_Msg_45_Sgn_8;
UInt16 CANMMCAN_RX_Msg_45_Sgn_9;
UInt8 CANMMCAN_RX_Msg_45_Sgn_10;
UInt8 CANMMCAN_RX_Msg_45_Sgn_11;
double CANMMCAN_RX_Msg_45_Sgn_12;
double CANMMCAN_RX_Msg_45_Sgn_13;
double CANMMCAN_RX_Msg_45_Sgn_14;
double CANMMCAN_RX_Msg_45_Sgn_15;
UInt8 CANMMCAN_RX_Msg_45_Sgn_16;
UInt8 CANMMCAN_RX_Msg_45_Sgn_17;
UInt8 CANMMCAN_RX_Msg_45_Sgn_18;
UInt8 CANMMCAN_RX_Msg_45_Sgn_19;
UInt8 CANMMCAN_RX_Msg_45_Sgn_20;
UInt8 CANMMCAN_RX_Msg_45_Sgn_21;
UInt8 CANMMCAN_RX_Msg_45_Sgn_22;
UInt8 CANMMCAN_RX_Msg_45_Sgn_23;
UInt8 CANMMCAN_RX_Msg_45_Sgn_24;
UInt8 CANMMCAN_RX_Msg_45_Sgn_25;
UInt8 CANMMCAN_RX_Msg_45_Sgn_26;
UInt8 CANMMCAN_RX_Msg_45_Sgn_27;
UInt8 CANMMCAN_RX_Msg_45_Sgn_28;
UInt8 CANMMCAN_RX_Msg_45_Sgn_29;
UInt8 CANMMCAN_RX_Msg_45_Sgn_30;
UInt8 CANMMCAN_RX_Msg_45_Sgn_31;
UInt8 CANMMCAN_RX_Msg_45_Sgn_32;
UInt8 CANMMCAN_RX_Msg_45_Sgn_33;
UInt8 CANMMCAN_RX_Msg_45_Sgn_34;
UInt8 CANMMCAN_RX_Msg_45_Sgn_35;
UInt8 CANMMCAN_RX_Msg_45_Sgn_36;
double CANMMCAN_RX_Msg_45_Sgn_37;
UInt8 CANMMCAN_RX_Msg_45_Sgn_38;
double CANMMCAN_RX_Msg_45_Sgn_39;
UInt8 CANMMCAN_RX_Msg_45_Sgn_40;
double CANMMCAN_RX_Msg_45_Sgn_41;
UInt8 CANMMCAN_RX_Msg_45_Sgn_42;
double CANMMCAN_RX_Msg_45_Sgn_43;
UInt8 CANMMCAN_RX_Msg_45_Sgn_44;
double CANMMCAN_RX_Msg_45_Sgn_45;
UInt8 CANMMCAN_RX_Msg_45_Sgn_46;
double CANMMCAN_RX_Msg_45_Sgn_47;
UInt8 CANMMCAN_RX_Msg_45_Sgn_48;
double CANMMCAN_RX_Msg_45_Sgn_49;
UInt8 CANMMCAN_RX_Msg_45_Sgn_50;
double CANMMCAN_RX_Msg_45_Sgn_51;
UInt8 CANMMCAN_RX_Msg_45_Sgn_52;
double CANMMCAN_RX_Msg_45_Sgn_53;
UInt8 CANMMCAN_RX_Msg_45_Sgn_54;
double CANMMCAN_RX_Msg_45_Sgn_55;
UInt8 CANMMCAN_RX_Msg_45_Sgn_56;
double CANMMCAN_RX_Msg_45_Sgn_57;
UInt8 CANMMCAN_RX_Msg_45_Sgn_58;
double CANMMCAN_RX_Msg_45_Sgn_59;
UInt8 CANMMCAN_RX_Msg_45_Sgn_60;
double CANMMCAN_RX_Msg_45_Sgn_61;
UInt8 CANMMCAN_RX_Msg_45_Sgn_62;
double CANMMCAN_RX_Msg_45_Sgn_63;
UInt8 CANMMCAN_RX_Msg_45_Sgn_64;
double CANMMCAN_RX_Msg_45_Sgn_65;
UInt8 CANMMCAN_RX_Msg_45_Sgn_66;
double CANMMCAN_RX_Msg_45_Sgn_67;
UInt8 CANMMCAN_RX_Msg_45_Sgn_68;
double CANMMCAN_RX_Msg_45_Sgn_69;
UInt8 CANMMCAN_RX_Msg_45_Sgn_70;
double CANMMCAN_RX_Msg_45_Sgn_71;
UInt8 CANMMCAN_RX_Msg_45_Sgn_72;
double CANMMCAN_RX_Msg_45_Sgn_73;
UInt8 CANMMCAN_RX_Msg_45_Sgn_74;
double CANMMCAN_RX_Msg_45_Sgn_75;
UInt8 CANMMCAN_RX_Msg_45_Sgn_76;
volatile real_T CANMMCAN_RXCT46;
UInt16 CANMMCAN_RX_Msg_46_Sgn_1;
double CANMMCAN_RX_Msg_46_Sgn_2;
UInt8 CANMMCAN_RX_Msg_46_Sgn_3;
double CANMMCAN_RX_Msg_46_Sgn_4;
UInt8 CANMMCAN_RX_Msg_46_Sgn_5;
double CANMMCAN_RX_Msg_46_Sgn_6;
UInt8 CANMMCAN_RX_Msg_46_Sgn_7;
double CANMMCAN_RX_Msg_46_Sgn_8;
UInt8 CANMMCAN_RX_Msg_46_Sgn_9;
double CANMMCAN_RX_Msg_46_Sgn_10;
UInt8 CANMMCAN_RX_Msg_46_Sgn_11;
double CANMMCAN_RX_Msg_46_Sgn_12;
UInt8 CANMMCAN_RX_Msg_46_Sgn_13;
double CANMMCAN_RX_Msg_46_Sgn_14;
UInt8 CANMMCAN_RX_Msg_46_Sgn_15;
double CANMMCAN_RX_Msg_46_Sgn_16;
UInt8 CANMMCAN_RX_Msg_46_Sgn_17;
double CANMMCAN_RX_Msg_46_Sgn_18;
UInt8 CANMMCAN_RX_Msg_46_Sgn_19;
double CANMMCAN_RX_Msg_46_Sgn_20;
UInt8 CANMMCAN_RX_Msg_46_Sgn_21;
double CANMMCAN_RX_Msg_46_Sgn_22;
UInt8 CANMMCAN_RX_Msg_46_Sgn_23;
double CANMMCAN_RX_Msg_46_Sgn_24;
UInt8 CANMMCAN_RX_Msg_46_Sgn_25;
double CANMMCAN_RX_Msg_46_Sgn_26;
UInt8 CANMMCAN_RX_Msg_46_Sgn_27;
double CANMMCAN_RX_Msg_46_Sgn_28;
UInt8 CANMMCAN_RX_Msg_46_Sgn_29;
double CANMMCAN_RX_Msg_46_Sgn_30;
UInt8 CANMMCAN_RX_Msg_46_Sgn_31;
double CANMMCAN_RX_Msg_46_Sgn_32;
UInt8 CANMMCAN_RX_Msg_46_Sgn_33;
double CANMMCAN_RX_Msg_46_Sgn_34;
UInt8 CANMMCAN_RX_Msg_46_Sgn_35;
double CANMMCAN_RX_Msg_46_Sgn_36;
UInt8 CANMMCAN_RX_Msg_46_Sgn_37;
double CANMMCAN_RX_Msg_46_Sgn_38;
UInt8 CANMMCAN_RX_Msg_46_Sgn_39;
double CANMMCAN_RX_Msg_46_Sgn_40;
UInt8 CANMMCAN_RX_Msg_46_Sgn_41;
UInt8 CANMMCAN_RX_Msg_46_Sgn_42;
double CANMMCAN_RX_Msg_46_Sgn_43;
double CANMMCAN_RX_Msg_46_Sgn_44;
UInt8 CANMMCAN_RX_Msg_46_Sgn_45;
UInt8 CANMMCAN_RX_Msg_46_Sgn_46;
double CANMMCAN_RX_Msg_46_Sgn_47;
double CANMMCAN_RX_Msg_46_Sgn_48;
UInt8 CANMMCAN_RX_Msg_46_Sgn_49;
UInt8 CANMMCAN_RX_Msg_46_Sgn_50;
UInt8 CANMMCAN_RX_Msg_46_Sgn_51;
UInt8 CANMMCAN_RX_Msg_46_Sgn_52;
UInt8 CANMMCAN_RX_Msg_46_Sgn_53;
UInt8 CANMMCAN_RX_Msg_46_Sgn_54;
UInt8 CANMMCAN_RX_Msg_46_Sgn_55;
UInt16 CANMMCAN_RX_Msg_46_Sgn_56;
volatile real_T CANMMCAN_RXCT47;
UInt16 CANMMCAN_RX_Msg_47_Sgn_1;
UInt32 CANMMCAN_RX_Msg_47_Sgn_2;
UInt8 CANMMCAN_RX_Msg_47_Sgn_3;
double CANMMCAN_RX_Msg_47_Sgn_4;
UInt16 CANMMCAN_RX_Msg_47_Sgn_5;
UInt8 CANMMCAN_RX_Msg_47_Sgn_6;
UInt8 CANMMCAN_RX_Msg_47_Sgn_7;
double CANMMCAN_RX_Msg_47_Sgn_8;
UInt16 CANMMCAN_RX_Msg_47_Sgn_9;
UInt8 CANMMCAN_RX_Msg_47_Sgn_10;
UInt8 CANMMCAN_RX_Msg_47_Sgn_11;
double CANMMCAN_RX_Msg_47_Sgn_12;
double CANMMCAN_RX_Msg_47_Sgn_13;
double CANMMCAN_RX_Msg_47_Sgn_14;
double CANMMCAN_RX_Msg_47_Sgn_15;
UInt8 CANMMCAN_RX_Msg_47_Sgn_16;
UInt8 CANMMCAN_RX_Msg_47_Sgn_17;
UInt8 CANMMCAN_RX_Msg_47_Sgn_18;
UInt8 CANMMCAN_RX_Msg_47_Sgn_19;
UInt8 CANMMCAN_RX_Msg_47_Sgn_20;
UInt8 CANMMCAN_RX_Msg_47_Sgn_21;
UInt8 CANMMCAN_RX_Msg_47_Sgn_22;
UInt8 CANMMCAN_RX_Msg_47_Sgn_23;
UInt8 CANMMCAN_RX_Msg_47_Sgn_24;
UInt8 CANMMCAN_RX_Msg_47_Sgn_25;
UInt8 CANMMCAN_RX_Msg_47_Sgn_26;
UInt8 CANMMCAN_RX_Msg_47_Sgn_27;
UInt8 CANMMCAN_RX_Msg_47_Sgn_28;
UInt8 CANMMCAN_RX_Msg_47_Sgn_29;
UInt8 CANMMCAN_RX_Msg_47_Sgn_30;
UInt8 CANMMCAN_RX_Msg_47_Sgn_31;
UInt8 CANMMCAN_RX_Msg_47_Sgn_32;
UInt8 CANMMCAN_RX_Msg_47_Sgn_33;
UInt8 CANMMCAN_RX_Msg_47_Sgn_34;
UInt8 CANMMCAN_RX_Msg_47_Sgn_35;
UInt8 CANMMCAN_RX_Msg_47_Sgn_36;
double CANMMCAN_RX_Msg_47_Sgn_37;
UInt8 CANMMCAN_RX_Msg_47_Sgn_38;
double CANMMCAN_RX_Msg_47_Sgn_39;
UInt8 CANMMCAN_RX_Msg_47_Sgn_40;
double CANMMCAN_RX_Msg_47_Sgn_41;
UInt8 CANMMCAN_RX_Msg_47_Sgn_42;
double CANMMCAN_RX_Msg_47_Sgn_43;
UInt8 CANMMCAN_RX_Msg_47_Sgn_44;
double CANMMCAN_RX_Msg_47_Sgn_45;
UInt8 CANMMCAN_RX_Msg_47_Sgn_46;
double CANMMCAN_RX_Msg_47_Sgn_47;
UInt8 CANMMCAN_RX_Msg_47_Sgn_48;
double CANMMCAN_RX_Msg_47_Sgn_49;
UInt8 CANMMCAN_RX_Msg_47_Sgn_50;
double CANMMCAN_RX_Msg_47_Sgn_51;
UInt8 CANMMCAN_RX_Msg_47_Sgn_52;
double CANMMCAN_RX_Msg_47_Sgn_53;
UInt8 CANMMCAN_RX_Msg_47_Sgn_54;
double CANMMCAN_RX_Msg_47_Sgn_55;
UInt8 CANMMCAN_RX_Msg_47_Sgn_56;
double CANMMCAN_RX_Msg_47_Sgn_57;
UInt8 CANMMCAN_RX_Msg_47_Sgn_58;
double CANMMCAN_RX_Msg_47_Sgn_59;
UInt8 CANMMCAN_RX_Msg_47_Sgn_60;
double CANMMCAN_RX_Msg_47_Sgn_61;
UInt8 CANMMCAN_RX_Msg_47_Sgn_62;
double CANMMCAN_RX_Msg_47_Sgn_63;
UInt8 CANMMCAN_RX_Msg_47_Sgn_64;
double CANMMCAN_RX_Msg_47_Sgn_65;
UInt8 CANMMCAN_RX_Msg_47_Sgn_66;
double CANMMCAN_RX_Msg_47_Sgn_67;
UInt8 CANMMCAN_RX_Msg_47_Sgn_68;
double CANMMCAN_RX_Msg_47_Sgn_69;
UInt8 CANMMCAN_RX_Msg_47_Sgn_70;
double CANMMCAN_RX_Msg_47_Sgn_71;
UInt8 CANMMCAN_RX_Msg_47_Sgn_72;
double CANMMCAN_RX_Msg_47_Sgn_73;
UInt8 CANMMCAN_RX_Msg_47_Sgn_74;
double CANMMCAN_RX_Msg_47_Sgn_75;
UInt8 CANMMCAN_RX_Msg_47_Sgn_76;
volatile real_T CANMMCAN_RXCT48;
UInt16 CANMMCAN_RX_Msg_48_Sgn_1;
double CANMMCAN_RX_Msg_48_Sgn_2;
UInt8 CANMMCAN_RX_Msg_48_Sgn_3;
double CANMMCAN_RX_Msg_48_Sgn_4;
UInt8 CANMMCAN_RX_Msg_48_Sgn_5;
double CANMMCAN_RX_Msg_48_Sgn_6;
UInt8 CANMMCAN_RX_Msg_48_Sgn_7;
double CANMMCAN_RX_Msg_48_Sgn_8;
UInt8 CANMMCAN_RX_Msg_48_Sgn_9;
double CANMMCAN_RX_Msg_48_Sgn_10;
UInt8 CANMMCAN_RX_Msg_48_Sgn_11;
double CANMMCAN_RX_Msg_48_Sgn_12;
UInt8 CANMMCAN_RX_Msg_48_Sgn_13;
double CANMMCAN_RX_Msg_48_Sgn_14;
UInt8 CANMMCAN_RX_Msg_48_Sgn_15;
double CANMMCAN_RX_Msg_48_Sgn_16;
UInt8 CANMMCAN_RX_Msg_48_Sgn_17;
double CANMMCAN_RX_Msg_48_Sgn_18;
UInt8 CANMMCAN_RX_Msg_48_Sgn_19;
double CANMMCAN_RX_Msg_48_Sgn_20;
UInt8 CANMMCAN_RX_Msg_48_Sgn_21;
double CANMMCAN_RX_Msg_48_Sgn_22;
UInt8 CANMMCAN_RX_Msg_48_Sgn_23;
double CANMMCAN_RX_Msg_48_Sgn_24;
UInt8 CANMMCAN_RX_Msg_48_Sgn_25;
double CANMMCAN_RX_Msg_48_Sgn_26;
UInt8 CANMMCAN_RX_Msg_48_Sgn_27;
double CANMMCAN_RX_Msg_48_Sgn_28;
UInt8 CANMMCAN_RX_Msg_48_Sgn_29;
double CANMMCAN_RX_Msg_48_Sgn_30;
UInt8 CANMMCAN_RX_Msg_48_Sgn_31;
double CANMMCAN_RX_Msg_48_Sgn_32;
UInt8 CANMMCAN_RX_Msg_48_Sgn_33;
double CANMMCAN_RX_Msg_48_Sgn_34;
UInt8 CANMMCAN_RX_Msg_48_Sgn_35;
double CANMMCAN_RX_Msg_48_Sgn_36;
UInt8 CANMMCAN_RX_Msg_48_Sgn_37;
double CANMMCAN_RX_Msg_48_Sgn_38;
UInt8 CANMMCAN_RX_Msg_48_Sgn_39;
double CANMMCAN_RX_Msg_48_Sgn_40;
UInt8 CANMMCAN_RX_Msg_48_Sgn_41;
UInt8 CANMMCAN_RX_Msg_48_Sgn_42;
double CANMMCAN_RX_Msg_48_Sgn_43;
double CANMMCAN_RX_Msg_48_Sgn_44;
UInt8 CANMMCAN_RX_Msg_48_Sgn_45;
UInt8 CANMMCAN_RX_Msg_48_Sgn_46;
double CANMMCAN_RX_Msg_48_Sgn_47;
double CANMMCAN_RX_Msg_48_Sgn_48;
UInt8 CANMMCAN_RX_Msg_48_Sgn_49;
UInt8 CANMMCAN_RX_Msg_48_Sgn_50;
UInt8 CANMMCAN_RX_Msg_48_Sgn_51;
UInt8 CANMMCAN_RX_Msg_48_Sgn_52;
UInt8 CANMMCAN_RX_Msg_48_Sgn_53;
UInt8 CANMMCAN_RX_Msg_48_Sgn_54;
UInt8 CANMMCAN_RX_Msg_48_Sgn_55;
UInt16 CANMMCAN_RX_Msg_48_Sgn_56;
volatile real_T CANMMCAN_RXCT49;
UInt16 CANMMCAN_RX_Msg_49_Sgn_1;
UInt32 CANMMCAN_RX_Msg_49_Sgn_2;
UInt8 CANMMCAN_RX_Msg_49_Sgn_3;
double CANMMCAN_RX_Msg_49_Sgn_4;
UInt16 CANMMCAN_RX_Msg_49_Sgn_5;
UInt8 CANMMCAN_RX_Msg_49_Sgn_6;
UInt8 CANMMCAN_RX_Msg_49_Sgn_7;
double CANMMCAN_RX_Msg_49_Sgn_8;
UInt16 CANMMCAN_RX_Msg_49_Sgn_9;
UInt8 CANMMCAN_RX_Msg_49_Sgn_10;
UInt8 CANMMCAN_RX_Msg_49_Sgn_11;
double CANMMCAN_RX_Msg_49_Sgn_12;
double CANMMCAN_RX_Msg_49_Sgn_13;
double CANMMCAN_RX_Msg_49_Sgn_14;
double CANMMCAN_RX_Msg_49_Sgn_15;
UInt8 CANMMCAN_RX_Msg_49_Sgn_16;
UInt8 CANMMCAN_RX_Msg_49_Sgn_17;
UInt8 CANMMCAN_RX_Msg_49_Sgn_18;
UInt8 CANMMCAN_RX_Msg_49_Sgn_19;
UInt8 CANMMCAN_RX_Msg_49_Sgn_20;
UInt8 CANMMCAN_RX_Msg_49_Sgn_21;
UInt8 CANMMCAN_RX_Msg_49_Sgn_22;
UInt8 CANMMCAN_RX_Msg_49_Sgn_23;
UInt8 CANMMCAN_RX_Msg_49_Sgn_24;
UInt8 CANMMCAN_RX_Msg_49_Sgn_25;
UInt8 CANMMCAN_RX_Msg_49_Sgn_26;
UInt8 CANMMCAN_RX_Msg_49_Sgn_27;
UInt8 CANMMCAN_RX_Msg_49_Sgn_28;
UInt8 CANMMCAN_RX_Msg_49_Sgn_29;
UInt8 CANMMCAN_RX_Msg_49_Sgn_30;
UInt8 CANMMCAN_RX_Msg_49_Sgn_31;
UInt8 CANMMCAN_RX_Msg_49_Sgn_32;
UInt8 CANMMCAN_RX_Msg_49_Sgn_33;
UInt8 CANMMCAN_RX_Msg_49_Sgn_34;
UInt8 CANMMCAN_RX_Msg_49_Sgn_35;
UInt8 CANMMCAN_RX_Msg_49_Sgn_36;
double CANMMCAN_RX_Msg_49_Sgn_37;
UInt8 CANMMCAN_RX_Msg_49_Sgn_38;
double CANMMCAN_RX_Msg_49_Sgn_39;
UInt8 CANMMCAN_RX_Msg_49_Sgn_40;
double CANMMCAN_RX_Msg_49_Sgn_41;
UInt8 CANMMCAN_RX_Msg_49_Sgn_42;
double CANMMCAN_RX_Msg_49_Sgn_43;
UInt8 CANMMCAN_RX_Msg_49_Sgn_44;
double CANMMCAN_RX_Msg_49_Sgn_45;
UInt8 CANMMCAN_RX_Msg_49_Sgn_46;
double CANMMCAN_RX_Msg_49_Sgn_47;
UInt8 CANMMCAN_RX_Msg_49_Sgn_48;
double CANMMCAN_RX_Msg_49_Sgn_49;
UInt8 CANMMCAN_RX_Msg_49_Sgn_50;
double CANMMCAN_RX_Msg_49_Sgn_51;
UInt8 CANMMCAN_RX_Msg_49_Sgn_52;
double CANMMCAN_RX_Msg_49_Sgn_53;
UInt8 CANMMCAN_RX_Msg_49_Sgn_54;
double CANMMCAN_RX_Msg_49_Sgn_55;
UInt8 CANMMCAN_RX_Msg_49_Sgn_56;
double CANMMCAN_RX_Msg_49_Sgn_57;
UInt8 CANMMCAN_RX_Msg_49_Sgn_58;
double CANMMCAN_RX_Msg_49_Sgn_59;
UInt8 CANMMCAN_RX_Msg_49_Sgn_60;
double CANMMCAN_RX_Msg_49_Sgn_61;
UInt8 CANMMCAN_RX_Msg_49_Sgn_62;
double CANMMCAN_RX_Msg_49_Sgn_63;
UInt8 CANMMCAN_RX_Msg_49_Sgn_64;
double CANMMCAN_RX_Msg_49_Sgn_65;
UInt8 CANMMCAN_RX_Msg_49_Sgn_66;
double CANMMCAN_RX_Msg_49_Sgn_67;
UInt8 CANMMCAN_RX_Msg_49_Sgn_68;
double CANMMCAN_RX_Msg_49_Sgn_69;
UInt8 CANMMCAN_RX_Msg_49_Sgn_70;
double CANMMCAN_RX_Msg_49_Sgn_71;
UInt8 CANMMCAN_RX_Msg_49_Sgn_72;
double CANMMCAN_RX_Msg_49_Sgn_73;
UInt8 CANMMCAN_RX_Msg_49_Sgn_74;
double CANMMCAN_RX_Msg_49_Sgn_75;
UInt8 CANMMCAN_RX_Msg_49_Sgn_76;
volatile real_T CANMMCAN_RXCT50;
UInt16 CANMMCAN_RX_Msg_50_Sgn_1;
double CANMMCAN_RX_Msg_50_Sgn_2;
UInt8 CANMMCAN_RX_Msg_50_Sgn_3;
double CANMMCAN_RX_Msg_50_Sgn_4;
UInt8 CANMMCAN_RX_Msg_50_Sgn_5;
double CANMMCAN_RX_Msg_50_Sgn_6;
UInt8 CANMMCAN_RX_Msg_50_Sgn_7;
double CANMMCAN_RX_Msg_50_Sgn_8;
UInt8 CANMMCAN_RX_Msg_50_Sgn_9;
double CANMMCAN_RX_Msg_50_Sgn_10;
UInt8 CANMMCAN_RX_Msg_50_Sgn_11;
double CANMMCAN_RX_Msg_50_Sgn_12;
UInt8 CANMMCAN_RX_Msg_50_Sgn_13;
double CANMMCAN_RX_Msg_50_Sgn_14;
UInt8 CANMMCAN_RX_Msg_50_Sgn_15;
double CANMMCAN_RX_Msg_50_Sgn_16;
UInt8 CANMMCAN_RX_Msg_50_Sgn_17;
double CANMMCAN_RX_Msg_50_Sgn_18;
UInt8 CANMMCAN_RX_Msg_50_Sgn_19;
double CANMMCAN_RX_Msg_50_Sgn_20;
UInt8 CANMMCAN_RX_Msg_50_Sgn_21;
double CANMMCAN_RX_Msg_50_Sgn_22;
UInt8 CANMMCAN_RX_Msg_50_Sgn_23;
double CANMMCAN_RX_Msg_50_Sgn_24;
UInt8 CANMMCAN_RX_Msg_50_Sgn_25;
double CANMMCAN_RX_Msg_50_Sgn_26;
UInt8 CANMMCAN_RX_Msg_50_Sgn_27;
double CANMMCAN_RX_Msg_50_Sgn_28;
UInt8 CANMMCAN_RX_Msg_50_Sgn_29;
double CANMMCAN_RX_Msg_50_Sgn_30;
UInt8 CANMMCAN_RX_Msg_50_Sgn_31;
double CANMMCAN_RX_Msg_50_Sgn_32;
UInt8 CANMMCAN_RX_Msg_50_Sgn_33;
double CANMMCAN_RX_Msg_50_Sgn_34;
UInt8 CANMMCAN_RX_Msg_50_Sgn_35;
double CANMMCAN_RX_Msg_50_Sgn_36;
UInt8 CANMMCAN_RX_Msg_50_Sgn_37;
double CANMMCAN_RX_Msg_50_Sgn_38;
UInt8 CANMMCAN_RX_Msg_50_Sgn_39;
double CANMMCAN_RX_Msg_50_Sgn_40;
UInt8 CANMMCAN_RX_Msg_50_Sgn_41;
UInt8 CANMMCAN_RX_Msg_50_Sgn_42;
double CANMMCAN_RX_Msg_50_Sgn_43;
double CANMMCAN_RX_Msg_50_Sgn_44;
UInt8 CANMMCAN_RX_Msg_50_Sgn_45;
UInt8 CANMMCAN_RX_Msg_50_Sgn_46;
double CANMMCAN_RX_Msg_50_Sgn_47;
double CANMMCAN_RX_Msg_50_Sgn_48;
UInt8 CANMMCAN_RX_Msg_50_Sgn_49;
UInt8 CANMMCAN_RX_Msg_50_Sgn_50;
UInt8 CANMMCAN_RX_Msg_50_Sgn_51;
UInt8 CANMMCAN_RX_Msg_50_Sgn_52;
UInt8 CANMMCAN_RX_Msg_50_Sgn_53;
UInt8 CANMMCAN_RX_Msg_50_Sgn_54;
UInt8 CANMMCAN_RX_Msg_50_Sgn_55;
UInt16 CANMMCAN_RX_Msg_50_Sgn_56;
volatile real_T CANMMCAN_RXCT51;
UInt16 CANMMCAN_RX_Msg_51_Sgn_1;
UInt32 CANMMCAN_RX_Msg_51_Sgn_2;
UInt8 CANMMCAN_RX_Msg_51_Sgn_3;
double CANMMCAN_RX_Msg_51_Sgn_4;
UInt16 CANMMCAN_RX_Msg_51_Sgn_5;
UInt8 CANMMCAN_RX_Msg_51_Sgn_6;
UInt8 CANMMCAN_RX_Msg_51_Sgn_7;
double CANMMCAN_RX_Msg_51_Sgn_8;
UInt16 CANMMCAN_RX_Msg_51_Sgn_9;
UInt8 CANMMCAN_RX_Msg_51_Sgn_10;
UInt8 CANMMCAN_RX_Msg_51_Sgn_11;
double CANMMCAN_RX_Msg_51_Sgn_12;
double CANMMCAN_RX_Msg_51_Sgn_13;
double CANMMCAN_RX_Msg_51_Sgn_14;
double CANMMCAN_RX_Msg_51_Sgn_15;
UInt8 CANMMCAN_RX_Msg_51_Sgn_16;
UInt8 CANMMCAN_RX_Msg_51_Sgn_17;
UInt8 CANMMCAN_RX_Msg_51_Sgn_18;
UInt8 CANMMCAN_RX_Msg_51_Sgn_19;
UInt8 CANMMCAN_RX_Msg_51_Sgn_20;
UInt8 CANMMCAN_RX_Msg_51_Sgn_21;
UInt8 CANMMCAN_RX_Msg_51_Sgn_22;
UInt8 CANMMCAN_RX_Msg_51_Sgn_23;
UInt8 CANMMCAN_RX_Msg_51_Sgn_24;
UInt8 CANMMCAN_RX_Msg_51_Sgn_25;
UInt8 CANMMCAN_RX_Msg_51_Sgn_26;
UInt8 CANMMCAN_RX_Msg_51_Sgn_27;
UInt8 CANMMCAN_RX_Msg_51_Sgn_28;
UInt8 CANMMCAN_RX_Msg_51_Sgn_29;
UInt8 CANMMCAN_RX_Msg_51_Sgn_30;
UInt8 CANMMCAN_RX_Msg_51_Sgn_31;
UInt8 CANMMCAN_RX_Msg_51_Sgn_32;
UInt8 CANMMCAN_RX_Msg_51_Sgn_33;
UInt8 CANMMCAN_RX_Msg_51_Sgn_34;
UInt8 CANMMCAN_RX_Msg_51_Sgn_35;
UInt8 CANMMCAN_RX_Msg_51_Sgn_36;
double CANMMCAN_RX_Msg_51_Sgn_37;
UInt8 CANMMCAN_RX_Msg_51_Sgn_38;
double CANMMCAN_RX_Msg_51_Sgn_39;
UInt8 CANMMCAN_RX_Msg_51_Sgn_40;
double CANMMCAN_RX_Msg_51_Sgn_41;
UInt8 CANMMCAN_RX_Msg_51_Sgn_42;
double CANMMCAN_RX_Msg_51_Sgn_43;
UInt8 CANMMCAN_RX_Msg_51_Sgn_44;
double CANMMCAN_RX_Msg_51_Sgn_45;
UInt8 CANMMCAN_RX_Msg_51_Sgn_46;
double CANMMCAN_RX_Msg_51_Sgn_47;
UInt8 CANMMCAN_RX_Msg_51_Sgn_48;
double CANMMCAN_RX_Msg_51_Sgn_49;
UInt8 CANMMCAN_RX_Msg_51_Sgn_50;
double CANMMCAN_RX_Msg_51_Sgn_51;
UInt8 CANMMCAN_RX_Msg_51_Sgn_52;
double CANMMCAN_RX_Msg_51_Sgn_53;
UInt8 CANMMCAN_RX_Msg_51_Sgn_54;
double CANMMCAN_RX_Msg_51_Sgn_55;
UInt8 CANMMCAN_RX_Msg_51_Sgn_56;
double CANMMCAN_RX_Msg_51_Sgn_57;
UInt8 CANMMCAN_RX_Msg_51_Sgn_58;
double CANMMCAN_RX_Msg_51_Sgn_59;
UInt8 CANMMCAN_RX_Msg_51_Sgn_60;
double CANMMCAN_RX_Msg_51_Sgn_61;
UInt8 CANMMCAN_RX_Msg_51_Sgn_62;
double CANMMCAN_RX_Msg_51_Sgn_63;
UInt8 CANMMCAN_RX_Msg_51_Sgn_64;
double CANMMCAN_RX_Msg_51_Sgn_65;
UInt8 CANMMCAN_RX_Msg_51_Sgn_66;
double CANMMCAN_RX_Msg_51_Sgn_67;
UInt8 CANMMCAN_RX_Msg_51_Sgn_68;
double CANMMCAN_RX_Msg_51_Sgn_69;
UInt8 CANMMCAN_RX_Msg_51_Sgn_70;
double CANMMCAN_RX_Msg_51_Sgn_71;
UInt8 CANMMCAN_RX_Msg_51_Sgn_72;
double CANMMCAN_RX_Msg_51_Sgn_73;
UInt8 CANMMCAN_RX_Msg_51_Sgn_74;
double CANMMCAN_RX_Msg_51_Sgn_75;
UInt8 CANMMCAN_RX_Msg_51_Sgn_76;
volatile real_T CANMMCAN_RXCT52;
UInt16 CANMMCAN_RX_Msg_52_Sgn_1;
double CANMMCAN_RX_Msg_52_Sgn_2;
UInt8 CANMMCAN_RX_Msg_52_Sgn_3;
double CANMMCAN_RX_Msg_52_Sgn_4;
UInt8 CANMMCAN_RX_Msg_52_Sgn_5;
double CANMMCAN_RX_Msg_52_Sgn_6;
UInt8 CANMMCAN_RX_Msg_52_Sgn_7;
double CANMMCAN_RX_Msg_52_Sgn_8;
UInt8 CANMMCAN_RX_Msg_52_Sgn_9;
double CANMMCAN_RX_Msg_52_Sgn_10;
UInt8 CANMMCAN_RX_Msg_52_Sgn_11;
double CANMMCAN_RX_Msg_52_Sgn_12;
UInt8 CANMMCAN_RX_Msg_52_Sgn_13;
double CANMMCAN_RX_Msg_52_Sgn_14;
UInt8 CANMMCAN_RX_Msg_52_Sgn_15;
double CANMMCAN_RX_Msg_52_Sgn_16;
UInt8 CANMMCAN_RX_Msg_52_Sgn_17;
double CANMMCAN_RX_Msg_52_Sgn_18;
UInt8 CANMMCAN_RX_Msg_52_Sgn_19;
double CANMMCAN_RX_Msg_52_Sgn_20;
UInt8 CANMMCAN_RX_Msg_52_Sgn_21;
double CANMMCAN_RX_Msg_52_Sgn_22;
UInt8 CANMMCAN_RX_Msg_52_Sgn_23;
double CANMMCAN_RX_Msg_52_Sgn_24;
UInt8 CANMMCAN_RX_Msg_52_Sgn_25;
double CANMMCAN_RX_Msg_52_Sgn_26;
UInt8 CANMMCAN_RX_Msg_52_Sgn_27;
double CANMMCAN_RX_Msg_52_Sgn_28;
UInt8 CANMMCAN_RX_Msg_52_Sgn_29;
double CANMMCAN_RX_Msg_52_Sgn_30;
UInt8 CANMMCAN_RX_Msg_52_Sgn_31;
double CANMMCAN_RX_Msg_52_Sgn_32;
UInt8 CANMMCAN_RX_Msg_52_Sgn_33;
double CANMMCAN_RX_Msg_52_Sgn_34;
UInt8 CANMMCAN_RX_Msg_52_Sgn_35;
double CANMMCAN_RX_Msg_52_Sgn_36;
UInt8 CANMMCAN_RX_Msg_52_Sgn_37;
double CANMMCAN_RX_Msg_52_Sgn_38;
UInt8 CANMMCAN_RX_Msg_52_Sgn_39;
double CANMMCAN_RX_Msg_52_Sgn_40;
UInt8 CANMMCAN_RX_Msg_52_Sgn_41;
UInt8 CANMMCAN_RX_Msg_52_Sgn_42;
double CANMMCAN_RX_Msg_52_Sgn_43;
double CANMMCAN_RX_Msg_52_Sgn_44;
UInt8 CANMMCAN_RX_Msg_52_Sgn_45;
UInt8 CANMMCAN_RX_Msg_52_Sgn_46;
double CANMMCAN_RX_Msg_52_Sgn_47;
double CANMMCAN_RX_Msg_52_Sgn_48;
UInt8 CANMMCAN_RX_Msg_52_Sgn_49;
UInt8 CANMMCAN_RX_Msg_52_Sgn_50;
UInt8 CANMMCAN_RX_Msg_52_Sgn_51;
UInt8 CANMMCAN_RX_Msg_52_Sgn_52;
UInt8 CANMMCAN_RX_Msg_52_Sgn_53;
UInt8 CANMMCAN_RX_Msg_52_Sgn_54;
UInt8 CANMMCAN_RX_Msg_52_Sgn_55;
UInt16 CANMMCAN_RX_Msg_52_Sgn_56;
volatile real_T CANMMCAN_RXCT53;
UInt16 CANMMCAN_RX_Msg_53_Sgn_1;
UInt32 CANMMCAN_RX_Msg_53_Sgn_2;
UInt8 CANMMCAN_RX_Msg_53_Sgn_3;
double CANMMCAN_RX_Msg_53_Sgn_4;
UInt16 CANMMCAN_RX_Msg_53_Sgn_5;
UInt8 CANMMCAN_RX_Msg_53_Sgn_6;
UInt8 CANMMCAN_RX_Msg_53_Sgn_7;
double CANMMCAN_RX_Msg_53_Sgn_8;
UInt16 CANMMCAN_RX_Msg_53_Sgn_9;
UInt8 CANMMCAN_RX_Msg_53_Sgn_10;
UInt8 CANMMCAN_RX_Msg_53_Sgn_11;
double CANMMCAN_RX_Msg_53_Sgn_12;
double CANMMCAN_RX_Msg_53_Sgn_13;
double CANMMCAN_RX_Msg_53_Sgn_14;
double CANMMCAN_RX_Msg_53_Sgn_15;
UInt8 CANMMCAN_RX_Msg_53_Sgn_16;
UInt8 CANMMCAN_RX_Msg_53_Sgn_17;
UInt8 CANMMCAN_RX_Msg_53_Sgn_18;
UInt8 CANMMCAN_RX_Msg_53_Sgn_19;
UInt8 CANMMCAN_RX_Msg_53_Sgn_20;
UInt8 CANMMCAN_RX_Msg_53_Sgn_21;
UInt8 CANMMCAN_RX_Msg_53_Sgn_22;
UInt8 CANMMCAN_RX_Msg_53_Sgn_23;
UInt8 CANMMCAN_RX_Msg_53_Sgn_24;
UInt8 CANMMCAN_RX_Msg_53_Sgn_25;
UInt8 CANMMCAN_RX_Msg_53_Sgn_26;
UInt8 CANMMCAN_RX_Msg_53_Sgn_27;
UInt8 CANMMCAN_RX_Msg_53_Sgn_28;
UInt8 CANMMCAN_RX_Msg_53_Sgn_29;
UInt8 CANMMCAN_RX_Msg_53_Sgn_30;
UInt8 CANMMCAN_RX_Msg_53_Sgn_31;
UInt8 CANMMCAN_RX_Msg_53_Sgn_32;
UInt8 CANMMCAN_RX_Msg_53_Sgn_33;
UInt8 CANMMCAN_RX_Msg_53_Sgn_34;
UInt8 CANMMCAN_RX_Msg_53_Sgn_35;
UInt8 CANMMCAN_RX_Msg_53_Sgn_36;
double CANMMCAN_RX_Msg_53_Sgn_37;
UInt8 CANMMCAN_RX_Msg_53_Sgn_38;
double CANMMCAN_RX_Msg_53_Sgn_39;
UInt8 CANMMCAN_RX_Msg_53_Sgn_40;
double CANMMCAN_RX_Msg_53_Sgn_41;
UInt8 CANMMCAN_RX_Msg_53_Sgn_42;
double CANMMCAN_RX_Msg_53_Sgn_43;
UInt8 CANMMCAN_RX_Msg_53_Sgn_44;
double CANMMCAN_RX_Msg_53_Sgn_45;
UInt8 CANMMCAN_RX_Msg_53_Sgn_46;
double CANMMCAN_RX_Msg_53_Sgn_47;
UInt8 CANMMCAN_RX_Msg_53_Sgn_48;
double CANMMCAN_RX_Msg_53_Sgn_49;
UInt8 CANMMCAN_RX_Msg_53_Sgn_50;
double CANMMCAN_RX_Msg_53_Sgn_51;
UInt8 CANMMCAN_RX_Msg_53_Sgn_52;
double CANMMCAN_RX_Msg_53_Sgn_53;
UInt8 CANMMCAN_RX_Msg_53_Sgn_54;
double CANMMCAN_RX_Msg_53_Sgn_55;
UInt8 CANMMCAN_RX_Msg_53_Sgn_56;
double CANMMCAN_RX_Msg_53_Sgn_57;
UInt8 CANMMCAN_RX_Msg_53_Sgn_58;
double CANMMCAN_RX_Msg_53_Sgn_59;
UInt8 CANMMCAN_RX_Msg_53_Sgn_60;
double CANMMCAN_RX_Msg_53_Sgn_61;
UInt8 CANMMCAN_RX_Msg_53_Sgn_62;
double CANMMCAN_RX_Msg_53_Sgn_63;
UInt8 CANMMCAN_RX_Msg_53_Sgn_64;
double CANMMCAN_RX_Msg_53_Sgn_65;
UInt8 CANMMCAN_RX_Msg_53_Sgn_66;
double CANMMCAN_RX_Msg_53_Sgn_67;
UInt8 CANMMCAN_RX_Msg_53_Sgn_68;
double CANMMCAN_RX_Msg_53_Sgn_69;
UInt8 CANMMCAN_RX_Msg_53_Sgn_70;
double CANMMCAN_RX_Msg_53_Sgn_71;
UInt8 CANMMCAN_RX_Msg_53_Sgn_72;
double CANMMCAN_RX_Msg_53_Sgn_73;
UInt8 CANMMCAN_RX_Msg_53_Sgn_74;
double CANMMCAN_RX_Msg_53_Sgn_75;
UInt8 CANMMCAN_RX_Msg_53_Sgn_76;
volatile real_T CANMMCAN_RXCT54;
UInt16 CANMMCAN_RX_Msg_54_Sgn_1;
double CANMMCAN_RX_Msg_54_Sgn_2;
UInt8 CANMMCAN_RX_Msg_54_Sgn_3;
double CANMMCAN_RX_Msg_54_Sgn_4;
UInt8 CANMMCAN_RX_Msg_54_Sgn_5;
double CANMMCAN_RX_Msg_54_Sgn_6;
UInt8 CANMMCAN_RX_Msg_54_Sgn_7;
double CANMMCAN_RX_Msg_54_Sgn_8;
UInt8 CANMMCAN_RX_Msg_54_Sgn_9;
double CANMMCAN_RX_Msg_54_Sgn_10;
UInt8 CANMMCAN_RX_Msg_54_Sgn_11;
double CANMMCAN_RX_Msg_54_Sgn_12;
UInt8 CANMMCAN_RX_Msg_54_Sgn_13;
double CANMMCAN_RX_Msg_54_Sgn_14;
UInt8 CANMMCAN_RX_Msg_54_Sgn_15;
double CANMMCAN_RX_Msg_54_Sgn_16;
UInt8 CANMMCAN_RX_Msg_54_Sgn_17;
double CANMMCAN_RX_Msg_54_Sgn_18;
UInt8 CANMMCAN_RX_Msg_54_Sgn_19;
double CANMMCAN_RX_Msg_54_Sgn_20;
UInt8 CANMMCAN_RX_Msg_54_Sgn_21;
double CANMMCAN_RX_Msg_54_Sgn_22;
UInt8 CANMMCAN_RX_Msg_54_Sgn_23;
double CANMMCAN_RX_Msg_54_Sgn_24;
UInt8 CANMMCAN_RX_Msg_54_Sgn_25;
double CANMMCAN_RX_Msg_54_Sgn_26;
UInt8 CANMMCAN_RX_Msg_54_Sgn_27;
double CANMMCAN_RX_Msg_54_Sgn_28;
UInt8 CANMMCAN_RX_Msg_54_Sgn_29;
double CANMMCAN_RX_Msg_54_Sgn_30;
UInt8 CANMMCAN_RX_Msg_54_Sgn_31;
double CANMMCAN_RX_Msg_54_Sgn_32;
UInt8 CANMMCAN_RX_Msg_54_Sgn_33;
double CANMMCAN_RX_Msg_54_Sgn_34;
UInt8 CANMMCAN_RX_Msg_54_Sgn_35;
double CANMMCAN_RX_Msg_54_Sgn_36;
UInt8 CANMMCAN_RX_Msg_54_Sgn_37;
double CANMMCAN_RX_Msg_54_Sgn_38;
UInt8 CANMMCAN_RX_Msg_54_Sgn_39;
double CANMMCAN_RX_Msg_54_Sgn_40;
UInt8 CANMMCAN_RX_Msg_54_Sgn_41;
UInt8 CANMMCAN_RX_Msg_54_Sgn_42;
double CANMMCAN_RX_Msg_54_Sgn_43;
double CANMMCAN_RX_Msg_54_Sgn_44;
UInt8 CANMMCAN_RX_Msg_54_Sgn_45;
UInt8 CANMMCAN_RX_Msg_54_Sgn_46;
double CANMMCAN_RX_Msg_54_Sgn_47;
double CANMMCAN_RX_Msg_54_Sgn_48;
UInt8 CANMMCAN_RX_Msg_54_Sgn_49;
UInt8 CANMMCAN_RX_Msg_54_Sgn_50;
UInt8 CANMMCAN_RX_Msg_54_Sgn_51;
UInt8 CANMMCAN_RX_Msg_54_Sgn_52;
UInt8 CANMMCAN_RX_Msg_54_Sgn_53;
UInt8 CANMMCAN_RX_Msg_54_Sgn_54;
UInt8 CANMMCAN_RX_Msg_54_Sgn_55;
UInt16 CANMMCAN_RX_Msg_54_Sgn_56;
volatile real_T CANMMCAN_RXCT55;
UInt16 CANMMCAN_RX_Msg_55_Sgn_1;
UInt32 CANMMCAN_RX_Msg_55_Sgn_2;
UInt8 CANMMCAN_RX_Msg_55_Sgn_3;
double CANMMCAN_RX_Msg_55_Sgn_4;
UInt16 CANMMCAN_RX_Msg_55_Sgn_5;
UInt8 CANMMCAN_RX_Msg_55_Sgn_6;
UInt8 CANMMCAN_RX_Msg_55_Sgn_7;
double CANMMCAN_RX_Msg_55_Sgn_8;
UInt16 CANMMCAN_RX_Msg_55_Sgn_9;
UInt8 CANMMCAN_RX_Msg_55_Sgn_10;
UInt8 CANMMCAN_RX_Msg_55_Sgn_11;
double CANMMCAN_RX_Msg_55_Sgn_12;
double CANMMCAN_RX_Msg_55_Sgn_13;
double CANMMCAN_RX_Msg_55_Sgn_14;
double CANMMCAN_RX_Msg_55_Sgn_15;
UInt8 CANMMCAN_RX_Msg_55_Sgn_16;
UInt8 CANMMCAN_RX_Msg_55_Sgn_17;
UInt8 CANMMCAN_RX_Msg_55_Sgn_18;
UInt8 CANMMCAN_RX_Msg_55_Sgn_19;
UInt8 CANMMCAN_RX_Msg_55_Sgn_20;
UInt8 CANMMCAN_RX_Msg_55_Sgn_21;
UInt8 CANMMCAN_RX_Msg_55_Sgn_22;
UInt8 CANMMCAN_RX_Msg_55_Sgn_23;
UInt8 CANMMCAN_RX_Msg_55_Sgn_24;
UInt8 CANMMCAN_RX_Msg_55_Sgn_25;
UInt8 CANMMCAN_RX_Msg_55_Sgn_26;
UInt8 CANMMCAN_RX_Msg_55_Sgn_27;
UInt8 CANMMCAN_RX_Msg_55_Sgn_28;
UInt8 CANMMCAN_RX_Msg_55_Sgn_29;
UInt8 CANMMCAN_RX_Msg_55_Sgn_30;
UInt8 CANMMCAN_RX_Msg_55_Sgn_31;
UInt8 CANMMCAN_RX_Msg_55_Sgn_32;
UInt8 CANMMCAN_RX_Msg_55_Sgn_33;
UInt8 CANMMCAN_RX_Msg_55_Sgn_34;
UInt8 CANMMCAN_RX_Msg_55_Sgn_35;
UInt8 CANMMCAN_RX_Msg_55_Sgn_36;
double CANMMCAN_RX_Msg_55_Sgn_37;
UInt8 CANMMCAN_RX_Msg_55_Sgn_38;
double CANMMCAN_RX_Msg_55_Sgn_39;
UInt8 CANMMCAN_RX_Msg_55_Sgn_40;
double CANMMCAN_RX_Msg_55_Sgn_41;
UInt8 CANMMCAN_RX_Msg_55_Sgn_42;
double CANMMCAN_RX_Msg_55_Sgn_43;
UInt8 CANMMCAN_RX_Msg_55_Sgn_44;
double CANMMCAN_RX_Msg_55_Sgn_45;
UInt8 CANMMCAN_RX_Msg_55_Sgn_46;
double CANMMCAN_RX_Msg_55_Sgn_47;
UInt8 CANMMCAN_RX_Msg_55_Sgn_48;
double CANMMCAN_RX_Msg_55_Sgn_49;
UInt8 CANMMCAN_RX_Msg_55_Sgn_50;
double CANMMCAN_RX_Msg_55_Sgn_51;
UInt8 CANMMCAN_RX_Msg_55_Sgn_52;
double CANMMCAN_RX_Msg_55_Sgn_53;
UInt8 CANMMCAN_RX_Msg_55_Sgn_54;
double CANMMCAN_RX_Msg_55_Sgn_55;
UInt8 CANMMCAN_RX_Msg_55_Sgn_56;
double CANMMCAN_RX_Msg_55_Sgn_57;
UInt8 CANMMCAN_RX_Msg_55_Sgn_58;
double CANMMCAN_RX_Msg_55_Sgn_59;
UInt8 CANMMCAN_RX_Msg_55_Sgn_60;
double CANMMCAN_RX_Msg_55_Sgn_61;
UInt8 CANMMCAN_RX_Msg_55_Sgn_62;
double CANMMCAN_RX_Msg_55_Sgn_63;
UInt8 CANMMCAN_RX_Msg_55_Sgn_64;
double CANMMCAN_RX_Msg_55_Sgn_65;
UInt8 CANMMCAN_RX_Msg_55_Sgn_66;
double CANMMCAN_RX_Msg_55_Sgn_67;
UInt8 CANMMCAN_RX_Msg_55_Sgn_68;
double CANMMCAN_RX_Msg_55_Sgn_69;
UInt8 CANMMCAN_RX_Msg_55_Sgn_70;
double CANMMCAN_RX_Msg_55_Sgn_71;
UInt8 CANMMCAN_RX_Msg_55_Sgn_72;
double CANMMCAN_RX_Msg_55_Sgn_73;
UInt8 CANMMCAN_RX_Msg_55_Sgn_74;
double CANMMCAN_RX_Msg_55_Sgn_75;
UInt8 CANMMCAN_RX_Msg_55_Sgn_76;
volatile real_T CANMMCAN_RXCT56;
UInt16 CANMMCAN_RX_Msg_56_Sgn_1;
double CANMMCAN_RX_Msg_56_Sgn_2;
UInt8 CANMMCAN_RX_Msg_56_Sgn_3;
double CANMMCAN_RX_Msg_56_Sgn_4;
UInt8 CANMMCAN_RX_Msg_56_Sgn_5;
double CANMMCAN_RX_Msg_56_Sgn_6;
UInt8 CANMMCAN_RX_Msg_56_Sgn_7;
double CANMMCAN_RX_Msg_56_Sgn_8;
UInt8 CANMMCAN_RX_Msg_56_Sgn_9;
double CANMMCAN_RX_Msg_56_Sgn_10;
UInt8 CANMMCAN_RX_Msg_56_Sgn_11;
double CANMMCAN_RX_Msg_56_Sgn_12;
UInt8 CANMMCAN_RX_Msg_56_Sgn_13;
double CANMMCAN_RX_Msg_56_Sgn_14;
UInt8 CANMMCAN_RX_Msg_56_Sgn_15;
double CANMMCAN_RX_Msg_56_Sgn_16;
UInt8 CANMMCAN_RX_Msg_56_Sgn_17;
double CANMMCAN_RX_Msg_56_Sgn_18;
UInt8 CANMMCAN_RX_Msg_56_Sgn_19;
double CANMMCAN_RX_Msg_56_Sgn_20;
UInt8 CANMMCAN_RX_Msg_56_Sgn_21;
double CANMMCAN_RX_Msg_56_Sgn_22;
UInt8 CANMMCAN_RX_Msg_56_Sgn_23;
double CANMMCAN_RX_Msg_56_Sgn_24;
UInt8 CANMMCAN_RX_Msg_56_Sgn_25;
double CANMMCAN_RX_Msg_56_Sgn_26;
UInt8 CANMMCAN_RX_Msg_56_Sgn_27;
double CANMMCAN_RX_Msg_56_Sgn_28;
UInt8 CANMMCAN_RX_Msg_56_Sgn_29;
double CANMMCAN_RX_Msg_56_Sgn_30;
UInt8 CANMMCAN_RX_Msg_56_Sgn_31;
double CANMMCAN_RX_Msg_56_Sgn_32;
UInt8 CANMMCAN_RX_Msg_56_Sgn_33;
double CANMMCAN_RX_Msg_56_Sgn_34;
UInt8 CANMMCAN_RX_Msg_56_Sgn_35;
double CANMMCAN_RX_Msg_56_Sgn_36;
UInt8 CANMMCAN_RX_Msg_56_Sgn_37;
double CANMMCAN_RX_Msg_56_Sgn_38;
UInt8 CANMMCAN_RX_Msg_56_Sgn_39;
double CANMMCAN_RX_Msg_56_Sgn_40;
UInt8 CANMMCAN_RX_Msg_56_Sgn_41;
UInt8 CANMMCAN_RX_Msg_56_Sgn_42;
double CANMMCAN_RX_Msg_56_Sgn_43;
double CANMMCAN_RX_Msg_56_Sgn_44;
UInt8 CANMMCAN_RX_Msg_56_Sgn_45;
UInt8 CANMMCAN_RX_Msg_56_Sgn_46;
double CANMMCAN_RX_Msg_56_Sgn_47;
double CANMMCAN_RX_Msg_56_Sgn_48;
UInt8 CANMMCAN_RX_Msg_56_Sgn_49;
UInt8 CANMMCAN_RX_Msg_56_Sgn_50;
UInt8 CANMMCAN_RX_Msg_56_Sgn_51;
UInt8 CANMMCAN_RX_Msg_56_Sgn_52;
UInt8 CANMMCAN_RX_Msg_56_Sgn_53;
UInt8 CANMMCAN_RX_Msg_56_Sgn_54;
UInt8 CANMMCAN_RX_Msg_56_Sgn_55;
UInt16 CANMMCAN_RX_Msg_56_Sgn_56;
volatile real_T CANMMCAN_RXCT57;
UInt16 CANMMCAN_RX_Msg_57_Sgn_1;
UInt32 CANMMCAN_RX_Msg_57_Sgn_2;
UInt8 CANMMCAN_RX_Msg_57_Sgn_3;
double CANMMCAN_RX_Msg_57_Sgn_4;
UInt16 CANMMCAN_RX_Msg_57_Sgn_5;
UInt8 CANMMCAN_RX_Msg_57_Sgn_6;
UInt8 CANMMCAN_RX_Msg_57_Sgn_7;
double CANMMCAN_RX_Msg_57_Sgn_8;
UInt16 CANMMCAN_RX_Msg_57_Sgn_9;
UInt8 CANMMCAN_RX_Msg_57_Sgn_10;
UInt8 CANMMCAN_RX_Msg_57_Sgn_11;
double CANMMCAN_RX_Msg_57_Sgn_12;
double CANMMCAN_RX_Msg_57_Sgn_13;
double CANMMCAN_RX_Msg_57_Sgn_14;
double CANMMCAN_RX_Msg_57_Sgn_15;
UInt8 CANMMCAN_RX_Msg_57_Sgn_16;
UInt8 CANMMCAN_RX_Msg_57_Sgn_17;
UInt8 CANMMCAN_RX_Msg_57_Sgn_18;
UInt8 CANMMCAN_RX_Msg_57_Sgn_19;
UInt8 CANMMCAN_RX_Msg_57_Sgn_20;
UInt8 CANMMCAN_RX_Msg_57_Sgn_21;
UInt8 CANMMCAN_RX_Msg_57_Sgn_22;
UInt8 CANMMCAN_RX_Msg_57_Sgn_23;
UInt8 CANMMCAN_RX_Msg_57_Sgn_24;
UInt8 CANMMCAN_RX_Msg_57_Sgn_25;
UInt8 CANMMCAN_RX_Msg_57_Sgn_26;
UInt8 CANMMCAN_RX_Msg_57_Sgn_27;
UInt8 CANMMCAN_RX_Msg_57_Sgn_28;
UInt8 CANMMCAN_RX_Msg_57_Sgn_29;
UInt8 CANMMCAN_RX_Msg_57_Sgn_30;
UInt8 CANMMCAN_RX_Msg_57_Sgn_31;
UInt8 CANMMCAN_RX_Msg_57_Sgn_32;
UInt8 CANMMCAN_RX_Msg_57_Sgn_33;
UInt8 CANMMCAN_RX_Msg_57_Sgn_34;
UInt8 CANMMCAN_RX_Msg_57_Sgn_35;
UInt8 CANMMCAN_RX_Msg_57_Sgn_36;
double CANMMCAN_RX_Msg_57_Sgn_37;
UInt8 CANMMCAN_RX_Msg_57_Sgn_38;
double CANMMCAN_RX_Msg_57_Sgn_39;
UInt8 CANMMCAN_RX_Msg_57_Sgn_40;
double CANMMCAN_RX_Msg_57_Sgn_41;
UInt8 CANMMCAN_RX_Msg_57_Sgn_42;
double CANMMCAN_RX_Msg_57_Sgn_43;
UInt8 CANMMCAN_RX_Msg_57_Sgn_44;
double CANMMCAN_RX_Msg_57_Sgn_45;
UInt8 CANMMCAN_RX_Msg_57_Sgn_46;
double CANMMCAN_RX_Msg_57_Sgn_47;
UInt8 CANMMCAN_RX_Msg_57_Sgn_48;
double CANMMCAN_RX_Msg_57_Sgn_49;
UInt8 CANMMCAN_RX_Msg_57_Sgn_50;
double CANMMCAN_RX_Msg_57_Sgn_51;
UInt8 CANMMCAN_RX_Msg_57_Sgn_52;
double CANMMCAN_RX_Msg_57_Sgn_53;
UInt8 CANMMCAN_RX_Msg_57_Sgn_54;
double CANMMCAN_RX_Msg_57_Sgn_55;
UInt8 CANMMCAN_RX_Msg_57_Sgn_56;
double CANMMCAN_RX_Msg_57_Sgn_57;
UInt8 CANMMCAN_RX_Msg_57_Sgn_58;
double CANMMCAN_RX_Msg_57_Sgn_59;
UInt8 CANMMCAN_RX_Msg_57_Sgn_60;
double CANMMCAN_RX_Msg_57_Sgn_61;
UInt8 CANMMCAN_RX_Msg_57_Sgn_62;
double CANMMCAN_RX_Msg_57_Sgn_63;
UInt8 CANMMCAN_RX_Msg_57_Sgn_64;
double CANMMCAN_RX_Msg_57_Sgn_65;
UInt8 CANMMCAN_RX_Msg_57_Sgn_66;
double CANMMCAN_RX_Msg_57_Sgn_67;
UInt8 CANMMCAN_RX_Msg_57_Sgn_68;
double CANMMCAN_RX_Msg_57_Sgn_69;
UInt8 CANMMCAN_RX_Msg_57_Sgn_70;
double CANMMCAN_RX_Msg_57_Sgn_71;
UInt8 CANMMCAN_RX_Msg_57_Sgn_72;
double CANMMCAN_RX_Msg_57_Sgn_73;
UInt8 CANMMCAN_RX_Msg_57_Sgn_74;
double CANMMCAN_RX_Msg_57_Sgn_75;
UInt8 CANMMCAN_RX_Msg_57_Sgn_76;
volatile real_T CANMMCAN_RXCT58;
UInt16 CANMMCAN_RX_Msg_58_Sgn_1;
double CANMMCAN_RX_Msg_58_Sgn_2;
UInt8 CANMMCAN_RX_Msg_58_Sgn_3;
double CANMMCAN_RX_Msg_58_Sgn_4;
UInt8 CANMMCAN_RX_Msg_58_Sgn_5;
double CANMMCAN_RX_Msg_58_Sgn_6;
UInt8 CANMMCAN_RX_Msg_58_Sgn_7;
double CANMMCAN_RX_Msg_58_Sgn_8;
UInt8 CANMMCAN_RX_Msg_58_Sgn_9;
double CANMMCAN_RX_Msg_58_Sgn_10;
UInt8 CANMMCAN_RX_Msg_58_Sgn_11;
double CANMMCAN_RX_Msg_58_Sgn_12;
UInt8 CANMMCAN_RX_Msg_58_Sgn_13;
double CANMMCAN_RX_Msg_58_Sgn_14;
UInt8 CANMMCAN_RX_Msg_58_Sgn_15;
double CANMMCAN_RX_Msg_58_Sgn_16;
UInt8 CANMMCAN_RX_Msg_58_Sgn_17;
double CANMMCAN_RX_Msg_58_Sgn_18;
UInt8 CANMMCAN_RX_Msg_58_Sgn_19;
double CANMMCAN_RX_Msg_58_Sgn_20;
UInt8 CANMMCAN_RX_Msg_58_Sgn_21;
double CANMMCAN_RX_Msg_58_Sgn_22;
UInt8 CANMMCAN_RX_Msg_58_Sgn_23;
double CANMMCAN_RX_Msg_58_Sgn_24;
UInt8 CANMMCAN_RX_Msg_58_Sgn_25;
double CANMMCAN_RX_Msg_58_Sgn_26;
UInt8 CANMMCAN_RX_Msg_58_Sgn_27;
double CANMMCAN_RX_Msg_58_Sgn_28;
UInt8 CANMMCAN_RX_Msg_58_Sgn_29;
double CANMMCAN_RX_Msg_58_Sgn_30;
UInt8 CANMMCAN_RX_Msg_58_Sgn_31;
double CANMMCAN_RX_Msg_58_Sgn_32;
UInt8 CANMMCAN_RX_Msg_58_Sgn_33;
double CANMMCAN_RX_Msg_58_Sgn_34;
UInt8 CANMMCAN_RX_Msg_58_Sgn_35;
double CANMMCAN_RX_Msg_58_Sgn_36;
UInt8 CANMMCAN_RX_Msg_58_Sgn_37;
double CANMMCAN_RX_Msg_58_Sgn_38;
UInt8 CANMMCAN_RX_Msg_58_Sgn_39;
double CANMMCAN_RX_Msg_58_Sgn_40;
UInt8 CANMMCAN_RX_Msg_58_Sgn_41;
UInt8 CANMMCAN_RX_Msg_58_Sgn_42;
double CANMMCAN_RX_Msg_58_Sgn_43;
double CANMMCAN_RX_Msg_58_Sgn_44;
UInt8 CANMMCAN_RX_Msg_58_Sgn_45;
UInt8 CANMMCAN_RX_Msg_58_Sgn_46;
double CANMMCAN_RX_Msg_58_Sgn_47;
double CANMMCAN_RX_Msg_58_Sgn_48;
UInt8 CANMMCAN_RX_Msg_58_Sgn_49;
UInt8 CANMMCAN_RX_Msg_58_Sgn_50;
UInt8 CANMMCAN_RX_Msg_58_Sgn_51;
UInt8 CANMMCAN_RX_Msg_58_Sgn_52;
UInt8 CANMMCAN_RX_Msg_58_Sgn_53;
UInt8 CANMMCAN_RX_Msg_58_Sgn_54;
UInt8 CANMMCAN_RX_Msg_58_Sgn_55;
UInt16 CANMMCAN_RX_Msg_58_Sgn_56;
volatile real_T CANMMCAN_RXCT59;
UInt16 CANMMCAN_RX_Msg_59_Sgn_1;
UInt32 CANMMCAN_RX_Msg_59_Sgn_2;
UInt8 CANMMCAN_RX_Msg_59_Sgn_3;
double CANMMCAN_RX_Msg_59_Sgn_4;
UInt16 CANMMCAN_RX_Msg_59_Sgn_5;
UInt8 CANMMCAN_RX_Msg_59_Sgn_6;
UInt8 CANMMCAN_RX_Msg_59_Sgn_7;
double CANMMCAN_RX_Msg_59_Sgn_8;
UInt16 CANMMCAN_RX_Msg_59_Sgn_9;
UInt8 CANMMCAN_RX_Msg_59_Sgn_10;
UInt8 CANMMCAN_RX_Msg_59_Sgn_11;
double CANMMCAN_RX_Msg_59_Sgn_12;
double CANMMCAN_RX_Msg_59_Sgn_13;
double CANMMCAN_RX_Msg_59_Sgn_14;
double CANMMCAN_RX_Msg_59_Sgn_15;
UInt8 CANMMCAN_RX_Msg_59_Sgn_16;
UInt8 CANMMCAN_RX_Msg_59_Sgn_17;
UInt8 CANMMCAN_RX_Msg_59_Sgn_18;
UInt8 CANMMCAN_RX_Msg_59_Sgn_19;
UInt8 CANMMCAN_RX_Msg_59_Sgn_20;
UInt8 CANMMCAN_RX_Msg_59_Sgn_21;
UInt8 CANMMCAN_RX_Msg_59_Sgn_22;
UInt8 CANMMCAN_RX_Msg_59_Sgn_23;
UInt8 CANMMCAN_RX_Msg_59_Sgn_24;
UInt8 CANMMCAN_RX_Msg_59_Sgn_25;
UInt8 CANMMCAN_RX_Msg_59_Sgn_26;
UInt8 CANMMCAN_RX_Msg_59_Sgn_27;
UInt8 CANMMCAN_RX_Msg_59_Sgn_28;
UInt8 CANMMCAN_RX_Msg_59_Sgn_29;
UInt8 CANMMCAN_RX_Msg_59_Sgn_30;
UInt8 CANMMCAN_RX_Msg_59_Sgn_31;
UInt8 CANMMCAN_RX_Msg_59_Sgn_32;
UInt8 CANMMCAN_RX_Msg_59_Sgn_33;
UInt8 CANMMCAN_RX_Msg_59_Sgn_34;
UInt8 CANMMCAN_RX_Msg_59_Sgn_35;
UInt8 CANMMCAN_RX_Msg_59_Sgn_36;
double CANMMCAN_RX_Msg_59_Sgn_37;
UInt8 CANMMCAN_RX_Msg_59_Sgn_38;
double CANMMCAN_RX_Msg_59_Sgn_39;
UInt8 CANMMCAN_RX_Msg_59_Sgn_40;
double CANMMCAN_RX_Msg_59_Sgn_41;
UInt8 CANMMCAN_RX_Msg_59_Sgn_42;
double CANMMCAN_RX_Msg_59_Sgn_43;
UInt8 CANMMCAN_RX_Msg_59_Sgn_44;
double CANMMCAN_RX_Msg_59_Sgn_45;
UInt8 CANMMCAN_RX_Msg_59_Sgn_46;
double CANMMCAN_RX_Msg_59_Sgn_47;
UInt8 CANMMCAN_RX_Msg_59_Sgn_48;
double CANMMCAN_RX_Msg_59_Sgn_49;
UInt8 CANMMCAN_RX_Msg_59_Sgn_50;
double CANMMCAN_RX_Msg_59_Sgn_51;
UInt8 CANMMCAN_RX_Msg_59_Sgn_52;
double CANMMCAN_RX_Msg_59_Sgn_53;
UInt8 CANMMCAN_RX_Msg_59_Sgn_54;
double CANMMCAN_RX_Msg_59_Sgn_55;
UInt8 CANMMCAN_RX_Msg_59_Sgn_56;
double CANMMCAN_RX_Msg_59_Sgn_57;
UInt8 CANMMCAN_RX_Msg_59_Sgn_58;
double CANMMCAN_RX_Msg_59_Sgn_59;
UInt8 CANMMCAN_RX_Msg_59_Sgn_60;
double CANMMCAN_RX_Msg_59_Sgn_61;
UInt8 CANMMCAN_RX_Msg_59_Sgn_62;
double CANMMCAN_RX_Msg_59_Sgn_63;
UInt8 CANMMCAN_RX_Msg_59_Sgn_64;
double CANMMCAN_RX_Msg_59_Sgn_65;
UInt8 CANMMCAN_RX_Msg_59_Sgn_66;
double CANMMCAN_RX_Msg_59_Sgn_67;
UInt8 CANMMCAN_RX_Msg_59_Sgn_68;
double CANMMCAN_RX_Msg_59_Sgn_69;
UInt8 CANMMCAN_RX_Msg_59_Sgn_70;
double CANMMCAN_RX_Msg_59_Sgn_71;
UInt8 CANMMCAN_RX_Msg_59_Sgn_72;
double CANMMCAN_RX_Msg_59_Sgn_73;
UInt8 CANMMCAN_RX_Msg_59_Sgn_74;
double CANMMCAN_RX_Msg_59_Sgn_75;
UInt8 CANMMCAN_RX_Msg_59_Sgn_76;
volatile real_T CANMMCAN_RXCT60;
UInt16 CANMMCAN_RX_Msg_60_Sgn_1;
double CANMMCAN_RX_Msg_60_Sgn_2;
UInt8 CANMMCAN_RX_Msg_60_Sgn_3;
double CANMMCAN_RX_Msg_60_Sgn_4;
UInt8 CANMMCAN_RX_Msg_60_Sgn_5;
double CANMMCAN_RX_Msg_60_Sgn_6;
UInt8 CANMMCAN_RX_Msg_60_Sgn_7;
double CANMMCAN_RX_Msg_60_Sgn_8;
UInt8 CANMMCAN_RX_Msg_60_Sgn_9;
double CANMMCAN_RX_Msg_60_Sgn_10;
UInt8 CANMMCAN_RX_Msg_60_Sgn_11;
double CANMMCAN_RX_Msg_60_Sgn_12;
UInt8 CANMMCAN_RX_Msg_60_Sgn_13;
double CANMMCAN_RX_Msg_60_Sgn_14;
UInt8 CANMMCAN_RX_Msg_60_Sgn_15;
double CANMMCAN_RX_Msg_60_Sgn_16;
UInt8 CANMMCAN_RX_Msg_60_Sgn_17;
double CANMMCAN_RX_Msg_60_Sgn_18;
UInt8 CANMMCAN_RX_Msg_60_Sgn_19;
double CANMMCAN_RX_Msg_60_Sgn_20;
UInt8 CANMMCAN_RX_Msg_60_Sgn_21;
double CANMMCAN_RX_Msg_60_Sgn_22;
UInt8 CANMMCAN_RX_Msg_60_Sgn_23;
double CANMMCAN_RX_Msg_60_Sgn_24;
UInt8 CANMMCAN_RX_Msg_60_Sgn_25;
double CANMMCAN_RX_Msg_60_Sgn_26;
UInt8 CANMMCAN_RX_Msg_60_Sgn_27;
double CANMMCAN_RX_Msg_60_Sgn_28;
UInt8 CANMMCAN_RX_Msg_60_Sgn_29;
double CANMMCAN_RX_Msg_60_Sgn_30;
UInt8 CANMMCAN_RX_Msg_60_Sgn_31;
double CANMMCAN_RX_Msg_60_Sgn_32;
UInt8 CANMMCAN_RX_Msg_60_Sgn_33;
double CANMMCAN_RX_Msg_60_Sgn_34;
UInt8 CANMMCAN_RX_Msg_60_Sgn_35;
double CANMMCAN_RX_Msg_60_Sgn_36;
UInt8 CANMMCAN_RX_Msg_60_Sgn_37;
double CANMMCAN_RX_Msg_60_Sgn_38;
UInt8 CANMMCAN_RX_Msg_60_Sgn_39;
double CANMMCAN_RX_Msg_60_Sgn_40;
UInt8 CANMMCAN_RX_Msg_60_Sgn_41;
UInt8 CANMMCAN_RX_Msg_60_Sgn_42;
double CANMMCAN_RX_Msg_60_Sgn_43;
double CANMMCAN_RX_Msg_60_Sgn_44;
UInt8 CANMMCAN_RX_Msg_60_Sgn_45;
UInt8 CANMMCAN_RX_Msg_60_Sgn_46;
double CANMMCAN_RX_Msg_60_Sgn_47;
double CANMMCAN_RX_Msg_60_Sgn_48;
UInt8 CANMMCAN_RX_Msg_60_Sgn_49;
UInt8 CANMMCAN_RX_Msg_60_Sgn_50;
UInt8 CANMMCAN_RX_Msg_60_Sgn_51;
UInt8 CANMMCAN_RX_Msg_60_Sgn_52;
UInt8 CANMMCAN_RX_Msg_60_Sgn_53;
UInt8 CANMMCAN_RX_Msg_60_Sgn_54;
UInt8 CANMMCAN_RX_Msg_60_Sgn_55;
UInt16 CANMMCAN_RX_Msg_60_Sgn_56;
volatile real_T CANMMCAN_RXCT61;
UInt16 CANMMCAN_RX_Msg_61_Sgn_1;
UInt32 CANMMCAN_RX_Msg_61_Sgn_2;
UInt8 CANMMCAN_RX_Msg_61_Sgn_3;
double CANMMCAN_RX_Msg_61_Sgn_4;
UInt16 CANMMCAN_RX_Msg_61_Sgn_5;
UInt8 CANMMCAN_RX_Msg_61_Sgn_6;
UInt8 CANMMCAN_RX_Msg_61_Sgn_7;
double CANMMCAN_RX_Msg_61_Sgn_8;
UInt16 CANMMCAN_RX_Msg_61_Sgn_9;
UInt8 CANMMCAN_RX_Msg_61_Sgn_10;
UInt8 CANMMCAN_RX_Msg_61_Sgn_11;
double CANMMCAN_RX_Msg_61_Sgn_12;
double CANMMCAN_RX_Msg_61_Sgn_13;
double CANMMCAN_RX_Msg_61_Sgn_14;
double CANMMCAN_RX_Msg_61_Sgn_15;
UInt8 CANMMCAN_RX_Msg_61_Sgn_16;
UInt8 CANMMCAN_RX_Msg_61_Sgn_17;
UInt8 CANMMCAN_RX_Msg_61_Sgn_18;
UInt8 CANMMCAN_RX_Msg_61_Sgn_19;
UInt8 CANMMCAN_RX_Msg_61_Sgn_20;
UInt8 CANMMCAN_RX_Msg_61_Sgn_21;
UInt8 CANMMCAN_RX_Msg_61_Sgn_22;
UInt8 CANMMCAN_RX_Msg_61_Sgn_23;
UInt8 CANMMCAN_RX_Msg_61_Sgn_24;
UInt8 CANMMCAN_RX_Msg_61_Sgn_25;
UInt8 CANMMCAN_RX_Msg_61_Sgn_26;
UInt8 CANMMCAN_RX_Msg_61_Sgn_27;
UInt8 CANMMCAN_RX_Msg_61_Sgn_28;
UInt8 CANMMCAN_RX_Msg_61_Sgn_29;
UInt8 CANMMCAN_RX_Msg_61_Sgn_30;
UInt8 CANMMCAN_RX_Msg_61_Sgn_31;
UInt8 CANMMCAN_RX_Msg_61_Sgn_32;
UInt8 CANMMCAN_RX_Msg_61_Sgn_33;
UInt8 CANMMCAN_RX_Msg_61_Sgn_34;
UInt8 CANMMCAN_RX_Msg_61_Sgn_35;
UInt8 CANMMCAN_RX_Msg_61_Sgn_36;
double CANMMCAN_RX_Msg_61_Sgn_37;
UInt8 CANMMCAN_RX_Msg_61_Sgn_38;
double CANMMCAN_RX_Msg_61_Sgn_39;
UInt8 CANMMCAN_RX_Msg_61_Sgn_40;
double CANMMCAN_RX_Msg_61_Sgn_41;
UInt8 CANMMCAN_RX_Msg_61_Sgn_42;
double CANMMCAN_RX_Msg_61_Sgn_43;
UInt8 CANMMCAN_RX_Msg_61_Sgn_44;
double CANMMCAN_RX_Msg_61_Sgn_45;
UInt8 CANMMCAN_RX_Msg_61_Sgn_46;
double CANMMCAN_RX_Msg_61_Sgn_47;
UInt8 CANMMCAN_RX_Msg_61_Sgn_48;
double CANMMCAN_RX_Msg_61_Sgn_49;
UInt8 CANMMCAN_RX_Msg_61_Sgn_50;
double CANMMCAN_RX_Msg_61_Sgn_51;
UInt8 CANMMCAN_RX_Msg_61_Sgn_52;
double CANMMCAN_RX_Msg_61_Sgn_53;
UInt8 CANMMCAN_RX_Msg_61_Sgn_54;
double CANMMCAN_RX_Msg_61_Sgn_55;
UInt8 CANMMCAN_RX_Msg_61_Sgn_56;
double CANMMCAN_RX_Msg_61_Sgn_57;
UInt8 CANMMCAN_RX_Msg_61_Sgn_58;
double CANMMCAN_RX_Msg_61_Sgn_59;
UInt8 CANMMCAN_RX_Msg_61_Sgn_60;
double CANMMCAN_RX_Msg_61_Sgn_61;
UInt8 CANMMCAN_RX_Msg_61_Sgn_62;
double CANMMCAN_RX_Msg_61_Sgn_63;
UInt8 CANMMCAN_RX_Msg_61_Sgn_64;
double CANMMCAN_RX_Msg_61_Sgn_65;
UInt8 CANMMCAN_RX_Msg_61_Sgn_66;
double CANMMCAN_RX_Msg_61_Sgn_67;
UInt8 CANMMCAN_RX_Msg_61_Sgn_68;
double CANMMCAN_RX_Msg_61_Sgn_69;
UInt8 CANMMCAN_RX_Msg_61_Sgn_70;
double CANMMCAN_RX_Msg_61_Sgn_71;
UInt8 CANMMCAN_RX_Msg_61_Sgn_72;
double CANMMCAN_RX_Msg_61_Sgn_73;
UInt8 CANMMCAN_RX_Msg_61_Sgn_74;
double CANMMCAN_RX_Msg_61_Sgn_75;
UInt8 CANMMCAN_RX_Msg_61_Sgn_76;
volatile real_T CANMMCAN_RXCT62;
UInt16 CANMMCAN_RX_Msg_62_Sgn_1;
double CANMMCAN_RX_Msg_62_Sgn_2;
UInt8 CANMMCAN_RX_Msg_62_Sgn_3;
double CANMMCAN_RX_Msg_62_Sgn_4;
UInt8 CANMMCAN_RX_Msg_62_Sgn_5;
double CANMMCAN_RX_Msg_62_Sgn_6;
UInt8 CANMMCAN_RX_Msg_62_Sgn_7;
double CANMMCAN_RX_Msg_62_Sgn_8;
UInt8 CANMMCAN_RX_Msg_62_Sgn_9;
double CANMMCAN_RX_Msg_62_Sgn_10;
UInt8 CANMMCAN_RX_Msg_62_Sgn_11;
double CANMMCAN_RX_Msg_62_Sgn_12;
UInt8 CANMMCAN_RX_Msg_62_Sgn_13;
double CANMMCAN_RX_Msg_62_Sgn_14;
UInt8 CANMMCAN_RX_Msg_62_Sgn_15;
double CANMMCAN_RX_Msg_62_Sgn_16;
UInt8 CANMMCAN_RX_Msg_62_Sgn_17;
double CANMMCAN_RX_Msg_62_Sgn_18;
UInt8 CANMMCAN_RX_Msg_62_Sgn_19;
double CANMMCAN_RX_Msg_62_Sgn_20;
UInt8 CANMMCAN_RX_Msg_62_Sgn_21;
double CANMMCAN_RX_Msg_62_Sgn_22;
UInt8 CANMMCAN_RX_Msg_62_Sgn_23;
double CANMMCAN_RX_Msg_62_Sgn_24;
UInt8 CANMMCAN_RX_Msg_62_Sgn_25;
double CANMMCAN_RX_Msg_62_Sgn_26;
UInt8 CANMMCAN_RX_Msg_62_Sgn_27;
double CANMMCAN_RX_Msg_62_Sgn_28;
UInt8 CANMMCAN_RX_Msg_62_Sgn_29;
double CANMMCAN_RX_Msg_62_Sgn_30;
UInt8 CANMMCAN_RX_Msg_62_Sgn_31;
double CANMMCAN_RX_Msg_62_Sgn_32;
UInt8 CANMMCAN_RX_Msg_62_Sgn_33;
double CANMMCAN_RX_Msg_62_Sgn_34;
UInt8 CANMMCAN_RX_Msg_62_Sgn_35;
double CANMMCAN_RX_Msg_62_Sgn_36;
UInt8 CANMMCAN_RX_Msg_62_Sgn_37;
double CANMMCAN_RX_Msg_62_Sgn_38;
UInt8 CANMMCAN_RX_Msg_62_Sgn_39;
double CANMMCAN_RX_Msg_62_Sgn_40;
UInt8 CANMMCAN_RX_Msg_62_Sgn_41;
UInt8 CANMMCAN_RX_Msg_62_Sgn_42;
double CANMMCAN_RX_Msg_62_Sgn_43;
double CANMMCAN_RX_Msg_62_Sgn_44;
UInt8 CANMMCAN_RX_Msg_62_Sgn_45;
UInt8 CANMMCAN_RX_Msg_62_Sgn_46;
double CANMMCAN_RX_Msg_62_Sgn_47;
double CANMMCAN_RX_Msg_62_Sgn_48;
UInt8 CANMMCAN_RX_Msg_62_Sgn_49;
UInt8 CANMMCAN_RX_Msg_62_Sgn_50;
UInt8 CANMMCAN_RX_Msg_62_Sgn_51;
UInt8 CANMMCAN_RX_Msg_62_Sgn_52;
UInt8 CANMMCAN_RX_Msg_62_Sgn_53;
UInt8 CANMMCAN_RX_Msg_62_Sgn_54;
UInt8 CANMMCAN_RX_Msg_62_Sgn_55;
UInt16 CANMMCAN_RX_Msg_62_Sgn_56;
volatile real_T CANMMCAN_RXCT63;
UInt16 CANMMCAN_RX_Msg_63_Sgn_1;
UInt32 CANMMCAN_RX_Msg_63_Sgn_2;
UInt8 CANMMCAN_RX_Msg_63_Sgn_3;
double CANMMCAN_RX_Msg_63_Sgn_4;
UInt16 CANMMCAN_RX_Msg_63_Sgn_5;
UInt8 CANMMCAN_RX_Msg_63_Sgn_6;
UInt8 CANMMCAN_RX_Msg_63_Sgn_7;
double CANMMCAN_RX_Msg_63_Sgn_8;
UInt16 CANMMCAN_RX_Msg_63_Sgn_9;
UInt8 CANMMCAN_RX_Msg_63_Sgn_10;
UInt8 CANMMCAN_RX_Msg_63_Sgn_11;
double CANMMCAN_RX_Msg_63_Sgn_12;
double CANMMCAN_RX_Msg_63_Sgn_13;
double CANMMCAN_RX_Msg_63_Sgn_14;
double CANMMCAN_RX_Msg_63_Sgn_15;
UInt8 CANMMCAN_RX_Msg_63_Sgn_16;
UInt8 CANMMCAN_RX_Msg_63_Sgn_17;
UInt8 CANMMCAN_RX_Msg_63_Sgn_18;
UInt8 CANMMCAN_RX_Msg_63_Sgn_19;
UInt8 CANMMCAN_RX_Msg_63_Sgn_20;
UInt8 CANMMCAN_RX_Msg_63_Sgn_21;
UInt8 CANMMCAN_RX_Msg_63_Sgn_22;
UInt8 CANMMCAN_RX_Msg_63_Sgn_23;
UInt8 CANMMCAN_RX_Msg_63_Sgn_24;
UInt8 CANMMCAN_RX_Msg_63_Sgn_25;
UInt8 CANMMCAN_RX_Msg_63_Sgn_26;
UInt8 CANMMCAN_RX_Msg_63_Sgn_27;
UInt8 CANMMCAN_RX_Msg_63_Sgn_28;
UInt8 CANMMCAN_RX_Msg_63_Sgn_29;
UInt8 CANMMCAN_RX_Msg_63_Sgn_30;
UInt8 CANMMCAN_RX_Msg_63_Sgn_31;
UInt8 CANMMCAN_RX_Msg_63_Sgn_32;
UInt8 CANMMCAN_RX_Msg_63_Sgn_33;
UInt8 CANMMCAN_RX_Msg_63_Sgn_34;
UInt8 CANMMCAN_RX_Msg_63_Sgn_35;
UInt8 CANMMCAN_RX_Msg_63_Sgn_36;
double CANMMCAN_RX_Msg_63_Sgn_37;
UInt8 CANMMCAN_RX_Msg_63_Sgn_38;
double CANMMCAN_RX_Msg_63_Sgn_39;
UInt8 CANMMCAN_RX_Msg_63_Sgn_40;
double CANMMCAN_RX_Msg_63_Sgn_41;
UInt8 CANMMCAN_RX_Msg_63_Sgn_42;
double CANMMCAN_RX_Msg_63_Sgn_43;
UInt8 CANMMCAN_RX_Msg_63_Sgn_44;
double CANMMCAN_RX_Msg_63_Sgn_45;
UInt8 CANMMCAN_RX_Msg_63_Sgn_46;
double CANMMCAN_RX_Msg_63_Sgn_47;
UInt8 CANMMCAN_RX_Msg_63_Sgn_48;
double CANMMCAN_RX_Msg_63_Sgn_49;
UInt8 CANMMCAN_RX_Msg_63_Sgn_50;
double CANMMCAN_RX_Msg_63_Sgn_51;
UInt8 CANMMCAN_RX_Msg_63_Sgn_52;
double CANMMCAN_RX_Msg_63_Sgn_53;
UInt8 CANMMCAN_RX_Msg_63_Sgn_54;
double CANMMCAN_RX_Msg_63_Sgn_55;
UInt8 CANMMCAN_RX_Msg_63_Sgn_56;
double CANMMCAN_RX_Msg_63_Sgn_57;
UInt8 CANMMCAN_RX_Msg_63_Sgn_58;
double CANMMCAN_RX_Msg_63_Sgn_59;
UInt8 CANMMCAN_RX_Msg_63_Sgn_60;
double CANMMCAN_RX_Msg_63_Sgn_61;
UInt8 CANMMCAN_RX_Msg_63_Sgn_62;
double CANMMCAN_RX_Msg_63_Sgn_63;
UInt8 CANMMCAN_RX_Msg_63_Sgn_64;
double CANMMCAN_RX_Msg_63_Sgn_65;
UInt8 CANMMCAN_RX_Msg_63_Sgn_66;
double CANMMCAN_RX_Msg_63_Sgn_67;
UInt8 CANMMCAN_RX_Msg_63_Sgn_68;
double CANMMCAN_RX_Msg_63_Sgn_69;
UInt8 CANMMCAN_RX_Msg_63_Sgn_70;
double CANMMCAN_RX_Msg_63_Sgn_71;
UInt8 CANMMCAN_RX_Msg_63_Sgn_72;
double CANMMCAN_RX_Msg_63_Sgn_73;
UInt8 CANMMCAN_RX_Msg_63_Sgn_74;
double CANMMCAN_RX_Msg_63_Sgn_75;
UInt8 CANMMCAN_RX_Msg_63_Sgn_76;
volatile real_T CANMMCAN_RXCT64;
UInt16 CANMMCAN_RX_Msg_64_Sgn_1;
double CANMMCAN_RX_Msg_64_Sgn_2;
UInt8 CANMMCAN_RX_Msg_64_Sgn_3;
double CANMMCAN_RX_Msg_64_Sgn_4;
UInt8 CANMMCAN_RX_Msg_64_Sgn_5;
double CANMMCAN_RX_Msg_64_Sgn_6;
UInt8 CANMMCAN_RX_Msg_64_Sgn_7;
double CANMMCAN_RX_Msg_64_Sgn_8;
UInt8 CANMMCAN_RX_Msg_64_Sgn_9;
double CANMMCAN_RX_Msg_64_Sgn_10;
UInt8 CANMMCAN_RX_Msg_64_Sgn_11;
double CANMMCAN_RX_Msg_64_Sgn_12;
UInt8 CANMMCAN_RX_Msg_64_Sgn_13;
double CANMMCAN_RX_Msg_64_Sgn_14;
UInt8 CANMMCAN_RX_Msg_64_Sgn_15;
double CANMMCAN_RX_Msg_64_Sgn_16;
UInt8 CANMMCAN_RX_Msg_64_Sgn_17;
double CANMMCAN_RX_Msg_64_Sgn_18;
UInt8 CANMMCAN_RX_Msg_64_Sgn_19;
double CANMMCAN_RX_Msg_64_Sgn_20;
UInt8 CANMMCAN_RX_Msg_64_Sgn_21;
double CANMMCAN_RX_Msg_64_Sgn_22;
UInt8 CANMMCAN_RX_Msg_64_Sgn_23;
double CANMMCAN_RX_Msg_64_Sgn_24;
UInt8 CANMMCAN_RX_Msg_64_Sgn_25;
double CANMMCAN_RX_Msg_64_Sgn_26;
UInt8 CANMMCAN_RX_Msg_64_Sgn_27;
double CANMMCAN_RX_Msg_64_Sgn_28;
UInt8 CANMMCAN_RX_Msg_64_Sgn_29;
double CANMMCAN_RX_Msg_64_Sgn_30;
UInt8 CANMMCAN_RX_Msg_64_Sgn_31;
double CANMMCAN_RX_Msg_64_Sgn_32;
UInt8 CANMMCAN_RX_Msg_64_Sgn_33;
double CANMMCAN_RX_Msg_64_Sgn_34;
UInt8 CANMMCAN_RX_Msg_64_Sgn_35;
double CANMMCAN_RX_Msg_64_Sgn_36;
UInt8 CANMMCAN_RX_Msg_64_Sgn_37;
double CANMMCAN_RX_Msg_64_Sgn_38;
UInt8 CANMMCAN_RX_Msg_64_Sgn_39;
double CANMMCAN_RX_Msg_64_Sgn_40;
UInt8 CANMMCAN_RX_Msg_64_Sgn_41;
UInt8 CANMMCAN_RX_Msg_64_Sgn_42;
double CANMMCAN_RX_Msg_64_Sgn_43;
double CANMMCAN_RX_Msg_64_Sgn_44;
UInt8 CANMMCAN_RX_Msg_64_Sgn_45;
UInt8 CANMMCAN_RX_Msg_64_Sgn_46;
double CANMMCAN_RX_Msg_64_Sgn_47;
double CANMMCAN_RX_Msg_64_Sgn_48;
UInt8 CANMMCAN_RX_Msg_64_Sgn_49;
UInt8 CANMMCAN_RX_Msg_64_Sgn_50;
UInt8 CANMMCAN_RX_Msg_64_Sgn_51;
UInt8 CANMMCAN_RX_Msg_64_Sgn_52;
UInt8 CANMMCAN_RX_Msg_64_Sgn_53;
UInt8 CANMMCAN_RX_Msg_64_Sgn_54;
UInt8 CANMMCAN_RX_Msg_64_Sgn_55;
UInt16 CANMMCAN_RX_Msg_64_Sgn_56;
volatile real_T CANMMCAN_RXCT65;
UInt16 CANMMCAN_RX_Msg_65_Sgn_1;
UInt32 CANMMCAN_RX_Msg_65_Sgn_2;
UInt8 CANMMCAN_RX_Msg_65_Sgn_3;
double CANMMCAN_RX_Msg_65_Sgn_4;
UInt16 CANMMCAN_RX_Msg_65_Sgn_5;
UInt8 CANMMCAN_RX_Msg_65_Sgn_6;
UInt8 CANMMCAN_RX_Msg_65_Sgn_7;
double CANMMCAN_RX_Msg_65_Sgn_8;
UInt16 CANMMCAN_RX_Msg_65_Sgn_9;
UInt8 CANMMCAN_RX_Msg_65_Sgn_10;
UInt8 CANMMCAN_RX_Msg_65_Sgn_11;
double CANMMCAN_RX_Msg_65_Sgn_12;
double CANMMCAN_RX_Msg_65_Sgn_13;
double CANMMCAN_RX_Msg_65_Sgn_14;
double CANMMCAN_RX_Msg_65_Sgn_15;
UInt8 CANMMCAN_RX_Msg_65_Sgn_16;
UInt8 CANMMCAN_RX_Msg_65_Sgn_17;
UInt8 CANMMCAN_RX_Msg_65_Sgn_18;
UInt8 CANMMCAN_RX_Msg_65_Sgn_19;
UInt8 CANMMCAN_RX_Msg_65_Sgn_20;
UInt8 CANMMCAN_RX_Msg_65_Sgn_21;
UInt8 CANMMCAN_RX_Msg_65_Sgn_22;
UInt8 CANMMCAN_RX_Msg_65_Sgn_23;
UInt8 CANMMCAN_RX_Msg_65_Sgn_24;
UInt8 CANMMCAN_RX_Msg_65_Sgn_25;
UInt8 CANMMCAN_RX_Msg_65_Sgn_26;
UInt8 CANMMCAN_RX_Msg_65_Sgn_27;
UInt8 CANMMCAN_RX_Msg_65_Sgn_28;
UInt8 CANMMCAN_RX_Msg_65_Sgn_29;
UInt8 CANMMCAN_RX_Msg_65_Sgn_30;
UInt8 CANMMCAN_RX_Msg_65_Sgn_31;
UInt8 CANMMCAN_RX_Msg_65_Sgn_32;
UInt8 CANMMCAN_RX_Msg_65_Sgn_33;
UInt8 CANMMCAN_RX_Msg_65_Sgn_34;
UInt8 CANMMCAN_RX_Msg_65_Sgn_35;
UInt8 CANMMCAN_RX_Msg_65_Sgn_36;
double CANMMCAN_RX_Msg_65_Sgn_37;
UInt8 CANMMCAN_RX_Msg_65_Sgn_38;
double CANMMCAN_RX_Msg_65_Sgn_39;
UInt8 CANMMCAN_RX_Msg_65_Sgn_40;
double CANMMCAN_RX_Msg_65_Sgn_41;
UInt8 CANMMCAN_RX_Msg_65_Sgn_42;
double CANMMCAN_RX_Msg_65_Sgn_43;
UInt8 CANMMCAN_RX_Msg_65_Sgn_44;
double CANMMCAN_RX_Msg_65_Sgn_45;
UInt8 CANMMCAN_RX_Msg_65_Sgn_46;
double CANMMCAN_RX_Msg_65_Sgn_47;
UInt8 CANMMCAN_RX_Msg_65_Sgn_48;
double CANMMCAN_RX_Msg_65_Sgn_49;
UInt8 CANMMCAN_RX_Msg_65_Sgn_50;
double CANMMCAN_RX_Msg_65_Sgn_51;
UInt8 CANMMCAN_RX_Msg_65_Sgn_52;
double CANMMCAN_RX_Msg_65_Sgn_53;
UInt8 CANMMCAN_RX_Msg_65_Sgn_54;
double CANMMCAN_RX_Msg_65_Sgn_55;
UInt8 CANMMCAN_RX_Msg_65_Sgn_56;
double CANMMCAN_RX_Msg_65_Sgn_57;
UInt8 CANMMCAN_RX_Msg_65_Sgn_58;
double CANMMCAN_RX_Msg_65_Sgn_59;
UInt8 CANMMCAN_RX_Msg_65_Sgn_60;
double CANMMCAN_RX_Msg_65_Sgn_61;
UInt8 CANMMCAN_RX_Msg_65_Sgn_62;
double CANMMCAN_RX_Msg_65_Sgn_63;
UInt8 CANMMCAN_RX_Msg_65_Sgn_64;
double CANMMCAN_RX_Msg_65_Sgn_65;
UInt8 CANMMCAN_RX_Msg_65_Sgn_66;
double CANMMCAN_RX_Msg_65_Sgn_67;
UInt8 CANMMCAN_RX_Msg_65_Sgn_68;
double CANMMCAN_RX_Msg_65_Sgn_69;
UInt8 CANMMCAN_RX_Msg_65_Sgn_70;
double CANMMCAN_RX_Msg_65_Sgn_71;
UInt8 CANMMCAN_RX_Msg_65_Sgn_72;
double CANMMCAN_RX_Msg_65_Sgn_73;
UInt8 CANMMCAN_RX_Msg_65_Sgn_74;
double CANMMCAN_RX_Msg_65_Sgn_75;
UInt8 CANMMCAN_RX_Msg_65_Sgn_76;
volatile real_T CANMMCAN_RXCT66;
UInt16 CANMMCAN_RX_Msg_66_Sgn_1;
double CANMMCAN_RX_Msg_66_Sgn_2;
UInt8 CANMMCAN_RX_Msg_66_Sgn_3;
double CANMMCAN_RX_Msg_66_Sgn_4;
UInt8 CANMMCAN_RX_Msg_66_Sgn_5;
double CANMMCAN_RX_Msg_66_Sgn_6;
UInt8 CANMMCAN_RX_Msg_66_Sgn_7;
double CANMMCAN_RX_Msg_66_Sgn_8;
UInt8 CANMMCAN_RX_Msg_66_Sgn_9;
double CANMMCAN_RX_Msg_66_Sgn_10;
UInt8 CANMMCAN_RX_Msg_66_Sgn_11;
double CANMMCAN_RX_Msg_66_Sgn_12;
UInt8 CANMMCAN_RX_Msg_66_Sgn_13;
double CANMMCAN_RX_Msg_66_Sgn_14;
UInt8 CANMMCAN_RX_Msg_66_Sgn_15;
double CANMMCAN_RX_Msg_66_Sgn_16;
UInt8 CANMMCAN_RX_Msg_66_Sgn_17;
double CANMMCAN_RX_Msg_66_Sgn_18;
UInt8 CANMMCAN_RX_Msg_66_Sgn_19;
double CANMMCAN_RX_Msg_66_Sgn_20;
UInt8 CANMMCAN_RX_Msg_66_Sgn_21;
double CANMMCAN_RX_Msg_66_Sgn_22;
UInt8 CANMMCAN_RX_Msg_66_Sgn_23;
double CANMMCAN_RX_Msg_66_Sgn_24;
UInt8 CANMMCAN_RX_Msg_66_Sgn_25;
double CANMMCAN_RX_Msg_66_Sgn_26;
UInt8 CANMMCAN_RX_Msg_66_Sgn_27;
double CANMMCAN_RX_Msg_66_Sgn_28;
UInt8 CANMMCAN_RX_Msg_66_Sgn_29;
double CANMMCAN_RX_Msg_66_Sgn_30;
UInt8 CANMMCAN_RX_Msg_66_Sgn_31;
double CANMMCAN_RX_Msg_66_Sgn_32;
UInt8 CANMMCAN_RX_Msg_66_Sgn_33;
double CANMMCAN_RX_Msg_66_Sgn_34;
UInt8 CANMMCAN_RX_Msg_66_Sgn_35;
double CANMMCAN_RX_Msg_66_Sgn_36;
UInt8 CANMMCAN_RX_Msg_66_Sgn_37;
double CANMMCAN_RX_Msg_66_Sgn_38;
UInt8 CANMMCAN_RX_Msg_66_Sgn_39;
double CANMMCAN_RX_Msg_66_Sgn_40;
UInt8 CANMMCAN_RX_Msg_66_Sgn_41;
UInt8 CANMMCAN_RX_Msg_66_Sgn_42;
double CANMMCAN_RX_Msg_66_Sgn_43;
double CANMMCAN_RX_Msg_66_Sgn_44;
UInt8 CANMMCAN_RX_Msg_66_Sgn_45;
UInt8 CANMMCAN_RX_Msg_66_Sgn_46;
double CANMMCAN_RX_Msg_66_Sgn_47;
double CANMMCAN_RX_Msg_66_Sgn_48;
UInt8 CANMMCAN_RX_Msg_66_Sgn_49;
UInt8 CANMMCAN_RX_Msg_66_Sgn_50;
UInt8 CANMMCAN_RX_Msg_66_Sgn_51;
UInt8 CANMMCAN_RX_Msg_66_Sgn_52;
UInt8 CANMMCAN_RX_Msg_66_Sgn_53;
UInt8 CANMMCAN_RX_Msg_66_Sgn_54;
UInt8 CANMMCAN_RX_Msg_66_Sgn_55;
UInt16 CANMMCAN_RX_Msg_66_Sgn_56;
volatile real_T CANMMCAN_RXCT67;
UInt16 CANMMCAN_RX_Msg_67_Sgn_1;
UInt32 CANMMCAN_RX_Msg_67_Sgn_2;
UInt8 CANMMCAN_RX_Msg_67_Sgn_3;
double CANMMCAN_RX_Msg_67_Sgn_4;
UInt16 CANMMCAN_RX_Msg_67_Sgn_5;
UInt8 CANMMCAN_RX_Msg_67_Sgn_6;
UInt8 CANMMCAN_RX_Msg_67_Sgn_7;
double CANMMCAN_RX_Msg_67_Sgn_8;
UInt16 CANMMCAN_RX_Msg_67_Sgn_9;
UInt8 CANMMCAN_RX_Msg_67_Sgn_10;
UInt8 CANMMCAN_RX_Msg_67_Sgn_11;
double CANMMCAN_RX_Msg_67_Sgn_12;
double CANMMCAN_RX_Msg_67_Sgn_13;
double CANMMCAN_RX_Msg_67_Sgn_14;
double CANMMCAN_RX_Msg_67_Sgn_15;
UInt8 CANMMCAN_RX_Msg_67_Sgn_16;
UInt8 CANMMCAN_RX_Msg_67_Sgn_17;
UInt8 CANMMCAN_RX_Msg_67_Sgn_18;
UInt8 CANMMCAN_RX_Msg_67_Sgn_19;
UInt8 CANMMCAN_RX_Msg_67_Sgn_20;
UInt8 CANMMCAN_RX_Msg_67_Sgn_21;
UInt8 CANMMCAN_RX_Msg_67_Sgn_22;
UInt8 CANMMCAN_RX_Msg_67_Sgn_23;
UInt8 CANMMCAN_RX_Msg_67_Sgn_24;
UInt8 CANMMCAN_RX_Msg_67_Sgn_25;
UInt8 CANMMCAN_RX_Msg_67_Sgn_26;
UInt8 CANMMCAN_RX_Msg_67_Sgn_27;
UInt8 CANMMCAN_RX_Msg_67_Sgn_28;
UInt8 CANMMCAN_RX_Msg_67_Sgn_29;
UInt8 CANMMCAN_RX_Msg_67_Sgn_30;
UInt8 CANMMCAN_RX_Msg_67_Sgn_31;
UInt8 CANMMCAN_RX_Msg_67_Sgn_32;
UInt8 CANMMCAN_RX_Msg_67_Sgn_33;
UInt8 CANMMCAN_RX_Msg_67_Sgn_34;
UInt8 CANMMCAN_RX_Msg_67_Sgn_35;
UInt8 CANMMCAN_RX_Msg_67_Sgn_36;
double CANMMCAN_RX_Msg_67_Sgn_37;
UInt8 CANMMCAN_RX_Msg_67_Sgn_38;
double CANMMCAN_RX_Msg_67_Sgn_39;
UInt8 CANMMCAN_RX_Msg_67_Sgn_40;
double CANMMCAN_RX_Msg_67_Sgn_41;
UInt8 CANMMCAN_RX_Msg_67_Sgn_42;
double CANMMCAN_RX_Msg_67_Sgn_43;
UInt8 CANMMCAN_RX_Msg_67_Sgn_44;
double CANMMCAN_RX_Msg_67_Sgn_45;
UInt8 CANMMCAN_RX_Msg_67_Sgn_46;
double CANMMCAN_RX_Msg_67_Sgn_47;
UInt8 CANMMCAN_RX_Msg_67_Sgn_48;
double CANMMCAN_RX_Msg_67_Sgn_49;
UInt8 CANMMCAN_RX_Msg_67_Sgn_50;
double CANMMCAN_RX_Msg_67_Sgn_51;
UInt8 CANMMCAN_RX_Msg_67_Sgn_52;
double CANMMCAN_RX_Msg_67_Sgn_53;
UInt8 CANMMCAN_RX_Msg_67_Sgn_54;
double CANMMCAN_RX_Msg_67_Sgn_55;
UInt8 CANMMCAN_RX_Msg_67_Sgn_56;
double CANMMCAN_RX_Msg_67_Sgn_57;
UInt8 CANMMCAN_RX_Msg_67_Sgn_58;
double CANMMCAN_RX_Msg_67_Sgn_59;
UInt8 CANMMCAN_RX_Msg_67_Sgn_60;
double CANMMCAN_RX_Msg_67_Sgn_61;
UInt8 CANMMCAN_RX_Msg_67_Sgn_62;
double CANMMCAN_RX_Msg_67_Sgn_63;
UInt8 CANMMCAN_RX_Msg_67_Sgn_64;
double CANMMCAN_RX_Msg_67_Sgn_65;
UInt8 CANMMCAN_RX_Msg_67_Sgn_66;
double CANMMCAN_RX_Msg_67_Sgn_67;
UInt8 CANMMCAN_RX_Msg_67_Sgn_68;
double CANMMCAN_RX_Msg_67_Sgn_69;
UInt8 CANMMCAN_RX_Msg_67_Sgn_70;
double CANMMCAN_RX_Msg_67_Sgn_71;
UInt8 CANMMCAN_RX_Msg_67_Sgn_72;
double CANMMCAN_RX_Msg_67_Sgn_73;
UInt8 CANMMCAN_RX_Msg_67_Sgn_74;
double CANMMCAN_RX_Msg_67_Sgn_75;
UInt8 CANMMCAN_RX_Msg_67_Sgn_76;
volatile real_T CANMMCAN_RXCT68;
UInt16 CANMMCAN_RX_Msg_68_Sgn_1;
double CANMMCAN_RX_Msg_68_Sgn_2;
UInt8 CANMMCAN_RX_Msg_68_Sgn_3;
double CANMMCAN_RX_Msg_68_Sgn_4;
UInt8 CANMMCAN_RX_Msg_68_Sgn_5;
double CANMMCAN_RX_Msg_68_Sgn_6;
UInt8 CANMMCAN_RX_Msg_68_Sgn_7;
double CANMMCAN_RX_Msg_68_Sgn_8;
UInt8 CANMMCAN_RX_Msg_68_Sgn_9;
double CANMMCAN_RX_Msg_68_Sgn_10;
UInt8 CANMMCAN_RX_Msg_68_Sgn_11;
double CANMMCAN_RX_Msg_68_Sgn_12;
UInt8 CANMMCAN_RX_Msg_68_Sgn_13;
double CANMMCAN_RX_Msg_68_Sgn_14;
UInt8 CANMMCAN_RX_Msg_68_Sgn_15;
double CANMMCAN_RX_Msg_68_Sgn_16;
UInt8 CANMMCAN_RX_Msg_68_Sgn_17;
double CANMMCAN_RX_Msg_68_Sgn_18;
UInt8 CANMMCAN_RX_Msg_68_Sgn_19;
double CANMMCAN_RX_Msg_68_Sgn_20;
UInt8 CANMMCAN_RX_Msg_68_Sgn_21;
double CANMMCAN_RX_Msg_68_Sgn_22;
UInt8 CANMMCAN_RX_Msg_68_Sgn_23;
double CANMMCAN_RX_Msg_68_Sgn_24;
UInt8 CANMMCAN_RX_Msg_68_Sgn_25;
double CANMMCAN_RX_Msg_68_Sgn_26;
UInt8 CANMMCAN_RX_Msg_68_Sgn_27;
double CANMMCAN_RX_Msg_68_Sgn_28;
UInt8 CANMMCAN_RX_Msg_68_Sgn_29;
double CANMMCAN_RX_Msg_68_Sgn_30;
UInt8 CANMMCAN_RX_Msg_68_Sgn_31;
double CANMMCAN_RX_Msg_68_Sgn_32;
UInt8 CANMMCAN_RX_Msg_68_Sgn_33;
double CANMMCAN_RX_Msg_68_Sgn_34;
UInt8 CANMMCAN_RX_Msg_68_Sgn_35;
double CANMMCAN_RX_Msg_68_Sgn_36;
UInt8 CANMMCAN_RX_Msg_68_Sgn_37;
double CANMMCAN_RX_Msg_68_Sgn_38;
UInt8 CANMMCAN_RX_Msg_68_Sgn_39;
double CANMMCAN_RX_Msg_68_Sgn_40;
UInt8 CANMMCAN_RX_Msg_68_Sgn_41;
UInt8 CANMMCAN_RX_Msg_68_Sgn_42;
double CANMMCAN_RX_Msg_68_Sgn_43;
double CANMMCAN_RX_Msg_68_Sgn_44;
UInt8 CANMMCAN_RX_Msg_68_Sgn_45;
UInt8 CANMMCAN_RX_Msg_68_Sgn_46;
double CANMMCAN_RX_Msg_68_Sgn_47;
double CANMMCAN_RX_Msg_68_Sgn_48;
UInt8 CANMMCAN_RX_Msg_68_Sgn_49;
UInt8 CANMMCAN_RX_Msg_68_Sgn_50;
UInt8 CANMMCAN_RX_Msg_68_Sgn_51;
UInt8 CANMMCAN_RX_Msg_68_Sgn_52;
UInt8 CANMMCAN_RX_Msg_68_Sgn_53;
UInt8 CANMMCAN_RX_Msg_68_Sgn_54;
UInt8 CANMMCAN_RX_Msg_68_Sgn_55;
UInt16 CANMMCAN_RX_Msg_68_Sgn_56;
volatile real_T CANMMCAN_RXCT69;
UInt16 CANMMCAN_RX_Msg_69_Sgn_1;
UInt32 CANMMCAN_RX_Msg_69_Sgn_2;
UInt8 CANMMCAN_RX_Msg_69_Sgn_3;
double CANMMCAN_RX_Msg_69_Sgn_4;
UInt16 CANMMCAN_RX_Msg_69_Sgn_5;
UInt8 CANMMCAN_RX_Msg_69_Sgn_6;
UInt8 CANMMCAN_RX_Msg_69_Sgn_7;
double CANMMCAN_RX_Msg_69_Sgn_8;
UInt16 CANMMCAN_RX_Msg_69_Sgn_9;
UInt8 CANMMCAN_RX_Msg_69_Sgn_10;
UInt8 CANMMCAN_RX_Msg_69_Sgn_11;
double CANMMCAN_RX_Msg_69_Sgn_12;
double CANMMCAN_RX_Msg_69_Sgn_13;
double CANMMCAN_RX_Msg_69_Sgn_14;
double CANMMCAN_RX_Msg_69_Sgn_15;
UInt8 CANMMCAN_RX_Msg_69_Sgn_16;
UInt8 CANMMCAN_RX_Msg_69_Sgn_17;
UInt8 CANMMCAN_RX_Msg_69_Sgn_18;
UInt8 CANMMCAN_RX_Msg_69_Sgn_19;
UInt8 CANMMCAN_RX_Msg_69_Sgn_20;
UInt8 CANMMCAN_RX_Msg_69_Sgn_21;
UInt8 CANMMCAN_RX_Msg_69_Sgn_22;
UInt8 CANMMCAN_RX_Msg_69_Sgn_23;
UInt8 CANMMCAN_RX_Msg_69_Sgn_24;
UInt8 CANMMCAN_RX_Msg_69_Sgn_25;
UInt8 CANMMCAN_RX_Msg_69_Sgn_26;
UInt8 CANMMCAN_RX_Msg_69_Sgn_27;
UInt8 CANMMCAN_RX_Msg_69_Sgn_28;
UInt8 CANMMCAN_RX_Msg_69_Sgn_29;
UInt8 CANMMCAN_RX_Msg_69_Sgn_30;
UInt8 CANMMCAN_RX_Msg_69_Sgn_31;
UInt8 CANMMCAN_RX_Msg_69_Sgn_32;
UInt8 CANMMCAN_RX_Msg_69_Sgn_33;
UInt8 CANMMCAN_RX_Msg_69_Sgn_34;
UInt8 CANMMCAN_RX_Msg_69_Sgn_35;
UInt8 CANMMCAN_RX_Msg_69_Sgn_36;
double CANMMCAN_RX_Msg_69_Sgn_37;
UInt8 CANMMCAN_RX_Msg_69_Sgn_38;
double CANMMCAN_RX_Msg_69_Sgn_39;
UInt8 CANMMCAN_RX_Msg_69_Sgn_40;
double CANMMCAN_RX_Msg_69_Sgn_41;
UInt8 CANMMCAN_RX_Msg_69_Sgn_42;
double CANMMCAN_RX_Msg_69_Sgn_43;
UInt8 CANMMCAN_RX_Msg_69_Sgn_44;
double CANMMCAN_RX_Msg_69_Sgn_45;
UInt8 CANMMCAN_RX_Msg_69_Sgn_46;
double CANMMCAN_RX_Msg_69_Sgn_47;
UInt8 CANMMCAN_RX_Msg_69_Sgn_48;
double CANMMCAN_RX_Msg_69_Sgn_49;
UInt8 CANMMCAN_RX_Msg_69_Sgn_50;
double CANMMCAN_RX_Msg_69_Sgn_51;
UInt8 CANMMCAN_RX_Msg_69_Sgn_52;
double CANMMCAN_RX_Msg_69_Sgn_53;
UInt8 CANMMCAN_RX_Msg_69_Sgn_54;
double CANMMCAN_RX_Msg_69_Sgn_55;
UInt8 CANMMCAN_RX_Msg_69_Sgn_56;
double CANMMCAN_RX_Msg_69_Sgn_57;
UInt8 CANMMCAN_RX_Msg_69_Sgn_58;
double CANMMCAN_RX_Msg_69_Sgn_59;
UInt8 CANMMCAN_RX_Msg_69_Sgn_60;
double CANMMCAN_RX_Msg_69_Sgn_61;
UInt8 CANMMCAN_RX_Msg_69_Sgn_62;
double CANMMCAN_RX_Msg_69_Sgn_63;
UInt8 CANMMCAN_RX_Msg_69_Sgn_64;
double CANMMCAN_RX_Msg_69_Sgn_65;
UInt8 CANMMCAN_RX_Msg_69_Sgn_66;
double CANMMCAN_RX_Msg_69_Sgn_67;
UInt8 CANMMCAN_RX_Msg_69_Sgn_68;
double CANMMCAN_RX_Msg_69_Sgn_69;
UInt8 CANMMCAN_RX_Msg_69_Sgn_70;
double CANMMCAN_RX_Msg_69_Sgn_71;
UInt8 CANMMCAN_RX_Msg_69_Sgn_72;
double CANMMCAN_RX_Msg_69_Sgn_73;
UInt8 CANMMCAN_RX_Msg_69_Sgn_74;
double CANMMCAN_RX_Msg_69_Sgn_75;
UInt8 CANMMCAN_RX_Msg_69_Sgn_76;
volatile real_T CANMMCAN_RXCT70;
UInt16 CANMMCAN_RX_Msg_70_Sgn_1;
double CANMMCAN_RX_Msg_70_Sgn_2;
UInt8 CANMMCAN_RX_Msg_70_Sgn_3;
double CANMMCAN_RX_Msg_70_Sgn_4;
UInt8 CANMMCAN_RX_Msg_70_Sgn_5;
double CANMMCAN_RX_Msg_70_Sgn_6;
UInt8 CANMMCAN_RX_Msg_70_Sgn_7;
double CANMMCAN_RX_Msg_70_Sgn_8;
UInt8 CANMMCAN_RX_Msg_70_Sgn_9;
double CANMMCAN_RX_Msg_70_Sgn_10;
UInt8 CANMMCAN_RX_Msg_70_Sgn_11;
double CANMMCAN_RX_Msg_70_Sgn_12;
UInt8 CANMMCAN_RX_Msg_70_Sgn_13;
double CANMMCAN_RX_Msg_70_Sgn_14;
UInt8 CANMMCAN_RX_Msg_70_Sgn_15;
double CANMMCAN_RX_Msg_70_Sgn_16;
UInt8 CANMMCAN_RX_Msg_70_Sgn_17;
double CANMMCAN_RX_Msg_70_Sgn_18;
UInt8 CANMMCAN_RX_Msg_70_Sgn_19;
double CANMMCAN_RX_Msg_70_Sgn_20;
UInt8 CANMMCAN_RX_Msg_70_Sgn_21;
double CANMMCAN_RX_Msg_70_Sgn_22;
UInt8 CANMMCAN_RX_Msg_70_Sgn_23;
double CANMMCAN_RX_Msg_70_Sgn_24;
UInt8 CANMMCAN_RX_Msg_70_Sgn_25;
double CANMMCAN_RX_Msg_70_Sgn_26;
UInt8 CANMMCAN_RX_Msg_70_Sgn_27;
double CANMMCAN_RX_Msg_70_Sgn_28;
UInt8 CANMMCAN_RX_Msg_70_Sgn_29;
double CANMMCAN_RX_Msg_70_Sgn_30;
UInt8 CANMMCAN_RX_Msg_70_Sgn_31;
double CANMMCAN_RX_Msg_70_Sgn_32;
UInt8 CANMMCAN_RX_Msg_70_Sgn_33;
double CANMMCAN_RX_Msg_70_Sgn_34;
UInt8 CANMMCAN_RX_Msg_70_Sgn_35;
double CANMMCAN_RX_Msg_70_Sgn_36;
UInt8 CANMMCAN_RX_Msg_70_Sgn_37;
double CANMMCAN_RX_Msg_70_Sgn_38;
UInt8 CANMMCAN_RX_Msg_70_Sgn_39;
double CANMMCAN_RX_Msg_70_Sgn_40;
UInt8 CANMMCAN_RX_Msg_70_Sgn_41;
UInt8 CANMMCAN_RX_Msg_70_Sgn_42;
double CANMMCAN_RX_Msg_70_Sgn_43;
double CANMMCAN_RX_Msg_70_Sgn_44;
UInt8 CANMMCAN_RX_Msg_70_Sgn_45;
UInt8 CANMMCAN_RX_Msg_70_Sgn_46;
double CANMMCAN_RX_Msg_70_Sgn_47;
double CANMMCAN_RX_Msg_70_Sgn_48;
UInt8 CANMMCAN_RX_Msg_70_Sgn_49;
UInt8 CANMMCAN_RX_Msg_70_Sgn_50;
UInt8 CANMMCAN_RX_Msg_70_Sgn_51;
UInt8 CANMMCAN_RX_Msg_70_Sgn_52;
UInt8 CANMMCAN_RX_Msg_70_Sgn_53;
UInt8 CANMMCAN_RX_Msg_70_Sgn_54;
UInt8 CANMMCAN_RX_Msg_70_Sgn_55;
UInt16 CANMMCAN_RX_Msg_70_Sgn_56;
volatile real_T CANMMCAN_RXCT71;
UInt16 CANMMCAN_RX_Msg_71_Sgn_1;
UInt32 CANMMCAN_RX_Msg_71_Sgn_2;
UInt8 CANMMCAN_RX_Msg_71_Sgn_3;
double CANMMCAN_RX_Msg_71_Sgn_4;
UInt16 CANMMCAN_RX_Msg_71_Sgn_5;
UInt8 CANMMCAN_RX_Msg_71_Sgn_6;
UInt8 CANMMCAN_RX_Msg_71_Sgn_7;
double CANMMCAN_RX_Msg_71_Sgn_8;
UInt16 CANMMCAN_RX_Msg_71_Sgn_9;
UInt8 CANMMCAN_RX_Msg_71_Sgn_10;
UInt8 CANMMCAN_RX_Msg_71_Sgn_11;
double CANMMCAN_RX_Msg_71_Sgn_12;
double CANMMCAN_RX_Msg_71_Sgn_13;
double CANMMCAN_RX_Msg_71_Sgn_14;
double CANMMCAN_RX_Msg_71_Sgn_15;
UInt8 CANMMCAN_RX_Msg_71_Sgn_16;
UInt8 CANMMCAN_RX_Msg_71_Sgn_17;
UInt8 CANMMCAN_RX_Msg_71_Sgn_18;
UInt8 CANMMCAN_RX_Msg_71_Sgn_19;
UInt8 CANMMCAN_RX_Msg_71_Sgn_20;
UInt8 CANMMCAN_RX_Msg_71_Sgn_21;
UInt8 CANMMCAN_RX_Msg_71_Sgn_22;
UInt8 CANMMCAN_RX_Msg_71_Sgn_23;
UInt8 CANMMCAN_RX_Msg_71_Sgn_24;
UInt8 CANMMCAN_RX_Msg_71_Sgn_25;
UInt8 CANMMCAN_RX_Msg_71_Sgn_26;
UInt8 CANMMCAN_RX_Msg_71_Sgn_27;
UInt8 CANMMCAN_RX_Msg_71_Sgn_28;
UInt8 CANMMCAN_RX_Msg_71_Sgn_29;
UInt8 CANMMCAN_RX_Msg_71_Sgn_30;
UInt8 CANMMCAN_RX_Msg_71_Sgn_31;
UInt8 CANMMCAN_RX_Msg_71_Sgn_32;
UInt8 CANMMCAN_RX_Msg_71_Sgn_33;
UInt8 CANMMCAN_RX_Msg_71_Sgn_34;
UInt8 CANMMCAN_RX_Msg_71_Sgn_35;
UInt8 CANMMCAN_RX_Msg_71_Sgn_36;
double CANMMCAN_RX_Msg_71_Sgn_37;
UInt8 CANMMCAN_RX_Msg_71_Sgn_38;
double CANMMCAN_RX_Msg_71_Sgn_39;
UInt8 CANMMCAN_RX_Msg_71_Sgn_40;
double CANMMCAN_RX_Msg_71_Sgn_41;
UInt8 CANMMCAN_RX_Msg_71_Sgn_42;
double CANMMCAN_RX_Msg_71_Sgn_43;
UInt8 CANMMCAN_RX_Msg_71_Sgn_44;
double CANMMCAN_RX_Msg_71_Sgn_45;
UInt8 CANMMCAN_RX_Msg_71_Sgn_46;
double CANMMCAN_RX_Msg_71_Sgn_47;
UInt8 CANMMCAN_RX_Msg_71_Sgn_48;
double CANMMCAN_RX_Msg_71_Sgn_49;
UInt8 CANMMCAN_RX_Msg_71_Sgn_50;
double CANMMCAN_RX_Msg_71_Sgn_51;
UInt8 CANMMCAN_RX_Msg_71_Sgn_52;
double CANMMCAN_RX_Msg_71_Sgn_53;
UInt8 CANMMCAN_RX_Msg_71_Sgn_54;
double CANMMCAN_RX_Msg_71_Sgn_55;
UInt8 CANMMCAN_RX_Msg_71_Sgn_56;
double CANMMCAN_RX_Msg_71_Sgn_57;
UInt8 CANMMCAN_RX_Msg_71_Sgn_58;
double CANMMCAN_RX_Msg_71_Sgn_59;
UInt8 CANMMCAN_RX_Msg_71_Sgn_60;
double CANMMCAN_RX_Msg_71_Sgn_61;
UInt8 CANMMCAN_RX_Msg_71_Sgn_62;
double CANMMCAN_RX_Msg_71_Sgn_63;
UInt8 CANMMCAN_RX_Msg_71_Sgn_64;
double CANMMCAN_RX_Msg_71_Sgn_65;
UInt8 CANMMCAN_RX_Msg_71_Sgn_66;
double CANMMCAN_RX_Msg_71_Sgn_67;
UInt8 CANMMCAN_RX_Msg_71_Sgn_68;
double CANMMCAN_RX_Msg_71_Sgn_69;
UInt8 CANMMCAN_RX_Msg_71_Sgn_70;
double CANMMCAN_RX_Msg_71_Sgn_71;
UInt8 CANMMCAN_RX_Msg_71_Sgn_72;
double CANMMCAN_RX_Msg_71_Sgn_73;
UInt8 CANMMCAN_RX_Msg_71_Sgn_74;
double CANMMCAN_RX_Msg_71_Sgn_75;
UInt8 CANMMCAN_RX_Msg_71_Sgn_76;
volatile real_T CANMMCAN_RXCT72;
UInt16 CANMMCAN_RX_Msg_72_Sgn_1;
double CANMMCAN_RX_Msg_72_Sgn_2;
UInt8 CANMMCAN_RX_Msg_72_Sgn_3;
double CANMMCAN_RX_Msg_72_Sgn_4;
UInt8 CANMMCAN_RX_Msg_72_Sgn_5;
double CANMMCAN_RX_Msg_72_Sgn_6;
UInt8 CANMMCAN_RX_Msg_72_Sgn_7;
double CANMMCAN_RX_Msg_72_Sgn_8;
UInt8 CANMMCAN_RX_Msg_72_Sgn_9;
double CANMMCAN_RX_Msg_72_Sgn_10;
UInt8 CANMMCAN_RX_Msg_72_Sgn_11;
double CANMMCAN_RX_Msg_72_Sgn_12;
UInt8 CANMMCAN_RX_Msg_72_Sgn_13;
double CANMMCAN_RX_Msg_72_Sgn_14;
UInt8 CANMMCAN_RX_Msg_72_Sgn_15;
double CANMMCAN_RX_Msg_72_Sgn_16;
UInt8 CANMMCAN_RX_Msg_72_Sgn_17;
double CANMMCAN_RX_Msg_72_Sgn_18;
UInt8 CANMMCAN_RX_Msg_72_Sgn_19;
double CANMMCAN_RX_Msg_72_Sgn_20;
UInt8 CANMMCAN_RX_Msg_72_Sgn_21;
double CANMMCAN_RX_Msg_72_Sgn_22;
UInt8 CANMMCAN_RX_Msg_72_Sgn_23;
double CANMMCAN_RX_Msg_72_Sgn_24;
UInt8 CANMMCAN_RX_Msg_72_Sgn_25;
double CANMMCAN_RX_Msg_72_Sgn_26;
UInt8 CANMMCAN_RX_Msg_72_Sgn_27;
double CANMMCAN_RX_Msg_72_Sgn_28;
UInt8 CANMMCAN_RX_Msg_72_Sgn_29;
double CANMMCAN_RX_Msg_72_Sgn_30;
UInt8 CANMMCAN_RX_Msg_72_Sgn_31;
double CANMMCAN_RX_Msg_72_Sgn_32;
UInt8 CANMMCAN_RX_Msg_72_Sgn_33;
double CANMMCAN_RX_Msg_72_Sgn_34;
UInt8 CANMMCAN_RX_Msg_72_Sgn_35;
double CANMMCAN_RX_Msg_72_Sgn_36;
UInt8 CANMMCAN_RX_Msg_72_Sgn_37;
double CANMMCAN_RX_Msg_72_Sgn_38;
UInt8 CANMMCAN_RX_Msg_72_Sgn_39;
double CANMMCAN_RX_Msg_72_Sgn_40;
UInt8 CANMMCAN_RX_Msg_72_Sgn_41;
UInt8 CANMMCAN_RX_Msg_72_Sgn_42;
double CANMMCAN_RX_Msg_72_Sgn_43;
double CANMMCAN_RX_Msg_72_Sgn_44;
UInt8 CANMMCAN_RX_Msg_72_Sgn_45;
UInt8 CANMMCAN_RX_Msg_72_Sgn_46;
double CANMMCAN_RX_Msg_72_Sgn_47;
double CANMMCAN_RX_Msg_72_Sgn_48;
UInt8 CANMMCAN_RX_Msg_72_Sgn_49;
UInt8 CANMMCAN_RX_Msg_72_Sgn_50;
UInt8 CANMMCAN_RX_Msg_72_Sgn_51;
UInt8 CANMMCAN_RX_Msg_72_Sgn_52;
UInt8 CANMMCAN_RX_Msg_72_Sgn_53;
UInt8 CANMMCAN_RX_Msg_72_Sgn_54;
UInt8 CANMMCAN_RX_Msg_72_Sgn_55;
UInt16 CANMMCAN_RX_Msg_72_Sgn_56;
volatile real_T CANMMCAN_RXCT73;
UInt16 CANMMCAN_RX_Msg_73_Sgn_1;
UInt32 CANMMCAN_RX_Msg_73_Sgn_2;
UInt8 CANMMCAN_RX_Msg_73_Sgn_3;
double CANMMCAN_RX_Msg_73_Sgn_4;
UInt16 CANMMCAN_RX_Msg_73_Sgn_5;
UInt8 CANMMCAN_RX_Msg_73_Sgn_6;
UInt8 CANMMCAN_RX_Msg_73_Sgn_7;
double CANMMCAN_RX_Msg_73_Sgn_8;
UInt16 CANMMCAN_RX_Msg_73_Sgn_9;
UInt8 CANMMCAN_RX_Msg_73_Sgn_10;
UInt8 CANMMCAN_RX_Msg_73_Sgn_11;
double CANMMCAN_RX_Msg_73_Sgn_12;
double CANMMCAN_RX_Msg_73_Sgn_13;
double CANMMCAN_RX_Msg_73_Sgn_14;
double CANMMCAN_RX_Msg_73_Sgn_15;
UInt8 CANMMCAN_RX_Msg_73_Sgn_16;
UInt8 CANMMCAN_RX_Msg_73_Sgn_17;
UInt8 CANMMCAN_RX_Msg_73_Sgn_18;
UInt8 CANMMCAN_RX_Msg_73_Sgn_19;
UInt8 CANMMCAN_RX_Msg_73_Sgn_20;
UInt8 CANMMCAN_RX_Msg_73_Sgn_21;
UInt8 CANMMCAN_RX_Msg_73_Sgn_22;
UInt8 CANMMCAN_RX_Msg_73_Sgn_23;
UInt8 CANMMCAN_RX_Msg_73_Sgn_24;
UInt8 CANMMCAN_RX_Msg_73_Sgn_25;
UInt8 CANMMCAN_RX_Msg_73_Sgn_26;
UInt8 CANMMCAN_RX_Msg_73_Sgn_27;
UInt8 CANMMCAN_RX_Msg_73_Sgn_28;
UInt8 CANMMCAN_RX_Msg_73_Sgn_29;
UInt8 CANMMCAN_RX_Msg_73_Sgn_30;
UInt8 CANMMCAN_RX_Msg_73_Sgn_31;
UInt8 CANMMCAN_RX_Msg_73_Sgn_32;
UInt8 CANMMCAN_RX_Msg_73_Sgn_33;
UInt8 CANMMCAN_RX_Msg_73_Sgn_34;
UInt8 CANMMCAN_RX_Msg_73_Sgn_35;
UInt8 CANMMCAN_RX_Msg_73_Sgn_36;
double CANMMCAN_RX_Msg_73_Sgn_37;
UInt8 CANMMCAN_RX_Msg_73_Sgn_38;
double CANMMCAN_RX_Msg_73_Sgn_39;
UInt8 CANMMCAN_RX_Msg_73_Sgn_40;
double CANMMCAN_RX_Msg_73_Sgn_41;
UInt8 CANMMCAN_RX_Msg_73_Sgn_42;
double CANMMCAN_RX_Msg_73_Sgn_43;
UInt8 CANMMCAN_RX_Msg_73_Sgn_44;
double CANMMCAN_RX_Msg_73_Sgn_45;
UInt8 CANMMCAN_RX_Msg_73_Sgn_46;
double CANMMCAN_RX_Msg_73_Sgn_47;
UInt8 CANMMCAN_RX_Msg_73_Sgn_48;
double CANMMCAN_RX_Msg_73_Sgn_49;
UInt8 CANMMCAN_RX_Msg_73_Sgn_50;
double CANMMCAN_RX_Msg_73_Sgn_51;
UInt8 CANMMCAN_RX_Msg_73_Sgn_52;
double CANMMCAN_RX_Msg_73_Sgn_53;
UInt8 CANMMCAN_RX_Msg_73_Sgn_54;
double CANMMCAN_RX_Msg_73_Sgn_55;
UInt8 CANMMCAN_RX_Msg_73_Sgn_56;
double CANMMCAN_RX_Msg_73_Sgn_57;
UInt8 CANMMCAN_RX_Msg_73_Sgn_58;
double CANMMCAN_RX_Msg_73_Sgn_59;
UInt8 CANMMCAN_RX_Msg_73_Sgn_60;
double CANMMCAN_RX_Msg_73_Sgn_61;
UInt8 CANMMCAN_RX_Msg_73_Sgn_62;
double CANMMCAN_RX_Msg_73_Sgn_63;
UInt8 CANMMCAN_RX_Msg_73_Sgn_64;
double CANMMCAN_RX_Msg_73_Sgn_65;
UInt8 CANMMCAN_RX_Msg_73_Sgn_66;
double CANMMCAN_RX_Msg_73_Sgn_67;
UInt8 CANMMCAN_RX_Msg_73_Sgn_68;
double CANMMCAN_RX_Msg_73_Sgn_69;
UInt8 CANMMCAN_RX_Msg_73_Sgn_70;
double CANMMCAN_RX_Msg_73_Sgn_71;
UInt8 CANMMCAN_RX_Msg_73_Sgn_72;
double CANMMCAN_RX_Msg_73_Sgn_73;
UInt8 CANMMCAN_RX_Msg_73_Sgn_74;
double CANMMCAN_RX_Msg_73_Sgn_75;
UInt8 CANMMCAN_RX_Msg_73_Sgn_76;
volatile real_T CANMMCAN_RXCT74;
UInt16 CANMMCAN_RX_Msg_74_Sgn_1;
double CANMMCAN_RX_Msg_74_Sgn_2;
UInt8 CANMMCAN_RX_Msg_74_Sgn_3;
double CANMMCAN_RX_Msg_74_Sgn_4;
UInt8 CANMMCAN_RX_Msg_74_Sgn_5;
double CANMMCAN_RX_Msg_74_Sgn_6;
UInt8 CANMMCAN_RX_Msg_74_Sgn_7;
double CANMMCAN_RX_Msg_74_Sgn_8;
UInt8 CANMMCAN_RX_Msg_74_Sgn_9;
double CANMMCAN_RX_Msg_74_Sgn_10;
UInt8 CANMMCAN_RX_Msg_74_Sgn_11;
double CANMMCAN_RX_Msg_74_Sgn_12;
UInt8 CANMMCAN_RX_Msg_74_Sgn_13;
double CANMMCAN_RX_Msg_74_Sgn_14;
UInt8 CANMMCAN_RX_Msg_74_Sgn_15;
double CANMMCAN_RX_Msg_74_Sgn_16;
UInt8 CANMMCAN_RX_Msg_74_Sgn_17;
double CANMMCAN_RX_Msg_74_Sgn_18;
UInt8 CANMMCAN_RX_Msg_74_Sgn_19;
double CANMMCAN_RX_Msg_74_Sgn_20;
UInt8 CANMMCAN_RX_Msg_74_Sgn_21;
double CANMMCAN_RX_Msg_74_Sgn_22;
UInt8 CANMMCAN_RX_Msg_74_Sgn_23;
double CANMMCAN_RX_Msg_74_Sgn_24;
UInt8 CANMMCAN_RX_Msg_74_Sgn_25;
double CANMMCAN_RX_Msg_74_Sgn_26;
UInt8 CANMMCAN_RX_Msg_74_Sgn_27;
double CANMMCAN_RX_Msg_74_Sgn_28;
UInt8 CANMMCAN_RX_Msg_74_Sgn_29;
double CANMMCAN_RX_Msg_74_Sgn_30;
UInt8 CANMMCAN_RX_Msg_74_Sgn_31;
double CANMMCAN_RX_Msg_74_Sgn_32;
UInt8 CANMMCAN_RX_Msg_74_Sgn_33;
double CANMMCAN_RX_Msg_74_Sgn_34;
UInt8 CANMMCAN_RX_Msg_74_Sgn_35;
double CANMMCAN_RX_Msg_74_Sgn_36;
UInt8 CANMMCAN_RX_Msg_74_Sgn_37;
double CANMMCAN_RX_Msg_74_Sgn_38;
UInt8 CANMMCAN_RX_Msg_74_Sgn_39;
double CANMMCAN_RX_Msg_74_Sgn_40;
UInt8 CANMMCAN_RX_Msg_74_Sgn_41;
UInt8 CANMMCAN_RX_Msg_74_Sgn_42;
double CANMMCAN_RX_Msg_74_Sgn_43;
double CANMMCAN_RX_Msg_74_Sgn_44;
UInt8 CANMMCAN_RX_Msg_74_Sgn_45;
UInt8 CANMMCAN_RX_Msg_74_Sgn_46;
double CANMMCAN_RX_Msg_74_Sgn_47;
double CANMMCAN_RX_Msg_74_Sgn_48;
UInt8 CANMMCAN_RX_Msg_74_Sgn_49;
UInt8 CANMMCAN_RX_Msg_74_Sgn_50;
UInt8 CANMMCAN_RX_Msg_74_Sgn_51;
UInt8 CANMMCAN_RX_Msg_74_Sgn_52;
UInt8 CANMMCAN_RX_Msg_74_Sgn_53;
UInt8 CANMMCAN_RX_Msg_74_Sgn_54;
UInt8 CANMMCAN_RX_Msg_74_Sgn_55;
UInt16 CANMMCAN_RX_Msg_74_Sgn_56;
volatile real_T CANMMCAN_RXCT75;
UInt16 CANMMCAN_RX_Msg_75_Sgn_1;
UInt32 CANMMCAN_RX_Msg_75_Sgn_2;
UInt8 CANMMCAN_RX_Msg_75_Sgn_3;
double CANMMCAN_RX_Msg_75_Sgn_4;
UInt16 CANMMCAN_RX_Msg_75_Sgn_5;
UInt8 CANMMCAN_RX_Msg_75_Sgn_6;
UInt8 CANMMCAN_RX_Msg_75_Sgn_7;
double CANMMCAN_RX_Msg_75_Sgn_8;
UInt16 CANMMCAN_RX_Msg_75_Sgn_9;
UInt8 CANMMCAN_RX_Msg_75_Sgn_10;
UInt8 CANMMCAN_RX_Msg_75_Sgn_11;
double CANMMCAN_RX_Msg_75_Sgn_12;
double CANMMCAN_RX_Msg_75_Sgn_13;
double CANMMCAN_RX_Msg_75_Sgn_14;
double CANMMCAN_RX_Msg_75_Sgn_15;
UInt8 CANMMCAN_RX_Msg_75_Sgn_16;
UInt8 CANMMCAN_RX_Msg_75_Sgn_17;
UInt8 CANMMCAN_RX_Msg_75_Sgn_18;
UInt8 CANMMCAN_RX_Msg_75_Sgn_19;
UInt8 CANMMCAN_RX_Msg_75_Sgn_20;
UInt8 CANMMCAN_RX_Msg_75_Sgn_21;
UInt8 CANMMCAN_RX_Msg_75_Sgn_22;
UInt8 CANMMCAN_RX_Msg_75_Sgn_23;
UInt8 CANMMCAN_RX_Msg_75_Sgn_24;
UInt8 CANMMCAN_RX_Msg_75_Sgn_25;
UInt8 CANMMCAN_RX_Msg_75_Sgn_26;
UInt8 CANMMCAN_RX_Msg_75_Sgn_27;
UInt8 CANMMCAN_RX_Msg_75_Sgn_28;
UInt8 CANMMCAN_RX_Msg_75_Sgn_29;
UInt8 CANMMCAN_RX_Msg_75_Sgn_30;
UInt8 CANMMCAN_RX_Msg_75_Sgn_31;
UInt8 CANMMCAN_RX_Msg_75_Sgn_32;
UInt8 CANMMCAN_RX_Msg_75_Sgn_33;
UInt8 CANMMCAN_RX_Msg_75_Sgn_34;
UInt8 CANMMCAN_RX_Msg_75_Sgn_35;
UInt8 CANMMCAN_RX_Msg_75_Sgn_36;
double CANMMCAN_RX_Msg_75_Sgn_37;
UInt8 CANMMCAN_RX_Msg_75_Sgn_38;
double CANMMCAN_RX_Msg_75_Sgn_39;
UInt8 CANMMCAN_RX_Msg_75_Sgn_40;
double CANMMCAN_RX_Msg_75_Sgn_41;
UInt8 CANMMCAN_RX_Msg_75_Sgn_42;
double CANMMCAN_RX_Msg_75_Sgn_43;
UInt8 CANMMCAN_RX_Msg_75_Sgn_44;
double CANMMCAN_RX_Msg_75_Sgn_45;
UInt8 CANMMCAN_RX_Msg_75_Sgn_46;
double CANMMCAN_RX_Msg_75_Sgn_47;
UInt8 CANMMCAN_RX_Msg_75_Sgn_48;
double CANMMCAN_RX_Msg_75_Sgn_49;
UInt8 CANMMCAN_RX_Msg_75_Sgn_50;
double CANMMCAN_RX_Msg_75_Sgn_51;
UInt8 CANMMCAN_RX_Msg_75_Sgn_52;
double CANMMCAN_RX_Msg_75_Sgn_53;
UInt8 CANMMCAN_RX_Msg_75_Sgn_54;
double CANMMCAN_RX_Msg_75_Sgn_55;
UInt8 CANMMCAN_RX_Msg_75_Sgn_56;
double CANMMCAN_RX_Msg_75_Sgn_57;
UInt8 CANMMCAN_RX_Msg_75_Sgn_58;
double CANMMCAN_RX_Msg_75_Sgn_59;
UInt8 CANMMCAN_RX_Msg_75_Sgn_60;
double CANMMCAN_RX_Msg_75_Sgn_61;
UInt8 CANMMCAN_RX_Msg_75_Sgn_62;
double CANMMCAN_RX_Msg_75_Sgn_63;
UInt8 CANMMCAN_RX_Msg_75_Sgn_64;
double CANMMCAN_RX_Msg_75_Sgn_65;
UInt8 CANMMCAN_RX_Msg_75_Sgn_66;
double CANMMCAN_RX_Msg_75_Sgn_67;
UInt8 CANMMCAN_RX_Msg_75_Sgn_68;
double CANMMCAN_RX_Msg_75_Sgn_69;
UInt8 CANMMCAN_RX_Msg_75_Sgn_70;
double CANMMCAN_RX_Msg_75_Sgn_71;
UInt8 CANMMCAN_RX_Msg_75_Sgn_72;
double CANMMCAN_RX_Msg_75_Sgn_73;
UInt8 CANMMCAN_RX_Msg_75_Sgn_74;
double CANMMCAN_RX_Msg_75_Sgn_75;
UInt8 CANMMCAN_RX_Msg_75_Sgn_76;
volatile real_T CANMMCAN_RXCT76;
UInt16 CANMMCAN_RX_Msg_76_Sgn_1;
double CANMMCAN_RX_Msg_76_Sgn_2;
UInt8 CANMMCAN_RX_Msg_76_Sgn_3;
double CANMMCAN_RX_Msg_76_Sgn_4;
UInt8 CANMMCAN_RX_Msg_76_Sgn_5;
double CANMMCAN_RX_Msg_76_Sgn_6;
UInt8 CANMMCAN_RX_Msg_76_Sgn_7;
double CANMMCAN_RX_Msg_76_Sgn_8;
UInt8 CANMMCAN_RX_Msg_76_Sgn_9;
double CANMMCAN_RX_Msg_76_Sgn_10;
UInt8 CANMMCAN_RX_Msg_76_Sgn_11;
double CANMMCAN_RX_Msg_76_Sgn_12;
UInt8 CANMMCAN_RX_Msg_76_Sgn_13;
double CANMMCAN_RX_Msg_76_Sgn_14;
UInt8 CANMMCAN_RX_Msg_76_Sgn_15;
double CANMMCAN_RX_Msg_76_Sgn_16;
UInt8 CANMMCAN_RX_Msg_76_Sgn_17;
double CANMMCAN_RX_Msg_76_Sgn_18;
UInt8 CANMMCAN_RX_Msg_76_Sgn_19;
double CANMMCAN_RX_Msg_76_Sgn_20;
UInt8 CANMMCAN_RX_Msg_76_Sgn_21;
double CANMMCAN_RX_Msg_76_Sgn_22;
UInt8 CANMMCAN_RX_Msg_76_Sgn_23;
double CANMMCAN_RX_Msg_76_Sgn_24;
UInt8 CANMMCAN_RX_Msg_76_Sgn_25;
double CANMMCAN_RX_Msg_76_Sgn_26;
UInt8 CANMMCAN_RX_Msg_76_Sgn_27;
double CANMMCAN_RX_Msg_76_Sgn_28;
UInt8 CANMMCAN_RX_Msg_76_Sgn_29;
double CANMMCAN_RX_Msg_76_Sgn_30;
UInt8 CANMMCAN_RX_Msg_76_Sgn_31;
double CANMMCAN_RX_Msg_76_Sgn_32;
UInt8 CANMMCAN_RX_Msg_76_Sgn_33;
double CANMMCAN_RX_Msg_76_Sgn_34;
UInt8 CANMMCAN_RX_Msg_76_Sgn_35;
double CANMMCAN_RX_Msg_76_Sgn_36;
UInt8 CANMMCAN_RX_Msg_76_Sgn_37;
double CANMMCAN_RX_Msg_76_Sgn_38;
UInt8 CANMMCAN_RX_Msg_76_Sgn_39;
double CANMMCAN_RX_Msg_76_Sgn_40;
UInt8 CANMMCAN_RX_Msg_76_Sgn_41;
UInt8 CANMMCAN_RX_Msg_76_Sgn_42;
double CANMMCAN_RX_Msg_76_Sgn_43;
double CANMMCAN_RX_Msg_76_Sgn_44;
UInt8 CANMMCAN_RX_Msg_76_Sgn_45;
UInt8 CANMMCAN_RX_Msg_76_Sgn_46;
double CANMMCAN_RX_Msg_76_Sgn_47;
double CANMMCAN_RX_Msg_76_Sgn_48;
UInt8 CANMMCAN_RX_Msg_76_Sgn_49;
UInt8 CANMMCAN_RX_Msg_76_Sgn_50;
UInt8 CANMMCAN_RX_Msg_76_Sgn_51;
UInt8 CANMMCAN_RX_Msg_76_Sgn_52;
UInt8 CANMMCAN_RX_Msg_76_Sgn_53;
UInt8 CANMMCAN_RX_Msg_76_Sgn_54;
UInt8 CANMMCAN_RX_Msg_76_Sgn_55;
UInt16 CANMMCAN_RX_Msg_76_Sgn_56;
volatile real_T CANMMCAN_RXCT77;
UInt16 CANMMCAN_RX_Msg_77_Sgn_1;
UInt32 CANMMCAN_RX_Msg_77_Sgn_2;
UInt8 CANMMCAN_RX_Msg_77_Sgn_3;
double CANMMCAN_RX_Msg_77_Sgn_4;
UInt16 CANMMCAN_RX_Msg_77_Sgn_5;
UInt8 CANMMCAN_RX_Msg_77_Sgn_6;
UInt8 CANMMCAN_RX_Msg_77_Sgn_7;
double CANMMCAN_RX_Msg_77_Sgn_8;
UInt16 CANMMCAN_RX_Msg_77_Sgn_9;
UInt8 CANMMCAN_RX_Msg_77_Sgn_10;
UInt8 CANMMCAN_RX_Msg_77_Sgn_11;
double CANMMCAN_RX_Msg_77_Sgn_12;
double CANMMCAN_RX_Msg_77_Sgn_13;
double CANMMCAN_RX_Msg_77_Sgn_14;
double CANMMCAN_RX_Msg_77_Sgn_15;
UInt8 CANMMCAN_RX_Msg_77_Sgn_16;
UInt8 CANMMCAN_RX_Msg_77_Sgn_17;
UInt8 CANMMCAN_RX_Msg_77_Sgn_18;
UInt8 CANMMCAN_RX_Msg_77_Sgn_19;
UInt8 CANMMCAN_RX_Msg_77_Sgn_20;
UInt8 CANMMCAN_RX_Msg_77_Sgn_21;
UInt8 CANMMCAN_RX_Msg_77_Sgn_22;
UInt8 CANMMCAN_RX_Msg_77_Sgn_23;
UInt8 CANMMCAN_RX_Msg_77_Sgn_24;
UInt8 CANMMCAN_RX_Msg_77_Sgn_25;
UInt8 CANMMCAN_RX_Msg_77_Sgn_26;
UInt8 CANMMCAN_RX_Msg_77_Sgn_27;
UInt8 CANMMCAN_RX_Msg_77_Sgn_28;
UInt8 CANMMCAN_RX_Msg_77_Sgn_29;
UInt8 CANMMCAN_RX_Msg_77_Sgn_30;
UInt8 CANMMCAN_RX_Msg_77_Sgn_31;
UInt8 CANMMCAN_RX_Msg_77_Sgn_32;
UInt8 CANMMCAN_RX_Msg_77_Sgn_33;
UInt8 CANMMCAN_RX_Msg_77_Sgn_34;
UInt8 CANMMCAN_RX_Msg_77_Sgn_35;
UInt8 CANMMCAN_RX_Msg_77_Sgn_36;
double CANMMCAN_RX_Msg_77_Sgn_37;
UInt8 CANMMCAN_RX_Msg_77_Sgn_38;
double CANMMCAN_RX_Msg_77_Sgn_39;
UInt8 CANMMCAN_RX_Msg_77_Sgn_40;
double CANMMCAN_RX_Msg_77_Sgn_41;
UInt8 CANMMCAN_RX_Msg_77_Sgn_42;
double CANMMCAN_RX_Msg_77_Sgn_43;
UInt8 CANMMCAN_RX_Msg_77_Sgn_44;
double CANMMCAN_RX_Msg_77_Sgn_45;
UInt8 CANMMCAN_RX_Msg_77_Sgn_46;
double CANMMCAN_RX_Msg_77_Sgn_47;
UInt8 CANMMCAN_RX_Msg_77_Sgn_48;
double CANMMCAN_RX_Msg_77_Sgn_49;
UInt8 CANMMCAN_RX_Msg_77_Sgn_50;
double CANMMCAN_RX_Msg_77_Sgn_51;
UInt8 CANMMCAN_RX_Msg_77_Sgn_52;
double CANMMCAN_RX_Msg_77_Sgn_53;
UInt8 CANMMCAN_RX_Msg_77_Sgn_54;
double CANMMCAN_RX_Msg_77_Sgn_55;
UInt8 CANMMCAN_RX_Msg_77_Sgn_56;
double CANMMCAN_RX_Msg_77_Sgn_57;
UInt8 CANMMCAN_RX_Msg_77_Sgn_58;
double CANMMCAN_RX_Msg_77_Sgn_59;
UInt8 CANMMCAN_RX_Msg_77_Sgn_60;
double CANMMCAN_RX_Msg_77_Sgn_61;
UInt8 CANMMCAN_RX_Msg_77_Sgn_62;
double CANMMCAN_RX_Msg_77_Sgn_63;
UInt8 CANMMCAN_RX_Msg_77_Sgn_64;
double CANMMCAN_RX_Msg_77_Sgn_65;
UInt8 CANMMCAN_RX_Msg_77_Sgn_66;
double CANMMCAN_RX_Msg_77_Sgn_67;
UInt8 CANMMCAN_RX_Msg_77_Sgn_68;
double CANMMCAN_RX_Msg_77_Sgn_69;
UInt8 CANMMCAN_RX_Msg_77_Sgn_70;
double CANMMCAN_RX_Msg_77_Sgn_71;
UInt8 CANMMCAN_RX_Msg_77_Sgn_72;
double CANMMCAN_RX_Msg_77_Sgn_73;
UInt8 CANMMCAN_RX_Msg_77_Sgn_74;
double CANMMCAN_RX_Msg_77_Sgn_75;
UInt8 CANMMCAN_RX_Msg_77_Sgn_76;
volatile real_T CANMMCAN_RXCT78;
UInt16 CANMMCAN_RX_Msg_78_Sgn_1;
double CANMMCAN_RX_Msg_78_Sgn_2;
UInt8 CANMMCAN_RX_Msg_78_Sgn_3;
double CANMMCAN_RX_Msg_78_Sgn_4;
UInt8 CANMMCAN_RX_Msg_78_Sgn_5;
double CANMMCAN_RX_Msg_78_Sgn_6;
UInt8 CANMMCAN_RX_Msg_78_Sgn_7;
double CANMMCAN_RX_Msg_78_Sgn_8;
UInt8 CANMMCAN_RX_Msg_78_Sgn_9;
double CANMMCAN_RX_Msg_78_Sgn_10;
UInt8 CANMMCAN_RX_Msg_78_Sgn_11;
double CANMMCAN_RX_Msg_78_Sgn_12;
UInt8 CANMMCAN_RX_Msg_78_Sgn_13;
double CANMMCAN_RX_Msg_78_Sgn_14;
UInt8 CANMMCAN_RX_Msg_78_Sgn_15;
double CANMMCAN_RX_Msg_78_Sgn_16;
UInt8 CANMMCAN_RX_Msg_78_Sgn_17;
double CANMMCAN_RX_Msg_78_Sgn_18;
UInt8 CANMMCAN_RX_Msg_78_Sgn_19;
double CANMMCAN_RX_Msg_78_Sgn_20;
UInt8 CANMMCAN_RX_Msg_78_Sgn_21;
double CANMMCAN_RX_Msg_78_Sgn_22;
UInt8 CANMMCAN_RX_Msg_78_Sgn_23;
double CANMMCAN_RX_Msg_78_Sgn_24;
UInt8 CANMMCAN_RX_Msg_78_Sgn_25;
double CANMMCAN_RX_Msg_78_Sgn_26;
UInt8 CANMMCAN_RX_Msg_78_Sgn_27;
double CANMMCAN_RX_Msg_78_Sgn_28;
UInt8 CANMMCAN_RX_Msg_78_Sgn_29;
double CANMMCAN_RX_Msg_78_Sgn_30;
UInt8 CANMMCAN_RX_Msg_78_Sgn_31;
double CANMMCAN_RX_Msg_78_Sgn_32;
UInt8 CANMMCAN_RX_Msg_78_Sgn_33;
double CANMMCAN_RX_Msg_78_Sgn_34;
UInt8 CANMMCAN_RX_Msg_78_Sgn_35;
double CANMMCAN_RX_Msg_78_Sgn_36;
UInt8 CANMMCAN_RX_Msg_78_Sgn_37;
double CANMMCAN_RX_Msg_78_Sgn_38;
UInt8 CANMMCAN_RX_Msg_78_Sgn_39;
double CANMMCAN_RX_Msg_78_Sgn_40;
UInt8 CANMMCAN_RX_Msg_78_Sgn_41;
UInt8 CANMMCAN_RX_Msg_78_Sgn_42;
double CANMMCAN_RX_Msg_78_Sgn_43;
double CANMMCAN_RX_Msg_78_Sgn_44;
UInt8 CANMMCAN_RX_Msg_78_Sgn_45;
UInt8 CANMMCAN_RX_Msg_78_Sgn_46;
double CANMMCAN_RX_Msg_78_Sgn_47;
double CANMMCAN_RX_Msg_78_Sgn_48;
UInt8 CANMMCAN_RX_Msg_78_Sgn_49;
UInt8 CANMMCAN_RX_Msg_78_Sgn_50;
UInt8 CANMMCAN_RX_Msg_78_Sgn_51;
UInt8 CANMMCAN_RX_Msg_78_Sgn_52;
UInt8 CANMMCAN_RX_Msg_78_Sgn_53;
UInt8 CANMMCAN_RX_Msg_78_Sgn_54;
UInt8 CANMMCAN_RX_Msg_78_Sgn_55;
UInt16 CANMMCAN_RX_Msg_78_Sgn_56;
volatile real_T CANMMCAN_RXCT79;
UInt16 CANMMCAN_RX_Msg_79_Sgn_1;
UInt32 CANMMCAN_RX_Msg_79_Sgn_2;
UInt8 CANMMCAN_RX_Msg_79_Sgn_3;
double CANMMCAN_RX_Msg_79_Sgn_4;
UInt16 CANMMCAN_RX_Msg_79_Sgn_5;
UInt8 CANMMCAN_RX_Msg_79_Sgn_6;
UInt8 CANMMCAN_RX_Msg_79_Sgn_7;
double CANMMCAN_RX_Msg_79_Sgn_8;
UInt16 CANMMCAN_RX_Msg_79_Sgn_9;
UInt8 CANMMCAN_RX_Msg_79_Sgn_10;
UInt8 CANMMCAN_RX_Msg_79_Sgn_11;
double CANMMCAN_RX_Msg_79_Sgn_12;
double CANMMCAN_RX_Msg_79_Sgn_13;
double CANMMCAN_RX_Msg_79_Sgn_14;
double CANMMCAN_RX_Msg_79_Sgn_15;
UInt8 CANMMCAN_RX_Msg_79_Sgn_16;
UInt8 CANMMCAN_RX_Msg_79_Sgn_17;
UInt8 CANMMCAN_RX_Msg_79_Sgn_18;
UInt8 CANMMCAN_RX_Msg_79_Sgn_19;
UInt8 CANMMCAN_RX_Msg_79_Sgn_20;
UInt8 CANMMCAN_RX_Msg_79_Sgn_21;
UInt8 CANMMCAN_RX_Msg_79_Sgn_22;
UInt8 CANMMCAN_RX_Msg_79_Sgn_23;
UInt8 CANMMCAN_RX_Msg_79_Sgn_24;
UInt8 CANMMCAN_RX_Msg_79_Sgn_25;
UInt8 CANMMCAN_RX_Msg_79_Sgn_26;
UInt8 CANMMCAN_RX_Msg_79_Sgn_27;
UInt8 CANMMCAN_RX_Msg_79_Sgn_28;
UInt8 CANMMCAN_RX_Msg_79_Sgn_29;
UInt8 CANMMCAN_RX_Msg_79_Sgn_30;
UInt8 CANMMCAN_RX_Msg_79_Sgn_31;
UInt8 CANMMCAN_RX_Msg_79_Sgn_32;
UInt8 CANMMCAN_RX_Msg_79_Sgn_33;
UInt8 CANMMCAN_RX_Msg_79_Sgn_34;
UInt8 CANMMCAN_RX_Msg_79_Sgn_35;
UInt8 CANMMCAN_RX_Msg_79_Sgn_36;
double CANMMCAN_RX_Msg_79_Sgn_37;
UInt8 CANMMCAN_RX_Msg_79_Sgn_38;
double CANMMCAN_RX_Msg_79_Sgn_39;
UInt8 CANMMCAN_RX_Msg_79_Sgn_40;
double CANMMCAN_RX_Msg_79_Sgn_41;
UInt8 CANMMCAN_RX_Msg_79_Sgn_42;
double CANMMCAN_RX_Msg_79_Sgn_43;
UInt8 CANMMCAN_RX_Msg_79_Sgn_44;
double CANMMCAN_RX_Msg_79_Sgn_45;
UInt8 CANMMCAN_RX_Msg_79_Sgn_46;
double CANMMCAN_RX_Msg_79_Sgn_47;
UInt8 CANMMCAN_RX_Msg_79_Sgn_48;
double CANMMCAN_RX_Msg_79_Sgn_49;
UInt8 CANMMCAN_RX_Msg_79_Sgn_50;
double CANMMCAN_RX_Msg_79_Sgn_51;
UInt8 CANMMCAN_RX_Msg_79_Sgn_52;
double CANMMCAN_RX_Msg_79_Sgn_53;
UInt8 CANMMCAN_RX_Msg_79_Sgn_54;
double CANMMCAN_RX_Msg_79_Sgn_55;
UInt8 CANMMCAN_RX_Msg_79_Sgn_56;
double CANMMCAN_RX_Msg_79_Sgn_57;
UInt8 CANMMCAN_RX_Msg_79_Sgn_58;
double CANMMCAN_RX_Msg_79_Sgn_59;
UInt8 CANMMCAN_RX_Msg_79_Sgn_60;
double CANMMCAN_RX_Msg_79_Sgn_61;
UInt8 CANMMCAN_RX_Msg_79_Sgn_62;
double CANMMCAN_RX_Msg_79_Sgn_63;
UInt8 CANMMCAN_RX_Msg_79_Sgn_64;
double CANMMCAN_RX_Msg_79_Sgn_65;
UInt8 CANMMCAN_RX_Msg_79_Sgn_66;
double CANMMCAN_RX_Msg_79_Sgn_67;
UInt8 CANMMCAN_RX_Msg_79_Sgn_68;
double CANMMCAN_RX_Msg_79_Sgn_69;
UInt8 CANMMCAN_RX_Msg_79_Sgn_70;
double CANMMCAN_RX_Msg_79_Sgn_71;
UInt8 CANMMCAN_RX_Msg_79_Sgn_72;
double CANMMCAN_RX_Msg_79_Sgn_73;
UInt8 CANMMCAN_RX_Msg_79_Sgn_74;
double CANMMCAN_RX_Msg_79_Sgn_75;
UInt8 CANMMCAN_RX_Msg_79_Sgn_76;
volatile real_T CANMMCAN_RXCT80;
UInt16 CANMMCAN_RX_Msg_80_Sgn_1;
double CANMMCAN_RX_Msg_80_Sgn_2;
UInt8 CANMMCAN_RX_Msg_80_Sgn_3;
double CANMMCAN_RX_Msg_80_Sgn_4;
UInt8 CANMMCAN_RX_Msg_80_Sgn_5;
double CANMMCAN_RX_Msg_80_Sgn_6;
UInt8 CANMMCAN_RX_Msg_80_Sgn_7;
double CANMMCAN_RX_Msg_80_Sgn_8;
UInt8 CANMMCAN_RX_Msg_80_Sgn_9;
double CANMMCAN_RX_Msg_80_Sgn_10;
UInt8 CANMMCAN_RX_Msg_80_Sgn_11;
double CANMMCAN_RX_Msg_80_Sgn_12;
UInt8 CANMMCAN_RX_Msg_80_Sgn_13;
double CANMMCAN_RX_Msg_80_Sgn_14;
UInt8 CANMMCAN_RX_Msg_80_Sgn_15;
double CANMMCAN_RX_Msg_80_Sgn_16;
UInt8 CANMMCAN_RX_Msg_80_Sgn_17;
double CANMMCAN_RX_Msg_80_Sgn_18;
UInt8 CANMMCAN_RX_Msg_80_Sgn_19;
double CANMMCAN_RX_Msg_80_Sgn_20;
UInt8 CANMMCAN_RX_Msg_80_Sgn_21;
double CANMMCAN_RX_Msg_80_Sgn_22;
UInt8 CANMMCAN_RX_Msg_80_Sgn_23;
double CANMMCAN_RX_Msg_80_Sgn_24;
UInt8 CANMMCAN_RX_Msg_80_Sgn_25;
double CANMMCAN_RX_Msg_80_Sgn_26;
UInt8 CANMMCAN_RX_Msg_80_Sgn_27;
double CANMMCAN_RX_Msg_80_Sgn_28;
UInt8 CANMMCAN_RX_Msg_80_Sgn_29;
double CANMMCAN_RX_Msg_80_Sgn_30;
UInt8 CANMMCAN_RX_Msg_80_Sgn_31;
double CANMMCAN_RX_Msg_80_Sgn_32;
UInt8 CANMMCAN_RX_Msg_80_Sgn_33;
double CANMMCAN_RX_Msg_80_Sgn_34;
UInt8 CANMMCAN_RX_Msg_80_Sgn_35;
double CANMMCAN_RX_Msg_80_Sgn_36;
UInt8 CANMMCAN_RX_Msg_80_Sgn_37;
double CANMMCAN_RX_Msg_80_Sgn_38;
UInt8 CANMMCAN_RX_Msg_80_Sgn_39;
double CANMMCAN_RX_Msg_80_Sgn_40;
UInt8 CANMMCAN_RX_Msg_80_Sgn_41;
UInt8 CANMMCAN_RX_Msg_80_Sgn_42;
double CANMMCAN_RX_Msg_80_Sgn_43;
double CANMMCAN_RX_Msg_80_Sgn_44;
UInt8 CANMMCAN_RX_Msg_80_Sgn_45;
UInt8 CANMMCAN_RX_Msg_80_Sgn_46;
double CANMMCAN_RX_Msg_80_Sgn_47;
double CANMMCAN_RX_Msg_80_Sgn_48;
UInt8 CANMMCAN_RX_Msg_80_Sgn_49;
UInt8 CANMMCAN_RX_Msg_80_Sgn_50;
UInt8 CANMMCAN_RX_Msg_80_Sgn_51;
UInt8 CANMMCAN_RX_Msg_80_Sgn_52;
UInt8 CANMMCAN_RX_Msg_80_Sgn_53;
UInt8 CANMMCAN_RX_Msg_80_Sgn_54;
UInt8 CANMMCAN_RX_Msg_80_Sgn_55;
UInt16 CANMMCAN_RX_Msg_80_Sgn_56;
volatile real_T CANMMCAN_RXCT81;
UInt16 CANMMCAN_RX_Msg_81_Sgn_1;
UInt32 CANMMCAN_RX_Msg_81_Sgn_2;
UInt8 CANMMCAN_RX_Msg_81_Sgn_3;
double CANMMCAN_RX_Msg_81_Sgn_4;
UInt16 CANMMCAN_RX_Msg_81_Sgn_5;
UInt8 CANMMCAN_RX_Msg_81_Sgn_6;
UInt8 CANMMCAN_RX_Msg_81_Sgn_7;
double CANMMCAN_RX_Msg_81_Sgn_8;
UInt16 CANMMCAN_RX_Msg_81_Sgn_9;
UInt8 CANMMCAN_RX_Msg_81_Sgn_10;
UInt8 CANMMCAN_RX_Msg_81_Sgn_11;
double CANMMCAN_RX_Msg_81_Sgn_12;
double CANMMCAN_RX_Msg_81_Sgn_13;
double CANMMCAN_RX_Msg_81_Sgn_14;
double CANMMCAN_RX_Msg_81_Sgn_15;
UInt8 CANMMCAN_RX_Msg_81_Sgn_16;
UInt8 CANMMCAN_RX_Msg_81_Sgn_17;
UInt8 CANMMCAN_RX_Msg_81_Sgn_18;
UInt8 CANMMCAN_RX_Msg_81_Sgn_19;
UInt8 CANMMCAN_RX_Msg_81_Sgn_20;
UInt8 CANMMCAN_RX_Msg_81_Sgn_21;
UInt8 CANMMCAN_RX_Msg_81_Sgn_22;
UInt8 CANMMCAN_RX_Msg_81_Sgn_23;
UInt8 CANMMCAN_RX_Msg_81_Sgn_24;
UInt8 CANMMCAN_RX_Msg_81_Sgn_25;
UInt8 CANMMCAN_RX_Msg_81_Sgn_26;
UInt8 CANMMCAN_RX_Msg_81_Sgn_27;
UInt8 CANMMCAN_RX_Msg_81_Sgn_28;
UInt8 CANMMCAN_RX_Msg_81_Sgn_29;
UInt8 CANMMCAN_RX_Msg_81_Sgn_30;
UInt8 CANMMCAN_RX_Msg_81_Sgn_31;
UInt8 CANMMCAN_RX_Msg_81_Sgn_32;
UInt8 CANMMCAN_RX_Msg_81_Sgn_33;
UInt8 CANMMCAN_RX_Msg_81_Sgn_34;
UInt8 CANMMCAN_RX_Msg_81_Sgn_35;
UInt8 CANMMCAN_RX_Msg_81_Sgn_36;
double CANMMCAN_RX_Msg_81_Sgn_37;
UInt8 CANMMCAN_RX_Msg_81_Sgn_38;
double CANMMCAN_RX_Msg_81_Sgn_39;
UInt8 CANMMCAN_RX_Msg_81_Sgn_40;
double CANMMCAN_RX_Msg_81_Sgn_41;
UInt8 CANMMCAN_RX_Msg_81_Sgn_42;
double CANMMCAN_RX_Msg_81_Sgn_43;
UInt8 CANMMCAN_RX_Msg_81_Sgn_44;
double CANMMCAN_RX_Msg_81_Sgn_45;
UInt8 CANMMCAN_RX_Msg_81_Sgn_46;
double CANMMCAN_RX_Msg_81_Sgn_47;
UInt8 CANMMCAN_RX_Msg_81_Sgn_48;
double CANMMCAN_RX_Msg_81_Sgn_49;
UInt8 CANMMCAN_RX_Msg_81_Sgn_50;
double CANMMCAN_RX_Msg_81_Sgn_51;
UInt8 CANMMCAN_RX_Msg_81_Sgn_52;
double CANMMCAN_RX_Msg_81_Sgn_53;
UInt8 CANMMCAN_RX_Msg_81_Sgn_54;
double CANMMCAN_RX_Msg_81_Sgn_55;
UInt8 CANMMCAN_RX_Msg_81_Sgn_56;
double CANMMCAN_RX_Msg_81_Sgn_57;
UInt8 CANMMCAN_RX_Msg_81_Sgn_58;
double CANMMCAN_RX_Msg_81_Sgn_59;
UInt8 CANMMCAN_RX_Msg_81_Sgn_60;
double CANMMCAN_RX_Msg_81_Sgn_61;
UInt8 CANMMCAN_RX_Msg_81_Sgn_62;
double CANMMCAN_RX_Msg_81_Sgn_63;
UInt8 CANMMCAN_RX_Msg_81_Sgn_64;
double CANMMCAN_RX_Msg_81_Sgn_65;
UInt8 CANMMCAN_RX_Msg_81_Sgn_66;
double CANMMCAN_RX_Msg_81_Sgn_67;
UInt8 CANMMCAN_RX_Msg_81_Sgn_68;
double CANMMCAN_RX_Msg_81_Sgn_69;
UInt8 CANMMCAN_RX_Msg_81_Sgn_70;
double CANMMCAN_RX_Msg_81_Sgn_71;
UInt8 CANMMCAN_RX_Msg_81_Sgn_72;
double CANMMCAN_RX_Msg_81_Sgn_73;
UInt8 CANMMCAN_RX_Msg_81_Sgn_74;
double CANMMCAN_RX_Msg_81_Sgn_75;
UInt8 CANMMCAN_RX_Msg_81_Sgn_76;
volatile real_T CANMMCAN_RXCT82;
UInt16 CANMMCAN_RX_Msg_82_Sgn_1;
double CANMMCAN_RX_Msg_82_Sgn_2;
UInt8 CANMMCAN_RX_Msg_82_Sgn_3;
double CANMMCAN_RX_Msg_82_Sgn_4;
UInt8 CANMMCAN_RX_Msg_82_Sgn_5;
double CANMMCAN_RX_Msg_82_Sgn_6;
UInt8 CANMMCAN_RX_Msg_82_Sgn_7;
double CANMMCAN_RX_Msg_82_Sgn_8;
UInt8 CANMMCAN_RX_Msg_82_Sgn_9;
double CANMMCAN_RX_Msg_82_Sgn_10;
UInt8 CANMMCAN_RX_Msg_82_Sgn_11;
double CANMMCAN_RX_Msg_82_Sgn_12;
UInt8 CANMMCAN_RX_Msg_82_Sgn_13;
double CANMMCAN_RX_Msg_82_Sgn_14;
UInt8 CANMMCAN_RX_Msg_82_Sgn_15;
double CANMMCAN_RX_Msg_82_Sgn_16;
UInt8 CANMMCAN_RX_Msg_82_Sgn_17;
double CANMMCAN_RX_Msg_82_Sgn_18;
UInt8 CANMMCAN_RX_Msg_82_Sgn_19;
double CANMMCAN_RX_Msg_82_Sgn_20;
UInt8 CANMMCAN_RX_Msg_82_Sgn_21;
double CANMMCAN_RX_Msg_82_Sgn_22;
UInt8 CANMMCAN_RX_Msg_82_Sgn_23;
double CANMMCAN_RX_Msg_82_Sgn_24;
UInt8 CANMMCAN_RX_Msg_82_Sgn_25;
double CANMMCAN_RX_Msg_82_Sgn_26;
UInt8 CANMMCAN_RX_Msg_82_Sgn_27;
double CANMMCAN_RX_Msg_82_Sgn_28;
UInt8 CANMMCAN_RX_Msg_82_Sgn_29;
double CANMMCAN_RX_Msg_82_Sgn_30;
UInt8 CANMMCAN_RX_Msg_82_Sgn_31;
double CANMMCAN_RX_Msg_82_Sgn_32;
UInt8 CANMMCAN_RX_Msg_82_Sgn_33;
double CANMMCAN_RX_Msg_82_Sgn_34;
UInt8 CANMMCAN_RX_Msg_82_Sgn_35;
double CANMMCAN_RX_Msg_82_Sgn_36;
UInt8 CANMMCAN_RX_Msg_82_Sgn_37;
double CANMMCAN_RX_Msg_82_Sgn_38;
UInt8 CANMMCAN_RX_Msg_82_Sgn_39;
double CANMMCAN_RX_Msg_82_Sgn_40;
UInt8 CANMMCAN_RX_Msg_82_Sgn_41;
UInt8 CANMMCAN_RX_Msg_82_Sgn_42;
double CANMMCAN_RX_Msg_82_Sgn_43;
double CANMMCAN_RX_Msg_82_Sgn_44;
UInt8 CANMMCAN_RX_Msg_82_Sgn_45;
UInt8 CANMMCAN_RX_Msg_82_Sgn_46;
double CANMMCAN_RX_Msg_82_Sgn_47;
double CANMMCAN_RX_Msg_82_Sgn_48;
UInt8 CANMMCAN_RX_Msg_82_Sgn_49;
UInt8 CANMMCAN_RX_Msg_82_Sgn_50;
UInt8 CANMMCAN_RX_Msg_82_Sgn_51;
UInt8 CANMMCAN_RX_Msg_82_Sgn_52;
UInt8 CANMMCAN_RX_Msg_82_Sgn_53;
UInt8 CANMMCAN_RX_Msg_82_Sgn_54;
UInt8 CANMMCAN_RX_Msg_82_Sgn_55;
UInt16 CANMMCAN_RX_Msg_82_Sgn_56;
UInt16 CANMMCAN_RX_Msg_82_Sgn_57;
volatile real_T CANMMCAN_RXCT83;
UInt16 CANMMCAN_RX_Msg_83_Sgn_1;
UInt32 CANMMCAN_RX_Msg_83_Sgn_2;
UInt8 CANMMCAN_RX_Msg_83_Sgn_3;
double CANMMCAN_RX_Msg_83_Sgn_4;
UInt16 CANMMCAN_RX_Msg_83_Sgn_5;
UInt8 CANMMCAN_RX_Msg_83_Sgn_6;
UInt8 CANMMCAN_RX_Msg_83_Sgn_7;
double CANMMCAN_RX_Msg_83_Sgn_8;
UInt16 CANMMCAN_RX_Msg_83_Sgn_9;
UInt8 CANMMCAN_RX_Msg_83_Sgn_10;
UInt8 CANMMCAN_RX_Msg_83_Sgn_11;
double CANMMCAN_RX_Msg_83_Sgn_12;
double CANMMCAN_RX_Msg_83_Sgn_13;
double CANMMCAN_RX_Msg_83_Sgn_14;
double CANMMCAN_RX_Msg_83_Sgn_15;
UInt8 CANMMCAN_RX_Msg_83_Sgn_16;
UInt8 CANMMCAN_RX_Msg_83_Sgn_17;
UInt8 CANMMCAN_RX_Msg_83_Sgn_18;
UInt8 CANMMCAN_RX_Msg_83_Sgn_19;
UInt8 CANMMCAN_RX_Msg_83_Sgn_20;
UInt8 CANMMCAN_RX_Msg_83_Sgn_21;
UInt8 CANMMCAN_RX_Msg_83_Sgn_22;
UInt8 CANMMCAN_RX_Msg_83_Sgn_23;
UInt8 CANMMCAN_RX_Msg_83_Sgn_24;
UInt8 CANMMCAN_RX_Msg_83_Sgn_25;
UInt8 CANMMCAN_RX_Msg_83_Sgn_26;
UInt8 CANMMCAN_RX_Msg_83_Sgn_27;
UInt8 CANMMCAN_RX_Msg_83_Sgn_28;
UInt8 CANMMCAN_RX_Msg_83_Sgn_29;
UInt8 CANMMCAN_RX_Msg_83_Sgn_30;
UInt8 CANMMCAN_RX_Msg_83_Sgn_31;
UInt8 CANMMCAN_RX_Msg_83_Sgn_32;
UInt8 CANMMCAN_RX_Msg_83_Sgn_33;
UInt8 CANMMCAN_RX_Msg_83_Sgn_34;
UInt8 CANMMCAN_RX_Msg_83_Sgn_35;
UInt8 CANMMCAN_RX_Msg_83_Sgn_36;
double CANMMCAN_RX_Msg_83_Sgn_37;
UInt8 CANMMCAN_RX_Msg_83_Sgn_38;
double CANMMCAN_RX_Msg_83_Sgn_39;
UInt8 CANMMCAN_RX_Msg_83_Sgn_40;
double CANMMCAN_RX_Msg_83_Sgn_41;
UInt8 CANMMCAN_RX_Msg_83_Sgn_42;
double CANMMCAN_RX_Msg_83_Sgn_43;
UInt8 CANMMCAN_RX_Msg_83_Sgn_44;
double CANMMCAN_RX_Msg_83_Sgn_45;
UInt8 CANMMCAN_RX_Msg_83_Sgn_46;
double CANMMCAN_RX_Msg_83_Sgn_47;
UInt8 CANMMCAN_RX_Msg_83_Sgn_48;
double CANMMCAN_RX_Msg_83_Sgn_49;
UInt8 CANMMCAN_RX_Msg_83_Sgn_50;
double CANMMCAN_RX_Msg_83_Sgn_51;
UInt8 CANMMCAN_RX_Msg_83_Sgn_52;
double CANMMCAN_RX_Msg_83_Sgn_53;
UInt8 CANMMCAN_RX_Msg_83_Sgn_54;
double CANMMCAN_RX_Msg_83_Sgn_55;
UInt8 CANMMCAN_RX_Msg_83_Sgn_56;
double CANMMCAN_RX_Msg_83_Sgn_57;
UInt8 CANMMCAN_RX_Msg_83_Sgn_58;
double CANMMCAN_RX_Msg_83_Sgn_59;
UInt8 CANMMCAN_RX_Msg_83_Sgn_60;
double CANMMCAN_RX_Msg_83_Sgn_61;
UInt8 CANMMCAN_RX_Msg_83_Sgn_62;
double CANMMCAN_RX_Msg_83_Sgn_63;
UInt8 CANMMCAN_RX_Msg_83_Sgn_64;
double CANMMCAN_RX_Msg_83_Sgn_65;
UInt8 CANMMCAN_RX_Msg_83_Sgn_66;
double CANMMCAN_RX_Msg_83_Sgn_67;
UInt8 CANMMCAN_RX_Msg_83_Sgn_68;
double CANMMCAN_RX_Msg_83_Sgn_69;
UInt8 CANMMCAN_RX_Msg_83_Sgn_70;
double CANMMCAN_RX_Msg_83_Sgn_71;
UInt8 CANMMCAN_RX_Msg_83_Sgn_72;
double CANMMCAN_RX_Msg_83_Sgn_73;
UInt8 CANMMCAN_RX_Msg_83_Sgn_74;
double CANMMCAN_RX_Msg_83_Sgn_75;
UInt8 CANMMCAN_RX_Msg_83_Sgn_76;
volatile real_T CANMMCAN_RXCT84;
UInt16 CANMMCAN_RX_Msg_84_Sgn_1;
double CANMMCAN_RX_Msg_84_Sgn_2;
UInt8 CANMMCAN_RX_Msg_84_Sgn_3;
double CANMMCAN_RX_Msg_84_Sgn_4;
UInt8 CANMMCAN_RX_Msg_84_Sgn_5;
double CANMMCAN_RX_Msg_84_Sgn_6;
UInt8 CANMMCAN_RX_Msg_84_Sgn_7;
double CANMMCAN_RX_Msg_84_Sgn_8;
UInt8 CANMMCAN_RX_Msg_84_Sgn_9;
double CANMMCAN_RX_Msg_84_Sgn_10;
UInt8 CANMMCAN_RX_Msg_84_Sgn_11;
double CANMMCAN_RX_Msg_84_Sgn_12;
UInt8 CANMMCAN_RX_Msg_84_Sgn_13;
double CANMMCAN_RX_Msg_84_Sgn_14;
UInt8 CANMMCAN_RX_Msg_84_Sgn_15;
double CANMMCAN_RX_Msg_84_Sgn_16;
UInt8 CANMMCAN_RX_Msg_84_Sgn_17;
double CANMMCAN_RX_Msg_84_Sgn_18;
UInt8 CANMMCAN_RX_Msg_84_Sgn_19;
double CANMMCAN_RX_Msg_84_Sgn_20;
UInt8 CANMMCAN_RX_Msg_84_Sgn_21;
double CANMMCAN_RX_Msg_84_Sgn_22;
UInt8 CANMMCAN_RX_Msg_84_Sgn_23;
double CANMMCAN_RX_Msg_84_Sgn_24;
UInt8 CANMMCAN_RX_Msg_84_Sgn_25;
double CANMMCAN_RX_Msg_84_Sgn_26;
UInt8 CANMMCAN_RX_Msg_84_Sgn_27;
double CANMMCAN_RX_Msg_84_Sgn_28;
UInt8 CANMMCAN_RX_Msg_84_Sgn_29;
double CANMMCAN_RX_Msg_84_Sgn_30;
UInt8 CANMMCAN_RX_Msg_84_Sgn_31;
double CANMMCAN_RX_Msg_84_Sgn_32;
UInt8 CANMMCAN_RX_Msg_84_Sgn_33;
double CANMMCAN_RX_Msg_84_Sgn_34;
UInt8 CANMMCAN_RX_Msg_84_Sgn_35;
double CANMMCAN_RX_Msg_84_Sgn_36;
UInt8 CANMMCAN_RX_Msg_84_Sgn_37;
double CANMMCAN_RX_Msg_84_Sgn_38;
UInt8 CANMMCAN_RX_Msg_84_Sgn_39;
double CANMMCAN_RX_Msg_84_Sgn_40;
UInt8 CANMMCAN_RX_Msg_84_Sgn_41;
UInt8 CANMMCAN_RX_Msg_84_Sgn_42;
double CANMMCAN_RX_Msg_84_Sgn_43;
double CANMMCAN_RX_Msg_84_Sgn_44;
UInt8 CANMMCAN_RX_Msg_84_Sgn_45;
UInt8 CANMMCAN_RX_Msg_84_Sgn_46;
double CANMMCAN_RX_Msg_84_Sgn_47;
double CANMMCAN_RX_Msg_84_Sgn_48;
UInt8 CANMMCAN_RX_Msg_84_Sgn_49;
UInt8 CANMMCAN_RX_Msg_84_Sgn_50;
UInt8 CANMMCAN_RX_Msg_84_Sgn_51;
UInt8 CANMMCAN_RX_Msg_84_Sgn_52;
UInt8 CANMMCAN_RX_Msg_84_Sgn_53;
UInt8 CANMMCAN_RX_Msg_84_Sgn_54;
UInt8 CANMMCAN_RX_Msg_84_Sgn_55;
UInt16 CANMMCAN_RX_Msg_84_Sgn_56;
volatile real_T CANMMCAN_RXCT85;
UInt16 CANMMCAN_RX_Msg_85_Sgn_1;
UInt32 CANMMCAN_RX_Msg_85_Sgn_2;
UInt8 CANMMCAN_RX_Msg_85_Sgn_3;
double CANMMCAN_RX_Msg_85_Sgn_4;
UInt16 CANMMCAN_RX_Msg_85_Sgn_5;
UInt8 CANMMCAN_RX_Msg_85_Sgn_6;
UInt8 CANMMCAN_RX_Msg_85_Sgn_7;
double CANMMCAN_RX_Msg_85_Sgn_8;
UInt16 CANMMCAN_RX_Msg_85_Sgn_9;
UInt8 CANMMCAN_RX_Msg_85_Sgn_10;
UInt8 CANMMCAN_RX_Msg_85_Sgn_11;
double CANMMCAN_RX_Msg_85_Sgn_12;
double CANMMCAN_RX_Msg_85_Sgn_13;
double CANMMCAN_RX_Msg_85_Sgn_14;
double CANMMCAN_RX_Msg_85_Sgn_15;
UInt8 CANMMCAN_RX_Msg_85_Sgn_16;
UInt8 CANMMCAN_RX_Msg_85_Sgn_17;
UInt8 CANMMCAN_RX_Msg_85_Sgn_18;
UInt8 CANMMCAN_RX_Msg_85_Sgn_19;
UInt8 CANMMCAN_RX_Msg_85_Sgn_20;
UInt8 CANMMCAN_RX_Msg_85_Sgn_21;
UInt8 CANMMCAN_RX_Msg_85_Sgn_22;
UInt8 CANMMCAN_RX_Msg_85_Sgn_23;
UInt8 CANMMCAN_RX_Msg_85_Sgn_24;
UInt8 CANMMCAN_RX_Msg_85_Sgn_25;
UInt8 CANMMCAN_RX_Msg_85_Sgn_26;
UInt8 CANMMCAN_RX_Msg_85_Sgn_27;
UInt8 CANMMCAN_RX_Msg_85_Sgn_28;
UInt8 CANMMCAN_RX_Msg_85_Sgn_29;
UInt8 CANMMCAN_RX_Msg_85_Sgn_30;
UInt8 CANMMCAN_RX_Msg_85_Sgn_31;
UInt8 CANMMCAN_RX_Msg_85_Sgn_32;
UInt8 CANMMCAN_RX_Msg_85_Sgn_33;
UInt8 CANMMCAN_RX_Msg_85_Sgn_34;
UInt8 CANMMCAN_RX_Msg_85_Sgn_35;
UInt8 CANMMCAN_RX_Msg_85_Sgn_36;
double CANMMCAN_RX_Msg_85_Sgn_37;
UInt8 CANMMCAN_RX_Msg_85_Sgn_38;
double CANMMCAN_RX_Msg_85_Sgn_39;
UInt8 CANMMCAN_RX_Msg_85_Sgn_40;
double CANMMCAN_RX_Msg_85_Sgn_41;
UInt8 CANMMCAN_RX_Msg_85_Sgn_42;
double CANMMCAN_RX_Msg_85_Sgn_43;
UInt8 CANMMCAN_RX_Msg_85_Sgn_44;
double CANMMCAN_RX_Msg_85_Sgn_45;
UInt8 CANMMCAN_RX_Msg_85_Sgn_46;
double CANMMCAN_RX_Msg_85_Sgn_47;
UInt8 CANMMCAN_RX_Msg_85_Sgn_48;
double CANMMCAN_RX_Msg_85_Sgn_49;
UInt8 CANMMCAN_RX_Msg_85_Sgn_50;
double CANMMCAN_RX_Msg_85_Sgn_51;
UInt8 CANMMCAN_RX_Msg_85_Sgn_52;
double CANMMCAN_RX_Msg_85_Sgn_53;
UInt8 CANMMCAN_RX_Msg_85_Sgn_54;
double CANMMCAN_RX_Msg_85_Sgn_55;
UInt8 CANMMCAN_RX_Msg_85_Sgn_56;
double CANMMCAN_RX_Msg_85_Sgn_57;
UInt8 CANMMCAN_RX_Msg_85_Sgn_58;
double CANMMCAN_RX_Msg_85_Sgn_59;
UInt8 CANMMCAN_RX_Msg_85_Sgn_60;
double CANMMCAN_RX_Msg_85_Sgn_61;
UInt8 CANMMCAN_RX_Msg_85_Sgn_62;
double CANMMCAN_RX_Msg_85_Sgn_63;
UInt8 CANMMCAN_RX_Msg_85_Sgn_64;
double CANMMCAN_RX_Msg_85_Sgn_65;
UInt8 CANMMCAN_RX_Msg_85_Sgn_66;
double CANMMCAN_RX_Msg_85_Sgn_67;
UInt8 CANMMCAN_RX_Msg_85_Sgn_68;
double CANMMCAN_RX_Msg_85_Sgn_69;
UInt8 CANMMCAN_RX_Msg_85_Sgn_70;
double CANMMCAN_RX_Msg_85_Sgn_71;
UInt8 CANMMCAN_RX_Msg_85_Sgn_72;
double CANMMCAN_RX_Msg_85_Sgn_73;
UInt8 CANMMCAN_RX_Msg_85_Sgn_74;
double CANMMCAN_RX_Msg_85_Sgn_75;
UInt8 CANMMCAN_RX_Msg_85_Sgn_76;
volatile real_T CANMMCAN_RXCT86;
UInt16 CANMMCAN_RX_Msg_86_Sgn_1;
double CANMMCAN_RX_Msg_86_Sgn_2;
UInt8 CANMMCAN_RX_Msg_86_Sgn_3;
double CANMMCAN_RX_Msg_86_Sgn_4;
UInt8 CANMMCAN_RX_Msg_86_Sgn_5;
double CANMMCAN_RX_Msg_86_Sgn_6;
UInt8 CANMMCAN_RX_Msg_86_Sgn_7;
double CANMMCAN_RX_Msg_86_Sgn_8;
UInt8 CANMMCAN_RX_Msg_86_Sgn_9;
double CANMMCAN_RX_Msg_86_Sgn_10;
UInt8 CANMMCAN_RX_Msg_86_Sgn_11;
double CANMMCAN_RX_Msg_86_Sgn_12;
UInt8 CANMMCAN_RX_Msg_86_Sgn_13;
double CANMMCAN_RX_Msg_86_Sgn_14;
UInt8 CANMMCAN_RX_Msg_86_Sgn_15;
double CANMMCAN_RX_Msg_86_Sgn_16;
UInt8 CANMMCAN_RX_Msg_86_Sgn_17;
double CANMMCAN_RX_Msg_86_Sgn_18;
UInt8 CANMMCAN_RX_Msg_86_Sgn_19;
double CANMMCAN_RX_Msg_86_Sgn_20;
UInt8 CANMMCAN_RX_Msg_86_Sgn_21;
double CANMMCAN_RX_Msg_86_Sgn_22;
UInt8 CANMMCAN_RX_Msg_86_Sgn_23;
double CANMMCAN_RX_Msg_86_Sgn_24;
UInt8 CANMMCAN_RX_Msg_86_Sgn_25;
double CANMMCAN_RX_Msg_86_Sgn_26;
UInt8 CANMMCAN_RX_Msg_86_Sgn_27;
double CANMMCAN_RX_Msg_86_Sgn_28;
UInt8 CANMMCAN_RX_Msg_86_Sgn_29;
double CANMMCAN_RX_Msg_86_Sgn_30;
UInt8 CANMMCAN_RX_Msg_86_Sgn_31;
double CANMMCAN_RX_Msg_86_Sgn_32;
UInt8 CANMMCAN_RX_Msg_86_Sgn_33;
double CANMMCAN_RX_Msg_86_Sgn_34;
UInt8 CANMMCAN_RX_Msg_86_Sgn_35;
double CANMMCAN_RX_Msg_86_Sgn_36;
UInt8 CANMMCAN_RX_Msg_86_Sgn_37;
double CANMMCAN_RX_Msg_86_Sgn_38;
UInt8 CANMMCAN_RX_Msg_86_Sgn_39;
double CANMMCAN_RX_Msg_86_Sgn_40;
UInt8 CANMMCAN_RX_Msg_86_Sgn_41;
UInt8 CANMMCAN_RX_Msg_86_Sgn_42;
double CANMMCAN_RX_Msg_86_Sgn_43;
double CANMMCAN_RX_Msg_86_Sgn_44;
UInt8 CANMMCAN_RX_Msg_86_Sgn_45;
UInt8 CANMMCAN_RX_Msg_86_Sgn_46;
double CANMMCAN_RX_Msg_86_Sgn_47;
double CANMMCAN_RX_Msg_86_Sgn_48;
UInt8 CANMMCAN_RX_Msg_86_Sgn_49;
UInt8 CANMMCAN_RX_Msg_86_Sgn_50;
UInt8 CANMMCAN_RX_Msg_86_Sgn_51;
UInt8 CANMMCAN_RX_Msg_86_Sgn_52;
UInt8 CANMMCAN_RX_Msg_86_Sgn_53;
UInt8 CANMMCAN_RX_Msg_86_Sgn_54;
UInt8 CANMMCAN_RX_Msg_86_Sgn_55;
UInt16 CANMMCAN_RX_Msg_86_Sgn_56;
volatile real_T CANMMCAN_RXCT87;
UInt16 CANMMCAN_RX_Msg_87_Sgn_1;
UInt32 CANMMCAN_RX_Msg_87_Sgn_2;
UInt8 CANMMCAN_RX_Msg_87_Sgn_3;
double CANMMCAN_RX_Msg_87_Sgn_4;
UInt16 CANMMCAN_RX_Msg_87_Sgn_5;
UInt8 CANMMCAN_RX_Msg_87_Sgn_6;
UInt8 CANMMCAN_RX_Msg_87_Sgn_7;
double CANMMCAN_RX_Msg_87_Sgn_8;
UInt16 CANMMCAN_RX_Msg_87_Sgn_9;
UInt8 CANMMCAN_RX_Msg_87_Sgn_10;
UInt8 CANMMCAN_RX_Msg_87_Sgn_11;
double CANMMCAN_RX_Msg_87_Sgn_12;
double CANMMCAN_RX_Msg_87_Sgn_13;
double CANMMCAN_RX_Msg_87_Sgn_14;
double CANMMCAN_RX_Msg_87_Sgn_15;
UInt8 CANMMCAN_RX_Msg_87_Sgn_16;
UInt8 CANMMCAN_RX_Msg_87_Sgn_17;
UInt8 CANMMCAN_RX_Msg_87_Sgn_18;
UInt8 CANMMCAN_RX_Msg_87_Sgn_19;
UInt8 CANMMCAN_RX_Msg_87_Sgn_20;
UInt8 CANMMCAN_RX_Msg_87_Sgn_21;
UInt8 CANMMCAN_RX_Msg_87_Sgn_22;
UInt8 CANMMCAN_RX_Msg_87_Sgn_23;
UInt8 CANMMCAN_RX_Msg_87_Sgn_24;
UInt8 CANMMCAN_RX_Msg_87_Sgn_25;
UInt8 CANMMCAN_RX_Msg_87_Sgn_26;
UInt8 CANMMCAN_RX_Msg_87_Sgn_27;
UInt8 CANMMCAN_RX_Msg_87_Sgn_28;
UInt8 CANMMCAN_RX_Msg_87_Sgn_29;
UInt8 CANMMCAN_RX_Msg_87_Sgn_30;
UInt8 CANMMCAN_RX_Msg_87_Sgn_31;
UInt8 CANMMCAN_RX_Msg_87_Sgn_32;
UInt8 CANMMCAN_RX_Msg_87_Sgn_33;
UInt8 CANMMCAN_RX_Msg_87_Sgn_34;
UInt8 CANMMCAN_RX_Msg_87_Sgn_35;
UInt8 CANMMCAN_RX_Msg_87_Sgn_36;
double CANMMCAN_RX_Msg_87_Sgn_37;
UInt8 CANMMCAN_RX_Msg_87_Sgn_38;
double CANMMCAN_RX_Msg_87_Sgn_39;
UInt8 CANMMCAN_RX_Msg_87_Sgn_40;
double CANMMCAN_RX_Msg_87_Sgn_41;
UInt8 CANMMCAN_RX_Msg_87_Sgn_42;
double CANMMCAN_RX_Msg_87_Sgn_43;
UInt8 CANMMCAN_RX_Msg_87_Sgn_44;
double CANMMCAN_RX_Msg_87_Sgn_45;
UInt8 CANMMCAN_RX_Msg_87_Sgn_46;
double CANMMCAN_RX_Msg_87_Sgn_47;
UInt8 CANMMCAN_RX_Msg_87_Sgn_48;
double CANMMCAN_RX_Msg_87_Sgn_49;
UInt8 CANMMCAN_RX_Msg_87_Sgn_50;
double CANMMCAN_RX_Msg_87_Sgn_51;
UInt8 CANMMCAN_RX_Msg_87_Sgn_52;
double CANMMCAN_RX_Msg_87_Sgn_53;
UInt8 CANMMCAN_RX_Msg_87_Sgn_54;
double CANMMCAN_RX_Msg_87_Sgn_55;
UInt8 CANMMCAN_RX_Msg_87_Sgn_56;
double CANMMCAN_RX_Msg_87_Sgn_57;
UInt8 CANMMCAN_RX_Msg_87_Sgn_58;
double CANMMCAN_RX_Msg_87_Sgn_59;
UInt8 CANMMCAN_RX_Msg_87_Sgn_60;
double CANMMCAN_RX_Msg_87_Sgn_61;
UInt8 CANMMCAN_RX_Msg_87_Sgn_62;
double CANMMCAN_RX_Msg_87_Sgn_63;
UInt8 CANMMCAN_RX_Msg_87_Sgn_64;
double CANMMCAN_RX_Msg_87_Sgn_65;
UInt8 CANMMCAN_RX_Msg_87_Sgn_66;
double CANMMCAN_RX_Msg_87_Sgn_67;
UInt8 CANMMCAN_RX_Msg_87_Sgn_68;
double CANMMCAN_RX_Msg_87_Sgn_69;
UInt8 CANMMCAN_RX_Msg_87_Sgn_70;
double CANMMCAN_RX_Msg_87_Sgn_71;
UInt8 CANMMCAN_RX_Msg_87_Sgn_72;
double CANMMCAN_RX_Msg_87_Sgn_73;
UInt8 CANMMCAN_RX_Msg_87_Sgn_74;
double CANMMCAN_RX_Msg_87_Sgn_75;
UInt8 CANMMCAN_RX_Msg_87_Sgn_76;
volatile real_T CANMMCAN_RXCT88;
UInt16 CANMMCAN_RX_Msg_88_Sgn_1;
double CANMMCAN_RX_Msg_88_Sgn_2;
UInt8 CANMMCAN_RX_Msg_88_Sgn_3;
double CANMMCAN_RX_Msg_88_Sgn_4;
UInt8 CANMMCAN_RX_Msg_88_Sgn_5;
double CANMMCAN_RX_Msg_88_Sgn_6;
UInt8 CANMMCAN_RX_Msg_88_Sgn_7;
double CANMMCAN_RX_Msg_88_Sgn_8;
UInt8 CANMMCAN_RX_Msg_88_Sgn_9;
double CANMMCAN_RX_Msg_88_Sgn_10;
UInt8 CANMMCAN_RX_Msg_88_Sgn_11;
double CANMMCAN_RX_Msg_88_Sgn_12;
UInt8 CANMMCAN_RX_Msg_88_Sgn_13;
double CANMMCAN_RX_Msg_88_Sgn_14;
UInt8 CANMMCAN_RX_Msg_88_Sgn_15;
double CANMMCAN_RX_Msg_88_Sgn_16;
UInt8 CANMMCAN_RX_Msg_88_Sgn_17;
double CANMMCAN_RX_Msg_88_Sgn_18;
UInt8 CANMMCAN_RX_Msg_88_Sgn_19;
double CANMMCAN_RX_Msg_88_Sgn_20;
UInt8 CANMMCAN_RX_Msg_88_Sgn_21;
double CANMMCAN_RX_Msg_88_Sgn_22;
UInt8 CANMMCAN_RX_Msg_88_Sgn_23;
double CANMMCAN_RX_Msg_88_Sgn_24;
UInt8 CANMMCAN_RX_Msg_88_Sgn_25;
double CANMMCAN_RX_Msg_88_Sgn_26;
UInt8 CANMMCAN_RX_Msg_88_Sgn_27;
double CANMMCAN_RX_Msg_88_Sgn_28;
UInt8 CANMMCAN_RX_Msg_88_Sgn_29;
double CANMMCAN_RX_Msg_88_Sgn_30;
UInt8 CANMMCAN_RX_Msg_88_Sgn_31;
double CANMMCAN_RX_Msg_88_Sgn_32;
UInt8 CANMMCAN_RX_Msg_88_Sgn_33;
double CANMMCAN_RX_Msg_88_Sgn_34;
UInt8 CANMMCAN_RX_Msg_88_Sgn_35;
double CANMMCAN_RX_Msg_88_Sgn_36;
UInt8 CANMMCAN_RX_Msg_88_Sgn_37;
double CANMMCAN_RX_Msg_88_Sgn_38;
UInt8 CANMMCAN_RX_Msg_88_Sgn_39;
double CANMMCAN_RX_Msg_88_Sgn_40;
UInt8 CANMMCAN_RX_Msg_88_Sgn_41;
UInt8 CANMMCAN_RX_Msg_88_Sgn_42;
double CANMMCAN_RX_Msg_88_Sgn_43;
double CANMMCAN_RX_Msg_88_Sgn_44;
UInt8 CANMMCAN_RX_Msg_88_Sgn_45;
UInt8 CANMMCAN_RX_Msg_88_Sgn_46;
double CANMMCAN_RX_Msg_88_Sgn_47;
double CANMMCAN_RX_Msg_88_Sgn_48;
UInt8 CANMMCAN_RX_Msg_88_Sgn_49;
UInt8 CANMMCAN_RX_Msg_88_Sgn_50;
UInt8 CANMMCAN_RX_Msg_88_Sgn_51;
UInt8 CANMMCAN_RX_Msg_88_Sgn_52;
UInt8 CANMMCAN_RX_Msg_88_Sgn_53;
UInt8 CANMMCAN_RX_Msg_88_Sgn_54;
UInt8 CANMMCAN_RX_Msg_88_Sgn_55;
UInt16 CANMMCAN_RX_Msg_88_Sgn_56;
volatile real_T CANMMCAN_RXCT89;
UInt16 CANMMCAN_RX_Msg_89_Sgn_1;
UInt32 CANMMCAN_RX_Msg_89_Sgn_2;
UInt8 CANMMCAN_RX_Msg_89_Sgn_3;
double CANMMCAN_RX_Msg_89_Sgn_4;
UInt16 CANMMCAN_RX_Msg_89_Sgn_5;
UInt8 CANMMCAN_RX_Msg_89_Sgn_6;
UInt8 CANMMCAN_RX_Msg_89_Sgn_7;
double CANMMCAN_RX_Msg_89_Sgn_8;
UInt16 CANMMCAN_RX_Msg_89_Sgn_9;
UInt8 CANMMCAN_RX_Msg_89_Sgn_10;
UInt8 CANMMCAN_RX_Msg_89_Sgn_11;
double CANMMCAN_RX_Msg_89_Sgn_12;
double CANMMCAN_RX_Msg_89_Sgn_13;
double CANMMCAN_RX_Msg_89_Sgn_14;
double CANMMCAN_RX_Msg_89_Sgn_15;
UInt8 CANMMCAN_RX_Msg_89_Sgn_16;
UInt8 CANMMCAN_RX_Msg_89_Sgn_17;
UInt8 CANMMCAN_RX_Msg_89_Sgn_18;
UInt8 CANMMCAN_RX_Msg_89_Sgn_19;
UInt8 CANMMCAN_RX_Msg_89_Sgn_20;
UInt8 CANMMCAN_RX_Msg_89_Sgn_21;
UInt8 CANMMCAN_RX_Msg_89_Sgn_22;
UInt8 CANMMCAN_RX_Msg_89_Sgn_23;
UInt8 CANMMCAN_RX_Msg_89_Sgn_24;
UInt8 CANMMCAN_RX_Msg_89_Sgn_25;
UInt8 CANMMCAN_RX_Msg_89_Sgn_26;
UInt8 CANMMCAN_RX_Msg_89_Sgn_27;
UInt8 CANMMCAN_RX_Msg_89_Sgn_28;
UInt8 CANMMCAN_RX_Msg_89_Sgn_29;
UInt8 CANMMCAN_RX_Msg_89_Sgn_30;
UInt8 CANMMCAN_RX_Msg_89_Sgn_31;
UInt8 CANMMCAN_RX_Msg_89_Sgn_32;
UInt8 CANMMCAN_RX_Msg_89_Sgn_33;
UInt8 CANMMCAN_RX_Msg_89_Sgn_34;
UInt8 CANMMCAN_RX_Msg_89_Sgn_35;
UInt8 CANMMCAN_RX_Msg_89_Sgn_36;
double CANMMCAN_RX_Msg_89_Sgn_37;
UInt8 CANMMCAN_RX_Msg_89_Sgn_38;
double CANMMCAN_RX_Msg_89_Sgn_39;
UInt8 CANMMCAN_RX_Msg_89_Sgn_40;
double CANMMCAN_RX_Msg_89_Sgn_41;
UInt8 CANMMCAN_RX_Msg_89_Sgn_42;
double CANMMCAN_RX_Msg_89_Sgn_43;
UInt8 CANMMCAN_RX_Msg_89_Sgn_44;
double CANMMCAN_RX_Msg_89_Sgn_45;
UInt8 CANMMCAN_RX_Msg_89_Sgn_46;
double CANMMCAN_RX_Msg_89_Sgn_47;
UInt8 CANMMCAN_RX_Msg_89_Sgn_48;
double CANMMCAN_RX_Msg_89_Sgn_49;
UInt8 CANMMCAN_RX_Msg_89_Sgn_50;
double CANMMCAN_RX_Msg_89_Sgn_51;
UInt8 CANMMCAN_RX_Msg_89_Sgn_52;
double CANMMCAN_RX_Msg_89_Sgn_53;
UInt8 CANMMCAN_RX_Msg_89_Sgn_54;
double CANMMCAN_RX_Msg_89_Sgn_55;
UInt8 CANMMCAN_RX_Msg_89_Sgn_56;
double CANMMCAN_RX_Msg_89_Sgn_57;
UInt8 CANMMCAN_RX_Msg_89_Sgn_58;
double CANMMCAN_RX_Msg_89_Sgn_59;
UInt8 CANMMCAN_RX_Msg_89_Sgn_60;
double CANMMCAN_RX_Msg_89_Sgn_61;
UInt8 CANMMCAN_RX_Msg_89_Sgn_62;
double CANMMCAN_RX_Msg_89_Sgn_63;
UInt8 CANMMCAN_RX_Msg_89_Sgn_64;
double CANMMCAN_RX_Msg_89_Sgn_65;
UInt8 CANMMCAN_RX_Msg_89_Sgn_66;
double CANMMCAN_RX_Msg_89_Sgn_67;
UInt8 CANMMCAN_RX_Msg_89_Sgn_68;
double CANMMCAN_RX_Msg_89_Sgn_69;
UInt8 CANMMCAN_RX_Msg_89_Sgn_70;
double CANMMCAN_RX_Msg_89_Sgn_71;
UInt8 CANMMCAN_RX_Msg_89_Sgn_72;
double CANMMCAN_RX_Msg_89_Sgn_73;
UInt8 CANMMCAN_RX_Msg_89_Sgn_74;
double CANMMCAN_RX_Msg_89_Sgn_75;
UInt8 CANMMCAN_RX_Msg_89_Sgn_76;
volatile real_T CANMMCAN_RXCT90;
UInt16 CANMMCAN_RX_Msg_90_Sgn_1;
double CANMMCAN_RX_Msg_90_Sgn_2;
UInt8 CANMMCAN_RX_Msg_90_Sgn_3;
double CANMMCAN_RX_Msg_90_Sgn_4;
UInt8 CANMMCAN_RX_Msg_90_Sgn_5;
double CANMMCAN_RX_Msg_90_Sgn_6;
UInt8 CANMMCAN_RX_Msg_90_Sgn_7;
double CANMMCAN_RX_Msg_90_Sgn_8;
UInt8 CANMMCAN_RX_Msg_90_Sgn_9;
double CANMMCAN_RX_Msg_90_Sgn_10;
UInt8 CANMMCAN_RX_Msg_90_Sgn_11;
double CANMMCAN_RX_Msg_90_Sgn_12;
UInt8 CANMMCAN_RX_Msg_90_Sgn_13;
double CANMMCAN_RX_Msg_90_Sgn_14;
UInt8 CANMMCAN_RX_Msg_90_Sgn_15;
double CANMMCAN_RX_Msg_90_Sgn_16;
UInt8 CANMMCAN_RX_Msg_90_Sgn_17;
double CANMMCAN_RX_Msg_90_Sgn_18;
UInt8 CANMMCAN_RX_Msg_90_Sgn_19;
double CANMMCAN_RX_Msg_90_Sgn_20;
UInt8 CANMMCAN_RX_Msg_90_Sgn_21;
double CANMMCAN_RX_Msg_90_Sgn_22;
UInt8 CANMMCAN_RX_Msg_90_Sgn_23;
double CANMMCAN_RX_Msg_90_Sgn_24;
UInt8 CANMMCAN_RX_Msg_90_Sgn_25;
double CANMMCAN_RX_Msg_90_Sgn_26;
UInt8 CANMMCAN_RX_Msg_90_Sgn_27;
double CANMMCAN_RX_Msg_90_Sgn_28;
UInt8 CANMMCAN_RX_Msg_90_Sgn_29;
double CANMMCAN_RX_Msg_90_Sgn_30;
UInt8 CANMMCAN_RX_Msg_90_Sgn_31;
double CANMMCAN_RX_Msg_90_Sgn_32;
UInt8 CANMMCAN_RX_Msg_90_Sgn_33;
double CANMMCAN_RX_Msg_90_Sgn_34;
UInt8 CANMMCAN_RX_Msg_90_Sgn_35;
double CANMMCAN_RX_Msg_90_Sgn_36;
UInt8 CANMMCAN_RX_Msg_90_Sgn_37;
double CANMMCAN_RX_Msg_90_Sgn_38;
UInt8 CANMMCAN_RX_Msg_90_Sgn_39;
double CANMMCAN_RX_Msg_90_Sgn_40;
UInt8 CANMMCAN_RX_Msg_90_Sgn_41;
UInt8 CANMMCAN_RX_Msg_90_Sgn_42;
double CANMMCAN_RX_Msg_90_Sgn_43;
double CANMMCAN_RX_Msg_90_Sgn_44;
UInt8 CANMMCAN_RX_Msg_90_Sgn_45;
UInt8 CANMMCAN_RX_Msg_90_Sgn_46;
double CANMMCAN_RX_Msg_90_Sgn_47;
double CANMMCAN_RX_Msg_90_Sgn_48;
UInt8 CANMMCAN_RX_Msg_90_Sgn_49;
UInt8 CANMMCAN_RX_Msg_90_Sgn_50;
UInt8 CANMMCAN_RX_Msg_90_Sgn_51;
UInt8 CANMMCAN_RX_Msg_90_Sgn_52;
UInt8 CANMMCAN_RX_Msg_90_Sgn_53;
UInt8 CANMMCAN_RX_Msg_90_Sgn_54;
UInt8 CANMMCAN_RX_Msg_90_Sgn_55;
UInt16 CANMMCAN_RX_Msg_90_Sgn_56;
volatile real_T CANMMCAN_RXCT91;
UInt16 CANMMCAN_RX_Msg_91_Sgn_1;
UInt32 CANMMCAN_RX_Msg_91_Sgn_2;
UInt8 CANMMCAN_RX_Msg_91_Sgn_3;
double CANMMCAN_RX_Msg_91_Sgn_4;
UInt16 CANMMCAN_RX_Msg_91_Sgn_5;
UInt8 CANMMCAN_RX_Msg_91_Sgn_6;
UInt8 CANMMCAN_RX_Msg_91_Sgn_7;
double CANMMCAN_RX_Msg_91_Sgn_8;
UInt16 CANMMCAN_RX_Msg_91_Sgn_9;
UInt8 CANMMCAN_RX_Msg_91_Sgn_10;
UInt8 CANMMCAN_RX_Msg_91_Sgn_11;
double CANMMCAN_RX_Msg_91_Sgn_12;
double CANMMCAN_RX_Msg_91_Sgn_13;
double CANMMCAN_RX_Msg_91_Sgn_14;
double CANMMCAN_RX_Msg_91_Sgn_15;
UInt8 CANMMCAN_RX_Msg_91_Sgn_16;
UInt8 CANMMCAN_RX_Msg_91_Sgn_17;
UInt8 CANMMCAN_RX_Msg_91_Sgn_18;
UInt8 CANMMCAN_RX_Msg_91_Sgn_19;
UInt8 CANMMCAN_RX_Msg_91_Sgn_20;
UInt8 CANMMCAN_RX_Msg_91_Sgn_21;
UInt8 CANMMCAN_RX_Msg_91_Sgn_22;
UInt8 CANMMCAN_RX_Msg_91_Sgn_23;
UInt8 CANMMCAN_RX_Msg_91_Sgn_24;
UInt8 CANMMCAN_RX_Msg_91_Sgn_25;
UInt8 CANMMCAN_RX_Msg_91_Sgn_26;
UInt8 CANMMCAN_RX_Msg_91_Sgn_27;
UInt8 CANMMCAN_RX_Msg_91_Sgn_28;
UInt8 CANMMCAN_RX_Msg_91_Sgn_29;
UInt8 CANMMCAN_RX_Msg_91_Sgn_30;
UInt8 CANMMCAN_RX_Msg_91_Sgn_31;
UInt8 CANMMCAN_RX_Msg_91_Sgn_32;
UInt8 CANMMCAN_RX_Msg_91_Sgn_33;
UInt8 CANMMCAN_RX_Msg_91_Sgn_34;
UInt8 CANMMCAN_RX_Msg_91_Sgn_35;
UInt8 CANMMCAN_RX_Msg_91_Sgn_36;
double CANMMCAN_RX_Msg_91_Sgn_37;
UInt8 CANMMCAN_RX_Msg_91_Sgn_38;
double CANMMCAN_RX_Msg_91_Sgn_39;
UInt8 CANMMCAN_RX_Msg_91_Sgn_40;
double CANMMCAN_RX_Msg_91_Sgn_41;
UInt8 CANMMCAN_RX_Msg_91_Sgn_42;
double CANMMCAN_RX_Msg_91_Sgn_43;
UInt8 CANMMCAN_RX_Msg_91_Sgn_44;
double CANMMCAN_RX_Msg_91_Sgn_45;
UInt8 CANMMCAN_RX_Msg_91_Sgn_46;
double CANMMCAN_RX_Msg_91_Sgn_47;
UInt8 CANMMCAN_RX_Msg_91_Sgn_48;
double CANMMCAN_RX_Msg_91_Sgn_49;
UInt8 CANMMCAN_RX_Msg_91_Sgn_50;
double CANMMCAN_RX_Msg_91_Sgn_51;
UInt8 CANMMCAN_RX_Msg_91_Sgn_52;
double CANMMCAN_RX_Msg_91_Sgn_53;
UInt8 CANMMCAN_RX_Msg_91_Sgn_54;
double CANMMCAN_RX_Msg_91_Sgn_55;
UInt8 CANMMCAN_RX_Msg_91_Sgn_56;
double CANMMCAN_RX_Msg_91_Sgn_57;
UInt8 CANMMCAN_RX_Msg_91_Sgn_58;
double CANMMCAN_RX_Msg_91_Sgn_59;
UInt8 CANMMCAN_RX_Msg_91_Sgn_60;
double CANMMCAN_RX_Msg_91_Sgn_61;
UInt8 CANMMCAN_RX_Msg_91_Sgn_62;
double CANMMCAN_RX_Msg_91_Sgn_63;
UInt8 CANMMCAN_RX_Msg_91_Sgn_64;
double CANMMCAN_RX_Msg_91_Sgn_65;
UInt8 CANMMCAN_RX_Msg_91_Sgn_66;
double CANMMCAN_RX_Msg_91_Sgn_67;
UInt8 CANMMCAN_RX_Msg_91_Sgn_68;
double CANMMCAN_RX_Msg_91_Sgn_69;
UInt8 CANMMCAN_RX_Msg_91_Sgn_70;
double CANMMCAN_RX_Msg_91_Sgn_71;
UInt8 CANMMCAN_RX_Msg_91_Sgn_72;
double CANMMCAN_RX_Msg_91_Sgn_73;
UInt8 CANMMCAN_RX_Msg_91_Sgn_74;
double CANMMCAN_RX_Msg_91_Sgn_75;
UInt8 CANMMCAN_RX_Msg_91_Sgn_76;
volatile real_T CANMMCAN_RXCT92;
UInt16 CANMMCAN_RX_Msg_92_Sgn_1;
double CANMMCAN_RX_Msg_92_Sgn_2;
UInt8 CANMMCAN_RX_Msg_92_Sgn_3;
double CANMMCAN_RX_Msg_92_Sgn_4;
UInt8 CANMMCAN_RX_Msg_92_Sgn_5;
double CANMMCAN_RX_Msg_92_Sgn_6;
UInt8 CANMMCAN_RX_Msg_92_Sgn_7;
double CANMMCAN_RX_Msg_92_Sgn_8;
UInt8 CANMMCAN_RX_Msg_92_Sgn_9;
double CANMMCAN_RX_Msg_92_Sgn_10;
UInt8 CANMMCAN_RX_Msg_92_Sgn_11;
double CANMMCAN_RX_Msg_92_Sgn_12;
UInt8 CANMMCAN_RX_Msg_92_Sgn_13;
double CANMMCAN_RX_Msg_92_Sgn_14;
UInt8 CANMMCAN_RX_Msg_92_Sgn_15;
double CANMMCAN_RX_Msg_92_Sgn_16;
UInt8 CANMMCAN_RX_Msg_92_Sgn_17;
double CANMMCAN_RX_Msg_92_Sgn_18;
UInt8 CANMMCAN_RX_Msg_92_Sgn_19;
double CANMMCAN_RX_Msg_92_Sgn_20;
UInt8 CANMMCAN_RX_Msg_92_Sgn_21;
double CANMMCAN_RX_Msg_92_Sgn_22;
UInt8 CANMMCAN_RX_Msg_92_Sgn_23;
double CANMMCAN_RX_Msg_92_Sgn_24;
UInt8 CANMMCAN_RX_Msg_92_Sgn_25;
double CANMMCAN_RX_Msg_92_Sgn_26;
UInt8 CANMMCAN_RX_Msg_92_Sgn_27;
double CANMMCAN_RX_Msg_92_Sgn_28;
UInt8 CANMMCAN_RX_Msg_92_Sgn_29;
double CANMMCAN_RX_Msg_92_Sgn_30;
UInt8 CANMMCAN_RX_Msg_92_Sgn_31;
double CANMMCAN_RX_Msg_92_Sgn_32;
UInt8 CANMMCAN_RX_Msg_92_Sgn_33;
double CANMMCAN_RX_Msg_92_Sgn_34;
UInt8 CANMMCAN_RX_Msg_92_Sgn_35;
double CANMMCAN_RX_Msg_92_Sgn_36;
UInt8 CANMMCAN_RX_Msg_92_Sgn_37;
double CANMMCAN_RX_Msg_92_Sgn_38;
UInt8 CANMMCAN_RX_Msg_92_Sgn_39;
double CANMMCAN_RX_Msg_92_Sgn_40;
UInt8 CANMMCAN_RX_Msg_92_Sgn_41;
UInt8 CANMMCAN_RX_Msg_92_Sgn_42;
double CANMMCAN_RX_Msg_92_Sgn_43;
double CANMMCAN_RX_Msg_92_Sgn_44;
UInt8 CANMMCAN_RX_Msg_92_Sgn_45;
UInt8 CANMMCAN_RX_Msg_92_Sgn_46;
double CANMMCAN_RX_Msg_92_Sgn_47;
double CANMMCAN_RX_Msg_92_Sgn_48;
UInt8 CANMMCAN_RX_Msg_92_Sgn_49;
UInt8 CANMMCAN_RX_Msg_92_Sgn_50;
UInt8 CANMMCAN_RX_Msg_92_Sgn_51;
UInt8 CANMMCAN_RX_Msg_92_Sgn_52;
UInt8 CANMMCAN_RX_Msg_92_Sgn_53;
UInt8 CANMMCAN_RX_Msg_92_Sgn_54;
UInt8 CANMMCAN_RX_Msg_92_Sgn_55;
UInt16 CANMMCAN_RX_Msg_92_Sgn_56;
volatile real_T CANMMCAN_RXCT93;
UInt16 CANMMCAN_RX_Msg_93_Sgn_1;
UInt32 CANMMCAN_RX_Msg_93_Sgn_2;
UInt8 CANMMCAN_RX_Msg_93_Sgn_3;
double CANMMCAN_RX_Msg_93_Sgn_4;
UInt16 CANMMCAN_RX_Msg_93_Sgn_5;
UInt8 CANMMCAN_RX_Msg_93_Sgn_6;
UInt8 CANMMCAN_RX_Msg_93_Sgn_7;
double CANMMCAN_RX_Msg_93_Sgn_8;
UInt16 CANMMCAN_RX_Msg_93_Sgn_9;
UInt8 CANMMCAN_RX_Msg_93_Sgn_10;
UInt8 CANMMCAN_RX_Msg_93_Sgn_11;
double CANMMCAN_RX_Msg_93_Sgn_12;
double CANMMCAN_RX_Msg_93_Sgn_13;
double CANMMCAN_RX_Msg_93_Sgn_14;
double CANMMCAN_RX_Msg_93_Sgn_15;
UInt8 CANMMCAN_RX_Msg_93_Sgn_16;
UInt8 CANMMCAN_RX_Msg_93_Sgn_17;
UInt8 CANMMCAN_RX_Msg_93_Sgn_18;
UInt8 CANMMCAN_RX_Msg_93_Sgn_19;
UInt8 CANMMCAN_RX_Msg_93_Sgn_20;
UInt8 CANMMCAN_RX_Msg_93_Sgn_21;
UInt8 CANMMCAN_RX_Msg_93_Sgn_22;
UInt8 CANMMCAN_RX_Msg_93_Sgn_23;
UInt8 CANMMCAN_RX_Msg_93_Sgn_24;
UInt8 CANMMCAN_RX_Msg_93_Sgn_25;
UInt8 CANMMCAN_RX_Msg_93_Sgn_26;
UInt8 CANMMCAN_RX_Msg_93_Sgn_27;
UInt8 CANMMCAN_RX_Msg_93_Sgn_28;
UInt8 CANMMCAN_RX_Msg_93_Sgn_29;
UInt8 CANMMCAN_RX_Msg_93_Sgn_30;
UInt8 CANMMCAN_RX_Msg_93_Sgn_31;
UInt8 CANMMCAN_RX_Msg_93_Sgn_32;
UInt8 CANMMCAN_RX_Msg_93_Sgn_33;
UInt8 CANMMCAN_RX_Msg_93_Sgn_34;
UInt8 CANMMCAN_RX_Msg_93_Sgn_35;
UInt8 CANMMCAN_RX_Msg_93_Sgn_36;
double CANMMCAN_RX_Msg_93_Sgn_37;
UInt8 CANMMCAN_RX_Msg_93_Sgn_38;
double CANMMCAN_RX_Msg_93_Sgn_39;
UInt8 CANMMCAN_RX_Msg_93_Sgn_40;
double CANMMCAN_RX_Msg_93_Sgn_41;
UInt8 CANMMCAN_RX_Msg_93_Sgn_42;
double CANMMCAN_RX_Msg_93_Sgn_43;
UInt8 CANMMCAN_RX_Msg_93_Sgn_44;
double CANMMCAN_RX_Msg_93_Sgn_45;
UInt8 CANMMCAN_RX_Msg_93_Sgn_46;
double CANMMCAN_RX_Msg_93_Sgn_47;
UInt8 CANMMCAN_RX_Msg_93_Sgn_48;
double CANMMCAN_RX_Msg_93_Sgn_49;
UInt8 CANMMCAN_RX_Msg_93_Sgn_50;
double CANMMCAN_RX_Msg_93_Sgn_51;
UInt8 CANMMCAN_RX_Msg_93_Sgn_52;
double CANMMCAN_RX_Msg_93_Sgn_53;
UInt8 CANMMCAN_RX_Msg_93_Sgn_54;
double CANMMCAN_RX_Msg_93_Sgn_55;
UInt8 CANMMCAN_RX_Msg_93_Sgn_56;
double CANMMCAN_RX_Msg_93_Sgn_57;
UInt8 CANMMCAN_RX_Msg_93_Sgn_58;
double CANMMCAN_RX_Msg_93_Sgn_59;
UInt8 CANMMCAN_RX_Msg_93_Sgn_60;
double CANMMCAN_RX_Msg_93_Sgn_61;
UInt8 CANMMCAN_RX_Msg_93_Sgn_62;
double CANMMCAN_RX_Msg_93_Sgn_63;
UInt8 CANMMCAN_RX_Msg_93_Sgn_64;
double CANMMCAN_RX_Msg_93_Sgn_65;
UInt8 CANMMCAN_RX_Msg_93_Sgn_66;
double CANMMCAN_RX_Msg_93_Sgn_67;
UInt8 CANMMCAN_RX_Msg_93_Sgn_68;
double CANMMCAN_RX_Msg_93_Sgn_69;
UInt8 CANMMCAN_RX_Msg_93_Sgn_70;
double CANMMCAN_RX_Msg_93_Sgn_71;
UInt8 CANMMCAN_RX_Msg_93_Sgn_72;
double CANMMCAN_RX_Msg_93_Sgn_73;
UInt8 CANMMCAN_RX_Msg_93_Sgn_74;
double CANMMCAN_RX_Msg_93_Sgn_75;
UInt8 CANMMCAN_RX_Msg_93_Sgn_76;
volatile real_T CANMMCAN_RXCT94;
UInt16 CANMMCAN_RX_Msg_94_Sgn_1;
double CANMMCAN_RX_Msg_94_Sgn_2;
UInt8 CANMMCAN_RX_Msg_94_Sgn_3;
double CANMMCAN_RX_Msg_94_Sgn_4;
UInt8 CANMMCAN_RX_Msg_94_Sgn_5;
double CANMMCAN_RX_Msg_94_Sgn_6;
UInt8 CANMMCAN_RX_Msg_94_Sgn_7;
double CANMMCAN_RX_Msg_94_Sgn_8;
UInt8 CANMMCAN_RX_Msg_94_Sgn_9;
double CANMMCAN_RX_Msg_94_Sgn_10;
UInt8 CANMMCAN_RX_Msg_94_Sgn_11;
double CANMMCAN_RX_Msg_94_Sgn_12;
UInt8 CANMMCAN_RX_Msg_94_Sgn_13;
double CANMMCAN_RX_Msg_94_Sgn_14;
UInt8 CANMMCAN_RX_Msg_94_Sgn_15;
double CANMMCAN_RX_Msg_94_Sgn_16;
UInt8 CANMMCAN_RX_Msg_94_Sgn_17;
double CANMMCAN_RX_Msg_94_Sgn_18;
UInt8 CANMMCAN_RX_Msg_94_Sgn_19;
double CANMMCAN_RX_Msg_94_Sgn_20;
UInt8 CANMMCAN_RX_Msg_94_Sgn_21;
double CANMMCAN_RX_Msg_94_Sgn_22;
UInt8 CANMMCAN_RX_Msg_94_Sgn_23;
double CANMMCAN_RX_Msg_94_Sgn_24;
UInt8 CANMMCAN_RX_Msg_94_Sgn_25;
double CANMMCAN_RX_Msg_94_Sgn_26;
UInt8 CANMMCAN_RX_Msg_94_Sgn_27;
double CANMMCAN_RX_Msg_94_Sgn_28;
UInt8 CANMMCAN_RX_Msg_94_Sgn_29;
double CANMMCAN_RX_Msg_94_Sgn_30;
UInt8 CANMMCAN_RX_Msg_94_Sgn_31;
double CANMMCAN_RX_Msg_94_Sgn_32;
UInt8 CANMMCAN_RX_Msg_94_Sgn_33;
double CANMMCAN_RX_Msg_94_Sgn_34;
UInt8 CANMMCAN_RX_Msg_94_Sgn_35;
double CANMMCAN_RX_Msg_94_Sgn_36;
UInt8 CANMMCAN_RX_Msg_94_Sgn_37;
double CANMMCAN_RX_Msg_94_Sgn_38;
UInt8 CANMMCAN_RX_Msg_94_Sgn_39;
double CANMMCAN_RX_Msg_94_Sgn_40;
UInt8 CANMMCAN_RX_Msg_94_Sgn_41;
UInt8 CANMMCAN_RX_Msg_94_Sgn_42;
double CANMMCAN_RX_Msg_94_Sgn_43;
double CANMMCAN_RX_Msg_94_Sgn_44;
UInt8 CANMMCAN_RX_Msg_94_Sgn_45;
UInt8 CANMMCAN_RX_Msg_94_Sgn_46;
double CANMMCAN_RX_Msg_94_Sgn_47;
double CANMMCAN_RX_Msg_94_Sgn_48;
UInt8 CANMMCAN_RX_Msg_94_Sgn_49;
UInt8 CANMMCAN_RX_Msg_94_Sgn_50;
UInt8 CANMMCAN_RX_Msg_94_Sgn_51;
UInt8 CANMMCAN_RX_Msg_94_Sgn_52;
UInt8 CANMMCAN_RX_Msg_94_Sgn_53;
UInt8 CANMMCAN_RX_Msg_94_Sgn_54;
UInt8 CANMMCAN_RX_Msg_94_Sgn_55;
UInt16 CANMMCAN_RX_Msg_94_Sgn_56;
volatile real_T CANMMCAN_RXCT95;
UInt16 CANMMCAN_RX_Msg_95_Sgn_1;
UInt32 CANMMCAN_RX_Msg_95_Sgn_2;
UInt8 CANMMCAN_RX_Msg_95_Sgn_3;
double CANMMCAN_RX_Msg_95_Sgn_4;
UInt16 CANMMCAN_RX_Msg_95_Sgn_5;
UInt8 CANMMCAN_RX_Msg_95_Sgn_6;
UInt8 CANMMCAN_RX_Msg_95_Sgn_7;
double CANMMCAN_RX_Msg_95_Sgn_8;
UInt16 CANMMCAN_RX_Msg_95_Sgn_9;
UInt8 CANMMCAN_RX_Msg_95_Sgn_10;
UInt8 CANMMCAN_RX_Msg_95_Sgn_11;
double CANMMCAN_RX_Msg_95_Sgn_12;
double CANMMCAN_RX_Msg_95_Sgn_13;
double CANMMCAN_RX_Msg_95_Sgn_14;
double CANMMCAN_RX_Msg_95_Sgn_15;
UInt8 CANMMCAN_RX_Msg_95_Sgn_16;
UInt8 CANMMCAN_RX_Msg_95_Sgn_17;
UInt8 CANMMCAN_RX_Msg_95_Sgn_18;
UInt8 CANMMCAN_RX_Msg_95_Sgn_19;
UInt8 CANMMCAN_RX_Msg_95_Sgn_20;
UInt8 CANMMCAN_RX_Msg_95_Sgn_21;
UInt8 CANMMCAN_RX_Msg_95_Sgn_22;
UInt8 CANMMCAN_RX_Msg_95_Sgn_23;
UInt8 CANMMCAN_RX_Msg_95_Sgn_24;
UInt8 CANMMCAN_RX_Msg_95_Sgn_25;
UInt8 CANMMCAN_RX_Msg_95_Sgn_26;
UInt8 CANMMCAN_RX_Msg_95_Sgn_27;
UInt8 CANMMCAN_RX_Msg_95_Sgn_28;
UInt8 CANMMCAN_RX_Msg_95_Sgn_29;
UInt8 CANMMCAN_RX_Msg_95_Sgn_30;
UInt8 CANMMCAN_RX_Msg_95_Sgn_31;
UInt8 CANMMCAN_RX_Msg_95_Sgn_32;
UInt8 CANMMCAN_RX_Msg_95_Sgn_33;
UInt8 CANMMCAN_RX_Msg_95_Sgn_34;
UInt8 CANMMCAN_RX_Msg_95_Sgn_35;
UInt8 CANMMCAN_RX_Msg_95_Sgn_36;
double CANMMCAN_RX_Msg_95_Sgn_37;
UInt8 CANMMCAN_RX_Msg_95_Sgn_38;
double CANMMCAN_RX_Msg_95_Sgn_39;
UInt8 CANMMCAN_RX_Msg_95_Sgn_40;
double CANMMCAN_RX_Msg_95_Sgn_41;
UInt8 CANMMCAN_RX_Msg_95_Sgn_42;
double CANMMCAN_RX_Msg_95_Sgn_43;
UInt8 CANMMCAN_RX_Msg_95_Sgn_44;
double CANMMCAN_RX_Msg_95_Sgn_45;
UInt8 CANMMCAN_RX_Msg_95_Sgn_46;
double CANMMCAN_RX_Msg_95_Sgn_47;
UInt8 CANMMCAN_RX_Msg_95_Sgn_48;
double CANMMCAN_RX_Msg_95_Sgn_49;
UInt8 CANMMCAN_RX_Msg_95_Sgn_50;
double CANMMCAN_RX_Msg_95_Sgn_51;
UInt8 CANMMCAN_RX_Msg_95_Sgn_52;
double CANMMCAN_RX_Msg_95_Sgn_53;
UInt8 CANMMCAN_RX_Msg_95_Sgn_54;
double CANMMCAN_RX_Msg_95_Sgn_55;
UInt8 CANMMCAN_RX_Msg_95_Sgn_56;
double CANMMCAN_RX_Msg_95_Sgn_57;
UInt8 CANMMCAN_RX_Msg_95_Sgn_58;
double CANMMCAN_RX_Msg_95_Sgn_59;
UInt8 CANMMCAN_RX_Msg_95_Sgn_60;
double CANMMCAN_RX_Msg_95_Sgn_61;
UInt8 CANMMCAN_RX_Msg_95_Sgn_62;
double CANMMCAN_RX_Msg_95_Sgn_63;
UInt8 CANMMCAN_RX_Msg_95_Sgn_64;
double CANMMCAN_RX_Msg_95_Sgn_65;
UInt8 CANMMCAN_RX_Msg_95_Sgn_66;
double CANMMCAN_RX_Msg_95_Sgn_67;
UInt8 CANMMCAN_RX_Msg_95_Sgn_68;
double CANMMCAN_RX_Msg_95_Sgn_69;
UInt8 CANMMCAN_RX_Msg_95_Sgn_70;
double CANMMCAN_RX_Msg_95_Sgn_71;
UInt8 CANMMCAN_RX_Msg_95_Sgn_72;
double CANMMCAN_RX_Msg_95_Sgn_73;
UInt8 CANMMCAN_RX_Msg_95_Sgn_74;
double CANMMCAN_RX_Msg_95_Sgn_75;
UInt8 CANMMCAN_RX_Msg_95_Sgn_76;
volatile real_T CANMMCAN_RXCT96;
UInt16 CANMMCAN_RX_Msg_96_Sgn_1;
double CANMMCAN_RX_Msg_96_Sgn_2;
UInt8 CANMMCAN_RX_Msg_96_Sgn_3;
double CANMMCAN_RX_Msg_96_Sgn_4;
UInt8 CANMMCAN_RX_Msg_96_Sgn_5;
double CANMMCAN_RX_Msg_96_Sgn_6;
UInt8 CANMMCAN_RX_Msg_96_Sgn_7;
double CANMMCAN_RX_Msg_96_Sgn_8;
UInt8 CANMMCAN_RX_Msg_96_Sgn_9;
double CANMMCAN_RX_Msg_96_Sgn_10;
UInt8 CANMMCAN_RX_Msg_96_Sgn_11;
double CANMMCAN_RX_Msg_96_Sgn_12;
UInt8 CANMMCAN_RX_Msg_96_Sgn_13;
double CANMMCAN_RX_Msg_96_Sgn_14;
UInt8 CANMMCAN_RX_Msg_96_Sgn_15;
double CANMMCAN_RX_Msg_96_Sgn_16;
UInt8 CANMMCAN_RX_Msg_96_Sgn_17;
double CANMMCAN_RX_Msg_96_Sgn_18;
UInt8 CANMMCAN_RX_Msg_96_Sgn_19;
double CANMMCAN_RX_Msg_96_Sgn_20;
UInt8 CANMMCAN_RX_Msg_96_Sgn_21;
double CANMMCAN_RX_Msg_96_Sgn_22;
UInt8 CANMMCAN_RX_Msg_96_Sgn_23;
double CANMMCAN_RX_Msg_96_Sgn_24;
UInt8 CANMMCAN_RX_Msg_96_Sgn_25;
double CANMMCAN_RX_Msg_96_Sgn_26;
UInt8 CANMMCAN_RX_Msg_96_Sgn_27;
double CANMMCAN_RX_Msg_96_Sgn_28;
UInt8 CANMMCAN_RX_Msg_96_Sgn_29;
double CANMMCAN_RX_Msg_96_Sgn_30;
UInt8 CANMMCAN_RX_Msg_96_Sgn_31;
double CANMMCAN_RX_Msg_96_Sgn_32;
UInt8 CANMMCAN_RX_Msg_96_Sgn_33;
double CANMMCAN_RX_Msg_96_Sgn_34;
UInt8 CANMMCAN_RX_Msg_96_Sgn_35;
double CANMMCAN_RX_Msg_96_Sgn_36;
UInt8 CANMMCAN_RX_Msg_96_Sgn_37;
double CANMMCAN_RX_Msg_96_Sgn_38;
UInt8 CANMMCAN_RX_Msg_96_Sgn_39;
double CANMMCAN_RX_Msg_96_Sgn_40;
UInt8 CANMMCAN_RX_Msg_96_Sgn_41;
UInt8 CANMMCAN_RX_Msg_96_Sgn_42;
double CANMMCAN_RX_Msg_96_Sgn_43;
double CANMMCAN_RX_Msg_96_Sgn_44;
UInt8 CANMMCAN_RX_Msg_96_Sgn_45;
UInt8 CANMMCAN_RX_Msg_96_Sgn_46;
double CANMMCAN_RX_Msg_96_Sgn_47;
double CANMMCAN_RX_Msg_96_Sgn_48;
UInt8 CANMMCAN_RX_Msg_96_Sgn_49;
UInt8 CANMMCAN_RX_Msg_96_Sgn_50;
UInt8 CANMMCAN_RX_Msg_96_Sgn_51;
UInt8 CANMMCAN_RX_Msg_96_Sgn_52;
UInt8 CANMMCAN_RX_Msg_96_Sgn_53;
UInt8 CANMMCAN_RX_Msg_96_Sgn_54;
UInt8 CANMMCAN_RX_Msg_96_Sgn_55;
UInt16 CANMMCAN_RX_Msg_96_Sgn_56;
volatile real_T CANMMCAN_RXCT97;
UInt16 CANMMCAN_RX_Msg_97_Sgn_1;
UInt8 CANMMCAN_RX_Msg_97_Sgn_2;
UInt32 CANMMCAN_RX_Msg_97_Sgn_3;
UInt8 CANMMCAN_RX_Msg_97_Sgn_4;
UInt8 CANMMCAN_RX_Msg_97_Sgn_5;
UInt8 CANMMCAN_RX_Msg_97_Sgn_6;
UInt8 CANMMCAN_RX_Msg_97_Sgn_7;
UInt8 CANMMCAN_RX_Msg_97_Sgn_8;
UInt8 CANMMCAN_RX_Msg_97_Sgn_9;
UInt8 CANMMCAN_RX_Msg_97_Sgn_10;
UInt8 CANMMCAN_RX_Msg_97_Sgn_11;
UInt8 CANMMCAN_RX_Msg_97_Sgn_12;
UInt8 CANMMCAN_RX_Msg_97_Sgn_13;
UInt8 CANMMCAN_RX_Msg_97_Sgn_14;
UInt8 CANMMCAN_RX_Msg_97_Sgn_15;
UInt8 CANMMCAN_RX_Msg_97_Sgn_16;
UInt32 CANMMCAN_RX_Msg_97_Sgn_17;






