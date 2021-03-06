clc
clear all 
% close all


MINT_V = 5;
DT = 1;
MAXT_V = 8;
SET_SPEED = 80 / 3.6; 
DV = 0.1;
v_ego = 30 / 3.6;
a_ego = 1;
KJV = 1;
KTV = 1;
KDSV = 10;
speed_limit = 120 / 3.6;
MAX_ACC = 3;
MIN_ACC = -2;

IND = 1;
T = 0;


v_pre = v_ego;
a_pre = a_ego;
x = 0;
v = v_ego;
a = a_ego;

% figure
while T < 40
    
    if mod(IND,30) == 0
        SET_SPEED = SET_SPEED ;%+ round(10 * (rand(1) - 0.5));
%         SET_SPEED =max(5,min(50,SET_SPEED));
    end
    
    T
    
    [cost_graph] = cal_velocity_control(MINT_V,DT,MAXT_V, SET_SPEED,DV,v_pre, a_pre,KJV, KTV, KDSV); 
    [cost_optimal] = check_quantic_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC); 
    [s_of_t, v_of_t,a_of_t,t_data] = combination_quantic(cost_optimal); 

    a_des = min(max(a_of_t(2),-2),3);
    v_des = max(min(v_of_t(2),speed_limit),0);
    

    
%     [v_new, x_new] = update_state(v_ego, x, a_des);
%  
%     v_pre = v_des;
%     a_pre = a_des;
%     
%     v_ego  = v_new;
    
    [v_new, x_new, a_new] = update_state3(v_ego,x,a,a_des);
    v_pre = v_des;
    a_pre = a_des;
    a = a_new;
    v_ego = v_new;
    
    T = T + 0.1;
    IND = IND + 1;
    
    subplot(3,1,1)
%     plot(t_data,s_of_t,'o')
    plot(T,x_new,'bo')

%     axis([0 10 0 150])
    title("s of t")
        drawnow limitrate
    hold on
    
    subplot(3,1,2)
%     plot(t_data,v_of_t,'o',t_data,SET_SPEED * ones(length(t_data),1))
    plot(T,v_new,'m*',T,SET_SPEED,'bo')

%     plot(t_data,SET_SPEED * ones(length(t_data),1))
%     axis([0 10 0 50])
    title("v of t")
        drawnow limitrate
    hold on
    
    subplot(3,1,3)
%     plot(t_data,a_of_t,'o')
    plot(T,a_new,'bo')
%     axis([0 10 -4 4])
    title("a of t")

    drawnow limitrate
    hold on
%     pause(0.1)
   
end





function [cost_graph] = cal_velocity_control(MINT_V,DT,MAXT_V, SET_SPEED,DV,v_ego, a_ego,KJV, KTV, KDSV)
    cost_graph = ones(400,11)* 500;    
    index = 1;
    delta_v = 0.1 * SET_SPEED;

    for Ti = MINT_V : DT : MAXT_V
        for Ve = SET_SPEED - 3 : DV : SET_SPEED + 3
            s0 = 0;
            v0 = v_ego;
            a0 = a_ego;
            ve = Ve;
            ae = 0;
            [a0, a1, a2, a3, a4] = quantic_polynomial(s0, ...
                v0, a0, ve, ae,Ti);
            [jerk] = cal_quantic_jerk(a3,a4,Ti);
            cost_J = mean(abs(jerk));
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

function [cost_optimal] = check_quantic_status(cost_graph,speed_limit, MAX_ACC, MIN_ACC)
    i = 1;
    COND = 1;
    cost_optimal = zeros(1,12);
    if isempty(cost_graph)
        cost_optimal=  zeros(1,12);
        fprintf("error in cost graph.");
        return;
    end
    
  
    while COND == 1

        
        poly_para = cost_graph(i,7:11);
        a0 = poly_para(1); a1 = poly_para(2); a2 = poly_para(3); 
        a3 = poly_para(4); a4 = poly_para(5); 
        
        Te = cost_graph(i,2);
        vt = [];
        at = [];        
        
        
%         for t = 0:0.2:Te
%             vt = [vt, calc_quantic_first_derivative(a1,a2,a3,a4,t)];
%             at = [at, calc_quantic_second_derivative(a2,a3,a4,t)];
%         end
%         
        LEN_T = Te * 5 + 1;
        vt = zeros(LEN_T,1);
        at = zeros(LEN_T,1);
        
        for j = 1: LEN_T
            t = (j-1) * 0.2;
            vt(j) = calc_quantic_first_derivative(a1,a2,a3,a4,t);
            at(j) = calc_quantic_second_derivative(a2,a3,a4,t);
        end
        
        if (max(abs(vt)) <= speed_limit && max(at) <= MAX_ACC && min(at) >= MIN_ACC)
            cost_optimal(1:11) = cost_graph(i,:);
            COND = 2;
        end
        
        i = i + 1;
        
        if i > size(cost_graph,1)
            COND = 2;
            POS = find(cost_graph(:,2) == MAXT_V);
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

function [jerk] = cal_quantic_jerk(a3,a4,Ti)
    seg = Ti / 0.1 + 1;
    index = 1;
    jerk = zeros(1,seg);
    
    for k = 1:seg
        i  = k * 0.1;
                                                                                                                                                                                                                                                        jerk(index) =  6* a3 + 24 * a4 * i;
        index = index + 1;
    end
end

function [s_of_t, v_of_t,a_of_t,t_data] = combination_quantic(cost_optimal)
    if isempty(cost_optimal)
        s_of_t = zeros(200,1);
        v_of_t = zeros(200,1);
        a_of_t = zeros(200,1);
        t_data = zeros(200,1);
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

function [xt] = cal_quantic_point(a0,a1,a2,a3,a4,T)
    xt = a0 + a1 * T + a2 * T^2 + a3 * T^3 + a4 * T^4;
end

function [xt] =calc_quantic_first_derivative(a1,a2,a3,a4,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3;
end

function [xt]  = calc_quantic_second_derivative(a2,a3,a4,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2;
end

function [v_new, x_new] = update_state(v, x, a)
    
    delta_t = 0.1;
    A = [1,0; delta_t, 1];
    B = [delta_t; 0.5 * delta_t^2];
    state_new = A * [v;x] + B * a;
    v_new = state_new(1);
    x_new = state_new(2);

end

function [v_new, x_new, a_new] = update_state3(v,x,a,a_des)

delta_t = 0.1;
KL = 1;
TL = 0.5;

A = [1,0,0;delta_t,1,0; 0,0 delta_t/TL];
B = [delta_t; 0.5 * delta_t^2; 1-delta_t/TL];
state_new =  A * [v;x;a_des] + B * a;
v_new = state_new(1);
x_new = state_new(2);
a_new = state_new(3); 

end

