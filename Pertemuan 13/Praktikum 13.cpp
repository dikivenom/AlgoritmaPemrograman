#include <iostream>
using namespace std;
class Node {
	public:
		int value;
		Node* next;
};

int main (){
	Node*next;
};
int main (){
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	one = new Node ();
	two = new Node ();
	three = new Node ();
	one ->value = 1;
	two ->value = 2;
	three ->value = 3;
	one->next = two;
	two->next = three;
	three->next = NULL;
	head = one;
	while (head != NULL){
		cout << head ->value;
		head = head->next;
	}
	
}
/////////////////////////////////////////////////

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
	return perpus.top == max -1l
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
















