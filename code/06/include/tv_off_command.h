#ifndef _TV_OFF_COMMAND_H_
#define _TV_OFF_COMMAND_H_

#include "tv.h"
#include "command.h"

class TvOffCommand : public Command
{
public:
    TvOffCommand(Tv *pTv)
    {
        pTv = pTv;
    }
    ~TvOffCommand()
    {}

    virtual void Excute()
    {
        pTv->Off();
    }

    virtual void Undo()
    {
        pTv->On();
    }

private:
    Light *pTv;
};

#endif
/*end of tv_off_command.h */


