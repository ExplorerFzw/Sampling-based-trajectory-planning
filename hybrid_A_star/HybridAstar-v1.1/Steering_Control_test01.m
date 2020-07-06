function [sys,x0,str,ts] = Steering_Control_test01(t,x,u,flag)
%   S函数控制器(MATLAB版本：R2014b)
%   限定于车辆运动学模型，控制量为前轮偏角
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
    u(3) = u(3)*pi/180;% CarSim输出的为角度，角度转换为弧度 
    u(4) = u(4) / 3.6; % CarSim输出的为km/h，转换为m/s 

    L = 2.6;   
    preview_distance = 2.5;
    STEERINGANGLELIMIT = 35*pi/180;
    MAX_ACC = 0.3 * 9.8;
    Delta_angle = 0.017;
    double LD;
    
	% 规划出了道路路径，进入正常横向控制
    double steeringangle;
    persistent last_steeringangle;
    if isempty(last_steeringangle)
        last_steeringangle = 0;
    end
    
    [xf,yf,kf,jf] = GenerateRefTraj();
    
    % 获取车辆当前位姿
    vehicle_state.position.x = u(1);
    vehicle_state.position.y = u(2);
    vehicle_state.theta = u(3);
    
    %计算车辆后轴在期望路径上的投影点
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
    
    % 距离车辆最近点
    closeststate.position.x = xf(min_index);
    closeststate.position.y = yf(min_index);
    closeststate.theta = atan2(closeststate.position.y,closeststate.position.x);
    
    steeringComp = 0;
    % 用横向误差PID补偿控制量
    closest_state_local = Convert_State_Global_to_Local(closeststate, vehicle_state);
    steeringComp = -sign(closest_state_local.position.x)*PID_Control(abs(closest_state_local.position.x), 0.1); % rad 
 
    % 计算预瞄点
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
    
    % 转换为车体坐标系下
    target_state_local = Convert_State_Global_to_Local(previewstate, vehicle_state);
    % 计算实际预瞄距离
    LD = sqrt(target_state_local.position.x^2 + target_state_local.position.y^2);
    % 计算期望前轮偏角，采用单点预瞄方法
    steeringangle = -1 * purepursuit_bydeltax(target_state_local.position.x,LD,L);
    
    steeringangle = steeringangle + steeringComp;
    
    Maxangle = atan(MAX_ACC * L / u(4)^2);
    
    Maxangle = min(STEERINGANGLELIMIT,Maxangle);
    %% 计算输出
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
    %% 画图
%      subplot(1,3,1);
     plot(xf,yf,'r',u(1),u(2),'.b');
     hold on
     title('参考轨迹和实际轨迹');
     
%      subplot(1,3,2);
%      hold on
%      plot(u(1),steeringComp*180/pi,'.k'); %deg    
%      title('PID补偿角度/deg');
%     
%      subplot(1,3,3);
%      hold on
%      plot(u(1),closest_state_local.position.x * 100,'.k'); 
%      title('横向误差/cm');
% End of mdlOutputs.