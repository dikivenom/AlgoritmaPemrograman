#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    float a, r,L;
    cout<<"Soal no 1."<<endl;
    cout<<"Menghitung Luas Lingkaran "<<endl;
    cout<< "==========================" <<endl;
    cout<<"Diketahui Rumus : "
    cout<<"Masukan Jari-Jari : ";
    cin>>a;
    r=3.14;
    L=a*a*r;
    cout<<"Luas lingkaran : "<<L;
    
    float b, PI,Hasil;
    cout<<"\n \nSoal no 2.";
    cout<<"\nMenghitung Luas Lingkaran " <<endl;
    cout<< "=========================" <<endl;
    cout<<"Masukan Jari-Jari : ";
    cin>>b;
    PI=3.14;
    Hasil=b*b*PI;
    cout<<"Luas lingkaran : "<<Hasil;
    
    float jarijari, tinggi, volume;
    cout<<"\n \nSoal no 3. ";
    cout<<"\nMenghitung Volume Tabung " <<endl;
    cout<< "=========================" <<endl;
    cout<<"Masukan Jari-Jari Tabung : ";
    cin>> jarijari;
    cout<<"Masukan Tinggi : ";
    cin>>tinggi;
  	cout << endl;
  	volume = (22.0/7.0) * tinggi * jarijari * jarijari;
  	cout << "Volume tabung = " << volume << endl;
  	
  	float jari2, tingginya, volumenya;
    cout<<"\n \nSoal no 4. ";
    cout<<"\nMenghitung Volume Tabung " <<endl;
    cout<< "=========================" <<endl;
    cout<<"Masukan Jari-Jari Tabung : ";
    cin>> jari2;
    cout<<"Masukan Tinggi : ";
    cin>>tingginya;
  	cout << endl;
  	volumenya = (22.0/7.0) * tingginya * jari2 * jari2;
  	cout << "Volume tabung = " << volumenya << endl;
    
    
}
