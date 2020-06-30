%   editor:  Haining.Zhou
%   2019.10.11
clc
clear
close all
disp('A* 开始...')

%% 创建具有障碍物的栅格地图，矩阵中的
%1代表黑色栅格，表示有障碍物占据
%0代表freespace
%2代表根据车辆的几何参数计算出来的不可占据点，即危险点
global resolution row col
resolution = 0.2; %[m]
row = 200;%代表世界坐标系下的Y
col = 60;%代表世界坐标系下的X
map = zeros(row,col);
%虚拟左车道线
map(:,20) = 1;
map(:,1) = 1;
%虚拟右车道线
map(1:175,40) = 1;
%虚拟路口宽
map(175,40:end) = 1;
map(200,40:end) = 1;
%虚拟障碍物
map(60,35:40) = 1;
% map(140,15:25) = 1;

distancemap = map;
obstacle = [];
freespace = [];
tic
for i = 1:row
    for j = 1:col
        if map(i,j) == 1
            obstacle = [obstacle;i,j];
            distancemap(i,j) = 0;
        else
            freespace = [freespace;i,j];
        end
    end
end
for n = 1:length(freespace(:,1))
    mindis = 1000000;
    for m = 1:length(obstacle(:,1))
        dis = (freespace(n,1) - obstacle(m,1))^2 + (freespace(n,2) - obstacle(m,2))^2;
        if dis < mindis
            mindis = dis;
        end
    end
    mindis = sqrt(mindis) * resolution;%假设网格划分为 0.2*0.2 [m]
    distancemap(freespace(n,1),freespace(n,2)) = mindis;
    if mindis < 1.0 %小于半车宽，则认为是危险区域，不能接近
        map(freespace(n,1),freespace(n,2)) = 2;
    end
end
disp('生成代价地图')
toc

b = map;
b(end+1,end+1) = 0;
colormap([1 1 1;0 0 0;0.5 0 0]);  % 创建颜色
pcolor(0.5:size(map,2)+0.5,0.5:size(map,1)+0.5,b); % 赋予栅格颜色
% set(gca,'XTick',1:size(a,1),'YTick',1:size(a,2));  % 设置坐标
% axis image xy;  % 沿每个坐标轴使用相同的数据单位，保持一致
hold on
p.start = [1,32.5,90];  %起始点 row = 1; col = 15, head = 90°
p.goal = [190,60,0];  %目标点 row = 65; col = 60, head = 0°
p.goal = [200,30,90];
plot(p.start(2),p.start(1),'*r'); hold on;
plot(p.goal(2),p.goal(1),'or'); hold on;

%% 混合A*搜索
start.x = p.start(2) * resolution;
start.y = p.start(1) * resolution;
start.yaw = p.start(3);
goal.x = p.goal(2) * resolution;
goal.y = p.goal(1) * resolution;
goal.yaw = p.goal(3);

tic
path = HybridAStar(distancemap,start,goal);
disp('规划')
toc

%% 画出原始路径
if length(path) >= 1
    plot(path(:,1)/resolution,path(:,2)/resolution,'-r','LineWidth',2); hold on;
end
