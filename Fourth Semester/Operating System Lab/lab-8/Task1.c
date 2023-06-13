#include <stdio.h>
#include <pthread.h>

void *ChildThread(void *argument){   
      int i;
      for ( i = 1; i <= 20; ++i ){
           printf(" Child Count - %d\n", i);      
      }
    pthread_exit(NULL);
}
int main(){        
        pthread_t   hThread; 
		int   ret;
        ret=pthread_create(&hThread, NULL, (void *)ChildThread, NULL); /* Create Thread */
        if (ret < 0){
            printf("Thread Creation Failed\n");
			   return 1; 
		}

        pthread_join (hThread, NULL);  /* Parent waits for  */
          printf("Parent is continuing....\n");

return 0;
}
