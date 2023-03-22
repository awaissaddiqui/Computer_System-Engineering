#include <stdio.h>
int* Sort(int arr[], int arraySize){
    int temp;
    for (int i = 0; i < arraySize; i++)
        for(int j = 0; j < arraySize-1; j++)
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    return arr;
}
void display(int arr[], int ofLength){
    for(int i = 0; i < ofLength; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void){
    int size;
    printf("Enter size of an array? ");
    scanf("%d", &size);
    int array[size];
	printf("Enter %d Elements in array: \n");
    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);
   
    int sortedArray = Sort(array, size);
    printf("\nThe sorted array is: \n");
    display(sortedArray, size);

    return 0;
}