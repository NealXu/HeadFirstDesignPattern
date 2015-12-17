#ifndef _HOTTUB_ON_COMMAND_H_
#define _HOTTUB_ON_COMMAND_H_

#include "hottub.h"
#include "command.h"

class HottubOnCommand : public Command
{
public:
    HottubOnCommand(Hottub *pHt)
    {
        pHottub = pHt;
    }
    ~HottubOnCommand()
    {}

    virtual void Excute()
    {
        pHottub->On();
    }

    virtual void Undo()
    {
        pHottub->Off();
    }

private:
    Hottub *pHottub;
};

#endif
/*end of hottub_on_command.h */

