#ifndef _HOUSE_BLEND_H_
#define _HOUSE_BLEND_H_

#include <beverage.h>

/* coffee */
class HouseBlend : public Beverage
{
public:
    HouseBlend();
    ~HouseBlend();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
};

#endif
/* end of house_blend.h */

