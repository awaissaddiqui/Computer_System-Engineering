// Sorting of array;

#include <iostream>
using namespace std;

void sort(int &w, int &x, int &y, int &z){
	int arr[4]={w , x, y, z}, temp;
	for(int i=0; i<4; i++)
	for(int j=0; j<i; j++)
	if(arr[i]<arr[j]){
		temp=arr[i];// swaping 
		arr[i]=arr[j];
		arr[j]=temp;
	}
	w=arr[0];
	x=arr[1];
	y=arr[2];
	z=arr[3];
}
main(){
	int a=2, b=9, c=5,d=6;
	cout<<a<<" , "<<b<<" ,"<<c<<" , "<<d<<endl;
	sort(a,b,c,d);
	cout<<"After sorting "<<a<<" , "<<b<<" ,"<<c<<" , "<<d;
}
