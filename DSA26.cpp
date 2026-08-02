#include<iostream>
using namespace std ;
int calculate (int arr [],int n ,int k){
	sort (arr.befin(),arr.end());
	int s =0; 
	int max =arr[0] ;
	for(int i =0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	 }
	 int ans =-1;
	int e= max;
	int mid = s+ (e-s)/2
	while (s<=e){
		if(isPossible(arr,n,k)){
			ans= mid;
			s= misd+1;
		}else{
			e = mid -1;
		}
		mid=s+(e-s)/2;
	}
}
int main (){
	
}
