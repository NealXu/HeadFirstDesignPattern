#ifndef _MILK_H_
#define _MILK_H_

#include "condiment_decorator.h"

/* condiment */
class Milk : public ICondiment
{
public:
    Milk(Beverage *pBeve);
    ~Milk();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
    Beverage *pBeverage;
};

#endif
/* end of milk.h */

