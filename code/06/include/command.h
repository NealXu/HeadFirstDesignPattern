#ifndef _COMMAND_H_
#define _COMMAND_H_

class Command
{
public:
    Command(){}
    virtual ~Command(){}

    virtual void Excute() = 0;
    virtual void Undo() = 0;
};

#endif
/* end of command.h */