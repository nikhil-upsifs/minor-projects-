#include<iostream>
using namespace std ;
void SwapAlternate(int arr[], int n ){
	for(int i =0;i<n-1;i+=2){
		swap(arr[i],arr[i+1]);
	}
	cout<<"Array after alternate swap: "<<endl;
	 for(int i =0;i<n;i++){
	 	cout<<" "<<arr[i];
	 }
}
int main (){
	int n ;
	cout<<"Enter the size of arr: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	SwapAlternate(arr,n);
	return 0;
	
}
