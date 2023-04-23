#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include "headerfile.h"

using namespace std;

bankAccount::bankAccount(int value){
	if (value!=0){
	money=value;
   }
   else{
   	money=0;
   	cout<<"The initial balance is invalid!!!";
   } 
   
}


void bankAccount::rate(float rate){
	float money;
	cout<<"year"<<setw(6)<<"money"<<endl;
	for (int i = 1; i <= 10; i++)
    {
    	money=10000*pow(1+rate,i);
        cout<<i<< setw(10)<<money<< endl;
    }
}


void bankAccount::password(){
	
	accNumber="12345";
	passwrd="154578";
	counter=0;
	
	while (counter<3){
		cout<<"please enter your"<<endl;
		cout<<"account number: "<<endl;
		cin>>accNumberIn;
		
		cout<<"password: "<<endl;
		cin>>passwordIn;
		
		if(accNumberIn!=accNumber || passwordIn!=passwrd){
			cout<<"wrong entry!!"<<endl;
			counter++;
			continue;
		}
		if(accNumberIn==accNumber && passwordIn==passwrd){
			break;
		}
		break;

	}
		
	if (counter==3){
		cout<<"your account is blocked due to several wrong entries!!"<<endl;
		exit(0);
	}
	
}

void bankAccount::accinfo(){
	cout<<"account number: "<<accNumber<<endl;
	cout<<"Your current balance is " << money << endl;
}








