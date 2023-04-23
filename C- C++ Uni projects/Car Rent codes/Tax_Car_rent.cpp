#include <iostream>
using namespace std;
class options{
	protected:
		int money;
};

class op1: public options{
	public:
		op1(){money = 10;}
		int getmoney(){
			return money;
		}
};

class op2: public options{
	public:
		op2(){money = 20;}
		int getmoney(){
			return money;
		}
};

class op3: public options{
	public:
		op3(){money = 30;}
		int getmoney(){
			return money;
		}
};

class tax{
	private:
		int tax;
	public:
		int gettax(int age, int bill){
			tax = (age>18) ? 10 : 0;
			bill = bill%10 + bill;
			return bill;
		}
};
class car{
	private:
		int bill;
	public:
		car(int start){
			bill = start;
		}
		void asking(){
			int answer;
			cout<< "which option do you want? 1-op1 2-op2 3-op3"<< endl;
			cin>>answer;
			
			switch(answer){
				case 1:
					{op1 obj1;
					bill += obj1.getmoney();
					break;}
				case 2:
					{op2 obj2;
					bill += obj2.getmoney();
					break;}
				case 3:
					{op3 obj3;
					bill += obj3.getmoney();
					break;}
			}
			
			cout<<"whats your age?"<<endl;
			cin>>answer;
			tax tax;
			
			bill = tax.gettax(answer, bill);
			cout<<"your bill is "<< bill;
		}
};



int main(int argc, char** argv) {
	car r1(100);
	car r2(200);
	car r3(300);
	int choice;
	
	cout<<"which car do you want 1-r1 2-r2 3-r3"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			r1.asking();
			break;
		case 2:
			r2.asking();
			break;
		case 3:
			r3.asking();
			break;
	}
	
	return 0;
}
