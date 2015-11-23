#ifndef _CHEESE_H_
#define _CHEESE_H_

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Cheese
{
public:
    Cheese()
    {
        descr = "Cheese";
    }
    ~Cheese() {}
    friend ostream & operator<< (ostream & os, const Cheese & d)
    {
        os << descr;
        return os;
    }
protected:
    string descr;
};

#endif
/* end of cheese.h */


