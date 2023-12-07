#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n";
	cin>>n;
	
	int i=1;
	while(i<=n){
		int space=n-i;
		while(space){
			cout<<" ";
			space=space-1;
		}
		
		int j =1;
		while(j<=i){
			cout<<j;
			j++;
		}
		
		j=i-1;
		while(j>=1){
			cout<<j;
			j--;
		}
		cout<<endl;
		i++;
		
	}
	return 0;
}
