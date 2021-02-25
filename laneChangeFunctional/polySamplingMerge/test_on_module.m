clc
clear all
close all

global MAX_ROAD_WIDTH D_ROAD_W D_ROAD_LON MINT MIND DT DD MAXT MAXD KJ KD KT KLD KLAT KLON KK KKD KD_constrain KT_constrain;
global merge_dir lat_offset vel_lon acc_lon vel_lat acc_lat ; 
global sa0 va0 sb0 vb0 
global A0 A1 A2 A3 B0 B1 B2 B3
global LEN caseNum
global speed_limit curvature_limit MAX_ACC MIN_ACC

MAX_ROAD_WIDTH = 3 ; % [m]
D_ROAD_W = 0.5 ; % [m]
D_ROAD_LON = 0.5;
DT = 1 ; % Delta T [s]
MAXT = 6;% [s]
MINT = 3; % [s]
DD = 1 ; % Delta T [s]
MAXD = 80;% [s]
MIND = 40; % [s]
KJ = 0.1;
KT = 0.1;
KD = 1;
KLD = 1;
KLAT = 1;
KLON = 1;
KK = 1;
KKD = 1;
KD_constrain = 1;
KT_constrain = 1;

merge_dir = 1;
vel_lon = 10;
acc_lon = 0;
vel_lat = 0;
acc_lat = 0;
lat_offset = -6;

sa0 = 0;
va0 = 10;
sb0 = 15;
vb0 = 10; 

A0 = -3; A1 = -0.1; A2 = -0.001; A3 = -0.0001;
B0 = 3; B1 = -0.1; B2 = -0.001; B3 = -0.00008;

LEN = 80;
caseNum = 1;
speed_limit = 33.3; % which is 120kph;
curvature_limit = 1/50;
MAX_ACC = 4;
MIN_ACC = -4;


%% the test declare that when caseNum == 4, it is a free lane changing.
% when caseNum != 4, it is merging lane changing.
tic;

[output,reference] = dynamic_planning();
toc; 

fprintf("the calculation time = %f  ms \r",1000*toc);
    
 line_a = [[],[]];
    line_b = [[],[]];
for i = 0:LEN
    y = A0 +A1 * i + A2 *i^2 + A3 *i^3;
    line_a = [line_a; [i,y]];
end

for i = 0:LEN
    y = B0 + B1 * i + B2 * i^2 + B3 * i^3;
    line_b = [line_b; [i,y]];
end

figure
plot(line_a(:,1), line_a(:,2));
hold on
plot(line_b(:,1), line_b(:,2));

hold on
plot(reference(:,1),reference(:,2),'--b')

hold on
plot(output(:,1),output(:,2));
title("planned traj in one loop");
legend("lane a","lane b","lane reference","planned traj in one loop");
%% figure plot for merging lane changing




%%
% frenet_data = check_status(cost_graph);
% cost_total = frenet_data(1);
% Te = frenet_data(2);
% de = frenet_data(3);
% se = frenet_data(4);
% [y_of_x,p_of_v,p_of_a] = conbination(frenet_data);
% toc; 
% 
% fprintf("the calculation time = %f  ms \r",1000*toc);
% 
% figure
% plot(p_of_v(:,1),p_of_v(:,2));
% title("y of x");
% figure
% plot(p_of_v(:,1),p_of_v(:,3));
% title("p of v");
% figure
% plot(p_of_a(:,1),p_of_a(:,3));
% title("p of a");

%%
function [output,reference] = dynamic_planning()
    %% this function discrriminate two different sampling methods.
    % if caseNum ==4, it means this is simple lane changing, we change lane
    % without considering of velocity planning
    % if caseNum != 4, it means this is merging lane changing, we apply
    % x(t)-y(t) method to plan spatially and temporally. 
    
    global MAX_ROAD_WIDTH D_ROAD_W D_ROAD_LON MINT MIND DT DD MAXT MAXD KJ KD KT KLD KLAT KLON KK KKD KD_constrain KT_constrain;
    global merge_dir lat_offset vel_lon acc_lon vel_lat acc_lat ;
    global sa0 va0 sb0 vb0 
    global A0 A1 A2 A3 B0 B1 B2 B3
    global LEN caseNum
    global speed_limit curvature_limit MAX_ACC MIN_ACC
    
    [reference] = reference_line_generator(A0,A1,A2,A3, B0,B1,B2,B3, LEN);
   
    if caseNum == 4 || caseNum == 2
        % Case4 does simplified lane changing, while Case2 does lane
        % changing without front vehicles
        [cost_graph] = calc_frenet_paths_free();
        D0 = lat_offset; % how to determine D0 is still a problem??? calculate using correct 1/2*(A0 + B0)??
        Ti = cost_graph(1,2);
        Di =cost_graph(1,3);
        [ref_bezier] = ref_bezier_generation(reference, D0,Ti,Di);
        trajs_new_origin = reference_generation(reference, ref_bezier);% 
        
        delta_heading_rad = calculat_delta_heading(reference, trajs_new_origin);
        delta_heading_deg = rad_to_deg(delta_heading_rad); % If you need 
        kappa = calculate_kappa_oneshot(trajs_new_origin);
        adding = zeros(length(kappa),2)-1;
        output = [trajs_new_origin,ref_bezier,delta_heading_rad,kappa,adding];
%         output = transition_to_BUS(output);
        % the output contains infomation as follow: 
        %1,2 cols: under vehicle coordinate, the x,y positions of planned
        %trajectories;
        %3,4 cols: w.r.t longitudinal intergration s, the lateral offset on
        %each sampled s, offset to left of reference line is positive, and
        %the other side is negative;
        % 5 cols: delta_heading of matched point vectors between reference
        % line and planned trajs, anti-clock wise from reference to planned
        % trajs is positive;
        % 6 cols: planned trajs kappa, vehicle turing left is positive and
        % turning right is negative;
    else
        % do merging method lane changing
        output =  [];
        [cost_graph] = calc_frenet_paths_constraint();
        cost_graph_optimal = check_status(cost_graph);
        [y_of_x,p_of_v,p_of_a] = conbination(cost_graph_optimal);
        Ti = cost_graph_optimal(2);
        [ref_poly] = ref_poly_generation(reference, y_of_x);
        trajs_new_origin = reference_generation(reference, ref_poly);% 
        [v_profile] = velocity_intepolation(p_of_v,reference);
        [a_profile] = acc_intepolation(p_of_a,reference);
        delta_heading_rad = calculat_delta_heading(reference, trajs_new_origin);
        delta_heading_deg = rad_to_deg(delta_heading_rad); % If you need 
        kappa = calculate_kappa_oneshot(trajs_new_origin);
        output = [trajs_new_origin,ref_poly,delta_heading_rad,kappa,v_profile,a_profile];
%         output = transition_to_BUS(output);

    end
end

%%
function [ref_bezier] = ref_bezier_generation(reference_1, D0, Ti, Di)
%% this function generate bezier curve information 
% input: the centerline reference_1, bezier curve control points
% output: the matrix is in dimension of n by 2, with its first col
% longitudinal integration length, second col lateral offset with respect
% to center line.
% notice: shifting to left is positive, and vice versa. 
S = 0;
    ref_bezier = [[],[]];
    index =1;
    while S < Ti && (index+1) <= length(reference_1)
        p = Bezierfrenet_5(D0, Ti, Di,S);
        ref_bezier =[ref_bezier; p];
        S = S + sqrt((reference_1(index+1,1)-reference_1(index,1))^2 + ...
            (reference_1(index+1,2)-reference_1(index,2))^2);
        index = index + 1;
    end
end

%%
function [v_profile] = velocity_intepolation(p_of_v,reference)
    
S = 0;
    v_profile = [];
    index =1;
    X = p_of_v(:,1);
    V = p_of_v(:,3);
    XMAX = min(reference(end,1),X(end));
    
    while S <= XMAX && (index+1) <= length(reference)
        
        v = [S,interp1(X,V,S,'spline')];
        
        v_profile =[v_profile; v];
        S = S + sqrt((reference(index+1,1)-reference(index,1))^2 + ...
            (reference(index+1,2)-reference(index,2))^2);
        index = index + 1;
    end


end


function [a_profile] = acc_intepolation(p_of_a,reference)
    
    S = 0;
    a_profile = [];
    index =1;
    X = p_of_a(:,1);
    A = p_of_a(:,3);
    XMAX = min(reference(end,1),X(end));
    
    while S <= XMAX && (index+1) <= length(reference)
        
        a = [S,interp1(X,A,S,'spline')];
        
        a_profile =[a_profile; a];
        S = S + sqrt((reference(index+1,1)-reference(index,1))^2 + ...
            (reference(index+1,2)-reference(index,2))^2);
        index = index + 1;
    end



end
%%
function [ref_poly] = ref_poly_generation(reference, y_of_x)
%% this function generate polynomial curve informaion

    S = 0;
    ref_poly = [[],[]];
    index =1;
    X = y_of_x(:,1);
    Y = y_of_x(:,2);
    XMAX = min(reference(end,1),X(end));
    
    while S <= XMAX && (index+1) <= length(reference)
        
        p = [S,interp1(X,Y,S,'spline')];
        
        ref_poly =[ref_poly; p];
        S = S + sqrt((reference(index+1,1)-reference(index,1))^2 + ...
            (reference(index+1,2)-reference(index,2))^2);
        index = index + 1;
    end
end





%%
function [y_of_x,p_of_v,p_of_a] = conbination(frenet_data)
    Te = frenet_data(2);        
    for i = 5:10
        a(i-4) = frenet_data(i);
        b(i-4) = frenet_data(i+6);
    end
    
    xt = [];
    yt = [];
    vxt = [];
    vyt = [];
    axt = [];
    ayt = [];
    
    for t = 0:0.05:Te
        a0 = a(1); a1 = a(2); a2 = a(3); a3 = a(4);
        a4 = a(5); a5 = a(6); b0 = b(1); b1 = b(2);
        b2 = b(3); b3 = b(4); b4 = b(5); b5 = b(6);
        [yt] = [yt,calc_point(a0,a1,a2,a3,a4,a5,t)];
        [vyt] = [vyt, calc_first_derivative(a1,a2,a3,a4,a5,t)];
        [ayt] = [ayt, calc_second_derivative(a2,a3,a4,a5,t)];
        [xt] = [xt, calc_point(b0,b1,b2,b3,b4,b5,t)];
        [vxt] =[ vxt, calc_first_derivative(b1,b2,b3,b4,b5,t)];
        [axt] = [axt, calc_second_derivative(b2,b3,b4,b5,t)];
    end
    
    velocity = sqrt(vxt.^2 + vyt.^2);
    acceleration = sign(axt) .* sqrt(axt.^2 + ayt.^2);
    y_of_x = [xt',yt'];
    p_of_v = [xt',yt',velocity'];
    p_of_a = [xt',yt',acceleration'];
        
end

%%
function cost_graph_optimal = check_status(cost_graph)

    global MAX_ROAD_WIDTH D_ROAD_W D_ROAD_LON MINT MIND DT DD MAXT MAXD KJ KD KT KLD KLAT KLON KK KKD KD_constrain KT_constrain;
    global merge_dir lat_offset vel_lon acc_lon vel_lat acc_lat ;
    global sa0 va0 sb0 vb0 
    global A0 A1 A2 A3 B0 B1 B2 B3
    global LEN caseNum
    global speed_limit curvature_limit MAX_ACC MIN_ACC   
    
    i = 1;
    COND = 1;
    while COND == 1
        frenet_data = cost_graph(i,:);
        Te = frenet_data(2);        
        for j = 5:10
            a(j-4) = frenet_data(j);
            b(j-4) = frenet_data(j+6);
        end
    
        xt = [];
        yt = [];
        vxt = [];
        vyt = [];
        axt = [];
        ayt = [];

        for t = 0:0.1:Te
            a0 = a(1); a1 = a(2); a2 = a(3); a3 = a(4);
            a4 = a(5); a5 = a(6); b0 = b(1); b1 = b(2);
            b2 = b(3); b3 = b(4); b4 = b(5); b5 = b(6);
            [yt] = [yt,calc_point(a0,a1,a2,a3,a4,a5,t)];
            [vyt] = [vyt, calc_first_derivative(a1,a2,a3,a4,a5,t)];
            [ayt] = [ayt, calc_second_derivative(a2,a3,a4,a5,t)];
            [xt] = [xt, calc_point(b0,b1,b2,b3,b4,b5,t)];
            [vxt] =[ vxt, calc_first_derivative(b1,b2,b3,b4,b5,t)];
            [axt] = [axt, calc_second_derivative(b2,b3,b4,b5,t)];
        end
        
        trajs = [xt',yt'];
        velocity = sqrt(vxt.^2 + vyt.^2);
        acceleration = sign(axt) .* sqrt(axt.^2 + ayt.^2);
        kappa = calculate_kappa_oneshot(trajs);
        
        if ((max(abs(velocity))<= speed_limit) && (max(acceleration)<=MAX_ACC)...
                && (min(acceleration) >= MIN_ACC) && (max(abs(kappa)) < curvature_limit))
            cost_graph_optimal = cost_graph(i,:);
            COND = 2;
        end
        
        i = i+1
        
        if  i > size(cost_graph,1)
            COND = 2;
            cost_graph_optimal = cost_graph(1,:);
        end
    end
        
        
end
%%
function [cost_graph] = calc_frenet_paths_constraint()

% @breif this is the function to sample all possible candidate in cases of
    % constrained merging scenarios. it uses x(t)-y(t) method, which means it
    % outputs spatial and temporal profiles.

% input: 
    % directly call all global data
    
% output:
    % cost graph maintains all sampled candidate information, which is as
    % follow: The first col is the total cost. The second col is Ti, which
    % is time T. The third col is di, which is terminal lateral offset. The
    % fourth col is si, which is terminal longitudinal distance.
    
    
    global MAX_ROAD_WIDTH D_ROAD_W D_ROAD_LON MINT MIND DT DD MAXT MAXD KJ KD KT KLD KLAT KLON KK KKD KD_constrain KT_constrain;
    global merge_dir lat_offset vel_lon acc_lon vel_lat acc_lat ;
    global sa0 va0 sb0 vb0 
    global A0 A1 A2 A3 B0 B1 B2 B3
    global LEN caseNum
    global speed_limit curvature_limit MAX_ACC MIN_ACC
    
    frenet_paths =[]; % initiate it with empty
    cost_graph = []; % initiate it with empty
    
    if merge_dir == 1 % merging to left lane
        lower_bound = -MAX_ROAD_WIDTH / 2;
        upper_bound = 0;
    else % merging to right lane
        lower_bound = 0;
        upper_bound = MAX_ROAD_WIDTH / 2;
    end
    
    for Ti = MINT : DT : MAXT
        for di = lower_bound : D_ROAD_W : upper_bound
            xs = lat_offset;
            vxs = vel_lat;
            axs = acc_lat;
            %Ti is sampling on T
            xe = di; % sampling on lateral offset
            vxe = 0;
            axe = 0;
            [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
                vxs, axs, xe, vxe, axe,Ti);
            [jerk_bar_lat] = cal_j_bar(a3,a4,a5,Ti);
            [d_bar_lat] = calc_d_bar(a0,a1,a2,a3,a4,a5,Ti);
            cost_total_lat = KJ * jerk_bar_lat + KD_constrain * d_bar_lat + KT_constrain * Ti;
            
            
            xs = 0;
            vxs = vel_lon;
            axs = acc_lon;

            [xe,sa,sb] = cal_xe(caseNum, sa0,sb0,va0,vb0,Ti); % go to function definition for details
            
            delta_s = 1/4 * (sb - sa); % how to determine ??? we still have not make sure 
            
            vxe = 1/2 * (va0 + vb0);
            axe = 0;
            
            for si = xe - delta_s : D_ROAD_LON : xe + delta_s
           
                [b0, b1, b2, b3, b4, b5] = quintic_polynomial(xs, ...
                    vxs, axs, xe, vxe, axe,Ti);
                [jerk_bar_lon] = cal_j_bar(b3,b4,b5,Ti);
                delta_d = abs(si - xe);

                cost_total_lon = KJ * jerk_bar_lon + KLD * delta_d + KT_constrain * Ti;
               
                cost_total = KLAT * cost_total_lat + KLON * cost_total_lon;
                cost_graph = [cost_graph;[cost_total, Ti, di, si,...
                    a0, a1, a2, a3, a4, a5, b0, b1, b2, b3, b4, b5]];
            end
        end
    end
    cost_graph = sortrows(cost_graph);
end

%%
function [cost_graph] = calc_frenet_paths_free()

    global MAX_ROAD_WIDTH D_ROAD_W D_ROAD_LON MINT MIND DT DD MAXT MAXD KJ KD KT KLD KLAT KLON KK KKD;
    global merge_dir lat_offset vel_lon acc_lon vel_lat acc_lat ;
    global sa0 va0 sb0 vb0 
    global A0 A1 A2 A3 B0 B1 B2 B3
    global LEN caseNum
    global speed_limit
% lateral_offset, MAX_ROAD_WIDTH,...
    %D_ROAD_W, MINT,DT,MAXT,KJ,KD,KT,KK,KKD
    
% KJ is the cost weight of the jerk;
% KD is the cost weight of lateral offset with respect to the reference
% line;
% KT is the cost weight of the longitudinal distance 
% KK is the cost weight of curvature
% KKD is the cost weight of the derivative of curvature
% KO is the cost weight of ostacle distance

    D0 = lat_offset; % 0.5 * (a0 + b0) is also lateral_offset in lane keeping system;
    frenet_paths = [];
    cost_graph = []; 
    % we store all candicates' cost info in this matrix for review,
    % but remember that it is not necessary when the parameters are well turned.
    if merge_dir == 1 % merging to left lane
        lower_bound = -MAX_ROAD_WIDTH / 2;
        upper_bound = 0;
    else % merging to right lane
        lower_bound = 0;
        upper_bound = MAX_ROAD_WIDTH / 2;
    end
    
    j = 1;
    for di = lower_bound : D_ROAD_W : upper_bound
        for Ti =  MIND: DD: MAXD
            p = [];
            for t = 0:0.1:Ti
                p = [p; Bezierfrenet_3(D0, Ti, di,t)];
            end
            
            [pd] = calculate_pd(p);
            [pdd] = calculate_pdd(p);
            [k] = calculate_kappa(p,pd,pdd);
            [kappa_d] = calculate_kappa_d(p,k);
           
            cost_J = mean(abs(pdd));
            cost_D = mean(abs(p(:,2)));
            cost_T = Ti;
            cost_K = mean(abs(k));
            cost_KD = mean(abs(kappa_d));
                    
            cost_total = KJ * cost_J + KD * cost_D + cost_T * KT +...
                cost_K* KK + KKD * cost_KD;
            cost_graph = [cost_graph;[cost_total,Ti,di,cost_J,cost_D,cost_T,cost_K,cost_KD]];
            
%         cost_T = regularization(cost_T);
%         cost_D = regularization(cost_D);

        end
    end
        cost_graph = sortrows(cost_graph); % important info is in the first 3 columns: tatal_cost. Ti, di;
end


%%



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
        jt = [jt, calc_third_derivative(a3,a4, a5,t)];
    end
    jerk_bar = mean(abs(jt));
end

function [xe,sa,sb] = cal_xe(caseNum, sa0,sb0,va0,vb0,Ti)
    CONST =60; % It remains uncertain how how to choose a properiate distance CONST.    
    switch caseNum
        case 1 % in this case, we have vehicle a and vehilce b;
            sa = sa0 + va0 * Ti; % a_vehicle: the nearest adjacent vehicle which is declared as rear vehicle;
            sb = sb0 + vb0 * Ti; % b_vehilce: the nearest adjacent vehicle that is in front of the a_vehicle(front vehicle);
            xe = sa + (sb - sa) * 2/3;% 1/2 * (sb + sa);
        case 2 % in this case, we have only vehicle a;
           sa = sa0 + va0 * Ti;
           sb = sa + CONST; % the distance between two vehicles is CONST
           xe = sa + (sb - sa) * 2/3;% 1/2 * (sb + sa);
        otherwise % in this case, we only have vehicle b;
           sb = sb0 + vb0 * Ti;
           sa =  sb - CONST; % the distance between two vehicles is CONST
           xe = sa + (sb - sa) * 2/3;% 1/2 * (sb + sa);
    end              
end


%%  
function [reference] = reference_line_generator(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
%% in this function, we use the left and right lane polynomials to generate
% a reference center line
% input: left lane polynomials, right lane polynomials, LEN(length of reference)
% output: reference center line polynomials
reference = [[],[]];
if LEN == 0
    fprintf('LEN = 0, reference cannot be generated. \r')
    return;
end

for i = 0:0.2:LEN
    y = 0.5 * ( (a0 + a1 * i + a2 * i^2 + a3 * i^3) + (b0 + b1 * i + b2 * i^2 + b3 * i^3));
    reference =  [reference; [i,y]];
end
end
%%
function y = f_a(a0, a1, a2, a3, x)
%% calculate polynomial y values
    y = a0 + a1 * x + a2 * x^2 + a3 * x^3;
end

function y = f_b(b0, b1, b2, b3, x)
%% calculate polynomial y values
    y = b0 + b1 * x + b2 * x^2 + b3 * x^3;
end

function y = deg_to_rad(x)
%% deg to rad unit switch
    y = x * pi / 180;
end

function y = rad_to_deg(x)
%% rad to degree unit switch
    y = x * 180 / pi;
end
%%
function [reference] = reference_line_generator_frenet(a0,a1,a2,a3, b0,b1,b2,b3, LEN)
%% this function generates center line in discrete form
% input: the left lane and right lane polynomials parameters, and
% longitudinal LEN(how long we want to generate such a curve)
% output: using frenet method to generate the ceterline position in x and
% y

if LEN == 0
    fprintf('LEN = 0, reference cannot be generated. \r');
    return;
end

S = 0;
iter = 0;
x_a = 0;
x_b = 0;

delta_x = 0.02;
RESOLUTION = 0.2;
y_a_pre = f_a(a0,a1,a2,a3, x_a);
y_b_pre = f_b(b0,b1,b2,b3, x_b);
reference = [x_a, 0.5*(y_a_pre + y_b_pre)];
while S < LEN

    s_a = 0;
    s_b = 0;
    while s_a < RESOLUTION
        x_a = x_a + delta_x;
        y_a = f_a(a0,a1,a2,a3, x_a);
        s_a = s_a + sqrt( delta_x^2 + (y_a - y_a_pre)^2);
        y_a_pre = y_a;
    end
    
    while s_b < RESOLUTION 
        x_b = x_b + delta_x;
        y_b = f_b(b0,b1,b2,b3, x_b);
        s_b = s_b + sqrt( delta_x^2 + (y_b - y_b_pre)^2);
        y_b_pre = y_b;
    end
    
    S = S + RESOLUTION;
    reference = [reference; [0.5*(x_a + x_b), 0.5*(y_a + y_b) ]];
    
    iter = iter + 1;
    if iter >= 5000
        print("while loop too long, missing error! \r")
        break;
    end
    
end
end


function [p] = Bezierfrenet_3(D0, Ti, Di,t)
    %% 
    % D0 initial lateral offset, which is current vehicle lateral offset with
    % respect to center line of current lane 
    % Ti:  the longitudinal position of the desired target
    % Di the lateral position of the desired target
    % t sampling step in discretization

    %set the four control point
    p0 = [0, D0];
    p1 = [Ti/2, D0];
    p2 = [Ti/2, Di];
    p3 = [Ti, Di];

    p = (1-(t)/Ti)^3*p0 + 3*(1-(t)/Ti)^2*(t)/Ti*p1 + ...
     3*(1-(t)/Ti)*((t)/Ti)^2*p2 + ((t)/Ti)^3*p3;
end

function [p] = Bezierfrenet_5(D0, Ti, Di,t)
%% this function provides the bezier curve information. 
% when given control points information, it can generate y values based on
% given x values.
    p0 = [ 0, D0];
    p1 = [0.25 * Ti, D0];
    p2= [0.5 *Ti, D0];
    p3 =[ 0.5 * Ti, Di];
    p4 =[ 0.75 * Ti, Di];
    p5 = [Ti, Di];
  %generate a fifth order bezier curve

    p= (1-(t)/Ti)^5*p0 + 5*(1-(t)/Ti)^4*((t)/Ti)*p1 + 10*(1-(t)/Ti)^3*((t)/Ti)^2*p2 +...
     10*(1-(t)/Ti)^2*((t)/Ti)^3*p3 +5*(1-(t)/Ti)*((t)/Ti)^4*p4 + ((t)/Ti)^5*p5;

end 
%%

function [trajs_new] = reference_generation(trajs_local, p_store)
%% this function provides method of generating changing lane discrete positions.    
% inputs: here the trajs_local is a vector<vector<double>>,with its dimension
%n by 2, the p_store store the information Bezier curve generaion
%function creates, which are longitudinal 's' and 'lateral offset', which
%is also in dimension of n by 2. 
%output: with the two inputs info, we are able to generate under vehicle
%coordinate the changing lane positions by doing position shift, based on
%the original trajs_local, in frenet direction with offset info provided by
%p_store.
if (isempty(trajs_local)) || (length(trajs_local) == 0)
    fprintf('reference trajs is not well generated! \r');
    trajs_new= [];
    return;
end

if isempty(p_store) || (length(p_store) == 0)
    fprintf('offset Bezier curve is not well generated! \r');
    trajs_new= [];
    return;
end

    trajs_new = [[ ],[ ]];
    for i = 1: min(length(p_store), length(trajs_local))
%         if (i + current_index) > length(waypoint)
%             break;
%         end
        d = p_store(i,2);
        if trajs_local(i,1) == 0
            theta = 0;
        else
            theta = atan(trajs_local(i,2) / trajs_local(i,1));
        end
        
        if (theta>-pi/2 && theta <=0)
            x = trajs_local(i,1) - d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new = [trajs_new ; [x,y]];
        elseif (theta>0 && theta < pi/2)
            x = trajs_local(i,1) - d * sin(theta);
            y = trajs_local(i,2) + d * cos(theta);
            trajs_new = [trajs_new ; [x,y]];    
        else
           fprintf("it seems that the reference line is unacceptable!");
        end
    end
end

%%
function [k] = calculate_kappa(p,pd,pdd) 
     for i  = 1:length(p)
         k(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
     end
end

%%
function [pd] = calculate_pd(p)
    % calculate the first derivatives
    pd = zeros(length(p),1);
    for i = 1:length(p)-1
     pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
    end
end

%%
function [pdd] = calculate_pdd(p)
    % calculate the second derivatives
     pdd = zeros(length(p),1);
     for i =2: length(p)-1
         pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
    %    pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(-p(i,1)+p(i+1,1))^2;
     end
end

%%
function [kappa_d] = calculate_kappa_d(p,k)
    kappa_d = zeros(length(p),1);
    kappa_d(1) = 0;
    for i = 2: length(p)
        kappa_d(i) = (k(i)-k(i-1))/norm(p(i,:)- p(i-1,:));
    end
end

%%
function [xt] =calc_first_derivative(a1,a2,a3,a4,a5,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3  +  5 * a5 * t^4;
end

%%
function [xt]  = calc_second_derivative(a2,a3,a4,a5,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2 + 20* a5 *t^3;
end

%%
function [xt] = calc_third_derivative(a3,a4,a5,t)
xt =6 * a3 + 24 * a4 * t + a5 * t^2;
end

function [delta_heading] = calculat_delta_heading(center_line, traj_new)
    LEN = min(length(center_line), length(traj_new));
    delta_heading = [0];
    for i = 1: LEN-1
        x1 = center_line(i+1,1) - center_line(i,1);
        y1 = center_line(i+1,2) - center_line(i,2);
        x2 = traj_new(i+1,1) - traj_new(i,1);
        y2 = traj_new(i+1,2) - traj_new(i,2);
        delta_theta =  (x1 * x2 + y1 * y2) / (sqrt(x1^2 + y1^2) * sqrt(x2^2 + y2^2));
        delta_heading =  [delta_heading; acos(delta_theta)];
    end
end
%%

function [kappa] = calculate_kappa_oneshot(trajs_new)

% this function provide the method of generating a sequence of curvature(kappa) 
% input: a sequence of discrete points with position x and y.
% output: a sequence of kappa on each point.
% notice: vehicle turning right has negative curvature, and vice versa.

if (isempty(trajs_new)) || (length(trajs_new) == 0)
    fprintf('changing lane trajs is not well generated! \r');
    kappa = zeros(length(trajs_new),1);
    return;
end

    pd = zeros(length(trajs_new),1);
    pdd = zeros(length(trajs_new),1);
    kappa = zeros(length(trajs_new),1);
    
    % calculate the first derivatives
    
    for i = 1:length(trajs_new)-1
        
        if (trajs_new(i+1,1)-trajs_new(i,1)) == 0
            denominator_pd = 0.001;
        else
            denominator_pd = trajs_new(i+1,1)-trajs_new(i,1);
        end
        
        pd(i) = (trajs_new(i+1,2)-trajs_new(i,2))/denominator_pd;   
    end
    pd(length(trajs_new)) = pd(length(trajs_new)-1);
    % calculate the second derivatives
    pdd(1) = 0;
    for i =2: length(trajs_new)-1
        
        if (0.5*(-trajs_new(i-1,1)+trajs_new(i+1,1)))^2 == 0
            denominator_pdd = 0.001;
        else
            denominator_pdd = 0.5*(-trajs_new(i-1,1)+trajs_new(i+1,1))^2;
        end
        
        pdd(i) = (trajs_new(i+1,2)-2*trajs_new(i,2) +...
            trajs_new(i-1,2))/denominator_pdd;
    end
    pdd(length(trajs_new)) = pdd(length(trajs_new)-1);
    
    for i  = 1:length(trajs_new)
        kappa(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
    end
end




































 