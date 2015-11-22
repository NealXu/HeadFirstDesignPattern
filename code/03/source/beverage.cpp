#include <iostream>
#include "beverage.h"

using std::cout;
using std::endl;

Beverage::Beverage()
{
    selfDesc = "Unknown Beverage";
}

Beverage::~Beverage()
{

}

string Beverage::GetDescription()
{
    return selfDesc;
}


/* end of beverage.cpp */
