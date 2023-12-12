#include <iostream>
#define max 5
using namespace std;
struct TumpukanBuku{
	int top;
	int antrian[max];
}perpus;

void inisialisasi(){
	perpus.top = -1;
}

bool kondisiKosong(){
	return perpus.top == -1;	
}

bool kondisiPenuh (){
	return perpus.top == max -1l;
}

void inputData(){
	if (kondisiPenuh()){
		cout <<"\nAntrian penuh"<<endl;
	}
	else {
		perpus.top++
		cout<<"\nMasukan Antrian = "; cin >> perpus.antrian[perpus.top];
		cout << "Antrian "<< perpus.antrian[perpus.top]<< " Telah Masuk Ke Tumpukan Buku";
		
	}
}
void hapusData(){
	if (kondisiKosong()){
		cout << "\nAntrian kosong\n"<<endl;
	}
	else{
		cout <<"\nAntrian "<<perpus.antrian[perpus.top]<<" Telah Di Hapus "<<endl;
		perpus.top++;
	}
}
void tampilData(){
	if(kondisiKosong()){
		cout <<"Antrian kosong";
	}
	else {
		cout << "\nAntrian : ";
		for (int i = perpus.top; i >= 0; i--)
		cout << perpus.antrian[i]<<((i==0) ? "" : ",");
	}
}


int main (){
	int pilihan;
	inisialisasi();
	do {
		tampilData();
		cout << "\n1. Masukkan Data\n"<<"2. Hapus Data\n"<<"3. Keluar\n"<<"Masukan Pilihan : ";
		cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				inputData();
				break;
			case 2:
				hapusData();
				break;
				default:
					cout <<"Pilihan tidak tersedia "<<endl;
					break;
		}
	}while (pilihan!=3);
}



////Implementasi Program Linked Stack
//#include <iostream>
//#include <cstdlib.h>
//
//using namespace std;
//
//struct node {
//    int info;
//    node *next;
//};
//
//node *create_new_node(int);
//void push(node *&);
//void display(node *);
//
//int main() {
//    char ch = 'y';
//    top = NULL;
//
//    while (ch == 'y' || ch == 'Y') {
//        cout << "\nAntrian tumpukan saat ini :\n";
//        display(top);
//        cout << "\nIngin menambah antrian ? (y/n)..";
//        cin >> ch;
//    }
//
//    cout << "Tekan tombol apa saja untuk keluar..\n";
//    getchar(); 
//
//    exit(1);
//}
//
//node *create_new_node(int x) {
//    ptr = new node;
//    ptr->info = x;
//    ptr->next = NULL;
//    return ptr;
//}
//
//void push(node *&n) {
//    if (top == NULL) {
//        top = n;
//    } else {
//        save = top;
//        top = n;
//        n->next = save;
//    }
//}
//
//void display(node *n) {
//    while (n != NULL) {
//        cout << n->info << " -> ";
//        n = n->next;
//    }
//    cout << "!!\n";
//}
//
//
//
//
//
//
//







