#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int totalArguments, char *argumentValue[]){
	int pid, i;
	for(i=1; i<totalArguments; i++){
		pid=fork();
		if(pid==0){
			printf("pid is %d and ppid %d\n", getpid(),getppid());
			execlp(argumentValue[i],argumentValue[i], NULL);
			printf("Hello after exec\n");
			break;
		}
	}
		if(pid>0){
			for(i =0; i<totalArguments; i++)
				 wait(NULL);
		}
return 0;
}
