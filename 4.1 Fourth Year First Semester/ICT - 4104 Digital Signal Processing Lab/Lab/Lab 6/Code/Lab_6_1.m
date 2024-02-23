clc;
clearvars;
close all;

n = 20;
fp = 200;
fq = 300;
fs = 1000;
fn = 2 * fp / fs;

% Generate rectangular window
window = rectwin(n + 1);

% Design FIR filter using rectangular window
b = fir1(n, fn, window);

% Compute frequency response
[H, W] = freqz(b, 1, 128);

% Plot magnitude response
subplot(2, 1, 1);
plot(W/pi, abs(H));
title('Magnitude Response of LPF');
ylabel('Gain in dB');
xlabel('Normalized Frequency');

% Plot phase response
subplot(2, 1, 2);
plot(W/pi, angle(H));
title('Phase Response of LPF');
ylabel('Phase Angle');
xlabel('Normalized Frequency');
