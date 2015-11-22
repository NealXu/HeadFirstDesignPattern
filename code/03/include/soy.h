#ifndef _SOY_H_
#define _SOY_H_

#include "condiment_decorator.h"

/* condiment */
class Soy : public ICondiment
{
public:
    Soy(Beverage *pBeve);
    ~Soy();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
    Beverage *pBeverage;
};

#endif
/* end of soy.h */


