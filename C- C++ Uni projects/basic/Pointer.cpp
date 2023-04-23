#include <iostream>
#include <iomanip>
using namespace std;

void selectionsort(int * const, const int);
void swap(int * const, int * const);

int main(){
	const int arraysize=10;
	int a[arraysize]={2,6,4,8,10,12,89,68,45,37};
	
	cout<<"data items in original order\n";
	
	for(int i=0;i<arraysize;i++)
		cout<<setw(4)<<a[i];
		
	selectionsort(a,arraysize);
	
	cout<<"\ndata items in ascending order\n";
	
	for (int j=0;j<arraysize;j++)
		cout<<setw(4)<<a[j];
		
	cout<<endl;
	
	return 0;
}

void selectionsort(int * const array, const int size){
	int smallest;
	
	for(int i=0;i<size-1;i++){
		smallest=i;
		
		for(int index=i+1;index<size;index++){
			
			if(array[index]<array[smallest])
				smallest=index;
				
		swap(&array[i],&array[smallest]);
		}
	}
}

void swap(int * const element1ptr, int * const element2ptr){
	int hold=*element1ptr;
	*element1ptr=*element2ptr;
	*element2ptr=hold;
	
}
