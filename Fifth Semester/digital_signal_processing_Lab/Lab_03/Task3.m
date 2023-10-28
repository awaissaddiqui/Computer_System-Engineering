%Task 03
clc
clear all
n = 0:15;
xx = (n+abs(n))/2;
subplot(1,2,1)
plot(n, xx);
title('Ramp signal');
hold on
subplot(1,2,2)
stem(n,xx,'filled')
title('Ramp signal in discreate');