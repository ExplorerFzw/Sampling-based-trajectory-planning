classdef ExampleHelperCarBot < handle
%EXAMPLEHELPERCARBOT Create a simulated car-like robot object

% Copyright 2015 The MathWorks, Inc.    

    properties(SetAccess = public)
        %Dt Time step for simulation of the robot
        Dt
        
        %Trace Pose history of the robot
        Trace = []
        
        %BGs Best estimated (guessed) robot trace
        BGs = []
        
        %Pose Current pose of the robot
        Pose
        
        %L wheelbase
        L = 0.2
        
        %isCarInRoofedArea Indicator of whether a car is in roofed area
        isCarInRoofedArea = 0
        
    end
    
    properties(Access = private)  
        %HCenter Graphics handle for center of rear axle of the car robot
        HCenter
        
        %HTrajectory Graphics handle for the trajectory of the car
        HTrajectory
        
        %HRoofedArea Graphics handle for roofed area
        HRoofedArea
        
        %HChassis Graphics handle for chassis
        HChassis
        
        %HParticles Graphics handle for particles
        HParticles
        
        %HFw1 Graphics handle for front wheel 1
        HFw1
        
        %HFw2 Graphics handle for front wheel 2
        HFw2
        
        %HRw1 Graphics handle for rear wheel 1
        HRw1
        
        %HRw2 Graphics handle for rear wheel 2
        HRw2
        
        %HBestGuesses Graphics handle for best current pose estimation
        HBestGuesses
        
        %Cnt1 Internal counter 1
        Cnt1
        
        %FigureHandle the handle of the figure 
        FigureHandle

    end
    
    
    methods
        function obj = ExampleHelperCarBot(currentPose, dt)
            %ExampleHelperCarBot Constructor
            
            obj.Dt = dt;
            obj.Pose = currentPose;           
            obj.Trace = obj.Pose;
            obj.Cnt1 = 0;
            
            obj.FigureHandle = figure('Name', 'CarBot');
            % clear the figure
            ax = axes(obj.FigureHandle);
            cla(ax)
            
            % customize the figure
            obj.FigureHandle.Position = [100 100 1000 500];
            axis(ax, 'equal');
            xlim(ax, [-0.1,12]);
            ylim(ax, [-1,4]);
            grid(ax, 'on');
            box(ax, 'on');         
            
            hold(ax, 'on')
            obj.HRoofedArea = rectangle(ax, 'position', [6,0,1,3],'facecolor',[0.5 0.5 0.5]); % roofed area (no measurement)
                   
            obj.HParticles = scatter(ax, 0,0,'MarkerEdgeColor','g', 'Marker', '.');
                        
            obj.HCenter = plot(ax, obj.Pose(1), obj.Pose(2),'o'); % center of the rear axle of the car robot
            obj.HTrajectory = plot(ax, obj.Trace(1,:), obj.Trace(2,:),'r'); % car trace (of best guess)

            obj.HChassis = plot(ax, 0,0,'b'); % chassis
            obj.HFw1 = plot(ax, 0,0,'linewidth',3, 'color',[1, 0.84 0]); % front wheel 1
            obj.HFw2 = plot(ax, 0,0,'linewidth',3, 'color',[1, 0.84 0]); % front wheel 2
            obj.HRw1 = plot(ax, 0,0,'linewidth',3, 'color','b');         % rear wheel 1  
            obj.HRw2 = plot(ax, 0,0,'linewidth',3, 'color','b');         % rear wheel 2
            
            obj.HBestGuesses = plot(ax, 0,0,'ks-'); % best guess of pose
            
            legend(ax, [obj.HTrajectory, obj.HBestGuesses],'actual pose','estimated pose','Location','northwest');
            text(ax, 6,-0.3,'roofed area');
            title(ax, 't = 0');
            xlabel(ax, 'x (m)');
            ylabel(ax, 'y (m)');
            hold(ax, 'off');
            
            obj.drawCarBot()
        
        end
        
        function drive(obj, uCmd)
            %Drive Move the robot forward
            % contaminate commanded motion with noise
            u = uCmd + 0.001*randn(1,2);
            
            poseDot = 0*obj.Pose;
            poseDot(1) = u(1)*cos(obj.Pose(3));
            poseDot(2) = u(1)*sin(obj.Pose(3));
            poseDot(3) = (u(1)/obj.L)*tan(obj.Pose(4));
            poseDot(4) = u(2); 
            
            obj.Pose = obj.Pose + obj.Dt*poseDot;
    
            obj.Trace = [obj.Trace, obj.Pose];
            
                % determine if the car is in roofed area
            if obj.Pose(1)>6 && obj.Pose(1)<7 && obj.Pose(2)>0 && obj.Pose(2)<3
                obj.isCarInRoofedArea = 1; 
            else
                obj.isCarInRoofedArea = 0; 
            end
            
        end

        function drawCarBot(obj)
            %drawCarBot Routine to draw the car-like robot
            r = obj.L/6; 
            p = obj.Pose;
            x = p(1);
            y = p(2);
            theta = p(3);
            phi = p(4);

            chassis = [x  + obj.L/2*cos(theta-pi/2), y + obj.L/2*sin(theta-pi/2);          
                   x + obj.L/2*cos(theta+pi/2), y + obj.L/2*sin(theta+pi/2);
                   x, y; 
                   x + obj.L*cos(theta), y + obj.L*sin(theta);
                   x + obj.L*cos(theta) + obj.L/2*cos(theta-pi/2), y + obj.L*sin(theta) + obj.L/2*sin(theta-pi/2);          
                   x + obj.L*cos(theta) + obj.L/2*cos(theta+pi/2), y + obj.L*sin(theta) + obj.L/2*sin(theta+pi/2);
                   x + obj.L*cos(theta), y + obj.L*sin(theta)
                   ];
            fw1 = [ x + obj.L*cos(theta) + obj.L/2*cos(theta-pi/2) + r*cos(theta+phi), y + obj.L*sin(theta) + obj.L/2*sin(theta-pi/2) + r*sin(theta+phi);
                      x + obj.L*cos(theta) + obj.L/2*cos(theta-pi/2) - r*cos(theta+phi), y + obj.L*sin(theta) + obj.L/2*sin(theta-pi/2) - r*sin(theta+phi)];         
            fw2 = [ x + obj.L*cos(theta) + obj.L/2*cos(theta+pi/2) + r*cos(theta+phi), y + obj.L*sin(theta) + obj.L/2*sin(theta+pi/2) + r*sin(theta+phi);
                      x + obj.L*cos(theta) + obj.L/2*cos(theta+pi/2) - r*cos(theta+phi), y + obj.L*sin(theta) + obj.L/2*sin(theta+pi/2) - r*sin(theta+phi)];

            rw1 = [ x  + obj.L/2*cos(theta-pi/2) + r*cos(theta), y  + obj.L/2*sin(theta-pi/2) + r*sin(theta);
                      x  + obj.L/2*cos(theta-pi/2) - r*cos(theta), y  + obj.L/2*sin(theta-pi/2) - r*sin(theta)];         
            rw2 = [ x  + obj.L/2*cos(theta+pi/2) + r*cos(theta), y  + obj.L/2*sin(theta+pi/2) + r*sin(theta);
                      x  + obj.L/2*cos(theta+pi/2) - r*cos(theta), y  + obj.L/2*sin(theta+pi/2) - r*sin(theta)];

            obj.HChassis.XData = chassis(:,1);
            obj.HChassis.YData = chassis(:,2);  % chassis
            
            obj.HFw1.XData = fw1(:,1);
            obj.HFw1.YData = fw1(:,2);  % front wheel 1
            
            obj.HFw2.XData = fw2(:,1);
            obj.HFw2.YData = fw2(:,2);  % front wheel 2

            obj.HRw1.XData = rw1(:,1);
            obj.HRw1.YData = rw1(:,2);  %rear wheel 1
            
            obj.HRw2.XData = rw2(:,1);
            obj.HRw2.YData = rw2(:,2);  %rear wheel 2
        end 
        
        function updatePlot(obj, particleFilter, currentBestGuess, t)
            % updatePlot
            
            obj.Cnt1 = obj.Cnt1 + 1;           
            
            % render particles
            particles = particleFilter.Particles;
            if obj.isCarInRoofedArea
                obj.HParticles.MarkerEdgeColor = [1, 0.5, 0]; % orange
            else
                obj.HParticles.MarkerEdgeColor = 'g';
            end
            obj.HParticles.XData = particles(1:end,1);
            obj.HParticles.YData = particles(1:end,2);   
            
            if obj.Cnt1 == 8
                obj.BGs = [obj.BGs; currentBestGuess];
                obj.Cnt1 = 0;
                % draw best estimated robot trace (by observer)
                obj.HBestGuesses.XData = obj.BGs(:,1);
                obj.HBestGuesses.YData = obj.BGs(:,2);
            end
            
            
            % draw car rear axle center
            obj.HCenter.XData = obj.Pose(1);
            obj.HCenter.YData = obj.Pose(2);
            
            % draw car trajectory
            obj.HTrajectory.XData = obj.Trace(1,:);
            obj.HTrajectory.YData = obj.Trace(2,:);
            
            % draw car-like robot
            obj.drawCarBot();
            
            ax = get(obj.FigureHandle, 'currentaxes');
            title(ax, ['t = ', num2str(t)]);
            
            % capture snapshots for time frame 101 and 265
            if floor(t/obj.Dt) == 101 
                snapnow
            end

            if floor(t/obj.Dt) == 265
                snapnow
            end
        end
        
    end
    
end