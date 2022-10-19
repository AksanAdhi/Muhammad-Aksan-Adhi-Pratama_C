#include <iostream>
using namespace std;

int main(){
	int kabisat;
	cin>>kabisat;
	
	if (kabisat<4){
		cout<<"Bukan tahun kabisat\n";
	}else if(kabisat>3&&kabisat<100){
	if (kabisat%4==0){
		cout<<"Ini tahun kabisat\n";
	}else if(kabisat%4>0){
		cout<<"Bukan tahun kabisat\n";
	}else if(kabisat>9){
	}
	if (kabisat%4==0&&kabisat%100>0){
		cout<<"Ini tahun kabisat\n";
	}else if(kabisat%100==0&&kabisat%400>0){
		cout<<"Bukan tahun kabisat\n";
	}else if(kabisat%400==0){
		cout<<"Ini tahun kabisat\n";
	}else if(kabisat%400>0&&kabisat%100>0&&kabisat%4>0){
		cout<<"Bukan tahun kabisat\n";
		
}
}
	
	return 0;
}
