#ifndef _STEREO_ON__H_
#define _STEREO_ON__H_

#include "command.h"
#include "stereo.h"

class StereoOnCommand : public Command
{
public:
    StereoOnCommand(Stereo *pSte)
    {
        pStereo = pSte;
    }
    ~StereoOnCommand()
    {}

    virtual void Excute()
    {
        pStereo->On();
    }

    virtual void Undo()
    {
        pStereo->Off();
    }

private:
    Stereo *pStereo;
};

#endif
/* end of stereo_on_command.h */


