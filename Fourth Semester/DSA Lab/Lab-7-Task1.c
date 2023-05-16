#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
void Add(int);
void Traverse();
void Delete(int);
void Print();
struct Node *head = NULL;
int main(){
	int inputData;
	printf("Add node to list\n");
		Add(5);
		Add(50);
		Add(60);
	printf("\nTreverse  Linked List\n");
	Traverse();
	printf("Which Element you want to Delete From Linked List\n");
	scanf("%d",&inputData);
	Delete(inputData);
	printf("Print Linked List\n");
	Print();
	return 0;
}
void Traverse(){
	struct Node *t;
	t= head;
	if(t == NULL){
		printf("List is empty ");
		return;
	}

	while(t->next!= NULL){
		printf("%d\n",t->data);
		t=t->next;
	}
	printf("%d\n", t->data);
}
void Add(int dataa){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data = dataa;
	newNode->next = NULL;
	if(head == NULL)
		head = newNode;
	else{
		struct Node *current = head;
		while(current->next!=0){
			current = current->next;
		}
		current->next = newNode;
	}
	printf("%d Node added to list\n", dataa);
}
void Delete(int del){
	if(head== NULL){
		printf("List is empty\n");
		return;
	}
	struct Node* current = head;
	struct Node* prev = NULL;
	// Traverse the list to find the node to be deleted
	while(current!=NULL && current->data !=del){
		prev = current;
		current= current->next;
	}
	// If the node was not found, return
    if (current == NULL) {
        printf("Node not found.\n");
        return;
    }
     // If the node to be deleted is the head, update the head
    if (prev == NULL) {
        head = current->next;
    } else {
        // Otherwise, update the next pointer of the previous node
        prev->next = current->next;
    }
    // Free the memory occupied by the node
    free(current);
    printf("Node deleted.\n");
}
void Print() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
	