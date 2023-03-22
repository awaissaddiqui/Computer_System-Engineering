function factorial_of()
%Task-11
%Create an m?file that inputs a number from user and then finds out the factorial of that number. 
num=input('Enter a number = ');
fact = 1;
for i = 1 : num
    fact = fact * i;
end
disp(fact);