%   editor:  Haining.Zhou
%   2019.10.11
clc
clear
close all
disp('A* ��ʼ...')

%% ���������ϰ����դ���ͼ�������е�
%1�����ɫդ�񣬱�ʾ���ϰ���ռ��
%0����freespace
%2������ݳ����ļ��β�����������Ĳ���ռ�ݵ㣬��Σ�յ�
global resolution row col
resolution = 0.2; %[m]
row = 200;%������������ϵ�µ�Y
col = 60;%������������ϵ�µ�X
map = zeros(row,col);
%�����󳵵���
map(:,20) = 1;
map(:,1) = 1;
%�����ҳ�����
map(1:175,40) = 1;
%����·�ڿ�
map(175,40:end) = 1;
map(200,40:end) = 1;
%�����ϰ���
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
    mindis = sqrt(mindis) * resolution;%�������񻮷�Ϊ 0.2*0.2 [m]
    distancemap(freespace(n,1),freespace(n,2)) = mindis;
    if mindis < 1.0 %С�ڰ복������Ϊ��Σ�����򣬲��ܽӽ�
        map(freespace(n,1),freespace(n,2)) = 2;
    end
end
disp('���ɴ��۵�ͼ')
toc

b = map;
b(end+1,end+1) = 0;
colormap([1 1 1;0 0 0;0.5 0 0]);  % ������ɫ
pcolor(0.5:size(map,2)+0.5,0.5:size(map,1)+0.5,b); % ����դ����ɫ
% set(gca,'XTick',1:size(a,1),'YTick',1:size(a,2));  % ��������
% axis image xy;  % ��ÿ��������ʹ����ͬ�����ݵ�λ������һ��
hold on
p.start = [1,32.5,90];  %��ʼ�� row = 1; col = 15, head = 90��
p.goal = [190,60,0];  %Ŀ��� row = 65; col = 60, head = 0��
p.goal = [200,30,90];
plot(p.start(2),p.start(1),'*r'); hold on;
plot(p.goal(2),p.goal(1),'or'); hold on;

%% ���A*����
start.x = p.start(2) * resolution;
start.y = p.start(1) * resolution;
start.yaw = p.start(3);
goal.x = p.goal(2) * resolution;
goal.y = p.goal(1) * resolution;
goal.yaw = p.goal(3);

tic
path = HybridAStar(distancemap,start,goal);
disp('�滮')
toc

%% ����ԭʼ·��
if length(path) >= 1
    plot(path(:,1)/resolution,path(:,2)/resolution,'-r','LineWidth',2); hold on;
end
