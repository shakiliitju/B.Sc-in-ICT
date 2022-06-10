clear all;
format LONG
f = @(x) x-exp(-x);
dif = @(x) 1+exp(-x);
x=3;
    
for i = 1:100
           x1 = x - (f(x)/dif(x));
           if(abs(x-x1)<10^(-5))
           break;
    else
        x=x1;
    end   
end
fprintf('\nRoot is: %f\n', x)
