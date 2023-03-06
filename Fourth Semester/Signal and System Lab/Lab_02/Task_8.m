% Task -8
clear all
clc
A=[3 23 34 12 34 5 56 23; 12 34 34 32 23 23 45 1;
    67 23 2 4 4 5 6 456; 4 5 1 1 2 34 45 56;
    67 67 45 67 78 7 8 5; 6 35 5 3 5 56 7 8]
disp('Last Column Deleted')
A(:,end) = []
disp('Last Column Updated')
A(:,end)=[8 5 56 456 1 23]
disp('Last Row Deleted')
A(end,:)=[]
disp('Last Row updated')
A(end,:)=[23 56 5 3 5 35 6]