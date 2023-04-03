#include <stdio.h>
#include <unistd.h>


int main(void) {
	fork();
	fork();
	printf("Parent Process ID is: %d\n", getppid( )) ;
	
}
