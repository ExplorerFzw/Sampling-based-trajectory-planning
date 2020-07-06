function [poses, scans] = exampleHelperReadPoseAndSensorMsgs(bag)
%EXAMPLEHELPERREADPOSEANDSENSORMSGS Extract pose and sensor msgs from rosbag
%   [POSES, SCANS] = exampleHelperReadPoseAndSensorMsgs(BAG) returns the
%   laser sensor readings and the corresponding robot poses as messages
%   from the rosbag file.
%   The function assumes that the range sensor readings are published on
%   the topic name |/scan| and known poses of the robot are published
%   by Gazebo simulator on the topic |/gazebo/model_states|. The robot model in
%   the |/gazebo/model_states| is published with name |mobile_base|.

%   Copyright 2014-2016 The MathWorks, Inc.

% Select relevant topics from the rosbag
selectedBag = select(bag, 'Topic',{'gazebo/model_states', 'scan'});
%
% Extract messages on scan and model states from the rosbag
scanAndPoseMsgs = readMessages(selectedBag);

poses = {};
scans = {};

% Loop over all the messages
for j=1:length(scanAndPoseMsgs)
    % If the message is a model state message, store and continue
    if strcmp(scanAndPoseMsgs{j}.MessageType, 'gazebo_msgs/ModelStates')
        
        % Save the Pose message
        idx = ismember(scanAndPoseMsgs{j}.Name,'mobile_base');
        pose = scanAndPoseMsgs{j}.Pose(idx);
        continue;
    end
    
    % If the message is a sensor message, process it and update the map
    if strcmp(scanAndPoseMsgs{j}.MessageType, 'sensor_msgs/LaserScan')
        
        % Save the sensor (scan) message
        scans{end+1} = double(readCartesian(scanAndPoseMsgs{j})); %#ok<*AGROW>
        poses{end+1} = pose;
    end
end

end

