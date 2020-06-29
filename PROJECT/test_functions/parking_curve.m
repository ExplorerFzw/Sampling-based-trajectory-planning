clc
clear all
figure
for T = 12
    for f_pos = 2
        i_vel = -sqrt(3);
        f_vel = 0;
        i_pos =  5*sqrt(3);
%         f_pos = 5;
        % T=15;
        h=f_pos-i_pos;
        i_t = 0;
        f_t = T;
        
        a0=i_pos;
        a1=i_vel;
        a2=(3*h-(2*i_vel+f_vel)*T)/(T^2);
        a3=(-2*h+(i_vel+f_vel)*T)/(T^3);
        
        seg = 0.1;
        t=i_t:seg:(f_t);
        len=length(t);
        p=zeros(1,len);
        sd=zeros(1,len);
        sdd=zeros(1,len);

        for i=1:len
            p(i)=a0+a1*(t(i)-i_t)+a2*(t(i)-i_t)^2+a3*(t(i)-i_t)^3;
            sd(i)=a1 + a2*(2*t(i) - 2*i_t) + 3*a3*(t(i) - i_t)^2;
            sdd(i)=2*a2 + 3*a3*(2*t(i) - 2*i_t);
        end


        
    end
end

j = 1;
for i = length(t):-1:1
    pos_x_f(j) = t(i);
    pos_y_f(j) = p(i);
     j = j+1;
        plot(t(i),p(i),'-o');
        drawnow
        hold on
end

j = 1;
for i = 0:0.1:5
    c = sqrt(100 - (i + 5)^2);
    pos_x_b(j) = i;
    pos_y_b(j) = c;
    j = j+1;
    plot(i,c,'*-')
     drawnow
        hold on
end

pos_x =  [pos_x_f , pos_x_b]' - 5;
pos_y = [pos_y_f , pos_y_b]';
p = [pos_x, pos_y];
heading_current = 270;
figure
for i =  2: length(pos_x)
    delta_heading =180 /pi *  atan((p(i,1)-p(i-1,1))/(0.01 + p(i,2)-p(i-1,2)));
    heading_des= NewHeading(delta_heading, heading_current);
    p(i,3)  = heading_des;
%     plot(i, heading_current,'ob');
%     hold on
%      plot(i, delta_heading,'ob');
%     hold on
end
 plot(1:length(p), p(:,3))




%%

clc
clear all

i_x = 0;
i_y = 20;

% f_x = 40; % varying para; 
% f_y = 1; % vary para;


for f_x = 20
    for f_y = 3
        counter = 1;
        if 30 - f_y > f_x

        for i = f_x: -0.1 : 0
            pos_y(counter) = (f_x + f_y) -sqrt(f_x^2  - (i - f_x)^2);
            pos_x(counter) = i;
            counter = counter + 1;
        end   

        for i  = ( f_y + f_x):0.2:20
            pos_x(counter) = 0;
            pos_y(counter) = i;
            counter = counter + 1;
        end
        
        else
            
            for i =  f_x: -0.1 : 20-f_y
                pos_x(counter) = i;
                pos_y(counter) = f_y;
                counter = counter + 1;
            end
            
            for i = 0: 0.1 : 20 - f_y
                pos_x(counter) = i;
                pos_y(counter) = 20 - sqrt(((20 - f_y)^2 - (i - (20 - f_y))^2));
                counter = counter + 1;
            end

        end

    end

end

    for i = 20:-0.2:0
        pos_x(counter) = 0;
        pos_y(counter) = i;
        counter = counter + 1;
    end
figure
    for i  =1:length(pos_x)
        plot(pos_x(i), pos_y(i),'-o')
        drawnow
        hold on
    end



% figure
% for i =  length(pos_x):-1:2
%     delta_heading =180 /pi *  atan((p(i,1)-p(i-1,1))/(0.01 + p(i,2)-p(i-1,2)));
%     heading_des= NewHeading(delta_heading, heading_current);
%     p(i,3)  = heading_des;
% %     plot(i, heading_current,'ob');
% %     hold on
% %      plot(i, delta_heading,'ob');
% %     hold on
% end
%  plot(1:length(p), p(:,3))












