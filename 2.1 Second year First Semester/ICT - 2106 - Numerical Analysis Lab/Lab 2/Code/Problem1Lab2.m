% 1.	Write a program to calculate the approximated value of f(x)=cos(x) upto first 5 terms at x=1 (radian). Find out the absolute and relative errors. What happens to the error when number of terms is increased from 5  to 12?

% (Hints: for true value of cos(x) use the function cos(x) of the program, for approximate value of cos(x), use series expansion of cos(x). Absolute error, EA=abs(True value-approximate value), Relative ER = EA /true value

format long
x = 1; 
sum1 = 0;

 for n=0:1:4   %approximate upto 5 terms
   m = (((-1)^n)*(x^(2*n)))/factorial(2*n);
   sum1 = sum1+m;
 end
 
 sum1
 true_value = cos(x);
 absolute_error = abs(true_value-sum1)
 relative_error = absolute_error/true_value

 sum2 = 0;
 for i=0:1:11   %approximate upto 12 terms
   m=(((-1)^i)*(x^(2*i)))/factorial(2*i);
   sum2 = sum2+m;
 end

sum2
absolute_error = abs(true_value-sum2)
relative_error = absolute_error/true_value
