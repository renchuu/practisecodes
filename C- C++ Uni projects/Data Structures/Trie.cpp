#include <iostream>
#include <string>
using namespace std;

class Node{
	public:
		Node* children[26];
		Node(){for (int i = 0 ; i < 26 ; i++){children[i] = NULL;}}
		string value;
};

class trie{
	public:
		Node root;
		
		bool check(Node* temp, char letter){
			if (temp->children[letter - (int) 'a'] == NULL){
				return true;
			}
			return false;
		}
		
		void add(string key, string value){
			Node* temp = &root;
			for (int i = 0; i <key.length(); i++){
				if(check(temp, key[i])){					
					temp->children[key[i] - (int) 'a'] = new Node();
				}
				temp = temp->children[key[i] - (int) 'a'];
			}
			temp->value = value;
		}
		
		void search(string key,Node *temp){
			cout<<key<<" Value:";
			for (int i = 0; i <key.length(); i++){
				if(!check(temp,key[i])){
					temp = temp->children[key[i] - (int) 'a'];
				}else{
					cout<<" key does not exist"<<endl;
					break;
				}
			}
			cout<<temp->value<<endl;
		}
};


int main(int argc, char** argv) {
	trie dic;
	
	dic.add("apple", " Red/Green fruit");
	dic.add("strawberry", " Red fruit");
	dic.add("banana", " Yellow fruit");
	dic.add("cucumber", "Green vegetable");
	
	dic.search("applell", &dic.root);


	
	return 0;
}



