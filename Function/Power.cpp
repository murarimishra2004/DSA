#include<iostream>
using namespace std;

int power(int a , int b){
	
	int ans=1;
	if(b==0){
	return 1;}
	
	for(int i=1 ; i<=b ; i++){
		ans=ans*a;
	}
	return ans;
}

int main(){
	int n,m;
	cout<<"Enter the value of a and b"<<endl;
	cin>>n>>m;
	
	cout<<"Power of a raised to the power b is" << power(n,m)<<endl;
	return 0;
}
