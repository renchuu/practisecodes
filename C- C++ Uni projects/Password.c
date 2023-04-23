#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int randm(){
	int a;
	a=rand()%10000+1;
	if (a>999){
		return a;
	}
	else
		randm();
}

int total(int a){
	int b=0,c;
	while (a%10>0){
		c=a%10;
		a=a/10;
		a=int(a);
		b+=c;
	}
	return b;
}


int main() {
	int password, random,rand;
	
	cout<<"enter your password:"<<endl;
	cin>>password;
	password=total(password);
	
	while (1){	

	random=randm();
	rand=total(random);	
	if(password==rand){
		cout<<"the number is "<<random<<endl;
		break;
	}
	else{
		continue;
	}
		
	
}
	
	
	
	
	return 0;
}
