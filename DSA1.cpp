#include<iostream>
using namespace std ;
class Pattern {
	int n ;
	public:
		void get(int t){
			n=t;
		}
		void print(){
			cout<<"Pattern 1"<<endl;
			int m =1;
			for(int i =1;i<=n;i++){
				for(int j=1;j<=n;j++){
					cout<<m;
					m++;
				}
				cout<<endl;
			}
		}
		void print2(){
			cout<<"Pattern 2"<<endl;
			for(int i =1;i<=n;i++){
				for(int j=1;j<=i;j++){
					cout<<i;
				}
				cout<<endl;
			}
		}
		void print3(){
			cout<<"Pattern 3"<<endl;
			for (int i =1;i<=n;i++){
				for(int j=1;j<=i;j++){
					cout<<i+j-1;
				}
				cout<<endl;
			}
		}
		void print4(){
			cout<<"Pattern 4"<<endl;
			for (int i =1;i<=n;i++){
				int value=i;
				for(int j=1;j<=i;j++){
					cout<<i-j+1;
				}
				cout<<endl;
			}
		}
		void print_stars1(){
			cout<<"Pattern 5"<<endl;
			for (int i=1;i<=n;i++){
				for(int j =1;j<=i;j++){
					cout<<"* ";
				}
				cout<<endl;
			}
		}
		void print_stars2(){
			cout<<"Pattern 6"<<endl;
			for (int i=1;i<=n;i++){
				for(int j =i;j<=n;j++){
					cout<<"* ";
				}
				cout<<endl;
			}
		}
		void print_stars3(){
			cout<<"Diamond A"<<endl;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n-i;j++){
					cout<<" ";
				}
				for(int k =1;k<=(2*i-1);k++){
						cout<<'A';
					}
				cout<<endl;
			}
			for(int i=n-1;i>=1;i--){
				for(int j=1;j<=n-i;j++){
					cout<<" ";
				}
				for(int k =1;k<=(2*i-1);k++){
						cout<<'A';
					}
				cout<<endl;
			}
		}
		void print_char(){
			cout<<"Pattern 7"<<endl;
			for (int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					char ch ='A'+j-1;
					cout<<ch;
				}
				cout<<endl;
			}
		}
			void print_char2(){
		    	cout<<"Pattern 8"<<endl;
			char ch ='A';
			for (int i=1;i<=n;i++){
			    for(int j=1;j<=n;j++){
					cout<<ch++;
				}
				cout<<endl;
			}
		}
};
int main (){
	Pattern p1,p2;
	p1.get(3);
	p1.print();
	p1.print2();
	p1.print3();
	p1.print4();
	p2.get(4);
	p2.print_stars1();
	p2.print_stars2();
	p2.print_stars3();
	p2.print_char();
	p2.print_char2();
	return 0;
}
