 #include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n";
	cin>>n;
	int i;
	while(i<=n){
		int j=1;
		while(j<=i){
			char ch='A'+i-1;
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
