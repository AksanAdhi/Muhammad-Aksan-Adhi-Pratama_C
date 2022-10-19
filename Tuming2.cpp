#include <iostream>
using namespace std;
int main(){

string a,b,c,d;
cout<<"Masukkan Nama : ";
getline(cin,a);
cout<<"Masukkan NPM : ";
getline(cin,b);
cout<<"Masukkan Kelas : ";
getline(cin,c);
cout<<"Masukkan Jurusan : ";
getline(cin,d);
cout<<endl;

cout<<"Data Diri"<<endl;
cout<<"Nama	: "<<a<<endl;
cout<<"NPM	: "<<b<<endl;
cout<<"Kelas	: "<<c<<endl;
cout<<"Jurusan	: "<<d<<endl;


return 0;
}