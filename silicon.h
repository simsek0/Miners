#ifndef SILICON_H
#define SILICON_H
#include "helper.h"
#include "miner.h"

class silicon:public miner
{
		
public:
	silicon(int,string);
	silicon();
	void detect();
	int miner_function(int );
};
#endif
