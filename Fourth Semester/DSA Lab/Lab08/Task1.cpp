#include <iostream>
using namespace std;
const int SIZE=100;
 int stack[SIZE], top = -1;
void push(int val){
    if(top>= SIZE-1)
    	cout<<"Stack is Overflow \n";
    else{
    	top++;
    	stack[top]=val;
	}
}
void pop(){
    if(top<0)
    	cout<<"Stack is Underflow \n";
    else{
    	cout<<"Element : "<<stack[top]<<" is deleted\n";
    	top--;
	}
}
void size(){
    int sizeOfStack= top+1;
    cout<<"Size of Stack : "<<sizeOfStack<<endl;
}
void empty(){
	top=-1;
    cout<<"Stack is empty "<<endl;
    
}
void display(){
     if(top<0)
    	cout<<"Stack is Empty \n";
    for(int i=top; i>=0; i--){
    	cout<<stack[i]<<endl;
	}
}



int main() {
   int input, value;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Size of the stack"<<endl;
   cout<<"4) Empty  stack"<<endl;
   cout<<"5) Display stack"<<endl;
   cout<<"6) ****************Exit*************************"<<endl;
   do{
       cout<<"Enter your own choice = ";
       cin>>input;
       switch(input){
           case 1:{
               cout<<"Enter value to be pushed = ";
               cin>>value;
               push(value);
               break;
           }
           case 2:{
               pop();
               break;
           }
           case 3:{
               size();
               break;
           }
           case 4:{
               empty();
               break;
           }
           case 5:{
                display();
                break;
           }
            default:
                cout<<"Invalid number = ";
           
       }
       
       
   }while(input!=6);
   

    return 0;
}