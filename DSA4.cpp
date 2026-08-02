#include<iostream>
using namespace std;
int main (){
	int n ;
	cout<<"enter n :"<<endl;
	cin>>n;
	int count =0;
	int product=1;
	int sum=0;
	int ans=0;
	while(n>0){
		int m =n%10;
		sum= m+sum;
		product=product*m;
		count++;
		n=n/10;
	}
	cout<<"No of digits are: "<<count<<endl;
	cout<<"Sum of digits : "<<sum <<endl;
	cout<<"Product of digit : "<<product<<endl;
	cout<<"Product - sum = "<<product-sum<<endl;
	return 0;
}
