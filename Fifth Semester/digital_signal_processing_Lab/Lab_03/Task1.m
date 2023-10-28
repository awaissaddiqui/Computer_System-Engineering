clc
clear all

% Unit impulse signal
n = -10:0.01:10;
xx = (n==0);
plot(n,xx);
title('Unit Sample sequence in Conti...');
stem(n, xx)
title('Unit impulse in discreate');