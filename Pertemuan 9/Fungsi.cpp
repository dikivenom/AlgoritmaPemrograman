#include <iostream>
using namespace std;


string siswa(string nama, string kelas){
	return (nama+ " adalah mahasiswa kelas "+ kelas);
	
}

int main (){
	string nama , kelas ;
	cout << "nama : "; getline (cin,nama);
	cout << "kelas : "; getline (cin,kelas);
	cout << siswa (nama,kelas);]
}
