#include <iostream>
using namespace std;
int main() {
    int I, C = 2;
    cout << C;
    for (I = 4; I <= 20; I += 2) {
        C += I;
        cout << "+" << I;
    }

    cout << "=" << C;


    return 0;
}

