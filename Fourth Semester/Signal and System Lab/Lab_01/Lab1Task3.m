clc
%Transcript
disp('Grade                   Grade Point');
disp('======================================');
disp('A                        4.00');
disp('A-                       3.67');
disp('B+                       3.33');
disp('B                        3.00');
disp('B-                       2.67');
disp('C+                       2.33');
disp('C                        2.00');
disp('C-                       1.67');
disp('D+                       1.33');
disp('D                        1.00');
disp('F                        0');
disp('======================================');
%Subject-1
Grade_1=input('Circuit &  System-1 Grade =');
cHour_1=input('Credit Hour = ');
GPA_1=Grade_1*cHour_1;
%Subject-2
Grade_2=input('Circuit &  System-1 Lab Grade =');
cHour_2=input('Credit Hour = ');
GPA_2=Grade_2*cHour_2;
%Subject-3
Grade_3=input('Computer Programming Grade = ');
cHour_3=input('Credit Hour = ');
GPA_3=Grade_3*cHour_3;
%Subject-4
Grade_4=input('Computer Programming Lab Grade = ');
cHour_4=input('Credit Hour = ');
GPA_4=Grade_4*cHour_4;
%Subject-5
Grade_5=input('DE Grade = ');
cHour_5=input('Credit Hour = ');
GPA_5=Grade_5*cHour_5;
%Subject-6
Grade_6=input('EDG Grade = ');
cHour_6=input('Credit Hour = ');
GPA_6=Grade_6*cHour_6;
%Subject-7
Grade_7=input('EDG Lab Grade = ');
cHour_7=input('Credit Hour = ');
GPA_7=Grade_7*cHour_7;
%Subject-8
Grade_8=input('CPS Lab Grade = ');
cHour_8=input('Credit Hour = ');
GPA_8=Grade_8*cHour_8;

totalCreditHours=cHour_1+cHour_2+cHour_3+cHour_4+cHour_5+cHour_6+cHour_7+cHour_8;
Total_GPA=GPA_1+GPA_2+GPA_3+GPA_4+GPA_5+GPA_6+GPA_7+GPA_8;
CGPA=Total_GPA/totalCreditHours;
disp('SGPA');
disp(CGPA);



