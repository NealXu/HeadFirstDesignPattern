#include "light_on_command.h"
#include "light_off_command.h"
#include "remote_controller.h"

int main()
{
    Light light;
    LightOnCommand lightOnCmd(&light);
    LightOffCommand lightOffCmd(&light);

    RemoteController rc;
    rc.SetCommand(&lightOnCmd);
    rc.ButtonWasPressed();

    rc.SetCommand(&lightOffCmd);
    rc.ButtonWasPressed();
    
    return 0;
}