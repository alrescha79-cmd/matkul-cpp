#include <iostream>
#include <cmath>

using namespace std;


/*
Nama = Anggun Caksono
NPM = 1412210039
Angkatan = 2021-C
*/

int main()
{
    int n, a[10], i;

    cout << "============================================" << endl;
    cout << "1. Desimal ke Biner\n";
    cout << "2. Desimal ke Oktal\n";
    cout << "3. Desimal ke Heksadesimal\n";
    cout << "============================================\n" << endl;
    cout << "\nMasukkan Pilihan : ";
    cin >> n;
    switch (n)
    {

//pilihan pertama
    case 1:
        cout << "============================================" << endl;
        cout << "##  Program C++ Konversi Desimal ke Biner ##" << endl;
        cout << "============================================" << endl;
        cout << endl;

        cout << "Input angka desimal : ";
        cin >> n;

        for (i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }

        cout << "Angka binernya adalah: ";

        for (i = i - 1; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;

        return 0;
        break;

//pilhan ke 2
    case 2:
        cout << "============================================" << endl;
        cout << "##  Program C++ Konversi Desimal ke Oktal ##" << endl;
        cout << "============================================" << endl;
        cout << endl;
        cout << "Input angka desimal : ";
        cin >> n;

        for (i = 0; n > 0; i++)
        {
            a[i] = n % 8;
            n = n / 8;
        }

        cout << "Angka oktalnya adalah: ";

        for (i = i - 1; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;

        return 0;
        break;

//pilihan ke 3
    case 3:
        cout << "============================================" << endl;
        cout << "##  Program C++ Konversi Desimal ke Heksadesimal ##" << endl;
        cout << "============================================" << endl;
        cout << endl;
        cout << "Input angka desimal : ";
        cin >> n;

        for (i = 0; n > 0; i++)
        {
            a[i] = n % 16;
            n = n / 16;
        }

        cout << "Angka heksadesimalnya adalah: ";

        for (i = i - 1; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;

        return 0;
        break;
        break;
    default:
        cout << "Invalid number" << endl;
        break;
    }
    return 0;
}