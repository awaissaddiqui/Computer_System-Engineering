%Task-10
clc;
clear all;
close all;
[x,y]=meshgrid([-2:.2:2]);

z= x.*exp(-x.^2-y.^2);
figure

surf(x,y,z,gradient(z))

colorbar

