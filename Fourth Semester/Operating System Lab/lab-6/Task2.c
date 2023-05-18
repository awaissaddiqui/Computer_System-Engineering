#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int  maximum(int arr[],int size){
	int temp=arr[0];
	for(int i=0; i<size; i++){
		if(arr[i]>temp)
			temp = arr[i];
	}
			return temp;
}
int main(){
	int array[5]={4,12,55,3,40};
	int pid;
	int result=maximum(array, 5);
	pid = fork();
	if(pid==0)
		printf("Maximum is %d \n",result);
	else
		wait(NULL);
	
	
return 0;
}
