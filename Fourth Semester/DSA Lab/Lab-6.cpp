#include <iostream>
#include <string>
using namespace std;
#define MAX_LIST_SIZE 5	
#define FALSE 0
#define TRUE 1	

struct Element{
	int number;
	char *string;
};
struct LIST{
	int last;
	Element a[MAX_LIST_SIZE];
};
typedef int index;
// Determine End of List
index end(LIST *list){
	return (list->last+1);
}
// Determine if List is empty or not
int is_empty(LIST *list){
	if(list->last==-1)
		return (TRUE);
	else
		return (FALSE);
}
// Determine start of list 
index start(LIST *list){
	if(is_empty(list)==FALSE)
		return (0);
	else
		return (end(list));
}
// 	Add (Adds item to the LIST at given index)
LIST *Add(Element element , index LIST *list){
	int i;
	if(list->last >= MAX_LIST_SIZE-1){
		cout<<"List is Full ! Can't Added";
	}
	else if((index>list->last+1) || (index<0)){
		cout<<"Position does't exist";
	}
	else{
		for(i=list->last; i>=index; i--){
			list->a[i+1]=list->a[i];
		}
		list->a[index] = element;
		list->last = list->last+1;
		return (list);
	}
}
//  Remove (Removes item from the List at provided index)

LIST *remove(int index, LIST *list){
	int i;
	if((index>list->last) || (index<0)){
		cout<<"Position does't exist";
	}
	else{
		list->last = list->last-1;
		for(i=index; i<=list->last; i++){
			list->a[i]=list->a[i+1];
		}
		return (list);
	}
}
// Get (Retrieves an Item from the LIST)
Element get(int index, LIST *list){
	if((index<0) || (index>list->last)){
		cout<<"Position not found";
	}
	else{
		return (list->a[index]);
	}
}



