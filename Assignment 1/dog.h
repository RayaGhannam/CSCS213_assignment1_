#pragma once
#include<iostream>
#include<string.h>
using namespace std;
#include"Animal.h"  

class Dog : public Animal {

private:
	string breed; 

public:
	Dog(int, string, string); 
	~Dog();
	
	string getBreed(); 
	void print() {
		 
		cout << " Dog Print "<<endl;
	}
	 string getOwner() { return "ddd"; }; 
};