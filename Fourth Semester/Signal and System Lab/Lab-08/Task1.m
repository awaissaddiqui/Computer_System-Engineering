clc
clear
clear all

n= -2:1/10:2;
x1 = sin(2*pi*2*n);
subplot(3,1,1);
stem(n,x1,'r','filled');
xlabel('Time');
ylabel('Amplitude');
title('sin(2*\pi*f*n)');

u = (n>=0);
x2 = x1.*u;
subplot(3,1,2);
stem(n,u, 'g','filled');
xlabel('Time');
ylabel('Amplitude');
title('Unit Step');

subplot(3,1,3);
stem(n,x2, 'b','filled');
xlabel('Time');
ylabel('Amplitude');
title('Causal Version');