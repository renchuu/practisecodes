#include <iostream>
#include <string>
using namespace std;

static int first[10]={0,0,0,0,0,0,0,0,0,0};
static int second[10]={0,0,0,0,0,0,0,0,0,0};
static int third[10]={0,0,0,0,0,0,0,0,0,0};

//counting taken seats
int taken(void){
	int taken;
	for(int i=0;i<10;i++){
		if (first[i]==1)
			taken++;
		else continue;
	}
	
	for(int i=0;i<10;i++){
		if (second[i]==1)
			taken++;
		else continue;
	}
	
	for(int i=0;i<10;i++){
		if (third[i]==1)
			taken++;
		else continue;
	}
	
	return taken;
}

//pricing
int price(string clas){
	int price;
	
	if (clas=="first"){
		price=10;
	}
	else if (clas=="second"){
		price=20;
	}
	else if (clas=="third"){
		price=30;
	}
	
	//30% discount for the last 10 seats
	if(taken()>=20)
		price=price*70/100;
		
	return price;
}

//printing the avaiable seats
void print(int array[]){
	for(int i=0;i<10;i++){
		if(array[i]==0)
			cout<<i+1<<" seat is free"<<endl;
		else continue;
	}
}



void seats(){
	char a;
	
	cout<<"\nchoose your class\nFirst(f)     Second(s)     Third(t)"<<endl;
	cin>>a;
	
	int choice;
	
	switch(a){
		case 'f':
			print(first);
			cout<<"which seat?"<<endl;
			cin>>choice;
			if (first[choice-1]!=1){
				first[choice-1]=1;
			cout<<"the price is: "<<price("first")<<endl;
			}else
				cout<<"this seat is taken please choose another seat"<<endl;			
			break;
		case 's':
			cout<<"which seat?"<<endl;
			print(second);
			cin>>choice;
			if (second[choice-1]!=1){
				second[choice-1]=1;
			cout<<"the price is: "<<price("second")<<endl;
			}else
				cout<<"this seat is taken please choose another seat"<<endl;
			break;
		case 't':
			cout<<"which seat?"<<endl;
			print(third);
			cin>>choice;
			if (third[choice-1]!=1){
				third[choice-1]=1;
			cout<<"the price is: "<<price("third")<<endl;
			}else
				cout<<"this seat is taken please choose another seat"<<endl;
			break;
		default:
			cout<<a;
	}
	
}


int main(int argc, char** argv) {
	while(1){
	 seats();
	 
	if (taken()==30)
		break;
}
	return 0;
}
