function alpha=angle_calculate_xy(x,y)

if (x>0)&&(y>=0)
    alpha=atan(y/x);
else if (x<0)&&(y>=0)
        alpha=atan(y/x)+pi;
    else if (x<0)&&(y<=0)
            alpha=atan(y/x)-pi;
        else if (x>0)&&(y<=0)
                alpha=atan(y/x);
            else if (x==0)&&(y==0)
                    alpha=0;              
                else if (x==0)&&(y<0)
                        alpha=-pi/2;
                        else if (x==0)&&(y>0)
                        alpha=pi/2;
                            end
                    end
            end
                        
                    
            end
        end
    end
end

