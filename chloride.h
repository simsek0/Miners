#ifndef CHLORIDE_H
#define CHLORIDE_H
#include "miner.h"
#include "helper.h"

class chloride:public miner
{


public:

	chloride(int,string);
	chloride();
	//no detect here
	int miner_function(int);

};
#endif
