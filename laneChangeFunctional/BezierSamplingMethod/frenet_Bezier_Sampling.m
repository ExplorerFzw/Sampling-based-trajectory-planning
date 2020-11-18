clc
clear all
close all
format short

k = 0.15;  % look forward gain
Lfc = 1;  % look-ahead distance
Kp = 1.0 ; % speed propotional gain
dt = 0.1 ;% [s]
L = 2.8  ;% [m] wheel base of vehicle

MAX_SPEED = 50.0 / 3.6;  % 最大速度 [m/s]
MAX_ACCEL = 1.0 ; % 最大加速度[m/ss]
MAX_CURVATURE = 1.0 ; %最大曲率 [1/m]
MAX_ROAD_WIDTH =2.5 ; % 最大道路宽度 [m]
D_ROAD_W = 0.1 ; % 道路宽度采样间隔 [m]
DT = 1 ; % Delta T [s]
MAXT = 8;% 最大预测 [s]
MINT = 4; % 最小预测 [s]
target_speed = 20; % [m/s]
D_T_S = 5.0 / 3.6 ; % 目标速度采样间隔 [m/s]
N_S_SAMPLE = 1 ; % sampling number of target speed
ROBOT_RADIUS = 0.4; % robot radius [m]
predict = 14;
% 
KJ = 1;
KT = 0.1;
KD = 2;
KK = 1;
KKD = 1;
KO = 15;
KC = 1;

wx = [0.0, 10.0, 20.5, 30.0, 40.5, 50.0, 60.0];
wy1 = [0.0, -4.0, 1.0, 6.5, 8.0, 10.0, 6.0];
ob = [ 60,-10;24.1,3.4];
% ob = [0,-2];
figure
[xt, yt,YAW] = cubic_spline(wx,wy1,MAX_ROAD_WIDTH);
% hold on;

plot(ob(:,1),ob(:,2),'ko')
plot(ob(:,1),ob(:,2),'ks')
plot(ob(:,1),ob(:,2),'k*')

for i = 1: size(ob,1)
    alpha=0 : pi/40 : 2 * pi;
    r=ROBOT_RADIUS;
    x=ob(i,1) +r*cos(alpha);
    y=ob(i,2) + r*sin(alpha);
    plot(x,y)
    hold on
end

xt = xt';
yt = yt';

i = 1;
T = 40;

x = 0; y = 0; yaw = 0; v = 0;
time = 0;
% Lf = k * v + Lfc; %some constant parameters we set for the vehicle  
waypoints = [xt,yt];

cx = waypoints(:,1);
cy = waypoints(:,2);
YAW = YAW';

history_TD = [];

plot(cx,cy,'r')
hold on;

%%
while T > time 
   
    %find the current location using reference line index to indicate.
    tic;
    [lat, current_ind]= calc_current_index(x,y,cx,cy); 
    
    lateral_offset = lat;
    
    [cost_graph] = calc_frenet_paths(cx,cy,YAW,ob,current_ind,lateral_offset, MAX_ROAD_WIDTH,...
        D_ROAD_W, MINT,DT,MAXT,history_TD,KJ,KD,KT,KK,KKD,KO,KC);
    
    [val] = collision_checking(lateral_offset,cost_graph,ROBOT_RADIUS, ob,cx,cy,YAW,current_ind );

    D0 = lateral_offset; 
    Ti = cost_graph(val,2);
    Di =cost_graph(val,3);
    history_TD = [Ti,Di];
    
    i = 1;
    d = []; 
    steer = [];
    location_ind = [];
    
    [p,location_ind] = bezier_ref_generation(D0, Ti, Di,cx,cy,current_ind);
     
    waypoint_global = frenet_to_global(cx,cy,YAW, location_ind,p);
    ref =  waypoint_global (1:2,:)';
    path_x = ref(:,1);
    path_y = ref(:,2);
    ai = PIDcontrol(target_speed, v,Kp,MAX_ACCEL); % calculate the PID controller output;
    delta = pure_pursuit_control(x,y,yaw,v,path_x,path_y,k,Lfc,L,predict) ;% pure pursuit controller will give desired steering angle;
    toc;
    fprintf('smooth line generation time is: %f ms \r',(1000*toc));
    
    plot(path_x,path_y,'-b','MarkerSize',2)
    fprintf('delta = %f \r',delta);
    [x,y,yaw,v] = update(x,y,yaw,v, ai, delta,dt,L); % update the vehicle states;
    
    time = time + dt;
    %     pause(0.1)
    plot(x,y,'rs')
    hold on
    plot(path_x,path_y,'bs','Markersize',0.5)
    hold on
    %,cx((target_ind-10):target_ind),cy((target_ind-10):target_ind),'g-o'
    drawnow 
%     pause(0.1);
    hold on
end
%%
function [waypoint] = frenet_to_global (cx, cy,YAW, location_ind,P) % waypoint generate a 2 by n matrix
waypoint = [];
for i  = 1 : length(location_ind)
    theta = YAW(location_ind(i)) + pi/2; 
    waypoint(1, i) = cx(location_ind(i)) + cos(theta) * P(i,2);
    waypoint(2, i) = cy(location_ind(i)) + sin(theta) * P(i,2);
end
end

function [x, y, yaw, v] = update(x, y, yaw, v, a, delta,dt,L)
    x = x + v * cos(yaw) * dt;
    y = y + v * sin(yaw) * dt;
    yaw = yaw + v / L * tan(delta) * dt;
   v = v + a * dt;
end

function [a] = PIDcontrol(target_v, current_v, Kp,MAX_ACCEL)
a = Kp * (target_v/3.6 - current_v);
a = min(max(a, -10), MAX_ACCEL);
end

function [ trans] =  BackTransfer(x,y,heading_current)

theta =  heading_current;
R = [cos(theta),-sin(theta); sin(theta), cos(theta)];
xt = x;
yt = y;
T = [xt; yt ] ;
trans = [[R,T];[0,0,1]];
end

function [delta] = pure_pursuit_control(x,y,yaw,v,path_x,path_y,k,Lfc,L,predict)
if predict >length(path_x)
    predict = length(path_x);
end

tx =path_x(predict);
    ty =path_y(predict);
    denom = tx-x;
%     if denom == 0
%         denom = 0.0001
%     end
   alpha = atan(ty-y)/((denom)) - yaw;
    
 Lf = k * v + Lfc;
 delta = atan(2*L * sin(alpha)/Lf)  ;
 if isnan(delta)
     delta = 0;
 end
 
end

function [lat,current_ind]= calc_current_index(x,y, cx,cy)
N =  length(cx);
Distance = zeros(N,1);
for i = 1:N
    Distance(i) =  sqrt((cx(i)-x)^2 + (cy(i)-y)^2);
end
[value, location]= min(Distance);
current_ind = location;
lat = value;
 if cy(current_ind)>y
        lat = - lat;
    else
        lat = lat;
    end
end

function [angle] = pipi(angle)

if (angle > pi)
    angle =  angle - 2*pi;
elseif (angle < -pi)
    angle = angle + 2*pi;
else
    angle = angle;
end
end


function [cost_graph] = calc_frenet_paths(cx,cy,YAW,ob,current_ind,lateral_offset, MAX_ROAD_WIDTH,...
    D_ROAD_W, MINT,DT,MAXT,history_TD,KJ,KD,KT,KK,KKD,KO,KC)
% KJ is the cost weight of the jerk;
% KD is the cost weight of lateral offset with respect to the reference
% line;
% KT is the cost weight of the longitudinal distance 
% KK is the cost weight of curvature
% KKD is the cost weight of the derivative of curvature
% KO is the cost weight of ostacle distance

    frenet_paths = [];
    cost_graph = []; 
    % we store all candicates' cost info in this matrix for review,
    % but remember that it is not necessary when the parameters are well turned.
    j = 1;
    for di = -MAX_ROAD_WIDTH: D_ROAD_W: MAX_ROAD_WIDTH
        for Ti =  MINT: DT: MAXT
            p = [];
            for t = 0:0.1:Ti
                p = [p; Bezierfrenet_3(lateral_offset, Ti, di,t)];
            end
            [pd] = calculate_pd(p);
            [pdd] = calculate_pdd(p);
            [k] = calculate_kappa(p,pd,pdd);
            [kappa_d] = calculate_kappa_d(p,k);
            [obs_val] = obstacle_term_calculation(lateral_offset,Ti,di,current_ind,cx,cy,YAW,ob);
            [consecutivity] = consec_term_calculation(history_TD,Ti,di,lateral_offset);
            cost_J = mean(abs(pdd));
            cost_D = mean(abs(p(:,2)));
            cost_T = Ti;
            cost_K = mean(abs(k));
            cost_KD = mean(abs(kappa_d));
            cost_O = obs_val;
            cost_consec = consecutivity;
            cost_total = KJ * cost_J + KD * cost_D + cost_T * KT +...
                cost_K* KK + KKD * cost_KD + KO * cost_O + KC * cost_consec;
            cost_graph = [cost_graph;[cost_total,Ti,di,cost_J,cost_D,cost_T,cost_K,cost_KD,cost_O]];
            
%         cost_T = regularization(cost_T);
%         cost_D = regularization(cost_D);

        end
    end
        cost_graph = sortrows(cost_graph);
end
     
function [val] = obstacle_term_calculation(lateral_offset,Ti,Di,current_ind,cx,cy,YAW,ob)
	obs_thread = 5;
    D0 = lateral_offset;
    i = 1;
    S= current_ind;
    location_ind = [];
    s = 0;

    while  s<= Ti
        p(i,:)= Bezierfrenet_3(D0, Ti, Di,s);
        location_ind(i) = S;
        if S+1<=length(cx)
            s = s + sqrt((cx(S+1)-cx(S))^2 +  (cy(S+1)-cy(S))^2);
            S = S+1;
            i = i+1;
        else
            break;
        end
    end

    waypoint_global = frenet_to_global (cx, cy,YAW, location_ind,p);    
    checkline=  waypoint_global (1:2,:)';

    for j =1:size(ob,1)
        for k = 1: length(checkline)
           dist(j,k) = obs_thread - min(obs_thread, ...
               sqrt((ob(j,1)-checkline(k,1))^2 + ((ob(j,2)-checkline(k,2))^2)));
        end
    end
    for i = 1: size(dist,1)
        summation = mean(dist(i,:));
    end
        val = summation / size(dist,1);
end

function [consecutivity] = consec_term_calculation(history_TD,Ti,di,D0)
    if isempty(history_TD)
        consecutivity = 0;
    else

        p_history = [];
        p_new = [];
        D_his = history_TD(2);
        T_his = history_TD(1);
        for t = 0:0.1:T_his
            p_history = [ p_history; Bezierfrenet_3(D0, T_his, D_his,t)];
        end

        for t = 0:0.1:T_his
            p_new = [ p_new; Bezierfrenet_3(D0, Ti, di,t)];
        end
        
        consecutivity = mean(abs(p_history(:,2) - p_new(:,2)));
    end
end
    

function [val] = collision_checking(lateral_offset,frenet_paths,ROBOT_RADIUS, ob,cx,cy,YAW,current_ind )
    Flag =0;
    val = 1;
    D0 = lateral_offset;
    
while Flag == 0
    Ti = frenet_paths(val,2);
    Di = frenet_paths(val,3);
    
    i = 1;
    S= current_ind;
    location_ind = [];
    s = 0;
    n= 1;
    while  s<= Ti
        p(i,:)= Bezierfrenet_3(D0, Ti, Di,s);
        location_ind(i) = S;
        if S+1<=length(cx)
            s = s + sqrt((cx(S+1)-cx(S))^2 +  (cy(S+1)-cy(S))^2);
            S = S+1;
            i = i+1;
        else
            break;
        end
    end

    waypoint_global = frenet_to_global(cx, cy,YAW, location_ind,p);    
    checkline=  waypoint_global (1:2,:)';

    for j =1:size(ob,1)
        for k = 1: length(checkline)
           dist(n) = sqrt((ob(j,1)-checkline(k,1))^2 + ((ob(j,2)-checkline(k,2))^2));
           n = n+1;
        end
    end
    
    if min(dist) > ROBOT_RADIUS 
        Flag = 1;
    else
        val = val + 1;
    end

    if val == length(frenet_paths)
        Flag = 1;
        fprintf('no accessible way!')
    end
end

end

function [p,location_ind] = bezier_ref_generation(D0, Ti, Di,cx,cy,current_ind)
    s = 0;
    p = [];
    location_ind = [];
    S = current_ind;
    i = 1;
    while  s<= Ti
        p = [p;Bezierfrenet_3(D0, Ti, Di, s)];
        location_ind(i) = S;
        s = s + sqrt((cx(S+1)-cx(S))^2 + (cy(S+1)-cy(S))^2);
        S = S+1;
        i = i+1;
    end
end
 
function [p] = Bezierfrenet_3(D0, Ti, Di,t)
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

function [k] = calculate_kappa(p,pd,pdd) 
     for i  = 1:length(p)
         k(i) = (pdd(i))/((1+pd(i)^2)^(1.5));
     end
end

function [pd] = calculate_pd(p)
    % calculate the first derivatives
    pd = zeros(length(p),1);
    for i = 1:length(p)-1
     pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
    end
end

function [pdd] = calculate_pdd(p)
    % calculate the second derivatives
     pdd = zeros(length(p),1);
     for i =2: length(p)-1
         pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
    %    pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(-p(i,1)+p(i+1,1))^2;
     end
end

function [kappa_d] = calculate_kappa_d(p,k)
    kappa_d = zeros(length(p),1);
    kappa_d(1) = 0;
    for i = 2: length(p)
        kappa_d(i) = (k(i)-k(i-1))/norm(p(i,:)- p(i-1,:));
    end
end

function [Px,Py,YAW] = cubic_spline(x,y,MAX_ROAD_WIDTH)
    
%     plot(x,y,'ro');
   
    
    N = length(x);
    A = zeros(N,N);
    B = zeros(N,1);

    for i = 1:N-1
        h(i) = x(i+1) - x(i);
    end

    A(1,1) = 1; 
    A(N,N) = 1;
    for i = 2:N-1
        A(i,i) = 2*(h(i-1) + h(i));
    end
   
    for i  =2 : N-1
        A(i, i+1) = h(i);
    end
   
    for i  = 2: N-1
        A(i,i-1) = h(i-1);
    end
   
    for i = 2:N-1
        B(i) = 6* (y(i+1)-y(i))/h(i) - 6* (y(i)-y(i-1))/h(i-1);
    end
    
    m= A\B
   
    for i = 1:N
        a(i) = y(i);
    end

    for i = 1:N
        c(i) = m(i)/2;
    end
   
    for i = 1:N-1
        d(i) =( c(i+1)-c(i) )/(3*h(i));
    end
      
    for i = 1:N-1
        b(i)  = (a(i+1)-a(i))/h(i)- h(i)/3*(c(i+1)+ 2*c(i));
    end
    
    Px = [];
    Py = [];
    
    for  i= 1:N-1
        X = x(i):0.1:x(i+1);
        Y = a(i)+ b(i)*(X-x(i)) + c(i) * (X- x(i)).^2 + d(i) * (X - x(i)).^3;
        Px = [Px,X];
        Py = [Py,Y];
        % plot(X, Y,'b-','LineWidth',3)
    end
       
    plot(Px, Py+ MAX_ROAD_WIDTH,'g-','LineWidth',3)
    hold on
    plot(Px, Py - MAX_ROAD_WIDTH,'g-','LineWidth',3)
    hold on  
       
    for i = 1: length(Px)-1
        yaw(i) = atan((Py(i+1)-Py(i))/(Px(i+1)- Px(i)));
    end
        yaw(end+1) = yaw(end);
        YAW = yaw;
%        s = zeros(length(Px),1);
%        s(1) = 0;
%        for i = 2: length(Px)
%            s(i) = sqrt((Px(i)-Px(i-1)^2+ Py(i)-Py(i-1)^2);
%            s(i) =s(i-1) + 
%        end
%        
end


       
       