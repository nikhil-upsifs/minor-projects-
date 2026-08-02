#include<iostream>
using namespace std;
class  solution {
    int n,t ;
    int arr[100];
    int arr2[100];
    public:
    void input(){
        cin>>n>>t;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<t;i++){
            cin>>arr2[i];
        }
    }
    void check(){
        for(int i=0;i<n;i++){
            for(int j=0;j<t;j++){
                if(arr[i]==arr2[j] && arr[i]<arr2[j]){
                    cout<< arr[i]<<" ";
                    break;
                }
            }
        }
    }


};
int main (){
    solution s1;
    s1.input();
    s1.check();
}