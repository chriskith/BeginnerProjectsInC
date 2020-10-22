/*
	
	Seth Kith
	Player.h
	Contains defintions for players

/*


#include <iostream>
#include <string>
using namespace std;

class Player {
	
	public:

		Player();
		Player(string, string);
		void setName(string);
		string getName();
		
		void setToken(char);
		string getToken();


	private:

		string name;
		char token;
			
}
