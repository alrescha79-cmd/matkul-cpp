#include <iostream>
using namespace std;

int main()
{
	int harga, total, pnmbh;
	char pilihan;
	
	do {
		cout<<"Masukkan Nominal : ";
		cin>>harga;
		total = total + harga;
		cout<<endl;
		
		cout<<"Masukkan Nominal Lagi? (l) yes & (r) no"<<endl;
		cout<<"input : ";
		cin>>pilihan;
		cout<<endl;
		
	}while (pilihan == 'l');
	
	cout<<"Total Pembelian : "<<total;
}