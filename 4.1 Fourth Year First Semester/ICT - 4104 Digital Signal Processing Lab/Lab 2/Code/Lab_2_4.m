% Define the input signal
x = [1 2 3 4 5];
% Define the channel response
h = [0.5 0.2 0.1];
% Perform convolution
y = conv(x, h); % Display the result
disp(y);