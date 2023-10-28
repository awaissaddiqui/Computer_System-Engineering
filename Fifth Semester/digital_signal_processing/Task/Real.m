% Task1 OF Assignment
clc
clear all
% x[n] = a^n for real graph 
n = -10:10;
alpha = -1;
A = 1.5;

real_part= A*alpha.^n;
subplot(3,2,1);
stem(real(real_part),'filled');
title('Real and value of Alpha = -0.5');
grid on

alpha_1 = 0.7;
real_part = A*alpha_1.^n;
subplot(3,2,2);
stem(real(real_part),'filled');
title('Real and Value of Alpha = 0.7');
grid on

alpha_2=1.1;
part_real=A*alpha_2.^n;
subplot(3,2,3)
stem(real(part_real),'filled');
title('Real, alpha = 1.1');
grid on;

