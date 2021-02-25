clc
clear all
close all

Te = 5;
d0 = 1;
v0 = 0.2;
a0 = 0;
LW = 3.5;

% X1 = [1 t t^2 t^3 t^4 t^5];
% A1 = X1' * X1;
% 
% X2 = [0 0 0 6 24*t 60*t^2];
% A2 = X2' * X2;
% 
% B1 = int(A1,[0,Te])
% B2 = int(A2,[0,Te])

syms t
X3 = [120*t, 24, 0,0,0,0];
A3 = X3' *X3;
B3 = int(A3,[0,t])

B1 = [Te, Te^2/2, Te^3/3, Te^4/4,   Te^5/5,   Te^6/6;...
    Te^2/2, Te^3/3, Te^4/4, Te^5/5,   Te^6/6,   Te^7/7;...
    Te^3/3, Te^4/4, Te^5/5, Te^6/6,   Te^7/7,   Te^8/8;...
    Te^4/4, Te^5/5, Te^6/6, Te^7/7,   Te^8/8,   Te^9/9;...
    Te^5/5, Te^6/6, Te^7/7, Te^8/8,   Te^9/9, Te^10/10;...
    Te^6/6, Te^7/7, Te^8/8, Te^9/9, Te^10/10, Te^11/11];
B2 =  [0, 0, 0,        0,        0,        0;...
      0, 0, 0,        0,        0,        0;...
      0, 0, 0,        0,        0,        0;...
      0, 0, 0,    36*Te,  72*Te^2, 120*Te^3;...
      0, 0, 0,  72*Te^2, 192*Te^3, 360*Te^4;...
      0, 0, 0, 120*Te^3, 360*Te^4, 720*Te^5];

B = B1 + B2;
H = B;

f = zeros(6,1);
Aeq = [1 0 0 0 0 0; 0 1 0 0 0 0; 0 1 2*Te 3*Te^2 4*Te^3 5*Te^4;...
    0 0 2 0 0 0;0 0 2 6*Te 12*Te^2 20*Te^3];
beq = [d0 v0 0 a0 0]';
A = [-1 -Te -Te^2 -Te^3 -Te^4 -Te^5;1 Te Te^2 Te^3 Te^4 Te^5];
b = [-(d0 + 2.5) ; d0+LW];
lb = [];
ub = [];
x0 = [1.0000 0.2000 0 0.1520 -0.0472 0.0038];
x0 = x0 + 0.1*(rand(5,1)-0.5)
% tic
% options = optimoptions('quadprog','Display','iter',...
%     'Algorithm','interior-point-convex','OptimalityTolerance',1e-4);
% [x,fval,exitflag,output,lambda] =  quadprog(H,f,A,b,Aeq,beq,lb,ub,x0,options)
% toc


options = optimoptions('quadprog',...
    'Algorithm','interior-point-convex','linearsolver','dense','OptimalityTolerance',1e-4);
tic
[x,fval,exitflag,output,lambda] =  quadprog(H,f,A,b,Aeq,beq,lb,ub,x0,options)
% [x,fval,exitflag,output,lambda] =  quadprog(H,f,A,b,Aeq,beq)
toc


figure
i = 0: 0.1:5;
y = x(1)+ x(2)*i + x(3)* i.^2 + x(4) * i.^3 + x(5) * i.^4 + x(6) * i.^5;
plot(i,y)

%%
H = [1 -1; -1 2]; 
f = [-2; -6];
A = [1 1; -1 2; 2 1];
b = [2; 2; 3];

[x,fval,exitflag,output,lambda] = ...
   quadprog(H,f,A,b)