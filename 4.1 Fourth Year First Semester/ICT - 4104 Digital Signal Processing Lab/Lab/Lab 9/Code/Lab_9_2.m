clc;
clear;
close all;
recObj = audiorecorder;
recDuration = 10; % will record for 10sec. for this command pause needs to be added
% start recording 
disp("Begin speaking.")
recordblocking(recObj,recDuration);
% stop recording 
disp("End of recording.")
% Play recorded sound
play(recObj);
% get audio data
y = getaudiodata(recObj);
% plot the sound 
plot(y);