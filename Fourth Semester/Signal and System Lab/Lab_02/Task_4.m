clear all
clc
A=[-12,34,61,-9;65,78,90,12; 14,78,45,12; 60,25,3,8]
B=[34,67,8,9; 12,-91,12,9; 89,-8,0,2; 16,9,23,67]
disp('1) Array addition; store the result in matrix C ')
C=A+B
disp('2)Array subtraction; store the result in matrix D ')
D=A-B
disp('3)Array multiplication using .* operator; store the result in matrix E')
E=A.*B
disp('4)Array division using ./ operator; store the result in matrix F')
F=A./B
disp('5)Array exponentiation using .^ operator; store the result in matrix G')
G=A.^B
disp('6)Take sin of A and store the result in H, Take sqrt of B and store the result in I. ')
disp('Find H*I and store the result in J.')
H=sin(A);
I= sqrt(B);
J=H*I