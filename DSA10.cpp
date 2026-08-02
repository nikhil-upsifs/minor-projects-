#include<iostream>
using namespace std ;
//reversing an array 
class reverse{
	int n;
	int arr[100];
	public:
		void get(int t){
			n=t;
			for(int i=0;i<n;i++){
				cout<<"Enter the arr "<<i<<" : "<<endl;
				cin>>arr[i];
			}
		}
		void check(){
			for(int i=0;i<n/2;i++){
				int temp;
				temp=arr[i];
				arr[i]=arr[n-i-1];
				arr[n-i-1]=temp;
			}
			cout<<"Array after reversing :"<<endl;
		
			for(int i =0;i<n;i++){
				cout<<" "<<arr[i];
			}
		}
		
};
int main (){
	reverse r1;
	int m;
	cout<<"Enter arr size :"<<endl;
	cin>>m;
	r1.get(m);
	r1.check();
	return 0;
}
