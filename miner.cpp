#include <iostream>
#include "miner.h"
#include <string>
using namespace std;



miner::miner()
{
	id=32;
	type = "str";
}

void miner::start()
{

	cout<<"Miner #"<<id<<" ("<<type<<") is starting.\n";

}

void miner::detect()
{

	if(didItBreak())
	{
		exceptionclass exp(id,type);
		throw exp;
	}
	//detecting sodium and chloride as default  since there is 2 instances
	cout<<"Steam blasting...\n"<<
	"Salinity detector activated.\n"<<
	"Concentration vector of NaCl detected.\n";


}

void miner::collect()
{

//update the miner object`s current capacity
	if(didItBreak())
	{	
		exceptionclass exp(id,type);
		throw exp;
	}
	//collecting everything else but water
	cout<<"Impact hammer positioned.\n"<<
	"Impact hammer activated for 15 seconds.\n"<<
	"Debris scoop activated.\n"<<
	"Debris elevator activated.\n"<<
	"Debris collection complete.\n";
	func();
}

void miner::stop()
{
	cout<<"Miner #"<<id<<" ("<<type<<") is going to standby.\n=======";
}
void miner::func()
{
	int xFactor=getXFactor();
	int amt=miner_function(xFactor);
	current_capacity=current_capacity+amt;
	

}
int miner::miner_function(int )
{

}

bool miner::isFull()
{
	bool statement;	
	if(current_capacity >= max_capacity)
		statement=true;
	else
		statement=false;
	
	return statement;
}
