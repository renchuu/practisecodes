#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
	double amount,principal,rate;
	int bank,a;
	
	
	cout<<"1.ziraat(%15)\n2.is(%18)\3.halk(%10)"<<endl;
	cin>>bank;
	
	switch (bank){
		case 1:
			rate=15;
			break;
		case 2:
			rate=18;
			break;
		case 3:
			rate=10;
			break;
	}
	
	cout<<"enter the year"<<endl;
	cin>>a;
	
	cout<<"enter the money"<<endl;
	cin>>principal;
	
	cout<<"year"<<setw(21)<<"amount on deposit"<<endl;
	
	cout<<fixed<<setprecision(2);
	
	for(int year=1;year<=a;year++){
		
		amount=principal*pow(1.0+rate,year);
		
		cout<<setw(4)<<year<<setw(21)<<amount<<endl;
	}
	
	
	return 0;
}
