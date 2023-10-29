% Read the image
image = imread('original.jpg'); % Replace 'your_image.jpg' with the path to your image
% Convert the image to grayscale if necessaryif size(image, 3) > 1
image = rgb2gray(image);
% Define the system (filter/kernel)
system = [1 2 1; 0 0 0; -1 -2 -1]; % Example system (3x3 Sobel filter for edge detection)
% Perform convolution
convolvedImage = conv2(double(image), system, 'same');
% Display the original image
subplot(1, 2, 1); 
imshow(image);
title('Original Image');
% Display the convolved image 
subplot(1, 2, 2); 
imshow(uint8(convolvedImage));
title('Convolved Image');