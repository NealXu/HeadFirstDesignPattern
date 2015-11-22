#ifndef _ESPRESSO_H_
#define _ESPRESSO_H_

#include <beverage.h>

/* coffee */
class Espresso : public Beverage
{
public:
    Espresso();
    ~Espresso();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
};

#endif
/* end of espresso.h */
