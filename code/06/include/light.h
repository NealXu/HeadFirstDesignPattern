#ifndef _LIGHT_H_
#define _LIGHT_H_

#include <iostream>

using std::cout;
using std::endl;

class Light
{
public:
    void On()
    {
        cout << "\t" <<"Light is on" << endl;
    }
    void Off()
    {
        cout << "\t" << "Light is off" << endl;
    }
};

#endif
/* end of light.h */
