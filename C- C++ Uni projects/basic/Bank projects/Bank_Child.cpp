#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class bank{
	public:	
		int saving(){
			return savings;
		};
	protected:
		int savings=0;
};

class debit: public bank{
	public:
		int credit_limit();		
};

class credit: public bank{
	public:
		int check_limit(){
			return transactionLimit;
		}
		void transaction(int money){
			savings += money;
		}
	protected:
		int transactionLimit;
};

class bronze: public credit{
	public:
		bronze(){
			transactionLimit = 1000;
		}
};

class silver: public credit{
	public:
		silver(){
			transactionLimit = 2000;
		}
};

class gold: public credit{
	public:
		gold(){
			transactionLimit = 6000;
		}
};



int main(int argc, char** argv) {
	gold trial;
	
	trial.transaction(300);
	cout<<trial.saving()<<endl;
	
	trial.transaction(200);
	cout<<trial.saving()<<endl;
	
	return 0;
}
