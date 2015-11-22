#ifndef _CONDIMENT_DECORATOR_H_
#define _CONDIMENT_DECORATOR_H_

#include "beverage.h"

class ICondiment : public Beverage
{
public:
    ICondiment(){}
    virtual ~ICondiment(){}

    virtual string GetDescription() = 0;
};

#endif
/* end of condiment_decorator.h */

