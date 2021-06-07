#include "VehicleMovement.h"

VehicleMovement::VehicleMovement() :
    m_vehMovement_st(),
    m_yaw_st(),
    m_yawRate_st(),
    m_vRef_st(),
    m_aRef_st(),
    m_curvature_st(),
    m_cycleCounter(NULL_UN16),
    m_CycleCountEach50ms(NULL_UN8)
{

}

void VehicleMovement::Init()
{
    for (uint8_t t_i = 0; t_i < VEHMOVBUFFER; t_i++)
    {
        m_yaw_st.m_value[t_i] = NULL_F;
        m_yawRate_st.m_value[t_i] = NULL_F;
        m_vRef_st.m_value[t_i] = NULL_F;
        m_curvature_st.m_value[t_i] = NULL_F;
        m_aRef_st.m_value[t_i] = NULL_F;
    }
    m_yaw_st.m_count = NULL_UN8;
    m_yaw_st.m_firstIndex = NULL_UN8;
    m_yaw_st.m_lastIndex = NULL_UN8;

    m_yawRate_st.m_count = NULL_UN8;
    m_yawRate_st.m_firstIndex = NULL_UN8;
    m_yawRate_st.m_lastIndex = NULL_UN8;

    m_vRef_st.m_count = NULL_UN8;
    m_vRef_st.m_firstIndex = NULL_UN8;
    m_vRef_st.m_lastIndex = NULL_UN8;

    m_aRef_st.m_count = NULL_UN8;
    m_aRef_st.m_firstIndex = NULL_UN8;
    m_aRef_st.m_lastIndex = NULL_UN8;

    m_curvature_st.m_count = NULL_UN8;
    m_curvature_st.m_firstIndex = NULL_UN8;
    m_curvature_st.m_lastIndex = NULL_UN8;

    m_vehMovement_st.deltaDx = NULL_F;
    m_vehMovement_st.deltaDy = NULL_F;
    m_vehMovement_st.deltaDyaw = NULL_F;
    m_cycleCounter = NULL_UN16;
    m_CycleCountEach50ms = (uint8_t)(0.05 / GetCycleTime_s());

}

void VehicleMovement::Calc_V(VEHSTATE_ST& t_vehState_st)
{
    VehMovCalc(t_vehState_st);
    VehTraCalc(t_vehState_st);
}
void VehicleMovement::VehMovCalc(VEHSTATE_ST& t_vehState_st)
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
    if (fabsf(t_kapCurvTraj_f) < 1.0 / 3000.0)
    {
        t_psi_f = 0.0f;
        t_SinOfPsi_f = sinf(t_psi_f);
        t_CosOfPsi_f = cosf(t_psi_f);

        t_dDeltaX_f = (t_vEgo_f * t_tDtCycle_f) * t_CosOfPsi_f;
        t_dDeltaY_f = (t_vEgo_f * t_tDtCycle_f) * t_SinOfPsi_f;
    }
    else
    {

        if ((fabsf(t_kapCurvTraj_f) > 1 / 20)//min radius
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

    m_vehMovement_st.deltaDx = t_dDeltaX_f;
    m_vehMovement_st.deltaDy = t_dDeltaY_f;
    m_vehMovement_st.deltaDyaw = t_psi_f;
}
void VehicleMovement::VehTraCalc(VEHSTATE_ST& t_vehState_st)
{
    // yaw
    if (((uint16_t)0) == (m_cycleCounter % (m_CycleCountEach50ms)))
    {
        
        if ((m_yaw_st.m_firstIndex == 0) && (m_yaw_st.m_lastIndex == VEHMOVBUFFER - 1))
        {
            --(m_yaw_st.m_lastIndex);
            m_yaw_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_yaw_st.m_value[m_yaw_st.m_firstIndex] = m_vehMovement_st.deltaDyaw* m_CycleCountEach50ms;
        }
        else if ((m_yaw_st.m_lastIndex == 0)&&(1 == m_yaw_st.m_firstIndex ))
        {
            m_yaw_st.m_lastIndex = VEHMOVBUFFER - 1;
            m_yaw_st.m_firstIndex = 0;
            m_yaw_st.m_value[m_yaw_st.m_firstIndex] = m_vehMovement_st.deltaDyaw * m_CycleCountEach50ms;
        }
        else if (0 == m_yaw_st.m_count)
        {
            m_yaw_st.m_lastIndex = 0;
            m_yaw_st.m_value[m_yaw_st.m_lastIndex] = m_vehMovement_st.deltaDyaw * m_CycleCountEach50ms;
            m_yaw_st.m_firstIndex = 0;
        }
        else if (1 == m_yaw_st.m_count)
        {
            m_yaw_st.m_lastIndex = 0;
            m_yaw_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_yaw_st.m_value[m_yaw_st.m_firstIndex] = m_vehMovement_st.deltaDyaw * m_CycleCountEach50ms;
            
        }
        else if (VEHMOVBUFFER == m_yaw_st.m_count)
        {
            --m_yaw_st.m_lastIndex;
            --m_yaw_st.m_firstIndex;
            m_yaw_st.m_value[m_yaw_st.m_firstIndex] = m_vehMovement_st.deltaDyaw * m_CycleCountEach50ms;
        }
        else
        {
            m_yaw_st.m_lastIndex;
            --m_yaw_st.m_firstIndex;
            m_yaw_st.m_value[m_yaw_st.m_firstIndex] = m_vehMovement_st.deltaDyaw * m_CycleCountEach50ms;
        }
        if (VEHMOVBUFFER == m_yaw_st.m_count)
        {
            //keeping
        }
        else
        {
            m_yaw_st.m_count++;
        }
        
    }
    //yaw rate
    if (((uint16_t)0) == (m_cycleCounter % (m_CycleCountEach50ms)))
    {

        if ((m_yawRate_st.m_firstIndex == 0) && (m_yawRate_st.m_lastIndex == VEHMOVBUFFER - 1))
        {
            --(m_yawRate_st.m_lastIndex);
            m_yawRate_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_yawRate_st.m_value[m_yawRate_st.m_firstIndex] = t_vehState_st.YrsF;
        }
        else if ((m_yawRate_st.m_lastIndex == 0) && (1 == m_yawRate_st.m_firstIndex))
        {
            m_yawRate_st.m_lastIndex = VEHMOVBUFFER - 1;
            m_yawRate_st.m_firstIndex = 0;
            m_yawRate_st.m_value[m_yawRate_st.m_firstIndex] = t_vehState_st.YrsF;
        }
        else if (0 == m_yawRate_st.m_count)
        {
            m_yawRate_st.m_lastIndex = 0;
            m_yawRate_st.m_value[m_yawRate_st.m_lastIndex] = t_vehState_st.YrsF;
            m_yawRate_st.m_firstIndex = 0;
        }
        else if (1 == m_yawRate_st.m_count)
        {
            m_yawRate_st.m_lastIndex = 0;
            m_yawRate_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_yawRate_st.m_value[m_yawRate_st.m_firstIndex] = t_vehState_st.YrsF;

        }
        else if (VEHMOVBUFFER == m_yawRate_st.m_count)
        {
            --m_yawRate_st.m_lastIndex;
            --m_yawRate_st.m_firstIndex;
            m_yawRate_st.m_value[m_yawRate_st.m_firstIndex] = t_vehState_st.YrsF;
        }
        else
        {
            m_yawRate_st.m_lastIndex;
            --m_yawRate_st.m_firstIndex;
            m_yawRate_st.m_value[m_yawRate_st.m_firstIndex] = t_vehState_st.YrsF;
        }
        if (VEHMOVBUFFER == m_yawRate_st.m_count)
        {
            //keeping
        }
        else
        {
            m_yawRate_st.m_count++;
        }

    }

    //vx
    if (((uint16_t)0) == (m_cycleCounter % (m_CycleCountEach50ms)))
    {

        if ((m_vRef_st.m_firstIndex == 0) && (m_vRef_st.m_lastIndex == VEHMOVBUFFER - 1))
        {
            --(m_vRef_st.m_lastIndex);
            m_vRef_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_vRef_st.m_value[m_vRef_st.m_firstIndex] = t_vehState_st.vRef;
        }
        else if ((m_vRef_st.m_lastIndex == 0) && (1 == m_vRef_st.m_firstIndex))
        {
            m_vRef_st.m_lastIndex = VEHMOVBUFFER - 1;
            m_vRef_st.m_firstIndex = 0;
            m_vRef_st.m_value[m_vRef_st.m_firstIndex] = t_vehState_st.vRef;
        }
        else if (0 == m_vRef_st.m_count)
        {
            m_vRef_st.m_lastIndex = 0;
            m_vRef_st.m_value[m_vRef_st.m_lastIndex] = t_vehState_st.vRef;
            m_vRef_st.m_firstIndex = 0;
        }
        else if (1 == m_vRef_st.m_count)
        {
            m_vRef_st.m_lastIndex = 0;
            m_vRef_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_vRef_st.m_value[m_vRef_st.m_firstIndex] = t_vehState_st.vRef;

        }
        else if (VEHMOVBUFFER == m_vRef_st.m_count)
        {
            --m_vRef_st.m_lastIndex;
            --m_vRef_st.m_firstIndex;
            m_vRef_st.m_value[m_vRef_st.m_firstIndex] = t_vehState_st.vRef;
        }
        else
        {
            m_vRef_st.m_lastIndex;
            --m_vRef_st.m_firstIndex;
            m_vRef_st.m_value[m_vRef_st.m_firstIndex] = t_vehState_st.vRef;
        }
        if (VEHMOVBUFFER == m_vRef_st.m_count)
        {
            //keeping
        }
        else
        {
            m_vRef_st.m_count++;
        }

    }

    //ax
    if (((uint16_t)0) == (m_cycleCounter % (m_CycleCountEach50ms)))
    {

        if ((m_aRef_st.m_firstIndex == 0) && (m_aRef_st.m_lastIndex == VEHMOVBUFFER - 1))
        {
            --(m_aRef_st.m_lastIndex);
            m_aRef_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_aRef_st.m_value[m_aRef_st.m_firstIndex] = t_vehState_st.aRef;
        }
        else if ((m_aRef_st.m_lastIndex == 0) && (1 == m_aRef_st.m_firstIndex))
        {
            m_aRef_st.m_lastIndex = VEHMOVBUFFER - 1;
            m_aRef_st.m_firstIndex = 0;
            m_aRef_st.m_value[m_aRef_st.m_firstIndex] = t_vehState_st.aRef;
        }
        else if (0 == m_aRef_st.m_count)
        {
            m_aRef_st.m_lastIndex = 0;
            m_aRef_st.m_value[m_aRef_st.m_lastIndex] = t_vehState_st.aRef;
            m_aRef_st.m_firstIndex = 0;
        }
        else if (1 == m_aRef_st.m_count)
        {
            m_aRef_st.m_lastIndex = 0;
            m_aRef_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_aRef_st.m_value[m_aRef_st.m_firstIndex] = t_vehState_st.aRef;

        }
        else if (VEHMOVBUFFER == m_aRef_st.m_count)
        {
            --m_aRef_st.m_lastIndex;
            --m_aRef_st.m_firstIndex;
            m_aRef_st.m_value[m_aRef_st.m_firstIndex] = t_vehState_st.aRef;
        }
        else
        {
            m_aRef_st.m_lastIndex;
            --m_aRef_st.m_firstIndex;
            m_aRef_st.m_value[m_aRef_st.m_firstIndex] = t_vehState_st.aRef;
        }
        if (VEHMOVBUFFER == m_aRef_st.m_count)
        {
            //keeping
        }
        else
        {
            m_aRef_st.m_count++;
        }

    }

    //curvature
    if (((uint16_t)0) == (m_cycleCounter % (m_CycleCountEach50ms)))
    {

        if ((m_curvature_st.m_firstIndex == 0) && (m_curvature_st.m_lastIndex == VEHMOVBUFFER - 1))
        {
            --(m_curvature_st.m_lastIndex);
            m_curvature_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_curvature_st.m_value[m_curvature_st.m_firstIndex] = t_vehState_st.Curvature;
        }
        else if ((m_curvature_st.m_lastIndex == 0) && (1 == m_curvature_st.m_firstIndex))
        {
            m_curvature_st.m_lastIndex = VEHMOVBUFFER - 1;
            m_curvature_st.m_firstIndex = 0;
            m_curvature_st.m_value[m_curvature_st.m_firstIndex] = t_vehState_st.Curvature;
        }
        else if (0 == m_curvature_st.m_count)
        {
            m_curvature_st.m_lastIndex = 0;
            m_curvature_st.m_value[m_curvature_st.m_lastIndex] = t_vehState_st.Curvature;
            m_curvature_st.m_firstIndex = 0;
        }
        else if (1 == m_curvature_st.m_count)
        {
            m_curvature_st.m_lastIndex = 0;
            m_curvature_st.m_firstIndex = VEHMOVBUFFER - 1;
            m_curvature_st.m_value[m_curvature_st.m_firstIndex] = t_vehState_st.Curvature;

        }
        else if (VEHMOVBUFFER == m_curvature_st.m_count)
        {
            --m_curvature_st.m_lastIndex;
            --m_curvature_st.m_firstIndex;
            m_curvature_st.m_value[m_curvature_st.m_firstIndex] = t_vehState_st.Curvature;
        }
        else
        {
            m_curvature_st.m_lastIndex;
            --m_curvature_st.m_firstIndex;
            m_curvature_st.m_value[m_curvature_st.m_firstIndex] = t_vehState_st.Curvature;
        }
        if (VEHMOVBUFFER == m_curvature_st.m_count)
        {
            //keeping
        }
        else
        {
            m_curvature_st.m_count++;
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

}
