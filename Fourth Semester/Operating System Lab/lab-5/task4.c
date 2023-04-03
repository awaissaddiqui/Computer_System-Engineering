#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(void){
	int pid;
	printf("Parent id is : %d\n",getpid());
	for(int i=1; i<=8; i++){
		pid = fork();
		if(pid==0){
			break;
        }
	}
        for(int j=0; j<8; j++){
	       	if(pid>0){
         int  ret= wait(NULL);
            printf("Child  %d and parent is %d\n", ret,getpid());        
	}
	}
	
}
