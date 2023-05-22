%Task8
clc
clear all
H1=[1 3 2 1];
H2=[1 1 2];
X=[1 4 3 2];
result1=conv(H1,X);
y=conv(result1,H2);
subplot(3,1,1);
stem(X);
title('Input Signal');
subplot(3,1,2);
stem(result1);
title('Signal after H1[n] ')
subplot(3,1,3);
stem(y);
title('Final Output');