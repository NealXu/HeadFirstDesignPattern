#ifndef _MOCHA_H_
#define _MOCHA_H_

#include "condiment_decorator.h"

/* condiment */
class Mocha : public ICondiment
{
public:
    Mocha(Beverage *pBeve);
    ~Mocha();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
    Beverage *pBeverage;
};

#endif
/* end of mocha.h */
