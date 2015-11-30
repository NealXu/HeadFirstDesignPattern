#ifndef _LIGHT_OFF_COMMAND_H_
#define _LIGHT_OFF_COMMAND_H_

#include "light.h"
#include "command.h"

class LightOffCommand : public Command
{
public:
    LightOffCommand(Light *pL)
    {
        pLight = pL;
    }
    ~LightOffCommand()
    {}

    virtual void Excute()
    {
        pLight->Off();
    }

private:
    Light *pLight;
};

#endif
/*end of light_off_command.h */
