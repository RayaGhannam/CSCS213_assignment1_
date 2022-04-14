#include<iostream>
#include<string.h>
using namespace std;

#include"Cat.h" 

Cat::Cat(int a, string n, string co, int pSize) : Animal(a, n) { 
	cout << " Cat Created "<<endl;
	
     color = co; 
	pawSize = pSize;

}

Cat:: ~Cat() {
	cout << " Cat Destroyed "<<endl; 
}
