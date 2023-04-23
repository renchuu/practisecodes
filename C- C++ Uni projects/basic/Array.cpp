#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n[10]={32,27,64,18,95,14,90,70,60,37};
	int average,total;
	
	for (int i=0;i<10;i++)
		total+=n[i];
		
	average=total/10;
	
	cout<<average<<endl;
	return 0;
}
