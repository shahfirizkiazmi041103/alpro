#include <iostream>

using namespace std;

int main() {

int jumlah, i;

string nama[50], nim[10], hobi[50];

cout<<"Program Data Mahasiswa"<<endl;

cout<<"=======================\n"<<endl;

cout<<"Input Jumlah Data Mahasiswa : ";cin>>jumlah;

for(i = 1; i <= jumlah; i++) {

     cout<<"Data "<<i<<endl;

     cout<<"Nama : ";cin>>nama[i];

     cout<<"NIM : ";cin>>nim[i];

     cout<<"Hobi : ";cin>>hobi[i];

}

cout<<"\n\t\tDaftar Data Mahasiswa"<<endl;

cout<<"================================================="<<endl;

cout<<"No\tNama\tNim\t\tHobi\t"<<endl;

cout<<"================================================="<<endl;

for(i = 1; i <= jumlah; i++) {

     cout<<i<<"\t"<<nama[i]<<"\t"<<nim[i]<<"\t"<<hobi[i]<<""<<endl;

}

cout<<"================================================="<<endl;

return 0;

}
