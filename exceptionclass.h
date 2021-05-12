#ifndef EXCEPTIONCLASS_H
#define EXCEPTIONCLASS_H


#include <iostream>
using namespace std;
class exceptionclass
{
	int id;
	string type;
public:
	exceptionclass();
	exceptionclass(int,string);
	string getType();
	int getId();
};



#endif
