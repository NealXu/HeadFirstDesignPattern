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
        cout << "Light is on" << endl;
    }
    void Off()
    {
        cout << "Light is off" << endl;
    }
};

#endif
/* end of light.h */
