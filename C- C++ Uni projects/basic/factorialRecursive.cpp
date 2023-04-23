#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

unsigned long factorial(unsigned long number){
	if(number<=1)
		return 1;
	else
		return number*factorial(number-1);
}

int main(int argc, char** argv) {
	for(int i=0; i<=10;i++)
		cout<<setw(2)<<i<<"!= "<<factorial(i)<<endl;
	
	return 0;
}


