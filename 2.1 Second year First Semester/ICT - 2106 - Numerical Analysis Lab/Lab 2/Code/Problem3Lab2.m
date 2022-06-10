% Find out the maximum error in the series expansion of cos(x)using Remainder term. for the value of n, obtained in Ques. No. 2, at x=1, which gives the value of f(x) correct to 8 decimal point. And compare it with the absolute error obtained in Ques. No. 2 Discuss why the value of error  from Ques. No. 2 and value of maximum error from Ques No.3 is slightly different?

xi1 = 1;  %value of x(i+1)
xi = 0;   %value of x(i)
h = xi1-xi
f = cos(xi1)
f0 = cos(xi)
syms x;
f = cos(x);

y = diff(f)
y_val = vpa(subs(y,x,xi))

y1 = diff(diff(f))
y1_val = vpa(subs(y1,x,xi))

y2 = diff(diff(diff(f)))
y2_val = vpa(subs(y2,x,xi))

y3 = diff(y2)
y3_val = vpa(subs(y3,x,xi))

y4 = diff(y3)
y4_val = vpa(subs(y4,x,xi))

y5 = diff(y4)
y5_val = vpa(subs(y5,x,xi))

y6 = diff(y5)
y6_val = vpa(subs(y6,x,xi))

approximated_value = f0+ h*y_val + ((h^2)/factorial(2))*y1_val + ((h^3)/factorial(3))*y2_val + ((h^4)/factorial(4))*y3_val + ((h^5)/factorial(5))*y4_val + ((h^6)/factorial(6))*y5_val + ((h^7)/factorial(7))*y6_val
maximum_error = cos(xi1)-approximated_value
previous_error = abs( 0.995004165278026-0.995004166666667)
