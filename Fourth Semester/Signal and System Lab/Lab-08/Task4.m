%Task4
clc
clear all
close all
h = [3 -1 2 1]; 
x = [2 4 6 4 2];
output = conv(h, x);
subplot(2,1,1)
stem(x);
title('Input x[n]');
subplot(2,1,2)
stem(output, 'r');
title('Output x[n]');
