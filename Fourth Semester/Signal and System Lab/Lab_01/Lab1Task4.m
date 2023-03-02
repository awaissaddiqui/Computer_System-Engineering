clear all
clc
t=clock;
a=20;
b=30;
disp('Before Swaping...');
disp('a=20,  b=30')
a=a+b;
b=a-b;
a=a-b;
disp('After  Swaping...');
disp(a); disp(b)
etime(clock,t)


