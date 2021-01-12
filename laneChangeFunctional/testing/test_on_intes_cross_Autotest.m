clc
clear all
close all

traf_sign = 3;
Flag = 1;
CONST_LIMIT = 20;
result_graph = [];
isSuccess = 0;
for dist = 20:60
    for v = 5:20
        for time = 5:15
            index = 1;
            Dist = dist;
            Velocity = v;
            
            d_k_pre = Dist;
            v_k_pre = Velocity;
            time_in = time;
            while time_in > 0 && d_k_pre > -5
                
                [v_des,a_des,d_k_pre,case_num] = intesec_cross( traf_sign, v_k_pre, d_k_pre, time_in,CONST_LIMIT,Flag);
                [d_k, v_k] = StateSpace(d_k_pre, v_k_pre,a_des);
                d_k_pre = d_k;
                v_k_pre = v_k;
                index = index + 1;
                time_in = max(0,time_in - 0.01);
                
                if time_in <= 0.001
                    if traf_sign == 3
                        if d_k_pre >= 0.001
                            isSuccess = 1;
                            break;
                        
                        end
                    else
                        if d_k_pre <= 0.001
                            isSuccess = 1;
                            break;
                        end
                    end
                end
                
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
            
            result_graph = [result_graph;[dist,v,time,isSuccess]];
            
        end
    end
end

success_rate = sum(result_graph(:,4))/ length(result_graph);
fprintf("success rate is: %f percent.",success_rate*100);
                
            





function [d_k, v_k] = StateSpace(d_k_pre, v_k_pre,a_des)
    
    dt = 0.01;
    d_k = d_k_pre - dt * v_k_pre - 0.5 * dt^2 * a_des;
    v_k = v_k_pre + dt * a_des;
    
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
        v_des = 100;
        a_des = 0;
        dist = 100;
        case_num = 0;
        return;
    end
    
    if dist < 0
        if traf_sign == green
            dist = 200;
        else
            dist = 0;
        end
    end
    
   
    
    
    if (Flag == 1)

        v = velocity;

        if traf_sign == green
            time = time + 3;
        elseif traf_sign == yellow
            traf_sign = green;
        end

        switch traf_sign
            case green
                T_ACC = dist / (v + 0.0001);
                T = time;
                a = 2 * (dist - v * T) / (T^2 + 0.0001);
                v_temp = v + a * T;
                
                if dist == 200
                    v_des = 15;
                    a_des = 0;
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
                                a_des = -v^2 / (2 * dist+ 0.01);
                                case_num = 7;
                            else
                                v_des = v_temp;
                                a_des = a;
                                case_num = 8;
                            end 
  
                        else % (T_ACC > T)
                            if (v_temp < CONST_LIMIT)
                                v_des = v_temp;
                                a_des = a;
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
        
    else
        v_des = 100;
        a_des = 100;
        dist = 100;
        case_num = 0;
         
    end
end

    