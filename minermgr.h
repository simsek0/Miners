#ifndef MINERMGR_H
#define MINERMGR_H
//need list or vector here
#include <list>
#include "miner.h"
#include "chloride.h"
#include "helper.h"
#include "iron.h"
#include "magnesium.h"
#include "potassium.h"
#include "silicon.h"
#include "sodium.h"
#include "water.h"
#include "exceptionclass.h"
class minermgr
{
	list<miner*>minerList;
public:
	minermgr();
	void addMiner(int number,string resource);
	void runMiners();
//	~minermgr();
};

#endif

















