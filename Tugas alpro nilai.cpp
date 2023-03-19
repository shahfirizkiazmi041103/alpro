#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
	double NilaiUjian;
	char skor;
	
	cout<<"Masukkan Nilai ujian : ";
	cin>>NilaiUjian;
	
	if(NilaiUjian >= 90)
	skor= 'A';
	else
	
	if(NilaiUjian >= 70)
	skor= 'B';
	else
	
	if(NilaiUjian >= 60)
	skor= 'c';
	else
	
	if(NilaiUjian >= 50)
	skor= 'D';
	else
	skor= 'E';
	
	cout <<"skor : " <<skor<<endl;
	getch () ;
}
	

