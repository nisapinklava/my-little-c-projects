#include <iostream>
using namespace std;

//program menentukan jarak setelah beberapa detik
int main(){

	/*rancangan nya dulu brooo!!!
	
	seseorang mengendarai sepeda motor dengan pola kecepatan:
	detik 1-10= 3m/detik
	berarti 3m x 10 det = 30 m (1)
	detik 11-20 = 4m/detik
	berarti 4m x 10 det= 40 m (2)
	
	lalu  dia sudah naik motor berapa jarak-kah?
	jawab= sejauh ini (1) + (2)= 70m selama 20 detik.
	pertanyaanya kalau 100 detik?
	okee langsung ajaaa...
	
	rancangan gue:
	.
	.
	detik || jarak
	10    ||   30
	20    ||   40
	
	so, relasinya(perbedaanya)= 20;
	darimana? 30-10 dan 40-20.
	............. */
	
	//code
	cout<<"untuk Kangariid di sekolahkoding^^"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"by Annisa Puspitasari"<<endl<<endl<<endl;
	
	
	//deklarasi[1]
	string nama;
	//pendahuluan
	cout<<"namamu siapa? (jangan pakai spasi! boleh titik atau underscore)= ";
	cin>>nama;
	cout<<"namamu tersimpan!"<<endl;
	cout<<"namamu adalah ";
	cout<<nama<<endl;
	
	//deklarasi[2]
	int detik=10, jarak=30;
	//mulai
	cout<<"berapa detik perjalanan kamu? [ke si dia doang yhaa wkwkwk]= ";
	cin>>detik;
	cout<<"detik perjalananmu: ";
	cout<<detik;
	cout<<" detik"<<endl;
	//mulai rumus
	do{
		jarak= detik + 20;
		cout<<"jarak yang ditempuh setelah ";
		cout<<detik;
		cout<<" detik adalah= ";
		cout<<jarak;
		cout<<" meter^^";
		break;
	}while(detik != 0);
	
	cin.get();
	return 0;
}
