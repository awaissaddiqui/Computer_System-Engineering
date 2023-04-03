#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){
	int pid;
	printf("Parent id is : %d and my parent is: %d \n",getpid(), getppid());
	for(int i=1; i<7; i++){
		pid = fork();
		if(pid>0){
			break;
        }
	}
        for(int j=0; j<7; j++){
	       	if(pid==0){
         int  ret= wait(NULL);
            printf("Child :  %d and parent is : %d\n", getpid(),getppid());        
	}
	}
	
}
