#include<iostream>
using namespace std;

void getinput(int arr[] ,int n ){
	cout<<"Enter the array"<<endl;
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
}

bool lineasearch (int arr[] , int size , int key){
	for(int i=0 ; i <size ; i++){
		if(arr[i]==key){
			return true;
		}
	}
	return false;
}

int main(){
	
	int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int key;
	cout<<"Enter the key which you want to search"<<endl;
	cin>>key;
	
	//Code for lineasearch
	
	int arr[100];
	getinput(arr, size);
	bool found=lineasearch(arr, size , key);
	if(found){
		cout<<"Key is present"<<endl;
	}
	else{
		cout<<"Key is not present"<<endl;
	}
	return 0;
}
