    
function [Px,Py,YAW] = cubic_spline(x,y)
   figure
    plot(x,y,'ro');
    hold on
    
    N = length(x);
   A = zeros(N,N);
   B = zeros(N,1);

   for i = 1:N-1
   h(i) = x(i+1) - x(i);
   end
   
   A(1,1) = 1; 
   A(N,N) = 1;
   for i = 2:N-1
       A(i,i) = 2*(h(i-1) + h(i));
   end
   
   for i  =2 : N-1
   A(i, i+1) = h(i);
   end
   
   for i  = 2: N-1
       A(i,i-1) = h(i-1);
   end
   
   for i = 2:N-1
       B(i) = 6* (y(i+1)-y(i))/h(i) - 6* (y(i)-y(i-1))/h(i-1);
   end
   m= A\B
   
   for i = 1:N
       a(i) = y(i);
   end
   
     for i = 1:N
       c(i) = m(i)/2;
     end
   
      for i = 1:N-1
          d(i) =( c(i+1)-c(i) )/(3*h(i));
      end
      
       for i = 1:N-1
           b(i)  = (a(i+1)-a(i))/h(i)- h(i)/3*(c(i+1)+ 2*c(i));
       end
       Px= [];
       Py = [];
       for  i= 1:N-1
           X = x(i):0.1:x(i+1);
           Y = a(i)+ b(i)*(X-x(i)) + c(i) * (X- x(i)).^2 + d(i) * (X - x(i)).^3;
           Px = [Px,X];
           Py = [Py,Y];
       plot(X, Y,'-','LineWidth',3)   
       end
       
       for i = 1: length(Px)-1
           yaw(i) = atan((Py(i+1)-Py(i))/(Px(i+1)- Px(i)));
       end
       yaw(end+1) = yaw(end);
        YAW =   yaw;
%        s = zeros(length(Px),1);
%        s(1) = 0;
%        for i = 2: length(Px)
%            s(i) = sqrt((Px(i)-Px(i-1)^2+ Py(i)-Py(i-1)^2);
%            s(i) =s(i-1) + 
%        end
%        
end
