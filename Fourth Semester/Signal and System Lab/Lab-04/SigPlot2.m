function SigPlot2(s1, s2)

figure
plot(s1) 
title('Signal 1');
figure
plot(s2)
title('Signal 2');
figure 
 
%Now Overlapping Signals
hold on
plot(s1) 
hold on
plot(s2)
figure 
 
%Now using subplot
subplot(4,1,1)
plot(s1) 
subplot(4,1,2)
plot(s2)
end
