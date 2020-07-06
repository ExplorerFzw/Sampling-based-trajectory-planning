clc
clear all
close all
v0 = 6;
sf = 10;
% a0 = 1;

figure
for s = 0:0.1:sf
    for vf = 4:1:10
        for a0 = 2
            A = [1 0 0 0; 1 sf sf^2 sf^3; 0 1 0 0; 0 1 2*sf 3*sf^2];
            B = [v0;vf;a0;0];
            C = A\B;
            y = C(1) + C(2)*s + C(3)*s^2 + C(4)* s^3;
            plot(s,y,'-o')
            hold on
        end
    end
end

