#include "COORDINATETRANSFORMATION.h"
#include<math.h>
COORDINATETRANSFORMATION::COORDINATETRANSFORMATION() :
	m_vehMovement_st(),
    m_yaw(),
    m_firstPPos(NULL_UN8),
    m_lastPPos(NULL_UN8),
    m_cycleCounter(NULL_UN16)
{

}

void COORDINATETRANSFORMATION::Calc_V(VEHSTATE_ST& t_vehState)
{
    VehMovCalc(t_vehState);
}

void COORDINATETRANSFORMATION::Init()
{
    m_vehMovement_st.deltaDx = NULL_F;
    m_vehMovement_st.deltaDy = NULL_F;
    m_vehMovement_st.deltaDyaw = NULL_F;
}

void COORDINATETRANSFORMATION::VehMovCalc(VEHSTATE_ST& t_vehState_st)
{
    float t_vEgo_f;
    float t_tDtCycle_f;
    float t_psiDt_f;
    float t_kapCurvTraj_f;
    float t_psi_f;
    float t_SinOfPsi_f;
    float t_CosOfPsi_f;
    float t_dDeltaX_f;
    float t_dDeltaY_f;
    float t_dEgoCurveRadius_f;
    float t_dDeltaXTemp_f;
    float t_SinOf05Psi_f;
    float t_dDeltaYTemp_f;
    float t_SlipAngleRearAxle_f;

    /* calc ego motion */
    t_vEgo_f = t_vehState_st.vRef;
    t_tDtCycle_f = GetCycleTime_s();
    t_psiDt_f = t_vehState_st.YrsF;
    t_kapCurvTraj_f = t_vehState_st.Curvature;

    if (t_kapCurvTraj_f < 1/3000)
    {
        t_psi_f = 0.0f;
        t_SinOfPsi_f = sinf(t_psi_f);
        t_CosOfPsi_f = cosf(t_psi_f);

        t_dDeltaX_f = (t_vEgo_f * t_tDtCycle_f) * t_CosOfPsi_f;
        t_dDeltaY_f = (t_vEgo_f * t_tDtCycle_f) * t_SinOfPsi_f;
    }
    else
    {
        
        if ((fabsf(t_kapCurvTraj_f) > 1/20 )//min radius
            && (fabsf(t_vEgo_f) > 1.0))
        {
            float t_kapCurvTrajFromPsiDt_f;

            t_kapCurvTrajFromPsiDt_f = t_psiDt_f / t_vEgo_f;

            if (fabsf(t_kapCurvTrajFromPsiDt_f) > fabsf(t_kapCurvTraj_f))
            {
                t_kapCurvTraj_f = t_kapCurvTrajFromPsiDt_f;
            }
        }

        t_dEgoCurveRadius_f = (1.0f / t_kapCurvTraj_f);
        t_psi_f = (t_kapCurvTraj_f * t_vEgo_f) * t_tDtCycle_f;

        t_SinOfPsi_f = sinf(t_psi_f);
        t_CosOfPsi_f = cosf(t_psi_f);

        t_dDeltaXTemp_f = t_dEgoCurveRadius_f * t_SinOfPsi_f;
        /* numerical more robust version: */
        t_SinOf05Psi_f = sinf(t_psi_f / 2.0f);
        t_dDeltaYTemp_f = t_dEgoCurveRadius_f * (2 * (t_SinOf05Psi_f * t_SinOf05Psi_f));

        t_SlipAngleRearAxle_f = 0;//TODO

        // regard slip angle for calculation of ego postion
        t_dDeltaX_f = (cosf(t_SlipAngleRearAxle_f) * t_dDeltaXTemp_f) - (sinf(t_SlipAngleRearAxle_f) * t_dDeltaYTemp_f);
        t_dDeltaY_f = (sinf(t_SlipAngleRearAxle_f) * t_dDeltaXTemp_f) + (cosf(t_SlipAngleRearAxle_f) * t_dDeltaYTemp_f);

    }

    // record yaw
    
    if (((uint16_t)0) == (m_cycleCounter % (STORE1TIME10CYCLETIME)))
    {
        if (m_firstPPos == m_lastPPos)
        {
            m_firstPPos = 0;
            m_yaw[m_lastPPos] = t_psi_f;
            m_lastPPos = 1;
        }
        else if((m_lastPPos == YAWBUFFER-1)&&(m_firstPPos == 0))
        { 
            ++m_firstPPos;
            m_lastPPos = 0;
            m_yaw[m_lastPPos] = t_psi_f;
        }
        else if ((m_firstPPos == YAWBUFFER - 1)&&(m_firstPPos == m_lastPPos + 1))
        {
            m_firstPPos = 0;
            m_lastPPos++;
            m_yaw[m_lastPPos] = t_psi_f;
        }
        else
        {
            m_firstPPos = 0;
            m_yaw[m_firstPPos] = t_psi_f;
            m_lastPPos = 1;
        }
    }

    if (m_cycleCounter >= 65500)
    {
        m_cycleCounter = 0;
    }
    else
    {
        m_cycleCounter++;
    }
    m_vehMovement_st.deltaDx = t_dDeltaX_f;
    m_vehMovement_st.deltaDy = t_dDeltaY_f;
    m_vehMovement_st.deltaDyaw = t_psi_f;
}

void COORDINATETRANSFORMATION::CoorTransmAsEgoMov(float &t_dx, float &t_dy)
{
    float t_dX_f;
    float t_dY_f;

    t_dX_f = t_dx - m_vehMovement_st.deltaDx;
    t_dY_f = t_dy - m_vehMovement_st.deltaDy;
    t_dx = t_dX_f * cosf(m_vehMovement_st.deltaDyaw) + t_dY_f * sinf(m_vehMovement_st.deltaDyaw);
    t_dy = -t_dX_f * sinf(m_vehMovement_st.deltaDyaw) + t_dY_f * cosf(m_vehMovement_st.deltaDyaw);   
}
