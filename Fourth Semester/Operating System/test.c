/*#include <stdio.h>
#include <stdlib.h>
int factorial(int n){
	int fact=1;
	for(int i=1; i<=n; i++){
		fact=fact*i;
}
	return fact;
	}
int main(void){
int num;
printf("Enter a number  ");
scanf("%d", &num);
int result = factorial(num);
printf("Factorial is = %d\n",result);
}*/

#include <stdio.h>
main(){
struct student{
char name[20];
int id;
};
struct student s1, s2, s3;
 
printf("Please enter the student name, and id\n");
scanf("%s %d", s1.name, s1.id);
scanf("%s %d", s2.name, s2.id);
scanf("%s %d", s3.name,s3.id);
 
printf("\nThe student details");
printf("\n%s \t\t%d",s1.name,s1.id);
printf("\n%s \t\t%d",s2.name,s2.id);
printf("\n%s \t\t%d",s3.name,s3.id);
 
}

