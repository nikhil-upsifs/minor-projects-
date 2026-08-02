#include<iostream>
using namespace std ;
class SumOfElement{
	int n ;
	int arr[100];
	public:
		void get (int t ){
			n=t;
    	 for(int i=0;i<n;i++){
		    cout<<"Enter "<<i<<" Element : "<<endl;
	    	cin>>arr[i];
          }
		}
		void calculate (){
			int sum =0;
			for(int i=0;i<n;i++){
				sum =sum+arr[i];
			}
			cout<<"Sum of all element is :"<<sum<<endl;
		}
};
int main (){
	int m;
	cout<<"Enter Size of array :"<<endl;
	cin>>m;
	
	SumOfElement s1;
	s1.get(m);
	s1.calculate();
	return 0;
}
