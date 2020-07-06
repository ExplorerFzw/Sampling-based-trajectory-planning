%% the use of linear programming, linprog
clc
clear all
f = [-2;-1;1];

A = [1 4 -1; 2 -2 1];

b = [4;12];

Aeq = [1 1 2];
beq = 6;

lb = zeros(3,1);
ub = [];

options = optimoptions('linprog','Algorithm','dual-simplex','Display','iter','MaxIterations',10)

[x,fval,exitflag,output,lambda]  = linprog(f,A,b,Aeq,beq,lb,ub,options)

%% the use of fminunc, using default format
clc
clear all

options = optimoptions(@fminunc,'Display','iter','Algorithm','quasi-newton');
 fun = @(x)x(1)*exp(-(x(1)^2 + x(2)^2)) + (x(1)^2 + x(2)^2)/20;
%fun = @(x)3*x(1)^2 + 2*x(1)*x(2) + x(2)^2 - 4*x(1) + 5*x(2);
x0 = [1,2];
[x,fval,exitflag,output] = fminunc(fun,x0,options)

%% the use of fminunc,using the form of problem
clc
clear all
 options = optimoptions('fminunc','Display','iter','Algorithm','trust-region','SpecifyObjectiveGradient',true);
% options = optimoptions('fminunc','Display','iter','Algorithm','quasi-newton');
problem.options = options;
problem.x0 = [1;2];
problem.objective = @func;
problem.solver = 'fminunc';
x = fminunc(problem)


%% the use of fmincon
clc
clear all

x0 = [0.1 0.3];
A = [1,2];
b = 1;
Aeq = [2,1];
beq = 1;
lb = [0,0.2];
ub = [0.5,0.8];
nonlcon = @nonlinear;
options = optimoptions('fmincon','Display','iter','Algorithm','interior-point');
fun = @(x)100*(x(2)-x(1)^2)^2 + (1-x(1))^2;

  [x,fval,exitflag,output,lambda,grad,hessian] ...
    = fmincon(fun,x0,A,b,Aeq,beq,lb,ub,nonlcon,options)
    

  %% fmincon with gradient
  clc
clear all

x0 = [0.1 0.3];
A = [1,2];
b = 1;
Aeq = [2,1];
beq = 1;
lb = [0,0.2];
ub = [0.5,0.8];
nonlcon = @nonlinear;
options = optimoptions('fmincon','Display','iter','Algorithm','interior-point','SpecifyObjectiveGradient',true);
fun = @rosenbrockwithgrad;

  [x,fval,exitflag,output,lambda,grad,hessian] ...
    = fmincon(fun,x0,A,b,Aeq,beq,lb,ub,nonlcon,options)
    
 %% fmincon using problem structure
options = optimoptions('fmincon','Display','iter','Algorithm','interior-point');
problem.options = options;
problem.solver = 'fmincon';
problem.objective = @(x)100*(x(2)-x(1)^2)^2 + (1-x(1))^2;
problem.x0  = [0.1 0.3];
problem.A =  [1,2];
problem.b = 1;
problem.beq = 1;
problem.Aeq = [2,1];
problem.lb = [0,0.2];
problem.ub = [0.5,0.8];
problem.nonlcon = @unitdisk;
 
  [x,fval,exitflag,output,lambda,grad,hessian] ...
 = fmincon(problem)
 %% the use of fminbnd
options = optimset('Display','iter','PlotFcns',@optimplotfval);
[x,fval,exitflag,output]  = fminbnd(@scalarobjective,1,3,options)

 %% the use of fminsearch\
 clc
 clear all
 
 options = optimset('Display','iter','PlotFcns',@optimplotfval,'TolCon',1e-6);
 fun = @(x)100*(x(2) - x(1)^2)^2 + (1 - x(1))^2;
x0 = [-1.2,1];
[x,fval,exitflag,output] = fminsearch(fun,x0,options)

%% comparison between fminsearch and fminunc
clc
clear all
options = optimoptions(@fminunc,'Display','iter','Algorithm','quasi-newton','PlotFcns',@optimplotfval);
fun = @(x)100*(x(2) - x(1)^2)^2 + (1 - x(1))^2;
x0 = [-1.2,1];
[x,fval,exitflag,output] = fminunc(fun,x0,options)

%%
clc
clear all
fun = @(x) -abs(1/x);
x0 = 1;
x1= -3;
x2 = 3;

[x,fval,exitflag,output] = fminbnd(fun,x1,x2)
[x,fval,exitflag,output] = fminsearch(fun,x0)
[x,fval,exitflag,output] = fminunc(fun,x0)
%% how the initial points affect the results
clc
clear all
[x,y] = meshgrid(-4:0.1:4,-4:0.1:4);
z = x.^2 + y.^2;
 mesh (x,y,z);
plot3(x,y,z)
hold on 
zz = x-3*y -9;
if zz>0
    zz = 0;
end
mesh(x,y,zz);


hold on
x0 = [0,-0.2];
Aeq = [1 -3]; beq = 9;
A = [];
b = [];
nonlcon = [];
lb = [-4,-4];
ub = [4,4];
fun = @(x)x(1).^2 + x(2).^2;
options = optimoptions('fmincon','Display','iter','Algorithm','interior-point');
 [x,fval,exitflag,output,lambda,grad,hessian] ...
    = fmincon(fun,x0,A,b,Aeq,beq,lb,ub,nonlcon,options)
    
plot3(x(1),x(2),x(1)-3*x(2) -9,'r*')
%% the use of quadprog
H = [1 -1; -1 2]; 
f = [-2; -6];
A = [1 1; -1 2; 2 1];
b = [2; 2; 3];
[x,fval,exitflag,output,lambda] = ...
   quadprog(H,f,A,b)
%%
H = [1 -1; -1 2]; 
f = [-2; -6];
Aeq = [1 1];
beq = 0;
[x,fval,exitflag,output,lambda] = ...
   quadprog(H,f,[],[],Aeq,beq)
%% here you can set max iteration and tolerance 
options = optimoptions('quadprog','Display','iter','MaxIterations',5,'TolFun',1e-16);
H = [1,-1,1
    -1,2,-2
    1,-2,4];
f = [2;-3;1];
lb = zeros(3,1);
ub = ones(size(lb));
Aeq = ones(1,3);
beq = 1/2;
x0 = [];
[x,fval,exitflag,output,lambda] = quadprog(H,f,[],[],Aeq,beq,lb,ub,x0,options)
%% the use of   mpcqpsolver to solve quadratic programming problems
H = [1 -1; -1 2];
f = [-2; -6];
A = [1 0; 0 1; -1 -1; 1 -2; -2 -1];
b = [0; 0; -2; -2; -3];Aeq = [];
beq = zeros(0,1);
[L,p] = chol(H,'lower');
Linv = inv(L);
p
opt =  mpcqpsolverOptions('double');
opt.MaxIter = 100;
iA0 = false(size(b)); %If your problem has no inequality constraints, use false(0,1). For a cold start, false(m,1).
[x,status,iA,lambda] = mpcqpsolver(Linv,f,A,b,Aeq,beq,iA0,opt)


