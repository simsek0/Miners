#include "exceptionclass.h"


exceptionclass::exceptionclass(int id,string type)
{
	this->id=id;
	this->type=type;

}

int exceptionclass::getId()
{
	return id;
}
string exceptionclass::getType()
{
	return type;
}
exceptionclass::exceptionclass(){}
