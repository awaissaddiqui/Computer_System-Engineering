#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *Next;
	struct Node *Head;
	struct Node *one = NULL;
	struct Node *two = NULL
	struct Node *three = NULL;
}
	one = malloc(sizeof(struct Node));
	two = malloc(sizeof(struct Node));
	three = malloc(sizeof(struct Node));
	one->data = 1;
	two->data = 2;
	three->data = 3;
	one->Next=two;
	two->Next=three;
	three->Next = NULL;
	head = one;
int main(){
	Node n1;
	n1.data;
	return 0;
}