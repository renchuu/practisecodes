#include <iostream>
#include "header.h"
using namespace std;

int items::operator + (player const* obj){
	return obj->score + this->points;
}

Trash::Trash(){	points = -1; }
    
void Trash::print(){ 
	cout<<"It is a trash! Ewww! score:-1 Try again!\n";
}

Puffer::Puffer(){points = -5;} 

void Puffer::print(){ 
	cout<<"Oh no! You got the puffer fish!\nIt spoke you score:-5";
	}

 
Nemo::Nemo(){points = 5;} 

void Nemo::print(){ 
	cout<<"You found nemo!";
	}



player:: player(int s){
    score = s;
}
int player::choice(){
	int entry;
	cout<<"\nChoose your card to find nemo!";
	cout<<endl;
	cout<<"     ---   ---   ---   ---   ---"<<endl;
	cout<<"     |1|   |2|   |3|   |4|   |5|"<<endl;
	cout<<"     ---   ---   ---   ---   ---"<<endl;
	cin>>entry;
	return entry;
}
void player::game(){

	while(1){
		int cardNum = choice();
		switch(cardNum){
		    case 1: case 3: case 4:
		        {Trash trash;
		        trash.print();
    		    score = trash+this;
    		    break;}
    	    case 5:
    	        {Nemo nemo;
    	        nemo.print();
    		    score = nemo+this;
    		    cout<<"Hurray!! Your score is: "<<score;
    		    exit(0);
    		    break;}
    	    case 2:
    	        {Puffer puffer;
    	        puffer.print();
    		    score = puffer+this;
    	    	break;}
    	    default:
    	        cout<<"no such card exists"<<endl;
    	        break;
		}
	cout<<"\nyour current score is "<<score<<endl;
	
	}
}
