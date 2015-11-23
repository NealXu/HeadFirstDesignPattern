#ifndef _VEGGIES_H_
#define _VEGGIES_H_

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Veggies
{
public:
    Veggies()
    {
        descr = "Veggies";
    }
    ~Veggies() {}
    friend ostream & operator<< (ostream & os, const Veggies & d)
    {
        os << descr;
        return os;
    }
protected:
    string descr;
};

#endif
/* end of veggies.h */


