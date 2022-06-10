% 4) Write a program to solve 1 (a) using POLYVAL function


a=[1 0 -2 -5];
x1=2;
x2=3;

for i=1:1000
x0=x1-[(polyval(a,x1)*(x2-x1))/(polyval(a,x2)-polyval(a,x1))]
n=polyval(a,x0)
e=abs(n);
if(e<=10^-5)
break;
end

if polyval(a,x1)* polyval(a,x0)
x2=x0;
continue
else
x1=x0;
continue
end
end
