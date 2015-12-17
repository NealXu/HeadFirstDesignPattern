#ifndef _STEREO_OFF__H_
#define _STEREO_OFF__H_

#include "command.h"
#include "stereo.h"

class StereoOffCommand : public Command
{
public:
    StereoOffCommand(Stereo *pSte)
    {
        pStereo = pSte;
    }
    ~StereoOffCommand()
    {}

    virtual void Excute()
    {
        pStereo->Off();
    }

    virtual void Undo()
    {
        pStereo->On();
    }

private:
    Stereo *pStereo;
};

#endif
/* end of stereo_off_command.h */
