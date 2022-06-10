% b) x*sin(x)+cos(x) = 0 correct to 5decimal point, between x=1 and x=2


f =@(x)x*sin(x)+cos(x);

x0=1;
x1=2;

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