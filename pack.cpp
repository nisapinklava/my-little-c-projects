#include <iostream>
using namespace std;

//program menentukan bawaan kelompok
int main(){
	int x;
	
	//code
	lagi:
	cout<<"masukkan nomor kelompok anda(1-9)=";
	cin>>x;
	
	//penentuan
	switch(x){
		case 1:
			cout <<"kertas warna 3 lembar dan 3 buah pensil 2b"<<endl;
			break;
		case 2:
			cout <<"tas kecil"<<endl;
			break;
		case 3:
			cout <<"papan tulis"<<endl;
			break;
		case 4:
			cout <<"spidol snowman 2rebuan"<<endl;
			break;
		case 5:
			cout <<"kacamata 2d dan slotip"<<endl;
			break;
		case 6:
			cout <<"gelang"<<endl;
			break;
		case 7:
			cout <<"pensil warna"<<endl;
			break;
		case 8:
			cout <<"penggaris"<<endl;
			break;
		case 9:
			cout <<"power point"<<endl;	
			break;
		default:
			cout<<"hanya kelompok 1-9 saja yang harus membawa barang"<<endl;
	}
	
	//ulang
	char ok;
	cout<<"lagi?(y/t): ";
	cin>>ok;
	
	if(ok=='y'){
		goto lagi;
	}else if(ok=='t'){
		cout<<"gaada cuk.."<<endl;
	};
	
	
	//akhir
	akhir:
	cout<<"oke selamat bekerja!";
	
	return 0;
	cin.get();
}
