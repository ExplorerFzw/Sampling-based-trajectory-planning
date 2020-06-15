clc
clear
close all
%% ��������
global MAX_ROAD_WIDTH D_ROAD_W  MINT  DT MAXT KJ KD KT KLAT KLON
global ROBOT_RADIUS MAX_ACCEL TARGET_SPEED MAX_SPEED MAX_CURVATURE
MAX_SPEED = 3.0;  % ����ٶ� [m/s]
MAX_ACCEL = 1.0; % �����ٶ�[m/ss]
MAX_CURVATURE = 0.2; %������� [1/m]
MAX_ROAD_WIDTH = 3.0; % ����·��� [m]
D_ROAD_W = 0.5; % ��·��Ȳ������ [m]
DT = 1.0; % Delta T [s]
MAXT = 15; % ���Ԥ�� [s]
MINT = 10; % ��СԤ�� [s]

TARGET_SPEED = 1.5; % Ŀ���ٶȣ���������ٶȱ��֣� [m/s]
D_T_S = 0.2; % Ŀ���ٶȲ������ [m/s]
N_S_SAMPLE = 1 ; % sampling number of target speed
ROBOT_RADIUS = 1.0; % robot radius [m]
predict = 15;

% ��ʧ����Ȩ��
KJ = 0.1; % ������ٶ�
KT = 0.1; % Ԥ�����Ȩ��
KD = 10; % ����ƫ��Ȩ��
KLAT = 1.0; % ������ٶ�
KLON = 1.0; % ������ٶ�

%������ʼ״̬
x = 0; y = 0; yaw = 0; v = 0;
c_d = 0.0; % ��ǰ��λ�� [m]
c_d_d = 0.0; % ��ǰ�ٶ� [m/s]
c_d_dd = 0.0; % ��ǰ���ٶ� [m/s2]

k = 0.1;  % look forward gain
Lfc = 0.1; % look-ahead distance
Kp = 1.0 ; % speed propotional gain
L = 2.8  ;% [m] wheel base of vehicle
% Lf = k * v + Lfc; %some constant parameters we set for the vehicle 
%% ����ȫ��·������̬�ϰ���
global cx cy YAW ref_s
wx = [0.0, 10.0, 20.5, 30.0, 40.5, 50.0, 60.0];
wy = [0.0, -4.0, 1.0, 6.5, 8.0, 10.0, 6.0];
ob = [4.2, -4.4; 22, 2.4; 20.0, 10.0; 30.0, 6.0; 35.0, 7.0;
      30.0, 5.0; 22, 2; 36, 7.5; 38, 7.6; 50.0, 12.0; 14, -3];
[xt, yt, YAW, ref_s] = cubic_spline(wx, wy, MAX_ROAD_WIDTH);
waypoints = [xt',yt'];
cx = waypoints(:,1);
cy = waypoints(:,2);
% plot(ob(:,1),ob(:,2),'k*')
for i = 1:size(ob)
    plot_circle(ob(:,1),ob(:,2),ROBOT_RADIUS);
end
%% ���ɺ�ѡ�켣
%����ʱ������������
dt = 0.02; % ��������[ms]
while x < 50 
tic
    % find the current location using reference line index to indicate.
    [lat, current_ind] = calc_current_index(x, y, cx, cy); 
    c_d = lat;
    [frenet_paths] = calc_frenet_paths(c_d, c_d_d, c_d_dd);
    [val, checkline] = collision_checking(frenet_paths, c_d, c_d_d, c_d_dd,...
        ob, cx, cy, YAW, current_ind);
%     fprintf('path_index = %d\n',val);
    Di = frenet_paths(val,3);
    Ti = frenet_paths(val,2);

    i = 1;
    S= current_ind;
    d = [];
    steer = [];
    location_ind = [];
    s = 0;
%    fprintf('d0 = %f, T = %f, D = %f',D0, Ti, Di);
    while  s <= Ti
        p(i,:)= Bezierfrenet(c_d, Ti, Di, s);
%         steer(i) = YAW(S);
        location_ind(i) = S;
        s = s + sqrt((cx(S+1)-cx(S))^2 +  (cy(S+1)-cy(S))^2);
        S = S+1;
        i = i+1;
    end
    waypoint = frenet_to_global (cx, cy, YAW, location_ind, p);
    ref =  waypoint(1:2,:)';
    path_x = ref(:,1);
    path_y = ref(:,2);
% toc
    %���㳵���������뼰���³���λ��
    ai = PIDcontrol(TARGET_SPEED, v, Kp); % calculate the PID controller output;
    delta = pure_pursuit_control(x,y,yaw,v,path_x,path_y,k,Lfc,L,predict) ;% pure pursuit controller will give desired steering angle;
    [x,y,yaw,v] = update_state(x, y, yaw, v, ai, delta, dt, L); % update the vehicle states;
%     c_d = lat;
%     c_d_d =  v* sin(yaw);
%     c_d_dd = ai;
        
    % ���ƹ���
    plot(x,y,'r.') % ��
    plot(path_x,path_y,'b.','Markersize',1) % ·
    drawnow
    hold on
end





