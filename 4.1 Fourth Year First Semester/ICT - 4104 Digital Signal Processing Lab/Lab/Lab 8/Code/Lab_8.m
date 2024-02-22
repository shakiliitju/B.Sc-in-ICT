clc;
clear;
close all;
% Generate a time vector from 0 to 1 with a step of 0.001 seconds
t = 0.001:0.001:1;
% Create a clean sinusoidal signal with a frequency of 50 Hz and amplitude of 2
s = 2 * sin(2 * pi * 50 * t);
% Generate a noisy signal by adding Gaussian noise (mean=0, std=0.9) to the clean signal
n = numel(s);
A = s + 0.9 * randn(1, n);

% Initialize filter parameters
m = 25;
w = zeros(1, m);
wi = zeros(1, m);
e = zeros(1, n); % Initialize the error signal as a zero vector
mu = 0.0005;

% Adaptive filtering loop
for i = m:n
e(i) = s(i) - sum(wi .* A(i:-1:i-m+1));
w = w + 2 * mu * e(i) * A(i:-1:i-m+1);
end

% Plot the original signal, noisy signal, and filtered signal
figure;
subplot(3,1,1);
plot(t, s);
title('Original Signal');
xlabel('Time (s)');
ylabel('Amplitude');

subplot(3,1,2);
plot(t, A);
title('Noisy Signal');
xlabel('Time (s)');
ylabel('Amplitude');

subplot(3,1,3);
plot(t, s - e); % Filtered signal is s - e
title('Filtered Signal');
xlabel('Time (s)');
ylabel('Amplitude');

% Plot the error signal and monitor convergence
figure;
plot(t, e);
title('Error Signal');
xlabel('Time (s)');
ylabel('Amplitude');

% Calculate the Mean Squared Error (MSE) to assess performance
mse = mean(e.^2);
disp(['Mean Squared Error (MSE): ', num2str(mse)]);
