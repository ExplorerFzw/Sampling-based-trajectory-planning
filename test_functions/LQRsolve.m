A = [0 -1;0 0 ];
th1 = -1.6;
th2 = 0.8;
B1 = [th1;-1];
B2= [th2; -1];
C = [1 0 0 ];
C2 = [0 1 0];

C3 = [0 0 1];
D = 0;
Q = eye(2,2);
Q(1,1) = 50;
Q(2,2) = 50;
Ts = 0.01;

R = 100;
K_lqr1= lqrd(A,B1,Q,R,Ts)
K_lqr2= lqrd(A,B2,Q,R,Ts)

B = B1;
K_lqr = lqrd(A,B,Q,R,Ts)
%%
format short
S = Q;
maxiter = 1000;
EPSILON= 0.01;
% 
for i = 1:maxiter
    
   S_update=  Ad'* S *Ad - Ad' * S * Bd * inv(R + Bd' * S * Bd)* Bd' * S* Ad +Q;
   
    if abs(S_update - S)<EPSILON
         S = S_update ;
        break
    end
    
   S =  S_update  ;
end

K_cal = inv(Bd' * X * Bd +R) * Bd' * X * Ad
%%
format short
A = [-0.9,-0.3;0.7,0.1];
B = [1;1];
Q = [1,0;0,3];
R = 0.1;
Ts = 0.01;

[X,K,L] = icare(A,B,Q,R,[],[])
[KA, S, P ]= lqr(A,B,Q,R)
%%
clc
clear all

% load('aircraftPitchModel.mat')
format short
A = [0 -1;0 0 ];
th= 0.8;
B= [th;-1];
C =  [1 0 ; 0 1 ];
D = 0;
Q = eye(2,2);
Q(1,1) = 50;
Q(2,2) = 50;
Ts = 0.01;
R = 100;

sys = ss(A,B,C,D);
sysd = c2d(sys,Ts);
Ad = sysd.A;
Bd = sysd.B;

K_lqr = lqr(A,B,Q,R)
[Kd,S,P] = lqrd(Ad,Bd,Q,R,Ts)
sys1 = ss(Ad-Bd*Kd,B,C,D);
% figure
% step(sys1)

[X,KA,L] = idare(Ad,Bd,Q,R,[],[])
sys2 = ss(Ad-Bd*KA,Bd,C,D);
% figure
% step(sys2)



