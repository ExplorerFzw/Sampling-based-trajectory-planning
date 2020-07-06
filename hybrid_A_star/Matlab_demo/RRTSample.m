function [] = RRTSample()
%AStarSample() A*���ˤ����̽U·̽���ץ����
%
% Author: Atsushi Sakai
%
% Copyright (c) 2014, Atsushi Sakai
% All rights reserved.
% License : Modified BSD Software License Agreement

clear all;
close all;
disp('Hybrid A Star Path Planning start!!');

%�ѥ��`��
global p;
p.xyTick=1;    %x-y�����
p.angleTick=5; %�ǶȽ����[deg]
p.start=[1, 1];%�����`�ȵص� [x,y,yaw]
%p.goal =[3,7,90/p.angleTick];%���`��ص�   [x,y,yaw]
p.goal =[7,3];%���`��ص�   [x,y,yaw]
p.XYMAX=11;     %�ޥåפ����k��

%����ǩ`����ȡ��
obstacle=GetBoundary(p);

%�Ϻ���ǩ`����ȡ�� ����ǩ`���ȺϤ碌��ȡ�ä���

%�v܇�����Ϻ���Έ���
obstacle=GetParkingLotObstacle(obstacle);

%��̽U·������
path=RRT(obstacle);

%���������
figure(1)
hold off;
if length(obstacle)>=1
    plot(obstacle(:,1),obstacle(:,2),'om');hold on;
end
PlotArrow(p.start,p.angleTick);
PlotArrow(p.goal,p.angleTick);
for i=1:length(path(:,1))
    PlotArrow(path(i,:),p.angleTick);hold on;
end
plot(path(:,1),path(:,2),'-r');hold on;
axis([0-0.5 p.XYMAX+1+0.5 0-0.5 p.XYMAX+1+0.5])
grid on;

end

function path=RRT(obstacle)
% A*���ˤ�ä���̽U·��̽������ץ����
% ��̽U·�Υѥ������˥ꥹ�Ȥ򷵤�
global p;
p.GoalProb=0.5;
findFlag=false;%���`��kҊ�ե饰

tree=[p.start p.start 0];

while ~findFlag
      if rand()>p.GoalProb
        target=p.goal;
      else
        target=GetRandomPosi();
      end
      
      %�ѥ�̽���Υ��ƥåׄӻ�
      %animation(open,close,p,obstacle);
end

%��̥ѥ������˥ꥹ�Ȥ�ȡ��
path=GetPath(close,p.start)

end

function target=GetRandomPosi()
global p

target=[p.XYMAX*rand() p.XYMAX*rand()];

end

function result=h(a,b)
%�ҥ�`�ꥹ�ƥ��å��v��
%�����Ǥ϶���Ԫ���g��a,b�ΥΥ����x
result=norm(a(1:2)-b(1:2));
%result=norm(a-b);

end

function m=GetNextNode(node,next)
%�O�ӥΩ`�ɤ�Ӌ�㤹��Ω`��
global p;
node(3)=PI2PI(node(3)+next(3),p.angleTick);
phi=toRadian(node(3)*p.angleTick);
R = [ cos(phi) sin(phi); -sin(phi) cos(phi) ];
xy=next(1:2)*R;
m=[node(1)+xy(1) node(2)+xy(2) node(3)+next(3) node(4)];
m(3)=PI2PI(m(3),p.angleTick);
m(4)=m(4)+next(4)+h(m(1:3),p.goal)-h(node(1:3),p.goal);%�����Ȥ�Ӌ��
end

function obstacle=GetObstacle(nob,obstacle,p)
%������ָ�����줿�������Ϻ�������ɤ���
%�������Ф��饹���`��or���`��ص�����ä��줿�������򷵤��v��

%�������Ϻ��������
ob=round(rand([nob,2])*p.XYMAX);

%�����`�ȵص�ȥ��`����Ϻ��郎���ä��줿���Ϥ�ʡ��
removeInd=[];%���������Ϻ���Υ���ǥå�����{�åꥹ��
for io=1:length(ob(:,1))
    if(isSamePosi(ob(io,:),p.start) || isSamePosi(ob(io,:),p.goal))
        removeInd=[removeInd;io];
    end   
end
ob(removeInd,:)=[];%�ꥹ��

obstacle=[obstacle;ob];

end

function result=isSamePosi(a,b)
%3x1�Υ٥��ȥ뤬ͬ�����ɤ������жϤ����v��
global p;
result=false;
if length(a)>=3
    d=a(1:3)-b;

    %Map�ν���Ȥ���ͬ������åɤ��ɤ�����Ӌ�㤹��
    if abs(d(1))<p.xyTick/2 && abs(d(2))<p.xyTick/2 && abs(d(3))<1
        result=true;
    end
else
    d=a-b(1:2);
    if abs(d(1))<p.xyTick && abs(d(2))<p.xyTick
        result=true;
    end
end

end

function boundary=GetBoundary(p)
% ���ꥢ����ǩ`����ȡ��
boundary=[];
for i1=0:(p.XYMAX+1)
    boundary=[boundary;[0 i1]];
end
for i2=0:(p.XYMAX+1)
    boundary=[boundary;[i2 0]];
end
for i3=0:(p.XYMAX+1)
    boundary=[boundary;[p.XYMAX+1 i3]];
end
for i4=0:(p.XYMAX+1)
    boundary=[boundary;[i4 p.XYMAX+1]];
end
boundary=[boundary;[11 11]];
boundary=[boundary;[9 1]];
boundary=[boundary;[10 2]];
boundary=[boundary;[11 3]];
boundary=[boundary;[10 1]];
boundary=[boundary;[11 2]];
boundary=[boundary;[11 1]];

end

function animation(open,close,p,obstacle)
% ̽���Θ��Ӥ���εĤ˱�ʾ�����v��

figure(1)
hold off;
%if length(obstacle)>=1
%    plot(obstacle(:,1),obstacle(:,2),'om');hold on;
%end
plot3(p.start(1),p.start(2),p.start(3),'*r');hold on;
plot3(p.goal(1),p.goal(2),p.goal(3),'*b');hold on;
plot3(open(:,1),open(:,2),open(:,3),'xr');hold on;
plot3(close(:,1),close(:,2),close(:,3),'xk');hold on;

%axis([0-0.5 p.XYMAX+1+0.5 0-0.5 p.XYMAX+1+0.5])
grid on;
%pause;

end

function flag=isObstacle(m,obstacle)

for io=1:length(obstacle(:,1))
    if isSamePosi(obstacle(io,:),m(1:2))
        flag=true;return;
    end
end
flag=false;%�Ϻ���ǤϤʤ�
end

function next=MotionModel(tick)
%�O�ӥΩ`�ɤؤ��Ƅӥ�ǥ� �����䤨�뤳�Ȥǥ�ܥåȤ��ƄӤ�ָ���Ǥ���
% [dx dy dyaw cost]
% next=[1 0    0/tick 1
%       1 1   45/tick 2
%       1 -1  -45/tick 2
%       -1 0   0/tick 3
%       -1 1  45/tick 4
%       -1 -1 -45/tick 4];

movedis=1;
dangle=-30:15:30;
rad=toRadian(dangle);
next=[];
for i=1:length(rad)
    next=[next;[movedis*cos(rad(i)) movedis*sin(rad(i)) -dangle(i)/tick 1]];
end

end

function obstacle=GetParkingLotObstacle(obstacle)
%�v܇���ͤ��Ϻ���ޥåפ�ȡ�ä����v��

%�������Ϻ��������
ob=[1 6;
    2 6;
    3 6;
    4 6;
    5 6;
    6 6;
    7 6;
    8 6;
    2 7;
    2 8;
    4 7;
    4 8;
    6 7;
    6 8;
    8 7;
    8 8];
obstacle=[obstacle;ob];

end

function [minCostN,minInd]=GetMinCostNode(open)
%open�ʥΩ`�ɤ��Ф���С�����ȥΩ`�ɤ�ȡ��
[Y,I] = sort(open(:,4));
open=open(I,:);
minInd=I(1);
minCostN=open(1,:);
end

function path=GetPath(close,start)
%�����`�Ȥ��饴�`��ޤǤ����˥ꥹ�Ȥ�ȡ�ä����v��
ind=1;%goal��close�ꥹ�Ȥ����^����äƤ���
path=[];
while 1
    %���ˤ�ꥹ�Ȥ˵��h
    path=[path; close(ind,1:3)];
    
    %�����`�ȵص�ޤǵ��_�������ж�
    if isSamePosi(close(ind,1:3),start)   
        break;
    end
    
    %close�ꥹ�Ȥ��Ф��H�Ω`�ɤ�̽��
    for io=1:length(close(:,1))
        if isSamePosi(close(io,1:3),close(ind,5:7))
            ind=io;
            break;
        end
    end
end

end

function [flag, targetInd]=FindList(m,open,close)
    targetInd=0;
    %open�ꥹ�Ȥˤ��뤫?
    if ~isempty(open)
        for io=1:length(open(:,1))
            if isSamePosi(open(io,:),m(1:3))
                flag=1;
                targetInd=io;
                return;
            end
        end
    end
    %close�ꥹ�Ȥˤ��뤫?
    if ~isempty(close)
        for ic=1:length(close(:,1))
            if isSamePosi(close(ic,:),m(1:3))
                flag=2;
                targetInd=ic;
                return;
            end
        end
    end
    %�ɤ���ˤ�o���ä�
    flag=3;return;
end

function angle=PI2PI(angle,tick)
    angledeg=angle*tick;
    while angledeg>180
        angledeg=angledeg-360;
    end
    while angledeg<-180
        angledeg=angledeg+360;
    end
    angle=angledeg/tick;
end

function PlotArrow(x,tick)
ArrowLength=0.5;%ʸӡ���L��
yaw=x(3)*tick*pi/180;
quiver(x(1),x(2),ArrowLength*cos(yaw),ArrowLength*sin(yaw),'ok');hold on;
end   

function radian = toRadian(degree)
% degree to radian
radian = degree/180*pi;
end
    
function deg = toDegree(radian)
% radian to deg
deg = radian*180/pi;
end



