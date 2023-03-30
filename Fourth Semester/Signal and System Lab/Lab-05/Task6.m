%Task-6
clear all
clc
% x’(n) = A e(j w0 n + ø)
n=-10:0.5:10;
k=1; %Amplitude of signal 

y =k*exp(-0.2+0.5i*n);
subplot(2,2,1);
stem(n, abs(y));
title('Magnitude plot ');
grid
% Ploting of phase
subplot(2,2,2)
stem(n, angle(y));
title('Phase plot')
grid
% Real part
subplot(2,2,3)
stem(n, real(y));
title('Real Part of exp signal')
grid

% Imaginary Part
subplot(2,2,4)
stem(n, imag(y))
title('Imaginary Part ')
grid