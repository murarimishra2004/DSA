#include<iostream>
using namespace std;

int peakinarr(int arr[] , int size , int key){
	int s=0;
	int e=size-1;
	int mid=(s+e)/2;
	int ans;
	
	while(s<e){
		if(arr[mid]<arr[mid+1]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		return s;
	}	
	
		}
		
	int main(){
	int arr[5]={1,2,3,4,1};
	int ans1=peakinarr(arr , 5 ,3 );
 
	cout<<ans1;
	return 0;
}
