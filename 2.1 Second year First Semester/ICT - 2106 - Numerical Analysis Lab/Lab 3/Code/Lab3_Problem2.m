% 2) Find out the number of iteration of 1(a). Now increase the accuracy level to 8 decimal point and then find the number of iteration.


syms x;
y=x^3-2*x-5;
a=2;
b=3;
error=0.00000001;
fa = eval(subs(y,x,a));
fb = eval(subs(y,x,b));

if fa*fb > 0

disp('Root does not exist between the range');
else
    c = a - (a-b) * fa/(fa-fb);
    fc = eval(subs(y,x,c));
    i=1;
while abs(fc)>error
    i=i+1;
        if fa*fc< 0
            b =c;
            fb = eval(subs(y,x,b));
        else
            a =c;
            fa = eval(subs(y,x,a));
        end
        c = a - (a-b) * fa/(fa-fb);
        fc = eval(subs(y,x,c));
    end
 fprintf('\nRoot is: %f\n', c)
end
i
