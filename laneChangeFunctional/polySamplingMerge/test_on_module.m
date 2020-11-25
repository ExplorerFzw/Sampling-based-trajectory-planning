clc
clear all
close all

global MAX_ROAD_WIDTH D_ROAD_W D_ROAD_LON MINT  DT MAXT KJ KD KT KLD KLAT KLON;
global merge_dir lat_offset current_velocity current_acceleration;
global sa0 va0 sb0 vb0 

MAX_ROAD_WIDTH =2.5 ; %  [m]
D_ROAD_W = 0.1 ; %  [m]
D_ROAD_LON = 0.5;
DT = 1 ; % Delta T [s]
MAXT = 15;% [s]
MINT = 5; % [s]
KJ = 0.1;
KT = 0.1;
KD = 1;
KLD = 1;
KLAT = 1;
KLON = 1;

merge_dir = 1;
lat_offset = -2.5;
current_velocity = 10;
current_acceleration = 0;

sa0 = 0;
va0 = 10;
sb0 = 15;
vb0 = 10; 

cost_graph = cal_lat_frenet_paths();
frenet_data = check_status(cost_graph);
cost_total = frenet_data(1);
Te = frenet_data(2);
de = frenet_data(3);
se = frenet_data(4);
[p_of_v] = conbination(frenet_data);
figure
plot(p_of_v(:,1),p_of_v(:,2));
title("y of x");
figure
plot(p_of_v(:,1),p_of_v(:,3));
title("p of v");


    
    
function [p_of_v] = conbination(frenet_data)
    Te = frenet_data(2);        
    for i = 5:10
        a(i-4) = frenet_data(i);
        b(i-4) = frenet_data(i+6);
    end
    
    xt = [];
    yt = [];
    vxt = [];
    vyt = [];
    for t = 0:0.05:Te
        a0 = a(1); a1 = a(2); a2 = a(3); a3 = a(4);
        a4 = a(5); a5 = a(6); b0 = b(1); b1 = b(2);
        b2 = b(3); b3 = b(4); b4 = b(5); b5 = b(6);
        [yt] = [yt,calc_point(a0,a1,a2,a3,a4,a5,t)];
        [vxt] =[vxt, calc_first_derivative(a1,a2,a3,a4,a5,t)];
        [xt] = [xt,calc_point(b0,b1,b2,b3,b4,b5,t)];
        [vyt] =[ vyt, calc_first_derivative(b1,b2,b3,b4,b5,t)];
    end
    
    velocity = sqrt(vxt.^2 + vyt.^2);
    p_of_v = [xt',yt',velocity'];
        
end

function [cost_graph] = cal_lat_frenet_paths()
    global MAX_ROAD_WIDTH D_ROAD_W D_ROAD_LON MINT  DT MAXT KJ KD KT KLD KLAT KLON;
    global merge_dir lat_offset current_velocity current_acceleration;
    global sa0 va0 sb0 vb0 
    
    frenet_paths =[];
    cost_graph = [];
    if merge_dir == 1 % merging to left lane
        lower_bound = -MAX_ROAD_WIDTH;
        upper_bound = 0;
    else % merging to right lane
        lower_bound = 0;
        upper_bound = MAX_ROAD_WIDTH;
    end
    
    for Ti = MINT : DT : MAXT
        for di = lower_bound : D_ROAD_W : upper_bound
            xs = lat_offset;
            vxs = 0;
            axs = 0;
            T = Ti; % sampling on T
            xe = di; % sampling on lateral offset
            vxe = 0;
            axe = 0;
            [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
                vxs, axs, xe, vxe, axe,T);
            [jerk_bar_lat] = cal_j_bar(a3,a4,a5,Ti);
            [d_bar_lat] = calc_d_bar(a0,a1,a2,a3,a4,a5,Ti);
            cost_total_lat = KJ * jerk_bar_lat + KD * d_bar_lat + KT * Ti;
            
            
            xs = 0;
            vxs = current_velocity;
            axs = current_acceleration;

            sa = sa0 + va0 * Ti; % a_vehicle: the nearest adjacent vehicle;
            sb = sb0 + vb0 * Ti; % b_vehilce: the second nearest adjacent vehicle that is in front of the a_vehicle
            delta_s = 1/4 * (sb - sa); % how to determine ???
            xe = 1/2 * (sb + sa);
            vxe = 1/2 * (va0 + vb0);
            axe = 0;
            
            for si = xe - delta_s : D_ROAD_LON : xe + delta_s
           
                [b0, b1, b2, b3, b4, b5] = quintic_polynomial(xs, ...
                    vxs, axs, xe, vxe, axe,T);
                [jerk_bar_lon] = cal_j_bar(b3,b4,b5,Ti);
                delta_d = abs(si - xe);

                cost_total_lon = KJ * jerk_bar_lon + KLD * delta_d + KT * Ti;
               
                cost_total = KLAT * cost_total_lat + KLON * cost_total_lon;
                cost_graph = [cost_graph;[cost_total, Ti, di, si,...
                    a0, a1, a2, a3, a4, a5, b0, b1, b2, b3, b4, b5]];
            end
        end
    end
    cost_graph = sortrows(cost_graph);
end

function frenet_data = check_status(cost_graph) 
    frenet_data = cost_graph(1,:);
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
x = A\b;
a0 = xs;
a1 = vxs;
a2 = axs/2;

a3 = x(1);
a4 = x(2);
a5 = x(3);
end

function [xt] = calc_point(a0,a1,a2,a3,a4,a5,t)
xt = a0 + a1 * t + a2 * t ^2 + a3 * t^3 + a4 * t^4 + a5 * t^5;
end

function [d_bar] = calc_d_bar(a0,a1,a2,a3,a4,a5,T)
    xt = [];
    for t =0 : 0.1 : T
        xt = [xt, calc_point(a0,a1,a2,a3,a4,a5,t)];
    end
    d_bar = mean(abs(xt));
end

function [jerk_bar] = cal_j_bar(a3,a4,a5,T)
    jt = [];
    for t =0 : 0.1 : T
        jt = [jt, calc_third_derivative(a3,a4,a5,t)];
    end
    jerk_bar = mean(abs(jt));
    
    
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
 