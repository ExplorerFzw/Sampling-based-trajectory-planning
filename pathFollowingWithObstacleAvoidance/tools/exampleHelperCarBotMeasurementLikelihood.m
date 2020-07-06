function  likelihood = exampleHelperCarBotMeasurementLikelihood(pf, predictParticles, measurement) %#ok<INUSL>
%exampleHelperCarBotMeasurementLikelihood Compute the likelihood for each predicted
%   particles, which will later be used to compute importance weight. 

%   Copyright 2015-2016 The MathWorks, Inc.

    % The measurement contains all state variables
    predictMeasurement = predictParticles;

    % Calculate observed error between predicted and actual measurement
    % NOTE in this example, we don't have full state observation, but only
    % the measurement of current pose, therefore the measurementErrorNorm
    % is only based on the pose error.
    measurementError = bsxfun(@minus, predictMeasurement(:,1:3), measurement);
    measurementErrorNorm = sqrt(sum(measurementError.^2, 2));

    % Normal-distributed noise of measurement
    % Assuming measurements on all three pose components have the same error distribution 
    measurementNoise = eye(3);
    
    % Convert error norms into likelihood measure. 
    % Evaluate the PDF of the multivariate normal distribution 
    likelihood = 1/sqrt((2*pi).^3 * det(measurementNoise)) * exp(-0.5 * measurementErrorNorm);

end
