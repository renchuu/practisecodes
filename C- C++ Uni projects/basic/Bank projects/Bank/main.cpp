#include <iostream>
#include <string>
#include "headerfile.h"
using namespace std;

//account number: 12345
//password: 154578

int main() {
	bankAccount bank(10000);
	int choice;
	
	bank.password();
	bank.accinfo();
	

	cout << "choose the interest rate:"<<endl<<"1.%0.05"<<endl<<"2.%0.10"<<endl<<"3.%0.08"<< endl;
	cin >> choice;
	if (choice == 0)
	exit(0);
	
	switch (choice){
		case 1:
			bank.rate(0.05);
			break;
		case 2:
			bank.rate(0.1);
			break;
		case 3:
			bank.rate(0.08);
			break;
			
	}
		
	
}
