#include<iostream>
using namespace std;
class subtractProductandSum{
    int n ;
    public:
    void get (int t){
        n = t ;
    }
    void calculate(){
        int product =1;
        int sum = 0 ;
        for (int i = n ; i > 0 ; i = i/10){
            int digit = i % 10 ;
            product *= digit ;
            sum += digit ;
        }
        cout << product - sum << endl;
    }
};
int main (){
    subtractProductandSum obj;
    obj.get(234);
    obj.calculate();
    return 0;
}