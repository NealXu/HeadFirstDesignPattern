#ifndef _TV_ON_COMMAND_H_
#define _TV_ON_COMMAND_H_

#include "tv.h"
#include "command.h"

class TvOnCommand : public Command
{
public:
    TvOnCommand(Tv *pTv)
    {
        pTv = pTv;
    }
    ~TvOnCommand()
    {}

    virtual void Excute()
    {
        pTv->On();
    }

    virtual void Undo()
    {
        pTv->Off();
    }

private:
    Tv *pTv;
};

#endif
/*end of tv_on_command.h */

