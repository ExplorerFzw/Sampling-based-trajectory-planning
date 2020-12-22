
clc
clear all
close all
traf_sign = 0;
velocity = 30;
dist = 100;
time = 12;
CONST_LIMIT = 40;
ACC_MODE = 0;

[v_des,distance] = intesec_cross(ACC_MODE, traf_sign, velocity, dist, time,CONST_LIMIT)

function [v_des,dist] = intesec_cross(ACC_MODE, traf_sign, velocity, dist, time,CONST_LIMIT)  
%% this is a function that provide desired velocity, and distance to traffic light;
    % input: trafic_sign with green = 0; red = 1; yellow = 2;
    %        velocity in unit of kph;
    %        dist, and time is distance(m) to cross, and traffic time left
    %        CONST_LIMIT is velocity limit at cross, which is a ref from
    %        ACC module.
    % output: desired velocity for ACC module, in unit of kph;
    %         dist is distance(m) to front cross;
    
    green = 0;
    red = 1;
    yellow = 2;
    v = velocity / 3.6;
    distance = dist;
    CONST_LIMIT = CONST_LIMIT / 3.6;
    delta_t = 0.5;
    
    switch traf_sign
        case green
            if ACC_MODE == 0
                T = time - 3;
                a = 2 * (dist - v * T) / T^2;
                v_temp = v + a * T;

                if (a > 1 && v_temp > CONST_LIMIT)
                    v_des = 0;
                elseif (a > 0 && a < 1 && v_temp < CONST_LIMIT)
                    v_des = v + a * T ;
                else
                    v_des = CONST_LIMIT;
                end
            else
                T_ACC = dist / v;
                if T_ACC < time - delta_t
                    v_des = CONST_LIMIT;
                elseif T_ACC > time + delta_t
                    v_des = 0;
                end
            end
                          
        case red
            T = time + 2;
            a = 2 * (dist - v * T) / T^2;
            v_temp = v + a * T;
            if (a < 0)
                v_des = 0;
            elseif (a >= 0 && a <= 1 && v_temp < CONST_LIMIT)
                v_des = v + a * T ; 
            else
                v_des = CONST_LIMIT;
            end
       
    
                
        otherwise
            v_des = 0;
            
    end
    v_des = v_des * 3.6;
    
    
    end
    