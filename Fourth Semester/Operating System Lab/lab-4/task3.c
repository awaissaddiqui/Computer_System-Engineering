#include <stdio.h>
#include <stdlib.h>
int factorial(int *n){
	int fact=1;
	for(int i=1; i<=*n; i++){
		fact=fact*i;
}
	return fact;
	}
int main(void){
int num;
printf("Enter a number  ");
scanf("%d", &num);

int result = factorial(&num);
printf("Factorial is = %d\n",result);
}
