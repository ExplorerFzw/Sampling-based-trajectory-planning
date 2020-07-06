function measurement = exampleHelperCarBotGetGPSReading(carbot)
%EXAMPLEHELPERCARBOTGETGPSREADING Generate a mock GPS reading of the robot
%   pose. Here the GPS reading is just simulated by adding Gaussian Noise
%   to the ground truth data. In reality, a more sophisticated function should
%   be used here to represent the actual measurement process. Change the noise
%   standard deviation (sd) to see how it affects the tracking behavior. A 
%   smaller sd means more confidence in the measured result. When the robot
%   is in the roofed area, the GPS reading will not be available, the
%   measurement will return an empty matrix.

%   Copyright 2015 The MathWorks, Inc.
    
    pose = carbot.Pose;
    sd = 0.01;
    measurement = pose(1:3) + sd*randn(3,1);
    
    if carbot.isCarInRoofedArea
        measurement = [];
    end
    
end