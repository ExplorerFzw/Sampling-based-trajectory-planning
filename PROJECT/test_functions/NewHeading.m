function  [heading_des] = NewHeading(delta_heading , heading_current)

 if delta_heading + heading_current < 0
        heading_des =  delta_heading + heading_current + 360;   
 end
 
 if delta_heading + heading_current > 360
     heading_des = delta_heading + heading_current - 360;
 end
 
 if  delta_heading + heading_current >=0 && delta_heading + heading_current <=360
       heading_des = delta_heading + heading_current;
 end
 
end
 