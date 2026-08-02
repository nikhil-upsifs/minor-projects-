#include<iostream>
using namespace std;
int binary3(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		int mid = s+ (e-s)/2;
		if(arr[mid]<arr[mid+1]){
			s=mid+1;
		}else{
			e=mid;
		}
	}
	return s;
}
int main (){
	int arr[]={0,2,4,7,5,3,1};
	cout<<""<<binary3(arr,7);
	
	return 0;
	
}
