% Plot the following functions in the same window y1=sin x, y2=sin 2x, y3=sin 3x, y4=sin 4x where x varies from 0 to pi.

x = 0:0.01:pi;
y1 = sin(x);
y2 = sin(2*x);
y3 = sin(3*x);
y4 = sin(4*x);
plot(x,y1,x,y2,x,y3,x,y4)
grid on