#include <stdlib.h>
#include "helper.h"

int getXFactor()
{
    int xFactor = (rand() % 100) + 1;
}

bool didItBreak()
{
    return (rand() % 100) > 98 ;
}
