clc
clear all



v_f = 7;
a_f = 0;

v_ego = 8;
a_ego = 0;
KJ = 1;
KT = 1;
KDS = 10;
KJV = 1;
KTV = 1;
KDSV = 10;
MINT_V = 5;
DT = 1;
MAXT_V = 8;
MINT = 5;
MAXT = 8;
DV = 1;
DS = 1;
dist = 30;
T = 0;


speed_limit= 20;
MAX_ACC = 2;
MIN_ACC = -3;
SET_SPEED = 18;
aDesIndex = 2;

[a_des,v_des] = ACC_PLANNING(MINT_V,DT,MAXT_V, MINT,MAXT,SET_SPEED,DV,DS,v_f,a_f,v_ego,a_ego,KJ,KT,KDS,KJV, KTV, KDSV,MAX_ACC, MIN_ACC,speed_limit,aDesIndex,...
    dist);

fprintf("acc plan finished")
%% test on velocity control

x = 0;
a = a_ego;
v_pre = v_ego;
a_pre = a_ego;
COND = 1;

while T < 25
    tic
    D0 = 0; % ONLY for test convenience
    TTC = 0;

    [cost_graph] = cal_distance_control(MINT,DT,MAXT,v_f,a_f,dist,D0,TTC,DS,v_pre,a_pre,KJ,KT,KDS);
    cost_optimal = check_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC,MAXT);
    [s_of_t, v_of_t,a_of_t, t_data] = combination_quintic(cost_optimal);
    
%     figure
%     plot(t_data,v_of_t,'o');
%     close all;
%     
    a_des = min(max(a_of_t(2),-4),1.5);
    v_des = min(max(v_of_t(2),0),speed_limit);
toc
    [v_new, x_new, a_new] = update_state3(v_ego,x,a_ego,a_des);
    
    if COND == 1
        v_pre = v_new;
        a_pre = a_new;
    else   
        v_pre = v_des;
        a_pre = a_des;
    end

    
    
    a_ego = a_new;
    v_ego = v_new;
    
    dist = dist + v_f * 0.1 - (v_ego * 0.1 + 1/2 * a_ego * 0.1^2);

    T = T + 0.1
    subplot(3,1,1)
    plot(T,a_ego,'-ro');
    drawnow
    hold on 
    subplot(3,1,2)
    plot(T,v_ego,'-ro');
    drawnow
    hold on 
    subplot(3,1,3)
    plot(T,dist,'-ro');
    
    drawnow
    hold on 
end

% figure
% while T < 25
%     tic
%     D0 = 0; % ONLY for test convenience
%     TTC = 0;
% 
%     [cost_graph] = cal_distance_control(MINT,DT,MAXT,v_f,a_f,dist,D0,TTC,DS,v_pre,a_pre,KJ,KT,KDS);
%     cost_optimal = check_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC,MAXT);
%     [s_of_t, v_of_t,a_of_t, t_data] = combination_quintic(cost_optimal);
%     
% %     figure
% %     plot(t_data,v_of_t,'o');
% %     close all;
% %     
%     a_des = min(max(a_of_t(2),-4),1.5);
%     v_des = min(max(v_of_t(2),0),speed_limit);
% toc
%     [v_new, x_new, a_new] = update_state3(v_ego,x,a_ego,a_des);
%     
%     if COND == 1
%         v_pre = v_new;
%         a_pre = a_new;
%     else   
%         v_pre = v_des;
%         a_pre = a_des;
%     end
% 
%     
%     
%     a_ego = a_new;
%     v_ego = v_new;
%     
%     dist = dist + v_f * 0.1 - (v_ego * 0.1 + 1/2 * a_ego * 0.1^2);
% 
%     T = T + 0.1
%     subplot(3,1,1)
%     plot(T,a_ego,'-ro');
%     drawnow
%     hold on 
%     subplot(3,1,2)
%     plot(T,v_ego,'-ro');
%     drawnow
%     hold on 
%     subplot(3,1,3)
%     plot(T,dist,'-ro');
%     
%     drawnow
%     hold on 
% end
%%
function [v_new, x_new, a_new] = update_state3(v,x,a,a_des)

delta_t = 0.1;

TL = 0.3;

A = [1,0,0;delta_t,1,0; 0,0 delta_t/TL];
B = [delta_t; 0.5 * delta_t^2; 1-delta_t/TL];
state_new =  A * [v;x;a_des] + B * a;
v_new = state_new(1);
x_new = state_new(2);
a_new = state_new(3); 
a = a_new;
end

    

function [a_des,v_des] = ACC_PLANNING(MINT_V,DT,MAXT_V, MINT,MAXT,SET_SPEED,DV,DS,v_f,a_f,v_ego,a_ego,KJ,KT,KDS,KJV, KTV, KDSV,MAX_ACC, MIN_ACC,speed_limit,aDesIndex,...
    dist)

        s_of_t = zeros(200,1);
        v_of_t = zeros(200,1);
        a_of_t = zeros(200,1);
        t_data = zeros(200,1);
        a_des = 0;
        v_des = 0;
        
    if dist >= 100

        [cost_graph] = cal_velocity_control(MINT_V,DT,MAXT_V, SET_SPEED,DV,v_ego, a_ego, KJV, KTV, KDSV); 
        [cost_optimal] = check_quantic_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC,MAXT_V); 
        [s_of_t, v_of_t,a_of_t, t_data] = combination_quantic(cost_optimal); 
        a_des = min(max(a_of_t(aDesIndex),-1.5),1.5);
        v_des = min(max(v_of_t(2),0),speed_limit);
        
    else
        D0 = 0; % ONLY for test convenience
        TTC = 0;
        
        [cost_graph] = cal_distance_control(MINT,DT,MAXT,v_f,a_f,dist,D0,TTC,DS,v_ego,a_ego,KJ,KT,KDS);
        cost_optimal = check_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC,MAXT);
        [s_of_t, v_of_t,a_of_t, t_data] = combination_quintic(cost_optimal);
        a_des = min(max(a_of_t(aDesIndex),-4),1.5);
        v_des = min(max(v_of_t(2),0),speed_limit);
    end
    
end


    


function [cost_graph] = cal_distance_control(MINT,DT,MAXT,v_f,a_f,dist,D0,TTC,DS,v_pre,a_pre,KJ,KT,KDS)
    
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
            v0 = v_pre;
            a0 = a_pre;
            se = Si;
            ve = s_target_d;
            ae = s_target_dd;
            [a0, a1, a2, a3, a4,a5] = quintic_polynomial(s0, ...
                v0, a0, se, ve, ae,Ti);
            %get the quintic polu parameters;
            [jerk,count] = cal_jerk(a3,a4,a5,Ti);
            cost_J = mean(abs(jerk(1:count)));
            cost_T = Ti;
            cost_DS = sqrt((s_target - Si)^2);
            cost_total = KJ * cost_J + KT * cost_T + KDS * cost_DS;
            cost_graph(index,:) = [cost_total,Ti,Si,cost_J,cost_T,cost_DS,...
                a0, a1, a2, a3, a4, a5];
            
            index = index + 1;
        end
    end
    cost_graph = sortrows(cost_graph);
end

function [cost_graph] = cal_velocity_control(MINT_V,DT,MAXT_V, SET_SPEED,DV,v_pre, a_pre, KJV, KTV, KDSV)
    cost_graph = ones(400,11)* 500;    
    index = 1;
    delta_v = 0.1 * SET_SPEED;

    for Ti = MINT_V : DT : MAXT_V
        for Ve = SET_SPEED - 3 : DV : SET_SPEED + 3
            s0 = 0;
            v0 = v_pre;
            a0 = a_pre;
            ve = Ve;
            ae = 0;
            [a0, a1, a2, a3, a4] = quantic_polynomial(s0, ...
                v0, a0, ve, ae,Ti);
            [jerk,count] = cal_quantic_jerk(a3,a4,Ti);
            cost_J = mean(abs(jerk(1:count)));
            cost_T = Ti;
            cost_DV = sqrt((SET_SPEED - Ve)^2);
            cost_total = KJV * cost_J + KTV * cost_T + KDSV * cost_DV;
            cost_graph(index,:) = [cost_total,Ti,Ve,cost_J,cost_T,cost_DV,...
                a0, a1, a2, a3, a4];

            index = index + 1;
        end
    end
    cost_graph = sortrows(cost_graph);
end

function [cost_optimal] = check_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC,MAXT)
    i = 1;
    COND = 1;
    cost_optimal = zeros(1,12);
    LEN_T = 0;
    
    if isempty(cost_graph)
        cost_optimal=  zeros(1,12);
        fprintf("error in cost graph.");
        return;
    end
    
    valid_range = find(cost_graph(:,2) == 500);
    valid_size = valid_range(1);
    
    while COND == 1
        

        
        poly_para = cost_graph(i,7:12);
        a0 = poly_para(1); a1 = poly_para(2); a2 = poly_para(3); 
        a3 = poly_para(4); a4 = poly_para(5); a5 = poly_para(6);
        
        Te = cost_graph(i,2);
        LEN_T = double(Te * 5 + 1);
        vt = zeros(200,1);
        at = zeros(200,1);
        
        
        for j = 1: LEN_T
            t = (j-1) * 0.2;
            vt(j) = calc_first_derivative(a1,a2,a3,a4,a5,t);
            at(j) =  calc_second_derivative(a2,a3,a4,a5,t);
        end
        
        if cost_graph(i,1) == 500
            COND = 2;
        end
        
        
        
        
        if (max(abs(vt)) <= speed_limit && max(at) <= MAX_ACC && min(at) >= MIN_ACC)
            cost_optimal = cost_graph(i,:);
            COND = 2;
        end
        
        i = i + 1;
        
        if i == valid_size
            COND = 2;
            POS = find(cost_graph(:,2) == MAXT);
            POS_first = POS(1); % find the first combination with longest T; 
            cost_optimal = cost_graph(POS_first,:);
        end
    end
end

function [cost_optimal] = check_quantic_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC,MAXT_V)
    i = 1;
    COND = 1;
    cost_optimal = zeros(1,11);
    LEN_T = 0;
    
    if isempty(cost_graph)
        cost_optimal=  zeros(1,11);
        fprintf("error in cost graph.");
        return;
    end
    
    valid_range = find(cost_graph(:,2) == 500);
    valid_size = valid_range(1);

    while COND == 1

        
        poly_para = cost_graph(i,7:11);
        a0 = poly_para(1); a1 = poly_para(2); a2 = poly_para(3); 
        a3 = poly_para(4); a4 = poly_para(5); 
        
        Te = cost_graph(i,2);
        
        LEN_T = double(Te * 5 + 1);
        vt = zeros(200,1);
        at = zeros(200,1);
        
        for j = 1: LEN_T
            t = (j-1) * 0.2;
            vt(j) = calc_quantic_first_derivative(a1,a2,a3,a4,t);
            at(j) = calc_quantic_second_derivative(a2,a3,a4,t);
        end
        
        
        if cost_graph(i,1) == 500
            COND = 2;
        end
        
        if (max(abs(vt)) <= speed_limit && max(at) <= MAX_ACC && min(at) >= MIN_ACC)
            cost_optimal(1:11) = cost_graph(i,:);
            COND = 2;
        end
        
        i = i + 1;
        
        if i == valid_size
            COND = 2;
            POS = find(cost_graph(:,2)==MAXT_V);
            POS_first = POS(1); % find the first combination with longest T; 
            cost_optimal(1:11)  = cost_graph(POS_first,:);
        end
    end
end

function [a0, a1, a2, a3, a4] = quantic_polynomial(xs, ...
    vxs, axs, vxe, axe,T)
    
    A  =[1,0,0,0,0;0,1,0,0,0;0,0,2,0,0;...
        0,1,2*T,3*T^2,4*T^3;0,0,2,6*T,12*T^2];
    
    if det(A) == 0
        a0 = [];
        a1 = [];
        a2 = [];

        a3 = [];
        a4 = [];


        fprintf('cannot calculate quintic polynomial paras.');
        return;
    end
    
    
    b = [xs,vxs,axs,vxe,axe]';
    x = pinv(A) * b;
    
    a0 = x(1);
    a1 = x(2);
    a2 = x(3);
    a3 = x(4);
    a4 = x(5);
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


    
    
x = pinv(A) * b;
a0 = xs;
a1 = vxs;
a2 = axs/2;

a3 = x(1);
a4 = x(2);
a5 = x(3);
end

function [jerk,count] = cal_jerk(a3,a4,a5,Ti)
    seg = 8 / 0.1 + 1;
    count = Ti / 0.1 + 1;
    index = 1;
    jerk = zeros(1,seg);
    
    for k = 1:seg
        i  = k * 0.1;
        jerk(index) =  6* a3  + 24 * a4 * i + 60* a5 *i^2;
        index = index + 1;
    end
end

function [jerk,count] = cal_quantic_jerk(a3,a4,Ti)
    seg = 8 / 0.1 + 1;
    count = Ti / 0.1 + 1;
    index = 1;
    jerk = zeros(1,seg);
    
    for k = 1:seg
        i  = k * 0.1;
        jerk(index) =  6* a3 + 24 * a4 * i;
        index = index + 1;
    end
end

function [s_of_t, v_of_t,a_of_t, t_data] = combination_quintic(cost_optimal)
    if isempty(cost_optimal)
        s_of_t = zeros(200,1);
        v_of_t = zeros(200,1);
        t_data = zeros(200,1);
        fprintf("error in optimal cost graph.");
        return;
    end

   
    Te = cost_optimal(2);
    poly_para = cost_optimal(7:12);
    a0 = poly_para(1); a1 = poly_para(2); a2 = poly_para(3); 
    a3 = poly_para(4); a4 = poly_para(5); a5 = poly_para(6);
   s_of_t = zeros(200,1);
    v_of_t = zeros(200,1);
    a_of_t = zeros(200,1);
    t_data = zeros(200,1);
    
    index = 1;
    seg = Te / 0.1 - 1;
    
    for i = 0 : seg
        t = i * 0.1;
        s_of_t(index) = calc_point(a0,a1,a2,a3,a4,a5,t);
        v_of_t(index) = calc_first_derivative(a1,a2,a3,a4,a5,t);
        a_of_t(index) =  calc_second_derivative(a2,a3,a4,a5,t);
        t_data(index) = t;
        index = index + 1;
    end
end

function [s_of_t, v_of_t,a_of_t,t_data] = combination_quantic(cost_optimal)
    if isempty(cost_optimal)

        fprintf("error in optimal cost graph.");
        return;
    end

    Te = cost_optimal(2);
    poly_para = cost_optimal(7:11);
    a0 = poly_para(1); a1 = poly_para(2); a2 = poly_para(3); 
    a3 = poly_para(4); a4 = poly_para(5); 
    s_of_t = zeros(200,1);
    v_of_t = zeros(200,1);
    a_of_t = zeros(200,1);
    t_data = zeros(200,1);
    
    index = 1;
    seg = Te / 0.1 - 1;
    
    for i = 0 : seg
        t = i * 0.1;
        s_of_t(index) = cal_quantic_point(a0,a1,a2,a3,a4,t);
        v_of_t(index) = calc_quantic_first_derivative(a1,a2,a3,a4,t);
        a_of_t(index) = calc_quantic_second_derivative(a2,a3,a4,t);
        t_data(index) = t;
        index = index + 1;
    end
end


function [xt] = calc_point(a0,a1,a2,a3,a4,a5,T)
    xt = a0 + a1 * T + a2 * T^2 + a3 * T^3 + a4 * T^4 + a5 * T^5;
end

function [xt] = cal_quantic_point(a0,a1,a2,a3,a4,T)
    xt = a0 + a1 * T + a2 * T^2 + a3 * T^3 + a4 * T^4;
end

function [xt] =calc_first_derivative(a1,a2,a3,a4,a5,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3 + 5 * a5 * t^4;
end

function [xt]  = calc_second_derivative(a2,a3,a4,a5,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2 + 20* a5 *t^3;
end

function [xt] =calc_quantic_first_derivative(a1,a2,a3,a4,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3;
end

function [xt]  = calc_quantic_second_derivative(a2,a3,a4,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2;
end

function v_f_t = cal_v_f_t(v_f, a_f, Ti)
    %calculate v_f of time.
    v_f_t = v_f + a_f * Ti; v
    
end

function dist_t = cal_dist_t(dist,v_f,a_f,Ti)
    %calculate distance of time.
    dist_t = dist + v_f * Ti + 1/2 * a_f * Ti^2;
end


function [s_des] = cal_s_des(D0, TTC, v_f_t)
    %calculate desired s.
%     s_des = D0 + TTC * v_f_t;
     s_des = 20; % here we made a simplification
end


function [s_target] = cal_s_target(s_des,dist_t)
    %calculate s target.
    s_target = dist_t - s_des;
end

function [s_target_d] = cal_s_target_d(v_f_t, TTC, a_f)
    %calculate v_f of time.
%     s_target_d = v_f_t - TTC * a_f;
    s_target_d = v_f_t; % here we made a simplification
end


function [s_target_dd] = cal_s_target_dd(a_f)
    s_target_dd = a_f;
end
