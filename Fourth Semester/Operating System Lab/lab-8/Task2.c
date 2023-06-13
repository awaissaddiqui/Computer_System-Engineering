#include <stdio.h>
#include <pthread.h>

void ChildThread (int argument){ 
      int i; 
	printf("This is child thread \n");
     pthread_exit(NULL);
      /* No pthread_exit function */
}

int main(void)
{ 
   pthread_t  hThread;

   pthread_create(&hThread, NULL,(void*) ChildThread, NULL);

   pthread_join (hThread, NULL);
   printf ("Master thread is continuing....\n");        return 0;
}
