%Task9
clc
clear all
X1=[2 -3 3 4 -2];
X2=[4 2 3 -1 -2];
X3=[3 5 -3 4];
% x1[n] * (x2[n] * x3[n]) = (x1[n] * x2[n]) * x3[n]  
x2x3=conv(X2,X3);
LHS=conv(X1,x2x3);
% now RHS
x1x2=conv(X1,X2);
RHS=conv(x1x2,X3);
subplot(4,1,1);
stem(LHS);
title('LHS x1[n] * (x2[n] * x3[n])');
subplot(4,1,2);
stem(RHS);
title(' RHS (x1[n] * x2[n]) * x3[n] ');
%Another express : x1[n] * x2[n]= x2[n] * x1[n] 
LHS2=conv(X1,X2);
RHS2=conv(X2,X1);
subplot(4,1,3);
stem(LHS2);
title('LHS  x1[n] * x2[n]');
subplot(4,1,4);
stem(RHS2);
title(' RHS x2[n] * x1[n] ');

