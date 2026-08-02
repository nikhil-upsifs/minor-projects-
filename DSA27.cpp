#include<iostream>
using namespace std ;
bool Ispossible(int arr[],int n ,int mid,int k){
	int painter_count=1;
	int sum_Array=0;
	for(int i=0;i<n;i++){
		if(sum_Array+arr[i]<=mid){
			sum_Array=sum_Array+arr[i];
		}else {
			painter_count++;
			if(painter_count>k||arr[i]>mid){
			return false;
		}
		sum_Array=arr[i];
		}
		
	}
	return true;
}
int calculate (int arr[],int n,int k){
	int s =0;
	int sum =0;
	for(int i=0;i<n;i++){
		sum =sum+arr[i];
	}
	int e=sum;
	int ans=-1;
	
	while(s<=e){
		int mid= s+(e-s)/2;
		if(Ispossible(arr,n,mid,k)){
			ans=mid;
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
	return ans;
}
int main (){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<" "<<calculate(arr,n,k);
	return 0;
}
