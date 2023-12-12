#include <iostream>
using namespace std;

struct mhs {
    char nama[20], nim[10], matkul[15];
    int sks;
};

mhs bayar[2];

int main() {
    int bts, var, tetap;

    for (int i = 0; i < 2; i++) {
        // Input data
        cout << "\n\n----------------------------\n";
        cout << "\nNama Mahasiswa = ";
        cin >> bayar[i].nama;
        cout << "\nNIM = ";
        cin >> bayar[i].nim;
        cout << "\nMata Kuliah = ";
        cin >> bayar[i].matkul;
        cout << "\nJumlah SKS = ";
        cin >> bayar[i].sks;

  
        if (bayar[i].sks == 0) {
            tetap = 250000;
            var = bayar[i].sks*250000; 
        } else if (bayar[i].sks == 2) {
            tetap = 300000;
            var = bayar[i].sks*300000; 
        }

       
        cout << "SPP Tetap = " << tetap << endl;
        cout << "SPP Variabel = " << var << endl;
    }

  
}

