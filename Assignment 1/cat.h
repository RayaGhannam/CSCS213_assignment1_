#include<iostream>
#include<string.h>
using namespace std; 
#include"Animal.h"

class Cat : public Animal {

private:
	string color;
	int pawSize;

public:
	Cat(int, string, string, int); 
	~Cat();
	string getColor() { return string(); };
	int getPawSize;
	void print() {

		cout << " Cat Print "<< endl;
	}
	string getOwner() { return "ccc"; };

};