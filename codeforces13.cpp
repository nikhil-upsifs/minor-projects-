#include<iostream>
using namespace std ;
int main (){
	//4x+2y=n
	int t ;
	cin>>t;
	while(t--){
		int p;
		cin>>p;
		if(p%2==0){
			cout<<(p/4)+1<<""<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
