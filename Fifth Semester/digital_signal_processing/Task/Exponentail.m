%Task 2
clc
clear all
%for Complex Equation Graph

A = 2;
n = -10:10;
alpha=1.1;
w=(15*pi)/8;
theta=pi/4;
alpha=-0.5;
%for w=0 or w = 2*pi 
w=0;
theta=pi/4;
x=abs(A)*cos(w*n+theta)+1j*abs(A)*sin(w*n+theta);
subplot(3,2,1);
stem(n,real(x),'filled');
title('Exponential sequence  graph for alpha=-0.5(complex)');
xlabel('n')
ylabel('imaginary line ');
grid on;

alpha=0.7;
%for w = pi/8 or w = 15*pi/8
w=pi/8;
theta=pi/4;
x=abs(A)*cos(w*n+theta)+1j*abs(A)*sin(w*n+theta);
subplot(3,2,2);
stem(n,real(x),'filled');
title('Exponential sequence graph for alpha=0.7(complex)');
xlabel('n')
ylabel('imaginary line');
grid on;

x=abs(A) * cos(w*n+theta) + 1j* abs(A) * sin(w*n+theta);
subplot(3,2,3);
stem(n,real(x),'filled');
title('Exponential   alpha=1.1(complex)');
xlabel('n')
ylabel('imaginary');
grid on;

