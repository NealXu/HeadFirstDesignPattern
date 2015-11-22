#include <iostream>
//#include <string>

#include "espresso.h"
#include "house_blend.h"
#include "dark_roast.h"
#include "decat.h"

#include "mocha.h"
#include "milk.h"
#include "soy.h"
#include "whip.h"

using std::cout;
using std::endl;
//using std::string;

int main()
{

    Espresso espr;
    Beverage *pB1 = &espr;
    cout << pB1->GetDescription() << " $" << pB1->Cost() << endl;

    
    DarkRoast dr;
    Beverage *pB2 = &dr;
    Mocha m1(pB2);
    pB2 = &m1;
    Mocha m2(pB2);
    pB2 = &m2;
    Milk  mk(pB2);
    pB2 = &mk;
    
    cout << pB2->GetDescription() << " $" << pB2->Cost() << endl;

    
    HouseBlend hb;
    Beverage *pB3 = &hb;
    Soy s(pB3);
    s.SetSize(ICondiment::LARGE);
    pB3 = &s;
    Mocha m3(pB3);
    pB3 = &m3;
    Whip w(pB3);
    pB3 = &w;
    Milk mk1(pB3);
    pB3 = &mk1;
    
    cout << pB3->GetDescription() << " $" << pB3->Cost() << endl;

    return 0;
}
/* end of main.cpp */