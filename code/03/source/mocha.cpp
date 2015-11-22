#include "mocha.h"


Mocha::Mocha(Beverage *pBeve)
{
    pBeverage = pBeve;
    selfDesc = "Mocha";
}

Mocha::~Mocha()
{

}

string Mocha::GetDescription()
{
    return pBeverage->GetDescription() + ", " + selfDesc;
}

float Mocha::Cost()
{
    return pBeverage->Cost() + 0.20;
}

/* end of mocha.cpp */

