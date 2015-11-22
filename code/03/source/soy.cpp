#include "soy.h"


Soy::Soy(Beverage *pBeve)
{
    pBeverage = pBeve;
    selfDesc = "Soy";
}

Soy::~Soy()
{

}

string Soy::GetDescription()
{
    return pBeverage->GetDescription() + ", " + selfDesc;
}

float Soy::Cost()
{
    return pBeverage->Cost() + 0.15;
}

/* end of soy.cpp */

