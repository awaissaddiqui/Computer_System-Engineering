#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


struct Node* insert(struct Node* node, int value) {
    if (node == NULL) {
        return createNode(value);
    }

    if (value < node->data) {
        node->left = insert(node->left, value);
    } else if (value > node->data) {
        node->right = insert(node->right, value);
    }

    return node;
}

// Function to perform an in-order traversal of the BST
void inorderTraversal(struct Node* node) {
    if (node != NULL) {
        inorderTraversal(node->left);
        printf("%d ", node->data);
        inorderTraversal(node->right);
    }
}

// Structure for passing arguments to the threaded function
struct ThreadArgs {
    struct Node* root;
    int value;
};


void* threadedInsert(void* arg) {
	//type casting to struct ThreadArgs*
    struct ThreadArgs* args = (struct ThreadArgs*)arg;
    args->root = insert(args->root, args->value);
    pthread_exit(NULL);
}

int main() {
    struct Node* root = NULL;
   
struct ThreadArgs args[2]; 
    args[0].root = NULL;
    args[0].value = 5;
    args[1].root = NULL;
    args[1].value = 10;

    // Creating threads
    pthread_t threads[2]; 
    	int i;
	for (i = 0; i < 2; i++) {
     int rc= pthread_create(&threads[i], NULL, threadedInsert, (void*)&args[i]);
        if(rc){
    	printf("Error from pthread_create %d",rc);
    	exit(-1);
    }
    }

    
    int j;
    printf("********* Operating System Project*********\n");
    printf("---------Multithreading in Binary Search Tree--------\n\n");
	for (j = 0; j < 2; j++) {
        pthread_join(threads[j], NULL);
    }

    root = args[0].root;

    printf("In-order traversal of BST: ");
    inorderTraversal(root);
    printf("\n");
    
    return 0;
}

