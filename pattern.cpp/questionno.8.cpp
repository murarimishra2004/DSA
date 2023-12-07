#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		int toprint=i;
		while(j<=i){
			cout<<toprint;
			toprint++;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

