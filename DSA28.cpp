#include<iostream>
using namespace std ;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int Index;
	cout<<"Enter index from which array to reverse:"<<endl;
	cin>>Index;
	cout<<"Required Reversed array:"<<endl;
	int i=Index;
	int j=n-1;
	int remain = n-Index-1;
	while (i<Index+remain/2){
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
