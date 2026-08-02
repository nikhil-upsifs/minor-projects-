#include<iostream>
using namespace std;
// unique element finding
int main (){
	int n ;
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
	}
	cout<<""<<ans;
	
	
}
