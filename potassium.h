#ifndef POTASSIUM_H
#define POTASSIUM_H
#include "potassium.h"
#include "miner.h"


class potassium:public miner
{



public:
	potassium(int,string);
	potassium();
	void detect();
	int miner_function(int );
};

#endif
