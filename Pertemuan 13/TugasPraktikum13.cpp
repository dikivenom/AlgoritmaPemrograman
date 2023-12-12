#include <iostream>
#include <string>
#include <conio.h>
#define max 5

using namespace std;

struct stack {
    int data[max];
    int top;
};

stack tumpukan;

int main() {
    int pil, databaru, j;
    tumpukan.top = -1;

    do {
        cout << "1. Push (Masukan Data)" << endl;
        cout << "2. Pop (Hapus Data)" << endl;
        cout << "3. Display (Tampilkan Data)" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukan Pilihan: ";
        cin >> pil;

        switch (pil) {
            case 1:
                if (tumpukan.top == max - 1)
                    cout << endl << "PENUH WOY!!!" << endl;
                else {
                    cout << "MASUKAN DATA: ";
                    cin >> databaru;
                    tumpukan.top++;
                    tumpukan.data[tumpukan.top] = databaru;
                }
                break;

            case 2:
                if (tumpukan.top == -1)
                    cout << "TUMPUKAN KOSONG" << endl;
                else {
                    cout << "DATA YANG AKAN DIHAPUS = " << tumpukan.data[tumpukan.top] << endl;
                    tumpukan.top--;
                }
                break;

            case 3:
                if (tumpukan.top == -1)
                    cout << "TUMPUKAN KOSONG" << endl;
                else {
                    cout << "DATA : "<<endl;
                    for (j = tumpukan.top; j >= 0; j--) {
                        cout << tumpukan.data[j] << endl;
                    }
                    cout << endl;
                }
                break;

            default:
                if (pil != 5)
                    cout << "TIDAK ADA DALAM PILIHAN" << endl;
                break;
        }

    } while (pil != 5);

    return 0;
}
