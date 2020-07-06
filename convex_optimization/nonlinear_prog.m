% 给定函数结构：f=a0*(1-e^(-a1*x))+e,其中a0和a1值未知
% 设a0=10，a1=10；e=0;
% dfda0=1-e^(-a1*x)
% dfda1=a0*a1*e^(-a1*x)
% f_T=a0_init*(1-e^(-a1_init*x))+e+dfda0*(a0-a0_init)+dfda1*(a1-a1_init)
 
% 设a0_init初值0;a1_init 0,x为1~100
a_init=[0,0]';
a_aim=[100,100]';
a=a_init;
x=1:10;
x=x';
% D=[dfda0,dfda01][d_a0,d_a1]'
D=f(a_aim(1),a_aim(2),x)-f(a(1),a(2),x);
Z=[get_dfda0(x),get_dfda1(x)];
dA=(Z'*Z)^(-1)*Z'*D;
a=a+dA;
precision=abs(dA(1)+sqrt(-1)*dA(2));
i =1;

figure
while precision>0.001
    D=f(10,10,x)-f(a(1),a(2),x);
    Z=[get_dfda0(x),get_dfda1(x)];
    dA=inv(Z'*Z)*Z'*D;% notice here, use inv() or pinv(), do not use (^-1)
    a=a+dA;
    a;
    precision=abs(dA(1)+sqrt(-1)*dA(2))
end

 
function dfda0=get_dfda0(x)
a_aim=[10,10]';
a1=a_aim(2);
dfda0=1-exp(-a1*x);
end
 
function dfda1=get_dfda1(x)
a_aim=[10,10]';
a0=a_aim(1);
a1=a_aim(2);
dfda1=a0*a1*exp(-a1*x);
end
function y=f(a0,a1,x)
e=0;
y=a0*(1-exp(-a1*x))+e;
end