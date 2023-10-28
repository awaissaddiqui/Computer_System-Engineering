% Sinusoidal 
clc
clear all
Amplitude = 4;
freq = 5;
t = -2:0.001:2;
signal = Amplitude * sin(2*pi*freq*t);
plot(t,signal);
title('Sinusoidal Signal'); 