#include <iostream>
#include <string>
using namespace std;

struct Stack {
    string data[4];
    int i, j;
}
 stack;

void push() {
    if (stack.j < 4) {
        stack.j++;
        cout << "Masukkan data : ";
        cin >> stack.data[stack.j];
    } else {
        cout << "Stack Penuh" << endl;
    }
}

void pop() {
    if (stack.j > 0) {
        cout << "Ambil Data : " << stack.data[stack.j] << endl;
        stack.j--;
    } else {
        cout << "Tidak  ada data yang terambil" << endl;
    }
}

void view() {
    if (stack.j > 0) {
        for (int e = stack.j; e >= 1; e--) {
            cout << stack.data[e] << endl;
        }
    } else {
        cout << "Tak ada data tersimpan" << endl;
    }
}

void clear() {
    stack.j = 0;
}

int main() {
    int pilih;
    cout << "stack\n";

    do {
        cout << "\n1. Push\n 2. Pop\n 3. View\n 4. Clear\n 5. Quit\n";
        cout << "Pilih : ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                view();
                break;
            case 4:
                clear();
                break;
            case 5:
                return 0;
            default:
                cout << "Salah Input!\n";
        }
    } while (true);

    return 0;
}
