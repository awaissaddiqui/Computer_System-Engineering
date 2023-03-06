clear all
clc
% Use the (inv) to find inverse 
A= [1 2 3; 4 5 6; 7 8 9];
b= [1;2;3];
%{
x+2*y+3*z=1;
4*x+5*y+6*z=2;
7*x+8*y =1
%}
a =inv(A);
x= a*b
