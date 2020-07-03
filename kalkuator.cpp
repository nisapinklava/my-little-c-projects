#include <iostream>
using namespace std;

//program calcultor milik Annisa
int main(){
	float a,b,hasil;
	char aritmatika;
	
	cout<<"SELAMAT DATANG DI KALKULATOR ANNISA PUSPITASARI"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Selamat mencoba^^\n"<<endl;
	
	//code	
	cout<<"masukkan angka pertama anda=";
	cin>>a;
	cout<<"masukkan operator anda=";
	cin>>aritmatika;
	cout<<"masukkan angka kedua anda=";
	cin>>b;
	
	//hasil
	cout<<"hasil kalkulator kamu ";
	cout<< a<<aritmatika<<b<<'=';
	
	
	
	//user
	switch(aritmatika){
		case '+':
			hasil= a + b;break;
		case '-':
			hasil= a-b;break;
		case 'x':
			hasil=a * b;break;
		case '/':
			hasil=a/b;break;
		default:
			cout<<"operator kamu salah tuh..coba benerin deh!jangan ngaco!emang gue bikin nih program buat maen2??!kagak kan!! yaudah turutin napaa!!";
	}
	
	//hasil
	cout<<hasil<<endl;
	return 0;
}
