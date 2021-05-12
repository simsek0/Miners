#ifndef WATER_H
#define WATER_H
#include "miner.h"

class water: public miner
{
	
public:
	water(int,string);
	water();
	void collect();
	int miner_function(int );
	void detect();
};	
#endif
