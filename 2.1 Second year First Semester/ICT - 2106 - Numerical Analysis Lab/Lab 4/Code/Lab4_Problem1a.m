
clear all;
format LONG
f = @(x) x^3 -3*x -1;
dif = @(x) 3*x^2 - 3;
x=0;

fprintf('\nX\t\tRoot\n');
fprintf('------------------\n');

for i = 1:3
   if(i==2) 
       x=2;
   end
   if(i==3)
       x=-2;
   end
    fprintf('%d',x);
    
    for j = 1:100
           x1 = x - (f(x)/dif(x));
           if(abs(x-x1)<10^(-5))
        break;
    else
        x=x1;
    end
    end
     fprintf('\t\t%f\t\t',x1);
     fprintf('\n');   
end

