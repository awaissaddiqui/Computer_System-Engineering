clear all
clc
% Task -11
A =  input('Enter 3 by 3 matrix = ');
b= input('Enter 1 by 3 matrix = ');
inverse = inv(A);
disp('inverse of A')
x = inverse*b