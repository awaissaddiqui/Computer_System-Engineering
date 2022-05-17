#include <iostream>
#include <math.h>
using namespace std;

int main (){
	float quiz[6]={};
	cout<<"\t Value of a "<<endl;
	cin>>quiz[0];
	cout<<"\t Value of b "<<endl;
	cin>>quiz[1];
	cout<<"\t Value of c "<<endl;
	cin>>quiz[2];
	// index of [0] is = a
	// index of [1] is = b
	// index of [2] is = c
	// index of [3] is = d
	// index of [4] is = r1
	// index of [5] is = r2
	
	if(quiz[0] !=0){
		quiz[3]=(quiz[1]*quiz[1])-(4*quiz[0]*quiz[2]);
		if(quiz[3]>0){
			quiz[4]=(-quiz[1]+sqrt(quiz[3]))/(2*quiz[0]);
			quiz[5]=(-quiz[1]-sqrt(quiz[3]))/(2*quiz[0]);
               cout<<"The discriment is greater than zero so it has two unequal roots"<<endl;
               cout<<"Root 1= \t"<<quiz[4]<<endl;
              cout<<"Root 2 = \t"<<quiz[5];
		}
		else if (quiz[3]==0){
               quiz [4]=(-quiz[1]/(2*quiz[0]));
               quiz [5]= quiz[4];
               cout<<"The discriment is zero , hence r1 & r2 are equal root= \t "<<quiz[5];			
		}
          else{
               cout<<"The real root is \t"<<(-quiz[1])/(2*quiz[0])<<endl;
               cout<<"The img root is \t"<<sqrt(-quiz[3])/(2*quiz[0]);
          }
	}
     else {
          cout<<"The value of a cannot be zero";
     }
	
return 0;	
}

