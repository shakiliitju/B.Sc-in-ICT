Labsheet-5: Exercise-1 (Newton's Forward Interpolation)

clc;
close all;
clear all;

x = [3 4 5 6 7 8 9];
y = [2.7 6.4 12.5 21.6 34.3 51.2 72.9];
n = length(x);
p = 1;
% p = 10;
d(:,1)=y';
for j=2:n
    for i=j:n
        d(i,j)= ( d(i-1,j-1)-d(i,j-1)) / (x(i-j+1)-x(i));
    end
end
a = diag(d)';
Df(1) = 1;
c(1) = a(1);
for j = 2 : n
Df(j)=(p - x(j-1)) .* Df(j-1)
c(j) = a(j) .* Df(j)
end
fp=sum(c)