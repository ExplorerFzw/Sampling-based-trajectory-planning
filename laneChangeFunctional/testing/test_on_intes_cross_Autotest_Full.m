clc
clear all
close all

traf_sign = 3;

CONST_LIMIT = 14;
Max_Time = 20;
result_graph = [];
isSuccess = 0;
INDEX = 1;
green = 1;
yellow = 2;
red = 3;
GreenTime = 20;
YellowTime = 3;
RedTime = 20;

for dist = 20:60
    for v = 0:16
        for traf_sign_init = 1:3
            Flag = 0;
            
            timeIter = [];
            switch traf_sign_init
                case yellow
                    timeIter = 1:3;
                otherwise
                    timeIter = 1:0.5*Max_Time;
            end
            for time = timeIter(1):timeIter(length(timeIter))
                index = 0;
                isSuccess = 1;
                state_pre = 0;
                
                FailReason = 0;
                Dist = dist;
                Velocity = v;
                d_k_pre = Dist;
                d_k_pre_k1 = d_k_pre;
                v_k_pre = Velocity;
                
                time_init = time;
                time_total = Max_Time;
                len = 1 + Max_Time/0.01;
                vMeasure = zeros(1,len);
                dMeasure = zeros(1,len);
                tMeasure = zeros(1,len);
                numMeasure = zeros(1,len);
                lightMeasure = zeros(1,len);
                FailReason = zeros(1,len);
                FlagMeasure = zeros(1,len);
                a_desMeasure = zeros(1,len);
                
                 while time_total > 0
                    if index == 0
                        traf_sign = traf_sign_init;
                        time_left = time_init;
                    else
                        [traf_sign,time_left] = LightState(traf_sign, time_left,GreenTime,YellowTime,RedTime);
                    end   
                    
                    [Flag,state] = stateMachine(d_k_pre, v_k_pre, time_left, traf_sign,state_pre);
                    state_pre = state;
                    
                    [v_des,a_des,d_k_pre,case_num] = intesec_cross( traf_sign, v_k_pre, d_k_pre, time_left,CONST_LIMIT,Flag);
                    [d_k, v_k] = StateSpace(d_k_pre, v_k_pre,a_des);
                    d_k_pre = d_k;
                    v_k_pre = v_k;
                    index = index + 1;
                    time_total = max(0,time_total - 0.01);
                    vMeasure(index) = v_k_pre;
                    dMeasure(index) = d_k_pre;
                    tMeasure(index) = time_left;
                    numMeasure(index) = case_num;
                    lightMeasure(index) = traf_sign;
                    FlagMeasure(index) = Flag;
                    a_desMeasure(index) = a_des;
                    
                    if v_k < -0.1
                        isSuccess = 0;
                        FailReason(index) = 1;
                    end
                    if traf_sign_init == red
                        if traf_sign == red && d_k_pre < -0.3
                            isSuccess = 0;
                            FailReason(index) = 2;
                        end
                        if traf_sign == green && time_left < 18 && (v_k_pre < 0.2)
                            isSuccess = 0;
                            FailReason(index) = 3;
                        end
                    end
                    if traf_sign_init == green || traf_sign_init == yellow
                        if traf_sign == red && d_k_pre_k1 >= 0 && d_k_pre < -0.2
                            isSuccess = 0;
                            FailReason(index) = 4;
                        end
                    end  
                    d_k_pre_k1 = d_k_pre;
%                     if time_in <= 0.001 
%                         if traf_sign == 3
%                             if d_k_pre >= -0.1 || case_num == 0
%                                 isSuccess = 1;
%                                 break;
% 
%                             end
%                         else
%                             dist_real  = -v_k_pre^2 / (2 * a_des);
%                             if d_k_pre <= 0.1 || case_num == 0
%                                 isSuccess = 1;
%                                 break;
%                             elseif dist_real <= d_k_pre + 0.1
%                                 isSuccess = 1;
%                                 break;
%                             end
%                         end
%                     end

    %                 if d_k_pre < 0.1
    %                     if traf_sign == 3
    %                         if v_k_pre < 0.1
    %                             isSuccess = 1;
    %                             break;
    %                         end
    %                     else
    %                         if v_k_pre > 0.1
    %                            isSuccess = 1;
    %                             break;  
    %                         end
    %                     end
    %                 end

                end

                result_graph(INDEX).dist = dist;
                result_graph(INDEX).v = v;
                result_graph(INDEX).time = time;
                result_graph(INDEX).success = isSuccess;
                result_graph(INDEX).vMeasure = vMeasure;
                result_graph(INDEX).dMeasure = dMeasure;
                result_graph(INDEX).tMeasure = tMeasure;
                result_graph(INDEX).numMeasure =numMeasure;
                result_graph(INDEX).lightMeasure =lightMeasure;
                result_graph(INDEX).FailReason =FailReason;
                result_graph(INDEX).FlagMeasure = FlagMeasure;
                result_graph(INDEX).a_desMeasure = a_desMeasure;
                INDEX = INDEX + 1;

            end
        end
    end
end

sum  = 0;
for i =1 : length(result_graph)
    sum = sum + result_graph(i).success;
end
    
success_rate = sum / length(result_graph);
fprintf("success rate is: %f percent.",success_rate*100);
                
 %%
v = result_graph(242).vMeasure;
d = result_graph(242).dMeasure;
t = result_graph(242).tMeasure;
num = result_graph(242).numMeasure;
light = result_graph(242).lightMeasure;
FailReason = result_graph(242).FailReason;
Flag = result_graph(242).FlagMeasure;
a_des = result_graph(242).a_desMeasure;

subplot(10,1,1)
plot(v)
grid on
title("v");
subplot(10,1,2)
plot(d)
title("d");
grid on
subplot(10,1,3)
plot(t)
title("t");
grid on
subplot(10,1,4)
plot(num)
title("num");
grid on
subplot(10,1,5)
plot(light)
title("light");
grid on
subplot(10,1,6)
plot(FailReason)
title("FailReason");
grid on
subplot(10,1,7)
plot(Flag)
title("Flag");
grid on
subplot(10,1,8)
plot(a_des)
title("a_des");
grid on
 %%
 success = [];
 for i = 1: length(result_graph)
     success = [success;result_graph(i).success];
 end
 
 find (success == 0)
 %%
 function [Flag,state] = stateMachine(dist, velocity, time, traf_sign,state_pre)
 state_off = 0;
 state_init = 1;
 state_on = 2;
 
 switch state_pre
     case state_off
         Flag = 0;
         if time > 0 && dist > 0
             state = 1;
         else
             state = 0;
         end
     case state_init
         Flag = 0;
         if time > 0 && dist > 0 && dist / (velocity+ 0.0001) <= 5
             state = 2;
         else
             state = 1;
         end
     case state_on
         Flag = 1;
         if (dist < -5 || time < 0 || (traf_sign == 1 && dist <= 1))
             state = 0;
         else
             state = 2;
         end
     otherwise
             Flag = 0;
             state = 0;
 end
 
 end
 
function [d_k, v_k] = StateSpace(d_k_pre, v_k_pre,a_des)
    
    dt = 0.01;
    d_k = d_k_pre - dt * v_k_pre - 0.5 * dt^2 * a_des;
    v_k = v_k_pre + dt * a_des;
    
    if v_k < 0
        v_k = 0;
    end
    
end

function [traf_sign, time_in] = LightState(traf_sign, time_in,GreenTime,YellowTime,RedTime)
    green = 1;
    yellow = 2;
    red = 3;

    switch traf_sign
        case green
            if time_in > 0.01
                time_in = max(time_in - 0.01,0.01);
            else
                traf_sign = yellow;
                time_in = YellowTime;
            end
        case yellow
            if time_in > 0.01
                time_in = max(time_in - 0.01,0.01);
            else
                traf_sign = red;
                time_in = RedTime;
            end
        case red
            if time_in > 0.01
                time_in = max(time_in - 0.01,0.01);
            else
                traf_sign = green;
                time_in = GreenTime;
            end
        otherwise
                traf_sign = green;
                time_in = GreenTime;
    end
            

    
end


function [v_des,a_des,dist,case_num] = intesec_cross( traf_sign, velocity, dist, time_in,CONST_LIMIT,Flag)  
%% this is a function that provide desired velocity, and distance to traffic light;
    % input: trafic_sign with green = 0; red = 1; yellow = 2;
    %        velocity in unit of kph;
    %        dist, and time is distance(m) to cross, and traffic time left
    %        CONST_LIMIT is velocity limit at cross, which is a reference CONSTANT velocity from
    %        ACC module.
    %        v_des_pre preseve previous v_des for next step use.
    
    % output: desired velocity for ACC module, in unit of kph;
    %         dist is distance(m) to front cross;
   
    case_num = 0;
    time = time_in;
    green = 1;
    red = 3;
    yellow = 2;
%     if time == 2
%         a_des = 0;
%          v_des = 0;
%     end
    
    if (Flag == 0)
        v_des = velocity;
        a_des = 0.5;
        dist = dist;
        case_num = 0;
       
        
    else   %(Flag == 1)

        if dist < 0
            dist = 0; 
        end

        v = velocity;

        if traf_sign == green
            time = time + 3;
        elseif traf_sign == yellow
            traf_sign = green;
        end

        switch traf_sign
            case green
                T_ACC = (max(0,dist)+0.1) / (v + 0.0001);
                T_ACC_QUIT = (dist - 5) / (v + 0.0001);
                T = time;
                a = 2 * (dist - v * T) / (T^2 + 0.0001);
                v_temp = v + a * T;
                
                if dist == 200
                    v_des = 15;
                    a_des = 1;
                    case_num = 0;
                    return;
                end
                
                if T_ACC_QUIT > 8  && v < 2.5
                    v_des = 15;
                    a_des = 1;
                    case_num = 0;
                    return;
                end

                if T_ACC < T % green time is long enough
                    if v > CONST_LIMIT %
                        a0 =  (CONST_LIMIT^2 - v^2) / (2*dist + 0.001);
                        a0 = max(a0,-1);
                        vt = sqrt(max(0,v^2 + 2 * a0 * dist));
                        t0 = (vt - v) / (a0);
                        
                        if t0 <= T % decelerate to vt is OK
                            v_des = vt; % (v + t0 * a0);
                            a_des = a0;
                            case_num = 1;
                        else 
                            v_des = v + T * a0;
                            a_des = a0;
                            case_num = 2;
                        end
                    else % green 
                        v_des = CONST_LIMIT;
                        a_des = (CONST_LIMIT - v)/T;
                        case_num = 3;
                    end
                    
                else % ( T_ACC >= T)
                    if ((a >= 0) && (a < 1) && (v_temp <= CONST_LIMIT))
                        v_des = CONST_LIMIT;
                        a_des = a;
                        case_num = 4;
                    else
                        v_des  = 0;
                        a_des = -v^2 / (2 * dist); 
                        case_num = 5;
                    end
                end

            case red
                T_ACC_QUIT = (dist - 5) / (v + 0.0001);
                if T_ACC_QUIT > 10 && dist >= 5
                    v_des = 15;
                    a_des = 1;
                    case_num = 0;
                    return;
                end

                if (dist < 4) && (v < 1)
                    a_des = 0.25 * dist - 1;
                    v_des = 0;
                    case_num = 12;

                else
                    T = time;
                    T_ACC = dist / (v + 0.0001);
                    a = 2 * (dist - v * T) / (T+0.001)^2;
                    v_temp = v + a * T;

                    if T_ACC < T
                        a0 = -v^2 / (2 * dist);
                        t0 = -v / a0;
                        if t0 < time
                            v_des = 0;
                            a_des = max(-1, -v^2 / (2 * dist+ 0.01));
                            case_num = 7;
                        else
                            v_des = v_temp;
                            a_des = a;
                            case_num = 8;
                        end 

                    else % (T_ACC > T)
                        if (v_temp < CONST_LIMIT)
                            v_des = v_temp;
                            a_des = max(-1,a);
                            case_num = 9;
                        else
                            v_des = CONST_LIMIT;
                            a_des = (CONST_LIMIT - v) / T;
                            case_num = 10;
                        end

                    end
                end

               

            otherwise
                v_des = CONST_LIMIT;
                a_des = 0;
                case_num = 11;
        end
        
%     else
%         v_des = 100;
%         a_des = 100;
%         dist = 100;
%         case_num = 0;
%          
    end
end

    