#ifndef _DARK_ROAST_H_
#define _DARK_ROAST_H_

#include <beverage.h>

/* coffee */
class DarkRoast : public Beverage
{
public:
    DarkRoast();
    ~DarkRoast();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
};

#endif
/* end of dark_roast.h */

