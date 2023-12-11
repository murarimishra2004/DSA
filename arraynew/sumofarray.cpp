#include<iostream>
using namespace std;

void getinput(int arr[] ,int n ){
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
}


int printsum(int arr[] ,int n ){
	int sum=0;
		for(int i=0 ; i<n ; i++){
		sum=sum+arr[i];
	}
	
	return sum;
	
}

int main(){
	int size;
	 
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int arr[100];
	getinput(arr , size);
	int sums=printsum(arr , size);
	cout<<"Sum of the array is"<<sums;
 
	return 0;
	
}
