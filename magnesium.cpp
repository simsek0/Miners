#include "magnesium.h"
#include <iostream>
#include <cmath>
using namespace std;

magnesium::magnesium(){}

magnesium::magnesium(int id,string type)
{
	this->id=id;
	this->type=type;
	current_capacity=0;
	max_capacity=7500;
}

int magnesium::miner_function(int a)
{
	a=a*100 /sqrt(a);
	return a;

}
void magnesium::detect()
{
	if(didItBreak())
	{
		exceptionclass exp(id,type);
		throw exp;
	}
	cout<<"Releasing oxygen...\n"
	<<"Thermal detector activated.\n"
	<<"Flammable reaction detected.\n";
//could have done function for this and call in here and potassium detect
}
