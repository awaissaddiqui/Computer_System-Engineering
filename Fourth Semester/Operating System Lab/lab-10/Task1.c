#include <stdio.h>
#include <stdlib.h>
#define rows 5
#define columns 7

void setProcessId(int array[][columns]){
    int i;
    
    for(i=0; i<rows; i++)
        array[i][0]=i;
}
void arrivalTime(int array[][columns]){
    int i, inputAT;
    for(i=0; i<rows; i++){
        printf("Arrival Time for Process %d is = ",i);
        scanf("%d", &inputAT);
        array[i][1]=inputAT;
    } 
}
void busrstTime(int array[][columns]){
    int i, inputBT;
    for(i=0; i<rows; i++){
        printf("Burst Time for Process %d is = ",i);
        scanf("%d", &inputBT);
        array[i][2]=inputBT;
    } 
}
void display(int array[][columns]){
    int i, j;
    //printf("|--PID--|--AT--|--BT--|--ST--|--ET--|--WT--|--TAT--|\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t", array[i][j]);
        }
    printf("\n");
    }
    printf("\n");
}
void swap(int sortArray[][columns], int iTh, int jTh){
	int temp[rows][columns], i,j;
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			temp[i][j]= sortArray[iTh][jTh];
			sortArray[iTh][jTh]=sortArray[i][j];
			sortArray[i][j]=temp[i][j];
		}
	}
}
void sortingOnAT(int array[][columns], int At[]){
		for(int i=0; i<rows; i++){
			for(int j=0; j<rows; j++){
				if(At[i]>At[i+1])
				swap(array,i+1,j);
			}
		}
}

int main(void){

    int array[rows][columns];
    setProcessId(array);
    arrivalTime(array);
    busrstTime(array);
    int AT[rows] , BT[rows];
	for(int i=0; i<rows; i++){
		AT[i] = array[i][1];
	}
	for(int j=0; j<rows; j++){
		BT[j] = array[j][2];
	}
    sortingOnAT(array,AT);
    display(array);
}