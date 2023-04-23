#include <iostream>

using namespace std;

struct node{
	int value;
	node *next;
};

class linked_list{
	public:
		linked_list(){
			head = NULL;
			tail = NULL;
		}
		
		void add_node(int n){
			node *temp;
			temp = new node;
			temp->value = n;
			temp->next  = NULL;
			
			if(head == NULL){
				head = temp;
				tail = temp;
			}
			else{
				tail->next = temp;
				tail = temp;
			}
		}
		
		void printer(){
			node *temp = head;
			
			cout<< "\nThe linked list is: "<< endl;
			
			while(true){				
				cout<< temp->value << " ";
				if(temp->next == NULL)
					break;
				temp = temp->next;
			}
			
		}
	private:
		node *head;
		node *tail;
};

int main(int argc, char** argv) {
	int matrix[3][3]=  {{ 0 , 0, 0},
						{596, 0, 1},
						{  0, 84,0}};
	linked_list list;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if(matrix[i][j] != 0)  
				list.add_node(matrix[i][j]);
		}
	}
	
	cout<< "The linked list is created!"<<endl;
	
	list.printer();
	
	
	return 0;
}
