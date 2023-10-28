%Lab 04
clc
clear all

f1 = 10;
t = 0:0.001:1;
y1 = sin(2*pi*f1*t);
subplot(3,2,1)
plot(t,y1)
xlabel('time in seconds')
ylabel('Amplitude')
title('Signal of 10 Hz frequency')
grid on

f2 = 20;
subplot(3,2,2)
y2 = sin(2*pi*f2*t);
plot(t,y2)
xlabel('time in seconds')
ylabel('Amplitude')
title('Signal of 20 Hz frequency')
grid on

f3 = 30;
subplot(3,2,3)
y3 = sin(2*pi*f3*t);
plot(t,y3)
xlabel('time in seconds')
ylabel('Amplitude')
title('Signal of 30 Hz frequency')
grid on

f4 = 40;
subplot(3,2,4)
y4 = sin(2*pi*f4*t);
plot(t,y4)
xlabel('time in seconds')
ylabel('Amplitude')
title('Signal of 40 Hz frequency')
grid on

f5 = 50;
subplot(3,2,5)
y5 = sin(2*pi*f5*t);
plot(t,y5)
xlabel('time in seconds')
ylabel('Amplitude')
title('Signal of 50 Hz frequency')
grid on

f6 = 60;
subplot(3,2,6)
y6 = sin(2*pi*f6*t);
plot(t,y6)
xlabel('time in seconds')
ylabel('Amplitude')
title('Signal of 60 Hz frequency')
grid on

N = length(y1);
fft_f1 = fft(y1);
freq_f1 = (0:N-1)*(f1/N);
subplot(3,2,1);
plot(freq_f1, abs(fft_f1));
xlabel('x axis');
ylabel('y axis');
title('fouier transfom f = 10 Hertz');



N = length(y2);
fft_f2 = fft(y2);
freq_f2= (0:N-1)*(f2/N);

subplot(3,2,2);
plot(freq_f2, abs(fft_f2));
xlabel('x axis');
ylabel('y axis');
title('fouier transfom f = 20 Hertz');



N = length(y3);
fft_f3 = fft(y3);
freq_f3= (0:N-1)*(f3/N);

subplot(3,2,3);
plot(freq_f3, abs(fft_f3));
xlabel('x axis');
ylabel('y axis');
title('fouier transfom f = 30 Hertz');



N = length(y4);
fft_f4 = fft(y4);
freq_f4= (0:N-1)*(f4/N);

subplot(3,2,4);
plot(freq_f4, abs(fft_f4));
xlabel('x axis');
ylabel('y axis');
title('fouier transfom f = 40 Hertz');



N = length(y5);
fft_f5 = fft(y5);
freq_f5= (0:N-1)*(f5/N);

subplot(3,2,5);
plot(freq_f5, abs(fft_f5));
xlabel('x axis');
ylabel('y axis');
title('fouier transfom f = 50 Hertz');



N = length(y6);
fft_f6 = fft(y6);
freq_f6= (0:N-1)*(f6/N);

subplot(3,2,6);
plot(freq_f6, abs(fft_f6));
xlabel('x axis');
ylabel('y axis');
title('fouier transfom f = 60 Hertz');



%% Addition of all Signal in time domain

time_domain_adder =  y1 + y2 + y3 + y4 + y5 + y6 ;
plot(t,time_domain_adder);


%% Addition of All signal in Frequency Domain

freq_domanin_adder = fft_f1 + fft_f2 + fft_f3 + fft_f4 + fft_f5 + fft_f6;
plot(abs(freq_domanin_adder));



%% Noise Signal 

freq = 100; 
noise = sin(2*pi*freq*t);
subplot(3,1,1);
plot(t,noise);
noise_sum = time_domain_adder+noise;
subplot(3,1,2);
plot(t , noise_sum);


N = length(noise);
fft_f7 = fft(noise);
freq_f7= (0:N-1)*(freq/N);
sum = freq_domanin_adder+fft_f7;
subplot(3,1,3);
plot(freq_f7, abs(sum));
