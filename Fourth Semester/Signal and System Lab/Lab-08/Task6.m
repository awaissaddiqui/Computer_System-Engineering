%Task6
clc
clear all
XoFn=[1 3 2 1];
HoFn=[1 1 2];
LHS = conv(XoFn,HoFn);
RHS = conv(HoFn,XoFn);
subplot(2,1,1);
stem(LHS);
title('Left Hand Side ');
subplot(2,1,2);
stem(RHS);
title('Right Hand Side ');