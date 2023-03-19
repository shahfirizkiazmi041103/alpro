#include <iostream>
using namespace std;
int main()
{
                int Hari;
                cout<<"=========="<<endl;
                cout<<"1. Senin"<<endl;
                cout<<"2. Selasa"<<endl;
                cout<<"3. Rabu"<<endl;
                cout<<"4. Kamis"<<endl;
                cout<<"5. Jum'at"<<endl;
                cout<<"6. Sabtu"<<endl;
                cout<<"7. Minggu"<<endl;
                cout<<"=========="<<endl;
                cout<<endl;
                cout<<"Masukan Hari Ini : "; cin>>Hari;
                switch (Hari)
                {
                                case 1 : cout<<"Hari ini Senin Besok Adalah Hari Selasa"<<endl;
                                break;
                                case 2 : cout<<"Hari Ini Selasa Besok Adalah hari Rabu"<<endl;
                                break;
                                case 3 : cout<<"Hari ini Rabu Besok Adalah Hari Kamis"<<endl;
                                break;
                                case 4 : cout<<"Hari Ini Kamis Besok Adalah hari Jum'at'"<<endl;
                                break;
                                case 5 : cout<<"Hari ini Jum'at Besok Adalah Hari Sabtu"<<endl;
                                break;
                                case 6 : cout<<"Hari Ini Sabtu Besok Adalah hari Minggu"<<endl;
                                break;
                                case 7 : cout<<"Hari ini Minggu Besok Adalah Hari Senin"<<endl;
                                break;
                                default : cout<<"Hari Yang Anda Masukan Salah"<<endl;
                }
                return 0;
}
