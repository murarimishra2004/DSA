#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
	for(int i=0 ; i<size ; i++){	
	cout<<arr[i]<<" ";
	 }
}

int binarysearch(int arr[], int size , int key){
	int s=0;
	int e=size;
	int mid=s+(e-s)/2;
	
	while(s<=e){	
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
		s=mid+1;
	}
	
	else{
		e=mid-1;
	}
	mid=s+(e-s)/2;;
	

	}
	return -1;
	
}

int main(){
	
	int length;
	int key;
	cout<<"Enter the length of the array"<<endl;
	cin>>length;
	int arr[length];
	
	cout<<"Enter the value of the array"<<endl;
	for(int i=0;i<length ; i++){
		cin>>arr[i];
		cout<<endl;
	}
	
	cout<<"Enter the key"<<endl;
	cin>>key;
	
	int ans=binarysearch(arr , length , key);
	cout<<"The index of the enetered key in the array is"<<ans;
	
	
	return 0;

}
