%Task- 10
clear all
clc
%Part-a
t = linspace(0,3/125,1000);
A=3;
phi = -0.4;
w = 2*phi*125;
x_t = A*exp(i*(w*t+phi));
subplot(2,1,1)
plot(t, real(x_t));
title('Real Part')
xlabel('Time (s)')
ylabel('Amplitude')
grid 
subplot(2,1,2)
plot(t, imag(x_t));
title('Imaginary part')
