function [fSteeringWheelAngle] = CalRadius2SteeringWheelAngle(nSteeringDirection, nRunningDirection, fRadius)
%UNTITLED3 此处显示有关此函数的摘要
%   此处显示详细说明
global WheelBase;
global VehType;

switch VehType
    case "ChangAn_CS55"
        fSteeringWheelAngle = -1;
        
        if (nSteeringDirection ==-1)
            if(nRunningDirection==1)
                if (fRadius< 5.4745 * 1000)
                    fSteeringWheelAngle=log((fRadius/1000)/DefConstNr.RIGHT_FRONT_FIT_RADIUS_A1)/DefConstNr.RIGHT_FRONT_FIT_RADIUS_B1;
                else if (fRadius<7.7214 * 1000)
                        fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_FRONT_FIT_RADIUS_B2)/DefConstNr.RIGHT_FRONT_FIT_RADIUS_A2;
                    else if (fRadius<11.975 * 1000)
                            fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_FRONT_FIT_RADIUS_B3)/DefConstNr.RIGHT_FRONT_FIT_RADIUS_A3;
                        else if (fRadius<24.674 * 1000)
                                fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_FRONT_FIT_RADIUS_B4)/DefConstNr.RIGHT_FRONT_FIT_RADIUS_A4;
                            else if (fRadius<49.832 * 1000)
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_FRONT_FIT_RADIUS_B5)/DefConstNr.RIGHT_FRONT_FIT_RADIUS_A5;
                                else
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_FRONT_FIT_RADIUS_B6)/DefConstNr.RIGHT_FRONT_FIT_RADIUS_A6;
                                end
                            end
                        end
                    end
                end
            else
                if (fRadius< 5.4745 * 1000)
                    fSteeringWheelAngle=log((fRadius/1000)/DefConstNr.RIGHT_REAR_FIT_RADIUS_A1)/DefConstNr.RIGHT_REAR_FIT_RADIUS_B1;
                else if (fRadius<7.7214 * 1000)
                        fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_REAR_FIT_RADIUS_B2)/DefConstNr.RIGHT_REAR_FIT_RADIUS_A2;
                    else if (fRadius<11.975 * 1000)
                            fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_REAR_FIT_RADIUS_B3)/DefConstNr.RIGHT_REAR_FIT_RADIUS_A3;
                        else if (fRadius<24.674 * 1000)
                                fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_REAR_FIT_RADIUS_B4)/DefConstNr.RIGHT_REAR_FIT_RADIUS_A4;
                            else if (fRadius<49.832 * 1000)
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_REAR_FIT_RADIUS_B5)/DefConstNr.RIGHT_REAR_FIT_RADIUS_A5;
                                else
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.RIGHT_REAR_FIT_RADIUS_B6)/DefConstNr.RIGHT_REAR_FIT_RADIUS_A6;
                                end
                            end
                        end
                    end
                end
            end
        else
            if(nRunningDirection==1)
                if (fRadius< 5.4630 * 1000)
                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_FRONT_FIT_RADIUS_B1)/DefConstNr.LEFT_FRONT_FIT_RADIUS_A1;
                else if (fRadius<7.6736 * 1000)
                        fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_FRONT_FIT_RADIUS_B2)/DefConstNr.LEFT_FRONT_FIT_RADIUS_A2;
                    else if (fRadius<11.910 * 1000)
                            fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_FRONT_FIT_RADIUS_B3)/DefConstNr.LEFT_FRONT_FIT_RADIUS_A3;
                        else if (fRadius<24.018 * 1000)
                                fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_FRONT_FIT_RADIUS_B4)/DefConstNr.LEFT_FRONT_FIT_RADIUS_A4;
                            else if (fRadius<48.308 * 1000)
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_FRONT_FIT_RADIUS_B5)/DefConstNr.LEFT_FRONT_FIT_RADIUS_A5;
                                else
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_FRONT_FIT_RADIUS_B6)/DefConstNr.LEFT_FRONT_FIT_RADIUS_A6;
                                end
                            end
                        end
                    end
                end
            else
                if (fRadius< 5.4630 * 1000)
                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_REAR_FIT_RADIUS_B1)/DefConstNr.LEFT_REAR_FIT_RADIUS_A1;
                else if (fRadius<7.6736 * 1000)
                        fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_REAR_FIT_RADIUS_B2)/DefConstNr.LEFT_REAR_FIT_RADIUS_A2;
                    else if (fRadius<11.910 * 1000)
                            fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_REAR_FIT_RADIUS_B3)/DefConstNr.LEFT_REAR_FIT_RADIUS_A3;
                        else if (fRadius<24.018 * 1000)
                                fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_REAR_FIT_RADIUS_B4)/DefConstNr.LEFT_REAR_FIT_RADIUS_A4;
                            else if (fRadius<48.308 * 1000)
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_REAR_FIT_RADIUS_B5)/DefConstNr.LEFT_REAR_FIT_RADIUS_A5;
                                else
                                    fSteeringWheelAngle=(atan(WheelBase/fRadius)* 180/pi-DefConstNr.LEFT_REAR_FIT_RADIUS_B6)/DefConstNr.LEFT_REAR_FIT_RADIUS_A6;
                                end
                            end
                        end
                    end
                end
            end
        end
        
    case "Geely_GE"
        FrontWheelSteeringAngle = atan(WheelBase./fRadius);
        fSteeringWheelAngle = int16(FrontAxleAngleSteeringWheelAngleTransCal(nSteeringDirection, nRunningDirection, FrontWheelSteeringAngle, 1) *180/pi);
        fSteeringWheelAngle = double(fSteeringWheelAngle);
end

end

