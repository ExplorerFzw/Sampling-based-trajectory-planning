classdef L4DriveVehicle < handle
    %L4DriveVehicle Simulation of kinematic behavior of differential-drive robot
    %   This class is included only for demonstration purposes. The name of
    %   this class and its functionality may change without notice in a
    %   future release, or the class itself may be removed.
    %
    %   This class handles the pose update of a differential-drive robot
    %   based on desired linear and angular velocities
    %   It also defines some maximum allowable velocities
    %   that are representative of the TurtleBot 2 robot.
    %
    %   L4DriveVehicle properties:
    %       Pose                - (Read-only) Current pose of robot [x, y, theta]
    %       LinearVelocity      - (Read-only) Current linear forward velocity of robot (in m/s)
    %       AngularVelocity     - (Read-only) Current angular velocity of robot (in rad/s)
    %
    %       MaxLinearVelocity      - Maximum allowable linear velocity for robot (in m/s)
    %       MaxAngularVelocity     - Maximum allowable angular velocity for robot (in rad/s)
    %
    %
    %   L4DriveVehicle methods:
    %       setPose          - Set the pose of the robot
    %       updateKinematics - Propagate the kinematic model of the robot
    %       enableLimitedCommandTime - Enable velocity command timeout.
    %
    %   See also RobotSimulator.
    
    %   Copyright 2015-2016 The MathWorks, Inc.
    
    properties (SetAccess = private)
        %Pose - Current pose of robot [x, y, theta]
        Pose = [0 0 0]
        
        %LinearVelocity - Current linear forward velocity of robot (in m/s)
        LinearVelocity = 0
        
        %AngularVelocity - Current angular velocity of robot (in rad/s)
        AngularVelocity = 0
    end
    
    properties
        %MaxLinearVelocity - Maximum allowable linear velocity for robot (in m/s)
        %   The default of 0.65 m/s is based on specs for the TurtleBot 2.
        %   Default: 0.65 m/s
        MaxLinearVelocity = 0.65 * 5;
        
        %MaxAngularVelocity - Maximum allowable angular velocity for robot (in rad/s)
        %   The default of 3.1415 rad/s is based on specs for the TurtleBot 2.
        %   Default: 3.1415 rad/s
        MaxAngularVelocity = pi
    end
    
    properties (Access = private)
        %TimeSinceLastCmd - Elapsed time since the last velocity command
        %   This counts the time (in second), since the last unique
        %   velocity command was received.
        TimeSinceLastCmd = tic
        
        VelocitySetpoints = [0 0]
        
        %MaxCommandTime - The maximum time interval between velocity commands
        %   If more time (in seconds) than MaxCommandTime elapses between
        %   unique velocity commands, the robot is stopped.
        %   Default: 1 second
        MaxCommandTime = 1
        
        %EnableLimitedCommandTime - Enable velocity command timeout.
        EnableLimitedCommandTime = true;
        
    end
    
    methods
        function setPose(obj, pose)
            %setPose Set the pose of the robot
            %   setPose(OBJ, POSE) - Set robot's pose to a vector POSE in
            %   [x,y,theta] form. This also resets the linear and angular
            %   velocity to zero.
            
            validateattributes(pose, {'double'}, {'nonempty', 'vector', 'numel', 3, 'nonnan', 'finite', 'real'}, 'setRobotPose', 'pose');
            
            obj.Pose = reshape(pose,1,3);
            obj.LinearVelocity = 0;
            obj.AngularVelocity = 0;
            
        end
        
        function enableLimitedCommandTime(obj, enableLimitedCommandTime)
            %enableLimitedCommandTime Enable velocity command timeout.
            %   enableLimitedCommandTime(obj, true) - Enable limited
            %   command time mode, robot's velocity is reset to zero if no
            %   new velocity commands arrive in the last MaxCommandTime
            %   seconds.
            %   enableLimitedCommandTime(obj, false) - Disable limited
            %   command time mode.
            validateattributes(enableLimitedCommandTime,{'numeric', 'logical'}, ...
                {'scalar','nonempty','binary'}, 'enableLimitedCommandTime', 'enableLimitedCommandTime');
            obj.EnableLimitedCommandTime = enableLimitedCommandTime;
        end
        
        function setVelocityCommand(obj, velCmd)
            %setVelocityCommand Set robot's velocity
            %   setVelocityCommand(OBJ, VELCMD) - Set robot's velocity to
            %   VELCMD. VELCMD can be either a geometry_msgs/Twist ROS
            %   message or a vector in the form [v, omega].
            if isa(velCmd, 'robotics.ros.Message')
                validateattributes(velCmd,{'robotics.ros.msggen.geometry_msgs.Twist'}, ...
                    {'nonempty'}, 'setVelocityCommand', 'velCmd');
                vel = [velCmd.Linear.X, velCmd.Angular.Z];
                validateattributes(vel, {'numeric'}, {'nonnan', 'finite', 'real'}, 'setVelocityCommand', 'velCmd');
                obj.VelocitySetpoints = vel;
            else
                validateattributes(velCmd,{'numeric'}, ...
                    {'nonempty', 'vector', 'numel',2, 'nonnan', 'finite', 'real'}, 'setVelocityCommand', 'velCmd');
                obj.VelocitySetpoints = double([velCmd(1), velCmd(2)]);
            end
            
            obj.TimeSinceLastCmd = tic;
        end
        
        function updateKinematics(obj, dt)
            %updateKinematics Propagate the kinematic model of the robot
            %   updateKinematics(OBJ, DT) - Propagate the kinematics model
            %   of the robot forward in time by DT.
            
            validateattributes(dt, {'numeric'}, {'scalar'},'updateKinematics','dt');
            
            % If no velocity command is received within some time, stop the robot.
            if obj.EnableLimitedCommandTime && toc(obj.TimeSinceLastCmd) > obj.MaxCommandTime
                obj.VelocitySetpoints = [0,0];
            end
            
            % Take set points from object
            v = obj.VelocitySetpoints(1);
            w = obj.VelocitySetpoints(2);
            
            % Limit velocities to maximum allowable values
            obj.LinearVelocity = sign(v) * min(abs(v), obj.MaxLinearVelocity);
            obj.AngularVelocity = sign(w) * min(abs(w), obj.MaxAngularVelocity);
            
            % Set velocities to zero if they are within a threshold
            if abs(obj.LinearVelocity) < 1e-5
                obj.LinearVelocity = 0;
            end
            if abs(obj.AngularVelocity) < 1e-5
                obj.AngularVelocity = 0;
            end
            
            % Propagate robot state change based on velocities
            dx = dt * obj.LinearVelocity*cos(obj.Pose(3));
            dy = dt * obj.LinearVelocity*sin(obj.Pose(3));
            dtheta = dt * obj.AngularVelocity;
            
            % Update robot state accordingly
            obj.Pose(1) = obj.Pose(1) + dx;
            obj.Pose(2) = obj.Pose(2) + dy;
            obj.Pose(3) = robotics.internal.wrapToPi(obj.Pose(3) + dtheta);
        end
    end
    
end

