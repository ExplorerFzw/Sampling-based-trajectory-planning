 DynamicWindowApproachSample()
  
% -------------------------------------------------------------------------
%
% File : DynamicWindowApproachSample.m
%
% Discription : Mobile Robot Motion Planning with Dynamic Window Approach
%
% Environment : Matlab
%
% Author : Atsushi Sakai
%
% Copyright (c): 2014 Atsushi Sakai
%
% License : Modified BSD Software License Agreement
% -------------------------------------------------------------------------

function [] = DynamicWindowApproachSample()
 
close all;
clear all;
 
disp('Dynamic Window Approach sample program start!!')

x=[0 0 pi/2 0 0]';%��ܥåȤγ���״�B[x(m),y(m),yaw(Rad),v(m/s),��(rad/s)]
goal=[10,10];%���`���λ�� [x(m),y(m)]
%�Ϻ���ꥹ�� [x(m) y(m)]
obstacle=[0 2;
          4 2;
          4 4;
          5 4;
          5 5;
          5 6;
          5 9
          8 8
          8 9
          7 9];
      
obstacleR=0.5;%�nͻ�ж��ä��Ϻ���ΰ뾶
global dt; dt=0.1;%�̤ߕr�g[s]

%��ܥåȤ���ѧ��ǥ�
%[����ٶ�[m/s],��߻��^�ٶ�[rad/s],��߼Ӝp�ٶ�[m/ss],��߼Ӝp���^�ٶ�[rad/ss],
% �ٶȽ����[m/s],���^�ٶȽ����[rad/s]]
Kinematic=[1.0,toRadian(20.0),0.2,toRadian(50.0),0.01,toRadian(1)];

%�u���v���Υѥ��`�� [heading,dist,velocity,predictDT]
evalParam=[0.1,0.2,0.1,3.0];
area=[-1 11 -1 11];%���ߥ��`����󥨥ꥢ�Ύڤ� [xmin xmax ymin ymax]

%���ߥ��`�����Y��
result.x=[];
tic;
%movcount=0;
% Main loop
for i=1:5000
    %DWA�ˤ����������Ӌ��
    [u,traj]=DynamicWindowApproach(x,Kinematic,goal,evalParam,obstacle,obstacleR);
    x=f(x,u);%�\�ӥ�ǥ�ˤ���Ƅ�
    
    %���ߥ��`�����Y���α���
    result.x=[result.x; x'];
    
    %���`���ж�
    if norm(x(1:2)-goal')<0.5
        disp('Arrive Goal!!');break;
    end
    
    %====Animation====
    hold off;
    ArrowLength=0.5;%ʸӡ���L��
    %��ܥå�
    quiver(x(1),x(2),ArrowLength*cos(x(3)),ArrowLength*sin(x(3)),'ok');hold on;
    plot(result.x(:,1),result.x(:,2),'-b');hold on;
    plot(goal(1),goal(2),'*r');hold on;
    plot(obstacle(:,1),obstacle(:,2),'*k');hold on;
    %̽��܉�E��ʾ
    if ~isempty(traj)
        for it=1:length(traj(:,1))/5
            ind=1+(it-1)*5;
            plot(traj(ind,:),traj(ind+1,:),'-g');hold on;
        end
    end
%     axis(area);
    grid on;
    drawnow;
    %movcount=movcount+1;
    %mov(movcount) = getframe(gcf);% ���˥�`�����Υե�`��򥲥åȤ���
end
figure(2)
plot(result.x(:,4));
toc
%movie2avi(mov,'movie.avi');
end


function [u,trajDB]=DynamicWindowApproach(x,model,goal,evalParam,ob,R)
%DWA�ˤ����������Ӌ��򤹤��v��

%Dynamic Window[vmin,vmax,��min,��max]������
Vr=CalcDynamicWindow(x,model);
%�u���v����Ӌ��
[evalDB,trajDB]=Evaluation(x,Vr,goal,ob,R,model,evalParam);

if isempty(evalDB)
    disp('no path to goal!!');
    u=[0;0];return;
end

%���u���v������Ҏ��
evalDB=NormalizeEval(evalDB);

%��K�u������Ӌ��
feval=[];
for id=1:length(evalDB(:,1))
    feval=[feval;evalParam(1:3)*evalDB(id,3:5)'];
end
evalDB=[evalDB feval];

[maxv,ind]=max(feval);%����u�������󤭤��������Υ���ǥå�����Ӌ��
u=evalDB(ind,1:2)';%�u�������ߤ��������򷵤�
end

function [evalDB,trajDB]=Evaluation(x,Vr,goal,ob,R,model,evalParam)
%���ѥ��ˌ������u������Ӌ�㤹���v��
evalDB=[];
trajDB=[];

for vt=Vr(1):model(5):Vr(2)
    for ot=Vr(3):model(6):Vr(4)
        %܉�E���ƶ�
        [xt,traj]=GenerateTrajectory(x,vt,ot,evalParam(4),model);
        %���u���v����Ӌ��
        heading=CalcHeadingEval(xt,goal);
        dist=CalcDistEval(xt,ob,R);
        vel=abs(vt);
        
        evalDB=[evalDB;[vt ot heading dist vel]];
        trajDB=[trajDB;traj];     
    end
end
end

function EvalDB=NormalizeEval(EvalDB)
%�u��������Ҏ�������v��
if sum(EvalDB(:,3))~=0
    EvalDB(:,3)=EvalDB(:,3)/sum(EvalDB(:,3));
end
if sum(EvalDB(:,4))~=0
    EvalDB(:,4)=EvalDB(:,4)/sum(EvalDB(:,4));
end
if sum(EvalDB(:,5))~=0
    EvalDB(:,5)=EvalDB(:,5)/sum(EvalDB(:,5));
end
end

function [x,traj]=GenerateTrajectory(x,vt,ot,evaldt,model)
%܉�E�ǩ`�������ɤ����v��
global dt;
time=0;
u=[vt;ot];%������
traj=x;%܉�E�ǩ`��
while time<=evaldt
    time=time+dt;%���ߥ��`�����r�g�θ���
    x=f(x,u);%�\�ӥ�ǥ�ˤ������
    traj=[traj x];
end
end

function stopDist=CalcBreakingDist(vel,model)
%�F�ڤ��ٶȤ�����ѧ��ǥ�ˏ��ä��ƄӾ��x��Ӌ�㤹���v��
global dt;
stopDist=0;
while vel>0
    stopDist=stopDist+vel*dt;%�ƄӾ��x��Ӌ��
    vel=vel-model(3)*dt;%���ԭ�t
end
end

function dist=CalcDistEval(x,ob,R)
%�Ϻ���Ȥξ��x�u������Ӌ�㤹���v��

dist=2;
for io=1:length(ob(:,1))
    disttmp=norm(ob(io,:)-x(1:2)')-R;%�ѥ���λ�ä��Ϻ���ȤΥΥ���`���Ӌ��
    if dist>disttmp%��С����Ҋ�Ĥ���
        dist=disttmp;
    end
end
end


function heading=CalcHeadingEval(x,goal)
%heading���u���v����Ӌ�㤹���v��

theta=toDegree(x(3));%��ܥåȤη�λ
goalTheta=toDegree(atan2(goal(2)-x(2),goal(1)-x(1)));%���`��η�λ

if goalTheta>theta
    targetTheta=goalTheta-theta;%���`��ޤǤη�λ���[deg]
else
    targetTheta=theta-goalTheta;%���`��ޤǤη�λ���[deg]
end

heading=180-targetTheta;
end

function Vr=CalcDynamicWindow(x,model)
%��ǥ�ȬF�ڤ�״�B����DyamicWindow��Ӌ��
global dt;
%܇�I��ǥ�ˤ��Window
Vs=[0 model(1) -model(2) model(2)];

%�\�ӥ�ǥ�ˤ��Window
Vd=[x(4)-model(3)*dt x(4)+model(3)*dt x(5)-model(4)*dt x(5)+model(4)*dt];

%��K�Ĥ�Dynamic Window��Ӌ��
Vtmp=[Vs;Vd];
Vr=[max(Vtmp(:,1)) min(Vtmp(:,2)) max(Vtmp(:,3)) min(Vtmp(:,4))];
%[vmin,vmax,��min,��max]
end

function x = f(x, u)
% Motion Model
global dt;
 
F = [1 0 0 0 0
     0 1 0 0 0
     0 0 1 0 0
     0 0 0 0 0
     0 0 0 0 0];
 
B = [dt*cos(x(3)) 0
    dt*sin(x(3)) 0
    0 dt
    1 0
    0 1];

x= F*x+B*u;
end

function radian = toRadian(degree)
% degree to radian
radian = degree/180*pi;
end

function degree = toDegree(radian)
% radian to degree
degree = radian/pi*180;
end
