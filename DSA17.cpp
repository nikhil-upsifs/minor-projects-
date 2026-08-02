#include<iostream>
using namespace std;
int main (){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s ;
    cin>>s;
    for(int i=0;i<n;i++){
        int sum ;
        for(int j=i+1;j<n;j++){
            sum = arr[i]+arr[j];
            if(sum==s){
                cout<<"Pair found: "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
}
