#include "sodium.h"
#include <iostream>
using namespace std;

//constructor
sodium::sodium(){}

//constructor 2
sodium::sodium(int id,string type)
{
	this->id=id;
	this->type=type;
	current_capacity=0;
	max_capacity=5000;
}

int sodium::miner_function(int a)
{
	a=a*20+100;
	return a;
}

