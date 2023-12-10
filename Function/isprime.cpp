#include<iostream>
using namespace std;

bool isprime (int num){
	
	for(int i=2 ; i<= num ; i++){
		if (num%i==0){
		 return 0;
		}
		else{
			return 1;
		}
	}
}

int main(){
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	
	cout<<isprime(a);
	return 0;
}
