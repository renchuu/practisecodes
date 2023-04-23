#include <iostream>
using namespace std;

class Products{
	public:
		int getprice(){
			return price;
		}
		virtual void getdetail() = 0;
    protected:
    	string name;
        int price;
};

class drinks : public Products{
	protected:
		bool hot;
		string type;
		string fruit;
	public:
		drinks(string input_name ,int input_price, bool input_hot,string input_fruits, string input_type)
		{name = input_name; price = input_price; hot = input_hot; fruit = input_fruits; type = input_type;}
		void getdetail(){
			cout<<"product: "<<name
				<<"\nprice: "<<price
				<<"\ntempreture: "<< (hot ? "hot" : "cold")
				<<"\nfruit: "<<fruit<<endl;
		}
};

class food : public Products{
	private:
		string chocolate;
	public:
		food(string input_name ,int input_price ,string input_chocolate)
		{name = input_name; price = input_price; chocolate = input_chocolate;}
		void getdetail(){
			cout<<"product: "<<name
				<<"\nprice: "<<price
				<<"\nchocolate: "<<chocolate<<endl;
		}
};


drinks wm("white mocha", 40, true, "none","coffee");
drinks icelatte("iced latte", 25, false, "none","coffee");
drinks aloha("Aloha", 20, false, "lime and grapefruit", "juice");
food salami("classic sandwich", 20, "none");
food donut("strawberry donut", 10 , "strawberry glaze");

Products* prod[5] = {&wm, &icelatte, &aloha, &salami, &donut};


int main(){	
	int choice, total;
	
	cout<<"check out our menu!!\n\n"<<endl;
	for (int i = 0; i < 5; i++){
		prod[i]->getdetail();
		cout<<"---------------"<<endl;
	}
	
	do{
		cout<<"which product would you like to get?"<<endl;
		cin>>choice;
		
		total += prod[choice-1]->getprice();
		
		cout<<"another one?(-1 no 1 yes)"<<endl;
		cin>>choice;
	}while(choice!= -1);
	
	cout<<"\n\nyour total is "<<total;
			
	
    return 0;
}


