%Task-1
clc 
clear all 
%Power of DTS
n = 0:1.5:19;
N=20;
X_n=cos(2*pi*n);
stem(n, X_n);
title('Discrete Time Signal');
p=(1/N)*sum(abs(X_n).^2)*1/N