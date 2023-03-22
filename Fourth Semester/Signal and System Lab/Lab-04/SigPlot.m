function SigPlot(sig1, sig2, sum, prod)
%seprate Figures
figure (1)
plot(sig1)
title('Signal 1 is ')

figure (2)
plot(sig2)
title('Signal 2 is ')

figure (3)
plot(sum)
title('Signal sum ')

figure (4)
plot(prod)
title('Signal product ')
%Overlapping Signals
plot(sig1)
hold on
plot(sig2)
hold on
plot(sum)
hold on
plot(prod)
%using subplot
subplot(4,1,1)
plot(sig1) 
subplot(4,1,2)
plot(sig2)
subplot(4,1,3)
plot(sum) 
subplot(4,1,4)
plot(prod) 
end
