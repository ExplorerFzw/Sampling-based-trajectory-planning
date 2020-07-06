
% x = [-4 -2 0 2 4 6 10];
%     y = [1.2 0.6 0 1.5 3.8 5 3];
% x = [0,10,50,100,120];
% y = [0,50,100,150,200];
x = [0,1,38,50];
y = [40,34,2,2];
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
       
 xlabel('x/m')
ylabel('y/m')
set(gca,'LineWidth',2,'FontSize',11,'FontWeight','normal','FontName','Times');
grid on;
     
       
       
       
       
       
       
       
       
       