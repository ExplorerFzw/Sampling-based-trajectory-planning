clc
clear all
close all
true_value = 72;
estimate = 68;
error_est = 2;
error_mea = 4;
mea = zeros(100,1);

for i = 1: length(mea)
    mea(i) = true_value + (rand(1)-0.5) * 8;
end

for i = 1: length(mea) - 1
    KG = error_est/(error_est + error_mea);
    kalman_gain(i) = KG;
    estimate_data(i) = estimate;
    estimate = estimate + KG * (mea(i)-estimate);
    error_est  = (1 - KG) * error_est;
    error_est_data(i) = error_est;
end

figure
subplot(3,1,1)
plot(1:length(mea)-1,kalman_gain)
title("kalman gain")

subplot(3,1,2)
plot(1:length(mea)-1,estimate_data);
title("estimate data")

subplot(3,1,3)
plot(1:length(mea)-1,error_est_data)
title("error in estimate data")


