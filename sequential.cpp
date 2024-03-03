#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main () {
    int a[50];
    int i, n, kesamaan;

    cout << "\n\n====================TA====================\n";
    cout << "\tPROGRAM SEQUENTIAL SEARCH\n";
    cout << "====================TA====================\n\n\n";
    // input jumlah data dan disimpan pada variabel n
    cout << "\n++++++++++++++++++++++++++++\n" << endl;
    cout << " Masukkan jumlah data : ";
    cin >> n;
    cout << "\nJumlah Data " << n;
    cout << "\n++++++++++++++++++++++++++++\n" << endl;
    cout << endl;

    // input bilangan kedalam array
    for (i = 0; i < n; i++) {
        cout << "Masukkan Bilangan Ke-" << i << " : ";
        cin >> a[i];
        cout << endl;
    }

    // input bilangan yg dicari
    cout << "\n-------------------------------\n" << endl;
    cout << "Input Bilangan yang dicari : ";
    cin >> n;
    cout << "\n-------------------------------" << endl;
    cout << endl;

    i = 0; //kondisi awal 0 (false)
    kesamaan = 0;

    // pengecekan
    while (i<=10)
    {
        if (a[i] == n)
        {
            kesamaan++;
            cout << endl;
            cout << "Data Ditemukan Pada Indeks Ke- " << i;
        }
        i++;
    }

    // jika bilangan yg sama lebih dari satu maka true
    cout << "\n\nbilangan yang sama : " << kesamaan;
    if (kesamaan > 0)
    {
        cout << " true";
    } else
    {
        cout << " false";
    } 
    

    // mencari bilangan yg sama
    if (kesamaan > 0)
    {
        cout << "\n\n====================TA====================\n";
        cout << "\n Bilangan Ditemukan\n\n";
        cout << " Terdapat " << kesamaan << " Bilangan yang sama";
        cout << "\n\n====================TA====================\n\n\n\n";
    }else
    {
        cout << "\n\n====================TA====================\n";
        cout << "\n Bilangan Tidak Ditemukan ";
        cout << "\n\n====================TA====================\n\n\n\n";
    }
    
}