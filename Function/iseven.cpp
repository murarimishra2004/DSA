#include<iostream>
using namespace std;

int iseven(int num){
     if(num%2==0){
     	cout<<"The given number is even";
	 }	
	 else {
	 	cout<<"Non even";
	 }

	}
	
int main(){
	int a;
	cout<<"Enter the number"<<endl;
	cin>>a;
	
	iseven(a);
	return 0;
}
