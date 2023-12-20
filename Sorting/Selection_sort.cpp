#include<iostream>
using namespace std;

int slection_sort(int arr[] , int n){
	
	int minindex;
	for(int i=0 ; i<n-1 ; i++){
		minindex=i;
		for(int j=i+1 ; j<n ; j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		swap(arr[i] ,arr[minindex]);
	}
}

int main(){
	int arr[]={2,1,3,4,6,3,5,9};
	slection_sort(arr , 8);
	
	for(int i=0 ; i<8 ; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
