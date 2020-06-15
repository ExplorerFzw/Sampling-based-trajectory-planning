function [] = plot_circle(X_O,Y_O,R)
%画圆函数
%   此处显示详细说明
for theta = 0:0.2:2*pi
    Circle1 = X_O + R*cos(theta);
    Circle2 = Y_O + R*sin(theta);
    plot(Circle1,Circle2,'b.','linewidth',0.2);
    hold on
%     plot(X_O,Y_O,'bo','linewidth',0.1);
end
end

