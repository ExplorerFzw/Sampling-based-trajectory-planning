function [sys,x0,str,ts] = Steering_Control_test01(t,x,u,flag)
%   S����������(MATLAB�汾��R2014b)
%   �޶��ڳ����˶�ѧģ�ͣ�������Ϊǰ��ƫ��
%
% is an S-function implementing the MPC controller intended for use
% with Simulink. The argument md, which is the only user supplied
% argument, contains the data structures needed by the controller. The
% input to the S-function block is a vector signal consisting of the
% measured outputs and the reference values for the controlled
% outputs. The output of the S-function block is a vector signal
% consisting of the control variables and the estimated state vector,
% potentially including estimated disturbance states.

switch flag,
 case 0
  [sys,x0,str,ts] = mdlInitializeSizes; % Initialization
  
 case 2
  sys = mdlUpdates(t,x,u); % Update discrete states
  
 case 3
  sys = mdlOutputs(t,x,u); % Calculate outputs
 
 case {1,4,9} % Unused flags
  sys = [];
  
 otherwise
  error(['unhandled flag = ',num2str(flag)]); % Error handling
end
% End of dsfunc.

%==============================================================
% Initialization
%==============================================================

function [sys,x0,str,ts] = mdlInitializeSizes

% Call simsizes for a sizes structure, fill it in, and convert it 
% to a sizes array.

sizes = simsizes;
sizes.NumContStates  = 0;
sizes.NumDiscStates  = 4;
sizes.NumOutputs     = 1;
sizes.NumInputs      = 4;
sizes.DirFeedthrough = 1; % Matrix D is non-empty.
sizes.NumSampleTimes = 1;
sys = simsizes(sizes); 

x0 =[0;0;0;0];

% Initialize the discrete states.
str = [];             % Set str to an empty matrix.
ts  = [0.1 0];       % sample time: [period, offset]
%End of mdlInitializeSizes
		      
%==============================================================
% Update the discrete states
%==============================================================
function sys = mdlUpdates(t,x,u)
  
sys = x;
%End of mdlUpdate.

%==============================================================
% Calculate outputs
%==============================================================
function sys = mdlOutputs(t,x,u)
    tic
    fprintf('Update start, t=%6.3f\n',t)
    u(3) = u(3)*pi/180;% CarSim�����Ϊ�Ƕȣ��Ƕ�ת��Ϊ���� 
    u(4) = u(4) / 3.6; % CarSim�����Ϊkm/h��ת��Ϊm/s 

    L = 2.6;   
    preview_distance = 2.5;
    STEERINGANGLELIMIT = 35*pi/180;
    MAX_ACC = 0.3 * 9.8;
    Delta_angle = 0.017;
    double LD;
    
	% �滮���˵�··�������������������
    double steeringangle;
    persistent last_steeringangle;
    if isempty(last_steeringangle)
        last_steeringangle = 0;
    end
    
    [xf,yf,kf,jf] = GenerateRefTraj();
    
    % ��ȡ������ǰλ��
    vehicle_state.position.x = u(1);
    vehicle_state.position.y = u(2);
    vehicle_state.theta = u(3);
    
    %���㳵������������·���ϵ�ͶӰ��
    min_index = 0;
    mindis = 10000000.0;
    for i=1:1:450
        deltax = xf(i) - vehicle_state.position.x;
        deltay = yf(i) - vehicle_state.position.y;

        dis = sqrt(deltax*deltax + deltay*deltay);
        if mindis > dis
            mindis = dis;
            min_index = i;
        end
    end
    
    % ���복�������
    closeststate.position.x = xf(min_index);
    closeststate.position.y = yf(min_index);
    closeststate.theta = atan2(closeststate.position.y,closeststate.position.x);
    
    steeringComp = 0;
    % �ú������PID����������
    closest_state_local = Convert_State_Global_to_Local(closeststate, vehicle_state);
    steeringComp = -sign(closest_state_local.position.x)*PID_Control(abs(closest_state_local.position.x), 0.1); % rad 
 
    % ����Ԥ���
    for j = min_index:450
        previewstate.position.x = xf(j);
        previewstate.position.y = yf(j);

        deltax = previewstate.position.x - vehicle_state.position.x;
        deltay = previewstate.position.y - vehicle_state.position.y;
        dis = sqrt(deltax*deltax+deltay*deltay);
        if(dis > preview_distance)
            previewstate.theta = atan2(previewstate.position.y,previewstate.position.x);
            break;
        end
    end
    
    % ת��Ϊ��������ϵ��
    target_state_local = Convert_State_Global_to_Local(previewstate, vehicle_state);
    % ����ʵ��Ԥ�����
    LD = sqrt(target_state_local.position.x^2 + target_state_local.position.y^2);
    % ��������ǰ��ƫ�ǣ����õ���Ԥ�鷽��
    steeringangle = -1 * purepursuit_bydeltax(target_state_local.position.x,LD,L);
    
    steeringangle = steeringangle + steeringComp;
    
    Maxangle = atan(MAX_ACC * L / u(4)^2);
    
    Maxangle = min(STEERINGANGLELIMIT,Maxangle);
    %% �������
    steeringangle = max(min(steeringangle,Maxangle),-Maxangle);

    if (steeringangle - last_steeringangle) > 0.017
        steeringangle = last_steeringangle + 0.017;
    elseif (steeringangle - last_steeringangle) < -0.017
        steeringangle = last_steeringangle - 0.017;
    else
        steeringangle = steeringangle;
    end
       
    last_steeringangle = steeringangle;
    sys = steeringangle * 180 /pi; % deg
    toc   
    %% ��ͼ
%      subplot(1,3,1);
     plot(xf,yf,'r',u(1),u(2),'.b');
     hold on
     title('�ο��켣��ʵ�ʹ켣');
     
%      subplot(1,3,2);
%      hold on
%      plot(u(1),steeringComp*180/pi,'.k'); %deg    
%      title('PID�����Ƕ�/deg');
%     
%      subplot(1,3,3);
%      hold on
%      plot(u(1),closest_state_local.position.x * 100,'.k'); 
%      title('�������/cm');
% End of mdlOutputs.