#ifndef _HOTTUB_H_
#define _HOTTUB_H_

#include <iostream>

using std::cout;
using std::endl;

class Hottub
{
public:
    void On()
    {
        cout << "\t" << "Hottub is on" << endl;
    }
    void Off()
    {
        cout << "\t" << "Hottub is off" << endl;
    }
};

#endif
/* end of hottub.h */
