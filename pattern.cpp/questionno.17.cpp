 #include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n";
	cin>>n;
	int i;
	
	while(i<=n){
		char ch='A'+n-i;
		int j=1;
		while(j<=i){
			cout<<ch;
			ch++;
			j++;
			
		}
		cout<<endl;
		i++;
		
	}
	return 0;
}
