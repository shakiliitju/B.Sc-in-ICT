% Write a program to compute the variance of an array x . The variance ? is defined to be:

% where x is the average of the array x .
% (a) For x , use all the integers from 1 to 1000.
% (b) Create x by built in function rand.

N = 1000;
X = 1:1:1000;
y = 0;
s = (N*(N+1))/2;
s = s/1000;
for i=1; i<=X;
y = y+(X(i)-s)^2;
end
y = y/N;
disp(y)
