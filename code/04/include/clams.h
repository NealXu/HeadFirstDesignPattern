#ifndef _CLAMS_H_
#define _CLAMS_H_

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Clams
{
public:
    Clams()
    {
        descr = "Clams";
    }
    ~Clams() {}
    friend ostream & operator<< (ostream & os, const Clams & d)
    {
        os << descr;
        return os;
    }
protected:
    string descr;
};

#endif
/* end of clams.h */

