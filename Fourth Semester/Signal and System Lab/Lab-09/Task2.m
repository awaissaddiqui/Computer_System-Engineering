% Task 2
clc
clear all
t=0:0.0001:8;
ff=0.5;
y1 = (4/pi)*sin(2*pi*ff*t);

for k = 3:2:35
fh=k*ff;
x = (4/(k*pi))*sin(2*pi*fh*t);
y1=y1+x;
end
subplot(2,1,1);
plot(t,y1,'linewidth',1.5);
title('A square wave with harmonics 1st to 17th');
xlabel('Time');
ylabel('Amplitude');

y2 = (4/pi)*sin(2*pi*ff*t);
for k = 3:2:55
fh=k*ff;
x = (4/(k*pi))*sin(2*pi*fh*t);
y2=y2+x;
end
subplot(2,1,2);
plot(t,y2,'linewidth',1.5);
title('A square wave with harmonics 1st to 27th');
xlabel('Time');
ylabel('Amplitude');