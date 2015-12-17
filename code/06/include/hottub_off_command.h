#ifndef _HOTTUB_OFF_COMMAND_H_
#define _HOTTUB_OFF_COMMAND_H_

#include "hottub.h"
#include "command.h"

class HottubOffCommand : public Command
{
public:
    HottubOffCommand(Hottub *pHt)
    {
        pHottub = pHt;
    }
    ~HottubOffCommand()
    {}

    virtual void Excute()
    {
        pHottub->Off();
    }

    virtual void Undo()
    {
        pHottub->On();
    }

private:
    Hottub *pHottub;
};

#endif
/*end of hottub_off_command.h */
