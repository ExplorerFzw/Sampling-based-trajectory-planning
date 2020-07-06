

% startp = [0,0];
% endp = [20,0];
xs = 0; ys = 0;
Ldis = sqrt((X(200)-X(350)).^2 + (Y(200)-Y(350)).^2);
xe =Ldis;
ye = 0;

p = BezierGeneration(xs,ys, xe,ye,2.5);
% p = vpa(p,3);
% p1 = vpa(p(:,1),3);
% p2 =vpa( p(:,2),3);
% 
% figure
% plot(p1,p2,'-*')
% hold on
p = FrenetToHuace(p);
% p1 = vpa(p(:,1),3);
% p2 =vpa( p(:,2),3);
% plot(p1,p2,'-*')

p = [p, ones(size(p,1),1)];
xc = X(200); yc = Y(200); heading_current= HA(200);
[ trans] =  BackTransfer(xc,yc,heading_current); %3*3

P = trans * p'; % £¨3*3£© * £¨3*92£©
P = P(1:2,:)';    % (92 * 2)
P(:,1) = roundn(P(:,1),-2);
P(:,2) = roundn(P(:,2),-2);

plot(P(:,1),P(:,2),'*r')
plot(X(230:320,1), Y(230:320,1),'sg')

 xlabel('x/m')
ylabel('y/m')
% title('Dynamic Obstacle Avoidance')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
%%
p(1,3) = HA(200);
heading_current = HA(200);
% heading_des = HA(250);
% figure
for i = 2: length(p)
    delta_heading =(0.75)* 180 /pi *  atan((p(i,1)-p(i-1,1))/(p(i,2)-p(i-1,2)));
    p(i,3) = NewHeading(delta_heading, heading_current);
    heading_des = p(i,3);
%     plot(i, heading_current,'ob');
%     hold on
%      plot(i, delta_heading,'ob');
%     hold on
end
P = [P, p(:,3)];
 plot(1:length(P), P(:,3))
 
%% Generate the new avoidance reference line
 u= [X(:,1),Y(:,1),HA(:,1)];
store=u;
   temp = store(351:end, :);
    temp1 = store(1:199, :);
   store = [temp1 ; P ; temp];
   
   
   