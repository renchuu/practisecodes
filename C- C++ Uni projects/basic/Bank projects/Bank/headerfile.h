#include <iostream>
#include <string>

using namespace std;

class bankAccount
{
	public:
		bankAccount(int);
		void rate(float);
		void password();
		void accinfo();
		
		
	private:
		float money;
		string passwordIn;
		string passwrd;
		string accNumber;
		string accNumberIn;
		int counter;
};
