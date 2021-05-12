#ifndef MINER_H
#define MINER_H
#include <iostream>
#include "helper.h"
#include "exceptionclass.h"
using namespace std;
class miner
{


protected:
	int id;
	string type;
	int max_capacity;
	int current_capacity;	
	exceptionclass exclass;

public:
	miner();
	void start();
	virtual void detect();
	virtual void collect();
	virtual int miner_function(int a);//pure virtual function
	void stop();
	void func(); // this function for getting right material calculation
	bool isFull();

};
#endif
