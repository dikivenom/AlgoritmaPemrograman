#include <iostream>
#include <conio.h> 

using namespace std;

int main() {
    int a, b;
    char lagi;

    atas: 
    cout << "Masukkan bilangan : ";
    cin >> a; 

    b = a % 2;

    printf("Nilai %d%%2 adalah %d", a, b);

    cout << "\n\nIngin Hitung Lagi [Y/T]: ";
    lagi = getch();

    if (lagi == 'Y' || lagi == 'y') {
        goto atas;
        
    }

    return 0;
}

