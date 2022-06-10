% 2.	Write a program to find out the number of terms N of the series f(x)=cos(x) in series expansion, such that their sum gives the value of f(x) correct to 8 decimal point. When 0<x<1. What is the value of error at this point?

x = 1;
sum = 0;
sum1 = cos(x)  %true value
n=0;

 while abs(sum1-sum)/sum1 > (0.5 * 10^-8);
   sum = sum+((-1)^n * x^(2*n))/(factorial(2*n)); 
   n = n+1;
 end
 
N = n+1; %number of terms
N
sum
error =abs(sum1-sum)/sum1 %error at x=0.1
