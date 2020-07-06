function PathSmooth(path)
%PathSmooth ·��ƽ������
%   todo!! ��ʱ��һ���ÿ��Ƶķ����ܲ�����Ч�������ʱ��Ļ�������ר�ŵ�ƽ��������

global WheelBase preview_dis increment_dis
%����������ʹ�켣��¼����
global VehRearAxleCenterPoint_X VehRearAxleCenterPoint_Y VehRearAxleCenterPoint_Yaw;
%��������������ת�Ǽ�¼����
global VehSteeringWheelAngle;
%��������λ�˼�¼����
global VehPositionRecordIndex res;

preview_dis = 3.5;
increment_dis = 0.5;

while 1
    vehicle_state.x = VehRearAxleCenterPoint_X(VehPositionRecordIndex);
    vehicle_state.y = VehRearAxleCenterPoint_Y(VehPositionRecordIndex);
    vehicle_state.theta = VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex);
    plot(vehicle_state.x / res,vehicle_state.y / res,'.b'); hold on;

    %% �Ҿ��복�������·����
    min_index = 1000000;
    min_dis = 1000000;
    for i = 1:length(path(:,1))
        delta_x = vehicle_state.x - path(i,2) * res;
        delta_y = vehicle_state.y - path(i,1) * res;
        dis = sqrt(delta_x^2 + delta_y^2);
        if min_dis > dis
            min_dis = dis;
            min_index = i;
        end
    end
    
    %% ��Ԥ���
    for j = min_index:length(path(:,1))
        previewstate.x = path(j,2) * res;
        previewstate.y = path(j,1) * res;
        delta_x = vehicle_state.x - previewstate.x;
        delta_y = vehicle_state.y - previewstate.y;
        dis = sqrt(delta_x^2 + delta_y^2);
        if dis >= preview_dis
            previewstate.theta = atan2(previewstate.y,previewstate.x);
            break;
        end
    end
    
    %% ����
    if j == length(path(:,1))
        break;
    end

    % ת��Ϊ��������ϵ��
    target_state_local = Convert_State_Global_to_Local(previewstate, vehicle_state);
    % ����ʵ��Ԥ�����
    LD = sqrt((target_state_local.x * 0.2)^2 + (target_state_local.y * 0.2)^2);
    if LD > preview_dis
        previewstate.x = previewstate.x * preview_dis / LD;
        previewstate.y = previewstate.y * preview_dis / LD;
    end

    %% pp ���㳵��������ת��
    target_state_local = Convert_State_Global_to_Local(previewstate, vehicle_state);
    frontwheelangle = purepursuit_bydeltax(target_state_local.y, preview_dis, WheelBase);%rad
    frontwheelangle = max(-31*pi/180, min(31*pi/180,frontwheelangle));
    %��ǰ��ƫ�ǵõ�������ת��
    steeringwheelangle = FrontAxleAngleSteeringWheelAngleTransCal(sign(frontwheelangle), 1 , frontwheelangle, 1); %rad
    steeringwheelangle = sign(frontwheelangle) * steeringwheelangle * 180 / pi;

    %% �����켣Ԥ��
    increment_dis = 0.5;
%     CalVehRearAxleCenterRealTime(0.5,steeringwheelangle,1);
    if (abs(steeringwheelangle) > 0.5)
        radius = CalSteeringWheelAngle2Radius(sign(steeringwheelangle), 1, abs(steeringwheelangle));
        delta_theta = increment_dis / radius;
        vehicle_state.x = vehicle_state.x + radius * (sin(vehicle_state.theta + delta_theta) - sin(vehicle_state.theta));
        vehicle_state.y = vehicle_state.y + radius * (cos(vehicle_state.theta) - cos(vehicle_state.theta + delta_theta));
        vehicle_state.theta = vehicle_state.theta + delta_theta;
    else
        vehicle_state.x = vehicle_state.x + increment_dis * cos(vehicle_state.theta);
        vehicle_state.y = vehicle_state.y + increment_dis * sin(vehicle_state.theta);
        vehicle_state.theta = vehicle_state.theta;
    end
    VehPositionRecordIndex = VehPositionRecordIndex + 1;
    VehRearAxleCenterPoint_X(VehPositionRecordIndex) = vehicle_state.x;
    VehRearAxleCenterPoint_Y(VehPositionRecordIndex) = vehicle_state.y;
    VehRearAxleCenterPoint_Yaw(VehPositionRecordIndex) = vehicle_state.theta;
end
end

