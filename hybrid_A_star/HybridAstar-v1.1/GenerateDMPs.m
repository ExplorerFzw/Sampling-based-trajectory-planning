function GenerateDMPs()
%GenerateDMPs generate dynamic movement primitives
%   生成满足车辆运动学特性的运动基元
% 计算半径 R = L / 2 / sin(theta/2),其中 L 为弦长

clear
clc
close all

%% 基元参数设置
numberofangles = 24;%将360离散成24个方向，即角度变化为15°
long_numberofprimitives = 7;%每个方向上的运动基元数目
short_numberofprimitives = 3;
back_numberofprimitives = 3;
total_numberofprimitives = short_numberofprimitives + ...
    long_numberofprimitives + back_numberofprimitives;
discretnumber = 10;%取离散点的数量

X = zeros(total_numberofprimitives,discretnumber);
Y = zeros(total_numberofprimitives,discretnumber);
Yaw = zeros(total_numberofprimitives,discretnumber);
s = zeros(total_numberofprimitives,1);

%长基元
R3 = 8;
theta = linspace(0,45*pi/180,discretnumber); 
theta = 3*pi/2 + theta;
X(7,:) = R3 * cos(theta); % [m]
Y(7,:) = R3 + R3 * sin(theta);
Yaw(7,:) = 45*pi/180;% [rad]
s(7,1) = R3 * 45*pi/180;

R2 = 12;
theta = linspace(0,30*pi/180,discretnumber); 
theta = 3*pi/2 + theta;
X(6,:) = R2 * cos(theta);
Y(6,:) = R2 + R2 * sin(theta);
s(6,1) = R2 * 30*pi/180;

R1 = 24;
theta = linspace(0,15*pi/180,discretnumber); 
theta = 3*pi/2 + theta;
X(5,:) = R1 * cos(theta);
Y(5,:) = R1 + R1 * sin(theta);
s(5,1) = R1 * 15*pi/180;

X(4,:) = linspace(0,5,discretnumber); 
Y(4,:) = linspace(0,0,discretnumber);
s(4,1) = 5;

X(3,:) = X(5,:);
Y(3,:) = -Y(5,:);
s(3,1) = s(5,1);

X(2,:) = X(6,:);
Y(2,:) = -Y(6,:);
s(2,1) = s(6,1);

X(1,:) = X(7,:);
Y(1,:) = -Y(7,:);
s(1,1) = s(7,1);

% 绘图
figure(1)
for i = 1:long_numberofprimitives
    plot(X(i,:),Y(i,:),'b-','linewidth',1);
    hold on
end
set(gca,'XLim',[-4 8]);%X轴的数据显示范围
set(gca,'XTick',[-4:0.2:8]);%设置要显示坐标刻度
set(gca,'YLim',[-3 3]);%X轴的数据显示范围
set(gca,'YTick',[-3:0.2:3]);%设置要显示坐标刻度
grid on

%短基元
R1 = 6;
theta = linspace(0,15*pi/180,discretnumber); 
theta = 3*pi/2 + theta;
X(10,:) = R1 * cos(theta);
Y(10,:) = R1 + R1 * sin(theta);
s(10,1) = R1 * 15*pi/180;

X(9,:) = linspace(0,1.3090,discretnumber); 
Y(9,:) = linspace(0,0,discretnumber);
s(9,1) = 1.3090;

X(8,:) = X(10,:);
Y(8,:) = -Y(10,:);
s(8,1) = s(10,1);

figure(2)
for i = 1+long_numberofprimitives:total_numberofprimitives
    plot(X(i,:),Y(i,:),'b-','linewidth',1);
    hold on
end
set(gca,'XLim',[0 1.6]);%X轴的数据显示范围
set(gca,'XTick',[0:0.2:1.6]);%设置要显示坐标刻度
set(gca,'YLim',[-0.4 0.4]);%X轴的数据显示范围
set(gca,'YTick',[-0.4:0.2:0.4]);%设置要显示坐标刻度
grid on

%后退基元
R1 = 6;
theta = linspace(0,45*pi/180,discretnumber); 
theta = 3*pi/2 + theta;
X(13,:) = -R1 * cos(theta);
Y(13,:) = R1 + R1 * sin(theta);
s(13,1) = R1 * 45*pi/180;

X(12,:) = linspace(0,-1.3,discretnumber); 
Y(12,:) = linspace(0,0,discretnumber);
s(12,1) = 1.3;

X(11,:) = X(13,:);
Y(11,:) = -Y(13,:);
s(11,1) = s(13,1);

% 绘图
figure(1)
for i = 11:13
    plot(X(i,:),Y(i,:),'b-','linewidth',1);
    hold on
end
set(gca,'XLim',[-4 8]);%X轴的数据显示范围
set(gca,'XTick',[-4:0.2:8]);%设置要显示坐标刻度
set(gca,'YLim',[-3 3]);%X轴的数据显示范围
set(gca,'YTick',[-3:0.2:3]);%设置要显示坐标刻度
grid on

%保存基元离散点坐标
DMPs_Cells = [];
for k = 1:numberofangles
    DMPs_Cell = [];
    for i = 1:total_numberofprimitives
        DMPs = [];
        for j = 1:discretnumber
%             plot(X(i,:),Y(i,:),'b-','linewidth',1); hold on
            DMPs = [DMPs;X(i,j) Y(i,j)];
            [X(i,j),Y(i,j)] =...
                RotateCoordinateOfPoint(0,0,X(i,j),Y(i,j), 15*pi/180);
        end
        DMPs_Cell{i} = {i,s(i,1),DMPs};%7个基元坐标
    end
    DMPs_Cells{k} = {(k-1)*15,DMPs_Cell};%每个方向上的7个基元坐标
end

end


