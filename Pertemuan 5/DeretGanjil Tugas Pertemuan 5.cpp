#include <iostream>
using namespace std;
int main() {
    int I, C = 1;
    cout << C;
    for (I = 3; I <= 20; I += 2) {
        C += I;
        cout << "+" << I;
    }

    cout << "=" << C;


    return 0;
}

