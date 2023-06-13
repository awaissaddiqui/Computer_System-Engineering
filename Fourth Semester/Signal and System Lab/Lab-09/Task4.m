% Task4
clc; 
clear all
t=0:0.001:5;
ff=25;
x1=(-8/(pi^2))*exp(1i*(2*pi*0.5*t));
for k=1:2:11
    x=(-8/(pi^2*k^2))*exp(1i*(2*pi*k*t));
    y=x1+x;
end
plot(t,real(y),'linewidth',3);
title('Triangular Wave with N=11');
ylabel('Amplitude');
xlabel('Time');
grid on