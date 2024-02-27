clc; 
close all; 
clear;
xn=input('Enter the sequence x(n)'); %Get the sequence from user 
ln=length(xn); %find the length of the sequence
xk=zeros(1,ln); %initialize an array of same size as that of input sequence 
ixk=zeros(1,ln); %initialize an array of same size as that of input sequence
%DFT of the sequence

for k=0:ln-1 
    for n=0:ln-1
xk(k+1)=xk(k+1)+(xn(n+1)*exp((1i)*2*pi*k*n/ln)); end
end

%Plotting input sequence

t=0:ln-1; 
subplot(221); 
stem(t,xn);
ylabel ('Amplitude'); 
xlabel ('Time Index'); 
title('Input Sequence');
 
magnitude=abs(xk); % Find the magnitudes of individual DFT points
% plot the magnitude response

t=0:ln-1; 
subplot(222); 
stem(t,magnitude); 
ylabel ('Amplitude'); 
xlabel ('K');
title('Magnitude Response');

phase=angle(xk); % Find the phases of individual DFT points 
% plot the magnitude sequence

t=0:ln-1; 
subplot(223); 
stem(t,phase); 
ylabel ('Phase');
xlabel ('K');
title ('Phase Response');

%IDFT of the sequence

for n=0:ln-1 
    for k=0:ln-1
        ixk(n+1)=ixk(n+1)+(xk(k+1)*exp(1i*2*pi*k*n/ln)); end
end 
ixk=ixk./ln;

%code block to plot the input sequence

t=0:ln-1; 
subplot(224); 
stem(t,ixk);
ylabel ('Amplitude'); 
xlabel ('Time Index'); 
title ('IDFT sequence');

disp('DFT Sequence (xk):');
disp(xk);