#include<iostream>
using namespace std ;
int main (){
	int t ;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		int temp;
		temp=n%3;
		if(temp==0){
			cout<<"0"<<endl;
		}else{
			cout<<3-temp<<endl;
		}
	}
	return 0;
}
