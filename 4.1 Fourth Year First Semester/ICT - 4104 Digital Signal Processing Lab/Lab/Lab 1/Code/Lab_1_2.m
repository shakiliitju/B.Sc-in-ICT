A=10;F=2; theta =0.5;
dt=0.001;
t = 0:dt:1;
x_a= A*sin(2*pi*F*t +theta);
subplot(3,1,1)
plot(t,x_a);
xlabel('time (sec)');
ylabel('x_a');
title('Analogue (Continuous) Input Signal', 'Linewidth',5);
F_s = 1.5*F;T_s =1/F_s;
n = F_s;
n_1 = 0:T_s:n*T_s;
x_s = A*sin(2*pi*F*n_1 + theta);
subplot(3,1,2)
stem(n_1,x_s);
xlabel('sampling (n)');
ylabel('x_s');
title('Discrete Time Signal','LineWidth',5);
t_1=linspace(0,max(n_1),(max(n_1)/dt));
x_r = interp1(n_1,x_s,t_1,'spline');
subplot(3,1,3)
plot(t_1,x_r);
xlabel('time (sec)');
ylabel('x_r');
title('reconstructed signal','LineWidth',5)