% Md. shakil Hossain
% Exam Roll : 192340
% Class Roll : 2023
% Question 2

clc
clear all
format long
f=@(x) 2-x^2-sin(x);
df=@(x) -2*x-cos(x);
e=10^-6;
x0=2;
n=20;
if df(x0)~=0
    for i=1:n
        x1 = x0-f(x0)/df(x0)
        fprintf('x%d = %.6f\n',i,x1);
        if abs(x1-x0)<e
            break
        end
        x0 = x1;
    end
else
    disp('Newton raphson failed');
end
