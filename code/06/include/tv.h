#ifndef _TV_H_
#define _TV_H_

#include <iostream>

using std::cout;
using std::endl;

class Tv
{
public:
    void On()
    {
        cout << "\t" << "Tv is on" << endl;
    }
    void Off()
    {
        cout << "\t" << "Tv is off" << endl;
    }
};

#endif
/* end of tv.h */


