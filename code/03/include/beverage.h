#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

using std::string;

class Beverage
{
public:
    Beverage();
    ~Beverage();

    virtual string GetDescription();
    virtual float Cost() = 0;

private:
    string selfDesc;
    
};

#endif
/* end of beverage.h */
