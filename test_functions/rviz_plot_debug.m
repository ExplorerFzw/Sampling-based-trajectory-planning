clc
clear all
close all


waypoint = [[],[]];
T = 0;
for x = 0:0.1:25
    y = -sqrt(25*25 - x*x) + 25;
    waypoint= [waypoint;x,y];
end
figure

% plot(waypoint(:,1),waypoint(:,2))


v = 5.0;
w = v/25;
dt = 0.1;
while T < 8
    theta = 0;
    x = 0;
    y = 0;
    [x,y,theta] = StateSpace(x,y,theta,v,w,dt);
    headingCur = theta;
    
    [xt,yt] = findOrigin( x,  y,  headingCur);
    waypoint = trans(xt,yt,headingCur, waypoint);
    plot(waypoint(:,1),waypoint(:,2));
    xlim([-30 30]);
    ylim([-30 30]);
    T = T + dt;
    drawnow limitrate
    pause(0.1)
    hold off
end
    

function waypoint  = trans(x,y,theta, waypoint)
    waypoint = [waypoint,ones(length(waypoint),1)];
    theta = -theta;
    trans = [cos(theta), -sin(theta),x;sin(theta),cos(theta),y;0,0,1];
    waypoint = trans * waypoint';
    waypoint = waypoint(1:2,:)';
end

function [x,y,theta] = StateSpace(x,y,theta,v,w,dt)
    x = x + v * cos(theta) * dt;
    y = y + v * sin(theta) * dt;
    theta = theta + w * dt;
end

function [xt,yt] = findOrigin( xCur,  yCur,  headingCur)

    L = sqrt(xCur^2 + yCur^2);
    if(headingCur > 0)
        headingCur = 2* pi -headingCur;
    else
        headingCur = -headingCur;
    end
    
    if (xCur == 0 && yCur == 0)
        xt = 0;
        yt = 0;
    elseif (xCur >= 0 && yCur > 0)
        alfa = atan(xCur / yCur);
        gamma = alfa - headingCur + pi;
        xt = L * sin(gamma);
        yt = L * cos(gamma);
    elseif (xCur > 0 && yCur <= 0)
        alfa = -(atan(yCur / xCur)) + pi / 2;
        gamma = -alfa + headingCur + pi / 2;
        xt = L * -cos(gamma);
        yt = L * -sin(gamma);
    elseif (xCur <= 0 && yCur < 0)
        alfa = pi + atan(xCur / yCur);
        gamma = alfa - headingCur + pi;
        xt = L * sin(gamma);
        yt = L * cos(gamma);
    else
        alfa = 1.5 * pi - atan(yCur / xCur);
        gamma = -alfa + headingCur + pi / 2;
        xt = L * -cos(gamma);
        yt = L * -sin(gamma);
    end
end
    