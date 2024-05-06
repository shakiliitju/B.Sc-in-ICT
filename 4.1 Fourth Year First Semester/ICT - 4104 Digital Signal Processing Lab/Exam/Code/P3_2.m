clc;
clear;
close all;

n=20;
fp=200;
fq=300;
fs=1000;
fn=2*fp/fs;
window=hamming(n+1);
b=fir1(n,fn,window);
[H, W]=freqz(b,1,128);

subplot(2,1,1);
plot(W/pi,abs(H));
title('magnitude response of lpf');
ylabel('gain in db-------->');
xlabel('normalized frequency------>');

subplot(2,1,2);
plot(W/pi,angle(H));
title('phase response of lpf');
ylabel('angle-------->');
xlabel('normalized frequency------>');
