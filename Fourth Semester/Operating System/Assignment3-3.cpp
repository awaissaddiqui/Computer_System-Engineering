#include <iostream>
#include <cstdlib>
#include <pthread.h>
using namespace std;
#define NUM_THREADS 5
struct thread_data {
 int thread_id;
 char *message;
};
void *PrintHello(void *threadarg) {
 struct thread_data *my_data;
 my_data = (struct thread_data *) threadarg;
 cout << "Thread ID : " << my_data->thread_id ;
 cout << " Message : " << my_data->message << endl;
 pthread_exit(NULL);
}
int main () {
 pthread_t threads[NUM_THREADS];
 struct thread_data td[NUM_THREADS];
 int rc;
 int i;
		 for( i = 0; i < NUM_THREADS; i++ ) {
			 cout <<"main() : creating thread, " << i << endl;
			 td[i].thread_id = i;
			 	// Ask for the message from the user
        cout << "Enter message for Thread " << i << ": ";
        string userMessage;
        getline(cin, userMessage);

        // Allocate memory for the message and copy the user input
        td[i].message = new char[userMessage.length() + 1];
        strcpy(td[i].message, userMessage.c_str());
        
			 rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&td[i]);
		 
			 if (rc) {
			 cout << "Error:unable to create thread," << rc << endl;
			 exit(-1);
			 }
		 }
 pthread_exit(NULL);
}
