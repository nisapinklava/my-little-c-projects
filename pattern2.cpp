#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"masukkan panjang pola: ";
	cin>>n;
	
	cout<<"pola 3 "<<endl;
	for(int i=1; i<= n; i++){
		for(int j=0; j<n; j++){
		}
		for(int k=n; k>=i; k--){
			cout<<"*";
		}
		cout<<endl;
	}
	cin.get();
	return 0;
}
