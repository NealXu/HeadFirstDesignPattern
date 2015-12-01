#include "light_on_command.h"
#include "light_off_command.h"
#include "simple_remote_controller.h"
#include "stereo_on_with_cd.h"
#include "remote_controller.h"

int main()
{
    Light light;
    LightOnCommand lightOnCmd(&light);
    LightOffCommand lightOffCmd(&light);

    SimpleRemoteController src;
    src.SetCommand(&lightOnCmd);
    src.ButtonWasPressed();

    src.SetCommand(&lightOffCmd);
    src.ButtonWasPressed();

    Stereo stereo;
    StereoOnWithCdCommand steOnWithCd(&stereo);

    RemoteController rc;
    rc.SetCommand(0, &steOnWithCd, NULL);
    rc.OnButtonWasPushed(0);
    rc.OffButtonWasPushed(0);
    
    return 0;
}