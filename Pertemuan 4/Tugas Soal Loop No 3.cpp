#include <iostream>
using namespace std;

int main() {
    int I;
    bool Prima = true;

    cout << "Masukkan sebuah bilangan: ";
    cin >> I;

    if (I <= 1) {
        Prima = false;
    } else {
        for (int i = 2; i <= I / 2; ++i) {
            if (I % i == 0) {
                Prima = false;
                break;
            }
        }
    }

    if (Prima) {
        cout << I << " adalah bilangan PRIMA." << endl;
    } else {
        cout << I << " bukan bilangan PRIMA." << endl;
    }

    return 0;
}

