#include "light_on_command.h"
#include "light_off_command.h"
#include "stereo_on_command.h"
#include "stereo_off_command.h"
#include "tv_on_command.h"
#include "tv_off_command.h"
#include "hottub_on_command.h"
#include "hottub_off_command.h"
#include "stereo_on_with_cd.h"
#include "macro_command.h"
#include "simple_remote_controller.h"
#include "remote_controller.h"

int main()
{
    Light light;
    LightOnCommand lightOnCmd(&light);
    LightOffCommand lightOffCmd(&light);

    /* simple remote controller test */
    SimpleRemoteController src;
    src.SetCommand(&lightOnCmd);
    src.ButtonWasPressed();

    src.SetCommand(&lightOffCmd);
    src.ButtonWasPressed();

    /* remote controller test */
    Stereo stereo;
    StereoOnWithCdCommand stereoOnWithCd(&stereo);
    StereoOnCommand stereoOnCmd(&stereo);
    StereoOffCommand stereoOffCmd(&stereo);

    RemoteController rc;
    rc.SetCommand(0, &stereoOnWithCd, NULL);
    rc.OnButtonWasPushed(0);
    rc.UndoButtonWasPushed();
    rc.OffButtonWasPushed(0);

    rc.SetCommand(1, &lightOnCmd, &lightOffCmd);
    rc.OnButtonWasPushed(1);
    rc.UndoButtonWasPushed();
    rc.OnButtonWasPushed(1);
    rc.OffButtonWasPushed(1);
    rc.UndoButtonWasPushed();

    /* macro command test */
    Tv tv;
    TvOnCommand tvOnCmd(&tv);
    TvOffCommand tvOffCmd(&tv);

    Hottub hottub;
    HottubOnCommand hottubOnCmd(&hottub);
    HottubOffCommand hottubOffCmd(&hottub);

    Command * pCmds[] = {&lightOnCmd, &stereoOnCmd, &tvOnCmd, &hottubOnCmd};
    MacroCommand macroCmd(&pCmds[0], sizeof(pCmds)/sizeof(pCmds[0]));
    rc.SetCommand(2, &macroCmd, NULL);
    rc.OnButtonWasPushed(2);
    rc.UndoButtonWasPushed();
    
    return 0;
}