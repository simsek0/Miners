//Mustafa Simsek
//CS261
//5/5/2021

#include <iostream>
#include <stdlib.h>
#include "minermgr.h"

using namespace std;

int main(int argc,char** argv)
{
    const string resources[] = {"water","sodium","iron","potassium","chloride","magnesium","silicon"};
    minermgr mgr;

    srand(42);

    int numberOfMiners = 1000;
    if (argc == 2)
    {
	numberOfMiners = atoi(argv[1]);
    }

  for (int minerNumber=0; minerNumber<numberOfMiners; minerNumber++)
    {
	int resourceIdx = rand() % 7;
	const string resource = resources[resourceIdx];
	mgr.addMiner(minerNumber+1,resource);
    }

    mgr.runMiners();

}
