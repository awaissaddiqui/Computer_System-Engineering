%Task 02
%unit step signal
clc
clear all
t = -10:0.01:10;
xx = (t>0);
subplot(1,2,1)
plot(t,xx);
title('Unit step signal');
hold on
subplot(1,2,2);
n = -10:10;
yy = (n>0);
stem(n,yy);
