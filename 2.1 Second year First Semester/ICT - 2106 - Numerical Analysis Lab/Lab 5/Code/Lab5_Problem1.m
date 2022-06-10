
%clc;
close all;
clear all;

x = [3 4 5 6 7 8 9];
y = [2.7 6.4 12.5 21.6 34.3 51.2 72.9];
t = length(x);
%x1 = 1;
x1 = 10; 

P = 0;

for j = 1:t
    P1 = 1;
    for k = 1:t
        if (k ~= j)
            P1 = P1*((x1-x(k))/(x(j)-x(k)));
        end
    end
    P = P+P1*y(j);
end
P