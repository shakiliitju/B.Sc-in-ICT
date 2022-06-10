
clear all;
m=[1 0 -3 -1]
r=roots(m)
f = @(x) x^3 -3*x -1;
dif = @(x) 3*x^2 - 3;
x=0;

fprintf('\nX\t\tfzero\n');
fprintf('------------------\n');

for i = 1:3
   if(i==2) 
       x=2;
   end
   if(i==3)
       x=-2;
   end
    fprintf('%d',x);
    
    for j = 1:3
           n=fzero(f,x);
           
    end
     fprintf('\t\t%f\t\t',n);
     fprintf('\n');
end
