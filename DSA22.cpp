 #include<iostream>
 using namespace std ;
 int FirstOcc(int arr[],int size, int key ){
	int start = 0;
	int ending=size-1;
	int ans=-1;
	while(start<=ending){
		int mid = start + (ending- start)/2;
		if (arr[mid]==key){
			ans=mid;
			ending = mid-1;
		}else if(arr[mid]<key){
			start =mid+1;
		}else if (arr[mid]>key){
			ending=mid-1;
		}
	}
	return ans;		
}
 int LastOcc(int arr[],int size, int key ){
	int start = 0; 
	int ending=size-1;
	int ans=-1;
	while(start<=ending){
		int mid = start + (ending- start)/2;
		if (arr[mid]==key){
			ans=mid;
			start = mid+1;
		}else if(arr[mid]<key){
			start =mid+1;
		}else if (arr[mid]>key){
			ending=mid-1;
		}
	}
	return ans;		
}
int main (){
	int even[6] ={0,0,2,2,3,3};
	int odd[7]={4,4,5,5,8,8,8};
	cout<<"leftmost:"<<FirstOcc(even,6,3)<<endl;
	cout<<"rightmost:"<<LastOcc(even,6,3)<<endl;
	
}
