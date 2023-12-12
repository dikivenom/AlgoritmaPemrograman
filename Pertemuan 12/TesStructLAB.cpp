#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;    
};

float hitungRataRataIPK(Mahasiswa mahasiswa[], int jumlah) {
    float total = 0;
    for (int i = 0; i < jumlah; ++i) {
        total += mahasiswa[i].ipk;
    }
    return total / jumlah;
}

int main() {
    const int jumlahMahasiswa = 3;

    Mahasiswa daftarMahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "Masukan nama mahasiswa " << i + 1 << ": ";
        cin >> daftarMahasiswa[i].nama;
        cout << "Masukan umur mahasiswa " << i + 1 << ": ";
        cin >> daftarMahasiswa[i].umur;
        cout << "Masukan IPK mahasiswa " << i + 1 << ": ";
        cin >> daftarMahasiswa[i].ipk;
    }

    std::cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "Mahasiswa " << i + 1 << "\n";
        cout << " Nama: " << daftarMahasiswa[i].nama << "\n";
        cout << " Umur: " << daftarMahasiswa[i].umur << "\n";
        cout << " IPK: " << daftarMahasiswa[i].ipk << "\n";
    }

    float rataRata = hitungRataRataIPK(daftarMahasiswa, jumlahMahasiswa);
    cout << "\nRata-rata IPK: " << rataRata << "\n\n";

    return 0;
}
