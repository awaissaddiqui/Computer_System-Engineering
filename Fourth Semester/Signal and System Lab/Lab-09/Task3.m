% Task 3
clc
clear all
t=0:0.005:8;
s=sin(2*pi*t)+sin(6*pi*t)/3+sin(10*pi*t)/5+sin(14*pi*t)/7+sin(1*pi*t)/9;
plot(t,s);
xlabel('Time');
ylabel('Amplitude');

