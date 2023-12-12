#include <iostream>
using namespace std;

int main() {
    int I, II;
    cout << "Input Angka: ";
    cin >> I;

    cout << "Perulangan Keatas " << I << endl;
    for (II = 1; II <= I; II++) {
        cout << II << endl;
    }

    cout << "Perulangan Kebawah " << I << endl;
    for (II = I; II >= 1; --II) {
        cout << II << endl;
    }

    cout << "Bilangan Genap" << endl;
    for (II = 2; II <= I; II += 2) {
        cout << II << endl;
    }
    
    cout << "Bilangan Ganjil" << endl;
    for (II = 1; II <= I; II += 2) {
        cout << II << endl;
    }

    return 0;
}

