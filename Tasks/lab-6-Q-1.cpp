/* Q=1,Write a program that takes marks and 
registration number as input and then displays 
your name, grade and registration number using 
function. (You must use your own name and registration number
 also the grade must be calculated on the bases of marks).*/
 /////////////////////////////////////////////////////////

/*#include <iostream>
using namespace std;
string root(int);
 main(){
     
     string regNum ;
	 string name;
     int marks=0;
     cout<<"Registration Number = ";
     cin>>regNum;
     cout<<"\nYour Marks  = ";
     cin>>marks;
     if(regNum == "21PWCSE1993" || "21pwcse1993"){
     	name ="AWAIS SADDIQUI";
     	cout<<"\nName = "<<name<<endl;
     	cout<<"Reg No = "<<regNum<<endl;
     	cout<<"Grade = "<<root(marks)<<endl;
     	
	 }else{
	 	cout<<"Your Registration Number is Invalid";
	 }
}
   string root(int result){
   	       string grade;
    	if(result>88 && result<=100){grade="A";}
    	else if(result>76 && result<=88){grade="A-";}
    	else if(result>64 && result<=76){grade="B+";}
    	else if(result>52 && result<=64){grade="B";}
    	else if(result>40 && result<=52){grade="C";}
    	else if(result>30 && result<=40){grade="D";}
    	else if(result>=0 &&  result<=30){grade="F";}
    	else{
    		grade="Invalid Marks";
		}
    return grade;
   }   */
   
//////////////////////////////////////////////////////////////

/* Q=2,Write a function minmax () 
that takes four integers as input and display 
the minimum and maximum number.*/
#include <iostream>
#include <algorithm>
using namespace std;
void minmax(int,int,int,int);
main(){
	int value[3];
   cout<<"Enter Four Numbers \n";
   cin>>value[0]>>value[1]>>value[2]>>value[3];
	minmax(value[0], value[1], value[2], value[3]);		
}

void minmax(int a, int b, int c, int d ){
	int max,min;
	if(a>b && a>c && a>d){
		max=a;
	}
	else if(b>a && b>c && b>d){
		max=b;
	}
		else if(c>a && c>b  && c>d){
		max=c;
	}
		else if(d>a, d>b, d>c){
		max=d;
	}else{cout<<"Invalid";}
	
	if(a<b && a<c && a<d){
		min=a;
	}
	else if(a>b && b<c && b<d){
		min=b;
	}
	else if(c<b && a>c && c<d){
		min=c;
	}
	else if(d<a, d<b, d<c){
		min=d;
	}else{cout<<"Invalid";}
	cout<<"Maximum: "<<max;
	cout<<"\nMinimum: "<<min;
}
