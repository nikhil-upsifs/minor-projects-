#include<iostream>
using namespace std ;
int main (){
	int n ;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Reversed array:"<<endl;
	int i=0;
	int j=n-1;
	while(i<n/2){
		int temp;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
