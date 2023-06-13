clc
clear all
close all
%Amplitude Clipping; if we required output in range -2 to +4;
x=input('please enter the Signal: ');
len=length(x);
y=x;
hi=4;
lo=-2;
for i=1:len;
    if y(i)>hi;
        y(i)=hi;
    end
    if y(i)<lo;
        y(i)=lo;
    end
end
subplot(2,1,1)
stem(x,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
%axis([0 length(x)*length(x) 0 10]);
title('original signal');
subplot(2,1,2)
stem(y,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Megnitude Clipped Signal');
%axis([0 length(x)*length(x) 0 10]);