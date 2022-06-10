%clc;
close all;
clear all;
 
x = [1 3 4];  
y = [4 12 19]; 
t = length(x);  
y1 = 7;         
x1=0;         
for j = 1:t      
    x2 = 1;        
    for k = 1:t    
        if (k ~= j)
          x2=x2*((y1-y(k))/(y(j)-y(k)));
        end
    end
    x1 = x1+x2*x(j);          
end
x1       
