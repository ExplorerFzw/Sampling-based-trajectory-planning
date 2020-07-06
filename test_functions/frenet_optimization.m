clc
clear all
format short

k = 0.1;  % look forward gain
Lfc = 0.1;  % look-ahead distance
Kp = 1.0 ; % speed propotional gain
dt = 0.1  ;% [s]
L = 2.8  ;% [m] wheel base of vehicle

MAX_SPEED = 50.0 / 3.6;  % 最大速度 [m/s]
MAX_ACCEL = 1.0 ; % 最大加速度[m/ss]
MAX_CURVATURE = 1.0 ; %最大曲率 [1/m]
MAX_ROAD_WIDTH = 1.5 ; % 最大道路宽度 [m]
D_ROAD_W = 0.3 ; % 道路宽度采样间隔 [m]
DT = 0.1 ; % Delta T [s]
MAXT = 1.5 ;% 最大预测时间 [s]
MINT = 1 ; % 最小预测时间 [s]
TARGET_SPEED = 12.0 / 3.6 ; % 目标速度（即纵向的速度保持） [m/s]
D_T_S = 5.0 / 3.6 ; % 目标速度采样间隔 [m/s]
N_S_SAMPLE = 1 ; % sampling number of target speed
ROBOT_RADIUS = 1.2 ; % robot radius [m]
predict = 20;
% 损失函数权重
KJ = 0.1;
KT = 1;
KD = 20;
KLAT = 1.0;
KLON = 1.0;

wx = [0.0, 10.0, 20.5, 30.0, 40.5, 50.0, 60.0];
wy = [0.0, -4.0, 1.0, 6.5, 8.0, 10.0, 6.0];
    ob = [ 22,2.4;20.0, 10.0;30.0, 6.0;35.0, 7.0;30.0, 5.0;22,2;36,7.5;38,7.6;50.0, 12.0;14,-3];

[xt, yt,YAW] = cubic_spline(wx,wy);

plot(ob(:,1),ob(:,2),'ko')
plot(ob(:,1),ob(:,2),'ks')
plot(ob(:,1),ob(:,2),'k*')

xt = xt';
yt = yt';
i = 1;
target_speed = 10/3.6;
T = 25;

x = 0; y = 0; yaw = 0; v = 0;
time = 0;
% Lf = k * v + Lfc; %some constant parameters we set for the vehicle 
waypoints = [xt,yt];
cx = waypoints(:,1);
cy = waypoints(:,2);
plot(cx,cy,'b')
c_d = y;% 当前的位置 [m]
c_d_d = 0.0;  %当前速度 [m/s]
c_d_dd = 0.0 ; % 当前加速度 [m/s2]


while T > time 
    
    [frenet_paths] = calc_frenet_paths(c_d, c_d_d, c_d_dd,MAX_ROAD_WIDTH,...
    D_ROAD_W, MINT,DT,MAXT,KJ,KD,KT);
    xs = c_d;
   axs = c_d_dd;
   axe = 0;
   vxs = c_d_d;
   vxe = 0;
   
   [lat, current_ind]= calc_current_index(x,y,cx,cy); %find the current location using reference line index to indicate.
     current_ind
  [val,dist] = collision_checking(frenet_paths,c_d, c_d_d, c_d_dd,DT,ROBOT_RADIUS, ob,cx,cy,YAW,current_ind );
  val;
%     val=1;
%   dist;
    Di = frenet_paths(val,3);
    Ti = frenet_paths(val,2);
    xe = Di;
   [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,Ti);
  
    
    i = 1;
    S= current_ind;
    d = [];
    steer = [];
    location_ind = [];
    s = 0;
   
    while  s<= Ti*2.77
    d(i) =  calc_point(a0,a1,a2,a3,a4,a5,s/2.77);
%     steer(i) = YAW(S);
    location_ind(i) = S;
    s = s + sqrt((cx(S+1)-cx(S))^2 +  (cy(S+1)-cy(S))^2);
    S = S+1;
    i = i+1;
    
    end
    
    for i = 1: length(d)
        trans = BackTransfer(cx(location_ind(i)), cy((location_ind(i))), YAW(location_ind(i)));
        waypoint(:,i) = trans* [0; d(i);1];
    end
    ref=  waypoint(1:2,:)';
   path_x = ref(:,1);
   path_y = ref(:,2);
   
   ai = PIDcontrol(target_speed, v,Kp,MAX_ACCEL); % calculate the PID controller output;
    
    delta = pure_pursuit_control(x,y,yaw,v,path_x,path_y,k,Lfc,L,predict) ;% pure pursuit controller will give desired steering angle;
    
    [x,y,yaw,v] = update(x,y,yaw,v, ai, delta,dt,L); % update the vehicle states;
   
    c_d = lat;
    c_d_d =  v* sin(yaw);
    c_d_dd = ai;
    
    time = time + dt;
%     pause(0.1)
    plot(x,y,'r*')
    hold on
 plot(path_x,path_y,'bs','Markersize',1)
 hold on
    %,cx((target_ind-10):target_ind),cy((target_ind-10):target_ind),'g-o'
    drawnow
    hold on
end

function [x, y, yaw, v] = update(x, y, yaw, v, a, delta,dt,L)
    x = x + v * cos(yaw) * dt;
    y = y + v * sin(yaw) * dt;
    yaw = yaw + v / L * tan(delta) * dt;
   v = v + a * dt;
end

function [a] = PIDcontrol(target_v, current_v, Kp,MAX_ACCEL)
a = Kp * (target_v - current_v);
a = min(max(a, -MAX_ACCEL), MAX_ACCEL);
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
    tx =path_x(predict);
    ty =path_y(predict);
    
   alpha =pipi( atan((ty-y)/(tx-x))-yaw);
    
 Lf = k * v + Lfc;
 delta = atan(2*L * sin(alpha)/Lf)  ;
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
        lat = -lat;
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

% function [a0,a1,a2,a3] = quadratic_poly(xs,xe,axs,axe,T)
% A = [1 0 0 0; 1 T T^2 T^3; 0 0 2 0; 0 0 2 6*T];
% b = [xs,xe,axs, axe]';
% x = A\b;
% a0 = x(1);
% a1 = x(2);
% a2 = x(3);
% a3 = x(4);
% end

function [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,T)
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

% function [xt] = calc_point(a0,a1,a2,a3,t)
% xt = a0 + a1 * t + a2 * t ^2 + a3 * t^3 ;
% end

% function [xt] =calc_first_derivative(a1,a2,a3,t)
% xt = a1 + 2 * a2 * t + 3 * a3 * t^2 ;
% end
% 
% function [xt]  = calc_second_derivative(a2,a3,t)
% xt = 2* a2 + 6* a3 * t ;
% end
% 
% function [xt] = calc_third_derivative(a3)
% xt =6 * a3;
% end

function [frenet_paths] = calc_frenet_paths(c_d, c_d_d, c_d_dd,MAX_ROAD_WIDTH,...
    D_ROAD_W, MINT,DT,MAXT,KJ,KD,KT)
   xs = c_d;
   axs = c_d_dd;
   axe = 0;
   vxe = 0;
   vxs = c_d_d;
frenet_paths = [];
j = 1;
for di = -MAX_ROAD_WIDTH: D_ROAD_W: MAX_ROAD_WIDTH
    for Ti =  MINT: DT: MAXT
      [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, di, vxe, axe,Ti);
        t = 0: DT: Ti; t = t';
        for i = 1: length(t)
            d(i) = calc_point(a0,a1,a2,a3,a4,a5,t(i));
        end
        
        for i = 1: length(t)
            d_d(i) = calc_first_derivative(a1,a2,a3,a4,a5,t(i));
        end
        
        for i = 1: length(t)
            d_dd(i) = calc_second_derivative(a2,a3,a4,a5,t(i));
        end
        
        for i = 1: length(t)
            d_ddd(i) = calc_third_derivative(a3,a4,a5,t(i));
        end
        
%         JP= sum(d_ddd.^2);
        
        tfp(j) = KT  * Ti + KD * abs(di);
        T(j) =  Ti;
        D(j) =abs(di);
        j = j+1; 
    end
end

frenet_paths = [tfp',T',D'];
frenet_paths = sortrows(frenet_paths);
end

function [val,dist] = collision_checking(frenet_paths,c_d, c_d_d, c_d_dd,DT,ROBOT_RADIUS, ob,cx,cy,YAW,current_ind )
Flag =0;
val= 1;
 xs = c_d;
   axs = c_d_dd;
   axe = 0;
   vxs = c_d_d;
   vxe = 0;
while Flag == 0
    Ti = frenet_paths(val,2);
    Di = frenet_paths(val,3);
    
    xe = Di;
   [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, xe, vxe, axe,Ti);
  
    
    i = 1;
    S= current_ind;
    d = [];
    steer = [];
    location_ind = [];
    s = 0;
   
    while  s<= Ti*2.77
    d(i) =  calc_point(a0,a1,a2,a3,a4,a5,s/2.77);
%     steer(i) = YAW(S);
    location_ind(i) = S;
    s = s + sqrt((cx(S+1)-cx(S))^2 +  (cy(S+1)-cy(S))^2);
    S = S+1;
    i = i+1;
    
    end
%    [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, vxs, axs, Di, vxe, axe,Ti)
%     t = 0: DT: Ti; t = t'; 
%     
%      i = 1;
%     S= current_ind;
%     d = [];
%     steer = [];
%     location_ind = [];
%     s = 0;
    n= 1;
%     dist = [];
%     
%     while  s<= Ti
%     d(i) =  calc_point(a0,a1,a2,a3,a4,a5,s);
%     steer(i) = YAW(S);
%     location_ind(i) = S;
%     s = s + sqrt((cx(S+1)-cx(S))^2 +  (cy(S+1)-cy(S))^2);
%     S = S+1;
%     i = i+1;
%     end
    
    for i = 1: length(d)
        trans = BackTransfer(cx(location_ind(i)), cy((location_ind(i))), YAW(location_ind(i)));
        checkline(1:3,i) = trans* [0; d(i);1];
    end
    checkline =  checkline(1:2,:)';
    

    for j =1:size(ob,1)
        for k = 1: length(checkline)
           dist(n) = sqrt((ob(j,1)-checkline(k,1))^2 + ((ob(j,2)-checkline(k,2))^2));
           n = n+1;
        end
    end
    
  
        if min(dist)<ROBOT_RADIUS 
         val = val +1;
        else
            Flag = 1;
        end

      if val == length(frenet_paths)
        Flag = 1;
      end
end
end
    
function [Px,Py,YAW] = cubic_spline(x,y)
   figure
%     plot(x,y,'ro');
    hold on
    
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
       Px= [];
       Py = [];
       for  i= 1:N-1
           X = x(i):0.1:x(i+1);
           Y = a(i)+ b(i)*(X-x(i)) + c(i) * (X- x(i)).^2 + d(i) * (X - x(i)).^3;
           Px = [Px,X];
           Py = [Py,Y];
       plot(X, Y,'g-','LineWidth',3)   
       end
       
       for i = 1: length(Px)-1
           yaw(i) = atan((Py(i+1)-Py(i))/(Px(i+1)- Px(i)));
       end
       yaw(end+1) = yaw(end);
        YAW =   yaw;
%        s = zeros(length(Px),1);
%        s(1) = 0;
%        for i = 2: length(Px)
%            s(i) = sqrt((Px(i)-Px(i-1)^2+ Py(i)-Py(i-1)^2);
%            s(i) =s(i-1) + 
%        end
%        
end

       
       