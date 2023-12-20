#include<iostream>
using namespace std;

int bubble_sort(int arr[] , int n){
	
	for(int i=1 ; i<n ; i++){
		//for n-1 round 
		for(int j=0 ; j<n-i ; j++){
			//process element till n-i th index
			if(arr[j]>arr[j+1]){
				swap(arr[j] , arr[j+1]) ;
			}
		}
	}
}

int main(){
	int arr[]={2,1,3,4,6,3,5,9};
	bubble_sort(arr , 8);
	
	for(int i=0 ; i<8 ; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
