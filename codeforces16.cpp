#include<iostream>
using namespace std ;
class codeforce{
	int t ;
	int  p ;
	public:
		
};
int main (){
	int t ;
	cin>>t;
	while(t--){
		int  n;
		cin>>n;
		int maxVal=0;
		int maxCount=0;
		for(int i =0;i<n;i++){
			int p;
			cin>>p;
			if(maxVal<p){
				maxVal=p;
				maxCount=1;
			}else if (maxVal==p){
				maxCount++;
			}
		}
		cout<<" "<<maxCount<<endl;
	}
}
