#include<iostream>
using namespace std ;
//unique number of outcomes
bool compareCount(int arr2[],int n ){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr2[i]==arr2[j]){
				return true ;
			}
		}
	}
	return false;
}
int main (){
	int n ;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr2[n];
	for(int i =0;i<n;i++){
		int count =0;
		bool alreadycounted=false;
		for(int k=0;k<i;k++){
			if(arr[i]==arr[k]){
				alreadycounted=true;
				break;
			}
		}
		if(!alreadycounted){
	    	for(int j=0;j<n;j++){
			  if( arr[i]==arr[j]){
				count++;
		   	    }
		    }
	    	arr2[i]=count;
	      }
     }
	cout<<"Count array: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr2[i];
	}
	
   compareCount(arr2,n);
   return 0;
	
}
