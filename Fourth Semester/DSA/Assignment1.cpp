#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int find){
	if(size ==0 || find<arr[0]) return -1;
	if(find>arr[size-1]) return size;
	
	int left =0, mid, right=size-1;
	while(right-left >1){
		mid=(left+right)/2;
		(find<=arr[mid] ?right:left)=mid;
	}  
	return right;
}
main(){
	int size=5, tofind;
	int array[size]={2, 4, 5, 6, 7};
	cout<<"Which element you find in array : \t{2, 4, 5, 6 7}"<<endl;
	cin>>tofind;
	int result = binarySearch(array, size, tofind);
	(result==-1)
	?cout<<"Element not found \n"
	:cout<<"Element is present at index: "<<result;
}