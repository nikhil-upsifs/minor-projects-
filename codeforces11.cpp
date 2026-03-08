
#include <iostream>
using namespace std ;
int main() {
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int arr[n];
        int count=0;
        int count2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int j=0;j<n;j++){
            if(arr[j]==0){
                arr[j]=1;
                count++;
            }
        }
        for(int j =0;j<n;j++){
                if(arr[j]==-1){
                    count2++;
                }
        }
         if(count2%2 !=0){
             count+=2;
         }      
          cout<<""<<count<<endl;   
        }
        return 0;
        
}
