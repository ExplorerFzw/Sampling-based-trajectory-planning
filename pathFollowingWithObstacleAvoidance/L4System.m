%% Path Following For L4 Project 
%%@ Luo Chun


path = [2.00    1.00;
    1.25    1.75;
    5.25    8.25;
    7.25    8.75;
    11.75   10.75;
    12.00   10.00];
x = [0:0.5:4 *pi];
y = sin(x)  + 1;
x = x * 10 + 0;
y = y * 40 + 5;
path = [x; y]';

% Set the current location and the goal location of the robot as defined by the path
robotCurrentLocation = path(1,:);
robotGoal = path(end,:);

%%
% Assume an initial robot orientation (the robot orientation is the angle
% between the robot heading and the positive X-axis, measured
% counterclockwise).
initialOrientation = 0;

%%
% Define the current pose for the robot [x y theta]
robotCurrentPose = [robotCurrentLocation initialOrientation];

%% Initialize the Robot Simulator
% A simple robot simulator is used in this example that updates and
% returns the pose of the differential drive robot for given control inputs. An external
% simulator or a physical robot will require a localization mechanism to
% provide an updated pose of the robot.

%%
% Initialize the robot simulator and assign an initial pose. The simulated
% robot has kinematic equations for the motion of a two-wheeled differential drive robot.
% The inputs to this simulated robot are linear and angular velocities. It also has plotting
% capabilities to display the robot's current location and draw the
% trajectory of the robot.

%map = robotics.OccupancyGrid(140,130,20);

map = robotics.BinaryOccupancyGrid(100,100,1);

%% Add lane and obstacle
%xy = [5 5; 4.3 4.4; 5.6 5.3];
xy = [x(7) y(7)];
setOccupancy(map,[8 8],1,'grid');

% Set occupancy of multiple grid cells

yy = 45:56;
xx = ones(1, length(yy)) * 30;
gg = [yy(:) xx(:)];
% values = ones(numel(I),1);
setOccupancy(map, gg, 1, 'grid');
% show(map);
% hold on
% plot(xy(:,1),xy(:,2),'xr','MarkerSize', 20)
% grid on
% set(gca,'XTick',0:0.2:10,'YTick',0:0.2:10)
% xlim([4 6])
% ylim([4 6])


robotRadius = 0.4 * 10;

L4Vehicle = L4VehicleSimulator(map);

%L4Vehicle.enableLaser(false);
L4Vehicle.enableLaser(true);
L4Vehicle.setRobotSize(robotRadius);
%L4Vehicle.showTrajectory(true);
L4Vehicle.setRobotPose(robotCurrentPose);


%%
% Visualize the desired path
plot(path(:,1), path(:,2),'k--d')
% xlim([0 130])
% ylim([0 130])


%% Define the Path Following Controller
% Based on the path defined above and a robot motion model, you need a path
controller = robotics.PurePursuit

%%
% Use the path defined above to set the desired waypoints for the
% controller
controller.Waypoints = path;

%%
% Set the path following controller parameters. The desired linear
% velocity is set to 0.3 meters/second for this example.
controller.DesiredLinearVelocity = 10; %0.3;

%%
% The maximum angular velocity acts as a saturation limit for rotational velocity, which is
% set at 2 radians/second for this example.
controller.MaxAngularVelocity = 1;

%%
controller.LookaheadDistance = 0.2 * 8; %0.5;

%% Using the Path Following Controller, Drive the Robot over the Desired Waypoints
% The path following controller provides input control signals for the
% robot, which the robot uses to drive itself along the desired path.
%
% Define a goal radius, which is the desired distance threshold
% between the robot's final location and the goal location. Once the robot is
% within this distance from the goal, it will stop. Also, you compute the current
% distance between the robot location and
% the goal location. This distance is continuously checked against the goal
% radius and the robot stops when this distance is less than the goal radius.
%
% Note that too small value of the goal radius may cause the robot to miss
% the goal, which may result in an unexpected behavior near the goal.
goalRadius = 1; %0.01;
distanceToGoal = norm(robotCurrentLocation - robotGoal);

%%
% The |<docid:robotics_ref.buoofp1-1 controller>| object computes control commands for the robot.
% Drive the robot using these control commands until it reaches within the
% goal radius. If you are using an external simulator or a physical robot,
% then the controller outputs should be applied to the robot and a localization
% system may be required to update the pose of the robot. The controller runs at 10 Hz.
controlRate = robotics.Rate(20);
while( distanceToGoal > goalRadius )

    % Compute the controller outputs, i.e., the inputs to the robot
    [v, omega] = controller(L4Vehicle.getRobotPose);
    
    %%todo detect obstacle ands path
    %if there is obstacle, stop the car
    %the v1 project, control the car to stop
    % robotics.VectorFieldHistogram
        
    % Simulate the robot using the controller outputs.
    drive(L4Vehicle, v, omega);
    
    % Extract current location information ([X,Y]) from the current pose of the
    % L4Vehicle
    robotCurrentPose = L4Vehicle.getRobotPose;
    
    % Re-compute the distance to the goal
    distanceToGoal = norm(robotCurrentPose(1:2) - robotGoal);
    %figure(tt);
    %plot(robotCurrentPose(1:2));
   waitfor(controlRate);
    
end

%%
% <<path_completed_path_part1.png>>
%

%%
% The simulated robot has reached the goal location using the path following
% controller along the desired path. Close simulation.
delete(L4Vehicle)