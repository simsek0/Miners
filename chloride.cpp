#include "chloride.h"
#include <iostream>

using namespace std;

chloride::chloride(){}

chloride::chloride(int id,string type)
{
	this->id=id;
	this->type=type;
	current_capacity=0;
	max_capacity=15000;
}
int chloride::miner_function(int a)
{
	a=a*100 / (a%5+1);
	return a;
}

