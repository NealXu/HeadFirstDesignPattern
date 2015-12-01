#ifndef _STEREO_ON_WITH_CD_H_
#define _STEREO_ON_WITH_CD_H_

#include "command.h"
#include "stereo.h"

class StereoOnWithCdCommand : public Command
{
public:
    StereoOnWithCdCommand(Stereo *pSte)
    {
        pStereo = pSte;
    }
    ~StereoOnWithCdCommand()
    {}

    virtual void Excute()
    {
        pStereo->On();
        pStereo->SetCd();
    }

private:
    Stereo *pStereo;
};

#endif
/* end of stereo_on_with_cd.h */

