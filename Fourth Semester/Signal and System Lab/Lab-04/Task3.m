%Task-03
clc;
clear all;
close all;
x1=[1 2 2 1 1]; %Given Signal 1
x2=[3 2 0 1 2]; %Given Signal 2
n=[0:4];
Index=[]; %Made to store indexs
y=1;
for i=1:5
    if x1(i)<x2(i)
        Index(y)=i-1;
        y=y+1;
    end
end
disp('x2 has smaller amplitude on following Indexs: ');
disp(Index);
Sigplot3(x1,x2,n)


