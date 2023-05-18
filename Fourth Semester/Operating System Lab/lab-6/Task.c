#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
	int pid;
	pid=fork();
	if(pid==0)
		execlp("ls","ls","-l",NULL);
	else
		wait(NULL);

	return 0;
}
