#include <iostream>
using namespace std;

int main() {
   
    int baris = 3;
    int kolom = 3;

    // Matriks pertama
    int matriks1[3][3];
    
    // Memasukkan nilai matriks pertama
    cout << "Masukkan nilai matriks pertama:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Baris " << i + 1 << ", Kolom " << j + 1 << ": ";
            cin >> matriks1[i][j];
        }
    }

    // Matriks kedua
    int matriks2[3][3];
    
    // Memasukkan nilai matriks kedua
    cout << "Masukkan nilai matriks kedua:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Baris " << i + 1 << ", Kolom " << j + 1 << ": ";
            cin >> matriks2[i][j];
        }
    }

    // Matriks penjumlahan
    int hasil[3][3];

    // Melakukan penjumlahan matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    // Menampilkan matriks penjumlahan
    cout << "Matriks Penjumlahan:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << "\n";
    }

    // Matriks pengurangan
    int hasil_pengurangan[3][3];

    // Melakukan pengurangan matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil_pengurangan[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }

    // Menampilkan matriks pengurangan
    cout << "Matriks Pengurangan:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << hasil_pengurangan[i][j] << " ";
        }
        cout << "\n";
    }

    // Matriks perkalian
    int hasil_perkalian[3][3];

    // Melakukan perkalian matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil_perkalian[i][j] = 0;
            for (int k = 0; k < kolom; k++) {
                hasil_perkalian[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    // Menampilkan matriks perkalian
    cout << "Matriks Perkalian:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << hasil_perkalian[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

