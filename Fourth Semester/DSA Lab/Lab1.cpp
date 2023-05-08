/*#include <iostream>
using namespace std;

int main(){
    int lengthOfArray;
    cout << "Enter length of the array? ";
    cin >> lengthOfArray;

    int arr[lengthOfArray];
    int sum = 0;

    cout << "Enter "<< lengthOfArray << "elements in array.\n";

    for(int i = 0; i < lengthOfArray; i++){
        cout<<"Enter a number in array at "<< i << ": ";
        cin >> *arr;

        sum += *arr;
    }

    int average = sum / lengthOfArray;

    cout << "The average is: "<< average;

    return 0;
}*/
#include <iostream>
#include <cstdlib>
#include <cstring>

int* resizeArray(int *arr, int sizeOfArr) {
    int* newArr = new int[sizeOfArr * 2];

    // Copy contents of old array to new array
    memcpy(newArr, arr, sizeOfArr * sizeof(int));
    for (int i = sizeOfArr; i < sizeOfArr * 2; i++) {
        newArr[i] = -1;
    }
    delete[] arr;
    return newArr;
}

int main() {
    int arr[3] = {1, 2, 3};
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);

    int* newArr = resizeArray(arr, sizeOfArr);

    for (int i = 0; i < sizeOfArr * 2; i++) {
        std::cout << newArr[i] << " ";
    }

    delete[] newArr;

    return 0;
}