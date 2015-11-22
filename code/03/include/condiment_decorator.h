#ifndef _CONDIMENT_DECORATOR_H_
#define _CONDIMENT_DECORATOR_H_

#include "beverage.h"

class ICondiment : public Beverage
{
public:
    enum SIZE{SMALL = 0, NORMAL, LARGE};

public:
    ICondiment(){ size = NORMAL; }
    virtual ~ICondiment(){}

    virtual string GetDescription() = 0;
    virtual void SetSize(SIZE sz) { size = sz; }
    virtual enum SIZE GetSize() { return size; }
private:
    enum SIZE size;
};

#endif
/* end of condiment_decorator.h */

