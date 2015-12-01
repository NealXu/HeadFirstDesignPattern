#ifndef _SIMPLE_REMOTE_CONTROLLER_H_
#define _SIMPLE_REMOTE_CONTROLLER_H_

#include "command.h"

class SimpleRemoteController
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
/* end of simple_remote_controller.h */
