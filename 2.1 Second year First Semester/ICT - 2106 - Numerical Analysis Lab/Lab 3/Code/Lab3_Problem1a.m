% 1. Write programs to find the real root of the following equations by the Method of False Position:
% a) f = x^3-2*x-5 = 0 correct to 5decimal point, between x=2 and x=3.


f = @(x)x^3-2*x-5;

x0 = 2;
x1 = 3;

for i = 1:100
      x2 = x0 - (f(x0)* (x1-x0)/(f(x1)-f(x0)));
       c = f(x2);
       a_c = abs(c);
    if  (a_c <= 10^-5)
        break 
        end
    if f(x0)*c <0
        x1 = x2;
        continue
    else
         x0 = x2;
         continue
   end
end

x2
c
i
