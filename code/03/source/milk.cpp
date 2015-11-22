#include "milk.h"


Milk::Milk(Beverage *pBeve)
{
    pBeverage = pBeve;
    selfDesc = "Milk";
}

Milk::~Milk()
{

}

string Milk::GetDescription()
{
    return pBeverage->GetDescription() + ", " + selfDesc;
}

float Milk::Cost()
{
    return pBeverage->Cost() + 0.10;
}

/* end of milk.cpp */
