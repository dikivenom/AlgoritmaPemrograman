#include <iostream>
#include <conio.h>
using namespace std;


void tambah (int m, int n);
main (){
	int a,b;
	a = 5;
	b = 9;
	
	cout << "Nilai Sebelum Fungsi Digunakan ";
	cout << "\na="<<a<<" b="<<b;
	tambah (a,b);
	cout <<"\nNilai Setelah Fungsi Digunakan ";
cout << "\na="<<a<<" b="<<b;
	getche();
}


void tambah (int m, int n){
	m+=5;
	n+=7;
	cout <<"\n\nNilai di dalam Fungsi Tambah ()";
	cout <<"\nm="<<m<<" n="<<n;
	cout <<endl;
}
