#include <iostream>
#include <string>
using namespace std;
int main(){
    int p,l,t,v; // Deklarasi variabel panjang,lebar,tinggi,volume

    cout<<"PROGRAM C++ MENGHTUNG VOLUME BALOK"<<endl;
    cout<<"----------------------------------"<<endl;
    //Menginput nilai panjang,lebar dan tinggi
    cout<<"Masukan Panjang : "; 
    cin>>p;
    cout<<"Masukan Lebar   : ";
    cin>>l;
    cout<<"Masukan Tinggi  : ";
    cin>>t;
    cout<<endl;
    
    v=p*l*t; //Rumus untuk menghitung volume balok
    
    cout<<"Volume Balok    = "<<v<<" "<<"3"; //Tampilkan hasil
    return 0;

}
