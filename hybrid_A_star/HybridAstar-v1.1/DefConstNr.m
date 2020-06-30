classdef DefConstNr
    %UNTITLED3 此处显示有关此类的摘要
    %   此处显示详细说明  DefConstNr.ANGLE_LEFT2SLOTMID
    
    properties (Constant = true)
        SYSTEM_OFF = 0;
        SYSTEM_ON = 1;
        
        VEH_FRONT_USS_SAFEMARGIN = 0.4 * 1000;
        VEH_REAR_USS_SAFEMARGIN = 0.4 * 1000;
        VEH_SIDE_USS_SAFEMARGIN = 0.2 * 1000;
        
        K_1stDYN_ENTERCURVE = (0.7 * 1000) / 500;
        K_1stDYN_VELOCITY = 0.6 * 1000;
        
        K_ADJUSTDYN_ENTERCURVE = (0.6 * 1000) / 500;
        K_ADJUSTDYN_VELOCITY = 0.4 * 1000;
        
        K_ADJUSTDYN_EXITCURVE = (0.6 * 1000) / 500;
        
        K_FINALDYN_ENTERCURVE = (0.6 * 1000) / 500;
        K_FINALDYN_EXITCURVE = (0.6 * 1000) / 500;
        
        K_ALIGN2TARGETLINE = (0.4 * 1000) / 500;
        
        K_STYPE = (0.6 * 1000) / 500;
        K_STYPE_VELOCITY = 0.4 * 1000;
        
        ANGLE_LEFT2SLOTMID = 4;
        
        PERPEN_BIAS_FINAL = 0.03 * 1000;
        
        OFFSET_ONECURVE_PERCENT = 1.0;
        
        OFFSET_1STREN = 1.0;
        OFFSET_FINALREN = 1.0;
        
        OFFSET_1ST_CURVE_PERCENT = 1.0;
        OFFSET_2ND_CURVE_PERCENT = 1.0;
        OFFSET_ADJUST_CURVE_PERCENT = 1.0;
        OFFSET_FINAL_CURVE_PERCENT = 1.0;
        
        DISRIGHTSIDESAFE = 0.3*1000;
        
        MAX_TRY_NR = 100;
        
        FINALADJUST_CALDELAY = 100 * 0.001;
        FINALADJUST_V = 0.3 * 1000;
        %% /************Common Configure****************/
        STEERING_LEFT = 1;
        STEERING_RIGHT = -1;
        
        FORWARD = 1;
        BACKWARD = -1;
       
        MAX_STEERING_ANGLE = (500);
        MIN_STEERING_ANGLE = (  1);
        
%         YAWOFFSET = 0.5*pi/180;
%         DISOFFSET = 10;
        V_STEERINGWHEELV_RATIO = 600/500; %比例系数k; k = v/dot(Phi);单位：m/s
%         V_STEERINGWHEEL_RATIO = 500/500;
      %% /*** turn radius and the steering angle relationship ***/
       %Steering Left, Run forward 
       %(400,470]
        LEFT_FRONT_FIT_RADIUS_A1 = ( 0.07466);
        LEFT_FRONT_FIT_RADIUS_B1 = (-4.072);
        %(300,400]
        LEFT_FRONT_FIT_RADIUS_A2 = ( 0.06758);
        LEFT_FRONT_FIT_RADIUS_B2 = (-1.289);
        %(200,300]
        LEFT_FRONT_FIT_RADIUS_A3 = ( 0.0653);
        LEFT_FRONT_FIT_RADIUS_B3 = (-0.5621);
        %(100,200]
        LEFT_FRONT_FIT_RADIUS_A4 = ( 0.06206);
        LEFT_FRONT_FIT_RADIUS_B4 = ( 0.06662);
        %(50,100]
        LEFT_FRONT_FIT_RADIUS_A5 = ( 0.06312);
        LEFT_FRONT_FIT_RADIUS_B5 = (-0.02795);
        %(0,50]
        LEFT_FRONT_FIT_RADIUS_A6 = ( 0.062  );
        LEFT_FRONT_FIT_RADIUS_B6 = ( 0.0    );
        
        %Steering left, Run Backward
        %(400,470]
        LEFT_REAR_FIT_RADIUS_A1 = ( 0.07466);
        LEFT_REAR_FIT_RADIUS_B1 = (-4.072);
        %(300,400]
        LEFT_REAR_FIT_RADIUS_A2 = ( 0.06758);
        LEFT_REAR_FIT_RADIUS_B2 = (-1.289);
        %(200,300]
        LEFT_REAR_FIT_RADIUS_A3 = ( 0.0653);
        LEFT_REAR_FIT_RADIUS_B3 = (-0.5621);
        %(100,200]
        LEFT_REAR_FIT_RADIUS_A4 = ( 0.06206);
        LEFT_REAR_FIT_RADIUS_B4 = ( 0.06662);
        %(50,100]
        LEFT_REAR_FIT_RADIUS_A5 = ( 0.06312);
        LEFT_REAR_FIT_RADIUS_B5 = (-0.02795);
        %(0,50]
        LEFT_REAR_FIT_RADIUS_A6 = ( 0.062  );
        LEFT_REAR_FIT_RADIUS_B6 = ( 0.0    );
        
        %Steering right, Run Forward
        %(-50,0)
        RIGHT_FRONT_FIT_RADIUS_A6 =	( 0.062  );
        RIGHT_FRONT_FIT_RADIUS_B6 = ( 0.0    );
        %(-100,-50]
        RIGHT_FRONT_FIT_RADIUS_A5 =	( 0.06123);
        RIGHT_FRONT_FIT_RADIUS_B5 =	(-0.02889);
        %(-200,-100]
        RIGHT_FRONT_FIT_RADIUS_A4 = ( 0.06356);
        RIGHT_FRONT_FIT_RADIUS_B4 = (-0.2489);
        %(-300,-200]
        RIGHT_FRONT_FIT_RADIUS_A3 = ( 0.06393);
        RIGHT_FRONT_FIT_RADIUS_B3 = (-0.3534);
        %(-400,-300]
        RIGHT_FRONT_FIT_RADIUS_A2 =	( 0.06846);
        RIGHT_FRONT_FIT_RADIUS_B2 = (-1.662);
        %(-510,-400]
        RIGHT_FRONT_FIT_RADIUS_A1 =	( 18.3);
        RIGHT_FRONT_FIT_RADIUS_B1 = (-0.003017);
        %(-50,0)
        RIGHT_REAR_FIT_RADIUS_A6 = ( 0.062  );
        RIGHT_REAR_FIT_RADIUS_B6 = ( 0.0    );
        %(-100,-50]
        RIGHT_REAR_FIT_RADIUS_A5 = ( 0.06123);
        RIGHT_REAR_FIT_RADIUS_B5 = (-0.02889);
        %(-200,-100]
        RIGHT_REAR_FIT_RADIUS_A4 = ( 0.06356);
        RIGHT_REAR_FIT_RADIUS_B4 = (-0.2489);
        %(-300,-200]
        RIGHT_REAR_FIT_RADIUS_A3 = ( 0.06393);
        RIGHT_REAR_FIT_RADIUS_B3 = (-0.3534);
        %(-400,-300]
        RIGHT_REAR_FIT_RADIUS_A2 = ( 0.06846);
        RIGHT_REAR_FIT_RADIUS_B2 = (-1.662);
        %(-510,-400]
        RIGHT_REAR_FIT_RADIUS_A1 = ( 18.3);
        RIGHT_REAR_FIT_RADIUS_B1 = (-0.003017);
        %cot参数：a1:0.06652    b1:-1.586
        %exp参数：a1:18.1       b1:-0.002909
        
        %% /*************** Min Radius **************/
        
    end
end

