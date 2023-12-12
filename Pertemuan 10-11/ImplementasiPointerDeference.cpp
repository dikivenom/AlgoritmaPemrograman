#include <iostream>
using namespace std;
//int main (){
//	int ilham,amir,*raka;
//	ilham = 75;
//	amir = ilham;
//	raka = &ilham;
//	cout<<"Nilai ILHAM = "<<ilham<<endl;
//	cout<<"Nilai AMIR = "<<amir<<endl;
//	cout<<"Nilai RAKA = "<<raka<<endl;
//	getchar();
//}

//==========================================================
//int main (){
//
//	int ilham,*raka,rafli;
//	ilham = 75;
//	raka = &ilham;
//	rafli = &raka;
//	cout<<"Nilai ILHAM = "<<ilham<<endl;
//	cout<<"Nilai RAKA = "<<raka<<endl;
//	cout<<"Nilai RAFLI = "<<rafli<<endl;
//	getchar();
//}
//==========================================================
//int main (){
//	int yopri = 93;
//	int *hadi;
//	
//	cout <<"Nilai awal yopri = "<<yopri<<endl;
//	hadi = &yopri;
//	cout<<"Nilai hadi sekarang = ";
//	cout<<*hadi<<endl;
//	*hadi = 50;
//	cout << " Nilai hadi sekarang = ";
//	cout<<hadi<<endl;
//	getchar();
//}
//============================================================
//int main (){
//	int ilham;
//	int *raka;
//	int **amir;
//	
//	ilham = 75;
//	cout<<"Nilai ILHAM = "<<ilham<<endl;
//	raka = &ilham;
//	amir = &raka;
//	
//	cout << "Nilai RAKA Hasil Mengakses ILHAM = ";
//	cout<<*raka<<endl;
//	cout<<"Nilai AMIR Hasil Mengakses ILHAM = ";
//	cout<<**amir<<endl;
//	getchar();
//}

//int main (){
//	int i;
//	int nilai[5];
//	int *ptrnilai;
//	ptrnilai = nilai;
//	for (i=1; i<=5; i++)
//	{
//		cout<<"Masukkan Nilai Elemen ke- "<< i <<"=";
//		cin>>nilai[i];
//	}
//	cout<<endl;
//	cout<<"Hasil Pengaksesan Elemen Array Lewat";
//	cout<<"Pointer";
//	cout<<endl<<endl;
//	for(i=1; i<=5; i++)
//	{
//		cout<<"Elemen "<<i<<". Nilai "<<nilai[i];
//		cout<<", Menempati Alamat Memori = ";
//		cout<<&ptrnilai[i];
//		cout<<endl;
//	}
//	getchar();
//}

//===========================================
//Implementasi Pointer pada String
int main (){
	char band_metal[] = "SEPULTRA";
	char *band_punk = "RANCID";
	cout <<"Nama Band Metal = "<<band_metal<<endl;
	cout<<"Nama Band Punk = "<<band_punk;
	band_punk+=3; //Menambah nilai pointer/penunjuk
	cout << "Nama Band Metal = "<<band_metal<<endl;
	cout<<"Nama Band Punk = "<<band_punk;
	getchar();n
}
