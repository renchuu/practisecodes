#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int coins(){
	return (rand()%2)+1;
}

int dices(){
	return (rand()%6)+1;
}

int main() {
	int dice1,dice2, coin, guess;
	int player1=0,player2=0;
	
	while(player1<=10 && player2<=10){
		cout<<"1.face\n2.number\n"<<"player 1 guess: "<<endl;
		cin>>guess;
		
		coin=coins();
		
		if (guess==coin){
			dice1=dices();
			dice2=dices();
			player1+=(dice1+dice2);
			if(player1>10){
				
				cout<<"player 1 won with the score of"<<player1<<endl;
				break;
			}
		}
		else{
			cout<<"your guess is wrongts player 2's time to guess"<<endl;
		}
		
		cout<<"1.face\n2.number\n"<<"player 2 guess: "<<endl;
		cin>>guess;
		
		coin=coins();
		
		if (guess==coin){
			dice1=dices();
			dice2=dices();
			player2+=(dice1+dice2);
			if(player2>10){
				
				cout<<"player 2 won with the score of"<<player2<<endl;
				break;
			}
		}
		else{
			cout<<"your guess is wrong its player 1's time to guess"<<endl;
		}
	}
	
	
	
	
	return 0;
}
