#include<iostream>
#include<string.h>
using namespace std; 
#include "Animal.h" 

Animal::Animal(int a, string n) { 
	cout << " Animal Created " << endl;
	age = a;
	name = n;
}

Animal:: ~Animal() {
	cout << " Animal Destroyed "<< endl;
}