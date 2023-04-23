#include <iostream>
using namespace std;

template<typename T>
class calc{
	private:
		T num1, num2, num3 = 0, num4;
	public:
		calc(T n1, T n2) { num1=n1; num2=n2; }
		calc(T n1, T n2, T n3, T n4){num1=n1; num2=n2; num3=n3; num4=n4;}
		
		T add(){ return num1 + num2;}
		void addcomp(){cout<< num1+ num3<< "+" <<num2+num4 <<"i\n";	}
		T multiply(){return num1 * num2;}
		void multcomp(){cout<< num1 * num3<< "+" <<num2*num4 <<"i\n";	}
		T sub(){return num1 - num2;}
		void subcomp(){cout<< num1 - num3<< "+" <<num2-num4 <<"i\n";	}
		T divide(){return num1 / num2;}
		void divcomp(){cout<< num1 / num3<< "+" <<num2/num4 <<"i\n";	}
		
		void print(){
			if(num3){
				addcomp();
				multcomp();
				subcomp();
				divcomp();
			}else{
				cout<<add()<<endl
				<<multiply()<<endl
				<<sub()<<endl
				<<divide();
			}
				
				
		}
};


int main(int argc, char** argv) {
	calc<int> r(5,4, 2, 1);
	
	r.print();
	
	calc<int> q(1,2);
	
	q.print();
	
	return 0;
}
