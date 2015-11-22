#include "dark_roast.h"


DarkRoast::DarkRoast()
{
    selfDesc = "DarkRoast";
}

DarkRoast::~DarkRoast()
{

}

string DarkRoast::GetDescription()
{
    return selfDesc;
}

float DarkRoast::Cost()
{
    return 0.99;
}

/* end of dark_roast.cpp */

