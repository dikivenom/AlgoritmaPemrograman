#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

tambah (int *c, int*d);

main (){
int a,b;
a = 4;
b = 6;
cout <<"Nilai Sebelum pemanggilan Fungsi";
cout <<"\na ="<<a<<"b="<<b;	 

tambah (&a,&b);
cout<<endl;
cout <<"\nNilai Setelah Pemanggilan Fungsi";
cout << "\na="<<a<<"b="<<b;
getch();

}
tambah (int *c, int *d);
{
*c+=7;
*d+=5;
cout << endl;
cout <<"\nNilai di Akhir Fungsi tambah ()";
cout <<"\nc="<<*c<<"*d="<<*d;
}
