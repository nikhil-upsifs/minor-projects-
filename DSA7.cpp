#include<iostream>
#include<math.h>
class PowerOfTow{
	public:
		bool answer(int n ){
			int ans =1;
	      for(int i=0;i<=30;i++){
	      	if(ans==n){
	      		return true;
			  }
			if(n<INT_MAX){
				ans = ans *2 ;
			}
	      	int p=pow(2,i);
	      	if(p==n){
	      		return true;
			  }
			}
			  return false;
		  }
};
using namespace std ;
int main (){
	PowerOfTow q1;
	int o ;
	cout<<"enter n:"<<endl;
	cin>>o;
	if(q1.answer(o)){
		cout<<"True"<<endl;
	}else{
		cout<<"False"<<endl;
	}
}
