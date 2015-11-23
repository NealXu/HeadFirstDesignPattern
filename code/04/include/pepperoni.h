#ifndef _PEPPERONI_H_
#define _PEPPERONI_H_

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Pepperoni
{
public:
    Pepperoni()
    {
        descr = "Pepperoni";
    }
    ~Pepperoni() {}
    friend ostream & operator<< (ostream & os, const Pepperoni & d)
    {
        os << descr;
        return os;
    }
protected:
    string descr;
};

#endif
/* end of pepperoni.h */


