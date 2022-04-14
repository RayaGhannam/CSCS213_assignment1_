
#ifndef ANIMAL H
#define ANIMAL H 

#include<iostream>
#include<string.h>

 using namespace std;


 class Animal {

  private:
	  int age;
	  string name;   

  public:
	  Animal(int, string);  
	  ~Animal();
	  int getAge() { return age; }
	  string getName() { return name; }
	  virtual void print() {

		  cout << " Animal Print "<<endl;  
	  } 
	  virtual string getOwner()  = 0; 
		 
	 

}; 
#endif







 
