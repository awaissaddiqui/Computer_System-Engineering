#include <iostream>
using namespace std;
const int size=10;
int queue[size], front=-1, rear=-1;
void Enqueue(int data){
    if(rear>= size-1)
        cout<<"Queue is Overflow \n";
    else{
        if(front==-1){
            rear++;
            queue[rear]=data;
		}
    }
}
void Dequeue(){
	if(front<0)
		cout<<"Queue is underflow\n";
	else{
		cout<<"Element : "<<queue[front]<<" is deleted \n";
		rear--;
	}
		
    
}
void Front(){
	front++;
    cout << "Front element: " << queue[front] << endl;
}
void Rear(){
    cout << "Rear element: " << queue[rear] << endl;
}
void Peek(){
    cout<< "Front element: " << queue[front] << endl;
}
void Size(){
    int sizeOfqueue= rear+1;
    cout<<"The size of Queue is : "<<sizeOfqueue<<endl;
}
void Empty(){
    rear=-1;
    cout<<"Queue is empty \n";
}
void display(){
	for(int i=front+1; i<=rear; i++)
		cout<<queue[i]<<" ";
}

int main()
{
    int input, value;
    cout<<"1. Enqueue \n";
    cout<<"2. Dequeue \n";
    cout<<"3. Front \n";
    cout<<"4. Rear \n";
    cout<<"5. Peek \n";
    cout<<"6. Size \n";
    cout<<"7. Empty \n";
    cout<<"8. Display \n";
    cout<<"9. Exit \n";
    do{
        cout<<"Enter your choise = ";
        cin>>input;
        switch(input){
            case 1: {
                cout<<"Value to be insert in queue : ";
                cin>>value;
                Enqueue(value);
                break;
            }
            case 2: {
                Dequeue();
                break;
            }
            case 3: {
                Front();
                break;
            }
            case 4: {
                Rear();
                break;
            }
            case 5: {
                Peek();
                break;
            }
            case 6: {
                Size();
                break;
            }
            case 7: {
                Empty();
                break;
            }
            case 8: {
            	display();
                break;
            }
            case 9: {
                break;
            }
            default:
                cout<<"Invalid option : \n";
        }
        
    }while(input!=8);

    return 0;
}
