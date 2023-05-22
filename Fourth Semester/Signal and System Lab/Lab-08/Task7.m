%Task7
clc
clear all
H=[2 1 2 4 3];
X=[1 4 3 2];
result = conv(H,X);
subplot(2,1,1);
stem(X)
title('Input Signal')
subplot(2,1,2);
stem(result)
title('Output Signal')