#include <iostream>
#include <string>
using namespace std;

class car_rent{
	public:
		void fee(int day, int driver, int type){
			int typefee;
			switch(type){
				case 1:
					typefee = 200;
					break;
				case 2:
					typefee = 300;
					break;
				case 3:
					typefee = 400;
					break;
			}
			
			cout<<"your fee is "<< tax(day*20 + day*10*driver + typefee)<<endl;
		}
		
		int tax(int fee){
			return fee+fee*18/100;
		}
	private:
		int customer_ID = 1234567;
};

int main(int argc, char** argv){
	car_rent customer;
	int day, driver, type;
	
	cout<<"enter how many days you want to rent the car"<<endl;
	cin>>day;
	
	cout<<"\nenter 1 if you need a driver otherwise enter 0"<<endl;
	cin>>driver;
	
	cout<<"\nenter the type of the car: \n type1 -> 1\n type2 -> 2\n type3 -> 3"<<endl;
	cin>>type;
	
	customer.fee(day, friver, type);
	
	return 0;
}
