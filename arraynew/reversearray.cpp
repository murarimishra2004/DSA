#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[] , int size ){
	int start=0;
	int end=size-1;
	
	while(start<=end){
	
	
	swap(arr[start] , arr[end]);
	start++;
	end--;
}
	
}

 

int main(){
	
	int arr[]={1 , 34 , 45 ,67 ,23 };
	reverse(arr , sizeof(arr)/sizeof(int));
	for(int i=0 ; i<sizeof(arr)/sizeof(int) ; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
	
}
