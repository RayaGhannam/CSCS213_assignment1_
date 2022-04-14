#include<iostream>
#include<string.h>
using namespace std;
#include"Fish.h"  

Fish::Fish(int a, string n, int gCapacity, int sSpeed) : Animal(a, n) {  
	cout << " Fish Created "<<endl;
	gillcapacity = gCapacity;
	swimspeed = sSpeed; 
}
Fish:: ~Fish() {
	cout << " Fish Destroyed "<<endl;
}

int Fish::getGillCapacity(int)
{
	return 0;
}
int Fish::getSwimSpeed(int)
{
	return 0;
} 