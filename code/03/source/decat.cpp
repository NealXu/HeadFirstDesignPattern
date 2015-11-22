#include "decat.h"


Decat::Decat()
{
    selfDesc = "Decat";
}

Decat::~Decat()
{

}

string Decat::GetDescription()
{
    return selfDesc;
}

float Decat::Cost()
{
    return 1.05;
}

/* end of decat.cpp */

