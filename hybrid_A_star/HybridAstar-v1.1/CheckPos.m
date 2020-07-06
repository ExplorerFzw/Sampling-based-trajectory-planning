function NextMotionDMPs = CheckPos(Current, DMPS_Cells)
%CheckPos 根据当前节点方向，确定运动基元的坐标并返回
% 输入参数 Current：
%   [扩展的运动方式ID 当前节点x\y\yaw g代价 h代价 f代价 归属网格_行 归属网格_列 父节点x\y\yaw]
% 输入参数 DMPS_Cells：
% 离线生成的个方向运动基元

NextMotionDMPs = DMPS_Cells{1,(round(Current(1,4) / 15) + 1)}{1,2};

end

