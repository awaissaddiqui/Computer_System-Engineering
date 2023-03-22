%{
Task-01
x1[n] = [2 5 8 4 3]
x2[n] = [4 3 2]
%}
clear all
clc
%Part A
x1 = [2 5 8 4 3];
x2 = [4 3 2 0 0]; 
sum = x1+x2
product = x1.*x2
%Part B
disp('Addition using loop is ')
for i=1:5
    forSum(1,i)=x1(i)+x2(i);
end
disp(forSum)
for j=1:5
    x4(1,j) = x1(j)*x2(j);
end
disp('Multiplication of signals using loop is: ');
disp(x4);
%Part C
SigPlot(x1, x2, sum, product)


