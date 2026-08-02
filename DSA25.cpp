#include<iostream>
using namespace std ;
bool isPossible(int n,int m,int arr[],int mid){
	int student=1;
	int pageSum=0;
	for(int i=0;i<n;i++){
		if(pageSum+arr[i]<=mid){
			pageSum =pageSum+arr[i];
		}else{
			student++;
			if(student >m || arr[i]>mid){
				return false;
			}
			pageSum=arr[i];
		}
	}
	return true;
}
int calculate (int n,int arr[],int m){
	int sum =0;
	for(int i=0;i<n;i++){
		sum =sum + arr[i];
	}
	int s=0;
	int e=sum ;
	int ans =-1;
	int mid = s+(e-s)/2;
	while(s<=e){
		 if(isPossible(n,m,arr,mid)){
		 	ans=mid;
		 	e=mid-1;
		 }else{ 
		 	s= mid+1;
		 }
		 mid = s+(e-s)/2;
	}
	return ans;
}
int main (){
	int n ;
	cin>>n;
	int m;
	cin>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<" "<<calculate(n,arr,m);
	return 0;
}
