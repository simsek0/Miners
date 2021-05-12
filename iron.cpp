#include "iron.h"
#include <iostream>
#include <cmath>
using namespace std;

iron::iron(){}

iron::iron(int id,string type)
{
	this->id=id;
	this->type=type;
	current_capacity=0;
	max_capacity = 1000;

}
int iron::miner_function(int a)
{
	a=sqrt(a)*a;
	return a;
}
void iron::detect()
{	
	if(didItBreak())
	{
		exceptionclass exp(id,type);
		throw exp;
	}
	cout<<"Magnetometer activated.\n"
	<<"Searching for magnetic field deviations.\n"
	<<"Iron deposits located.\n";

}
