#include<iostream>
#include<string.h>
using namespace std;
#include"Dog.h" 

Dog::Dog(int a, string n, string b)  : Animal (a, n) { 
		cout << " Dog Created "<<endl;
		
		breed = b;

	}
 Dog:: ~Dog() {
	 cout << " Dog Destroyed "<<endl;

 }
 string Dog::getBreed() { return string(); };