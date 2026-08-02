#include<iostream>
using namespace std;
//finding two element of an array which is twice  present in the array
int main (){
    int n ;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements which are twice present in the array are:"<<endl;
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] ){
                count =1;
                break;
            }
        }
        if(count){
            cout<<arr[i];
            count =0;
        }
    }
    return 0 ;
}