#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

int main()
{
    int C, J, ulang;
    char jenis[6] = {'D', 'd', 'P', 'p', 'S', 's'}, *ket[6];
    long jumlahpotongan[6], jumlahharga[6] = {0}, satuan[6] = {2500, 2000, 1500};
    long jumlahbayar[6] = {0}, pajak[6], total[6];

pesan:
  
    cout << "\tGEROBAK FRIED CHICKEN\n";
    cout << "\t-----------------------------------------\n";
    cout << "\tKode Jenis Harga\n";
    cout << "\t-----------------------------------------\n";
    cout << "\t[D] Dada  Rp.2500\n";
    cout << "\t[P] Paha  Rp.2000\n";
    cout << "\t[S] Sayap Rp.1500\n\n";
    cout << "\t-----------------------------------------\n\n";
    cout << "\tBanyak Jenis:";
    cin >> C;
    ulang = 0;
    if (C <= 0)
    {
        cout << "\n\tTidak boleh kosong";
        goto akhir;
    }
    else
    {
        for (J = 1; J <= C; J++)
        {
            cout << "\tJenis Ke-" << J;
            cout << "\n\tJenis Potong[D,P,S]:";

            cin >> jenis[J];
            cout << "\tBanyak Potongan:";
            cin >> jumlahpotongan[J];
            cout << "\t------------------------------------\n";

            if (jenis[J] == 'D' || jenis[J] == 'd')
            {
                ket[J] = "Dada";
                satuan[J] = 2500;
            }
            else if (jenis[J] == 'P' || jenis[J] == 'p')
            {
                ket[J] = "paha";
                satuan[J] = 2000;
            }
            else if (jenis[J] == 'S' || jenis[J] == 's')
            {
                ket[J] = "Sayap";
                satuan[J] = 1500;
            }
            else
            {
                cout << "\nAnda Salah Memasukan Kode Jenis Potongan";
                satuan[J] = 0;
            }

            jumlahharga[J] = satuan[J] * jumlahpotongan[J];
            jumlahbayar[C] = jumlahbayar[C] + satuan[J] * jumlahpotongan[J];

            if (jumlahbayar[C] == 0)
            {
                pajak[C] = 0;
                total[C] = 0;
            }
            else
            {
                pajak[C] = jumlahbayar[C] * 0.1;
                total[C] = jumlahbayar[C] + pajak[C];
            }
        }
    }
    cout << "\n\n\tGEROBAK FRIED CHICKEN\n";
    cout << "---------------------------------------------------\n";
    cout << "No.| Jenis  | Harga  | Banyak  | Jumlah\n";
    cout << " | Potong  | Satuan  | Beli  |Harga\n";
    cout << "===================================================\n";

    for (J = 1; J <= C; ++J)
    {
        cout << " " << J << "|" << ket[J] << "  |" << satuan[J];
        cout << "  |Rp." << jumlahpotongan[J] << "  |Rp." << jumlahharga[J] << endl;
    }
    cout << "\t\t\tJumlah Bayar Rp." << jumlahbayar[C] << endl;
    cout << "\t\tPajak 10% Rp." << pajak[C] << endl;
    cout << "\t\t\tTotal Bayar Rp." << total[C];
    cout << "\n\n\t\tTERIMA KASIH ";
akhir:

    return 0;
}

