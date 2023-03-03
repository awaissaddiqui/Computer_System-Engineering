clear all
clc

x='Please  Enter ten values = ';
values=input(x);
min=min(values);
max=max(values);
output=(values-min)/(max-min);
disp(output)

