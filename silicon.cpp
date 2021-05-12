#include "silicon.h"
#include <iostream>
using namespace std;

silicon::silicon(){}

silicon::silicon(int id,string type)
{
	this->id=id;
	this->type=type;
	current_capacity=0;
	max_capacity=5000;
}
int silicon::miner_function(int a)
{
	a=5*(a*a);
	return a;
}
void silicon::detect()
{
	if(didItBreak())
	{
		exceptionclass exp(id,type);
		throw exp;
	}
	cout<<"Sample grinder activated.\n"
	<<"10 um seive applied.\n"
	<<"Infrared laser activated.\n"
	<<"Spectrophotometer activated and results analyzed.\n"
	<<"Silica vein located.\n";

}
