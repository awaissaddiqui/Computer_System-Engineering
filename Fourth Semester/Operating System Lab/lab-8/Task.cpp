#include <iostream>
using namespace std;
	struct Node{
		int data;
		Node *left;
		Node *right;
	};
	Node* Creation(int value){
		Node* T = new Node;
		T->data = value;
		T->left=NULL;
		T->right=NULL;
		
		return T;
	}
	Node* findMinimum(Node* current){
		while(current->left !=NULL)
			current = current->left;
		
		return current;
	}
	Node* findMaximum(Node* current){
		while(current->right!=NULL)
			current=current->right;
			
		return current;
	}
	Node* Insertion(Node*& root, int element){
		if(root ==NULL)
			return Creation(element);
		 if(element < root->data)
			root->left=Insertion(root->left, element);
		else if(element > root->data)
			root->right=Insertion(root->right, element);
			return root;
	}
//	void Deletion(Node*& root, int element){
//		if(root==NULL){
//			cout<<"Tree are empty \n";
//			 return ;
//		}
//		if(element< root->left)
//			Deletion(root->left, element);
//		else if(element>root->right)
//			Deletion(root->right, element);
//		else if(root->left == NULL && root->right==NULL){
//			Node* temp = new Node;
//			temp = root;
//			delete[temp];
//			root =NULL;
//		}
//	}

	void InOrderTraversal(Node* node){
		if(node==NULL)
			return;
		InOrderTraversal(node->left);
		cout<<node->data<<" ";
		InOrderTraversal(node->right);		
	}
	void PreOrderTraversal(Node* node){
		if(node==NULL)
			return;
		cout<<node->data<<" ";
		InOrderTraversal(node->left);
		InOrderTraversal(node->right);		
	}



int main(void){
	Node* root = NULL;
	
	root = Insertion(root, 25);
	root =Insertion(root, 10);
	root =Insertion(root, 5);
	root =Insertion(root, 11);
	root =Insertion(root, 30);
	root =Insertion(root, 15);
	root =Insertion(root, 32);
	root =Insertion(root, 10);
	cout<<"Inorder Traverse is : \n";
	InOrderTraversal(root);
	cout<<"\nPreorder Traverse is : \n";
	PreOrderTraversal(root);
	

}