#ifndef IRON_H
#define IRON_H
#include "helper.h"
#include "miner.h"

class iron:public miner
{


public:
	iron(int,string);
	iron();
	void detect();
	int miner_function(int);

};
#endif
