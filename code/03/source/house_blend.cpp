#include "house_blend.h"


HouseBlend::HouseBlend()
{
    selfDesc = "HouseBlend";
}

HouseBlend::~HouseBlend()
{

}

string HouseBlend::GetDescription()
{
    return selfDesc;
}

float HouseBlend::Cost()
{
    return 0.89;
}

/* end of house_blend.cpp */

