#include<iostream>
using namespace std;

int factorial(int num1){
	int fact=1;
	for(int i=1 ; i<=num1 ; i++){
		fact=fact*i;
	}
	return fact;
	
}

int nCr(int n , int r){
	
	int num = factorial(n);
	int deno = factorial(r) * factorial(n-r);
	return num/deno;
}

int main(){
	int n , r;
	cout<<"Enter the value for n and r";
	cin>>n>>r;
	
	cout<<"nCr of n and r is" << nCr(n , r);
	return 0;
}
