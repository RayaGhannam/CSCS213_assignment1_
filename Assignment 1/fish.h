#pragma once
#include<iostream>
#include<string.h>
using namespace std;
#include"Animal.h" 

class Fish : public Animal {

private:
	int gillcapacity;
	int swimspeed;

public:
	Fish(int, string, int, int);
	~Fish();
	int getGillCapacity ( int );
	int getSwimSpeed( int );

	string getOwner() { return  "fff"; }; 
}; 