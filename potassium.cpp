#include "potassium.h"
#include <iostream>
using namespace std;

//constructor
potassium::potassium(){}

potassium::potassium(int id,string type)
{
	this->id=id;
	this->type=type;
	current_capacity=0;
	max_capacity=500;
}

int potassium::miner_function(int a)
{
	a=(a%5 +1 *a )+100;
	return a;
}

void potassium::detect()
{
	
	if(didItBreak())
	{
		exceptionclass exp(id,type);
		throw exp;
	}
	cout<<"Releasing oxygen...\n"
	<<"Thermal detector activated.\n"
	<<"Flammable reaction detected.\n";


}
