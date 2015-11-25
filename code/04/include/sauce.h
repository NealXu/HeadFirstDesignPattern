#ifndef _SAUCE_H_
#define _SAUCE_H_

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Sauce
{
public:
    Sauce()
    {
        descr = "Sauce";
    }
    ~Sauce() {}
    friend ostream & operator<< (ostream & os, const Sauce & d)
    {
        os << d.descr;
        return os;
    }
protected:
    string descr;
};

#endif
/* end of sauce.h */

