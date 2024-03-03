#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i; // berfungsi untuk inisialisasi nilai awal pada perulangan for untuk mengakses index array
    int jumlah; // berfungsi untuk menentukan jumlah data yang akan dimasukan kedalam array. Variabel ini akan menjadi batas kondisi perulangan akan dijalankan.
    int cari, cek = 0; // cari berfungsi untuk menyimpan nilai yang ingin dicari. Nantinya nilai dari variabel ini akan dibandingkan dengan setiap nilai didalam array tersebut.
    // cek berfungsi untuk membuat statement tambahan jika data yang dicari tidak ditemukan. nilai awal dari variabel ini adalah 0 yang berarti tidak ditemukan data yang dicari, namun bila data yang dicari ditemukan maka nilainya adalah 1.
    int Data[50]; // variabel array dengan ukuran 50. jadi kita dapat memasukan jumlah data sebanyak 50 data pada variabel A tersebut.

    // memasukkan jumlah array
    cout << "================039===================\n";
    cout << "PROGRAM SEQUENTIAL SEARCHING \n";
    cout << "================039===================\n\n\n";
    cout << "Masukan Jumlah Data : ";
    cin >> jumlah;
    cout << endl;

// memasukkan nilai array
    for (i = 1; i <= jumlah; i++)
    {
        cout << "Masukan Data Ke-" << i << " : ";
        cin >> Data[i];
    }
    cout << endl;
    // memasukkan nilai yang akan dicari dalam array
    cout << "--------------------------" << endl;
    cout << "Input Bilangan yang dicari : ";
    cin >> cari;
    cout << "--------------------------" << endl;
    cout << endl;

// proses pencarian
    for (i = 0; i <= jumlah; i++)
    {
        // jika nilai yang dicari true dengan isi array
        if (Data[i] == cari)
        {
            cek = 1;
            cout << "================039===================\n";
            cout << "Data Ditemukan Pada Indeks Ke-" << i;
            cout << "\n================039===================\n";
        }
    }
    if (cek == 0)
    {
        // jika nilai yang dicari false dengan isi array
        cout << "================039===================\n";
        cout << "Data tidak ditemukan";
        cout << "\n================039===================\n";
    }
    getch();
}