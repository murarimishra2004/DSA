#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number between 1 to 4 "<<endl;
	cin>>num;
	
	switch(num){
		case 1: cout<<"First number";
		break;
		case 2: cout<<"Second number";
		break;
		case 3: cout<<"Third Number";
		break;
		case 4: cout<<"fourth Number";
		break;
		default: cout<<"Number is greater than the limit";
		
	}
	return 0;
}
