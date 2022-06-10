Labsheet-4: Exercise-2 (Newton's Forward Interpolation)

clc;
close all;
clear all;
x = [0 1 2 4];
y = [2 5 9 12];
n = length(x);
p = 3;
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