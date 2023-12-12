#include <iostream>
using namespace std;

int main()
{
    int I,j,baris;
    cout<<"Input Angka\n";
    cin>>baris;
   
for(I=1; I<=baris; I++){
    for(j=I; j<=baris; j++){
     cout<<"*";
  }

  for(j=1; j<=(2*I-2); j++){
     cout<<" ";
  }
  for(j=I; j<=baris; j++){
     cout<<"*";
  }
  cout<<"\n";
}
 
for(I=1; I<=baris; I++){
    for(j=1; j<=I; j++){
     cout<<"*";
  }

  for(j=(2*I-2); j<(2*baris-2); j++){
     cout<<" ";
  }
  for(j=1; j<=I; j++){
     cout<<"*";
  }
  cout<<"\n";
  }
  
  return 0;
  }
