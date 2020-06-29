clc;clear all;close all;
a=xlsread("New_Export0616_3",'F470:H5146');%  ³µÁ¾µ±Ç°¹ì¼£X_position;Y_position
RealHeading=a(:,1);
X_position=a(:,2);
Y_position=a(:,3);
ob=[70.63 5.3;131.5 9.624];
figure
plot(X_position, Y_position,'*b','LineWidth',1)
hold on 
plot(ob(:,1),ob(:,2),'ro','LineWidth',2)
hold off


figure
for i = 1: length(a)
%     plot(a(i,2),a(i,3),'.-r')  
    [trans]=GlobalToLocal(X_position(i),Y_position(i),RealHeading(i));
    OBS = Coordtrans(ob,trans,size(ob,1))
     i
     plot(OBS(1,1),OBS(1,2),'ro','LineWidth',2)
    drawnow limitrate
    hold on
end

function [ trans] =  GlobalToLocal(x,y,heading_current)
theta = heading_current;
theta = theta/180*pi;
R = [cos(theta),-sin(theta); sin(theta), cos(theta)];
[xt, yt ] = FindOrg (x,y,heading_current);
% xt = x;
% yt = y;
T = [xt; yt ] ;
trans = [R ,T;[0,0,1]];
end

function [Matrix2] = Coordtrans(Matrix,trans,LengthMatrix)

add = ones(LengthMatrix,1);
MatrixT= [Matrix(:,1:2), add]';
MatrixCoord = trans * MatrixT;
Matrix2 = [MatrixCoord'];

end

% function [Matrix2] = Coordtrans(ReferencePoint,trans)
% SIZE=size(ReferencePoint);
% L  = SIZE(1);
% add = ones(L,1);
% MatrixT= [ReferencePoint(:,1:2), add]';
% MatrixCoord = trans * MatrixT;
% Matrix2 = MatrixCoord';
% end

function [xt, yt] = FindOrg (x,y,heading_current)

L= sqrt(x^2 +y^2);
xt=1;
yt=1;

if (x==0  && y==0)
    xt= 0; yt = 0;
    return;
end

if (x>0 && y>0 ) || ((x==0 && y>0 ) )
    alfa = atan(x/y);
    gamma = alfa - heading_current /180*pi+ pi;
    xt = L * sin(gamma);
    yt = L * cos(gamma);
    return;
end

if (x>0 && y<0) || (x>0 && y==0)
    alfa = -(atan(y/x))+ pi/2;
    gamma = -alfa + heading_current /180*pi+ pi/2;
    xt = L * -cos(gamma);
   yt = L * -sin(gamma);
    return;
end

if (x<0 && y<0) || (x==0 && y<0)
    alfa = pi + atan(x/y);
    gamma = alfa - heading_current /180*pi+ pi;
      xt = L * sin(gamma);
    yt = L * cos(gamma);
    return;
end

if (x<0 && y>0) || (x<0 && y==0)
    alfa = 3/2*pi - atan(y/x);
    gamma = -alfa + heading_current /180*pi+ pi/2;
      xt = L * -cos(gamma);
    yt = L * -sin(gamma);
    return;
end

end