#include <stdio.h>
#include <stdlib.h>
int main(int totalArguments, char *argumentValue[]){
	int sum=0;
	for(int i=1; i<totalArguments; i++){
		sum+=atoi(argumentValue[i]);
	}
	printf("Sum of Total Arguments is %d \n", sum);
return 0;
}
