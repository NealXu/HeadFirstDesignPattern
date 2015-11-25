#ifndef _DOUGH_H_
#define _DOUGH_H_

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Dough
{
public:
    Dough()
    {
        descr = "Dough";
    }
    ~Dough() {}
    friend ostream & operator<< (ostream & os, const Dough & d)
    {
        os << d.descr;
        return os;
    }
protected:
    string descr;
};

#endif
/* end of dough.h */