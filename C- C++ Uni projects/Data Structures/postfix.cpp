#include <iostream>
#include <stack>
#include <string>
#include <cstring>
using namespace std;

stack<string> eq;
stack<string> op;

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void strToStack(string& input){
	reverseStr(input);
	string a;
	for (int i=0; i<input.size(); i++){ 
		a = input[i];
		eq.push(a);
	}
}

int priority(string operatr){
	if(operatr == "+" || operatr == "-")
			return 1;
	else if (operatr == "/" || operatr == "*")
			return 2;
	else if(operatr == "^")
			return 3;
	else return -1;
}


bool checkOp(string check){
	if(check == "+" || check == "-" || check == "/" || check == "*"|| check == "^")	
		return true;
	else
		return false;
}

void converter(string& output){
	if(eq.empty()) {
		while(!op.empty()){
			output += op.top();
			op.pop();
		}
		return;
	}
	string temp = eq.top();
	eq.pop();

	if (temp >= "a" && temp<= "z") {
		output+= temp;
		converter(output);
	}
		
	else if(checkOp(temp)){
		if(!op.empty()){
		if(priority(temp)>priority(op.top())){
			op.push(temp);
		}
			
		else if (priority(temp)<priority(op.top())){
			while(!op.empty()){
				output += op.top();
				op.pop();
			}
			op.push(temp);
		}
		else if(priority(temp)==priority(op.top())){
			output += op.top();
			op.pop();
			op.push(temp);			
		}
		}else{
			op.push(temp);
		}
		converter(output);
	}
	else
		cout<< "invalid input";
}

int main(){
	static string output = "";
	string input;
	cout<< "please enter your equation"<< endl;
	cin>>input;
	
	
	strToStack(input);
	
	converter(output);
	
	cout<<endl<<output;
	
	return 0;
}