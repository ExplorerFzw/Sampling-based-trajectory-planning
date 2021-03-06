%% this section is a test on the functionisOK function./=============
clc
clear all
close all

a0 = -3; a1 = -0.1; a2 = -0.001; a3 = -0.0001;
b0 = 3; b1 = -0.1; b2 = -0.001; b3 = -0.00008;
lane_type = 1;
lane_quality_left = 4;
lane_quality_right = 4;
LKA_status = 1;
safe_dist = 40;
velocity = 40;


FLAG = functionisOK(lane_type, lane_quality_left, lane_quality_right, ...
    LKA_status,safe_dist,a0,a1,a2,a3, b0,b1,b2,b3,velocity)
%%====================================================================

function LEN = calculateLEN(velocity)
    LEN = velocity;
end

function Flag = functionisOK(lane_type, lane_quality_left, lane_quality_right, ...
    LKA_status,safe_dist,a0,a1,a2,a3, b0,b1,b2,b3,velocity)
%% this function provides a status check method, only when the status check Flag = 1, 
% can the lane change method is activated. 
% we consider the follow 5 terms to demtermine whether the method can be
% activated;
% 1. lane type, we can only change lane when the type is dashed line
%2, lane quality, we only allow lane change when left and right lane
%quality is ok;
% 3. LKA status is the pre-requisite that lane changing method can be
% activated;
% 4. safe_dist comes from ACC module, we only allow lane change when the
% front vehicle safety distance is big enough to ensure safety space for
% lane changing;
% 5. kappa is the both the left and right lane curvature, which means only
% when the kappa is big enough, very close to straight line, can we
% activate lane changing method;
    LEN = calculateLEN(velocity)
    lane_type_flag = 0;
    lane_quality_flag = 0;
    LKA_status_flag = 0;
    safe_dist_flag = 0;
    
    
    if lane_type == 1
        lane_type_flag = 1;
    end
    
    if (lane_quality_left >=3) && (lane_quality_right >=3)
        lane_quality_flag = 1; 
    end
    
    if LKA_status == 1
        LKA_status_flag = 1;
    end
    
    if safe_dist > 0.2 * LEN
        safe_dist_flag = 1;
    end
    
    
    y_d=  [0];
    y_dd = [0];
    for i = 1:round(LEN)
        y_d = [y_d, a1 + 2*a2*i + 3*a3*i^2];
        y_dd = [y_dd, 2*a2 + 6*a3*i];
    end
    
    for i = 1:length(y_d)
        kappa(i)=  y_dd(i) / ((1 + (y_d(i))^2)^(1.5));
    end
    plot(1:length(y_d), kappa)
    
    for i = 1: length(kappa)
        if abs(kappa(i))> 1/250
            kappa_flag = 0;
            break;
        else
            kappa_flag = 1;
        end
    end
    
   if((lane_type_flag == 1) && (lane_quality_flag == 1) && (LKA_status_flag == 1)...
       && (kappa_flag == 1) && (safe_dist_flag == 1))
       Flag = 1;
   else
       Flag = 0;
   end
   
end