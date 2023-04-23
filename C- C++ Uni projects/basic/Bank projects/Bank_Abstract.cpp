#include <iostream>
using namespace std;

class bank{
	protected:
		float dollar = 18;
		float money;
	public:
		void setMoney(int m){
			money = m;
		}
		virtual void exchange() = 0;
};

class deniz: public bank{
	public:
		void exchange(){
			money = money - (money*2.8/100);
			cout<<"the amount of dollars you can get is "<< money/dollar << endl;
		}
};

class ing: public bank{
	public:
		void exchange(){
			money = money - (money*1.8/100);
			cout<<"the amount of dollars you can get is "<< money/dollar << endl;
		}
};

class yapi: public bank{
	public:
		void exchange(){
			money = money - (money*3.8/100);
			cout<<"the amount of dollars you can get is "<< money/dollar << endl;
		}
};

int main(int argc, char** argv) {
	deniz d;
	yapi y;
	ing i;
	int n, temp;
	
	cout<<"choose your bank 1-deniz 2-yapi 3-ing"<<endl;
	cin>>n;
	
	cout<<"the amount of tl you want to change "<<endl;
	cin>>temp;
	
	switch(n){
		case 1:
			d.setMoney(temp);
			d.exchange();
			break;
		case 2:
			y.setMoney(temp);
			y.exchange();
			break;
		case 3:
			i.setMoney(temp);
			i.exchange();
			break;
	}
	
	return 0;
}
