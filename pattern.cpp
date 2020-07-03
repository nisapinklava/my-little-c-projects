#include <iostream>
using namespace std;

int main(){
	int n;
	int i;
	int j;
	int k;
	cout<<"masukkan panjang pola: ";
	cin>>n;
	
	cout<< "pola 1\n";
	
	for(i=1;i<= n; i++){
		for(int j=1; j<i; j++){
			cout<<"*";
		}
		for(int k=n;k>= n;k--){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"pola 2\n";
	
	for(i=1;i<= n; i++){
		for(int j=n; j>i; j--){
			cout<<"*";
		}
		for(int k=n;k>= n;k--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cin.get();
	return 0;
}
