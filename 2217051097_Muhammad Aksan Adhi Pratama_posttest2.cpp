#include<iostream>
using namespace std;

int main(){
	float harga , diskon , potongan , total;
	
	cin>>harga>>diskon;
	
	potongan = (diskon/100)*harga;
	total = harga-potongan;
	cout<<" Harga setelah diskon : "<<total<<endl;
	cout<<" Diskon yang didapatkan : "<<potongan<<endl;
	
	return 0;
}
