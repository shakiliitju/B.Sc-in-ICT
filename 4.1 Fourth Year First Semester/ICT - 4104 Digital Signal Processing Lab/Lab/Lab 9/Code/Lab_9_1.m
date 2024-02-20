clc;
clear;
close all; 
% read .wav file
[data,fs] = audioread('shakil.wav');
% read .mp3 file
[x, fs1] = audioread('shakil.mp3');
% play audio files
sound(x,fs1); %one method
% play audio files by another method 
player = audioplayer(x,fs1); 
play(player);
pause(5); 
pause(player); 
pause(5); 
stop(player);
% plot signal
plot(x); 
title('Input Sound File');
