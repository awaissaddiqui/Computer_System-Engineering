function Sigplot3(sig1,sig2,n)
%For seprate widnow
figure 
stem(n,sig1);
title('Signal 1')
figure
stem(n,sig2);
title('Signal 2')
figure

%On same Window
stem(n,sig1);
title('Signal 1 using hold on')
hold on
stem(n,sig2);
title('Signal 2 using hold on')
hold on
figure 

%Different but same window
subplot(2,1,1);
stem(n,sig1);
title('Signal 1 using subplot')
hold on
subplot(2,1,2);
stem(n,sig2);
title('Signal 2 using subplot')
hold on
