%Task-5
%x=k * exp(a*n*i);
clear all
clc
count = 0:0.1:10;
k = 5; % Where K is amplitude of signal
a = pi/2;
expo = k*exp(a*count*i);

subplot(2,1,1)
stem(count, real(expo))
title('Real part of complex number is ')
ylabel('Amplitude')
grid 
%Imaginary part

subplot(2,1,2)
stem(count, imag(expo))
title('Im part of complex number is ')
ylabel('Amplitude')
grid 
