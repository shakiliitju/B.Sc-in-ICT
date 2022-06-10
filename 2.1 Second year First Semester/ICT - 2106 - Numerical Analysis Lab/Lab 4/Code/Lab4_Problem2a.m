
clear all;
format LONG
f = @(x) x^3 -3*x -1;
dif = @(x) 3*x^2 - 3;
x=1;
    
    for j = 1:3
        x1 = x - (f(x)/dif(x));
        if(abs(x-x1)<10^(-5))
        break;
    else
        x=x1;
    end
   
end
fprintf('\nRoot is: %f\n', x)
