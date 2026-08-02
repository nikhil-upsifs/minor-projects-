#include<iostream>
using namespace std;
int Binary_search(int n){
	int s=0;
	int e =n;
	int ans =-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(mid*mid > n){
			e=mid-1;
		}
		if(mid*mid<n){
			ans=mid;
			s=mid+1;
		}
		if(mid*mid==n){
			return mid;
		}
	}
	return ans ;
}
int main (){
	int n ;
	cin>>n;
	// finding square root
	cout<<" "<<Binary_search(n);
}
