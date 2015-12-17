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
        cout << "\t" << "Stereo is on" << endl;
    }
    void Off()
    {
        cout << "\t" << "Stereo is off" << endl;
    }
    void SetCd()
    {
        cout << "\t" << "Stereo set cd" << endl;
    }
    void SetDvd()
    {
        cout << "\t" << "Stereo set dvd" << endl;
    }
    void SetRadio()
    {
        cout << "\t" << "Stereo set radio" << endl;
    }
    void SetVolume()
    {
        cout << "\t" << "Stereo set volume" << endl;
    }
};

#endif
/* end of stereo.h */

