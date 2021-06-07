clc
clear all
close all
x0 = 400;
v0 = 12;
dt = 1;    
a= 1;
A = [1, dt;0,1];
B = [0.5*dt^2;dt];
    
for i = 1:100
    [x,v] = state_space(x0,v0);
    mea_x(i) = x;
    mea_v(i) = v;
    x0 = x;
    v0 = v;
end

x = 400;
v = 12; 
d_p_x = 20;
d_p_vx = 5;
R = [625 0; 0, 36];
x_state = [x;v];
p_matrix =[d_p_x^2 0;0,d_p_vx^2] ;
for i = 1:length(mea_x)-1
    x_predict = A * x_state + B * [a];
    p_predict = A * p_matrix * A';
    kalman_gain = p_predict/(p_predict + R);
    x_new = x_predict + kalman_gain *...
        ([mea_x(i),mea_v(i)]' - x_predict);
    p_new = (eye(2) - kalman_gain)*p_predict;
    
    x_predict_data(i) = x_predict(1);
    v_predict_data(i) = x_predict(2);
    
    
    
    x_state = x_new;
    p_matrix = p_new;
end

figure
plot(1:length(mea_x),mea_x,'-b');
hold on
plot(1:length(mea_x)-1,x_predict_data,'-r');


    
    
    
function [x,v] = state_space(x0,v0)
    dt = 1;    
    a= 1;
    A = [1, dt;0,1];
    B = [0.5*dt^2;dt];
    state = A * [x0;v0] + B * (a + rand(1)-0.5);
    x = state(1) + (rand(1)-0.5)*100;
    v = state(2);
end