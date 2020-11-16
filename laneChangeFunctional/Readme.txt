%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%compiled functions are as follows:
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

module.slx： is the simulink module that contains both state machine and lane changing function blocks.

module_smooth.slx: is based on module.slx, and it is extended by an additional curve smoother.

test_on_module_smooth.m is a test function to ensure the performance of module_smooth.slx;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% induvidual functions are as follows, if you do not care about the inside of the alg, neglect it.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
kappa_calculation.m provides a comparison between two difference kappa calculation methods.

Bezierfrenet.m: is the function of how to generate a Bezier curve.

LineGeneration.m: is the main function of module_smooth.m, which go through all process to generate a changing lane.

calculateLEN: based on current velocity, this function calculate a longitudinal length of the changing lane.

ref_bezier_generation: this function provides, when given control points information, the lateral offset of Bezier 
curve with respect to longitudinal distance along the reference path.

