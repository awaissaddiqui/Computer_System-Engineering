% Task -9
clear all
clc
A=[3 23 34 12 34 5 56 23; 12 34 34 32 23 23 45 1;
    67 23 2 4 4 5 6 456; 4 5 1 1 2 34 45 56;
    67 67 45 67 78 7 8 5; 6 35 5 3 5 56 7 8]
% (i)
disp('A(3,end) mean Extract the third through the last elements in Last coloumn ')
A(3,end)
% (ii)
disp('A(:) mean reshapes all elements of A into a single column vector')
A(:)
% (iii)
disp('A(:,end) Gives Last Column of A')
A(:,end)
% (iv)
disp('linspace(20,100) generate a row vector Y containing 100 equally spaced values between 20 and 100')
% Total Length is 100 while first element is 20 and last is 100
Y = linspace(20,100)
% (v)
disp('linspace(20,100,50) generate a row vector containing 50 equally spaced values')
% Lenth of y is 50
Y = linspace(20,100,50)

