function composedTransform = exampleHelperComposeTransform(baseTransform, relativeTransform)
%exampleHelperComposeTransform Compose two transforms
%   The RELATIVETRANSFORM is added to the BASETRANSFORM and the composed
%   transform is returned in COMPOSEDTRANSFORM.
%   BASETRANSFORM is the transform from laser scan 1 to world and
%   RELATIVETRANSFORM is the transform from laser scan 2 to laser scan
%   1 (as returned by matchScans).

%   Copyright 2016 The MathWorks, Inc.

% Concatenate the 4x4 homogeneous transform matrices for the base and
% relative transforms.
tform = pose2tform(baseTransform) * pose2tform(relativeTransform);

% Extract the translational vector
trvec = tform2trvec(tform);

% Extract the yaw angle from the resulting transform
eul = tform2eul(tform);
theta = eul(1);

% Composed transform has structure [x y theta(z-axis)]
composedTransform = [trvec(1:2) theta];

end

function tform = pose2tform(pose)
%pose2tform Convert [x y theta] pose into homogeneous transform
%   TFORM is returned as a 4x4 matrix.

x = pose(1);
y = pose(2);
theta = pose(3);
tform = trvec2tform([x y 0]) * eul2tform([theta 0 0]);
end
