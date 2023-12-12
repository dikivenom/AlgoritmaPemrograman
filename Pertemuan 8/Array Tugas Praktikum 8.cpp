#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int K[3][3];
    
    
   
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Masukkan Data "<< i+1 <<" : [" << i << "][" << j << "]: ";
            cin >> K[i][j];
        }
    }
cout <<endl;
    cout << "HASIL PENJUALAN BARANG" << endl;
    cout << "========================" << endl;
    cout << "No" << " 2001" << " 2002" << " 2003" << endl;
    cout << "========================" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << i + 1 << " ";
       
        for (j = 0; j < 3; j++)
        {
            cout <<"  "<< K[i][j] << " ";
        }
        cout << endl;
    }

    cout << "=======================";

    return 0;
}
