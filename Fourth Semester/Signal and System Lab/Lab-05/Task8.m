%Task-8
clear all 
clc
n = 0:0.1:1;
k = pi/4;
a=5;
x1 =a*exp(i*n*k);
x2 = a*exp(i*n);
multiply = x1.*x2;
subplot(2,1,1);
stem(n, real(multiply), 'Filled')
title('Real part of signal');
xlabel('n')
ylabel('Amplitude x[n]')
grid
subplot(2,1,2);
stem(n, imag(multiply));
title('Imaginary part of signal');
xlabel('n')
ylabel('Amplitude x[n]')
grid