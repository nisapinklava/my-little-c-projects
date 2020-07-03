#include <iostream>
using namespace std;

//program menentukan lulus atau tidak
int main(){
	int a;
	
	cout<< "masukkan nilai anda =";
	cin>>a;
	
	//pernyataan apabila nilainya dibawah kkm
	if (a<75){
		cout<<"anda harus belajar lagi satu tahun kedepan!! sayang sekali anda tidak lulus ujian ini. \n ente mesti sabar"<<endl;
	}
	
	//pernyataan apabila nilainya se kkm
	if(a==75){
		cout<<"anda beruntung! hampir saja anda tidak lulus. selamat!!! anda berhasil lulus!! walau sebenarnya masih dalam nilai rata2"<<endl;
	}
	//pernyataan apabila diats kkm
	if(a>75){
		cout<<"mantap broo!!! keren loo!! cerdas juga yaak whahahahaa Alhamdulillah broo! bersyukur lo okeeeyy!!"<<endl;
	}
	//pernyataan apabila nilainya 100
	if(a==100){
		string b;
		cout<<"anda akan menjadi sang juara dimasa depan!! aamiin.."<<endl;
		cout<<"siapa nama anda si cerdas? =";
		cin>>b;
		cout<<"oke namamu bagus! ";	
	}
	
	cin.get();
	return 0;
	
}
