#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

     int i=1;
     while(i<=n){
     	//print space
		 int space=i-1; 
     	while(space){
     	cout<<" ";
		 space=space-1;	
		 }
		 
		 
     	//print number 
     	int j=1;
     	while(j<=n-i+1){
     		cout<<i;
     		j++;
		 }
		 cout<<endl;
		 i++;
	 }
	 return 0;
}
