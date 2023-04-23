#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
	const int arraysize=10;
	int data[arraysize]={};
	int insert,num;
	
	cout<<"please enter numbers";
	
	for(int i=0;i<arraysize;i++){
		cout<<"\n";
		cin>>num;
		
		data[i]=num;
	}
	
	cout<<"unsorted array:\n";
	
	for(int i=0;i<arraysize;i++)
		cout<<setw(4)<<data[i];
		
	for(int next=1;next<arraysize;next++){
		insert=data[next];
			
		int moveitem=next;
			
		while ((moveitem>0)&&(data[moveitem-1]>insert)){
			data[moveitem]=data[moveitem-1];
			moveitem--;
		}
			
		data[moveitem]=insert;
			
	}
		
	cout<<"\nsorted array\n";
		
	for(int i=0;i<arraysize;i++)
		cout<<setw(4)<<data[i];
	
	
	return 0;
}
