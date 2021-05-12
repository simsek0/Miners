#ifndef SODIUM_H
#define SODIUM_H
#include "helper.h"
#include "miner.h"

class sodium:public miner
{

public:
	sodium(int,string);
	sodium();
//	void detect(); not needed since miners will be used for 
	//sodium and chloride
	int miner_function(int );
	
};
#endif
