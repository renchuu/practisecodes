#include <iostream>

using namespace std;

class salery{
	public:
		salery(){
			salry = 100;
			com = salry*3/100;
		}
		
		void setsalery(int s){
			salry = s;
			com = salry*3/100;
		}
		
		int getsalery(){
			return salry;
		}
		
		void setmonth(int m){
			month = m;
		}	
		
		
	protected:
		int salry;
		int month;
		int com;
};

class A : public salery{
	public:
		void getsaleryA(){
			int m;
			
			cout<<"please enter how many months employee worked"<<endl;
			cin>>m;
			
			setmonth(m);
			
			cout<<"salery is "<< (getsalery()+com)*month;
		}
		
	
};

class B : public salery{
	public:
		void getsaleryB(){
			int m;
			
			cout<<"please enter how many months employee worked"<<endl;
			cin>>m;
			
			setmonth(m);
			
			cout<<"salery is "<< getsalery()*month;
		}
	
	
};

class C : public salery{
	public:
		void getsaleryC(){
			
			cout<<"salery is "<< getsalery();
		}
	
	
};


int main(int argc, char** argv) {
	int employee;
	
	cout<<"1 for employee A 2 for employee B 3 for employee C"<<endl;
	cin>>employee;
	
	if(employee==1){
			A employeeA;
			employeeA.getsaleryA();
	}else if(employee==2){
			B employeeB;
			employeeB.getsaleryB();
	}else if (employee==3){
			C employeeC;
			employeeC.getsaleryC();
	}
	
	return 0;
}
