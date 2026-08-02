#include<iostream>
using namespace std ;
int main (){
	int t;
	cin>>t;
	while(t--){
		int p;
		cin>>p;
		
		if(p%9==0){
			cout<<"10"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
