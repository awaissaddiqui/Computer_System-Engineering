clc
n= -10:10;

x = [zeros(1,10) 1 zeros(1,10)];
y = [zeros(1,10) ones(1,11)];
stem(n,x); 
stem(n,y); 
axis([-10 10 -2 2])