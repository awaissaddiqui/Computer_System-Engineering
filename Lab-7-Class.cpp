#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;       // Function overloading
                            // function template =>A function which have no data type,
                            // recursive funtion => like a loop it called agian agin 
             // " THIS IS GRADE CALCULATION "
 char grade(float percentage){
 	char grading;
 	if(percentage>90 && percentage<=100){grading = 'A';}
 	else if(percentage>80 && percentage<=90){grading = 'B';}
 	else if(percentage>70 && percentage<=80){grading = 'C';}
 	else if(percentage>60 && percentage<=70){grading = 'D';}
 	else if(percentage>0 && percentage<=60){grading = 'F';}
 	return grading;
 }
 float grade(int marks){
 	float percentage;
 	float x = (float)marks; 
 	percentage= (x*100)/150;
 	return percentage;
 }

              // "THIS IS VOID "
 void grade(){
 	int marks;
 	cout<<"Enter your marks = ";
 	cin>>marks;
 	float x = grade(marks);
 	char grades=grade(x);
 	cout<<"Your marks is = "<<marks<<endl;
 	cout<<"Your percentage is = "<<x<<endl;
 	cout<<"Your Grade is = "<<grades<<endl;
 }	
 
  main(){
 	grade();
 }




