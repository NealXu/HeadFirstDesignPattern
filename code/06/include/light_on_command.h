#ifndef _LIGHT_ON_COMMAND_H_
#define _LIGHT_ON_COMMAND_H_

#include "light.h"
#include "command.h"

class LightOnCommand : public Command
{
public:
    LightOnCommand(Light *pL)
    {
        pLight = pL;
    }
    ~LightOnCommand()
    {}

    virtual void Excute()
    {
        pLight->On();
    }

private:
    Light *pLight;
};

#endif
/*end of light_on_command.h */
