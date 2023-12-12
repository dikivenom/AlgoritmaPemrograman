#include <iostream>
#include <conio.h>

using namespace std;

void persegi() {
    int p, l;
    float rumus;
    char pilihan;

    do {
        cout << "============ PERSEGI ================" << endl;
        cout << " Masukkan Panjang : ";
        cin >> p;
        cout << " Masukkan lebar: ";
        cin >> l;
        rumus = p * l;
        cout << " Hasil : " << rumus << endl;

        cout << "Ingin menghitung lagi? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');
}

void lingkaran() {
    int r;
    float phi = 3.14, sum;
    char pilihan;

    do {
        cout << "============== LINGKARAN ===============" << endl;
        cout << "Input panjang jari-jari    : ";
        cin >> r;
        sum = phi * (r * r);
        cout << "Hasil : " << sum << endl;

        cout << "Ingin menghitung lagi? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');
}

void tabung() {
    float phi = 3.14, z, t, v;
    char pilihan;

    do {
        cout << "================= TABUNG =================" << endl;
        cout << "Masukkan Jari-Jari Tabung : ";
        cin >> z;
        cout << "Masukkan Tinggi Tabung : ";
        cin >> t;
        v = phi * z * z * t;
        cout << "\nVolumenya adalah : " << v << endl;

        cout << "Ingin menghitung lagi? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');
}

int main() {
    char pilihan;

    do {
        int pilih;

        cout << "================ MENU ================" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Lingkaran" << endl;
        cout << "3. Tabung" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                persegi();
                break;
            case 2:
                lingkaran();
                break;
            case 3:
                tabung();
                break;
            case 4:
                cout << "SELESAI" << endl;
                break;
            default:
                cout << "TIDAK VALID" << endl;
        }

        cout << "Ingin memilih menu lagi? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}

