#include "water.h"
#include <iostream>
#include "helper.h"
using namespace std;


water::water(int id,string type)
{
	this->id=id;
	this->type=type;
	current_capacity=0;
	max_capacity=10000;
}
/*
void water::func()
{
	//getXFactor is in helper.h
	int xFactor=getXFactor();
	// miner functino belongs to water class
	int amt=miner_function(xFactor);
	current_capacity=current_capacity+amt;	
	cout<<"current capacity = "<<current_capacity<<endl;
}
/*/
water::water(){}


//overriding miner_fuction here
int water::miner_function(int a)
{
	a=a*100;
	return a;
}

void water::collect()
{
	if(didItBreak())
	{
		exceptionclass exp(id,type);
		throw exp;
	}
	//only in water different
	cout<<"Water vacuums and hoses deployed.\n"
	<<"Heater turned on. Waiting for the ice to melt.\n"
	<<"Liquid water moved to collection chamber.\n"
	<<"Surface pump activated.\n";
	func();
}
void water::detect()
{
	if(didItBreak())
	{
		exceptionclass exp(id,type);
		throw exp;
	}
	cout<<"Initiating heat blast."
	<<"Directional humidity detector activated."
	<<"Ice located.\n";
}
