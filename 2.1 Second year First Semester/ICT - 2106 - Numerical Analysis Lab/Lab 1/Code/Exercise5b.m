% (b) Create x by built in function rand.

x = rand(1000,1);
n = length(x);
sum = n*(n+1)/2;
avrg = sum/n;
s1 = 0;
for i = 1:n
s1 = s1+(x(i)-avrg)^2;
end;
v = s1/n;                        
disp(v)
