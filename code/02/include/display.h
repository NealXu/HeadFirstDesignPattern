#ifndef _DISPLAY_H_
#define _DISPLAY_H_

class IDisplay
{
public:
    IDisplay() {}
    virtual ~IDisplay() {}

    virtual void Display() = 0;

};



#endif
/* end of display.h */


