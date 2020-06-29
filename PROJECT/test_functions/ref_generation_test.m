clc
clear all
% 
% theta = 0:0.01:pi/2;
% x = theta;
% y = sin(theta);
% heading = cos(theta);
% store(:,1) = x';
% store(:,2) = y';
% store(:,3) = (90 - heading *180/pi)';
% lat = [0:0.01:0.01*(length(x)-1)]';
% p = [x', lat];
% 
% Location = 1;
% 
% 
% 
% ref = ref_generation(p,Location,store)
% 
% figure 
% plot(x,y,'ob')
% hold on
% plot(ref(:,1),ref(:,2),'ro')
% 
% function [ref] = ref_generation(p,Location,store)
% ref = zeros(length(p),2);
% for i = 1: length(p)
%     
%         if Location + i >= length(store)
%         break;
%         end
%     
%     heading_ref = store(Location+ i ,3);
%     if heading_ref>=0 && heading_ref<=180
%         ref(i,1) = store(Location +i,1) - abs(p(i,2))* cos(heading_ref /180*pi)
%         ref(i,2) = store(Location +i,2) + abs(p(i,2)) * sin(heading_ref /180*pi)
%     else 
%         ref(i,1) = store(Location +i,1) - abs(p(i,2))* cos((heading_ref -360)/180*pi)
%         ref(i,2) = store(Location +i,2) + abs(p(i,2)) * sin((heading_ref -360)/180*pi)
%     end
% 
% end
% end 


D0 = 0.3
Ti = 20
Di = 0

figure
for i = 0:0.5:20
    p = Bezierfrenet(D0,Ti, Di, i)
    plot(p(1),p(2),'-o')
    hold on 
end

 function [p] = Bezierfrenet(D0, Ti, Di,t)
 p0 = [ 0 , D0];
 p1 = [Ti/2, D0];
 p2= [Ti/2, Di];
 p3 = [Ti, Di];
 %ÉèÖÃ¿ØÖÆµã
 
 p= (1-(t)/Ti)^3*p0 + 3*(1-(t)/Ti)^2*(t)/Ti*p1 + 3*(1-(t)/Ti)*((t)/Ti)^2*p2 + ((t)/Ti)^3*p3;

 end