#include<iostream>
using namespace std ;
int main (){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		int r;
    	if(n==2){
    		cout<<"2\n";
		}else if(n==3){
			cout<<"3\n";
		}else if(n>=4){
			cout<<""<<n%2<<endl;
		}
		
	    
   }
   
	return 0;
}
