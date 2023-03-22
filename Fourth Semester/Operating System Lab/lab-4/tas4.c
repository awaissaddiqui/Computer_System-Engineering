#include <stdio.h>
#include <stdlib.h>
int product(int arr[2][2]){
	int product=1;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){

		product =product*arr[i][j];
		}
	}
	return product;
}
int main(void){
	int arr[2][2]={{2,3},{3,4}};
	int result = product(arr);
	printf("Product is %d\n",result);

}
