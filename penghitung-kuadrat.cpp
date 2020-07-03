#include <iostream>
using namespace std;


int kuadrat(int x){
	int y;
	y=x*x;
	return y;
};
int main(){
	int input,hasil;
	cout << "masukkan input anda: ";
	cin>>input;
	hasil =  kuadrat(input);
	cout << "kuadrat dari " << input << "adalah " << hasil;
	
	return 0;
	cin.get();
}
