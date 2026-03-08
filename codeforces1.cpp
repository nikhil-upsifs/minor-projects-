#include<iostream>
#include <algorithm> 
//program to check whether girlfriend name is correct or not 
using namespace std ;
int main (){
	int n,q;
	string s;
	string t;
	
	cin >>q;
	while(q--){
		
		cin>>n;
		cin>>s>>t;
		if(s.size()!= t.size()){
			cout<<"No "<<endl;
			continue;
		}
		for (int i = 0; i < n-1; i++) {
           for (int j = 0; j < n-i-1; j++) {
                if (s[j] > s[j+1]) {
                swap(s[j], s[j+1]);
                }
            }
         }
         for (int i = 0; i < n-1; i++) {
           for (int j = 0; j < n-i-1; j++) {
                if (t[j] > t[j+1]) {
                swap(t[j],t[j+1]);
                }
            }
         }
         
         	if(s==t){
         		cout<<"YES "<<endl;
			 }else{
			 	cout<<"NO"<<endl;
			 }
			 
		 
    }
    return 0;
	
}
