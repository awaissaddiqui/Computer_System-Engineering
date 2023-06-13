#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;
#define NUM_THREADS 5

void *myData(void *data){
	cout<<"My name is Awais Saddiqui\n";
	cout<<"Registration Number : 21pwcse1993\n";
	int totalThread=5;
	cout<<"Total Thread : "<<totalThread<<endl;
	pthread_exit(NULL);
}
main(){
	int rc;
	pthread_t threads[NUM_THREADS];
	for(int i=0; i<NUM_THREADS; i++){
		rc=pthread_create(&threads[i],NULL,myData,(void *)i);
		if(rc){
			cout<<"Error in threads ...."<<rc<<endl;
			exit(-1);
		}
	}
// wait for threads
	for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_join(threads[i], NULL);
    }
}
