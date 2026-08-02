#include<iostream>
using namespace std ;
int main (){
	int arr[10]={2,1,-2,0,12,-3,-6,-8,-66,8};
	//whether 1 is present in the array or not ?
	for (int i=0;i<10;i++){
		int m =arr[i];
		if(m==1){
			cout<<"Yes it is Present at "<<i<<" Index !"<<endl;
		}else{
			cout<<"Not Present "<<endl;
		}
	}
}

