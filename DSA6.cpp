#include<iostream>
using namespace std ;
int main (){
	int n ;
	cin >>n;
	
	if (n==0){
		cout<< "1"<<endl;
	}
	int t=n; // as after while loop n become 0
	int mask =0;
	while(n!=0){
		mask= (mask<<1) | 1; // mask=0 means 00000 bit ko 1 bit left shit krke 1 ke sath OR operation
		n=n>>1; //n ke binary form ko 1 bit right shift ..aisa krne se n ki value km ho rhi hai 
	}
	int ans = (~t)&mask;//last me AND kar diya t aur mask ka taki jo complemented bit the woh and hoke 0 bn jaye aur decimal me output aaye 
	cout<<ans;
	
	return 0;
}
