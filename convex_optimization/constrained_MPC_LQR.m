A = [1.1 2; 0 0.95];
B = [0; 0.0787];
C = [-1 1];
D = 0;
Ts = 1;
sys = ss(A,B,C,D,Ts);
x0 = [0.5;-0.5]; % initial states at [0.5 -0.5]
Qy = [1,0;0,1];
R = 0.01;
K_lqr = lqr(sys,Qy,R);

M = [A;A^2;A^3;A^4];
CONV = [B zeros(2,1) zeros(2,1) zeros(2,1);...
        A*B B zeros(2,1) zeros(2,1);...
        A^2*B A*B B zeros(2,1);...
        A^3*B A^2*B A*B B];
    
Q =Qy;
Q_bar = dlyap((A-B*K_lqr)', Q+K_lqr'*R*K_lqr);

Q_hat = blkdiag(Q,Q,Q,Q_bar);
R_hat = blkdiag(R,R,R,R);
H = CONV'*Q_hat*CONV + R_hat;
F = CONV'*Q_hat*M;

Ac = -[1 0 0 0;...
      -1 0 0 0;...
       0 1 0 0;...
       0 -1 0 0;...
       0 0 1 0;...
       0 0 -1 0;...
       0 0 0 1;...
       0 0 0 -1];
b0 = -[1;1;1;1;1;1;1;1];

L = chol(H,'lower');
Linv = L\eye(size(H,1));

x = x0;
iA = false(size(b0));
opt = mpcqpsolverOptions;
opt.IntegrityChecks = false;
x = x0;
t_constrained = 0:40;
for ct = t_constrained
    [u, status, iA] = mpcqpsolver(Linv,F*x,Ac,b0,[],zeros(0,1),iA,opt);
    uMPC(ct+1) = u(1);
    x = A*x+B*uMPC(ct+1);
    yMPC(ct+1) = C*x;
end
figure
subplot(2,1,1)
plot(t_constrained,uMPC)
xlabel('time')
ylabel('u')
subplot(2,1,2)
plot(t_constrained,yMPC)
xlabel('time')
ylabel('y')
legend('Constrained MPC')

function [K] = mpc_control(dt,x0)

A = [1.1 2; 0 0.95];
B = [0; 0.0787];
C = [-1 1];
D = 0;
Ts = 1;
sys = ss(A,B,C,D,Ts);
 
Qy = [1,0;0,1];
R = 0.01;
K_lqr = lqr(sys,Qy,R);

M = [A;A^2;A^3;A^4];
CONV = [B zeros(2,1) zeros(2,1) zeros(2,1);...
        A*B B zeros(2,1) zeros(2,1);...
        A^2*B A*B B zeros(2,1);...
        A^3*B A^2*B A*B B];
    
Q =Qy;
Q_bar = dlyap((A-B*K_lqr)', Q+K_lqr'*R*K_lqr);

Q_hat = blkdiag(Q,Q,Q,Q_bar);
R_hat = blkdiag(R,R,R,R);
H = CONV'*Q_hat*CONV + R_hat;
F = CONV'*Q_hat*M;

Ac = -[1 0 0 0;...
      -1 0 0 0;...
       0 1 0 0;...
       0 -1 0 0;...
       0 0 1 0;...
       0 0 -1 0;...
       0 0 0 1;...
       0 0 0 -1];
b0 = -[1;1;1;1;1;1;1;1];

L = chol(H,'lower');
Linv = L\eye(size(H,1));

x = x0;
iA = false(size(b0));
opt = mpcqpsolverOptions;
opt.IntegrityChecks = false;
x = x0;
 [u, status] = mpcqpsolver(Linv,F*x0,Ac,b0,[],zeros(0,1),iA,opt);
 K = u;
end
