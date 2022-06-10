
clc;
close all;
clear all;

x = [0 1 2 4];
y = [2 5 9 12];
t = length(x);
x1 = 3;

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