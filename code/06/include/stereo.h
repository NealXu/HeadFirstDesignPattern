#ifndef _STEREO_H_
#define _STEREO_H_

#include <iostream>

using std::cout;
using std::endl;

class Stereo
{
public:
    void On()
    {
        cout << "Stereo is on" << endl;
    }
    void Off()
    {
        cout << "Stereo is off" << endl;
    }
    void SetCd()
    {
        cout << "Stereo set cd" << endl;
    }
    void SetDvd()
    {
        cout << "Stereo set dvd" << endl;
    }
    void SetRadio()
    {
        cout << "Stereo set radio" << endl;
    }
    void SetVolume()
    {
        cout << "Stereo set volume" << endl;
    }
};

#endif
/* end of stereo.h */

