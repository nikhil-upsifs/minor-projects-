#include<iostream>
using namespace std ;
int binarySearch(int arr[],int size, int key ){
	int start = 0;
	int ending=size-1;
	while(start<=ending){
		int mid = start + (ending- start)/2;
		if (arr[mid]==key){
			return mid;
		}
		if(arr[mid]<key){
			start =mid+1;
		}else{
			ending=mid-1;
		}
	}
	return -1;
		
}
int main (){
	int even[6] ={1,2,4,5,6,8};
	int odd[5]={4,3,6,12,45};
	int key1 =8;
	int key2=45;
	cout<<""<<binarySearch(even,6,8)<<endl;
	cout<<""<<binarySearch(odd,5,45);
	
}
