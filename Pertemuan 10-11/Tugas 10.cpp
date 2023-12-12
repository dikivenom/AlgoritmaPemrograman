#include <iostream>
using namespace std;

int rekursif(int x, int y);

int main(){
	
	int x,y;
	
	cout<<"MENGHITUNG PANGKAT DENGAN REKURSIF"<<endl;
	cout<<endl;
	cout<<"Masukan Nilai X = ";
	cin>>x;
	
	cout<<"Masukan Nilai Y = ";
	cin>>y;
	cout<<endl;
	cout<<x<<" Dipangkatkan "<<y<<" = "<<rekursif(x,y)<<endl;
}


int rekursif(int x, int y){
	 if (y==0)
		 return 1 ;
		 else 
                 return x * rekursif(x,y-1); 
} 
