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
MAX_ROAD_WIDTH =1.5 ; % 最大道路宽度 [m]
D_ROAD_W = 0.2 ; % 道路宽度采样间隔 [m]
DT = 1 ; % Delta T [s]
MAXT = 8;% 最大预测 [s]
MINT = 4; % 最小预测 [s]
TARGET_SPEED = 12.0 / 3.6 ; % 目标速度（即纵向的速度保持） [m/s]
D_T_S = 5.0 / 3.6 ; % 目标速度采样间隔 [m/s]
N_S_SAMPLE = 1 ; % sampling number of target speed
ROBOT_RADIUS = 0.4; % robot radius [m]
predict = 14;
% 
KJ = 0.1;
KT = 0.1;
KD = 10;
KLAT = 1.0;
KLON = 1.0;

wx = [0.0, 10.0, 20.5, 30.0, 40.5, 50.0, 60.0];
wy1 = [0.0, -4.0, 1.0, 6.5, 8.0, 10.0, 6.0];
wy2 = wy1 -3;
ob = [ 60,-10;24.1,3.4];
% ob = [0,-2];
figure
[xt, yt,YAW] = cubic_spline(wx,wy1,MAX_ROAD_WIDTH);
% hold on;
[xt2, yt2,YAW2] = cubic_spline(wx,wy2,MAX_ROAD_WIDTH);

plot(ob(:,1),ob(:,2),'ko')
plot(ob(:,1),ob(:,2),'ks')
plot(ob(:,1),ob(:,2),'k*')
for i = 1: size(ob,1)
    alpha=0:pi/40:2*pi;
    r=ROBOT_RADIUS;
    x=ob(i,1) +r*cos(alpha);
    y=ob(i,2) + r*sin(alpha);
    plot(x,y)
    hold on
end

xt = xt';
yt = yt';
xt2 = xt2';
yt2 = yt2';
i = 1;
target_speed = 20;
T = 40;

x = 0; y = 0; yaw = 0; v = 0;
time = 0;
% Lf = k * v + Lfc; %some constant parameters we set for the vehicle  
waypoints = [xt,yt];
waypoints2 = [xt2,yt2];
cx1 = waypoints(:,1);
cy1 = waypoints(:,2);
cx2 = waypoints2(:,1);
cy2 = waypoints2(:,2);
YAW = YAW';
YAW2 = YAW2';
plot(cx1,cy1,'b')
hold on;
plot(cx2,cy2,'b');



while T > time 
   
   [lat1, current_ind1]= calc_current_index(x,y,cx1,cy1); %find the current location using reference line index to indicate.
   [lat2, current_ind2]= calc_current_index(x,y,cx2,cy2); 
   
    Flag = collision_checking(x,y,ob)
    
    if Flag == 1
        reference = waypoints2;
        current_ind = current_ind2
        D0 = lat2; Ti = 12; Di = 0;
        
        i = 1;
        S= current_ind;
        d = []; 
        steer = [];
        location_ind = [];
        s = 0;
        
         while  s<= Ti
            p(i,:)= Bezierfrenet(D0, Ti, Di, s);
            location_ind(i) = S;
            s = s + sqrt((cx2(S+1)-cx2(S))^2 + (cy2(S+1)-cy2(S))^2);
            S = S+1;
            i = i+1;
         end
            waypoint_global = frenet_to_global(cx2, cy2,YAW2, location_ind,p);
            ref =  waypoint_global (1:2,:)';
            path_x = ref(:,1);
            path_y = ref(:,2);
            plot(path_x,path_y,'-b','MarkerSize',2)
            
        
    else
        reference = waypoints;
        current_ind = current_ind1;
        
        D0 = lat1; Ti = 14; Di = 0;
        
        i = 1;
        S= current_ind;
        d = []; 
        steer = [];
        location_ind = [];
        s = 0;
        
         while  s<= Ti
            p(i,:)= Bezierfrenet(D0, Ti, Di, s);
            location_ind(i) = S;
            s = s + sqrt((cx1(S+1)-cx1(S))^2 +  (cy1(S+1)-cy1(S))^2);
            S = S+1;
            i = i+1;
         end
            waypoint_global = frenet_to_global(cx1, cy1,YAW2, location_ind,p);
            ref =  waypoint_global (1:2,:)';
            path_x = ref(:,1);
            path_y = ref(:,2);
            plot(path_x,path_y,'-b','MarkerSize',2)
    end
        
   
    ai = PIDcontrol(target_speed, v,Kp,MAX_ACCEL); % calculate the PID controller output;
    
    delta = pure_pursuit_control(x,y,yaw,v,path_x,path_y,k,Lfc,L,predict) ;% pure pursuit controller will give desired steering angle;
    fprintf('delta = %f \r',delta);
    [x,y,yaw,v] = update(x,y,yaw,v, ai, delta,dt,L); % update the vehicle states;
   

%     c_d_d =  v* sin(yaw);
%     c_d_dd = ai;
    
    time = time + dt;
%     pause(0.1)
    plot(x,y,'rs')
    hold on
 plot(path_x,path_y,'bs','Markersize',1)
 hold on
    %,cx((target_ind-10):target_ind),cy((target_ind-10):target_ind),'g-o'
    drawnow 
    pause(0.1);
    hold on
end

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


function [frenet_paths] = calc_frenet_paths(c_d, c_d_d, c_d_dd,MAX_ROAD_WIDTH,...
    D_ROAD_W, MINT,DT,MAXT,KJ,KD,KT)
%    xs = c_d;
%    axs = c_d_dd;
%    axe = 0;
%    vxe = 0;
%    vxs = c_d_d;
% frenet_paths = [];
% tfp = [];
% T = [];
% D = [];
j = 1;
for di = -MAX_ROAD_WIDTH: D_ROAD_W: MAX_ROAD_WIDTH
    for Ti =  MINT: DT: MAXT
           t = 0: DT: Ti; t = t';
        
        tfp(j) = KT / Ti + KD * abs(di);
        T(j) = Ti;
        D(j) = di;
        j = j+1; 
    end
end

frenet_paths = [tfp',T',D'];
frenet_paths = sortrows(frenet_paths);
end

function [Flag] = collision_checking(x,y,ob)
    Flag =0;
    dist = 10;
    for i = 1:length(ob)
        distance = sqrt((ob(i,1) - x)^2 + (ob(i,2) - y)^2);
        if distance < dist
            Flag = 1;
            break;
        end
    end         
end
    
    
 function [p] = Bezierfrenet(D0, Ti, Di,t)
    p0 = [ 0 , D0];
    p1 = [Ti/2, 2/3* D0 + Di*1/3]; %p1 = [Ti/2, D0];
    p2= [Ti/2, 1/3* D0 + Di*2/3]; 
%     p1 = [Ti/2,  D0]; 
%     p2= [Ti/2,  Di]; 
    p3 = [Ti, Di];
    p= (1-(t)/Ti)^3*p0 + 3*(1-(t)/Ti)^2*(t)/Ti*p1 +...
     3*(1-(t)/Ti)*((t)/Ti)^2*p2 + ((t)/Ti)^3*p3;
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


       
       