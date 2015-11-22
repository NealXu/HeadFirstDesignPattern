#ifndef _WHIP_H_
#define _WHIP_H_

#include "condiment_decorator.h"

/* condiment */
class Whip : public ICondiment
{
public:
    Whip(Beverage *pBeve);
    ~Whip();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
    Beverage *pBeverage;
};

#endif
/* end of whip.h */



