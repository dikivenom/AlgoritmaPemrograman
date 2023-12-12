#include <iostream>

int main() {
    using namespace std;

    int bilangan;
    cout << "Input bilangan: ";
    cin >> bilangan;

    int* A = &bilangan;

    int sisaBagi = *A % 2;

    if (sisaBagi == 0) {
        cout << " Itu bilangan Genap" << endl;
    } else {
        cout << " Itu bilangan Ganjil" << endl;
    }

    return 0;
}

