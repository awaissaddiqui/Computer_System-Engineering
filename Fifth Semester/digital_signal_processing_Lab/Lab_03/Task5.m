clc
clear all

t= -10:0.01:10;
freq = 2;
sinc = sin(2*pi*freq*t)./(2*pi*freq*t);
plot(t,sinc)
title('Sinc signal ');