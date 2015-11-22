#include "whip.h"


Whip::Whip(Beverage *pBeve)
{
    pBeverage = pBeve;
    selfDesc = "Whip";
}

Whip::~Whip()
{

}

string Whip::GetDescription()
{
    return pBeverage->GetDescription() + ", " + selfDesc;
}

float Whip::Cost()
{
    return pBeverage->Cost() + 0.10;
}

/* end of whip.cpp */


