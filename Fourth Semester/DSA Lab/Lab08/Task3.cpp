// Implement stacks with following operations using linked Lists
#include <iostream>
using namespace std;
const int SIZE=50;
	struct Node{
		int data;
	struct Node *next;
	};
class StacklinkedListImplementation{
	private:
		Node* Top;
		int count;
	public:
		StacklinkedListImplementation(){
		Top=nullptr;
		count=0;
		};
		bool isEmpty(){
			return Top==nullptr;
		}
		bool isStackFull(){
			return count == SIZE;
		}
		void push(int value){
			if(isStackFull()){
				cout<<"Stack is overflow \n";
				return ;
			}
			Node* newNode=new Node;
			newNode->data = value;
			newNode->next=Top;
			Top =newNode;
			count++;
		}
		void pop(){
			if(isEmpty()){
				cout<<"Stack is Empty \n";
				return;
			}
			int value = Top->data;
			Node* temp = new Node;
			temp=Top;
			Top=Top->next;
			delete temp;
			cout<<"Deleted : "<<value<<endl;
		}               
		void size(){
			cout<<"Size of Stack is:  "<<count<<endl;
		}
		void TopOfStack();
		void Empty();
		void display(){
		Node* temp = new Node;
		temp=Top;
		while(temp!=nullptr){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		}
};
	
int main(){
	StacklinkedListImplementation test;
	test.push(3);
	test.push(5);
	test.push(4);
	test.push(9);
	test.pop();
	test.display();
   
}