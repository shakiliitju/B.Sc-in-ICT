% c) correct to 5decimal point, between x=0 and x=1


f =@(x)exp(-x)-x;

x0=0;
x1=1;

for i=1:100
      x2 = x0 - (f(x0)* (x1-x0)/(f(x1)-f(x0)))
       c = f(x2)
       a_c = abs(c);
    if  (a_c <= 10^-5)
        break 
        end
    if f(x0)*c <0
        x1=x2;
        continue
    else
         x0=x2;
         continue
   end
   end
   i