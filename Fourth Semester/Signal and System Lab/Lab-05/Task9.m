% Task-9
clear all
clc
n = -10:10;
a1 = 0.5; % 0<a<1
a2 = 3; % a>1
x1 = a1.^abs(n);
subplot(1,2,1)
stem(n, x1)
title('First signal')
%Now for a2
x2 = a2.^abs(n);
subplot(1,2,2)
stem(n, x2)
title('Second signal')