#include<iostream>
using namespace std ;
class checksquare{
	int a,b,c,d;
	public:
		void check (void){
			cin >>a>>b>>c>>d;
			if (a==b&&b==c&&c==d&&d==a){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
		}
};
int main (){
	int a,b,c,d,t;
	cin>>t;
	checksquare w;
	while (t--){
		w.check();
	}  
	return 0;
}
