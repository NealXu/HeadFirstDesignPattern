#ifndef _REMOTE_CONTROLLER_H_
#define _REMOTE_CONTROLLER_H_

#include "command.h"

class RemoteController
{
public:
    void SetCommand(Command *pC)
    {
        pCmd = pC;
    }

    void ButtonWasPressed()
    {
        pCmd->Excute();
    }

private:
    Command * pCmd;
};

#endif
/* end of remote_controller.h */
