#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int input, pid;
		printf("How many processes you want to create ...");
		scanf("%d",&input);
		for(int i=0; i<input;i++){
			pid=fork();
			if(pid==0){
			printf("I'm child and my ID is %d and my PPID is %d \n",getpid(),getppid());
			sleep(30);
			}
			for(int j=0; j<input;j++){
			 wait(NULL);
				printf("Child is Terminated .... \n");
			}
		}
	return 0;
}
