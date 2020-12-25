clc
clear all
close all


v_f = 10;
a_f = 0;
dist = 20;
v_ego = 7;
a_ego = 0;
KJ = 1;
KT = 1;
KDS = 10;
speed_limit= 20;
MAX_ACC = 2;
MIN_ACC = -3;


[s_of_t, v_of_t,t_data] = acc_planning(v_f,a_f,dist,v_ego,a_ego,KJ,KT,KDS,speed_limit,MAX_ACC, MIN_ACC);


figure
plot(t_data,s_of_t,'-b')
title("s of t")

figure
plot(t_data,v_of_t,'-b')
title("v of t")

function [s_of_t, v_of_t,t_data,a_des,cost_optimal] = acc_planning(v_f,a_f,dist,v_ego,a_ego,KJ,KT,KDS,speed_limit,MAX_ACC, MIN_ACC)

    DT = 1 ; % Delta T [s]
    MAXT = 5;% [s]
    MINT = 2; % [s]
    DS = 0.5;
    D0 = 5;
    TTC = 3;
    s_of_t = 0;
    v_of_t = 0;
    t_data = 0; 
    a_des = 0;
    cost_optimal = zeros(1,12);
    
    if dist > 100
        a_des = 0;
    elseif dist > 0 && dist < 100
        
        cost_graph = cal_distance_control(MINT,DT,MAXT,v_f,a_f,dist,D0,TTC,DS,v_ego,a_ego,KJ,KT,KDS)
        cost_optimal = check_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC);
        [s_of_t, v_of_t,t_data] = combination(cost_optimal);
        a_des = PID_control_a(v_of_t,v_ego);
    end
end


function a_des = PID_control_a(v_of_t,v_ego)
    a_des = 0.2 * (v_of_t(2) - v_ego);
end

function v_des = PID_control_v(v_of_t,v_ego)
    v_des = 1 * (v_of_t(2) - v_ego);
end


function v_f_t = cal_v_f_t(v_f, a_f, Ti)
    %calculate v_f of time.
    v_f_t = v_f + a_f * Ti;
end
    

function dist_t = cal_dist_t(dist,v_f,a_f,Ti)
    %calculate distance of time.
    dist_t = dist + v_f * Ti + 1/2 * a_f * Ti^2;
end


function [s_des] = cal_s_des(D0, TTC, v_f_t)
    %calculate desired s.
    s_des = D0 + TTC * v_f_t;
end


function [s_target] = cal_s_target(s_des,dist_t)
    %calculate s target.
    s_target = dist_t - s_des;
end

function [s_target_d] = cal_s_target_d(v_f_t, TTC, a_f)
    %calculate v_f of time.
    s_target_d = v_f_t - TTC * a_f;
end


function [s_target_dd] = cal_s_target_dd(a_f)
    s_target_dd = a_f;
end

function [cost_graph] = cal_distance_control(MINT,DT,MAXT,v_f,a_f,dist,D0,TTC,DS,v_ego,a_ego,KJ,KT,KDS)
    
    cost_graph = ones(400,12)* 500; 
    index = 1;
    for Ti = MINT : DT : MAXT
        v_f_t = cal_v_f_t(v_f, a_f, Ti);
        dist_t = cal_dist_t(dist,v_f,a_f,Ti);
        [s_des] = cal_s_des(D0, TTC, v_f_t);
        [s_target] = cal_s_target(s_des,dist_t);
        [s_target_d] = cal_s_target_d(v_f_t, TTC, a_f);
        [s_target_dd] = cal_s_target_dd(a_f);
        delta_s = 0.1 * s_target;
        
        for Si = (s_target - delta_s) : DS : (s_target + delta_s) 
            s0 = 0;
            v0 = v_ego;
            a0 = a_ego;
            se = Si;
            ve = s_target_d;
            ae = s_target_dd;
            [a0, a1, a2, a3, a4,a5] = quintic_polynomial(s0, ...
                v0, a0, se, ve, ae,Ti);
            %get the quintic polu parameters;
            [jerk] = cal_jerk(a2,a3,a4,a5,Ti);
            cost_J = mean(abs(jerk));
            cost_T = Ti;
            cost_DS = abs(s_target - Si);
            cost_total = KJ * cost_J + KT * cost_T + KDS * cost_DS;
            cost_graph(index,:) = [cost_total,Ti,Si,cost_J,cost_T,cost_DS,...
                a0, a1, a2, a3, a4, a5];
            
            index = index + 1;
        end
    end
    cost_graph = sortrows(cost_graph);
end


function [cost_optimal] = check_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC)
    i = 1;
    COND = 1;
    cost_optimal = zeros(1,12);
    if isempty(cost_graph)
        cost_optimal=  zeros(1,12);
        fprintf("error in cost graph.");
        return;
    end
    
    
    
    while COND == 1
         
        vt = [];
        at = [];
        
        
        poly_para = cost_graph(i,7:12);
        a0 = poly_para(1); a1 = poly_para(2); a2 = poly_para(3); 
        a3 = poly_para(4); a4 = poly_para(5); a5 = poly_para(6);
        
        Te = cost_graph(i,2);
        
        
        
        for t = 0:0.5:Te
            vt = [vt, calc_first_derivative(a1,a2,a3,a4,a5,t)];
            at = [at, calc_second_derivative(a2,a3,a4,a5,t)];
        end
        
        if (max(abs(vt)) <= speed_limit && max(at) <= MAX_ACC && min(at) >= MIN_ACC)
            cost_optimal = cost_graph(i,:);
            COND = 2;
        end
        
        i = i + 1;
        
        if i > size(cost_graph,1)
            COND = 2;
            cost_optimal  = cost_graph(end,:);
        end
    end
end

function [s_of_t, v_of_t,t_data] = combination(cost_optimal)
    if isempty(cost_optimal)
        s_of_t = [ ];
        v_of_t = [ ];
        t_data = [ ];
        fprintf("error in optimal cost graph.");
        return;
    end

    Te = cost_optimal(2);
    poly_para = cost_optimal(7:12);
    a0 = poly_para(1); a1 = poly_para(2); a2 = poly_para(3); 
    a3 = poly_para(4); a4 = poly_para(5); a5 = poly_para(6);
    s_of_t = [];
    v_of_t = [];
    t_data = [];
    for t = 0 : 0.1 : Te
        s_of_t = [s_of_t,calc_point(a0,a1,a2,a3,a4,a5,t)];
        v_of_t = [v_of_t,calc_first_derivative(a1,a2,a3,a4,a5,t)];
        t_data = [t_data,t];
    end
end


function [xt] = calc_point(a0,a1,a2,a3,a4,a5,t)
xt = a0 + a1 * t + a2 * t ^2 + a3 * t^3 + a4 * t^4+a5 * t^5;
end

function [xt] =calc_first_derivative(a1,a2,a3,a4,a5,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3  +  5 * a5 * t^4;
end

function [xt]  = calc_second_derivative(a2,a3,a4,a5,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2 + 20* a5 *t^3;
end

function [xt] = calc_third_derivative(a3,a4,a5,t)
xt =6 * a3 + 24 * a4 * t + a5 * t^2;
end

function [jerk] = cal_jerk(a2,a3,a4,a5,Ti)
    jerk = [];
    for i = 0:0.1:Ti
        jerk = [jerk, 2* a2 + 6* a3 * i + 12 * a4 * i^2 + 20* a5 *i^3];
    end
end

function [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
    vxs, axs, xe, vxe, axe,T)
% A = [0,0,0,0,0,1; T^5,T^4,T^3,T^2,T,1;...
%     0,0,0,0,1,0 ; 5*T^4  4*T^3 3*T^2 2*T 1 0 ; ...
%     0 0 0 2 0 0; 20*T^3 12*T^2 6*T 2 0 0];
% b = [xs, xe, vxs, vxe, axs, 0]';
% x = A\b;
% a5 = x(1);
% a4 = x(2);
% a3 = x(3);
% a2 = x(4);
% a1 = x(5);
% a0 = x(6);
A = [T^3 T^4 T^5; 3*T^2 4*T^3 5*T^4; 6*T 12*T^2 20*T^3];
b = [(xe - xs  - vxs*T - 0.5*axs*T^2); (vxe- vxs - axs*T ); (axe - axs)];

if det(A) == 0
    a0 = [];
    a1 = [];
    a2 = [];

    a3 = [];
    a4 = [];
    a5 = [];  
    
    fprintf('cannot calculate quintic polynomial paras.');
    return;
end
    
    
x = A\b;
a0 = xs;
a1 = vxs;
a2 = axs/2;

a3 = x(1);
a4 = x(2);
a5 = x(3);
end