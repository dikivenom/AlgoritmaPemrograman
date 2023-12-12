#include <iostream>
using namespace std;
int main(){
	string nama;
	int I,II,III,total;
	cout<<"\nNama Siswa : ";
	getline(cin, nama);
	cout<<"\nNilai Pertandingan I : ";
	cin>>I;
	cout<<"\nNilai Pertandingan II : ";
	cin>>II;
	cout<<"\nNilai Pertandingan III : ";
	cin>>III;
	total=(I+II+III)/3;
	cout<<endl;
	
	cout<<"\n=============================";
	cout<<"\nProgram Hitung Nilai Rata-Rata";
	cout<<"\nNama Siswa : "<<nama;
	cout<<"\nNilai Pertandingan I : "<<I;
	cout<<"\nNilai Pertandingan II : "<<II;
	cout<<"\nNilai Pertandingan III : "<<III;
	cout<<"\nSiswa yang bernama : "<<nama;
	cout<<"\nMemproleh nilai rata-rata : "<<total<<"\ndari hasil perlombaan yang diikutinya"<<endl;
	
	

	if (total >= 85 ){
		cout<<"Hadiah yang didapat adalah Komputer Core i5"<<endl;
	}
	if (total >= 70 && total <85 ){
	cout<<"Hadiah yang didapat adalah Uang Sebesar Rp.2.500.000"<<endl;
	
	}
	else {
		cout<<"Hadiah yang didapat adalah Hiburan"<<endl;
	}

	return 0;
}
