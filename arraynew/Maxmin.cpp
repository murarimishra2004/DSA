#include<iostream>
using namespace std;

int getmax(int arr[] , int size){
	int max= INT_MIN;
	for(int i=0 ; i<size ; i++){
		
//		max=max(max,arr[i]); Direct formula
	
	if(arr[i] > max){
		max=arr[i];
	}
	
}
return max;
}

int getmin(int arr[] , int size){
	int min=INT_MAX;
	
	for(int i=0 ; i<size ; i++){
		//		min=min(min,arr[i]); Direct formula
	
	if(arr[i] < min){
		min=arr[i];
	}
	return min;
}
}


int main(){
	int size;
	cout<<"Enter the total number you want to give"<<endl;
	cin>>size;
	
	int arr[100];
	
	cout<<"Enter the numbers "<<endl;
	for(int i=0; i<size ; i++){
		cin>>arr[i];
	}
	
	
	cout<<"Maximum Value is" << getmax(arr , size)<<endl;
	cout<<"Minimum value is" << getmin(arr , size);
	
	return 0;
	
}
