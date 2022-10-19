#include <iostream>
using namespace std;

int main(){
	int n;
	float jumlah,sigma,mean,ragam;	
	cin>>n;
	
	for(int a=0; a<=n; a++){
		jumlah=jumlah+a;
	}
	
	mean = jumlah/n;
	
	for (int b=1; b<=n; b++){
		sigma+=(b-mean)*(b-mean);
		ragam =sigma/(n-1);
		
	}
	
	cout<<ragam<<endl;
	
	
	return 0;
}
