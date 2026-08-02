#include<iostream>
#include<algorithm>
using namespace std ;
int main (){
	int n ;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	/*for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]<arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}*/
	int i=0,j=0,k=n-1;
	while(j<=k){
		if(arr[j]==0){
			swap(arr[i],arr[j]);
			i++;
			j++;
		}else if(arr[j]==1){
			j++;
		}else{
			swap(arr[j],arr[k]);
			k--;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
