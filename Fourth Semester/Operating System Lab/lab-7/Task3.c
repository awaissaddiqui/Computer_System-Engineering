#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int totalArg, char *Argumentvalue[]){
	int i, pid;
	pid=fork();
	if(pid==0){
		printf("pid is %d and ppid is %d\n",getpid(),getppid());
		execlp("./Task.o","Task.o", Argumentvalue[1],Argumentvalue[2],Argumentvalue[3],NULL);
	}
	if(pid>0)
		wait(NULL);

	return 0;
}
