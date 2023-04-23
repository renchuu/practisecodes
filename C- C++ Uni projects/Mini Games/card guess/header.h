#include <iostream>

class player{
    public:
        player(int);
        int score;
        int choice();
        void game();
};

class items{
	protected:
		int points;
	public:
		int operator + (player const* obj);
};

class Trash: public items{
	public:
		Trash();
		void print();
};

class Puffer: public items{
	public:
		Puffer();
		void print();
};

class Nemo: public items{
	public:
		Nemo();
		void print();
};
