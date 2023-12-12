#include <iostream>
using namespace std;
void penjumlahan (int &total)
{
	total=total+1;
}

int main()
{
	int hitung =20;
	int result = 0;
	penjumlahan(hitung);
	cout<<"---Pass by Reference--\n";
	cout << "total=";
	cout <<hitung;
	return 0;
}
