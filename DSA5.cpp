#include<iostream>
#include<math.h>
using namespace std ;
int main (){
	 int n ;
	 cout<<"Enter a nume to reverse:"<<endl;
	 cin>>n;
	 int sum =0;
	 int t=n;
	 while(n>0){
	 	int m = n%10;
	 	sum =sum*10+m;
	 	n=n/10;
	 }
	 cout<<"Reveresed Number :"<<sum<<endl;
	 if(sum==t){
	 	cout<<"Palindrome Number "<<endl;
	 }else{
	 	cout<<"Not Palindrome"<<endl;
	 }
	 return 0;
}
