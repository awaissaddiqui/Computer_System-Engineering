%Task-7
clear all
clc
n = 0:10;
a = 0.7; % Part-B Repeat with value a=1.3
discreteSignal = a*exp(n*i);
t = 0:0.01:10;
contiSignal = a*exp(t*i);
subplot(2,1,1)
stem(n, real(discreteSignal));
hold on
plot(t, real(contiSignal));
title('Discrete as well as continuous signal')
grid



