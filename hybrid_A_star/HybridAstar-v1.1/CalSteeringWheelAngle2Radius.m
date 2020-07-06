function [fRadius] = CalSteeringWheelAngle2Radius(nSteeringDirection,nRunningDirection, fSteeringWheelAngle)
%UNTITLED 此处显示有关此函数的摘要
%   此处显示详细说明
global WheelBase;
global VehType;

switch VehType
    case "ChangAn_CS55"
        fRadius = -1;
        if (nSteeringDirection ==-1)
            if(nRunningDirection==1)
                if (fSteeringWheelAngle>400)
                    fRadius = DefConstNr.RIGHT_FRONT_FIT_RADIUS_A1 * exp(DefConstNr.RIGHT_FRONT_FIT_RADIUS_B1 * fSteeringWheelAngle) *1000;
                else if (fSteeringWheelAngle>300)
                        fRadius = WheelBase/tan((DefConstNr.DefConstNr.RIGHT_FRONT_FIT_RADIUS_A2 * fSteeringWheelAngle + DefConstNr.RIGHT_FRONT_FIT_RADIUS_B2)*pi/180);
                    else if (fSteeringWheelAngle>200)
                            fRadius=WheelBase/tan((DefConstNr.RIGHT_FRONT_FIT_RADIUS_A3*fSteeringWheelAngle+DefConstNr.RIGHT_FRONT_FIT_RADIUS_B3)*pi/180);
                        else if (fSteeringWheelAngle>100)
                                fRadius=WheelBase/tan((DefConstNr.RIGHT_FRONT_FIT_RADIUS_A4*fSteeringWheelAngle+DefConstNr.RIGHT_FRONT_FIT_RADIUS_B4)*pi/180);
                            else if (fSteeringWheelAngle>50)
                                    fRadius=WheelBase/tan((DefConstNr.RIGHT_FRONT_FIT_RADIUS_A5*fSteeringWheelAngle+DefConstNr.RIGHT_FRONT_FIT_RADIUS_B5)*pi/180);
                                else
                                    fRadius=WheelBase/tan((DefConstNr.RIGHT_FRONT_FIT_RADIUS_A6*fSteeringWheelAngle+DefConstNr.RIGHT_FRONT_FIT_RADIUS_B6)*pi/180);
                                end
                            end
                        end
                    end
                end
            else
                if (fSteeringWheelAngle>=400)
                    fRadius=DefConstNr.RIGHT_REAR_FIT_RADIUS_A1*exp(DefConstNr.RIGHT_REAR_FIT_RADIUS_B1*fSteeringWheelAngle) * 1000;
                else if (fSteeringWheelAngle>=300)
                        fRadius=WheelBase/tan((DefConstNr.RIGHT_REAR_FIT_RADIUS_A2*fSteeringWheelAngle+DefConstNr.RIGHT_REAR_FIT_RADIUS_B2)*pi/180);
                    else if (fSteeringWheelAngle>=200)
                            fRadius=WheelBase/tan((DefConstNr.RIGHT_REAR_FIT_RADIUS_A3*fSteeringWheelAngle+DefConstNr.RIGHT_REAR_FIT_RADIUS_B3)*pi/180);
                        else if (fSteeringWheelAngle>=100)
                                fRadius=WheelBase/tan((DefConstNr.RIGHT_REAR_FIT_RADIUS_A4*fSteeringWheelAngle+DefConstNr.RIGHT_REAR_FIT_RADIUS_B4)*pi/180);
                            else if (fSteeringWheelAngle>=50)
                                    fRadius=WheelBase/tan((DefConstNr.RIGHT_REAR_FIT_RADIUS_A5*fSteeringWheelAngle+DefConstNr.RIGHT_REAR_FIT_RADIUS_B5)*pi/180);
                                else
                                    fRadius=WheelBase/tan((DefConstNr.RIGHT_REAR_FIT_RADIUS_A6*fSteeringWheelAngle+DefConstNr.RIGHT_REAR_FIT_RADIUS_B6)*pi/180);
                                end
                            end
                        end
                    end
                end
            end
        else
            if(nRunningDirection==1)
                if (fSteeringWheelAngle>400)
                    fRadius=WheelBase/tan((DefConstNr.LEFT_FRONT_FIT_RADIUS_A1*fSteeringWheelAngle+DefConstNr.LEFT_FRONT_FIT_RADIUS_B1)*pi/180);
                else if (fSteeringWheelAngle>300)
                        fRadius=WheelBase/tan((DefConstNr.LEFT_FRONT_FIT_RADIUS_A2*fSteeringWheelAngle+DefConstNr.LEFT_FRONT_FIT_RADIUS_B2)*pi/180);
                    else if (fSteeringWheelAngle>200)
                            fRadius=WheelBase/tan((DefConstNr.LEFT_FRONT_FIT_RADIUS_A3*fSteeringWheelAngle+DefConstNr.LEFT_FRONT_FIT_RADIUS_B3)*pi/180);
                        else if (fSteeringWheelAngle>100)
                                fRadius=WheelBase/tan((DefConstNr.LEFT_FRONT_FIT_RADIUS_A4*fSteeringWheelAngle+DefConstNr.LEFT_FRONT_FIT_RADIUS_B4)*pi/180);
                            else if (fSteeringWheelAngle>50)
                                    fRadius=WheelBase/tan((DefConstNr.LEFT_FRONT_FIT_RADIUS_A5*fSteeringWheelAngle+DefConstNr.LEFT_FRONT_FIT_RADIUS_B5)*pi/180);
                                else
                                    fRadius=WheelBase/tan((DefConstNr.LEFT_FRONT_FIT_RADIUS_A6*fSteeringWheelAngle+DefConstNr.LEFT_FRONT_FIT_RADIUS_B6)*pi/180);
                                end
                            end
                        end
                    end
                end
            else
                if (fSteeringWheelAngle>400)
                    fRadius=WheelBase/tan((DefConstNr.LEFT_REAR_FIT_RADIUS_A1*fSteeringWheelAngle+DefConstNr.LEFT_REAR_FIT_RADIUS_B1)*pi/180);
                else if (fSteeringWheelAngle>300)
                        fRadius=WheelBase/tan((DefConstNr.LEFT_REAR_FIT_RADIUS_A2*fSteeringWheelAngle+DefConstNr.LEFT_REAR_FIT_RADIUS_B2)*pi/180);
                    else if (fSteeringWheelAngle>200)
                            fRadius=WheelBase/tan((DefConstNr.LEFT_REAR_FIT_RADIUS_A3*fSteeringWheelAngle+DefConstNr.LEFT_REAR_FIT_RADIUS_B3)*pi/180);
                        else if (fSteeringWheelAngle>100)
                                fRadius=WheelBase/tan((DefConstNr.LEFT_REAR_FIT_RADIUS_A4*fSteeringWheelAngle+DefConstNr.LEFT_REAR_FIT_RADIUS_B4)*pi/180);
                            else if (fSteeringWheelAngle>50)
                                    fRadius=WheelBase/tan((DefConstNr.LEFT_REAR_FIT_RADIUS_A5*fSteeringWheelAngle+DefConstNr.LEFT_REAR_FIT_RADIUS_B5)*pi/180);
                                else
                                    fRadius=WheelBase/tan((DefConstNr.LEFT_REAR_FIT_RADIUS_A6*fSteeringWheelAngle+DefConstNr.LEFT_REAR_FIT_RADIUS_B6)*pi/180);
                                end
                            end
                        end
                    end
                end
            end
        end
        
    case "Geely_GE"
        FrontWheelSteeringAngle = 0;
        FrontWheelSteeringAngle = FrontAxleAngleSteeringWheelAngleTransCal(nSteeringDirection, nRunningDirection, fSteeringWheelAngle*pi/180, 0);
        if (abs(FrontWheelSteeringAngle) < 0.00001)
            fRadius = 99999999999999999999;
        else
            fRadius = WheelBase/tan(FrontWheelSteeringAngle);
            if (fRadius < 4.15 *1000)
                fRadius = 4.15 *1000;
            end
        end
end

        
end

