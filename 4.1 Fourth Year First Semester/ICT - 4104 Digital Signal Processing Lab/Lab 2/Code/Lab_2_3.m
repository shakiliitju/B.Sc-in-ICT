
load handel.mat
[y, Fs] = audioread('shakil.wav'); % Replace 'your_voice_signal.wav' with the path toyour voice signal file
% Define the filter coefficients
b = [0.5 ,-.5]; % Example filter coefficients
% Perform convolution
output = conv(y,b);
% Plot the original voice signal
t = (0:length(y)-1) / Fs; % Time vector
subplot(2,1,1);
plot(t, y);
title('Original Voice Signal');
xlabel('Time (s)'); 
ylabel('Amplitude');
% Plot the filtered signal
t_output = (0:length(output)-1) / Fs; % Time vector for the output signal
subplot(2,1,2);
plot(t_output, output);
title('Filtered Signal');
xlabel('Time (s)'); 
ylabel('Amplitude');