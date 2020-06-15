clc;clear all
load('H:\Project\TrajectoryPlanningModelDesign\Codes\frenet_optimal\new.mat')
% load('D:\Matlab2019_workspace\frenchpoint.mat')

% x= pos_lat(1 : 1:length(pos_lat));
% y = pos_lon(1: 1:length(pos_lon));
% ha = RealHeading(1: 1:length(RealHeading));
% B0 = x(1);
% L0 = y(1);
% 
% for  i = 1: length(x)
%      [X(i),Y(i)]=transformation1(x(i),y(i),B0,L0);    
% end
figure
plot(X_position, Y_position,'ob')
hold on 
for  i = 1: length(ReferencePoint)
     [trans]=BackTransfer(X_position(i),Y_position(i),RealHeading(i));
     [Matrix2] = Coordtrans(ReferencePoint(i,:),trans);
     i
     plot(Matrix2(:,1),Matrix2(:,2),'or')
     drawnow limitrate
     hold on
end


% [Matrix2] = Coordtrans(ReferencePoint,trans)



function [ trans] =  BackTransfer(x,y,heading_current)
theta = heading_current;
theta = -theta/180*pi;
R = [cos(theta),-sin(theta); sin(theta), cos(theta)];
xt = x;
yt = y;
T = [xt; yt ] ;
trans = [R ,T;[0,0,1]];
end


function [Matrix2] = Coordtrans(ReferencePoint,trans)
SIZE=size(ReferencePoint);
L  = SIZE(1);
add = ones(L,1);
MatrixT= [ReferencePoint(:,1:2), add]';
MatrixCoord = trans * MatrixT;
Matrix2 = MatrixCoord';
end

function [X,Y,K]=transformation1(lat,lon,B0,L0)
% ���ø�ʽ��[X,Y]=transformation(lat,lon,B0,L0)
% ���룺 latΪγ�ȣ�lonΪ���ȣ���λΪ���ȣ���B0������ԭ���γ��x��L0������ԭ��ľ���y����λΪ����((rad);
% �����XΪˮƽֱ�����꣬ YΪ����ֱ�����꣬��λΪ��(m);
 B=lat*pi/180;
 L=lon*pi/180;
 B0=B0*pi/180;
 L0=L0*pi/180;
% B0=B0*pi/180;L0=L0*pi/180;%����ת��Ϊ����
a=6378137; b=6356752.3142;% a:���������峤���ᣬb:����������̰��ᣬ��λΪ��(m); constant
e=sqrt(1-(b/a)^2);ee=sqrt((a/b)^2-1);%ƫ���� constant
K=((a^2*cos(B0))/b)/sqrt(1+(ee)^2*(cos(B0))^2); %constant
X=K*(L-L0);
Y0=K*log(tan(pi/4+B0/2)*((1-e*sin(B0))/(1+e*sin(B0)))^(e/2));
Y=K*log(tan(pi/4+B/2)*((1-e*sin(B))/(1+e*sin(B)))^(e/2))-Y0;%%���������� -3.12145e6
end



