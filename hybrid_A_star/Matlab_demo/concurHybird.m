load parkingLotCostVal.mat % costVal
% costVal(30:70,:) = 0;
map = binaryOccupancyMap(costVal);
validator = validatorOccupancyMap;
validator.Map = map;
planner = plannerHybridAStar...
    (validator,'MinTurningRadius',6,...
    'MotionPrimitiveLength',8,...
    'DirectionSwitchingCost',3);
startPose = [6 10 pi/2]; % [meters, meters, radians]
goalPose = [90 54 pi/2];

% figure

for i = 1:300
    if norm(startPose(1,2),goalPose(1,2))<0.5
        break;
    end
    traj(i,1:2) = startPose(1:2);
    i = i+1;
    show(map)
    hold on
    refpath = plan(planner,startPose,goalPose);
    startPose = refpath.States(2,:);
    startPose(1) = startPose(1)+ randn(1)/100;
    startPose(2) = startPose(2)+ randn(1)/100; 

    plot(refpath.States(:,1),refpath.States(:,2),'bo')
    drawnow limitrate
    hold off
    i
end
hold on
plot(traj(:,1),traj(:,2),'r*')