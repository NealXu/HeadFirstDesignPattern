#ifndef _DECAT_H_
#define _DECAT_H_

#include <beverage.h>

/* coffee */
class Decat : public Beverage
{
public:
    Decat();
    ~Decat();

    virtual string GetDescription();
    virtual float Cost();

private:
    string selfDesc;
};

#endif
/* end of decat.h */


