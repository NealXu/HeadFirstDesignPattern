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
    float soyCost = 0.15;

    if (SMALL == GetSize())
    {
        soyCost = 0.10;
    }
    else if (LARGE == GetSize())
    {
        soyCost = 0.20;
    }
    
    return pBeverage->Cost() + soyCost;
}

/* end of soy.cpp */

