#include <iostream>
#include <math.h>
using namespace std;
void root(float,float,float); // first of all declare the function 

main(){
	int x[3];
	cout<<"Enter cooefficent of Quadratic Equation "<<endl;
	cin>>x[0];
	cin>>x[1];
	cin>>x[2];
	if(x[0]==0){
		cout<<"The value of a cannot be zero";
	}else{
			root(x[0],x[1],x[2]); // assign values to the function
	} 
}
           void root(float a, float b, float c){
		      float d,r1,r2;       
            d=b*b - 4*a*c;
           if(d>0){
           	r1=(-b+sqrt(d))/(2*a);
           	r2=(-b-sqrt(d))/(2*a);
           	cout<<"\nHence decrment is greater than zero so it has two roots\n"<<
           	"Root 1 = "<<r1<<"\nRoot 2 = "<<r2;
		   }else if(d==0){
		   	r1=(-b)/2*a;
		   	r2=r1;
		   	cout<<"\nHence descriment is equal to zero so roots are equal.\nroot1=root2= "<<r2;
		   }else{
		   	cout<<"Real root is = "<<(-b)/2*a<<"\nImaginary root is = "<<sqrt(d)/2*a;
		   }
		   

		   
}

