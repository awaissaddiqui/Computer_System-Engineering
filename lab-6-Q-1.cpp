#include <iostream>
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
   }

