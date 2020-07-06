clc
clear all

Kp = 1.0 ; 
dt = 0.1  ;% [s]
Length = 2.9 ;% [m] wheel base of vehicle
Q = eye(3);
 Q(1,1) = 10;
 Q(2,2) =10;
 Q(3,3) = 100;
% Q(4,4) = 10;
%%%%%%%%%%
R = eye(1)* 5;
max_steer =60 * pi/180; % in rad
target_v =30.0 / 3.6;

cx = 0:0.1:200; % sampling interception from 0 to 100, with step 0.1
for i = 1:500% here we create a original reference line, which the vehicle should always follow when there is no obstacles;
    cy(i) = -sin(cx(i)/10)*cx(i)/8;
end
for i = 501: length(cx)
    cy(i) = -sin(cx(i)/10)*cx(i)/8; %cy(500);
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% here we provide another reference line for testing, now you dont need to
% use it
% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

p = [cx', cy'];
 %计算一阶导数
 for i = 1:length(cx)-1
 pd(i) = (p(i+1,2)-p(i,2))/(p(i+1,1)-p(i,1));
 end
 pd(end+1) = pd(end);
  %计算二阶导数
 for i =2: length(cx)-1
     pdd(i) = (p(i+1,2)-2*p(i,2) + p(i-1,2))/(0.5*(-p(i-1,1)+p(i+1,1)))^2;
 end
      pdd(1) = pdd(2);
     pdd(length(cx)) = pdd(length(cx)-1);
    %计算曲率 
  for i  = 1:length(cx)-1
     k(i) = (pdd(i))/(1+pd(i)^2)^(1.5);
  end
  
  cx= cx';
  cy =cy';
  cyaw = atan(pd');
  ck = k';
%%%%%%%%%%%%%%%%%%%%   above things are preprocessing   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

i = 1;
T = 80;
lastIndex = length(cx);
x = 0.1; y = -0.1; yaw = 0.1; v = 0.1;

delta = 0.1;
ind =0;
figure
     plot(cx,cy,'r-')
     hold on
     
while ind < length(cx)
   
  [K,delta,v,ind,e] = mpc_control(x,y,yaw,cx,cy,cyaw,ck,dt,delta,v,Length,Q,R);
   
    if abs(e)> 4 % we do not allow the vehicle deviation larger than 4
        fprintf('diviation too big!\n')
        break;
    end
    delta
     [x,y,yaw,v] = update(x,y,yaw,v, delta, dt,Length, max_steer); %update the vehicle state for next iteration
     posx(i) = x;
     posy(i)  =y;
     i = i+1;

     plot(posx(i-1),posy(i-1),'bo')
     pause(0.01);
     
      hold on
end

% function"Update" updates vehicle states
function [x, y, yaw, v] = update(x, y, yaw, v, delta,dt,Length,max_steer)% update x, y, yaw, and velocity
 delta = max(min(max_steer, delta), -max_steer);
    x = x + v * cos(yaw) * dt + randn(1)* 0;
    y = y + v * sin(yaw) * dt +  randn(1)* 0;
    yaw = yaw + v / Length * tan(delta) * dt ;
   v = v ;
end

function [a] = PIDcontrol(target_v, current_v, Kp) %we originally control v separately
a = Kp * (target_v - current_v);
end

function [angle] = pipi(angle) % the unit of angle is in rad, but in this case, you dont need to use it ;

if (angle > pi)
    angle =  angle - 2*pi;
elseif (angle < -pi)
    angle = angle + 2*pi;
else
    angle = angle;
end
end


function  [K,delta,v,ind,e] = mpc_control(x,y,yaw,cx,cy,cyaw,ck,dt,delta,v,Length,Q,R) %MPC control

[ind, e] = calc_target_index(x,y,cx,cy,cyaw); % find current vehicle location, it is represented by reference index
k =ck(ind);

A = [1 0 -v*dt*sin(yaw); 0 1 v*dt*cos(yaw); 0 0 1];
B = [dt*cos(yaw) 0; dt*sin(yaw) 0; dt*tan(delta)/Length v*dt/(cos(delta)^2*Length)];
C = [1 1 1];
D = 0;

sys = ss(A,B,C,D,dt);
 
K_lqr = lqr(sys,Q,R);

M = [A;A^2;A^3;A^4]; % A infinity matrix
CONV = [B zeros(3,2) zeros(3,2) zeros(3,2) ;...
        A*B B zeros(3,2)  zeros(3,2) ;...
        A^2*B A*B B zeros(3,2) ;...
        A^3*B A^2*B A*B B]; %B infinity matrix
    
Q_bar = dlyap((A-B*K_lqr)', Q+K_lqr'*R*K_lqr);

Q_hat = blkdiag(Q,Q,Q,Q); % Q matrix
R_hat = blkdiag(R,R,R,R,R,R,R,R); % R matrix
H = CONV'*Q_hat*CONV + R_hat; % H matirx
F = 2* CONV'*Q_hat*M; %f matirx

Ac = -[1 0 0 0;...
      -1 0 0 0;...
       0 1 0 0;...
       0 -1 0 0;...
       0 0 1 0;...
       0 0 -1 0;...
       0 0 0 1;...
       0 0 0 -1];
b0 = -0.1*[1 ;1 ;1;1 ;1 ;1 ;1 ;1 ]; % boundary Ac * X < b0
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%MPC解法(mpcqpsolver)
L = chol(H,'lower');
Linv = L\eye(size(H,1));

X= [x-cx(ind); y-cy(ind); yaw-cyaw(ind)];
iA = false(size(b0));
opt = mpcqpsolverOptions;
opt.IntegrityChecks = false;

 [u, status] = mpcqpsolver(Linv,F*X,Ac,b0,[],zeros(0,1),iA,opt);
 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 K = u(1);
 
 ff = atan(Length * (k));
fb = K;
delta =   1*ff + 1*fb;
v =10 ;
end

function [ind, error] = calc_target_index(x,y, cx,cy,cyaw)% find my location, and lateral error
N =  length(cx);
Distance = zeros(N,1);
for i = 1:N
Distance(i) =  sqrt((cx(i)-x)^2 + (cy(i)-y)^2);
end
[value, location]= min(Distance);
ind = location

dx1 =  cx(ind) - x;
dy1 =  cy(ind) - y ;
angle = pipi(cyaw(ind)-atan(dy1/dx1));
heading = cyaw(ind)*180/pi
    if y<cy(ind) 
        error = -value;
    else
        error = value;
    end
% error = value;
end




