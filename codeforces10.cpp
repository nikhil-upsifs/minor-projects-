#include<iostream>
#include <algorithm> 
using namespace std ;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin >>n;
		string name;
		cin>>name;
		int count =0;
		char ch= name[n-1];
		for(int i =0;i<n;i++){
			if(ch!=name[i]){
				count ++;
			}
		}
		cout<<""<<count<<endl;
	}
}
