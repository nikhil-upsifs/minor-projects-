#include<iostream>
using namespace std ;
int main (){
	int t;
	cin>>t;
	while(t--){
		int p;
		cin>>p;
		int arr[p];
		for(int i =0;i<p;i++){
			cin >>arr[i];
		}
		bool found =false;
		for(int i=0;i<p;i++){
			
				if(arr[i]==67){
					found= true;
					break;
				}
			}
		if (found){
			cout<<"yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		}
	}

