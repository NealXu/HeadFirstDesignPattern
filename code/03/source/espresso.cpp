#include "espresso.h"


Espresso::Espresso()
{
    selfDesc = "Espresso";
}

Espresso::~Espresso()
{

}

string Espresso::GetDescription()
{
    return selfDesc;
}

float Espresso::Cost()
{
    return 1.99;
}

/* end of espresso.cpp */
