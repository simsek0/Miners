#ifndef MAGNESIUM_H
#define MAGNESIUM_H
#include "magnesium.h"
#include "miner.h"

class magnesium:public miner
{

public:
	magnesium(int ,string);
	magnesium();
	void detect();
	int miner_function(int );
};
#endif
