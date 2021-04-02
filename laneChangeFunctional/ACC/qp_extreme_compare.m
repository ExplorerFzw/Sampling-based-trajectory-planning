clc
clear all
close all


d0 = 1;
v0 = 0.2;
a0 = 0;
UB = 3.5;
LB = 2.5;
MINT  = 3;
MAXT = 10;
KJ_constrain = 1;
KD_constrain = 10;
KT_constrain = 5;
MAX_ACC = 0.5;
speed_limit = 1;
% X1 = [1 t t^2 t^3 t^4 t^5];
% A1 = X1' * X1;
% 
% X2 = [0 0 0 6 24*t 60*t^2];
% A2 = X2' * X2;
% 
% B1 = int(A1,[0,Te])
% B2 = int(A2,[0,Te])   

%typical x is:
%     1.0000
%     0.2000
%          0
%     0.1520
%    -0.0472
%     0.0038

syms t
X3 = [120*t, 24, 0,0,0,0];
A3 = X3' *X3;
B3 = int(A3,[0,t]);

tic

j = 1;
for Te = 3%MINT: MAXT
B1 = KD_constrain * [Te, Te^2/2, Te^3/3, Te^4/4,   Te^5/5,   Te^6/6;...
                    Te^2/2, Te^3/3, Te^4/4, Te^5/5,   Te^6/6,   Te^7/7;...
                    Te^3/3, Te^4/4, Te^5/5, Te^6/6,   Te^7/7,   Te^8/8;...
                    Te^4/4, Te^5/5, Te^6/6, Te^7/7,   Te^8/8,   Te^9/9;...
                    Te^5/5, Te^6/6, Te^7/7, Te^8/8,   Te^9/9, Te^10/10;...
                    Te^6/6, Te^7/7, Te^8/8, Te^9/9, Te^10/10, Te^11/11];
B2 =  KJ_constrain  * [0, 0, 0,        0,        0,        0;...
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
b = [-(d0 + LB) ; d0 + UB];

for i = 0:  Te
     A  = [A; [0,-1,-2*i, -3 * i^2 , -4*i^3, -5 * i^4];[0,1,2*i, 3 * i^2 , 4*i^3, 5 * i^4]];
     b = [b; speed_limit;speed_limit];
end

for i = 0: Te
A = [A; [0 ,0 , -2 , -6 * i, -12* i^2, -20* i^3];[0 ,0 , 2 , 6 * i, 12* i^2, 20* i^3]];
b = [b; MAX_ACC;MAX_ACC];
end

lb = [];
ub = [];
x0 = [0,0,0,0,0,0];
% x0 = x0 + 0.1*(rand(5,1)-0.5);
% tic
% options = optimoptions('quadprog','Display','iter',...
%     'Algorithm','interior-point-convex','OptimalityTolerance',1e-4);
% [x,fval,exitflag,output,lambda] =  quadprog(H,f,A,b,Aeq,beq,lb,ub,x0,options)
% toc


options = optimoptions('quadprog',...
    'Algorithm','interior-point-convex','linearsolver','dense','OptimalityTolerance',1e-4);

[x,fval,exitflag] =  quadprog(H,f,A,b,Aeq,beq,lb,ub,x0,options);
% [x,fval,exitflag,output,lambda] =  quadprog(H,f,A,b,Aeq,beq)
cost_total(j).x = x;
cost_total(j).costs = fval + KT_constrain * Te;
cost_total(j).Te = Te;
cost_total(j).exitflag = exitflag;
j = j+1;
end

% figure
% i = 0: 0.1:Te;
% y = x(1)+ x(2)*i + x(3)* i.^2 + x(4) * i.^3 + x(5) * i.^4 + x(6) * i.^5;
% plot(i,y)

cost_min = cost_total(1).costs;
cost_para = cost_total(1).x;
Topt =cost_total(1).Te;
for i = 2: length(cost_total)
    if cost_total(i).costs < cost_min && cost_total(i).exitflag ~= -2
        cost_min = cost_total(i).costs ;
        cost_para = cost_total(i).x;
        Topt = cost_total(i).Te;
    end
end

x
toc


figure
i = 0: 0.1:Topt;
y = x(1)+ x(2)*i + x(3)* i.^2 + x(4) * i.^3 + x(5) * i.^4 + x(6) * i.^5;
plot(i,y)

%%
clc
clear all
close all
tic



d0 = 1;
v0 = 0.2;
a0 = 0;
UB = 3.5;
LB = 2.5;
MINT  = 3;
MAXT = 10;
KJ_constrain = 1;
KD_constrain = 10;
KT_constrain = 5;
MAX_ACC = 0.5;
speed_limit = 1;
DT  = 1;
D_ROAD_W = 0.2;


 frenet_paths =[]; % initiate it with empty
    cost_graph = []; % initiate it with empty
    
        lower_bound =LB;
        upper_bound = UB;

    
    for Ti = MINT : DT : MAXT
        for di = lower_bound : D_ROAD_W : upper_bound
            xs = d0;
            vxs = v0;
            axs = a0;
            %Ti is sampling on T
            xe = di; % sampling on lateral offset
            vxe = 0;
            axe = 0;
            [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
                vxs, axs, xe, vxe, axe,Ti);
            [jerk_bar_lat] = cal_j_bar(a3,a4,a5,Ti);
            [d_bar_lat] = calc_d_bar(a0,a1,a2,a3,a4,a5,Ti);
            cost_total = KJ_constrain * jerk_bar_lat + KD_constrain * d_bar_lat + KT_constrain * Ti;            
            cost_graph = [cost_graph;[cost_total, Ti, di,...
            a0, a1, a2, a3, a4, a5]];
        end

    end
    
     cost_graph = sortrows(cost_graph);
     cost_graph_optimal = check_status(cost_graph,speed_limit,MAX_ACC);
    cost_graph_para =cost_graph_optimal(4:9)'
  toc
  
  figure
  x = cost_graph_para;
i = 0: 0.1:cost_graph_optimal(2);
y = x(1)+ x(2)*i + x(3)* i.^2 + x(4) * i.^3 + x(5) * i.^4 + x(6) * i.^5;
plot(i,y)
  
function [jerk_bar] = cal_j_bar(a3,a4,a5,T)
    jt = [];
    for t =0 : 0.1 : T
        jt = [jt, calc_third_derivative(a3,a4, a5,t)];
    end
    jerk_bar = mean(abs(jt));
    jerk_bar = sum(jt .* 0.1);
end


function [d_bar] = calc_d_bar(a0,a1,a2,a3,a4,a5,T)
    xt = [];
    for t =0 : 0.1 : T
        xt = [xt, calc_point(a0,a1,a2,a3,a4,a5,t)];
    end
    d_bar = mean(abs(xt));
    d_bar = sum(xt .* 0.1)
end

function cost_graph_optimal = check_status(cost_graph,speed_limit,MAX_ACC)

    i = 1;
    COND = 1;
    while COND == 1
        frenet_data = cost_graph(i,:);
        Te = frenet_data(2);        
        for j = 4:9
            a(j-3) = frenet_data(j);
            
        end
    
        xt = [];
        yt = [];
        vxt = [];
        vyt = [];
        axt = [];
        ayt = [];

        for t = 0:0.1:Te
            a0 = a(1); a1 = a(2); a2 = a(3); a3 = a(4);
            a4 = a(5); a5 = a(6); 
            [yt] = [yt,calc_point(a0,a1,a2,a3,a4,a5,t)];
            [vyt] = [vyt, calc_first_derivative(a1,a2,a3,a4,a5,t)];
            [ayt] = [ayt, calc_second_derivative(a2,a3,a4,a5,t)];
        end
        
        
        velocity = sqrt( vyt.^2);
        acceleration = abs(sqrt(ayt.^2));
        
        
        if ((max(abs(velocity))<= speed_limit) && (max(acceleration)<=MAX_ACC))
            cost_graph_optimal = cost_graph(i,:);
            COND = 2;
        end
        
        i = i+1;
        
        if  i > size(cost_graph,1)
            COND = 2;
            cost_graph_optimal = cost_graph(1,:);
        end
    end    
end

function [a0, a1, a2, a3, a4,a5] = quintic_polynomial(xs, ...
    vxs, axs, xe, vxe, axe,T)
% A = [0,0,0,0,0,1; T^5,T^4,T^3,T^2,T,1;...
%     0,0,0,0,1,0 ; 5*T^4  4*T^3 3*T^2 2*T 1 0 ; ...
%     0 0 0 2 0 0; 20*T^3 12*T^2 6*T 2 0 0];
% b = [xs, xe, vxs, vxe, axs, 0]';
% x = A\b;
% a5 = x(1);
% a4 = x(2);
% a3 = x(3);
% a2 = x(4);
% a1 = x(5);
% a0 = x(6);
A = [T^3 T^4 T^5; 3*T^2 4*T^3 5*T^4; 6*T 12*T^2 20*T^3];
b = [(xe - xs  - vxs*T - 0.5*axs*T^2); (vxe- vxs - axs*T ); (axe - axs)];
x = A\b;
a0 = xs;
a1 = vxs;
a2 = axs/2;

a3 = x(1);
a4 = x(2);
a5 = x(3);
end

function [xt] = calc_point(a0,a1,a2,a3,a4,a5,t)
xt = a0 + a1 * t + a2 * t ^2 + a3 * t^3 + a4 * t^4 + a5 * t^5;
end

function [xt] =calc_first_derivative(a1,a2,a3,a4,a5,t)
xt = a1 + 2 * a2 * t + 3 * a3 * t^2 + 4 * a4 * t^3  +  5 * a5 * t^4;
end

function [xt]  = calc_second_derivative(a2,a3,a4,a5,t)
xt = 2* a2 + 6* a3 * t + 12 * a4 * t^2 + 20* a5 *t^3;
end

function [xt] = calc_third_derivative(a3,a4,a5,t)
xt =6 * a3 + 24 * a4 * t + a5 * t^2;
end