clc
clear all

k = 0.1;  % look forward gain
Lfc = 0.1;  % look-ahead distance
global Kp ;
Kp = 1.0 ; % speed propotional gain
dt = 0.1  ;% [s]
L = 2.9  ;% [m] wheel base of vehicle
cx = 0:0.1:100; % sampling interception from 0 to 100, with step 0.1
startp = [60,-24]; % indicate the location where we leave waypoints reference line
endp = [80,-24]; % indicate  the location where we go back to our reference line
p = BezierAvoid (startp, endp) ; %%% call Beizier Curve function during the starting 
% point (startp) and the end point (endp)

for i = 1:500 % here we create a original reference line, which the vehicle should always follow when there is no obstacles;
    cy(i) = sin(cx(i)/10)*cx(i)/2;
end
for i = 501: length(cx)
    cy(i) = cy(500);
end

 figure
 plot(cx,cy,70,-24,'-o')  %plot the original reference line, and the obstacle we set, at the point(70,-24)
 hold on 
 
waypoints = [cx;cy]'; 

START = Findlocation(waypoints, startp);
END =  Findlocation(waypoints, endp);  %find the index NO. where the start and end points locate;

waypoints = [waypoints(1: (START-1),:); p ; waypoints((END+1):end,:)];
% the rest of the reference line remains the same, only the part between
% start point and end points are deleted and replace the new waypoints that
% we generated in the Beizier Function;
cx = waypoints(:,1);
cy = waypoints(:,2);


 for i  = 1:length(cx) % draw the new reference line;
 plot(cx(i), cy(i),'.-')
 drawnow
 hold on
 end

i = 1;
target_speed = 10/3.6;
T = 80;
lastIndex = length(cx);
x = 0; y = -5; yaw = 0; v = 0;
time = 0;
 Lf = k * v + Lfc; %some constant parameters we set for the vehicle 

while T > time 
    target_ind= calc_target_index(x,y,cx,cy,Lf) %find the current location using reference line index to indicate.
    ai = PIDcontrol(target_speed, v,Kp); % calculate the PID controller output;
  di = pure_pursuit_control(x,y,yaw,v,cx,cy,target_ind,k,Lfc,L,Lf); % pure pursuit controller will give desired steering angle;
    
    [x,y,yaw,v] = update(x,y,yaw,v, ai, di,dt,L) % update the vehicle states;
    time = time + dt;
%     pause(0.1)
    plot(cx,cy,'b',x,y,'r-*')
    %,cx((target_ind-10):target_ind),cy((target_ind-10):target_ind),'g-o'
    drawnow
    hold on
end
% plot(cx,cy,x,y,'*')
% hold on


function [x, y, yaw, v] = update(x, y, yaw, v, a, delta,dt,L)
    x = x + v * cos(yaw) * dt;
    y = y + v * sin(yaw) * dt;
    yaw = yaw + v / L * tan(delta) * dt;
   v = v + a * dt;
end

function [a] = PIDcontrol(target_v, current_v, Kp)
a = Kp * (target_v - current_v);
end

function [delta] = pure_pursuit_control(x,y,yaw,v,cx,cy,ind,k,Lfc,L,Lf)
    tx = cx(ind);
    ty = cy(ind);
    
    alpha =pipi( atan((ty-y)/(tx-x))-yaw);
    
 Lf = k * v + Lfc;
 delta = atan(2*L * sin(alpha)/Lf)  ;
end

function [ind] = calc_target_index(x,y, cx,cy,Lf)
N =  length(cx);
Distance = zeros(N,1);
for i = 1:N
Distance(i) =  sqrt((cx(i)-x)^2 + (cy(i)-y)^2);
end
[~, location]= min(Distance);
ind = location;
LL = 0;
%     while Lf > LL && (ind + 1) < length(cx)
%         dx = cx(ind + 1 )- cx(ind);
%         dy = cx(ind + 1) - cx(ind);
%         LL = LL + sqrt(dx * 2 + dy * 2);
%         ind  = ind + 1;
%     end
    
  ind = ind + 10;
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

function [location] = Findlocation(trace, point)
N = length(trace);
Distance = zeros(N,1);

for  i = 1:N
Distance(i) =  sqrt((trace(i,1)-point(1))^2 + (trace(i,2)-point(2))^2);
end

[~, index]= min(Distance);
location=index;

end

function p= BezierAvoid (startp, endp) 

 P0 =startp;
 P1 = [startp(1)+ (endp(1) -startp(1))/8, startp(2)];
 P2= [startp(1)+ (endp(1) -startp(1))/8*2, startp(2)];
 P3 = [startp(1)+ (endp(1) -startp(1))/8*2, startp(2)+4];
 P4 = [startp(1)+ (endp(1) -startp(1))/8*3,startp(2)+4];
 P5 = [startp(1)+ (endp(1) -startp(1))/8*4,startp(2)+4];
 P6 = [startp(1)+ (endp(1) -startp(1))/8*5,startp(2)+4];
 P7 = [startp(1)+ (endp(1) -startp(1))/8*6,startp(2)+4];
 P8 = [startp(1)+ (endp(1) -startp(1))/8*6,startp(2)];
 P9 = [startp(1)+ (endp(1) -startp(1))/8*7,startp(2)]; 
 P10 = endp;
  
 i = 1;

  for u =startp(1):0.1:startp(1)+10
 p(i,:)= (1- (u-startp(1))/10)^5*P0 + 5*(1- (u-startp(1))/10)^4* (u-startp(1))/10*P1 +...
     10*(1- (u-startp(1))/10)^3*((u-startp(1))/10)^2*P2 ...
     +10*(1- (u-startp(1))/10)^2*( (u-startp(1))/10)^3*P3...
     +5*(1- (u-startp(1))/10)*( (u-startp(1))/10)^4*P4 + ( (u-startp(1))/10)^5*P5;
i = i+ 1;
  end
  
%   figure
%   for i = 1: length(p)
%  plot (p(i,1),p(i,2),'+r')
%  hold on
%   end
%  hold on


    for u =(startp(1)+10) :0.1:endp(1)
 p(i,:)= (1-(u-startp(1)-10) /10)^5*P5 + 5*(1- (u-startp(1)-10)  /10)^4* (u-startp(1)-10)  /10*P6 +...
     10*(1- (u-startp(1)-10)  /10)^3* ((u-startp(1)-10)  /10)^2*P7+...
 10*(1- (u-startp(1)-10)  /10)^2* ((u-startp(1)-10)  /10)^3*P8 ...
 +5*(1- (u-startp(1)-10)  /10)* ((u-startp(1)-10)  /10)^4*P9 +((u-startp(1)-10)  /10)^5*P10;
i = i+ 1;
    end
end
