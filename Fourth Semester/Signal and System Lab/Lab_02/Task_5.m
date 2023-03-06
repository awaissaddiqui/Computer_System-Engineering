% Task -5
clear all
clc
% 1) Create 4x3 array B 
A = [3 7 -4 12; -5 9 10 2; 6 13 8 11; 15 5 4 1]
B = [A(:,4) A(:,4) A(:,4)]  
% 2) Create 3x4 array C
C = [A(4,:); A(4,:); A(4,:)]
% 3) Create 2x3 array D
%D= [A(1:2,2),A(1:2,3),A(1:2,4)];
D = [A(1:2,2), A(1:2,3), A(1:2,4)]
