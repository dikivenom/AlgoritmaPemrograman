#include <iostream>
using namespace std;

void ef(string *b){
	
	cout<<"Nama : "<<*b;
	cout<<"Data : "<<b;

}

 int main (){
 	string b;
cout <<"Masukkan Nama : ";
cin>> b;
ef(&b);
}
