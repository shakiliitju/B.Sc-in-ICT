clear all;
format LONG
e = 2.718281828;
f = @(x) x*e^x -1;
dif = @(x) x*e^x + e^x;
%f = @(x) x-exp(-x);
%dif = @(x) 1+exp(-x);
x=1;
    
for i = 1:100
           x1 = x - (f(x)/dif(x));
           if(abs(x-x1)<10^(-5))
           break;
    else
        x=x1;
    end   
end
fprintf('\nRoot is: %f\n', x)
