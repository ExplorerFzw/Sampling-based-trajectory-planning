function [AngleOutput] = FrontAxleAngleSteeringWheelAngleTransCal(nSteeringDirection, nRunningDirection, fRequestAngle, nRequestType)
%UNTITLED 此处显示有关此函数的摘要
%   此处显示详细说明
%   nRequestType: 0 -> steering angle to front axle center angle
global EPS_SteeringAngleRatio;

fAngle = 0;
AngleOutput = 0;
IndexAngle = 0;
RatioType = 0;

TempAngle1 = 0;
TempRatio1 = 0;
TempAngle2 = 0;
TempRatio2 = 0;
k_RatioAngle = 0;

fAngle = abs(fRequestAngle);

if (1 == nSteeringDirection)
    if (1 == nRunningDirection)
        RatioType = 2;
    else
        RatioType = 3;
    end
else
    if (1 == nRunningDirection)
        RatioType = 4;
    else
        RatioType = 5;
    end
end

if (0 == nRequestType)
    for i=1:1:12
        if(fAngle <= EPS_SteeringAngleRatio(i,1))
            IndexAngle = i;
            break;
        end
    end
    
    if(0 == IndexAngle)
        IndexAngle = 12;
    end
    
else
    for i=1:1:12
        if(fAngle <= EPS_SteeringAngleRatio(i,RatioType))
            IndexAngle = i;
            break;
        end
    end
    
    if(0 == IndexAngle)
        IndexAngle = 12;
    end
end

if (1 == IndexAngle)
    TempRatio1 = EPS_SteeringAngleRatio(IndexAngle,RatioType);
    TempAngle1 = EPS_SteeringAngleRatio(IndexAngle,1);
    k_RatioAngle = TempRatio1/TempAngle1;
elseif (12 == IndexAngle)
    TempRatio1 = EPS_SteeringAngleRatio(IndexAngle,RatioType);
    TempAngle1 = EPS_SteeringAngleRatio(IndexAngle,1);
    k_RatioAngle = TempRatio1/TempAngle1;
else
    TempRatio1 = EPS_SteeringAngleRatio(IndexAngle-1,RatioType);
    TempAngle1 = EPS_SteeringAngleRatio(IndexAngle-1,1);
    TempRatio2 = EPS_SteeringAngleRatio(IndexAngle,RatioType);
    TempAngle2 = EPS_SteeringAngleRatio(IndexAngle,1);
    k_RatioAngle = (TempRatio2 - TempRatio1)/(TempAngle2 - TempAngle1);
end

if (0 == nRequestType)
    AngleOutput = k_RatioAngle * (fAngle - TempAngle1) + TempRatio1;
else
    AngleOutput = (fAngle - TempRatio1) / k_RatioAngle + TempAngle1;
end

end

