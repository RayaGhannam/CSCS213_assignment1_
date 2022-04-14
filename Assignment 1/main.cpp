#include<iostream>
#include<string.h> 
using namespace std;
#include "Animal.h"  
#include "Dog.h"
#include "Cat.h"
#include "Fish.h" 


 void printAnimal(Animal* animal) {
	animal->print();
}

int main()
{
	Animal *arrayAnimal[4]{};  
	Dog d (2,"r","s");
	Cat c (3,"a","b",2);    
	Fish f (1,"f",3,4);      
	
	arrayAnimal[0] = &d;
	arrayAnimal[1] = &c;
	arrayAnimal[2] = &f;	  
	

	for (int i = 0; i < 3; i++) { 
	      printAnimal(arrayAnimal[i]);
		 
		
		 } 
	

	

	return 0; 

	
}
