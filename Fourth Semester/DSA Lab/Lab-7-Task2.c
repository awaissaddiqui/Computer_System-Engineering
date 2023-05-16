#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next; 
};
struct Node *head = NULL;
int count=0;
void insertAtStart(int);
void insertAtEnd(int);
void deleteFromStart();
void deleteFromEnd();
void Search(int);
void Empty();
void sizeOfList();

int main(){
	int i, data;

  for(;;){
    printf("1. Insert an element at the beginning of linked list.\n");
    printf("2. Insert an element at the end of linked list.\n");
    printf("3. Delete an element from beginning.\n");
    printf("4. Delete an element from end.\n");
    printf("5. Search for a key .\n");
    printf("6. Empty List .\n");
    printf("7. Calculate size of the list .\n");
    printf("8. Exit\n");

    scanf("%d", &i);

    if (i == 1) {
      printf("Enter value of element\n");
      scanf("%d", &data);
      insertAtStart(data);
    }
    else if (i == 2) {
      printf("Enter value of element\n");
      scanf("%d", &data);
      insertAtEnd(data);
    }
    else if (i == 3)
      deleteFromStart();
    else if (i == 4)
      deleteFromEnd();
    else if (i == 5)
      Search(data);
    else if (i == 6)
      Empty();
    else if (i == 7)
      sizeOfList();
    else if (i == 8)
      break;
    else
      printf("Please enter valid input.\n");
}
	return 0;
}
void insertAtStart(int dataa){
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = dataa;
	count++;
	if(head ==NULL){
		head = temp;
		head->next = NULL;
		return;
	}
	temp->next = head;
	head = temp;
}
void insertAtEnd(int x) {
  struct Node *t, *temp;

  t = (struct Node*)malloc(sizeof(struct Node));
  t->data = x;
  count++;


  if (head == NULL) {
    head = t;
    head->next = NULL;
    return;
  }

  temp = head;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;
}
void deleteFromStart() {
  struct Node *t;
  int n;

  if (head == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  n = head->data;
  t = head->next;
  free(head);
  head = t;
  count--;

  printf("%d deleted from the beginning successfully.\n", n);
}
void deleteFromEnd() {
  struct Node *t, *u;
  int n;

  if (head == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  count--;

  if (head->next == NULL) {
    n = head->data;
    free(head);
    head = NULL;
    printf("%d deleted from end successfully.\n", n);
    return;
  }

  t = head;

  while (t->next != NULL) {
    u = t;
    t = t->next;
  }

  n = t->data;
  u->next = NULL;
  free(t);

  printf("%d deleted from end successfully.\n", n);
}