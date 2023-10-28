#include <stdio.h>
#include <stdlib.h>
static int num;
static int num2;

void fun()
{
     num++;
     num2++;
}
int main()
{
     printf("\n%d", num);
     printf("\n%d", num2);
     fun();
     printf("\nAfter calling fun():");
     printf("\n%d\n", num);
     printf("\n%d\n", num2);

     return 0;
}